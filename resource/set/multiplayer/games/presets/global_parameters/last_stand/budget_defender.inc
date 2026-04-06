{budgets
	{vehicle
		{mode "standard"}
		{resource
			{start		%s}
			{finish		%f}
			{growTime	2400}		; in seconds
			{growTable	"0.80 0.80 0.80 0.80 0.80 0.80 0.80 0.80 0.80 0.80 0.80 0.80 0.80 0.80 0.80 0.80 0.80 0.80 0.80 0.80"}
			{payback
				{cp			"0		80		95		110		125		200	"} ; source code only supports 6 values
				{restore	"1.00	0.8		0.6		0.4		0.25	0.10"}
			}
		}
		{buttons "squad single supply support art lt mt ht td"}
	}
	{hero
		{resource
			{start %d}
		}
		{buttons "doctrine"}
		{tag "special"}
	}
}