
; Presets for health and stamina levels

(include "/set/breed/presets/perks/skills.inc")


;/*=========== Unique Presets Begin ===========*/

(define "medic"
	{"medic" 10.0}
	{"speed" 1.10}
	{"stamina" "225%"}
	{barricade
		{"fortifications" "auto_medic_place_flag"}
	}
)

(define "stealth"
	{"stealth"}
	("recon_vision")
	{"speed" 1.10}
)

(define "marksman"		;// elite sharpshooters (non sniper)
	{"rifle" lvl_8}
)

(define "tank_commander"	;// Tank Commander
	("tier2_standard")
	("loader_skill_smg_rank_2")
	("skilled_repair")
	{"health" "150%"}
	("expert_gun")
)

(define "tankman"			;// Tank Crew
	("tier2_standard")
	("loader_skill_smg_rank_2")
	("skilled_repair")
	{"health" "150%"}
	("skilled_gun")
)

(define "tankman_vet"			;// Tank Crew
	("skill7")
	("skilled_repair")
	{"health" "150%"}
	("skilled_gun")
)


;/*=========== Unique Presets End ===========*/

