from lark import Lark, Token, Tree
from lark.reconstruct import Reconstructor

grammar = r"""
    start: (_WHITESPACE | _COMMENT | node)*
    
    node: builtin | function | value | args | _COMMENT | _WHITESPACE?
    
    args: LITERAL _WHITESPACE? "(" value _WHITESPACE? ")"
    
    builtin: "{" _WHITESPACE? value _WHITESPACE? node* _WHITESPACE? "}"
    function: "(" _WHITESPACE? value _WHITESPACE? node* _WHITESPACE? ")"
    
    ?value: LITERAL | STRING | NUMBER
    
    LITERAL: /[a-zA-Z_][a-zA-Z0-9_]*/
    STRING: /"[^"]*"/
    NUMBER: /-?(0x[0-9a-fA-F]+|[0-9]+(\.[0-9]+)?)/
    _WHITESPACE: /[ \t\f\r\n]+/
    _COMMENT: /;[^\n]*/
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
print("\nModified output:")
print(modified_output)