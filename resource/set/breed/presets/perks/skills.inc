
; Presets for all melee, small arm weapons and avoidance skills

(include "/set/breed/presets/perks/health.inc")


;/* - Fortification Building Skills - */

(define "fortification"
	{barricade
		{"fortifications" "foxhole"}
		{"fortifications" "barricade_sq"}
		{"fortifications" "barricade"}
		{"fortifications" "medic_rally"}
		{"fortifications" "bush_cover"}
		
		{"fortifications" "barbwire"}
		{"fortifications" "hedgehog"}
	}
	{"resources" "10%"}
)

(define "engineer"
	{fortification}
	{barricade
		{"fortifications" "barricade_sq"}
		{"fortifications" "barricade"}
		


		{"fortifications" "barbwire"}
		{"fortifications" "hedgehog"}

		{"fortifications" "foxhole"}
		{"fortifications" "foxhole_big"}
		{"fortifications" "mortar_pit"}
		{"fortifications" "tank_cover"}

		{"fortifications" "heavy_mg_mg34"}
		{"fortifications" "heavy_mg_maxim"}
		{"fortifications" "heavy_mg_maxim_m1910_30"}
		{"fortifications" "heavy_mg_m1917_30cal"}
		
		;new added for test
		{"fortifications" "log_wall"}
		{"fortifications" "observation_tower"}
		{"fortifications" "dirt_pillbox"}
	}
	{"resources" "1000%"}
	{"resources_regeneration" "0%"}
	{mechanic factor 1.0}
)

;only unique ATM is dragons teeth and regelbau
(define "engineer_ger"
	{fortification}
	{barricade
		{"fortifications" "barricade_sq"}
		{"fortifications" "barricade"}
		
		{"fortifications" "barbwire"}
		{"fortifications" "hedgehog"}

		{"fortifications" "foxhole"}
		{"fortifications" "foxhole_big"}
		{"fortifications" "mortar_pit"}
		{"fortifications" "tank_cover"}

		{"fortifications" "heavy_mg_mg34"}
		{"fortifications" "heavy_mg_maxim"}
		{"fortifications" "heavy_mg_maxim_m1910_30"}
		{"fortifications" "heavy_mg_m1917_30cal"}
		
		;new
		{"fortifications" "dragons_teeth"}
		{"fortifications" "regelbau"}
		{"fortifications" "observation_tower"}
	}
	{"resources" "1000%"}
	{"resources_regeneration" "0%"}
	{mechanic factor 1.0}
)

(define "engineer_heavy_fin"
	{fortification}
	{barricade
		{"fortifications" "fin_bunker"}
		{"fortifications" "fin_coastal_gun"}
		{"fortifications" "fin_raised_bunker"}
		{"fortifications" "fin_round_bunker"}
		{"fortifications" "aa_raised"}
		{"fortifications" "concrete_wall"}
	}
	{"resources" "1000%"}
	{"resources_regeneration" "0%"}
	{mechanic factor 1.0}
)

(define "engineer_light"
	{fortification}
	{barricade
		{"fortifications" "barricade_sq"}
		{"fortifications" "barricade"}

		{"fortifications" "foxhole"}
		{"fortifications" "foxhole_big"}
		{"fortifications" "tank_cover"}
	
		{"fortifications" "mortar_pit"}
		{"fortifications" "deep_foxhole"}
	}
	{"resources" "1000%"}
	{"resources_regeneration" "0%"}
	{mechanic factor 1.0}
)


;/* - Repair Skills - */

(define "skilled_repair"
	{mechanic factor 1.0}
)

(define "basic_repair"
	{mechanic factor 0.5}
)


;/* - Tank and Cannon Main Gun Weapon Skills - */

(define "elite_gun"
	{"tank_gun" lvl_8}
)

(define "expert_gun"
	{"tank_gun" lvl_7}
)

(define "skilled_gun"
	{"tank_gun" lvl_5}
)

(define "basic_gun"
	{"tank_gun" lvl_3}
)

;/* - Anti-Tank Weapon Skills - */

(define "at_rank_1"
	{"rocketlauncher" lvl_1}
	{"rifle" lvl_1}
)

(define "at_rank_2"
	{"rocketlauncher" lvl_3}
	{"rifle" lvl_3}
)

(define "at_rank_3"
	{"rocketlauncher" lvl_4}
	{"rifle" lvl_4}
)

(define "at_rank_4"
	{"rocketlauncher" lvl_5}
	{"rifle" lvl_5}
)

(define "at_rank_5"
	{"rocketlauncher" lvl_6}
	{"rifle" lvl_6}
)

(define "at_rank_6"
	{"rocketlauncher" lvl_7}
	{"rifle" lvl_7}
)

;/* - Skill zero, civilians or useless sods like volkssturm */

(define "skill_rank_0"
	("at_rank_1")
	{"pistol" lvl_1}
	{"smg" lvl_1}
	{"mgun" lvl_1}
	{"mgun_light" lvl_1}
	{"rifle" lvl_1}
	{"melee" lvl_1}
	{"avoidance" lvl_1}
	("fortification")
	("basic_repair")
	("basic_gun")
)

;/* - Sub-Machine Gunner Levels - ; Soldiers with an sub-machine gun their for primary weapon */

(define "smg_skill_rank_1"
	("at_rank_2")
	{"pistol" lvl_3}
	{"smg" lvl_3}
	{"mgun" lvl_2}
	{"mgun_light" lvl_2}
	{"rifle" lvl_2}
	{"melee" lvl_2}
	{"avoidance" lvl_2}
	("fortification")
	("basic_repair")
	("basic_gun")
)

(define "smg_skill_rank_2"
	("at_rank_3")
	{"pistol" lvl_4}
	{"smg" lvl_4}
	{"mgun" lvl_3}
	{"mgun_light" lvl_3}
	{"rifle" lvl_3}
	{"melee" lvl_3}
	{"avoidance" lvl_3}
	("fortification")
	("basic_repair")
	("basic_gun")
)

(define "smg_skill_rank_3"
	("at_rank_4")
	{"pistol" lvl_5}
	{"smg" lvl_5}
	{"mgun" lvl_4}
	{"mgun_light" lvl_4}
	{"rifle" lvl_4}
	{"melee" lvl_4}
	{"avoidance" lvl_4}
	("fortification")
	("basic_repair")
	("basic_gun")
)

(define "smg_skill_rank_4"
	("at_rank_5")
	{"pistol" lvl_6}
	{"smg" lvl_6}
	{"mgun" lvl_5}
	{"mgun_light" lvl_5}
	{"rifle" lvl_5}
	{"melee" lvl_5}
	{"avoidance" lvl_5}
	("fortification")
	("basic_repair")
	("basic_gun")
)

(define "smg_skill_rank_5"
	("at_rank_5")
	{"pistol" lvl_7}
	{"smg" lvl_7}
	{"mgun" lvl_6}
	{"mgun_light" lvl_6}
	{"rifle" lvl_6}
	{"melee" lvl_6}
	{"avoidance" lvl_6}
	("fortification")
	("basic_repair")
	("basic_gun")
)

;/* - Rifleman Levels - ; Soldiers with an rifle for their primary weapon */

(define "rifle_skill_rank_1"
	("at_rank_2")
	{"pistol" lvl_3}
	{"smg" lvl_2}
	{"mgun" lvl_2}
	{"mgun_light" lvl_2}
	{"rifle" lvl_3}
	{"melee" lvl_2}
	{"avoidance" lvl_2}
	("fortification")
	("basic_repair")
	("basic_gun")
)

(define "rifle_skill_rank_2"
	("at_rank_3")
	{"pistol" lvl_4}
	{"smg" lvl_3}
	{"mgun" lvl_3}
	{"mgun_light" lvl_3}
	{"rifle" lvl_4}
	{"melee" lvl_3}
	{"avoidance" lvl_3}
	("fortification")
	("basic_repair")
	("basic_gun")
)

(define "rifle_skill_rank_3"
	("at_rank_4")
	{"pistol" lvl_5}
	{"smg" lvl_4}
	{"mgun" lvl_4}
	{"mgun_light" lvl_4}
	{"rifle" lvl_5}
	{"melee" lvl_4}
	{"avoidance" lvl_4}
	("fortification")
	("basic_repair")
	("basic_gun")
)

(define "rifle_skill_rank_4"
	("at_rank_5")
	{"pistol" lvl_6}
	{"smg" lvl_5}
	{"mgun" lvl_5}
	{"mgun_light" lvl_5}
	{"rifle" lvl_6}
	{"melee" lvl_5}
	{"avoidance" lvl_5}
	("fortification")
	("basic_repair")
	("basic_gun")
)

(define "rifle_skill_rank_5"
	("at_rank_5")
	{"pistol" lvl_7}
	{"smg" lvl_6}
	{"mgun" lvl_6}
	{"mgun_light" lvl_6}
	{"rifle" lvl_7}
	{"melee" lvl_6}
	{"avoidance" lvl_6}
	("fortification")
	("basic_repair")
	("basic_gun")
)

;/* - MG Loaders/assistant Levels - ; Soldiers with an rifle/pistol for their primary weapon, but are also trained for MG use */

(define "loader_skill_rank_1"
	("at_rank_2")
	{"pistol" lvl_3}
	{"smg" lvl_2}
	{"mgun" lvl_3}
	{"mgun_light" lvl_3}
	{"rifle" lvl_3}
	{"melee" lvl_2}
	{"avoidance" lvl_2}
	("fortification")
	("basic_repair")
	("basic_gun")
)

(define "loader_skill_rank_2"
	("at_rank_3")
	{"pistol" lvl_4}
	{"smg" lvl_3}
	{"mgun" lvl_4}
	{"mgun_light" lvl_4}
	{"rifle" lvl_4}
	{"melee" lvl_3}
	{"avoidance" lvl_3}
	("fortification")
	("basic_repair")
	("basic_gun")
)

(define "loader_skill_rank_3"
	("at_rank_4")
	{"pistol" lvl_5}
	{"smg" lvl_4}
	{"mgun" lvl_5}
	{"mgun_light" lvl_5}
	{"rifle" lvl_5}
	{"melee" lvl_4}
	{"avoidance" lvl_4}
	("fortification")
	("basic_repair")
	("basic_gun")
)

(define "loader_skill_rank_4"
	("at_rank_5")
	{"pistol" lvl_6}
	{"smg" lvl_5}
	{"mgun" lvl_6}
	{"mgun_light" lvl_6}
	{"rifle" lvl_6}
	{"melee" lvl_5}
	{"avoidance" lvl_5}
	("fortification")
	("basic_repair")
	("basic_gun")
)

(define "loader_skill_rank_5"
	("at_rank_5")
	{"pistol" lvl_7}
	{"smg" lvl_6}
	{"mgun" lvl_7}
	{"mgun_light" lvl_7}
	{"rifle" lvl_7}
	{"melee" lvl_6}
	{"avoidance" lvl_7}
	("fortification")
	("basic_repair")
	("basic_gun")
)

(define "loader_skill_smg_rank_1"
	("at_rank_1")
	{"pistol" lvl_2}
	{"smg" lvl_2}
	{"mgun" lvl_2}
	{"mgun_light" lvl_2}
	{"rifle" lvl_1}
	{"melee" lvl_1}
	{"avoidance" lvl_1}
	("fortification")
	("basic_repair")
	("basic_gun")
)

(define "loader_skill_smg_rank_1"
	("at_rank_2")
	{"pistol" lvl_3}
	{"smg" lvl_3}
	{"mgun" lvl_3}
	{"mgun_light" lvl_3}
	{"rifle" lvl_2}
	{"melee" lvl_2}
	{"avoidance" lvl_2}
	("fortification")
	("basic_repair")
	("basic_gun")
)

(define "loader_skill_smg_rank_2"
	("at_rank_3")
	{"pistol" lvl_4}
	{"smg" lvl_4}
	{"mgun" lvl_4}
	{"mgun_light" lvl_4}
	{"rifle" lvl_3}
	{"melee" lvl_3}
	{"avoidance" lvl_3}
	("fortification")
	("basic_repair")
	("basic_gun")
)

(define "loader_skill_smg_rank_3"
	("at_rank_4")
	{"pistol" lvl_5}
	{"smg" lvl_5}
	{"mgun" lvl_5}
	{"mgun_light" lvl_5}
	{"rifle" lvl_4}
	{"melee" lvl_4}
	{"avoidance" lvl_4}
	("fortification")
	("basic_repair")
	("basic_gun")
)

(define "loader_skill_smg_rank_4"
	("at_rank_5")
	{"pistol" lvl_6}
	{"smg" lvl_6}
	{"mgun" lvl_6}
	{"mgun_light" lvl_6}
	{"rifle" lvl_5}
	{"melee" lvl_5}
	{"avoidance" lvl_5}
	("fortification")
	("basic_repair")
	("basic_gun")
)

(define "loader_skill_smg_rank_5"
	("at_rank_5")
	{"pistol" lvl_7}
	{"smg" lvl_7}
	{"mgun" lvl_7}
	{"mgun_light" lvl_7}
	{"rifle" lvl_6}
	{"melee" lvl_6}
	{"avoidance" lvl_6}
	("fortification")
	("basic_repair")
	("basic_gun")
)

;/* - Machine Gunner Levels - ; Soldiers with an machine gun for their primary weapon */

(define "mg_skill_rank_1"
	("at_rank_2")
	{"pistol" lvl_3}
	{"smg" lvl_2}
	{"mgun" lvl_3}
	{"mgun_light" lvl_3}
	{"rifle" lvl_2}
	{"melee" lvl_2}
	{"avoidance" lvl_2}
	("fortification")
	("basic_repair")
	("basic_gun")
)

(define "mg_skill_rank_2"
	("at_rank_3")
	{"pistol" lvl_4}
	{"smg" lvl_3}
	{"mgun" lvl_4}
	{"mgun_light" lvl_4}
	{"rifle" lvl_3}
	{"melee" lvl_3}
	{"avoidance" lvl_3}
	("fortification")
	("basic_repair")
	("basic_gun")
)

(define "mg_skill_rank_3"
	("at_rank_4")
	{"pistol" lvl_5}
	{"smg" lvl_4}
	{"mgun" lvl_5}
	{"mgun_light" lvl_5}
	{"rifle" lvl_4}
	{"melee" lvl_4}
	{"avoidance" lvl_4}
	("fortification")
	("basic_repair")
	("basic_gun")
)

(define "mg_skill_rank_4"
	("at_rank_5")
	{"pistol" lvl_6}
	{"smg" lvl_5}
	{"mgun" lvl_6}
	{"mgun_light" lvl_6}
	{"rifle" lvl_5}
	{"melee" lvl_5}
	{"avoidance" lvl_5}
	("fortification")
	("basic_repair")
	("basic_gun")
)

(define "mg_skill_rank_5"
	("at_rank_5")
	{"pistol" lvl_7}
	{"smg" lvl_6}
	{"mgun" lvl_7}
	{"mgun_light" lvl_7}
	{"rifle" lvl_6}
	{"melee" lvl_6}
	{"avoidance" lvl_6}
	("fortification")
	("basic_repair")
	("basic_gun")
)



;NEW DEFINES FOR SQUADS REWORK-----------------------------------------------------------------------------------------------------------------------------------------

(define "recon"
	("recon_vision")
	{"speed" 1.1}
)

(define "skill1"
	{"rocketlauncher" lvl_1}
	{"pistol" lvl_1}
	{"smg" lvl_1}
	{"mgun" lvl_1}
	{"mgun_light" lvl_1}
	{"rifle" lvl_1}
	{"melee" lvl_1}
	{"avoidance" lvl_1}
	
	{"health" "75%"}
	{"health_regeneration" "10%"}
	{"stamina" "75%"}
	{"stamina_regeneration" "75%"}
	{"personage" 0}			;// This means soldiers are revivable at veterancy 0
	("standard_vision")
	{"speed" 0.9}
	
	("fortification")
	("basic_repair")
	("basic_gun")
)

(define "skill2"
	{"rocketlauncher" lvl_2}
	{"pistol" lvl_2}
	{"smg" lvl_2}
	{"mgun" lvl_2}
	{"mgun_light" lvl_2}
	{"rifle" lvl_2}
	{"melee" lvl_2}
	{"avoidance" lvl_2}
	
	{"health" "90%"}
	{"health_regeneration" "10%"}
	{"stamina" "100%"}
	{"stamina_regeneration" "100%"}
	{"personage" 0}			;// This means soldiers are revivable at veterancy 0
	("standard_vision")
	{"speed" 1.0}
	
	("fortification")
	("basic_repair")
	("basic_gun")
)

(define "skill3"
	{"rocketlauncher" lvl_3}
	{"pistol" lvl_3}
	{"smg" lvl_3}
	{"mgun" lvl_3}
	{"mgun_light" lvl_3}
	{"rifle" lvl_3}
	{"melee" lvl_3}
	{"avoidance" lvl_3}
	
	{"health" "100%"}
	{"health_regeneration" "20%"}
	{"stamina" "100%"}
	{"stamina_regeneration" "100%"}
	{"personage" 0}			;// This means soldiers are revivable at veterancy 0
	("standard_vision")
	{"speed" 1.0}
	
	("fortification")
	("basic_repair")
	("basic_gun")
)

(define "skill4"
	{"rocketlauncher" lvl_4}
	{"pistol" lvl_4}
	{"smg" lvl_4}
	{"mgun" lvl_4}
	{"mgun_light" lvl_4}
	{"rifle" lvl_4}
	{"melee" lvl_4}
	{"avoidance" lvl_4}
	
	{"health" "125%"}
	{"health_regeneration" "20%"}
	{"stamina" "125%"}
	{"stamina_regeneration" "125%"}
	{"personage" 0}			;// This means soldiers are revivable at veterancy 0
	("standard_vision")
	{"speed" 1.04}
	
	("fortification")
	("basic_repair")
	("basic_gun")
)

(define "skill5"
	{"rocketlauncher" lvl_5}
	{"pistol" lvl_5}
	{"smg" lvl_5}
	{"mgun" lvl_5}
	{"mgun_light" lvl_5}
	{"rifle" lvl_5}
	{"melee" lvl_5}
	{"avoidance" lvl_5}
	
	{"health" "150%"}
	{"health_regeneration" "40%"}
	{"stamina" "150%"}
	{"stamina_regeneration" "150%"}
	{"personage" 0}			;// This means soldiers are revivable at veterancy 0
	("standard_vision")
	{"speed" 1.08}
	
	("fortification")
	("basic_repair")
	("basic_gun")
)

(define "skill6"
	{"rocketlauncher" lvl_6}
	{"pistol" lvl_6}
	{"smg" lvl_6}
	{"mgun" lvl_6}
	{"mgun_light" lvl_6}
	{"rifle" lvl_6}
	{"melee" lvl_6}
	{"avoidance" lvl_6}
	
	{"health" "175%"}
	{"health_regeneration" "60%"}
	{"stamina" "175%"}
	{"stamina_regeneration" "175%"}
	{"personage" 0}			;// This means soldiers are revivable at veterancy 0
	("standard_vision")
	{"speed" 1.12}
	
	("fortification")
	("basic_repair")
	("basic_gun")
)

(define "skill7"
	{"rocketlauncher" lvl_7}
	{"pistol" lvl_7}
	{"smg" lvl_7}
	{"mgun" lvl_7}
	{"mgun_light" lvl_7}
	{"rifle" lvl_7}
	{"melee" lvl_7}
	{"avoidance" lvl_7}
	
	{"health" "200%"}
	{"health_regeneration" "80%"}
	{"stamina" "200%"}
	{"stamina_regeneration" "200%"}
	{"personage" 0}			;// This means soldiers are revivable at veterancy 0
	("standard_vision")
	{"speed" 1.16}
	
	("fortification")
	("basic_repair")
	("basic_gun")
)

(define "skill8"
	{"rocketlauncher" lvl_8}
	{"pistol" lvl_8}
	{"smg" lvl_8}
	{"mgun" lvl_8}
	{"mgun_light" lvl_8}
	{"rifle" lvl_8}
	{"melee" lvl_8}
	{"avoidance" lvl_8}
	
	{"health" "220%"}
	{"health_regeneration" "100%"}
	{"stamina" "220%"}
	{"stamina_regeneration" "220%"}
	{"personage" 0}			;// This means soldiers are revivable at veterancy 0
	("standard_vision")
	{"speed" 1.2}
	
	("fortification")
	("basic_repair")
	("basic_gun")
)

(define "skill9"
	{"rocketlauncher" lvl_9}
	{"pistol" lvl_9}
	{"smg" lvl_9}
	{"mgun" lvl_9}
	{"mgun_light" lvl_9}
	{"rifle" lvl_9}
	{"melee" lvl_9}
	{"avoidance" lvl_9}
	
	{"health" "220%"}
	{"health_regeneration" "100%"}
	{"stamina" "220%"}
	{"stamina_regeneration" "220%"}
	{"personage" 0}			;// This means soldiers are revivable at veterancy 0
	("standard_vision")
	{"speed" 1.2}
	
	("fortification")
	("basic_repair")
	("basic_gun")
)
