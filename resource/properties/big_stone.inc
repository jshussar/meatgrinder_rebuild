{collider "nothing"}
{obstacleID "unbreakable"}

{props "concrete" "stone"}

{Volume "rock"
	{thickness 1000}
}
{Volume "body"
	{thickness 1000}
}

;/*=============== New Blocks Begin ===============*/

;{props "cornered" "parts" "construction" "no_destroyed_stamp"}

{Volume "body1"
	{tags "body"}
	{thickness 1000}
}

{armor
	{setting "body"
		{threshold {pierce {calibre 12}}}
		{ray_cast_thickness}
		{volumes "body*"}
		{threshold
			{blast {koef 1}}
		}
	}
}

{lodclass "huge"}

;/*=============== New Blocks End ===============*/