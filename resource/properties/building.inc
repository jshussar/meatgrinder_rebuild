game_entity
	{collider "construction"}
	{obstacleID "building"}
	{volume "body"
		{thickness 5}
		{tags "body"}
	}
	{volume "body1"
		{thickness 5}
		{tags "body"}
	}
	{mass 3000}
	{props "slow_on_crush" "burning"}
	(include "construction_generic.inc")
	{lodclass "decor_building"}
	;{extender "edifice"} ; -25-30fps