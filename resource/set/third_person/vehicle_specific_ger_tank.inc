
{"vehicle.kubel"
	{clip
		{viewMin		-20}	; camera rotate upward limit (looking down)
		{viewMax		30 }	; camera rotate downward limit (looking up)
		{distanceMin	1}	; camera min distance from object. value / 20 = meters
		{distanceMax	350}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 8 57}
		{nearoffset -75 8 42}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "front_mgun"}
		{vignette "/texture/common/environment/lens_effects/zoom_vignette_infantry_01"}
		{blur_mask "/texture/common/environment/lens_effects/zoom_vignette_infantry_01_mask"}
		{distance 1}
		{distanceSet 0}
		{delta 0}
		{offset -45 8 9}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 10}
		{no_grain}
		{no_rim_light}
		{soundEffect "opentop_vehicle"}
	}
}

{"vehicle.kubel.dak"
	{clip
		{viewMin		-20}	; camera rotate upward limit (looking down)
		{viewMax		30 }	; camera rotate downward limit (looking up)
		{distanceMin	1}	; camera min distance from object. value / 20 = meters
		{distanceMax	350}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 54}
		{nearoffset -75 0 39}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "front_mgun"}
		{vignette "/texture/common/environment/lens_effects/zoom_vignette_infantry_01"}
		{blur_mask "/texture/common/environment/lens_effects/zoom_vignette_infantry_01_mask"}
		{distance 1}
		{distanceSet 0}
		{delta 0}
		{offset -45 -8 7}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 10}
		{no_grain}
		{no_rim_light}
		{soundEffect "opentop_vehicle"}
	}
}

{"vehicle.kfz13"
	{clip
		{viewMin		-20}	; camera rotate upward limit (looking down)
		{viewMax		30 }	; camera rotate downward limit (looking up)
		{distanceMin	200}	; camera min distance from object. value / 20 = meters
		{distanceMax	250}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 47}
		{nearoffset -30 0 45}
		{camera "zoom0"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{ManualAccuracyZoom}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "mgun_a_rot2"}
		{vignette "/texture/common/environment/lens_effects/zoom_vignette_infantry_01"}
		{blur_mask "/texture/common/environment/lens_effects/zoom_vignette_infantry_01_mask"}
		{distance 50}
		{distanceSet 0}
		{delta 0}
		{offset -15 8 9}
		{camera "zoom1.5"}
		{blur_strength 10}
		{no_grain}
		{no_rim_light}
		{soundEffect "opentop_vehicle"}
	}
}

{"vehicle.kfz14"
	{clip
		{viewMin		-20}	; camera rotate upward limit (looking down)
		{viewMax		30 }	; camera rotate downward limit (looking up)
		{distanceMin	200}	; camera min distance from object. value / 20 = meters
		{distanceMax	250}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 55}
		{nearoffset -20 0 53}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "vision_rot"}
		{camera "human_zoom4"}			; magnification x4
		{scope_vignette "/texture/common/environment/lens_effects/zoom_vignette_binoculars"}
		{blur_mask "/texture/common/environment/lens_effects/zoom_vignette_binoculars_mask"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_01"}
		{vignette_gloss 10}
		{vignette_fade_speed 5}			; factoring the speed at which the vignette fades in/out
		{hide_crosshair}
		{mouse_speed_factor 0.8}
		{distance 30}
		{distanceSet 0}
		{delta 0}
		{offset 25 0 1}
		{ManualAccuracyZoom}
		{blur_strength 10}
		{no_grain}
		{no_rim_light}
		{soundEffect "opentop_vehicle"}
	}
	{level ;2
		{camera "human_zoom8"}			; magnification x8
		{mouse_speed_factor 0.6}
	}
}

{"vehicle.221"
	{clip
		{viewMin		-20}	; camera rotate upward limit (looking down)
		{viewMax		30 }	; camera rotate downward limit (looking up)
		{distanceMin	200}	; camera min distance from object. value / 20 = meters
		{distanceMax	350}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 60}
		{nearoffset -30 0 45}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "turret"}
		{vignette "/texture/common/environment/lens_effects/zoom_vignette_infantry_01"}
		{blur_mask "/texture/common/environment/lens_effects/zoom_vignette_infantry_01_mask"}
		{distance 30}
		{distanceSet 0}
		{delta 0}
		{offset -10 0 26}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 10}
		{no_grain}
		{no_rim_light}
		{soundEffect "enclosed_vehicle"}
	}
}

{"vehicle.222"
	{clip
		{viewMin		-10}	; camera rotate upward limit (looking down)
		{viewMax		20 }	; camera rotate downward limit (looking up)
		{distanceMin	200}	; camera min distance from object. value / 20 = meters
		{distanceMax	250}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 50}
		{nearoffset -20 0 48}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "turret"}
		{offset 39 7 15.5}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_4"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 30}		; activation distance
		{distanceSet 0}
		{delta 0}
		{no_rim_light}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom2.4"}
	}
}

{"vehicle.sdkfz250.3"
	{clip
		{viewMin		-20}	; camera rotate upward limit (looking down)
		{viewMax		30 }	; camera rotate downward limit (looking up)
		{distanceMin	200}	; camera min distance from object. value / 20 = meters
		{distanceMax	350}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 60}
		{nearoffset -30 0 45}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "mgun_a_rot1"}
		{offset -15 -10 10}
		{vignette "/texture/common/environment/lens_effects/zoom_vignette_infantry_01"}
		{blur_mask "/texture/common/environment/lens_effects/zoom_vignette_infantry_01_mask"}
		{distance 30}
		{distanceSet 0}
		{delta 0}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 10}
		{disable_fow 0}
		{no_grain}
		{no_rim_light}
	}
}

{"vehicle.sdkfz250.9"
	{clip
		{viewMin		-20}	; camera rotate upward limit (looking down)
		{viewMax		30 }	; camera rotate downward limit (looking up)
		{distanceMin	200}	; camera min distance from object. value / 20 = meters
		{distanceMax	350}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 60}
		{nearoffset -30 0 45}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "turret"}
		{offset 39 7 15.5}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_4"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 30}
		{distanceSet 0}
		{delta 0}
		{no_rim_light}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom2.4"}
	}
}

{"vehicle.sdkfz250.11"
	{clip
		{viewMin		-20	}	; camera rotate upward limit (looking down)
		{viewMax		30	}	; camera rotate downward limit (looking up)
		{distanceMin	200	}	; camera min distance from object. value / 20 = meters
		{distanceMax	350	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 60}
		{nearoffset -30 0 45}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "sight"}
		{offset 5 0 0}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_ger_spzb41"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 5}
		{distanceSet 0}
		{delta 0}
		{no_rim_light}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{soundEffect "opentop_vehicle"}
	}
}

{"vehicle.hanomag"
	{clip
		{viewMin		-20}	; camera rotate upward limit (looking down)
		{viewMax		30 }	; camera rotate downward limit (looking up)
		{distanceMin	1}		; camera min distance from object. value / 20 = meters
		{distanceMax	350}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 8 60}
		{nearoffset -50 8 45}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "mgun_a_rot1"}
		{vignette "/texture/common/environment/lens_effects/zoom_vignette_infantry_01"}
		{blur_mask "/texture/common/environment/lens_effects/zoom_vignette_infantry_01_mask"}
		{distance 1}
		{distanceSet 0}
		{delta 0}
		{offset -45 8 9}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 10}
		{disable_fow 0}
		{no_grain}
		{no_rim_light}
		{soundEffect "opentop_vehicle"}
	}
}

{"vehicle.sdkfz251.17"
	{clip
		{viewMin		-20}	; camera rotate upward limit (looking down)
		{viewMax		30 }	; camera rotate downward limit (looking up)
		{distanceMin	1}		; camera min distance from object. value / 20 = meters
		{distanceMax	350}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 60}
		{nearoffset -50 0 50}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "camera"}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_ger_20mm"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 1}
		{distanceSet 0}
		{delta 0}
		{offset 0 0 0}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 10}
		{disable_fow 0}
		{no_grain}
		{no_rim_light}
		{with_owner
			{viewoff "magazine"} ; removes shield to prevent clipping
		}
		{soundEffect "opentop_vehicle"}
	}
}

{"vehicle.sdkfz251.21"
	{clip
		{viewMin		-20}	; camera rotate upward limit (looking down)
		{viewMax		30 }	; camera rotate downward limit (looking up)
		{distanceMin	1}		; camera min distance from object. value / 20 = meters
		{distanceMax	350}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 60}
		{nearoffset -50 0 50}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "camera"}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_rus_hmg"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 1}
		{distanceSet 0}
		{delta 0}
		{offset 0 0 0}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 10}
		{disable_fow 0}
		{no_grain}
		{no_rim_light}
		{with_owner
			{viewoff "gun_shield"} ; removes shield to prevent clipping
		}
		{soundEffect "opentop_vehicle"}
	}
}

{"vehicle.sdkfz251.22"
	{clip
		{viewMin		-20}	; camera rotate upward limit (looking down)
		{viewMax		30 }	; camera rotate downward limit (looking up)
		{distanceMin	1}		; camera min distance from object. value / 20 = meters
		{distanceMax	350}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 60}
		{nearoffset -50 0 48}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "gun_rot"}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_zf3x8ii"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 1}
		{distanceSet 0}
		{delta 0}
		{offset 10 -8 2}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 10}
		{disable_fow 0}
		{no_grain}
		{no_rim_light}
		{soundEffect "opentop_vehicle"}
	}
	{level ;2
		{camera "zoom3"}
	}
}

{"tank.panhard"
	{clip
		{viewMin		-15}	; camera rotate upward limit (looking down)
		{viewMax		20 }	; camera rotate downward limit (looking up)
		{distanceMin	200}	; camera min distance from object. value / 20 = meters
		{distanceMax	400}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 70}
		{nearoffset -40 0 60}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "visor1"}
		{offset -4 0 3.5}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_ger_l711"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 5}
		{distanceSet 0}
		{delta 0}
		{no_rim_light}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{disable_fow 0}
		{soundEffect "opentop_vehicle"}
	}
	{level ;2
		{camera "zoom4"}
	}
}

{"tank.puma" ;
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
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "turret"}
		{offset 50 -6.5 1.5}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_ger_tzf_4b"}
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

{"tank.234_3" ; Short 7.5cm gun
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
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "turret"}
		{offset 50 -6.5 1.5}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_ger_sflz1"}
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
		{soundEffect "opentop_vehicle"}
	}
	{level ;2
		{camera "zoom5"}
	}
}

{"tank.234_4" ; 7.5cm Pak 40 gun
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
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "turret"}
		{offset 45 -6.5 10.5}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_zf3x8ii"}
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
		{soundEffect "opentop_vehicle"}
	}
	{level ;2
		{camera "zoom3"}
	}
}

{"tank.panzer1b" ; Panzer I B
	{clip
		{viewMin		-12}	; camera rotate upward limit (looking down)
		{viewMax		20 }	; camera rotate downward limit (looking up)
		{distanceMin	200}	; camera min distance from object. value / 20 = meters
		{distanceMax	350}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 50}
		{nearoffset -25 0 40}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "turret"}
		{offset 35 -5.0 6}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_2"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 30}
		{distanceSet 0}
		{delta 0}
		{no_rim_light}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{disable_fow 0}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom2.4"}
	}
}

{"tank.panzer1f" ; Panzer I F
	{clip
		{viewMin		-15}	; camera rotate upward limit (looking down)
		{viewMax		25 }	; camera rotate downward limit (looking up)
		{distanceMin	200}	; camera min distance from object. value / 20 = meters
		{distanceMax	350}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 50}
		{nearoffset -25 0 48}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "turret"}
		{offset 40 0 7}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_4"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 30}
		{distanceSet 0}
		{delta 0}
		{no_rim_light}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{disable_fow 0}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom2.4"}
	}
}

{"tank.panzer2c" ; Panzer II
	{clip
		{viewMin		-11}	; camera rotate upward limit (looking down)
		{viewMax		24 }	; camera rotate downward limit (looking up)
		{distanceMin	200}	; camera min distance from object. value / 20 = meters
		{distanceMax	350}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 50}
		{nearoffset -20 0 45 }
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "turret"}
		{offset 39 0 6.0}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_4"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 30}
		{distanceSet 0}
		{delta 0}
		{no_rim_light}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{disable_fow 0}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom2.4"}
	}
}

{"tank.panzer2f" ; Panzer II
	{clip
		{viewMin		-11}	; camera rotate upward limit (looking down)
		{viewMax		24 }	; camera rotate downward limit (looking up)
		{distanceMin	200}	; camera min distance from object. value / 20 = meters
		{distanceMax	350}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 50}
		{nearoffset -20 0 48}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "turret"}
		{offset 43 0 6.5}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_4"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 30}
		{distanceSet 0}
		{delta 0}
		{no_rim_light}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{disable_fow 0}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom2.4"}
	}
}

{"tank.panzer2l" ; Panzer II
	{clip
		{viewMin		-12}	; camera rotate upward limit (looking down)
		{viewMax		20 }	; camera rotate downward limit (looking up)
		{distanceMin	200}	; camera min distance from object. value / 20 = meters
		{distanceMax	350}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 50}
		{nearoffset -20 0 50}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "turret"}
		{offset 42 6.0 4.5}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_4"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 30}
		{distanceSet 0}
		{delta 0}
		{no_rim_light}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{disable_fow 0}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom2.4"}
	}
}

{"tank.panzer35t" ; Panzer 35t
	{clip
		{viewMin		-12}	; camera rotate upward limit (looking down)
		{viewMax		20 }	; camera rotate downward limit (looking up)
		{distanceMin	200}	; camera min distance from object. value / 20 = meters
		{distanceMax	350}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 60}
		{nearoffset -25 0 50}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "turret"}
		{offset 38 -5.0 4.5}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_38t"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 30}
		{distanceSet 0}
		{delta 0}
		{no_rim_light}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{disable_fow 0}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom2.4"}
	}
}

{"tank.panzer38t" ; Panzer 38t
	{clip
		{viewMin		-12}	; camera rotate upward limit (looking down)
		{viewMax		20 }	; camera rotate downward limit (looking up)
		{distanceMin	200}	; camera min distance from object. value / 20 = meters
		{distanceMax	350}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 55}
		{nearoffset -25 0 50}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "turret"}
		{offset 40 -6.5 -2}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_38t"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 30}
		{distanceSet 0}
		{delta 0}
		{no_rim_light}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{disable_fow 0}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom2.4"}
	}
}

{"tank.h39_turret" ; Panzer 38h turret emplacement
	{clip
		{viewMin		-16}	; camera rotate upward limit (looking down)
		{viewMax		25 }	; camera rotate downward limit (looking up)
		{distanceMin	200}	; camera min distance from object. value / 20 = meters
		{distanceMax	250}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 25}
		{nearoffset -30 0 20}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "turret"}
		{offset 40 -3 12}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_5a"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 30}
		{distanceSet 0}
		{delta 0}
		{no_rim_light}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom2.5"}
	}
}

{"tank.panzer38h" ; Panzer 38h 37mm
	{clip
		{viewMin		-16}	; camera rotate upward limit (looking down)
		{viewMax		25 }	; camera rotate downward limit (looking up)
		{distanceMin	200}	; camera min distance from object. value / 20 = meters
		{distanceMax	250}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 50}
		{nearoffset -20 0 48}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "turret"}
		{offset 40 -3 12}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_5a"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 30}
		{distanceSet 0}
		{delta 0}
		{no_rim_light}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom2.5"}
	}
}

{"tank.panzer35s"
	{clip
		{viewMin		-23}	; camera rotate upward limit (looking down)
		{viewMax		23 }	; camera rotate downward limit (looking up)
		{distanceMin	200}	; camera min distance from object. value / 20 = meters
		{distanceMax	250}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 60}
		{nearoffset -20 0 58}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "turret"}
		{offset 45 -3 14}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_zf3x8"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 30}
		{distanceSet 0}
		{delta 0}
		{no_rim_light}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{disable_fow 0}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom4"}
	}
}

{"tank.panzer3e" ; Panzer III 37mm
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
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "turret"}
		{offset 46 -5.5 1}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_5a"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 30}
		{distanceSet 0}
		{delta 0}
		{no_rim_light}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{disable_fow 0}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom2.5"}
	}
}

{"tank.panzer3f" ; Panzer III 50mm short barrel
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
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "turret"}
		{offset 50 -6.5 1.5}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_5d"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{no_rim_light}
		{distance 30}
		{distanceSet 0}
		{delta 0}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{disable_fow 0}
		{with_owner
			{viewoff "detail7"} ; removes shield to prevent clipping
		}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom2.5"}
	}
}

{"tank.panzer3l" ; Panzer III 50mm long barrel
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
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "turret"}
		{offset 50 -6.5 1.5}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_5e"}
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

{"tank.panzer3flamm" ; Panzer III 50mm long barrel
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
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "turret"}
		{offset 50 -6.5 1.5}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_2"}
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

{"tank.panzer3n" ; Panzer III 75mm kwk 37
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
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "turret"}
		{offset 52 -8 1.5}
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

{"tank.panzer4b" ; Panzer IV 75mm kwk 37
	{clip
		{viewMin		-12}	; camera rotate upward limit (looking down)
		{viewMax		20 }	; camera rotate downward limit (looking up)
		{distanceMin	1}		; camera min distance from object. value / 20 = meters
		{distanceMax	350}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "turret"}
		{faroffset 0 0 40}
		{nearoffset 0 0 25}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "sight"}
		{offset 1 1 0}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_5b"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 75}
		{distanceSet 1}
		{delta 0}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{no_grain}
		{no_rim_light}
		{with_owner
			;{viewoff "shieldt shieldl5 shieldr5"} ; removes shield to prevent clipping
		}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom2.5"}
	}
}

{"tank.panzer4f2" ; Panzer IV F2, G
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
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "turret"}
		{offset 52 -8 1.5}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_5f"}
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
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom2.5"}
	}
}

{"tank.wirbelwind" ;
	{clip
		{viewMin		-12}	; camera rotate upward limit (looking down)
		{viewMax		80 }	; camera rotate downward limit (looking up)
		{distanceMin	200}	; camera min distance from object. value / 20 = meters
		{distanceMax	350}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 90}
		{nearoffset 0 0 80}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "sight"}
		{offset 15 0 -3}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_ger_20mm"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 30}
		{distanceSet 0}
		{delta 0}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{no_rim_light}
		{soundEffect "opentop_vehicle"}
	}
	{level ;2
		{camera "zoom3"}
	}
}
{"tank.ostwind" ;
	{clip
		{viewMin		-12}	; camera rotate upward limit (looking down)
		{viewMax		80 }	; camera rotate downward limit (looking up)
		{distanceMin	200}	; camera min distance from object. value / 20 = meters
		{distanceMax	350}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 80}
		{nearoffset -50 0 80}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "sight"}
		{offset 30 -0.3 1.5}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_ger_37mm"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 40}
		{distanceSet 0}
		{delta 0}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{no_rim_light}
		{soundEffect "opentop_vehicle"}
	}
	{level ;2
		{camera "zoom3"}
	}
}

{"tank.pz756r" ; Panzer 756r
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
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "turret"}
		{offset 52 8 14}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_5f"}
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
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom2.5"}
	}
}

{"tank.panzer4h" ; Panzer IV H, J
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
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "turret"}
		{offset 52 -8 1.5}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_5f1"}
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
			{viewoff "shieldt turret_basket"} ; removes shield to prevent clipping
		}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom2.5"}
	}
}

{"tank.panther" ; Panther tanks
	{clip
		{viewMin		-12}	; camera rotate upward limit (looking down)
		{viewMax		 41}	; camera rotate downward limit (looking up)
		{distanceMin	002}	; camera min distance from object. value / 20 = meters
		{distanceMax	350}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "fxfire3"}
		{faroffset 0 7 30}
		{nearoffset 5 7 16}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "fxfire3"}
		{offset 55 0 6}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_12a"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 30}
		{distanceSet 0}
		{delta 0}
		{no_rim_light}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{disable_fow 0}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom5"}
	}
}

{"tank.panzerb2"
	{clip
		{viewMin		-21}	; camera rotate upward limit (looking down)
		{viewMax		23 }	; camera rotate downward limit (looking up)
		{distanceMin	200}	; camera min distance from object. value / 20 = meters
		{distanceMax	250}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 65}
		{nearoffset -20 0 63}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "turret"}
		{offset 43 -2 16}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_zf3x8"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 30}
		{distanceSet 0}
		{delta 0}
		{no_rim_light}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom4"}
	}
}

{"tank.tigerh" ; Tiger
	{clip
		{viewMin 		-12}	; camera rotate upward limit (looking down)
		{viewMax		 41}	; camera rotate downward limit (looking up)
		{distanceMin	002}	; camera min distance from object. value / 20 = meters
		{distanceMax	350}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "fxfire3"}
		{faroffset 0 10 27}
		{nearoffset 5 10 10.5}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "fxfire3"}
		{offset 55 1 3}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_9b"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 30}
		{distanceSet 0}
		{delta 0}
		{no_rim_light}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{disable_fow 0}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom5"}
	}
}

{"tank.tiger" ; Tiger
	{clip
		{viewMin 		-12}	; camera rotate upward limit (looking down)
		{viewMax		 41}	; camera rotate downward limit (looking up)
		{distanceMin	002}	; camera min distance from object. value / 20 = meters
		{distanceMax	350}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "fxfire3"}
		{faroffset 0 10 27}
		{nearoffset 5 10 10.5}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "fxfire3"}
		{offset 55 1 3}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_9b"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 30}
		{distanceSet 0}
		{delta 0}
		{no_rim_light}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{disable_fow 0}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom5"}
	}
}

{"tank.tiger2p" ; Tiger II early production turret
	{clip
		{viewMin		-12}	; camera rotate upward limit (looking down)
		{viewMax		 41}	; camera rotate downward limit (looking up)
		{distanceMin	002}	; camera min distance from object. value / 20 = meters
		{distanceMax	350}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "fxfire3"}
		{faroffset 0 8.5 30}
		{nearoffset 5 8.5 16}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "fxfire3"}
		{offset 55 0 6}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_9b"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 30}
		{distanceSet 0}
		{delta 0}
		{no_rim_light}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{disable_fow 0}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom5"}
	}
}

{"tank.tiger2h" ; Tiger II late production turret
	{clip
		{viewMin		-12}	; camera rotate upward limit (looking down)
		{viewMax		 41}	; camera rotate downward limit (looking up)
		{distanceMin	002}	; camera min distance from object. value / 20 = meters
		{distanceMax	350}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "fxfire3"}
		{faroffset 0 8.5 30}
		{nearoffset 5 8.5 16}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "fxfire3"}
		{offset 53 0 7}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_9d"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 30}
		{distanceSet 0}
		{delta 0}
		{no_rim_light}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{disable_fow 0}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom5"}
	}
}

{"td.panzerjaeger"
	{clip
		{viewMin		-12}	; camera rotate upward limit (looking down)
		{viewMax		20 }	; camera rotate downward limit (looking up)
		{distanceMin	200}	; camera min distance from object. value / 20 = meters
		{distanceMax	400}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 60}
		{nearoffset -30 0 50}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "visor1"}
		{offset 14 -11 -8}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_zf3x8"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 5}
		{distanceSet 0}
		{delta 0}
		{no_rim_light}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{disable_fow 0}
		{with_owner
			{viewoff "turretshield"} ; removes shield to prevent clipping
		}
		{soundEffect "opentop_vehicle"}
	}
	{level ;2
		{camera "zoom4"}
	}
}

{"td.geschutzwagen" ; geschutzwagen 39h
	{clip
		{viewMin		-12}	; camera rotate upward limit (looking down)
		{viewMax		20 }	; camera rotate downward limit (looking up)
		{distanceMin	200}	; camera min distance from object. value / 20 = meters
		{distanceMax	400}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 65}
		{nearoffset -40 0 60}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "visor1"}
		{offset 0 0 0}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_zf3x8ii"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 5}
		{distanceSet 0}
		{delta 0}
		{no_rim_light}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{disable_fow 0}
		{with_owner
			{viewoff "detail8"} ; removes shield to prevent clipping
		}
		{soundEffect "opentop_vehicle"}
	}
	{level ;2
		{camera "zoom3"}
	}
}

{"td.marder2" ; Marder II
	{clip
		{viewMin		-12}	; camera rotate upward limit (looking down)
		{viewMax		20 }	; camera rotate downward limit (looking up)
		{distanceMin	200}	; camera min distance from object. value / 20 = meters
		{distanceMax	400}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 65}
		{nearoffset -40 0 60}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "visor1"}
		{offset 0 0 0}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_zf3x8ii"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 5}
		{distanceSet 0}
		{delta 0}
		{no_rim_light}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{disable_fow 0}
		{soundEffect "opentop_vehicle"}
	}
	{level ;2
		{camera "zoom3"}
	}
}

{"td.marder3m" ; Marder IIIm
	{clip
		{viewMin		-12}	; camera rotate upward limit (looking down)
		{viewMax		20 }	; camera rotate downward limit (looking up)
		{distanceMin	200}	; camera min distance from object. value / 20 = meters
		{distanceMax	400}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 65}
		{nearoffset -40 0 60}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "turret"}
		{offset 30 -6 10}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_zf3x8ii"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 20}
		{distanceSet 0}
		{delta 0}
		{no_rim_light}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{disable_fow 0}
		{soundEffect "opentop_vehicle"}
	}
	{level ;2
		{camera "zoom3"}
	}
}

{"td.grille" ; mk103mm
	{clip
		{viewMin		-12}	; camera rotate upward limit (looking down)
		{viewMax		20 }	; camera rotate downward limit (looking up)
		{distanceMin	200}	; camera min distance from object. value / 20 = meters
		{distanceMax	400}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 65}
		{nearoffset -40 0 60}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "turret"}
		{offset 5 7 21}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_ger_zf1x40"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 10}
		{distanceSet 0}
		{delta 0}
		{no_rim_light}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{disable_fow 0}
		{soundEffect "opentop_vehicle"}
	}
	{level ;2
		{camera "zoom4"}
	}
}

{"td.jagdpanther"
	{clip
		{viewMin		-15}	; camera rotate upward limit (looking down)
		{viewMax		20 }	; camera rotate downward limit (looking up)
		{distanceMin	200}	; camera min distance from object. value / 20 = meters
		{distanceMax	400}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 75}
		{nearoffset -40 0 65}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "visor1"}
		{offset 5 0 3}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_wzf1-4"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 5}
		{distanceSet 0}
		{delta 0}
		{no_rim_light}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{disable_fow 0}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom4"}
	}
	{level ;3
		{camera "zoom10"}
	}
}

{"td.ferdinand"
	{clip
		{viewMin		-15}	; camera rotate upward limit (looking down)
		{viewMax		20 }	; camera rotate downward limit (looking up)
		{distanceMin	200}	; camera min distance from object. value / 20 = meters
		{distanceMax	400}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 85}
		{nearoffset -40 0 75}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "visor1"}
		{offset 6 0 3}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_ger_sflz1a"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 5}
		{distanceSet 0}
		{delta 0}
		{no_rim_light}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{disable_fow 0}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom5"}
	}
}

{"td.hetzer"
	{clip
		{viewMin		-15}	; camera rotate upward limit (looking down)
		{viewMax		20 }	; camera rotate downward limit (looking up)
		{distanceMin	200}	; camera min distance from object. value / 20 = meters
		{distanceMax	400}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 65}
		{nearoffset -25 0 50}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "visor1"}
		{offset 5 0 2.5}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_ger_sflz5a"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 5}
		{distanceSet 0}
		{delta 0}
		{no_rim_light}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{disable_fow 0}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom5"}
	}
}

{"td.stug3b"
	{clip
		{viewMin		-15}	; camera rotate upward limit (looking down)
		{viewMax		20 }	; camera rotate downward limit (looking up)
		{distanceMin	200}	; camera min distance from object. value / 20 = meters
		{distanceMax	400}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 65}
		{nearoffset -25 0 55}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "visor1"}
		{offset 3 0 3}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_ger_sflz1"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 5}
		{distanceSet 0}
		{delta 0}
		{no_rim_light}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{disable_fow 0}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom5"}
	}
}

{"td.stug3"
	{clip
		{viewMin		-15}	; camera rotate upward limit (looking down)
		{viewMax		20 }	; camera rotate downward limit (looking up)
		{distanceMin	200}	; camera min distance from object. value / 20 = meters
		{distanceMax	400}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 65}
		{nearoffset -25 0 55}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "visor1"}
		{offset 3 0 3}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_ger_sflz5a"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 5}
		{distanceSet 0}
		{delta 0}
		{no_rim_light}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{disable_fow 0}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom5"}
	}
}

{"td.stuh42"
	{clip
		{viewMin		-15	}	; camera rotate upward limit (looking down)
		{viewMax		20	}	; camera rotate downward limit (looking up)
		{distanceMin	200	}	; camera min distance from object. value / 20 = meters
		{distanceMax	400	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 65}
		{nearoffset -25 0 55}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "visor1"}
		{offset 3 0 3}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_ger_rblf36"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 5}
		{distanceSet 0}
		{delta 0}
		{no_rim_light}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{disable_fow 0}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom5"}
	}
}

{"td.sig33b"
	{clip
		{viewMin		-15	}	; camera rotate upward limit (looking down)
		{viewMax		20	}	; camera rotate downward limit (looking up)
		{distanceMin	200	}	; camera min distance from object. value / 20 = meters
		{distanceMax	400	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 65}
		{nearoffset -25 0 55}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "visor1"}
		{offset 3 0 5}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_ger_rblf36"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 5}
		{distanceSet 0}
		{delta 0}
		{no_rim_light}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{disable_fow 0}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom5"}
	}
}

{"td.bison"
	{clip
		{viewMin		-15}	; camera rotate upward limit (looking down)
		{viewMax		20 }	; camera rotate downward limit (looking up)
		{distanceMin	200}	; camera min distance from object. value / 20 = meters
		{distanceMax	400}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 75}
		{nearoffset -25 0 65}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "gun_rot"}
		{offset 10 0 10}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_ger_rblf36"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 10}
		{distanceSet 0}
		{delta 0}
		{no_rim_light}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{disable_fow 0}
		{soundEffect "opentop_vehicle"}
	}
	{level ;2
		{camera "zoom5"}
	}
}

{"td.grille_k"
	{clip
		{viewMin		-15}	; camera rotate upward limit (looking down)
		{viewMax		20 }	; camera rotate downward limit (looking up)
		{distanceMin	200}	; camera min distance from object. value / 20 = meters
		{distanceMax	400}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 75}
		{nearoffset -25 0 65}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{vignette "/texture/common/environment/lens_effects/zoom_vignette_artillery_01"}
		{blur_mask "/texture/common/environment/lens_effects/zoom_vignette_infantry_01_mask"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_01"}
		{refraction_mask "/texture/common/environment/lens_effects/zoom_vignette_artillery_bp"}
		{distance 50}
		{distanceset 1}
		{delta 0}
		{linkBone "gun"}
		{offset 75 0 300}
		{gunnerviewoff 1}
		{camera "zoom1.5"}
		;{ManualAccuracyZoom}
		{blur_strength 10}
		{disable_fow 0}
		{no_rim_light}
		{soundEffect "opentop_vehicle"}
	}
	{level ;2
		{camera "zoom4"}
		{offset 100 0 500}
	}
	{level ;3
		{camera "zoom4"}
		{offset 200 0 600}
	}
	{level ;4
		{camera "zoom4"}
		{offset 300 0 700}
	}
	{level ;5
		{camera "zoom4"}
		{offset 400 0 800}
	}
	{level ;6
		{camera "zoom4"}
		{offset 500 0 900}
	}
	{level ;7
		{camera "zoom4"}
		{offset 600 0 1000}
	}
}

{"td.sturmtiger"
	{clip
		{viewMin		-15}	; camera rotate upward limit (looking down)
		{viewMax		45 }	; camera rotate downward limit (looking up)
		{distanceMin	200}	; camera min distance from object. value / 20 = meters
		{distanceMax	400}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 75}
		{nearoffset -25 0 60}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "visor1"}
		{offset 10 0 3}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_zf3x8"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 15}
		{distanceSet 0}
		{delta 0}
		{no_rim_light}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{disable_fow 0}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom5"}
	}
}

{"td.jagdtiger"
	{clip
		{viewMin		-15}	; camera rotate upward limit (looking down)
		{viewMax		20 }	; camera rotate downward limit (looking up)
		{distanceMin	200}	; camera min distance from object. value / 20 = meters
		{distanceMax	400}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 85}
		{nearoffset -40 0 75}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "sight"}
		{offset 6 0 3}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_ger_sflz1a"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 5}
		{distanceSet 0}
		{delta 0}
		{no_rim_light}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 0}
		{disable_fow 1}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom5"}
	}
	{level ;3
		{camera "zoom10"}
	}
}