		{"default"
			{clip
				{viewMin		-50	}	; camera rotate upward limit (looking down)
				{viewMax		55	}	; camera rotate downward limit (looking up)
				{distanceMin	35	}	; camera min distance from object. value / 20 = meters
				{distanceMax	150	}	; camera max distance from object. value / 20 = meters
			}
			; each level derives parameters from previous one
			{level ;0
				{linkBone	"basis"	}
				{faroffset  0 10 12 }
				{nearoffset	10 10 12	}
				{delta		20		}		; distance delta
				{ManualAccuracyZoom}
				{blur_strength 2}
				{hide_hitmarker 1}
				{disable_fow 0}
				;{forceGrass 1}
				{with_weapon
					{viewoff	"fx_light"}
				}
				{no_grain}
				{no_rim_light}
			}
			{level ;1
			    {zoom}
				{linkBone	"visor"	}
				{distanceset 		0}
				{distance			40}	; activation distance
				{delta		0		}		; distance delta
				{camera "human_zoom1.25"}
			    {offset		37.5 0.8 1.4}
				{blur_strength 30}
				{hide_hitmarker 1}
				;{forceGrass 1}
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
		{"default_mg"
			{clip
				{viewMin		-50	}	; camera rotate upward limit (looking down)
				{viewMax		55	}	; camera rotate downward limit (looking up)
				{distanceMin	35	}	; camera min distance from object. value / 20 = meters
				{distanceMax	150	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone	"basis"	}
				{faroffset  0 10 12 }
				{nearoffset	10 10 12	}
				{delta		20		}		; distance delta
				{ManualAccuracyZoom}
				{blur_strength 2}
				{hide_hitmarker 1}
				{disable_fow 0}
				{with_weapon
					{viewoff	"fx_light"}
				}
				{no_grain}
				{no_rim_light}
			}
			{level ;1
				{zoom}
				{linkBone	"visor"	}
				{distanceset 		0}
				{distance			40}	; activation distance
				{delta		0		}		; distance delta
				{camera "human_zoom1.25"}
				{offset		41.5 -2.0 2.0}
				{blur_strength 30}
				{hide_hitmarker 1}
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
		{"default_mortar"
			{clip
				{viewMin		-50	}	; camera rotate upward limit (looking down)
				{viewMax		55	}	; camera rotate downward limit (looking up)
				{distanceMin	35	}	; camera min distance from object. value / 20 = meters
				{distanceMax	150	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone	"basis"	}
				{faroffset  0 10 12 }
				{nearoffset	10 10 12	}
				{delta		20		}		; distance delta
				{ManualAccuracyZoom}
				{blur_strength 2}
				{hide_hitmarker 1}
				{disable_fow 0}
				{with_weapon
					{viewoff	"fx_light"}
				}
				{no_grain}
				{no_rim_light}
			}
			{level ;1
				{zoom}
				{linkBone	"visor"	}
				{distanceset 		0}
				{distance			40}	; activation distance
				{delta		0		}		; distance delta
				{camera "human_zoom1.25"}
				{offset		42 -2.0 2.0}
				{blur_strength 30}
				{hide_hitmarker 1}
				{disable_fow 0}
				{with_weapon
					{viewoff	"fx_light"}
				}
				{vignette	"/texture/common/environment/lens_effects/zoom_vignette_infantry_01"}
				{blur_mask	"/texture/common/environment/lens_effects/zoom_vignette_infantry_01_mask"}
				{no_grain}
				{no_rim_light}
			}
			{level ;2
				{camera "zoom2"}
				{offset 42 0 50}
			}
			{level ;3
				{camera "zoom2"}
				{offset 42 0 100}
			}
			{level ;4
				{camera "zoom2"}
				{offset 42 0 150}
			}
			{level ;5
				{camera "zoom2"}
				{offset 42 0 200}
			}
			{level ;6
				{camera "zoom2"}
				{offset 42 0 250}
			}
			{level ;7
				{camera "zoom2"}
				{offset 42 0 300}
			}
		}