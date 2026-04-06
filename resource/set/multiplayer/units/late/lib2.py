from lark import Lark, Token, Tree
from lark.reconstruct import Reconstructor

grammar = r"""
    start: (node)*
    
    node: builtin | function | value | args | _COMMENT
    
    args: LITERAL "(" value ")"
    
    builtin: "{" LITERAL node* "}"
    function: "(" STRING node* ")"
    
    ?value: LITERAL | STRING | NUMBER
    
    LITERAL: /[a-zA-Z_][a-zA-Z0-9_]*/
    STRING: /"[^"]*"/
    NUMBER: /-?[0-9]+(\.[0-9]+)?/
    _WHITESPACE: /[ \t\f\r\n]+/
    _COMMENT: /;[^\n]*\n+/
    
    %ignore _WHITESPACE
    """

parser = Lark(grammar, 
              parser='earley', 
              lexer='basic',
              keep_all_tokens=True,
              maybe_placeholders=False)

test_input = """("squad_with2types"
    {tags "limit2"} ; asd
    ("vehicle" period(late) cd(0) cost(50)) ;another comment
)"""

def add_parent_refs(tree, parent=None):
    if isinstance(tree, Tree):
        tree.parent = parent
        for child in tree.children:
            add_parent_refs(child, tree)
    return tree

def pp(tree, indent="", last=True):
    """
    Custom pretty printer that shows whitespace using symbols:
    · for space
    → for tab
    ↵ for newline
    """
    result = indent
    if last:
        result += "└─"
        indent += "  "
    else:
        result += "├─"
        indent += "│ "

    if isinstance(tree, Token):
        if tree.type == '_WHITESPACE':
            # Convert whitespace to visible characters
            visible = tree.value.replace(' ', '·')\
                               .replace('\t', '→')\
                               .replace('\n', '↵\n' + indent)
            result += f"Token({tree.type}, '{visible}')"
        else:
            result += f"Token({tree.type}, {repr(tree.value)})"
    else:
        result += tree.data
        
    print(result)
    
    if isinstance(tree, Tree):
        for i, child in enumerate(tree.children):
            last_child = i == len(tree.children) - 1
            pp(child, indent, last_child)
            
            
from lark import Transformer

class Formatter(Transformer):
    def __init__(self):
        super().__init__()
        self.indent = 0
        
    def start(self, items):
        return '\n'.join(str(item) for item in items if item)
    
    def node(self, items):
        return str(items[0]) if items else ''
        
    def builtin(self, items):
        return f"{{{items[0]} {' '.join(str(x) for x in items[1:] if x)}}}"
    
    def function(self, items):
        self.indent += 4
        inner = ' '.join(str(x) for x in items[1:] if x)
        if len(inner) > 50:  # line break if too long
            inner = '\n' + ' ' * self.indent + ' '.join(str(x) for x in items[1:] if x)
        self.indent -= 4
        return f"({items[0]}{inner})"
        
    def args(self, items):
        return f"{items[0]}({items[1]})"
        
    def STRING(self, s):
        return str(s)
        
    def LITERAL(self, s):
        return str(s)
        
    def NUMBER(self, n):
        return str(n)
        
    def _COMMENT(self, c):
        return ' ' + str(c)
        
        
def pretty_print(text):
    lines = text.split('\n')
    result = []
    indent = 0
    
    for line in lines:
        stripped = line.strip()
        
        # Decrease indent for closing braces/parentheses at start of line
        if stripped and stripped[0] in ')}':
            indent -= 4
            
        # Add the line with current indentation
        if stripped:  # Only indent non-empty lines
            result.append(' ' * indent + stripped)
        else:
            result.append('')
            
        # Increase indent for opening braces/parentheses
        if stripped and stripped[-1] in '({':
            indent += 4
    
    return '\n'.join(result)


# Parse
tree = parser.parse(test_input)
tree = add_parent_refs(tree)

def increase_cost(tree):
    """Find cost nodes and increase value by 100 and add ws(1)"""
    if isinstance(tree, Tree):
        if tree.data == 'args':
            if tree.children[0].value == 'cost':
                print("HIT")
                # Increase cost value
                current_value = int(float(tree.children[2].value))
                tree.children[2] = Token('NUMBER', str(current_value + 100))

        # Recursively process all children
        for tree in tree.children:
            increase_cost(tree)

# Print initial tree structure
print("Tree structure:")
pp(tree)

# Modify and reconstruct
print("Original tree:")
print(test_input)
print("\nModifying tree...")
increase_cost(tree)
reconstructor = Reconstructor(parser)
modified_output = reconstructor.reconstruct(tree)
pretty_output = pretty_print(modified_output)

print("\nModified output:")
print(pretty_output)