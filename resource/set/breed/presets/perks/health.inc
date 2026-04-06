
; Presets for health and stamina levels

(include "/set/breed/presets/perks/vision.inc")

;/*=========== Standard Presets End ===========*/

(define "civilian"
	{"health" "100%"}
	{"health_regeneration" "10%"}
	{"stamina" "75%"}
	{"stamina_regeneration" "75%"}
	("standard_vision")
	{"speed" 0.90}
)

;// TIER I // 

(define "tier1_standard"
	{"health" "150%"}
	{"health_regeneration" "10%"}
	{"stamina" "75%"}
	{"stamina_regeneration" "75%"}
	{"personage" 0}			;// This means soldiers are revivable at veterancy 0
	("standard_vision")
	{"speed" 1.00}
)

(define "tier1_recon"
	{"health" "100%"}
	{"health_regeneration" "10%"}
	{"stamina" "150%"}
	{"stamina_regeneration" "75%"}
	{"personage" 0}			;// This means soldiers are revivable at veterancy 0
	("recon_vision")
	{"speed" 1.10}
)

(define "tier1_defense"
	{"health" "150%"}
	{"health_regeneration" "300%"}
	{"stamina" "75%"}
	{"stamina_regeneration" "75%"}
	{"personage" 0}			;// This means soldiers are revivable at veterancy 0
	("standard_vision")
	{"speed" 0.90}
)


;// TIER II // 

(define "tier2_standard"
	{"health" "200%"}
	{"health_regeneration" "10%"}
	{"stamina" "125%"}
	{"stamina_regeneration" "100%"}
	{"personage" 0}			;// This means soldiers are revivable at veterancy 0
	("standard_vision")
	{"speed" 1.00}
)

(define "tier2_recon"
	{"health" "150%"}
	{"health_regeneration" "10%"}
	{"stamina" "250%"}
	{"stamina_regeneration" "100%"}
	{"personage" 0}			;// This means soldiers are revivable at veterancy 0
	("recon_vision")
	{"speed" 1.10}
)

(define "tier2_defense"
	{"health" "200%"}
	{"health_regeneration" "250%"}
	{"stamina" "125%"}
	{"stamina_regeneration" "100%"}
	{"personage" 0}			;// This means soldiers are revivable at veterancy 0
	("standard_vision")
	{"speed" 0.90}
)

;// TIER III // 

(define "tier3_standard"
	{"health" "300%"}
	{"health_regeneration" "10%"}
	{"stamina" "200%"}
	{"stamina_regeneration" "150%"}
	{"personage" 0}			;// This means soldiers are revivable at veterancy 0
	("standard_vision")
	{"speed" 1.00}
)

(define "tier3_recon"
	{"health" "250%"}
	{"health_regeneration" "10%"}
	{"stamina" "325%"}
	{"stamina_regeneration" "150%"}
	{"personage" 0}			;// This means soldiers are revivable at veterancy 0
	("recon_vision")
	{"speed" 1.10}
)

(define "tier3_defense"
	{"health" "300%"}
	{"health_regeneration" "200%"}
	{"stamina" "200%"}
	{"stamina_regeneration" "150%"}
	{"personage" 0}			;// This means soldiers are revivable at veterancy 0
	("standard_vision")
	{"speed" 0.90}
)

;// TIER IV // 

(define "tier4_standard"
	{"health" "375%"}
	{"health_regeneration" "10%"}
	{"stamina" "300%"}
	{"stamina_regeneration" "250%"}
	{"personage" 0}			;// This means soldiers are revivable at veterancy 0
	;("elite_vision")
	("standard_vision")
	{"speed" 1.00}
)

(define "tier4_recon"
	{"health" "325%"}
	{"health_regeneration" "10%"}
	{"stamina" "425%"}
	{"stamina_regeneration" "250%"}
	{"personage" 0}			;// This means soldiers are revivable at veterancy 0
	;("elite_vision")
	("recon_vision")
	{"speed" 1.10}
)

(define "tier4_defense"
	{"health" "375%"}
	{"health_regeneration" "150%"}
	{"stamina" "300%"}
	{"stamina_regeneration" "250%"}
	{"personage" 0}			;// This means soldiers are revivable at veterancy 0
	;("elite_vision")
	("standard_vision")
	{"speed" 0.90}
)

;// TIER V // Reserved for special single-player hero breeds

(define "tier5_standard"
	{"health" "500%"}
	{"health_regeneration" "20%"}
	{"stamina" "300%"}
	{"stamina_regeneration" "250%"}
	{"personage" 0}			;// This means soldiers are revivable at veterancy 0
	;("elite_vision")
	("standard_vision")
	{"speed" 1.00}
)
