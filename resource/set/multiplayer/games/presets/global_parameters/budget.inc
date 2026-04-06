{budgets
	{vehicle
		{mode "standard"}
		{resource
			{start		%s}
			{finish		%f}
			{growTime	2400}		; in seconds
			{growTable 	"0.65 0.65 0.65 0.70 0.70 0.70 0.75 0.75 0.75 0.80 0.80 0.80 0.80 0.80 0.80 0.85 0.85 0.85 0.90 0.90 0.90 0.90 0.90 0.90 1.00"}
			{payback
				{cp			"0		25		50		80		90		100	"} ; source code only supports 6 values
				{restore	"1.50	1.25	0.75	0.5		0.4 	0.2"}
			}
		}
		{buttons "squad single supply support art lt mt ht td"}
	}
	{hero
		{resource
			{start 20}
		}
		{buttons "sp"}
		{tag "special"}
	}
}