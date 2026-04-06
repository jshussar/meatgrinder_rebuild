		{"vehicle.turret_mg"
			{clip
				{viewMin		-20	}	; camera rotate upward limit (looking down)
				{viewMax		30		}	; camera rotate downward limit (looking up)
				{distanceMin	200		}	; camera min distance from object. value / 20 = meters
				{distanceMax	350		}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone		"basis"	}
				{faroffset 		0 0 60	}
				{nearoffset		-30 0 45	}
				{camera			"zoom1"	}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
			}
			{level ;1
				{zoom}
				{vision_modes_active	}
				{linkBone		"turret_mgun"	}   
				{vignette	"/texture/common/environment/lens_effects/zoom_vignette_infantry_01"}
				{blur_mask	"/texture/common/environment/lens_effects/zoom_vignette_infantry_01_mask"}
				{distance		5	}
				{distanceSet	0	}
				{delta 			0	}
				{offset		0 -4 9}
				{camera			"zoom1.5"	}
				{ManualAccuracyZoom}
				{blur_strength 10}
				{disable_fow 0}
				{no_grain}
				{no_rim_light}
			}
		}
		{"vehicle.mg_turret"
			{clip
				{viewMin		-20	}	; camera rotate upward limit (looking down)
				{viewMax		30		}	; camera rotate downward limit (looking up)
				{distanceMin	200		}	; camera min distance from object. value / 20 = meters
				{distanceMax	350		}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone		"basis"	}
				{faroffset 		0 0 60	}
				{nearoffset		-30 0 45	}
				{camera			"zoom1"	}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
			}
			{level ;1
				{zoom}
				{vision_modes_active	}
				{linkBone		"mgun_turret"	}   
				{vignette	"/texture/common/environment/lens_effects/zoom_vignette_infantry_01"}
				{blur_mask	"/texture/common/environment/lens_effects/zoom_vignette_infantry_01_mask"}
				{distance		5	}
				{distanceSet	0	}
				{delta 			0	}
				{offset		0 -4 9}
				{camera			"zoom1.5"	}
				{ManualAccuracyZoom}
				{blur_strength 10}
				{disable_fow 0}
				{no_grain}
				{no_rim_light}
			}
		}
		{"vehicle.gun_rot"
			{clip
				{viewMin		-20	}	; camera rotate upward limit (looking down)
				{viewMax		30		}	; camera rotate downward limit (looking up)
				{distanceMin	200		}	; camera min distance from object. value / 20 = meters
				{distanceMax	350		}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone		"basis"	}
				{faroffset 		0 0 60	}
				{nearoffset		-30 0 45	}
				{camera			"zoom1"	}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
			}
			{level ;1
				{zoom}
				{vision_modes_active	}
				{linkBone		"gun_rot"	}   
				{vignette "/texture/common/environment/lens_effects/zoom_vignette_vehicle_01"}
				{blur_mask "/texture/common/environment/lens_effects/zoom_vignette_vehicle_01_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/zoom_vignette_vehicle_01_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_01"}
				{distance		5	}
				{distanceSet	0	}
				{delta 			0	}
				{offset		0 -4 9}
				{camera			"zoom1.5"	}
				{ManualAccuracyZoom}
				{blur_strength 10}
				{disable_fow 0}
				{no_grain}
				{no_rim_light}
			}
		}
		{"vehicle.mg_rot"
			{clip
				{viewMin		-20	}	; camera rotate upward limit (looking down)
				{viewMax		30		}	; camera rotate downward limit (looking up)
				{distanceMin	200		}	; camera min distance from object. value / 20 = meters
				{distanceMax	350		}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone		"basis"	}
				{faroffset 		0 0 60	}
				{nearoffset		-30 0 45	}
				{camera			"zoom1"	}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
			}
			{level ;1
				{zoom}
				{vision_modes_active	}
				{linkBone		"mgun_rot"	}   
				{vignette	"/texture/common/environment/lens_effects/zoom_vignette_infantry_01"}
				{blur_mask	"/texture/common/environment/lens_effects/zoom_vignette_infantry_01_mask"}
				{distance		5	}
				{distanceSet	0	}
				{delta 			0	}
				{offset		0 -4 9}
				{camera			"zoom1.5"	}
				{ManualAccuracyZoom}
				{blur_strength 10}
				{disable_fow 0}
				{no_grain}
				{no_rim_light}
			}
		}
		{"vehicle.mg_rot_carrier"
			{clip
				{viewMin		-20	}	; camera rotate upward limit (looking down)
				{viewMax		30		}	; camera rotate downward limit (looking up)
				{distanceMin	200		}	; camera min distance from object. value / 20 = meters
				{distanceMax	350		}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone		"basis"	}
				{faroffset 		0 0 60	}
				{nearoffset		-30 0 45	}
				{camera			"zoom1"	}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
			}
			{level ;1
				{zoom}
				{vision_modes_active	}
				{linkBone		"mgun_rot"	}   
				{vignette	"/texture/common/environment/lens_effects/zoom_vignette_infantry_01"}
				{blur_mask	"/texture/common/environment/lens_effects/zoom_vignette_infantry_01_mask"}
				{distance		5	}
				{distanceSet	0	}
				{delta 			0	}
				{offset		-3 -1 6}
				{camera			"zoom1.5"	}
				{ManualAccuracyZoom}
				{blur_strength 10}
				{disable_fow 0}
				{no_grain}
				{no_rim_light}
				{with_owner
					{viewoff "body"} ; removes shield to prevent clipping
				}
			}
		}
		{"vehicle.hmg_us"
			{clip
				{viewMin		-20	}	; camera rotate upward limit (looking down)
				{viewMax		30		}	; camera rotate downward limit (looking up)
				{distanceMin	200		}	; camera min distance from object. value / 20 = meters
				{distanceMax	350		}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone		"basis"	}
				{faroffset 		0 0 60	}
				{nearoffset		0 0 70	}
				{camera			"zoom1"	}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
				{no_rim_light}
			}
			{level ;1
				{zoom}
				{vision_modes_active	}
				{linkBone		"turret"	}
				{vignette	"/texture/common/environment/lens_effects/zoom_vignette_infantry_01"}
				{blur_mask	"/texture/common/environment/lens_effects/zoom_vignette_infantry_01_mask"}
				{distance		50	}
				{distanceSet	0	}
				{delta 			0	}
				{offset		80 -5 50	}
				{camera			"zoom2"	}
				{ManualAccuracyZoom}
				{blur_strength 3}
				{disable_fow 0}
			}
			{level ;2
				{camera			"zoom4"	}
			}
		}
		{"tank.light_us37"
			{clip
				{viewMin		-20	}	; camera rotate upward limit (looking down)
				{viewMax		30		}	; camera rotate downward limit (looking up)
				{distanceMin	200		}	; camera min distance from object. value / 20 = meters
				{distanceMax	350		}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone		"basis"	}
				{faroffset 		0 0 60	}
				{nearoffset		0 0 70	}
				{camera			"zoom1"	}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
				{no_rim_light}
			}
			{level ;1
				{zoom}
				{vision_modes_active	}
				{linkBone		"turret"	}
				{vignette		"/texture/common/environment/lens_effects/vehicle_telescope_us_m70d"}
				{blur_mask		"/texture/common/environment/lens_effects/zoom_vignette_vehicle_01_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/zoom_vignette_vehicle_01_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_01"}
				{distance		50	}
				{distanceSet	0	}
				{delta 			0	}
				{offset		80 -5 50	}
				{camera			"zoom2"	}
				{ManualAccuracyZoom}
				{blur_strength 3}
				{disable_fow 0}
			}
			{level ;2
				{camera			"zoom4"	}
			}
		}
		{"tank.medium_us75"
			{clip
				{viewMin		-20	}	; camera rotate upward limit (looking down)
				{viewMax		30		}	; camera rotate downward limit (looking up)
				{distanceMin	200		}	; camera min distance from object. value / 20 = meters
				{distanceMax	350		}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone		"basis"	}
				{faroffset 		0 0 60	}
				{nearoffset		0 0 70	}
				{camera			"zoom1"	}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
				{no_rim_light}
			}
			{level ;1
				{zoom}
				{vision_modes_active	}
				{linkBone		"turret"	}
				{vignette		"/texture/common/environment/lens_effects/vehicle_telescope_us_m70f"}
				{blur_mask		"/texture/common/environment/lens_effects/zoom_vignette_vehicle_01_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/zoom_vignette_vehicle_01_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_01"}
				{distance		50	}
				{distanceSet	0	}
				{delta 			0	}
				{offset		80 -5 50	}
				{camera			"zoom2"	}
				{ManualAccuracyZoom}
				{blur_strength 3}
				{disable_fow 0}
			}
			{level ;2
				{camera			"zoom4"	}
			}
		}
		{"tank.medium_us76"
			{clip
				{viewMin		-20	}	; camera rotate upward limit (looking down)
				{viewMax		30		}	; camera rotate downward limit (looking up)
				{distanceMin	200		}	; camera min distance from object. value / 20 = meters
				{distanceMax	350		}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone		"basis"	}
				{faroffset 		0 0 60	}
				{nearoffset		0 0 70	}
				{camera			"zoom1"	}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
				{no_rim_light}
			}
			{level ;1
				{zoom}
				{vision_modes_active	}
				{linkBone		"turret"	}
				{vignette		"/texture/common/environment/lens_effects/vehicle_telescope_us_m71d"}
				{blur_mask		"/texture/common/environment/lens_effects/zoom_vignette_vehicle_01_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/zoom_vignette_vehicle_01_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_01"}
				{distance		50	}
				{distanceSet	0	}
				{delta 			0	}
				{offset		95 -6 50	}
				{camera			"zoom2"	}
				{ManualAccuracyZoom}
				{blur_strength 3}
				{disable_fow 0}
			}
			{level ;2
				{camera			"zoom4"	}
			}
		}
		{"tank.medium_us90"
			{clip
				{viewMin		-20	}	; camera rotate upward limit (looking down)
				{viewMax		30		}	; camera rotate downward limit (looking up)
				{distanceMin	200		}	; camera min distance from object. value / 20 = meters
				{distanceMax	350		}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone		"basis"	}
				{faroffset 		0 0 60	}
				{nearoffset		0 0 70	}
				{camera			"zoom1"	}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
				{no_rim_light}
			}
			{level ;1
				{zoom}
				{vision_modes_active	}
				{linkBone		"turret"	}
				{vignette		"/texture/common/environment/lens_effects/vehicle_telescope_us_m76f"}
				{blur_mask		"/texture/common/environment/lens_effects/zoom_vignette_vehicle_01_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/zoom_vignette_vehicle_01_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_01"}
				{distance		50	}
				{distanceSet	0	}
				{delta 			0	}
				{offset		95 -6 50	}
				{camera			"zoom2"	}
				{ManualAccuracyZoom}
				{blur_strength 3}
				{disable_fow 0}
			}
			{level ;2
				{camera			"zoom4"	}
			}
		}
		{"td.jap"
			{clip
				{viewMin		-12	}	; camera rotate upward limit (looking down)
				{viewMax		20	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	350	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 70}
				{nearoffset -45 0 55}
				{camera "zoom1"}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
			}
			{level ;1
				{zoom}
				{vision_modes_active}
				{linkBone "visor1"}
				{offset 8 0 3}
				{vignette		"/texture/common/environment/lens_effects/vehicle_telescope_jap"}
				{blur_mask		"/texture/common/environment/lens_effects/zoom_vignette_vehicle_01_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 5}
				{distanceSet 0}
				{delta 0}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 10}
				{disable_fow 0}
				{no_rim_light}
				{soundEffect "opentop_vehicle"}
			}
			{level ;2
				{camera "zoom4"}
			}
		}
		{"tank.medium_jap"
			{clip
				{viewMin		-20	}	; camera rotate upward limit (looking down)
				{viewMax		30		}	; camera rotate downward limit (looking up)
				{distanceMin	200		}	; camera min distance from object. value / 20 = meters
				{distanceMax	350		}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone		"basis"	}
				{faroffset 		0 0 60	}
				{nearoffset		0 0 70	}
				{camera			"zoom1"	}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
				{no_rim_light}
			}
			{level ;1
				{zoom}
				{vision_modes_active	}
				{linkBone		"turret"	}
				{vignette		"/texture/common/environment/lens_effects/vehicle_telescope_jap"}
				{blur_mask		"/texture/common/environment/lens_effects/zoom_vignette_vehicle_01_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/zoom_vignette_vehicle_01_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_01"}
				{distance		50	}
				{distanceSet	0	}
				{delta 			0	}
				{offset		80 -5 50	}
				{camera			"zoom2"	}
				{ManualAccuracyZoom}
				{blur_strength 3}
				{disable_fow 0}
			}
			{level ;2
				{camera			"zoom4"	}
			}
		}
		{"tank.light_fra"
			{clip
				{viewMin		-20	}	; camera rotate upward limit (looking down)
				{viewMax		30		}	; camera rotate downward limit (looking up)
				{distanceMin	200		}	; camera min distance from object. value / 20 = meters
				{distanceMax	350		}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone		"basis"	}
				{faroffset 		0 0 60	}
				{nearoffset		0 0 70	}
				{camera			"zoom1"	}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
				{no_rim_light}
			}
			{level ;1
				{zoom}
				{vision_modes_active	}
				{linkBone		"turret"	}
				{vignette		"/texture/common/environment/lens_effects/vehicle_telescope_fra37_47"}
				{blur_mask		"/texture/common/environment/lens_effects/zoom_vignette_vehicle_01_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/zoom_vignette_vehicle_01_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_01"}
				{distance		50	}
				{distanceSet	0	}
				{delta 			0	}
				{offset		80 -5 50	}
				{camera			"zoom2"	}
				{ManualAccuracyZoom}
				{blur_strength 3}
				{disable_fow 0}
			}
			{level ;2
				{camera			"zoom4"	}
			}
		}
		{"tank.medium_fra"
			{clip
				{viewMin		-20	}	; camera rotate upward limit (looking down)
				{viewMax		30		}	; camera rotate downward limit (looking up)
				{distanceMin	200		}	; camera min distance from object. value / 20 = meters
				{distanceMax	350		}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone		"basis"	}
				{faroffset 		0 0 60	}
				{nearoffset		0 0 70	}
				{camera			"zoom1"	}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
				{no_rim_light}
			}
			{level ;1
				{zoom}
				{vision_modes_active	}
				{linkBone		"turret"	}
				{vignette		"/texture/common/environment/lens_effects/vehicle_telescope_fra47"}
				{blur_mask		"/texture/common/environment/lens_effects/zoom_vignette_vehicle_01_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/zoom_vignette_vehicle_01_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_01"}
				{distance		50	}
				{distanceSet	0	}
				{delta 			0	}
				{offset		80 -5 50	}
				{camera			"zoom2"	}
				{ManualAccuracyZoom}
				{blur_strength 3}
				{disable_fow 0}
			}
			{level ;2
				{camera			"zoom4"	}
			}
		}
		{"tank.medium_pdr2"
			{clip
				{viewMin		-20	}	; camera rotate upward limit (looking down)
				{viewMax		30		}	; camera rotate downward limit (looking up)
				{distanceMin	200		}	; camera min distance from object. value / 20 = meters
				{distanceMax	350		}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone		"basis"	}
				{faroffset 		0 0 60	}
				{nearoffset		0 0 70	}
				{camera			"zoom1"	}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
				{no_rim_light}
			}
			{level ;1
				{zoom}
				{vision_modes_active	}
				{linkBone		"turret"	}
				{vignette		"/texture/common/environment/lens_effects/vehicle_telescope_cavalier"}
				{blur_mask		"/texture/common/environment/lens_effects/zoom_vignette_vehicle_01_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/zoom_vignette_vehicle_01_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_01"}
				{distance		50	}
				{distanceSet	0	}
				{delta 			0	}
				{offset		80 -5 50	}
				{camera			"zoom2"	}
				{ManualAccuracyZoom}
				{blur_strength 3}
				{disable_fow 0}
			}
			{level ;2
				{camera			"zoom4"	}
			}
		}
		{"tank.medium_oqf40mm"
			{clip
				{viewMin		-20	}	; camera rotate upward limit (looking down)
				{viewMax		30		}	; camera rotate downward limit (looking up)
				{distanceMin	200		}	; camera min distance from object. value / 20 = meters
				{distanceMax	350		}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone		"basis"	}
				{faroffset 		0 0 60	}
				{nearoffset		0 0 70	}
				{camera			"zoom1"	}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
				{no_rim_light}
			}
			{level ;1
				{zoom}
				{vision_modes_active	}
				{linkBone		"turret"	}
				{vignette		"/texture/common/environment/lens_effects/vehicle_telescope_2pdr"}
				{blur_mask		"/texture/common/environment/lens_effects/zoom_vignette_vehicle_01_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/zoom_vignette_vehicle_01_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_01"}
				{distance		50	}
				{distanceSet	0	}
				{delta 			0	}
				{offset		80 -5 50	}
				{camera			"zoom2"	}
				{ManualAccuracyZoom}
				{blur_strength 3}
				{disable_fow 0}
			}
			{level ;2
				{camera			"zoom4"	}
			}
		}
		{"tank.medium_pdr6"
			{clip
				{viewMin		-20	}	; camera rotate upward limit (looking down)
				{viewMax		30		}	; camera rotate downward limit (looking up)
				{distanceMin	200		}	; camera min distance from object. value / 20 = meters
				{distanceMax	350		}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone		"basis"	}
				{faroffset 		0 0 60	}
				{nearoffset		0 0 70	}
				{camera			"zoom1"	}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
				{no_rim_light}
			}
			{level ;1
				{zoom}
				{vision_modes_active	}
				{linkBone		"turret"	}
				{vignette		"/texture/common/environment/lens_effects/vehicle_telescope_6pdr"}
				{blur_mask		"/texture/common/environment/lens_effects/zoom_vignette_vehicle_01_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/zoom_vignette_vehicle_01_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_01"}
				{distance		50	}
				{distanceSet	0	}
				{delta 			0	}
				{offset		80 -5 50	}
				{camera			"zoom2"	}
				{ManualAccuracyZoom}
				{blur_strength 3}
				{disable_fow 0}
			}
			{level ;2
				{camera			"zoom4"	}
			}
		}
		{"tank.medium_pdr17"
			{clip
				{viewMin		-20	}	; camera rotate upward limit (looking down)
				{viewMax		30		}	; camera rotate downward limit (looking up)
				{distanceMin	200		}	; camera min distance from object. value / 20 = meters
				{distanceMax	350		}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone		"basis"	}
				{faroffset 		0 0 60	}
				{nearoffset		0 0 70	}
				{camera			"zoom1"	}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
				{no_rim_light}
			}
			{level ;1
				{zoom}
				{vision_modes_active	}
				{linkBone		"turret"	}
				{vignette		"/texture/common/environment/lens_effects/vehicle_telescope_17pdr"}
				{blur_mask		"/texture/common/environment/lens_effects/zoom_vignette_vehicle_01_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/zoom_vignette_vehicle_01_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_01"}
				{distance		50	}
				{distanceSet	0	}
				{delta 			0	}
				{offset		80 -5 50	}
				{camera			"zoom2"	}
				{ManualAccuracyZoom}
				{blur_strength 3}
				{disable_fow 0}
			}
			{level ;2
				{camera			"zoom4"	}
			}
		}
		
		{"td.brit"
			{clip
				{viewMin		-12	}	; camera rotate upward limit (looking down)
				{viewMax		20	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	350	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 70}
				{nearoffset -45 0 55}
				{camera "zoom1"}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
			}
			{level ;1
				{zoom}
				{vision_modes_active}
				{linkBone "visor1"}
				{offset 8 0 3}
				{vignette		"/texture/common/environment/lens_effects/vehicle_telescope_eng_no30-mg"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 5}
				{distanceSet 0}
				{delta 0}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 10}
				{disable_fow 0}
				{no_rim_light}
				{soundEffect "opentop_vehicle"}
			}
			{level ;2
				{camera "zoom4"}
			}
		}
		
		{"td.medium_pdr17"
			{clip
				{viewMin		-20	}	; camera rotate upward limit (looking down)
				{viewMax		30		}	; camera rotate downward limit (looking up)
				{distanceMin	200		}	; camera min distance from object. value / 20 = meters
				{distanceMax	350		}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone		"basis"	}
				{faroffset 		0 0 60	}
				{nearoffset		0 0 70	}
				{camera			"zoom1"	}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
				{no_rim_light}
			}
			{level ;1
				{zoom}
				{vision_modes_active	}
				{linkBone		"mantlet"	}
				{vignette		"/texture/common/environment/lens_effects/vehicle_telescope_17pdr"}
				{blur_mask		"/texture/common/environment/lens_effects/zoom_vignette_vehicle_01_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/zoom_vignette_vehicle_01_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_01"}
				{distance		50	}
				{distanceSet	0	}
				{delta 			0	}
				{offset		80 -5 50	}
				{camera			"zoom2"	}
				{ManualAccuracyZoom}
				{blur_strength 3}
				{disable_fow 0}
			}
			{level ;2
				{camera			"zoom4"	}
			}
		}
		
		{"tank.medium_ita"
			{clip
				{viewMin		-20	}	; camera rotate upward limit (looking down)
				{viewMax		30		}	; camera rotate downward limit (looking up)
				{distanceMin	200		}	; camera min distance from object. value / 20 = meters
				{distanceMax	350		}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone		"basis"	}
				{faroffset 		0 0 60	}
				{nearoffset		0 0 70	}
				{camera			"zoom1"	}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
				{no_rim_light}
			}
			{level ;1
				{zoom}
				{vision_modes_active	}
				{linkBone		"turret"	}
				{vignette		"/texture/common/environment/lens_effects/vehicle_telescope_ita"}
				{blur_mask		"/texture/common/environment/lens_effects/zoom_vignette_vehicle_01_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/zoom_vignette_vehicle_01_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_01"}
				{distance		50	}
				{distanceSet	0	}
				{delta 			0	}
				{offset		80 -5 50	}
				{camera			"zoom2"	}
				{ManualAccuracyZoom}
				{blur_strength 3}
				{disable_fow 0}
			}
			{level ;2
				{camera			"zoom4"	}
			}
		}
		
		{"tank.medium_ita2"
			{clip
				{viewMin		-20	}	; camera rotate upward limit (looking down)
				{viewMax		30		}	; camera rotate downward limit (looking up)
				{distanceMin	200		}	; camera min distance from object. value / 20 = meters
				{distanceMax	350		}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone		"basis"	}
				{faroffset 		0 0 60	}
				{nearoffset		0 0 70	}
				{camera			"zoom1"	}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
				{no_rim_light}
			}
			{level ;1
				{zoom}
				{vision_modes_active	}
				{linkBone		"turret"	}
				{vignette		"/texture/common/environment/lens_effects/vehicle_telescope_ita2"}
				{blur_mask		"/texture/common/environment/lens_effects/zoom_vignette_vehicle_01_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/zoom_vignette_vehicle_01_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_01"}
				{distance		50	}
				{distanceSet	0	}
				{delta 			0	}
				{offset		80 -5 50	}
				{camera			"zoom2"	}
				{ManualAccuracyZoom}
				{blur_strength 3}
				{disable_fow 0}
			}
			{level ;2
				{camera			"zoom4"	}
			}
		}
		{"td.ita"
			{clip
				{viewMin		-12	}	; camera rotate upward limit (looking down)
				{viewMax		20	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	350	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 70}
				{nearoffset -45 0 55}
				{camera "zoom1"}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
			}
			{level ;1
				{zoom}
				{vision_modes_active}
				{linkBone "visor1"}
				{offset 8 0 3}
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_ita2"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 5}
				{distanceSet 0}
				{delta 0}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 10}
				{disable_fow 0}
				{no_rim_light}
				{soundEffect "opentop_vehicle"}
			}
			{level ;2
				{camera "zoom4"}
			}
		}
		{"td.ita2"
			{clip
				{viewMin		-12	}	; camera rotate upward limit (looking down)
				{viewMax		20	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	350	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 70}
				{nearoffset -45 0 55}
				{camera "zoom1"}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
			}
			{level ;1
				{zoom}
				{vision_modes_active}
				{linkBone "visor1"}
				{offset 8 0 3}
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_ita"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 5}
				{distanceSet 0}
				{delta 0}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 10}
				{disable_fow 0}
				{no_rim_light}
				{soundEffect "opentop_vehicle"}
			}
			{level ;2
				{camera "zoom4"}
			}
		}
		{"tank.panzer3n_ita" ; Panzer III 75mm kwk 37
			{clip
				{viewMin		-12}	; camera rotate upward limit (looking down)
				{viewMax		20 }	; camera rotate downward limit (looking up)
				{distanceMin	200}	; camera min distance from object. value / 20 = meters
				{distanceMax	350}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 70}
				{nearoffset -45 0 60}
				{camera "zoom1"}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
			}
			{level ;1
				{zoom}
				{vision_modes_active}
				{linkBone "turret"}
				{offset 52 -8 3.5}
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_5b"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 30}
				{distanceSet 0}
				{delta 0}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 5}
				{disable_fow 0}
				{no_rim_light}
				{with_owner
					{viewoff "shieldt shieldl5 shieldr5"} ; removes shield to prevent clipping
				}
				{soundEffect "enclosed_vehicle"}
			}
			{level ;2
				{camera "zoom2.5"}
			}
		}
		{"atgun.us"
			{clip
				{viewMin		-20	}	; camera rotate upward limit (looking down)
				{viewMax		30	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	350	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 80}
				{nearoffset -40 0 40}
				{camera "zoom1"}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
				{no_rim_light}
			}
			{level ;1
				{zoom}
				{vision_modes_active}
				{blur_mask "/texture/common/environment/lens_effects/zoom_vignette_infantry_01_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/zoom_vignette_vehicle_01_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_01"}
				{distance 50}
				{distanceSet 0}
				{delta 0}
				{offset 68 -7 28}
				{camera "zoom2"}
				{ManualAccuracyZoom}
				{blur_strength 3}
				{disable_fow 0}
			}
			{level ;2
				{camera "zoom4"}
			}
			{level ;3
				{camera "zoom8"}
			}
		}
		{"atgun.qf"
			{clip
				{viewMin		-20	}	; camera rotate upward limit (looking down)
				{viewMax		30	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	350	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 80}
				{nearoffset -40 0 40}
				{camera "zoom1"}
				;{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
				{no_rim_light}
			}
			{level ;1
				{zoom}
				{vision_modes_active}
				{blur_mask "/texture/common/environment/lens_effects/zoom_vignette_infantry_01_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/zoom_vignette_vehicle_01_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_01"}
				{distance 50}
				{distanceSet 0}
				{delta 0}
				{offset 68 -7 28}
				{camera "zoom2"}
				{ManualAccuracyZoom}
				{blur_strength 3}
				{disable_fow 0}
				{with_owner
					{viewoff "shieldl1"} ; removes shield to prevent clipping
				}
			}
			{level ;2
				{camera "zoom4"}
			}
			{level ;3
				{camera "zoom8"}
			}
		}
		{"tank.light_hun40"
			{clip
				{viewMin		-20	}	; camera rotate upward limit (looking down)
				{viewMax		30		}	; camera rotate downward limit (looking up)
				{distanceMin	200		}	; camera min distance from object. value / 20 = meters
				{distanceMax	350		}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone		"basis"	}
				{faroffset 		0 0 60	}
				{nearoffset		0 0 70	}
				{camera			"zoom1"	}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
				{no_rim_light}
			}
			{level ;1
				{zoom}
				{vision_modes_active	}
				{linkBone		"turret"	}
				{vignette		"/texture/common/environment/lens_effects/vehicle_telescope_toldi2"}
				{blur_mask		"/texture/common/environment/lens_effects/zoom_vignette_vehicle_01_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/zoom_vignette_vehicle_01_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_01"}
				{distance		50	}
				{distanceSet	0	}
				{delta 			0	}
				{offset		80 -5 50	}
				{camera			"zoom2"	}
				{ManualAccuracyZoom}
				{blur_strength 3}
				{disable_fow 0}
			}
			{level ;2
				{camera			"zoom4"	}
			}
		}
		{"tank.medium_hun75"
			{clip
				{viewMin		-20	}	; camera rotate upward limit (looking down)
				{viewMax		30		}	; camera rotate downward limit (looking up)
				{distanceMin	200		}	; camera min distance from object. value / 20 = meters
				{distanceMax	350		}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone		"basis"	}
				{faroffset 		0 0 60	}
				{nearoffset		0 0 70	}
				{camera			"zoom1"	}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
				{no_rim_light}
			}
			{level ;1
				{zoom}
				{vision_modes_active	}
				{linkBone		"turret"	}
				{vignette		"/texture/common/environment/lens_effects/vehicle_telescope_tzf_5b"}
				{blur_mask		"/texture/common/environment/lens_effects/zoom_vignette_vehicle_01_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/zoom_vignette_vehicle_01_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_01"}
				{distance		50	}
				{distanceSet	0	}
				{delta 			0	}
				{offset		80 -5 50	}
				{camera			"zoom2"	}
				{ManualAccuracyZoom}
				{blur_strength 3}
				{disable_fow 0}
			}
			{level ;2
				{camera			"zoom4"	}
			}
		}
		{"atgun.17-25pdr"
			{clip
				{viewMin		-20	}	; camera rotate upward limit (looking down)
				{viewMax		30		}	; camera rotate downward limit (looking up)
				{distanceMin	200		}	; camera min distance from object. value / 20 = meters
				{distanceMax	350		}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 5 53}
				{nearoffset -15 5 35}
				{camera "zoom1"}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
			}
			{level ;1
				{zoom}
				{vision_modes_active}
				{linkBone "visor"}
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_17pdr"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/zoom_vignette_vehicle_01_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_01"}
				{distance 5}
				{distanceSet 0}
				{delta 0}
				{offset -2 0 2}
				{camera "zoom2"}
				{ManualAccuracyZoom}
				{blur_strength 5}
				{disable_fow 0}
				{no_rim_light}
				{soundEffect "opentop_vehicle"}
			}
			{level ;2
				{camera "zoom4"}
			}
		}
		{"tank.tiger_p" ; Tiger
			{clip
				{viewMin 		-12}	; camera rotate upward limit (looking down)
				{viewMax		 41}	; camera rotate downward limit (looking up)
				{distanceMin	002}	; camera min distance from object. value / 20 = meters
				{distanceMax	350}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone		"basis"	}
				{faroffset 		0 0 60	}
				{nearoffset		0 0 70	}
				{camera			"zoom1"	}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
				{no_rim_light}
			}
			{level ;1
				{zoom}
				{vision_modes_active	}
				{linkBone		"turret"	}
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_9b"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance		50	}
				{distanceSet	0	}
				{delta 			0	}
				{offset		95 -6 50	}
				{camera			"zoom2"	}
				{ManualAccuracyZoom}
				{blur_strength 3}
				{disable_fow 0}
			}
			
			{level ;2
				{camera "zoom5"}
			}
		}
		{"generic.moto2w"
			{clip
				{viewMin		-40}	; camera rotate upward limit (looking down)
				{viewMax		15 }	; camera rotate downward limit (looking up)
				{distanceMin	40}		; camera min distance from object. value / 20 = meters
				{distanceMax	150}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "driver"}
				{faroffset 0 0 27}
				{nearoffset 15 0 25}
				{camera "zoom0"}
				{delta 20}			; distance delta
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
				{no_rim_light}
				{ManualAccuracyZoom}
			}
			{level ;1
			    {zoom}
				{linkBone "foresight1"}
				{distanceset 		0}
				{distance			40}	; activation distance
				{delta		0		}		; distance delta
				{camera "human_zoom1.25"}
			    {offset		37.5 0.8 1.4}
				{blur_strength 30}
				{hide_hitmarker 1}
				{forceGrass 1}
				{disable_fow 0}
				{with_weapon
					{viewoff	"fx_light"}
				}
				{vignette	"/texture/common/environment/lens_effects/zoom_vignette_infantry_01"}
				{blur_mask	"/texture/common/environment/lens_effects/zoom_vignette_infantry_01_mask"}
				{no_grain}
				{no_rim_light}
			}
		}
		
		{"tank.medium_us105"
			{clip
				{viewMin		-20	}	; camera rotate upward limit (looking down)
				{viewMax		30		}	; camera rotate downward limit (looking up)
				{distanceMin	200		}	; camera min distance from object. value / 20 = meters
				{distanceMax	350		}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone		"basis"	}
				{faroffset 		0 0 60	}
				{nearoffset		0 0 70	}
				{camera			"zoom1"	}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
				{no_rim_light}
			}
			{level ;1
				{zoom}
				{vision_modes_active	}
				{linkBone		"turret"	}
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_usa_m72d"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance		50	}
				{distanceSet	0	}
				{delta 			0	}
				{offset		80 -5 50	}
				{camera			"zoom2"	}
				{ManualAccuracyZoom}
				{blur_strength 3}
				{disable_fow 0}
			}
			{level ;2
				{camera			"zoom4"	}
			}
		}
		{"aircraft.common_mp"
			{clip
				{viewMin		-180}	; camera rotate upward limit (looking down)
				{viewMax		180	}	; camera rotate downward limit (looking up)
				{viewNear		0	}
				{viewFar		0	}	; desired view angle when zooming out (not correction)
				{viewcorrection	0	}	; percentage (from distanceMax) after which correction sets in. 80 in this case.
				{distanceMin	300	}	; camera min distance from object. value / 20 = meters
				{distanceMax	800	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "body"}
				{faroffset 0 0 60}		; camera position offect at distanceMax
				{nearoffset 0 0 50}		; camera position offect at distanceMin
				{blur_strength 2}		; blur strength modifier
				{disable_fow}			; not disabled fog of war
				{no_grain}				; no film grain (graphics setting)
				{no_rim_light}			; no rim light (graphics setting)
			}
			{level ;1
			    {zoom}
				{linkBone "visor"}
				{distanceset 		0}
				{distance			50}	; activation distance
				{delta		0		}		; distance delta
				{camera "human_zoom1.25"}
			    {offset		37.5 0.8 1.4}
				{blur_strength 30}
				{with_weapon
					{viewoff	"fx_light"}
				}
				{vignette	"/texture/common/environment/lens_effects/zoom_vignette_infantry_01"}
				{blur_mask	"/texture/common/environment/lens_effects/zoom_vignette_infantry_01_mask"}
				{disable_fow}
				{no_grain}
				{no_rim_light}
			}
		}