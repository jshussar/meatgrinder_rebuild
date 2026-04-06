;SDL

{State "snipe"
	{tag "snipe"}
	{tag "idle"}
	{tag "idle-prepare"}
	{tag "rotate"}
	{tag "stop-rotate"}
	{tag "stop-move"}
	{tag "stop-hold-back"}
	{tag "hold-item"}
	{tag "hold-nothing"}
	{tag "stored"}
}
{State "snipe_switch"
	{from "snipe"}
	{to "snipe"}
	{tag "up"}
	{tag "switch-weapon"}
}
{State "snipe_holdback_in"
	{from "snipe"}
	{to "snipe_holdback_out"}
	{tag "snipe"}
	{tag "weapon"}
	{tag "hold-back"}
	{tag "rotate"}
	{tag "stop-rotate"}
}
{State "snipe_holdback_out"
	{to "snipe"}
	{tag "snipe"}
	{tag "weapon"}
}
{State "snipe_aim_prepare"
	{from "snipe"}
	{to "snipe_aim"}
	{tag "weapon"}
	{tag "snipe"}
}
{State "snipe_aim"
	{to "snipe_fire"}
	{to "snipe"}
	{tag "weapon"}
	{tag "snipe"}
	{tag "aim"}
	{tag "aim-thrower"}
	{tag "aim-bazooka"}
	{tag "aim-rgrenade"}
	{tag "aim-mortar"}
	{tag "can-aim"}
	{tag "can-aim-bolt"}
	{tag "can-aim-thrower"}
	{tag "can-aim-bazooka"}
	{tag "can-aim-rgrenade"}
	{tag "can-aim-mortar"}
}
{State "snipe_fire"
   	{to "snipe_recoil"}
	{tag "snipe"}
	{tag "fire"}
	{tag "fire-bazooka"}
	{tag "fire-rgrenade"}
	{tag "fire-mortar"}
	{tag "weapon"}
}
{State "snipe_recoil"
	{split "snipe_aim" "recoil"}
	{transit "snipe_bolt"}
	{tag "snipe"}
	{tag "weapon"}
	{tag "recoil"}
}
{State "snipe_bolt"
	{split "snipe_bolt" "bolt"}
	{transit "snipe"}
	{tag "up"}
	{tag "weapon"}
	{tag "no-fire"}
}
{State "snipe_throw_begin"
	{from "snipe"}
  	{transit "snipe_throw_end"}
	{tag "throw"}
	{tag "snipe"}
}
{State "snipe_throw_end"
  	{transit "snipe"}
	{tag "snipe"}
}
{State "snipe_to_squat"
	{from "snipe"}
	{transit "squat"}
	{tag "squat"}
}
{State "snipe_from_squat"
	{condition "snipe"}
	{from "squat"}
	{transit "snipe"}
	{tag "snipe"}
}
{State "snipe_to_stand"
	{condition "move"}
	{condition "rush-ahead"}
	{condition "rush-back" }
	{condition "rush-left" }
	{condition "rush-right"}
	{from "snipe"}
	{transit "stand"}
	{tag "up"}
}
{State "snipe_to_stand_with_item" ; to enable item ops in snipe cover
	{from "snipe"}
	{transit "stand"}
	{tag "up"}
	{tag "open-with-item"}
}
{State "snipe_from_stand"
	{condition "snipe"}
	{from "stand"}
	{transit "snipe"}
	{tag "snipe"}
}
