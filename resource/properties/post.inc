game_entity
	{volume "post"
		{thickness 3}
		{able {visible 0}}
	}
	{volume "body"
		{Tags "body"}
		{thickness 4}
		{able {visible 0}}
	}
	{volume "lamp1"
		{thickness 1}
		{able {visible 0}{Obstacle 0}}
		{tags "lamp"}
	}
	{simulatorId "pillar"}
	{collider "tree"}
	{obstacleID "post"}
	{mass 200}
	{props "post" "slow_on_crush"}
	(include "seasons.inc")
	(include "construction_generic.inc")
	(include "light.inc")
	("armor_post")
	{lodclass "decor_big"}
