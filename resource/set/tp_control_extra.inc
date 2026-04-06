; Third Person Control Definitions for Extra units
;----------German:
{"atgun.pak36.mounted"
	{clip
		{viewMin		-15	}	; camera rotate upward limit (looking down)
		{viewMax		50	}	; camera rotate downward limit (looking up)
		{distanceMin	200	}	; camera min distance from object. value / 20 = meters
		{distanceMax	350	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 50}
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
		{linkBone "gun_rot"}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_ger_zf1x11"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 5}
		{distanceSet 0}
		{delta 0}
		{offset 0 -4 9}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{disable_fow 0}
		{no_rim_light}
		{with_owner
			{viewoff "shield"} ; removes shield to prevent clipping
		}
		{soundEffect "opentop_vehicle"}
	}
	{level ;2
		{camera "zoom3"} ; in reality it did not have zoom3
	}
}
{"tank.kv1_122" 
	{clip
		{viewMin		-12	}	; camera rotate upward limit (looking down)
		{viewMax		20	}	; camera rotate downward limit (looking up)
		{distanceMin	200	}	; camera min distance from object. value / 20 = meters
		{distanceMax	350	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 75}
		{nearoffset -45 0 65}
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
		{offset 2 0 2}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_rus_pt4-7"}
		;{bump_spec_mask "/texture/common/environment/lens_effects/zoom_vignette_vehicle_01"}
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
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom4"}
	}
}

	{"sdkfz251c_9" inherit "vehicle tank.234_3"}
	{"sdkfz251d_2" inherit "vehicle mortar.common"}
	{"zgkw303f" inherit "vehicle artillery.katyusha"}
	{"88mm_raketenwerfer" inherit "vehicle fieldgun.common"}
	{"tiger_p" inherit "vehicle tank.tiger_p"}
	{"panzer2j" inherit "vehicle tank.panzer2l"}
	{"sdkfz301wanze" inherit "vehicle generic.unarmed"}
	{"dicker_max" inherit "vehicle td.stuh42"}
	{"geschuetzwagen_ivb" inherit "vehicle artillery.common"}
	{"jagdpanzer_iv" inherit "vehicle td.jagdpanther"}
	{"76mm_pak36r" inherit "vehicle atgun.common"}
	{"marder139" inherit "vehicle td.marder3m"}
	{"stug4g" inherit "vehicle td.stug3"}
	{"flakpanzer1a" inherit "vehicle vehicle.222"}
	{"sdkfz7_1_early" inherit "vehicle truck.flak30"}
	{"sdkfz251c_10" inherit "vehicle atgun.pak36.mounted"}
	{"pz5g_m10" inherit "vehicle tank.panther"}
	{"105mm_lfh16" inherit "vehicle artillery.common"}
	{"210mm_morser_16" inherit "vehicle artillery.common"}
	{"88mmflak37sfl" inherit "vehicle atgun.flak18.mounted"}
	{"tiger1e_early" inherit "vehicle tank.tiger"}
	{"panzer4f1_shielded" inherit "vehicle tank.panzer3n"}
	{"ju-52" inherit "vehicle aircraft.common"}
	{"panzer5g_steelrims" inherit "vehicle tank.panther"}
;-----------Soviet:
	{"ba11" inherit "vehicle tank.t26"}
	{"ba27m" inherit "vehicle tank.bt2"}
	{"m3_rus" inherit "vehicle vehicle.mg_rot"}
	{"m17" inherit "vehicle vehicle.hmg_us"}
	{"76mm_f22_usv" inherit "vehicle atgun.common"}
	{"bm8-48" inherit "vehicle artillery.katyusha"}
	{"su12" inherit "vehicle fieldgun.common"}
	{"su14" inherit "vehicle artillery.common"}
	{"bm_8_24" inherit "vehicle artillery.katyusha"}
	{"su5" inherit "vehicle artillery.common"}
	{"t18" inherit "vehicle tank.bt2"}
	{"matilda2" inherit "vehicle tank.medium_oqf40mm"}
	{"t44" inherit "vehicle tank.t3485"}
	{"wolverine" inherit "vehicle tank.medium_us76"}
	{"m3lee_rus" inherit "vehicle tank.medium_us75"}
	{"t26_40" inherit "vehicle tank.t26"}
	{"studebaker" inherit "vehicle generic.unarmed"}
	{"li-2" inherit "vehicle aircraft.common"}
	{"kv1_122" inherit "vehicle tank.kv1_122"}
	{"zis6_61k" inherit "vehicle truck.gaz72k"}

