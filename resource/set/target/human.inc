{selector
	{unit "human"}	;// "unit tag" or "unit type" + "current main weapon tag"

	{group
		{sort {in_range 30}} 
		{sort distance}
		
		{sort {class car}}
		{sort {class armoredcar}}
		{sort {class armoredcar_l}}
		{sort {class tank_light}}
		{sort {class tank_medium}}
		{sort {class tank_heavy}}
		
		
		{sort {class tank_bullet}}
		{sort {class car_bullet}}
		
					
		{sort {attacking}}
		{sort {class human} {weapon "bullet"}}
		{sort {class human} {weapon}}		
		{sort {weapon}}
		{sort {class human}}
	}
	{group
		{sort distance}
	}
}