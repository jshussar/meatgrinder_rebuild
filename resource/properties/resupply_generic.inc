(define "supply_tent"
	{extender "supply_zone"
		{resupply
			{item "drob" "ammo" 5 {max 30}}
			{item "22_cal" "ca" "ammo" 5 {max 20}}
			{item "30_cal" "ca" "ammo" 5 {max 20}}
			{item "32_cal" "ca" "ammo" 5 {max 20}}
			{item "36_cal" "ca" "ammo" 5 {max 20}}
			{item "40_cal" "ca" "ammo" 5 {max 20}}
			{item "44_cal" "ca" "ammo" 5 {max 20}}
			{item "52_cal" "ca" "ammo" 5 {max 20}}
			{item "54_cal" "ca" "ammo" 5 {max 20}}
			{item "56_cal" "ca" "ammo" 5 {max 20}}
			{item "58_cal" "mb" "ammo" 5 {max 30}}
			{item "59_cal" "mb" "ammo" 5 {max 30}}
			{item "69_cal" "mb" "ammo" 5 {max 30}}
			{item "cart_and_tnt" "ammo" 5 {max 30}}
			{item "11-6mm_cal" "ammo" 5 {max 20}}
			{item "10-75mm_cal" "ammo" 5 {max 20}}
			{item "577-450_cal" "pb" "ammo" 5 {max 20}}
			{item "buffalo_cal" "pb" "ammo" 5 {max 20}}
			{item "pistol" "ammo" 6 {max 5}}
			{item "mortir" "ammo" 1 {max 1}}
			{item "crossbow_bolt" "ammo" 5 {max 30}}
			{item "bow_arrow" "ammo" 5 {max 30}}

		}
		{radius 			6}
		{resupplyPeriod 	5}
		{regenerationPeriod 99999999}
		{limit 				10}
	}
	{DecalView supply_zone
		{Sprite "supply_zone.ebm"
			{Visibility 0.3}
		}
		{Layer grounddynamic}
		{Visible 0}
	}
)



(define "supply_art_bunker"
	{extender "supply_zone"
		{resupply
			{item "bullet3" "fg" "ammo" 1 {max 5}}
			{item "bullet3" "fa" "ammo" 1 {max 5}}
			{item "bullet3" "fo" "ammo" 1 {max 5}}
			{item "bullet75" "fo" "ammo" 1 {max 5}}
			{item "bullet75" "fg" "ammo" 1 {max 5}}
			{item "bullet75" "fa" "ammo" 1 {max 5}}
			{item "bullet75" "fl" "ammo" 1 {max 5}}
			{item "bullet75" "sh" "ammo" 1 {max 3}}
			{item "bullet152" "fg" "ammo" 1 {max 5}}
			{item "bullet152" "fo" "ammo" 1 {max 5}}
			{item "bullet152" "sh" "ammo" 1 {max 3}}
			{item "bullet24p" "fg" "ammo" 1 {max 5}}
			{item "bullet24p" "fo" "ammo" 1 {max 5}}
			{item "mortir" "ammo" 2 {max 5}}
			{item "congreev_rocket_ammo" "sh" "ammo" 1 {max 10}}
			{item "congreev_rocket_ammo" "fa" "ammo" 1 {max 10}}
			{item "congreev_rocket_ammo" "fg" "ammo" 1 {max 10}}
			{item "armstrong_bullet3p" "fg" "ammo" 1 {max 5}}
			{item "armstrong_bullet3p" "fo" "ammo" 1 {max 5}}
			{item "armstrong_bullet12p" "fo" "ammo" 1 {max 5}}
			{item "armstrong_bullet12p" "fg" "ammo" 1 {max 5}}
			{item "armstrong_bullet12p" "sh" "ammo" 1 {max 3}}
			{item "armstrong_bullet20p" "fo" "ammo" 1 {max 5}}
			{item "armstrong_bullet20p" "fg" "ammo" 1 {max 5}}
			{item "armstrong_bullet20p" "sh" "ammo" 1 {max 3}}
			{item "cart_and_tnt" "ammo" 5 {max 100}}
			{item "parrot_bullet10p" "fg" "ammo" 1 {max 5}}
			{item "parrot_bullet10p" "fo" "ammo" 1 {max 5}}
			{item "parrot_bullet20p" "fg" "ammo" 1 {max 5}}
			{item "parrot_bullet20p" "fo" "ammo" 1 {max 5}}
			{item "parrot_bullet30p" "fg" "ammo" 1 {max 5}}
			{item "parrot_bullet30p" "fo" "ammo" 1 {max 5}}
			{item "krupp_bullet12p" "fo" "ammo" 1 {max 5}}
			{item "krupp_bullet12p" "fg" "ammo" 1 {max 5}}
			{item "krupp_bullet12p" "sh" "ammo" 1 {max 3}}
			{item "krupp_bullet20p" "fo" "ammo" 1 {max 5}}
			{item "krupp_bullet20p" "fg" "ammo" 1 {max 5}}
			{item "krupp_bullet20p" "sh" "ammo" 1 {max 3}}
			{item "shell_m1867_87mm" "sh" "ammo" 1 {max 3}}
			{item "shell_m1867_87mm" "fg" "ammo" 1 {max 5}}
			{item "shell_m1867_87mm" "fo" "ammo" 1 {max 5}}
			{item "shell_m1867_107mm" "sh" "ammo" 1 {max 3}}
			{item "shell_m1867_107mm" "fg" "ammo" 1 {max 5}}
			{item "shell_m1867_107mm" "fo" "ammo" 1 {max 5}}
		}
		{radius 			15}
		{resupplyPeriod 	10}
		{regenerationPeriod 99999}
		{limit 				60}
	}
	{DecalView supply_zone
		{Sprite "supply_zone.ebm"
			{Visibility 0.3}
		}
		{Layer grounddynamic}
		{Visible 0}
	}
)




























(define "para_ammo"
	{extender "supply_zone"
		{resupply
			{item "rifle" "ammo" 25 {max 100}}
			{item "pistol" "ammo" 100 {max 400}}
			{item "mgun" "ammo" 100	{max 600}}
			{item "bandage"	1 {max 3}}
			{item "ptr" "ammo" 5 {max 10}}
			{item "bazooka" "ammo" 1 {max 3}}
			{item "panzershreck" "ammo" 1 {max 3}}
			{item "m18recoilless" "ammo" 1 {max 3}}
			{item "piatrocket" "ammo" 1	{max 3}}
			{item "type_4" "ammo" 1	{max 3}}
			{item "rifle_grenade" "ammo" 2 {max 5}}
			{item "rifle_grenade_at" "ammo" 2 {max 5}}
			{item "shotgun" "ammo" 3 {max 20}}
			{item "mortar" "fg" "ammo" 3 {max 30}{value 2}}
			{item "hmgun" "ammo" 30 {max 300}{value 2}}
		}
		{radius 			6}		;resupply radius in meter
		{resupplyPeriod 	5}		;resupply period in seconds
		{regenerationPeriod 0}		;regeneration period in seconds, +1 supply every x seconds (0 = no regeneration)
		{limit 				75}		;max number of resupplies (0 = unlimited)
	}
	{DecalView supply_zone
		{Sprite "supply_zone.ebm"
			{Visibility 0.3}
		}
		{Layer grounddynamic}
		{Visible 0}
	}
)

(define "truck_ammo"
	{extender "supply_zone"
		{resupply
			{item "rifle" "ammo" 25 {max 150}}
			{item "pistol" "ammo" 100 {max 600}}
			{item "mgun" "ammo" 100	{max 800}}
			{item "bandage"	1 {max 3}}
			{item "ptr" "ammo" 5 {max 25}}
			{item "bazooka" "ammo" 1 {max 5}}
			{item "panzershreck" "ammo" 1 {max 5}}
			{item "m18recoilless" "ammo" 1 {max 5}}
			{item "piatrocket" "ammo" 1 {max 5}}
			{item "type_4" "ammo" 1 {max 5}}
			{item "rifle_grenade" "ammo" 2 {max 10}}
			{item "rifle_grenade_at" "ammo" 2 {max 10}}
			{item "shotgun" "ammo" 5 {max 30}}
			{item "mortar" "fg" "ammo" 5 {max 30}{value 2}}
			{item "hmgun" "ammo" 50 {max 300}{value 2}}
		}
		{radius 			10}
		{resupplyPeriod 	5}
		{regenerationPeriod 30}
		{limit 				150}
	}
	{DecalView supply_zone
		{Sprite "supply_zone.ebm"
			{Visibility 0.3}
		}
		{Layer grounddynamic}
		{Visible 0}
	}
)
(define "wagon_ammo_ordinary"
	{extender "supply_zone"
		{resupply
			{item "bullet3" "fg" "ammo" 1 {max 5}}
			{item "bullet3" "fa" "ammo" 1 {max 5}}
			{item "bullet3" "fo" "ammo" 1 {max 5}}
			{item "bullet75" "fo" "ammo" 1 {max 5}}
			{item "bullet75" "fg" "ammo" 1 {max 5}}
			{item "bullet75" "fa" "ammo" 1 {max 5}}
			{item "bullet75" "fl" "ammo" 1 {max 5}}
			{item "bullet75" "sh" "ammo" 1 {max 3}}
			{item "bullet152" "fg" "ammo" 1 {max 5}}
			{item "bullet152" "fo" "ammo" 1 {max 5}}
			{item "bullet152" "sh" "ammo" 1 {max 3}}
			{item "bullet24p" "fg" "ammo" 1 {max 5}}
			{item "bullet24p" "fo" "ammo" 1 {max 5}}
			{item "mortir" "ammo" 2 {max 5}}
			{item "congreev_rocket_ammo" "sh" "ammo" 1 {max 10}}
			{item "congreev_rocket_ammo" "fa" "ammo" 1 {max 10}}
			{item "congreev_rocket_ammo" "fg" "ammo" 1 {max 10}}
			{item "krupp_bullet12p" "fo" "ammo" 1 {max 5}}
			{item "krupp_bullet12p" "fg" "ammo" 1 {max 5}}
			{item "krupp_bullet12p" "sh" "ammo" 1 {max 3}}
			{item "krupp_bullet20p" "fo" "ammo" 1 {max 5}}
			{item "krupp_bullet20p" "fg" "ammo" 1 {max 5}}
			{item "krupp_bullet20p" "sh" "ammo" 1 {max 3}}
			{item "shell_m1867_87mm" "sh" "ammo" 1 {max 3}}
			{item "shell_m1867_87mm" "fg" "ammo" 1 {max 5}}
			{item "shell_m1867_87mm" "fo" "ammo" 1 {max 5}}
			{item "shell_m1867_107mm" "sh" "ammo" 1 {max 3}}
			{item "shell_m1867_107mm" "fg" "ammo" 1 {max 5}}
			{item "shell_m1867_107mm" "fo" "ammo" 1 {max 5}}
		}
		{radius 			15}
		{resupplyPeriod 	10}
		{regenerationPeriod 99999}
		{limit 				200}
	}
	{DecalView supply_zone
		{Sprite "supply_zone.ebm"
			{Visibility 0.3}
		}
		{Layer grounddynamic}
		{Visible 0}
	}
)





(define "wagon_ammo_armstrong"
	{extender "supply_zone"
		{resupply
			{item "bullet3" "fo" "ammo" 1 {max 5}}
			{item "bullet75" "fo" "ammo" 1 {max 5}}
			{item "bullet152" "fo" "ammo" 1 {max 5}}
			{item "armstrong_bullet3p" "fg" "ammo" 1 {max 5}}
			{item "armstrong_bullet3p" "fo" "ammo" 1 {max 5}}
			{item "armstrong_bullet12p" "fo" "ammo" 1 {max 5}}
			{item "armstrong_bullet12p" "fg" "ammo" 1 {max 5}}
			{item "armstrong_bullet12p" "sh" "ammo" 1 {max 3}}
			{item "armstrong_bullet20p" "fo" "ammo" 1 {max 5}}
			{item "armstrong_bullet20p" "fg" "ammo" 1 {max 5}}
			{item "armstrong_bullet20p" "sh" "ammo" 1 {max 3}}
			{item "congreev_rocket_ammo" "sh" "ammo" 1 {max 10}}
			{item "congreev_rocket_ammo" "fa" "ammo" 1 {max 10}}
			{item "congreev_rocket_ammo" "fg" "ammo" 1 {max 10}}
		}
		{radius 			15}
		{resupplyPeriod 	10}
		{regenerationPeriod 99999}
		{limit 				150}
	}
	{DecalView supply_zone
		{Sprite "supply_zone.ebm"
			{Visibility 0.3}
		}
		{Layer grounddynamic}
		{Visible 0}
	}
)

(define "wagon_ammo_parrott"
	{extender "supply_zone"
		{resupply
			{item "bullet3" "fo" "ammo" 1 {max 5}}
			{item "bullet75" "fo" "ammo" 1 {max 5}}
			{item "bullet152" "fo" "ammo" 1 {max 5}}
			{item "parrot_bullet10p" "fg" "ammo" 1 {max 5}}
			{item "parrot_bullet10p" "fo" "ammo" 1 {max 5}}
			{item "parrot_bullet20p" "fg" "ammo" 1 {max 5}}
			{item "parrot_bullet20p" "fo" "ammo" 1 {max 5}}
			{item "parrot_bullet30p" "fg" "ammo" 1 {max 5}}
			{item "parrot_bullet30p" "fo" "ammo" 1 {max 5}}
			{item "congreev_rocket_ammo" "sh" "ammo" 1 {max 10}}
			{item "congreev_rocket_ammo" "fa" "ammo" 1 {max 10}}
			{item "congreev_rocket_ammo" "fg" "ammo" 1 {max 10}}
		}
		{radius 			15}
		{resupplyPeriod 	10}
		{regenerationPeriod 99999}
		{limit 				150}
	}
	{DecalView supply_zone
		{Sprite "supply_zone.ebm"
			{Visibility 0.3}
		}
		{Layer grounddynamic}
		{Visible 0}
	}
)
(define "horse_ammo"
	{extender "supply_zone"
		{resupply
			{item "drob" "ammo" 10 {max 30}}
			{item "22_cal" "ca" "ammo" 10 {max 30}}
			{item "30_cal" "ca" "ammo" 10 {max 30}}
			{item "32_cal" "ca" "ammo" 10 {max 30}}
			{item "36_cal" "ca" "ammo" 10 {max 30}}
			{item "40_cal" "ca" "ammo" 10 {max 30}}
			{item "44_cal" "ca" "ammo" 10 {max 30}}
			{item "52_cal" "ca" "ammo" 10 {max 30}}
			{item "54_cal" "ca" "ammo" 10 {max 30}}
			{item "56_cal" "ca" "ammo" 10 {max 30}}
			{item "58_cal" "mb" "ammo" 10 {max 50}}
			{item "59_cal" "mb" "ammo" 10 {max 50}}
			{item "69_cal" "mb" "ammo" 10 {max 50}}
			{item "cart_and_tnt" "ammo" 10 {max 50}}
			{item "577-450_cal" "pb" "ammo" 10 {max 50}}
			{item "buffalo_cal" "pb" "ammo" 10 {max 50}}
			{item "11-6mm_cal" "ammo" 10 {max 50}}
			{item "10-75mm_cal" "ammo" 10 {max 50}}
			{item "pistol" "ammo" 6 {max 30}}
			{item "mortir" "ammo" 1 {max 3}}
			{item "crossbow_bolt" "ammo" 10 {max 60}}
			{item "bow_arrow" "ammo" 10 {max 60}}
		}
		{radius 			5}
		{resupplyPeriod 	5}
		{regenerationPeriod 300}
		{limit 				150}
	}
	{DecalView supply_zone
		{Sprite "supply_zone.ebm"
			{Visibility 0.3}
		}
		{Layer grounddynamic}
		{Visible 0}
	}
)

(define "crate_ammo"
	{extender "supply_zone"
		{resupply
			{item "drob" "ammo" 10 {max 30}}
			{item "22_cal" "ca" "ammo" 10 {max 30}}
			{item "30_cal" "ca" "ammo" 10 {max 30}}
			{item "32_cal" "ca" "ammo" 10 {max 30}}
			{item "36_cal" "ca" "ammo" 10 {max 30}}
			{item "40_cal" "ca" "ammo" 10 {max 30}}
			{item "44_cal" "ca" "ammo" 10 {max 30}}
			{item "52_cal" "ca" "ammo" 10 {max 30}}
			{item "54_cal" "ca" "ammo" 10 {max 30}}
			{item "56_cal" "ca" "ammo" 10 {max 30}}
			{item "58_cal" "mb" "ammo" 10 {max 50}}
			{item "59_cal" "mb" "ammo" 10 {max 50}}
			{item "69_cal" "mb" "ammo" 10 {max 50}}			
			{item "577-450_cal" "pb" "ammo" 10 {max 50}}
			{item "11-6mm_cal" "ammo" 10 {max 50}}
			{item "10-75mm_cal" "ammo" 10 {max 50}}
			{item "buffalo_cal" "pb" "ammo" 10 {max 50}}
			{item "cart_and_tnt" "ammo" 10 {max 50}}
			{item "pistol" "ammo" 6 {max 30}}
			{item "mortir" "ammo" 2 {max 5}}
			{item "bow_arrow" "ammo" 10 {max 30}}
		}
		{radius 			8}
		{resupplyPeriod 	8}
		{regenerationPeriod 60}
		{limit 				500}
	}
	{DecalView supply_zone
		{Sprite "supply_zone.ebm"
			{Visibility 0.3}
		}
		{Layer grounddynamic}
		{Visible 0}
	}
)


(define "wagon_ammo"
	{extender "supply_zone"
		{resupply
			{item "bullet3" "fo" "ammo" 1 {max 5}}
			{item "bullet75" "fo" "ammo" 1 {max 5}}
			{item "bullet152" "fo" "ammo" 1 {max 5}}
			{item "drob" "ammo" 10 {max 60}}
			{item "22_cal" "ca" "ammo" 10 {max 60}}
			{item "30_cal" "ca" "ammo" 10 {max 60}}
			{item "32_cal" "ca" "ammo" 10 {max 60}}
			{item "36_cal" "ca" "ammo" 10 {max 60}}
			{item "40_cal" "ca" "ammo" 10 {max 60}}
			{item "44_cal" "ca" "ammo" 10 {max 60}}
			{item "52_cal" "ca" "ammo" 10 {max 60}}
			{item "54_cal" "ca" "ammo" 10 {max 60}}
			{item "56_cal" "ca" "ammo" 10 {max 60}}
			{item "58_cal" "mb" "ammo" 10 {max 100}}
			{item "59_cal" "mb" "ammo" 10 {max 100}}
			{item "69_cal" "mb" "ammo" 10 {max 100}}
			{item "577-450_cal" "pb" "ammo" 10 {max 100}}
			{item "buffalo_cal" "pb" "ammo" 10 {max 100}}
			{item "11-6mm_cal" "ammo" 10 {max 100}}
			{item "10-75mm_cal" "ammo" 10 {max 50}}
			{item "cart_and_tnt" "ammo" 15 {max 100}}
			{item "pistol" "ammo" 6 {max 60}}
			{item "mortir" "ammo" 2 {max 5}}
			{item "crossbow_bolt" "ammo" 10 {max 60}}
			{item "congreev_rocket_ammo" "sh" "ammo" 1 {max 10}}
			{item "congreev_rocket_ammo" "fa" "ammo" 1 {max 10}}
			{item "congreev_rocket_ammo" "fg" "ammo" 1 {max 10}}
			{item "bow_arrow" "ammo" 10 {max 30}}
		}
		{radius 			12}
		{resupplyPeriod 	5}
		{regenerationPeriod 60}
		{limit 				500}
	}
	{DecalView supply_zone
		{Sprite "supply_zone.ebm"
			{Visibility 0.3}
		}
		{Layer grounddynamic}
		{Visible 0}
	}
)

(define "truck_ammo_art"
	{extender "supply_zone"
		{resupply
			{item "rifle" "ammo" 25 {max 150}}
			{item "pistol" "ammo" 100 {max 600}}
			{item "mgun" "ammo" 100	{max 800}}
			{item "bandage"	1 {max 3}}
			{item "ptr" "ammo" 5 {max 25}}
			{item "bazooka" "ammo" 1 {max 5}}
			{item "panzershreck" "ammo" 1 {max 5}}
			{item "m18recoilless" "ammo" 1 {max 5}}
			{item "piatrocket" "ammo" 1 {max 5}}
			{item "type_4" "ammo" 1 {max 5}}
			{item "rifle_grenade" "ammo" 2 {max 10}}
			{item "rifle_grenade_at" "ammo" 2 {max 10}}
			{item "shotgun" "ammo" 5 {max 30}}
			{item "mortar" "fg" "ammo" 5 {max 30}{value 2}}
			{item "hmgun" "ammo" 50 {max 300}{value 2}}
			{item "mortar150" "fg" "ammo" 2 {max 15}{value 2}}
			;
			{item "bullet20" "zenite" "ammo" 10 {max 100}{value 2}}
			{item "bullet25" "zenite" "ammo" 10 {max 100}{value 2}}
			{item "bullet37" "zenite" "ammo" 10 {max 100}{value 2}}
			{item "bullet40" "zenite" "ammo" 10 {max 100}{value 2}}
			{item "bullet37" "ap" "ammo" 3 {max 30}{value 2}}
			{item "bullet37" "fg" "ammo" 3 {max 25}{value 2}}
			{item "bullet40" "ap" "ammo" 3 {max 30}{value 2}}
			{item "bullet40" "fg" "ammo" 3 {max 25}{value 2}}
			{item "bullet45" "ap" "ammo" 3 {max 30}{value 2}}
			{item "bullet45" "fg" "ammo" 3 {max 25}{value 2}}
			{item "bullet47" "ap" "ammo" 3 {max 30}{value 2}}
			{item "bullet47" "fg" "ammo" 3 {max 25}{value 2}}
			{item "bullet50" "ap" "ammo" 3 {max 30}{value 2}}
			{item "bullet50" "fg" "ammo" 3 {max 25}{value 2}}
			{item "bullet57" "ap" "ammo" 3 {max 30}{value 2}}
			{item "bullet57" "fg" "ammo" 3 {max 25}{value 2}}
			{item "bullet75" "ap" "ammo" 2 {max 20}{value 2}}
			{item "bullet75" "fg" "ammo" 2 {max 15}{value 2}}
			{item "bullet76" "ap" "ammo" 2 {max 20}{value 2}}
			{item "bullet76" "fg" "ammo" 2 {max 15}{value 2}}
			{item "bullet77" "ap" "ammo" 2 {max 20}{value 2}}
			{item "bullet77" "fg" "ammo" 2 {max 15}{value 2}}
			{item "bullet85" "ap" "ammo" 2 {max 20}{value 2}}
			{item "bullet85" "fg" "ammo" 2 {max 15}{value 2}}
			{item "bullet88" "ap" "ammo" 2 {max 20}{value 2}}
			{item "bullet88" "fg" "ammo" 2 {max 15}{value 2}}
			{item "bullet89" "ap" "ammo" 2 {max 20}{value 2}}
			{item "bullet89" "fg" "ammo" 2 {max 15}{value 2}}
			{item "bullet90" "ap" "ammo" 2 {max 20}{value 2}}
			{item "bullet90" "fg" "ammo" 2 {max 15}{value 2}}
			{item "bullet93" "ap" "ammo" 2 {max 20}{value 2}}
			{item "bullet93" "fg" "ammo" 2 {max 15}{value 2}}
			{item "bullet95" "ap" "ammo" 2 {max 20}{value 2}}
			{item "bullet95" "fg" "ammo" 2 {max 15}{value 2}}
			{item "bullet100" "ap" "ammo" 2 {max 20}{value 2}}
			{item "bullet100" "fg" "ammo" 2 {max 15}{value 2}}
			{item "bullet105" "ap" "ammo" 2 {max 20}{value 2}}
			{item "bullet120" "ap" "ammo" 2 {max 20}{value 2}}
			{item "bullet122" "ap" "ammo" 2 {max 20}{value 2}}
			{item "bullet128" "ap" "ammo" 2 {max 15}{value 2}}
			;
			{item "bullet105" "fg" "ammo" 1 {max 10}{value 5}}
			{item "bullet120" "fg" "ammo" 1 {max 10}{value 5}}
			{item "bullet122" "fg" "ammo" 1 {max 10}{value 5}}
			{item "bullet128" "fg" "ammo" 1 {max 10}{value 5}}
			{item "bullet150" "fg" "ammo" 1 {max 10}{value 5}}
			{item "bullet152" "fg" "ammo" 1 {max 10}{value 5}}
			{item "bullet155" "fg" "ammo" 1 {max 10}{value 5}}
			;
			{item "bullet203" "ammo" 1 {max 5}{value 5}}
			{item "bullet290" "ammo" 1 {max 5}{value 5}}
			;
			{item "calliope" "ammo" 5 {max 60}{value 5}}
			{item "lm_ammo" "ammo" 5 {max 32}{value 5}}
			{item "bm8" "ammo" 5 {max 24}{value 5}}
			{item "katusha" "ammo" 3 {max 16}{value 5}}
			{item "panzerwerfer42" "ammo" 2 {max 10}{value 5}}
			{item "nebel41" "ammo" 2 {max 12}{value 5}}
			{item "nebel42" "ammo" 2 {max 12}{value 5}}
			{item "20cm_rocket" "ammo" 2 {max 10}{value 5}}
			{item "tulip" "ammo" 2 {max 10}{value 5}}
			;
			{item "30cm_rocket" "ammo" 1 {max 5}{value 10}}
			{item "sturmtiger" "ammo" 1 {max 5}{value 10}}
		}
		{radius 			10}
		{resupplyPeriod 	5}
		{regenerationPeriod 30}
		{limit 				250}
	}
	{DecalView supply_zone
		{Sprite "supply_zone.ebm"
			{Visibility 0.3}
		}
		{Layer grounddynamic}
		{Visible 0}
	}
)