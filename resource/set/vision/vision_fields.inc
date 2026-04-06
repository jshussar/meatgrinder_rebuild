; // This script defines the VISION FIELDS of the units. 
; // Units can have several vision fields. For example, a human has the forward main vision field and the peripheral one.
; // 
; // {uncover 15} <- Will spot hidden soldiers in bushes within 15m
; // {h_fov 100}  <- Horizontal field of view arc = 100 degree
; // {v_fov 180}  <- Vertical field of view arc = 180 degree (straight up or down)
; // ("spotting" args 2)  <- Sets the "vision range", defined in generic.inc, so this unit will do spotting twice as far.
; // Or in other terms, the vision distances will be x2


;/*=============== Human Begin ===============*/


{"human"								; // Standard human vision
	{uncover 15}
	{h_fov 120}
	{v_fov 180}
	("spotting" r(1.0))
}

{"human_peripheral"						; // Additional all-round (weaker) situational awareness vision for humans
	{uncover 15}
	{h_fov 120}
	{v_fov 120}
	("spotting" r(0.22))
}

{"human_elite"							; // Soldiers with better vision (elites, officers, snipers)
	{uncover 20}
	{h_fov 120}
	{v_fov 180}
	("spotting" r(1.0))
}

{"human_recon"							; // Soldiers with dedicated best vision (recon soldiers)
	{uncover 25}
	{h_fov 120}
	{v_fov 180}
	("spotting" r(1.25))
}

{"rifle_telescope"						; // Primary vision for sniper scopes
	{uncover 30}
	{h_fov 360}
	{v_fov 120}
	("glass" r(30))
}

{"field_glass"							; // Primary vision for binoculars
	{uncover 40}
	{h_fov 360}
	{v_fov 180}
	("glass" r(45))
}

{"soldier_focused"						; // Secondary vision when soldier is looking through scope or binoculars
	{uncover 30}
	{h_fov 30}
	{v_fov 50}
	("spotting" r(1.0))					; // Disabled secondary vision when looking through scopes or binoculars
	{wide 2}
}

;/*=============== Human End ===============*/

;/*=============== Cannon Begin ===============*/

{"cannon_main"							; // Standard main gun / gunner vision for cannons
	{uncover 8}
	{h_fov 15}
	{v_fov 100}
	("spotting2" r(1.5) r_human(0.5) veh_vis(220) can_vis(220) can_fire(220))
}

{"cannon_mortar"						; // All mortars
	{uncover 8}
	{h_fov 90}
	{v_fov 180}
	("spotting" r(1))
}

{"cannon_range_200"						; // Gunner Vision - Gun range 200m or less (direct fire only)
	{uncover 8}
	{h_fov 15}
	{v_fov 90}
	("spotting2" r(1.45) r_human(0.5) veh_vis(220) can_vis(220) can_fire(220))
}

{"cannon_range_210"						; // Gunner Vision - Gun range 210m (direct fire only)
	{uncover 8}
	{h_fov 15}
	{v_fov 90}
	("spotting2" r(1.45) r_human(0.5) veh_vis(220) can_vis(220) can_fire(220))
}

{"cannon_range_220"						; // Gunner Vision - Gun range 220m (direct fire only)
	{uncover 8}
	{h_fov 15}
	{v_fov 90}
	("spotting2" r(1.45) r_human(0.5) veh_vis(220) can_vis(220) can_fire(220))
}

{"cannon_range_230"						; // Gunner Vision - Gun range 230m (direct fire only)
	{uncover 8}
	{h_fov 15}
	{v_fov 90}
	("spotting2" r(1.45) r_human(0.5) veh_vis(230) can_vis(230) can_fire(230))
}

{"cannon_range_240"						; // Gunner Vision - Gun range 240m (direct fire only)
	{uncover 8}
	{h_fov 15}
	{v_fov 90}
	("spotting2" r(1.45) r_human(0.5) veh_vis(230) can_vis(230) can_fire(230))
}

{"cannon_range_250"						; // Gunner Vision - Gun range 250m (direct fire only)
	{uncover 8}
	{h_fov 15}
	{v_fov 90}
	("spotting2" r(1.45) r_human(0.5) veh_vis(230) can_vis(230) can_fire(230))
}
;/*=============== Cannon End ===============*/

;/*=============== Vehicle Begin ===============*/

{"vehicle_main"							; // Standard vehicle / driver vision
	{uncover 20}
	{h_fov 30}
	{v_fov 90}
	("spotting" r(1))
}

{"vehicle_top_mgun"						; // Top mounted Machine gunners vision (jeeps, halftracks, etc)
	{uncover 20}
	{h_fov 90}
	{v_fov 140}
	("spotting" r(1.0))
}

{"vehicle_top_turret"					; // Vision for cars with closed top / turret gunner
	{uncover 20}
	{h_fov 45}
	{v_fov 20}
	("spotting" r(0.85))
}

{"vehicle_around"						; // Vehicle peripheral / commander vision
	{uncover 10}
	{h_fov 360}
	{v_fov 180}
	("spotting" r(0.3))
}

{"moto"
    {uncover 20}
    {h_fov 30}
    {v_fov 140}
    ("spotting" r(1.0))
}

{"moto_crew"
    {uncover 20}
    {h_fov 90}
    {v_fov 60}
    ("spotting" r(1.0))
}

{"moto_around"
    {uncover 20}
    {h_fov 360}
    {v_fov 60}
    ("spotting" r(1.0))
}

;/*=============== Vehicle End ===============*/

;/*=============== Tank Begin ===============*/

{"recon_main"							; // Recon gunner vision
	{uncover 30}
	{h_fov 30}
	{v_fov 120}
	("spotting2" r(1.75) r_human(0.85) veh_vis(80) can_vis(80) can_fire(100))
}

{"recon_open"							; // Open Top Recon gunner vision
	{uncover 30}
	{h_fov 120}
	{v_fov 180}
	("spotting" r(2.2))
}

{"tank_main_mg"							; // Gunner vision when main gun is MG
	{uncover 20}
	{h_fov 15}
	{v_fov 30}
	("spotting" r(1.0))
}

{"tank_main-l"							; // Light tank gunner vision
	{uncover 20}
	{h_fov 10}
	{v_fov 120}
	("spotting2" r(1.9) r_human(0.25) veh_vis(250) can_vis(250) can_fire(250))
}

{"tank_main-m"							; // Medium tank gunner vision
	{uncover 20}
	{h_fov 8}
	{v_fov 120}
	("spotting2" r(1.92) r_human(0.15) veh_vis(250) can_vis(250) can_fire(250))
}

{"tank_main-h"							; // Heavy tank gunner vision
	{uncover 20}
	{h_fov 6}
	{v_fov 120}
	("spotting2" r(1.94) r_human(0.05) veh_vis(250) can_vis(250) can_fire(250))
}

{"tank_main-aa"							; // Tank's that have a AA gun from main weapon
	{uncover 30}
	{h_fov 30}
	{v_fov 180}
	("spotting2" r(1.6) r_human(0.5) veh_vis(90) can_vis(60) can_fire(80))
}

{"tank_driver"							; //Tank Driver vision
	{uncover 30}
	{h_fov 10}
	{v_fov 120}
	("spotting" r(0.6))
}

{"tank_hull-mg"							; // Tank Hull Machine gunner
	{uncover 30}
	{h_fov 5}
	{v_fov 120}
	("spotting" r(0.85))
}

{"tank_back"							; // Tank with rear turret machine gun
	{uncover 30}
	{h_fov 30}
	{v_fov 120}
	("spotting" r(0.4))
}

{"tank_rear-mg"							; // Tank with rear turret machine gun
	{uncover 20}
	{h_fov 30}
	{v_fov 120}
	("spotting" r(0.4))
}


{"tank_remote-mg"						; // Remote controlled roof Machine gun (Hetzer, Stug3g, etc)
	{uncover 20}
	{h_fov 8}
	{v_fov 120}
	("spotting" r(0.75))
}

{"tank_shielded-mg"						; // Shielded Machine gun (BA-64)
	{uncover 20}
	{h_fov 8}
	{v_fov 120}
	("spotting" r(1))
}

{"tank_around"							; // Tank peripheral / Commander vision
	{uncover 20}
	{h_fov 360}
	{v_fov 180}
	("spotting" r(0.08))
}

;/*=============== Tank End ===============*/

;/*=============== New Setup Begin ===============*/

{"tank_range_200"							; // Gunner Vision - Gun range 200m or less (direct fire only)
	{uncover 15}
	{h_fov 6.1}
	{v_fov 120}
	("spotting2" r(1.93) r_human(0.3) veh_vis(230) can_vis(200) can_fire(240))
}

{"tank_range_210"							; // Gunner Vision - Gun range 210m (direct fire only)
	{uncover 15}
	{h_fov 6.1}
	{v_fov 120}
	("spotting2" r(1.93) r_human(0.3) veh_vis(230) can_vis(200) can_fire(240))
}

{"tank_range_220"							; // Gunner Vision - Gun range 220m (direct fire only)
	{uncover 15}
	{h_fov 6.1}
	{v_fov 120}
	("spotting2" r(1.93) r_human(0.2) veh_vis(230) can_vis(200) can_fire(240))
}

{"tank_range_230"							; // Gunner Vision - Gun range 230m (direct fire only)
	{uncover 15}
	{h_fov 6.1}
	{v_fov 120}
	("spotting2" r(1.93) r_human(0.2) veh_vis(230) can_vis(200) can_fire(240))
}

{"tank_range_240"							; // Gunner Vision - Gun range 240m (direct fire only)
	{uncover 15}
	{h_fov 6.1}
	{v_fov 120}
	("spotting2" r(1.93) r_human(0.1) veh_vis(230) can_vis(200) can_fire(240))
}

{"tank_range_250"							; // Gunner Vision - Gun range 250m (direct fire only)
	{uncover 15}
	{h_fov 6.1}
	{v_fov 120}
	("spotting2" r(1.93) r_human(0.1) veh_vis(230) can_vis(200) can_fire(240))
}

;/*=============== New Setup End ===============*/

;/*=============== Airborne Begin ===============*/

{"airborne_main"						; // Standard plane pilot vision
	{uncover 0} 						; // Planes cannot spot concealed soldiers
	{h_fov 110}
	{v_fov 180}
	("spotting" r(3.5))
}

{"airborne_main_mp"						; // Standard plane pilot vision for multiplayer
	{uncover 0} 						; // Planes cannot spot concealed soldiers
	{h_fov 5}
	{v_fov 180}
	("spotting" r(2.0))
	{wide 2}
}

{"airborne_around"						; // Pilot peripheral vision
	{uncover 0} 						; // Planes cannot spot concealed soldiers
	{h_fov 360}
	{v_fov 360}
	("spotting" r(1))
}

{"airborne_scout"						; // Scout plane vision (better than normal plane)
	{uncover 0} 						; // Planes cannot spot concealed soldiers
	{h_fov 360}
	{v_fov 360}
	("spotting" r(1.5))
}

;/*=============== Airborne End ===============*/

;/*=============== Marine Begin ===============*/

{"marine_main"
	{h_fov 120}
	{v_fov 180}
	("spotting" r(0.85))
}

{"marine_around"
	{h_fov 360}
	{v_fov 180}
	("spotting" r(0.85))
}

{"marine_cannon"
	{h_fov 110}
	{v_fov 110}
	("spotting" r(1.3))
}

{"marine_torpedo"
	{h_fov 40}
	{v_fov 40}
	("spotting" r(0.85))
}

;/*=============== Marine End ===============*/

;/*=============== Other Begin ===============*/

{"noise_detection"								; // hearing aid
	;{uncover 5}
	;{h_fov 360}
	;{v_fov 180}
	;("hearing" args 1)
}

{"cover-detector"
	{uncover 5}
	{h_fov 60}
	{v_fov 120}
	("spotting" r(1))
}

{"animal"
	{uncover 2}
	{h_fov 360}
	{v_fov 120}
}

{"searchlight"
	{uncover 100}
	{radius 300}
	{h_fov 12}
	{v_fov 90}
	("spotting" r(3.0))
}

{"watchtower"
	{h_fov 90}
	{v_fov 90}
	("spotting" r(1))
}

(define "ultra_vision"
	{radius 20}
	{h_fov 360}
	{v_fov 180}
	{uncover %range}
)


{"start_point"	("ultra_vision" range(20))}
{"map_point"	("ultra_vision" range(20))}
{"flag_point"	("ultra_vision" range(20))}

{"none"}