{ZClipVisibility 0}

(define "body_vol"
	{Volume "%0"
		{tags "body"}
		{able {visible %1}}
	}
)

(define "roof_vol"
	{Volume "%0"
		{tags "roof"}
		{able {visible %1}}
	}
)

(define "declare_fire_volume"
	{Volume "fire%0"
		{able clear}
		{tags "fire"}
	}
	{Volume "smoke%0"
		{able clear}
		{tags "fire"}
	}
)

(define "declare_fire_volumes"
	{props "burning_old"}
	("declare_fire_volume" args 0)	("declare_fire_volume" args 1)
	("declare_fire_volume" args 2)	("declare_fire_volume" args 3)
	("declare_fire_volume" args 4)	("declare_fire_volume" args 5)
	("declare_fire_volume" args 6)	("declare_fire_volume" args 7)
	("declare_fire_volume" args 8)	("declare_fire_volume" args 9)
)

(define "windows_attach_place"		
            {boarder			
                    {link "%1" "attach%1"}			
                    {door "attach%1"}		
            }	
)

(define "armor_construction"
	("bitgamer")
	{armor
		{setting "body"
			{threshold {pierce {koef 0.2}}}
			{ray_cast_thickness}
			{volumes "body*"}
			{volumes "box*"}
			{volumes "wire*"}
			{volumes "wires*"}
			{volumes "floor*"}
			{volumes "wood*"}
			{volumes "door*"}
		}
		{setting "roof"
			{threshold {pierce {koef 0.2}}}
			{ray_cast_thickness}
			{volumes "roof*"}
			{volumes "floor*"}
		}
	}
)
(define "blast_protection"
	{armor
		{setting "body"
			{threshold {blast {value %dmg}}}
		}
		{setting "roof"
			{threshold {blast {value %dmg}}}
		}
	}
)

(define "frag_grenade_protection"
	("blast_protection" dmg(6))
)
(define "armor_fragile" ; Grenade can blow them up
	("armor_construction")
	{armor
		{setting "body"
			{threshold
				{pierce {calibre 10}}
				{blast {value 2}}
			}
		}
		{setting "roof"
			{threshold
				{pierce {calibre 10}}
				{blast {value 2}}
			}
		}
	}
)
(define "armor_light"
	("armor_construction")
	{armor
		{setting "body"
			{threshold
				{pierce {calibre 37}}
				{blast {value 5}}
			}
		}
		{setting "roof"
			{threshold
				{pierce {calibre 37}}
				{blast {value 5}}
			}
		}
	}
)
(define "armor_medium" ; 57mm HE will break
	("armor_construction")
	{armor
		{setting "body"
			{threshold
				{pierce {calibre 57}}
				{blast {value 8}}
			}
		}
		{setting "roof"
			{threshold
				{pierce {calibre 57}}
				{blast {value 7}}
			}
		}
	}
)


(define "armor_75mm" ; 75mm HE will break
	("armor_construction")
	{armor
		{setting "body"
			{threshold
				{pierce {calibre 75}}
				{blast {value 11}}
			}
		}
		{setting "roof"
			{threshold
				{pierce {calibre 75}}
				{blast {value 10}}
			}
		}
	}
)
(define "armor_heavy"
	("armor_construction")
	{armor
		{setting "body"
			{threshold
				{pierce {calibre 85}}
				{blast {value 22}}
			}
		}
		{setting "roof"
			{threshold
				{pierce {calibre 85}}
				{blast {value 24}}
			}
		}
	}
)
(define "armor_pillbox"
	("armor_construction")
	{armor
		{setting "body"
			{threshold
				{pierce {calibre 85}}
				{blast {value 35}}
			}
		}
		{setting "roof"
			{threshold 
				{pierce {calibre 85}}
				{blast {value 34}}
			}
		}
	}
)
(define "armor_bunker_medium"
	("armor_construction")
	{armor
		{setting "body"
			{threshold
				{pierce {calibre 85}}
				{blast {value 35}}
			}
		}
		{setting "roof"
			{threshold
				{pierce {calibre 85}}
				{blast {value 34}}
			}
		}
	}
)
(define "armor_sandbag_woodbeam"
	("armor_construction")
	{armor
		{setting "body"
			{threshold
				{pierce {calibre 10}}
				{blast {value 5}}
			}
		}
		{setting "roof"
			{threshold
				{pierce {calibre 10}}
				{blast {value 5}}
			}
		}
	}
)

(define "armor_adjustable"
	{armor
		{setting "body"
			{threshold
				{blast 
					{value %thresh_fg}
				}
				{pierce
					{value %thresh_ap}
					{calibre %calibre}
				}
			}
			{volumes "body*"}
			{volumes "box*"}
			{volumes "wire*"}
			{volumes "wires*"}
			{volumes "wood*"}
			{volumes "door*"}
		}
		{setting "roof"
			{threshold {blast {value 5}}}
			{volumes "roof*"}
			{volumes "floor*"}
		}
	}
)

(define "armor_house_wood"
	("armor_light")
)
(define "armor_house_wood_heavy"
	("armor_light")
)
(define "armor_house_concrete_light"
	("armor_medium")
)
(define "armor_house_concrete"
	("armor_medium")
)

(define "armor_house_concrete_light"
	("armor_medium")
)

(define "armor_house_wood_heavy"
	("armor_light")
)

(define "armor_hedgehog_big"
	("armor_adjustable" thresh_fg(30) thresh_ap(100) calibre(85))
)
(define "armor_hedgehog"
	("armor_adjustable" thresh_fg(35) thresh_ap(80) calibre(57)) ; 35fg = 105mm HE and up
)

(define "armor_dragontooth"
	("armor_adjustable" thresh_fg(35) thresh_ap(60) calibre(37))
)

(define "armor_fabric"
	("armor_adjustable" thresh_fg(5) thresh_ap(10) calibre(12))
)

(define "armor_stack"
	("armor_adjustable" thresh_fg(5) thresh_ap(10) calibre(12))
)

(define "armor_glass"
	("armor_adjustable" thresh_fg(5) thresh_ap(10) calibre(0))
)

(define "armor_sandbag"
	("armor_adjustable" thresh_fg(5) thresh_ap(10) calibre(30))
)
(define "armor_sandbag_woodbeam"
	("armor_adjustable" thresh_fg(5) thresh_ap(10) calibre(0))
)

(define "armor_post"
	("armor_construction")
	("armor_use_volume_thickness")
	{armor
		{setting "body"
			{threshold
				{blast {value 5}}
			}
		}
	}
)

(define "armor_wires"
	("armor_light")
)

(define "armor_fence_wood"
	("armor_construction")
	("armor_use_volume_thickness")
	{armor
		{setting "body"
			{threshold
				{pierce {calibre 5}}
				{blast {value 4.75}}
			}
		}
		{setting "roof"
			{threshold
				{pierce {calibre 5}}
				{blast {value 4.75}}
			}
		}
	}
)

(define "armor_fabric"
	("armor_fence_wood")
)

(define "armor_use_volume_thickness"
	{armor
		{setting "body"
			{ray_cast_thickness 0}
		}
		{setting "roof"
			{ray_cast_thickness 0}
		}
	}
)

(define "armor_disable_damage_acc"
	{armor
		{setting "body"
			{disable_damage_acc}
		}
		{setting "roof"
			{disable_damage_acc}
		}
	}
)

(define "windows_attach_place"		
            {boarder			
                    {link "%1" "attach%1"}			
                    {door "attach%1"}		
            }	
)
	
(define "bitgamer"		
         ("windows_attach_place" args(0))		("windows_attach_place" args(1))		("windows_attach_place" args(2))		              ("windows_attach_place" args(3))		("windows_attach_place" args(4))		("windows_attach_place" args(5))		              ("windows_attach_place" args(6))		("windows_attach_place" args(7))		("windows_attach_place" args(8))		              ("windows_attach_place" args(9))		("windows_attach_place" args(10))		("windows_attach_place" args(11))		              ("windows_attach_place" args(12))		("windows_attach_place" args(13))		("windows_attach_place" args(14))		              ("windows_attach_place" args(15))		("windows_attach_place" args(16))		("windows_attach_place" args(17))		              ("windows_attach_place" args(18))		("windows_attach_place" args(19))		("windows_attach_place" args(20))	
)

(include "texmod.inc")

("armor_medium")
