{collider "construction"}
{obstacleID "construction"}

{props "concrete" "cornered" "parts" "stone" "construction" "no_destroyed_stamp"}


{Volume "body1"
	{tags "body"}
}
{Volume "body2"
	{tags "body"}
}
{Volume "body3"
	{tags "body"}
}
{Volume "body4"
	{tags "body"}
}
{Volume "body5"
	{tags "body"}
}
{Volume "body6"
	{tags "body"}
}
{Volume "body7"
	{tags "body"}
}
{Volume "body8"
	{tags "body"}
}
{Volume "body9"
	{tags "body"}
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

{lodclass "decor_medium"}
