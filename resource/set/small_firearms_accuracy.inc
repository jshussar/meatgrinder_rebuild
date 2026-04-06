;(include "small_firearms_reticles.inc")

;/*----------------------*/

	(define "velocity"				;// muzzle velocity in meters per second
		{speed (* 1 %mps)}
	)
	(define "fire rate"				;// rate of fire in rounds per minute 
		{recoveryTime (/ 60 (* %rpm 1.07))}

	)
	(define "reload time"			;// reload time for magazine or shell
		{rechargeTime %seconds}
	)
	(define "human health"
		{healthDamage (* 1.0 %damage)}
	)
	(define "armor health"
		{minimumDamageModifier (* 1.0 %damage)}
	)

;/*----------------------*/

	(define "accuracy_pistol"
		;("pistol_range"  r1(0.2) r2(0.8) globalaccuracy(1.00)) ;Robz  r1(0.20) r2(0.80) r3(2.50)
		{spreading 
			{radiusTable {0 0} {10 0.2} {40 0.8} {70 2.6}}
		}
	)

;/*----------------------*/

	(define "accuracy_smg"
		;("smg_range"  r1(0.9) r2(2.2) globalaccuracy(1.00)) ;Robz r1(0.33) r2(1.65) r3(3.85)
		{spreading
			{radiusTable {0 0} {10 0.4} {60 1.0} {90 1.85}}
		}
	)

;/*----------------------*/
	(define "accuracy_rifle_sniper"
		;("sniper_range" r0(0.25) r1(0.3) r2(0.6) r3(0.75) globalaccuracy(1.00))	;Robz r1(0.30) r2(0.45) r3(1.15) r4(1.55) r5(1.85)
		{spreading
			{radiusTable {0 0} {10 0.20} {40 0.40} {70 0.80} {100 0.90} {250 1.00}}
		}
	)
	
	(define "accuracy_rifle_auto_sniper"
		;("sniper_range" r0(0.3) r1(0.4) r2(0.7) r3(0.90) globalaccuracy(1.00))	;Robz r1(0.45) r2(0.60) r3(1.25) r4(1.70) r5(2.00)
		{spreading
			{radiusTable {0 0} {10 0.225} {40 0.45} {70 0.85} {100 0.925} {200 1.05}}
		}
	)
	
	(define "accuracy_scoped_fg42"
		;("sniper_range" r0(0.3) r1(0.4) r2(0.7) r3(0.90) globalaccuracy(1.00))	;Robz r1(0.45) r2(0.60) r3(1.25) r4(1.70) r5(2.00)
		{spreading
			{radiusTable {0 0} {10 0.65} {40 0.6} {70 0.9} {100 0.95} {200 1.10}}
			;higher spread at point blank on purpose due to scope and dull auto
		}
	)
	(define "accuracy_scoped_stg"
		;("sniper_range" r0(0.3) r1(0.4) r2(0.7) r3(0.90) globalaccuracy(1.00))	;Robz r1(0.45) r2(0.60) r3(1.25) r4(1.70) r5(2.00)
		{spreading
			{radiusTable {0 0} {10 0.55} {40 0.50} {70 0.90} {100 0.975} {200 1.125}}
			;higher spread at point blank on purpose due to scope and dull auto
		}
	)
	(define "accuracy_fg42"
		;("rifle_range"	r0(0.3) r1(0.5) r2(1.0) r3(1.50) globalaccuracy(1.00))	;Robz r1(0.40) r2(0.70) r3(1.50) r4(2.00) r5(2.50)
		{spreading
			{radiusTable {0 0} {10 0.3} {40 0.50} {70 1.0} {100 1.10} {130 1.2}}
 			;higher spread at point blank on purpose due to scope and dull auto
		}
	)
	(define "accuracy_rifle"
		;("rifle_range"	r0(0.3) r1(0.4) r2(0.8) r3(1.00) globalaccuracy(1.00))	;Robz r1(0.35) r2(0.60) r3(1.25) r4(1.75) r5(2.25)
		{spreading
			{radiusTable {0 0} {10 0.40} {40 0.70} {90 1.43} {110 1.85} {130 2.50}}
		}
	)
	(define "accuracy_rifle_auto"
		;("rifle_range"	r0(0.3) r1(0.5) r2(1.0) r3(1.50) globalaccuracy(1.00))	;Robz r1(0.40) r2(0.70) r3(1.50) r4(2.00) r5(2.50)
		{spreading
			{radiusTable {0 0} {10 0.40} {40 0.70} {90 1.43} {110 1.85} {130 2.10}}
		}
	)
	(define "accuracy_battle_rifle"
		;("rifle_range"	r0(0.3) r1(0.6) r2(1.2) r3(1.80) globalaccuracy(1.00))	;Robz NONE
		{spreading
			{radiusTable {0 0} {10 0.40} {40 0.70} {90 1.43} {110 1.85} {130 2.10}}
		}
	)
	(define "accuracy_assault_rifle"
		;("rifle_range"	r0(0.3) r1(0.6) r2(1.25) r3(2.00) globalaccuracy(1.00))	;Robz r1(0.825) r2(1.10) r3(2.20) r4(3.50) r5(4.00)
		{spreading
			{radiusTable {0 0} {10 0.40} {40 0.70} {90 1.43} {110 1.85} {130 2.10}}
		}
	)
	(define "accuracy_stg"
		;("rifle_range"	r0(0.3) r1(0.6) r2(1.25) r3(2.00) globalaccuracy(1.00))	;Robz r1(0.825) r2(1.10) r3(2.20) r4(3.50) r5(4.00)
		{spreading
			{radiusTable {0 0} {10 0.35} {40 0.75} {80 1.15} {110 2.05} {130 2.25}}
		}
	)
	(define "accuracy_shotgun"
		;("rifle_range"	r0(0.1) r1(0.3) r2(1.0) r3(1.25) globalaccuracy(1.00))	;Robz NONE
		("rifle_range"	r0(0.1) r1(0.3) r2(1.0) r3(1.25) globalaccuracy(1.40))	;Robz NONE
	)
	(define "accuracy_rifle_at"
		;("rifle_range"	r0(0.4) r1(0.8) r2(1.2) r3(1.50) globalaccuracy(1.00))	;Robz r1(0.30) r2(0.60) r3(1.20) r4(1.90)
		{spreading
			{radiusTable {0 0} {10 0.30} {40 0.70} {80 1.1} {100 1.4} {130 1.50}}
		}
	)

;/*----------------------*/
	(define "accuracy_mg_high"
		;("mg_range" r1(0.3) r2(1.0) r3(1.2) globalaccuracy(1.00))	;Robz r1(0.60) r2(0.96) r3(1.80) r4(2.90) r5(4.0) r6(5.0)) 
		{spreading 0.95
			{radiusTable {0 0} {30 0.50} {60 0.96} {90 1.43} {110 1.85} {130 2.15} {150 2.5}}

		}
	)
	(define "accuracy_mg"
		;("mg_range" r1(0.5) r2(1.3) r3(1.5) globalaccuracy(1.00))	;Robz r1(0.60) r2(0.96) r3(1.80) r4(2.95) r5(4.5) r6(6.0))
		{spreading
			{radiusTable {0 0} {30 0.50} {60 0.96} {90 1.43} {110 1.85} {130 2.15} {150 2.5}}
		}
	)
	(define "accuracy_mg_indirect"
		; Indirect fire MG (e.g. Vickers) - direct fire 0-130m, indirect fire 130-250m
		{spreading
			{radiusTable {0 0} {20 0.60} {40 0.96} {75 1.80} {110 2.90} {130 4.0} {131 10.0} {180 14.0} {220 17.0} {250 20.0}}
		}
	)
	(define "accuracy_mg_vickers"
		; Indirect fire MG (e.g. Vickers) - direct fire 0-130m, indirect fire 130-250m
		{spreading
			{radiusTable {0 0} {20 0.54} {40 0.77} {75 1.65} {110 2.6} {130 3.3} {131 10.0} {180 14.0} {220 17.0} {250 20.0}}
		}
	)
	(define "accuracy_mg_tank"
		;("mg_range" r1(0.3) r2(1.0) r3(1.2) globalaccuracy(1.00))	;Robz r1(0.60) r2(0.96) r3(1.80) r4(2.90) r5(4.0) r6(5.0)) 
		{spreading
			{radiusTable {0 0} {30 0.50} {60 0.96} {90 1.43} {110 1.85} {130 2.15} {150 2.5}}
		}
	)
	(define "accuracy_hmg"
		;("hmg_range" r1(0.5) r2(1.3) r3(1.5) globalaccuracy(1.00))	;Robz r1(0.60) r2(0.90) r3(1.74) r4(2.76) r5(3.5) r6(4.8))	
		{spreading
			{radiusTable {0 0} {20 0.50} {40 0.75} {75 1.1} {110 1.43} {140 1.85} {180 2.35}}
		}
	)
	(define "accuracy_hmg_tank"
		;("hmg_range" r1(0.4) r2(1.2) r3(1.4) globalaccuracy(1.00))	;Robz r1(0.60) r2(0.96) r3(1.80) r4(2.85) r5(3.5) r6(4.5)) 
		{spreading
			{radiusTable {0 0} {20 0.50} {40 0.75} {75 1.1} {110 1.43} {140 1.85} {180 2.35}}
		}
	)

	(define "accuracy_mg_plane"
		("plane_range" r1(1.0) globalaccuracy(1.00))	;Robz 
	)


;/*=========================Curves======================*/


 	(define "pistol_range"
		{spreading
			{radiusTable {0 0.02} {30 (* %globalaccuracy %r1)} {60 (* %globalaccuracy %r2)}} ;Robz {radiusTable {0 0} {10 %r1} {35 %r2} {70 %r3}}
		}
	)
	(define "smg_range"
		{spreading
			{radiusTable {0 0.02} {60 (* %globalaccuracy %r1)} {110 (* %globalaccuracy %r2)}}	;Robz {radiusTable {0 0} {10 %r1} {35 %r2} {70 %r3}}
		}
	)
 	(define "rifle_range"
		{spreading
			{radiusTable {0 0.05} {30 %r0} {60 (* %globalaccuracy %r1)} {95 (* %globalaccuracy %r2)} {120 (* %globalaccuracy %r3)}}	;Robz {radiusTable {0 0} {15 %r1} {35 %r2} {70 %r3} {100 %r4} {130 %r5}}
		}
	)
	(define "sniper_range"
		{spreading
			{radiusTable {0 0.02} {30 %r0} {60 (* %globalaccuracy %r1)} {95 (* %globalaccuracy %r2)} {120 (* %globalaccuracy %r3)} {130 (* %globalaccuracy %r3)} {180 5}}	;Robz {radiusTable {0 0} {15 %r1} {35 %r2} {70 %r3} {100 %r4} {150 %r5}}
		}
	)
	(define "mg_range"
		{spreading
			{radiusTable {0 0.04} {40 (* %globalaccuracy %r1)} {80 (* %globalaccuracy %r2)} {110 (* %globalaccuracy %r3)} {130 (* %globalaccuracy %r3)} {180 5}}	;Robz {radiusTable {0 0} {20 %r1} {40 %r2} {75 %r3} {110 %r4} {130 %r5} {150 %r6}}
		}
	)
	(define "hmg_range"
		{spreading
			{radiusTable {0 0.02} {40 (* %globalaccuracy %r1)} {80 (* %globalaccuracy %r2)} {110 (* %globalaccuracy %r3)} {150 (* %globalaccuracy %r3)} {200 5}}	;Robz {radiusTable {0 0} {20 %r1} {40 %r2} {75 %r3} {110 %r4} {130 %r5} {150 %r6}}
		}
	)
	(define "plane_range"
		{spreading
			{radiusTable {0 1} {100 (* 3 (* %globalaccuracy %r1))} {200 (* 5 (* %globalaccuracy %r1))} {300 (* 8 (* %globalaccuracy %r1))} {400 (* 10 (* %globalaccuracy %r1))}}	;Robz NONE
		}
	)


;/*====================Slope Multiplier==================*/


	(define "ap_slope_multiplier"	;use for AP and for any other Projectiles not specifically defined below
		{overmatchCalibre
			{0		0.96		0.0637	}
			{5		0.96297		0.0637	}
			{10		0.98297		0.0637	}
			{15		1.00066		0.0969	}
			{20		1.0361		0.13561	}
			{25		1.1116		0.16164	}
			{30		1.2195		0.19702	}
			{35		1.3771		0.22546	}
			{40		1.6263		0.26313	}
			{45		2.0033		0.34717	}
			{50		2.6447		0.57353	}
			{55		3.231		0.69075	}
			{60		4.0708		0.81826	}
			{65		6.2655		0.9192	}
			{70		8.6492		1.00539	}
			{75		13.7512		1.074	}
			{80		21.8713		1.17973	}
			{85		34.4862		1.28631	}
			{90		99.0000		0.00000	}
		}
	)
	
	;ROBZ
	;{RicochetEnergyDamping 	; penetration energy damping after ricochet (angle - damping)	
	;	{0 	1}	
	;	{20	0.8}
	;	{30	0.75}
	;	{45 0.4}
	;	{60 0}	
	;}
	;
	;{OvermatchDamping
	;	{0 1}
	;	{30 1.1}
	;	{55	1.15}
	;	{60	1.45}
	;	{70	4}		
	;	{90	6}		
	;}
	
	(define "ap_7_62_slope_multiplier"	;	7.62mm - 8mm bullets, MG, rifles
		{overmatchCalibre
			{0		1			0.00	}
			{20		1.10		0.015	}
			{30		1.349		0.015	}
			{40		1.704		0.011	}
			{45		2.071		0.015	}
			{50		2.442		0.014	}
			{60		3.222		0.0185	}
			{65		4.324		0.192	}
			{70		6.196		0.193	}
			{75		9.952		0.21	}
			{80		19.617		0.245	}
			{85		63.3		0.36	}
			{90		99.0000		0.00000	}
		}
	)
	(define "ap_12_slope_multiplier"	;	12.7mm bullets, HMG
		{overmatchCalibre
			{0		1			0.00	}
			{20		1.10		0.015	}
			{30		1.349		0.015	}
			{40		1.704		0.011	}
			{45		2.071		0.015	}
			{50		2.442		0.014	}
			{60		3.222		0.0185	}
			{65		4.324		0.192	}
			{70		6.196		0.193	}
			{75		9.952		0.21	}
			{80		19.617		0.245	}
			{85		63.3		0.36	}
			{90		99.0000		0.00000	}
		}
	)
	
	(define "at_rifle_slope_multiplier"	;use for AP and for any other Projectiles not specifically defined below
		{overmatchCalibre
			{0		1			0.00	}
			{20		1.10		0.015	} 
			{30		1.349		0.015	}
			{40		1.704		0.011	}
			{45		2.071		0.015	}
			{50		2.442		0.014	}
			{60		3.222		0.0185	}
			{65		4.324		0.192	}
			{70		6.196		0.193	}
			{75		9.952		0.21	}
			{80		19.617		0.245	}
			{85		63.3		0.36	}
			{90		99.0000		0.00000	}
		}
	)

	(define "apcr_slope_multiplier"	;use for APCR & HVAP Projectiles 76mm Caliber or below
		{overmatchFixed
			{0  1.00	}
			{10	1.01	}
			{10	1.03	}
			{15	1.07	}
			{20	1.13	}
			{25	1.23	}
			{30	1.36	}
			{35	1.59	}
			{40	1.90	}
			{45	2.28	}
			{50	2.78	}
			{55	3.41	}
			{60	4.23	}
			{65	5.29	}
			{70	6.69	}
			{75	8.52	}
			{80	10.93	}
			{85	14.15	}
			{90 99		}
		}
	)
	
	;ROBZ
	;{RicochetEnergyDamping 	; penetration energy damping after ricochet (angle - damping)	
	;	{0 	1}	
	;	{20	0.8}
	;	{30	0.75}
	;	{45 0.4}
	;	{60 0}	
	;}
	;
	;{OvermatchDamping
	;	{0 1}
	;	{30 1.1}
	;	{55	1.15}
	;	{60	1.45}
	;	{70	4}		
	;	{90	6}		
	;}

	(define "sway_pistol"
		{swayparams
			{bounds -7.5 6.0 -10.5 9.0}		; x -> negativeYaw, y -> positiveYaw, z -> negativePitch, w -> positive Pitch (in degree)
			{speed 0.8}						; sway speed coef
		}
	)

	(define "sway_smg"
		{swayparams
			{bounds -5.0 4.0 -7.0 6.0}		; x -> negativeYaw, y -> positiveYaw, z -> negativePitch, w -> positive Pitch (in degree)
			{speed 0.5}						; sway speed coef
		}
	)

	(define "sway_mg"
		{swayparams
			{bounds -0.3 0.2 -0.4 0.3}		; x -> negativeYaw, y -> positiveYaw, z -> negativePitch, w -> positive Pitch (in degree)
			{speed 0.3}						; sway speed coef
		}
	)

	(define "sway_rifle"
		{swayparams
			{bounds -0.3 0.2 -0.4 0.3}		; x -> negativeYaw, y -> positiveYaw, z -> negativePitch, w -> positive Pitch (in degree)
			{speed 0.2}						; sway speed coef
		}
	)

	(define "sway_sniper"
		{swayparams
			{bounds -0.4 0.3 -0.5 0.4}		; x -> negativeYaw, y -> positiveYaw, z -> negativePitch, w -> positive Pitch (in degree)
			{speed 0.4}						; sway speed coef
		}
	)

	(define "recoil_shotgun"
		{recoil
			{shoot {6.0 1.5} {0 1.25}}		; pitch / +- random and yaw / +- random, per shot, degree
			{maxAngle 90 999}						; max recoil angle (pitch/yaw), degree
			{restoreTime 999 0}			; recoil restore time, first -> minimum time, second -> additional time per shot, sec
			{restoreDelay 999}					; delay before restore, sec
		}
	)

	(define "recoil_rifle_at"
		{recoil
			{shoot {12.5 2.0} {0.5 1.75}}		; pitch / +- random and yaw / +- random, per shot, degree
			{maxAngle 90 999}						; max recoil angle (pitch/yaw), degree
			{restoreTime 999 0}			; recoil restore time, first -> minimum time, second -> additional time per shot, sec
			{restoreDelay 999}					; delay before restore, sec
		}
	)

	(define "recoil_pistol"
		{recoil
			{shoot {3.5 1.75} {0.5 1.0}}		; pitch / +- random and yaw / +- random, per shot, degree
			{maxAngle 90 999}						; max recoil angle (pitch/yaw), degree
			{restoreTime 999 0}			; recoil restore time, first -> minimum time, second -> additional time per shot, sec
			{restoreDelay 999}					; delay before restore, sec
		}
	)

	(define "recoil_stg"
		{recoil
			{shoot {0.9 0.8} {0.2 1.0}}		; pitch / +- random and yaw / +- random, per shot, degree
			{maxAngle 90 999}						; max recoil angle (pitch/yaw), degree
			{restoreTime 999 0}			; recoil restore time, first -> minimum time, second -> additional time per shot, sec
			{restoreDelay 999}					; delay before restore, sec
		}
	)

	(define "recoil_fg42"
		{recoil
			{shoot {1.5 1.0} {0.25 0.50}}		; pitch / +- random and yaw / +- random, per shot, degree
			{maxAngle 90 999}						; max recoil angle (pitch/yaw), degree
			{restoreTime 999 0}				; recoil restore time, first -> minimum time, second -> additional time per shot, sec
			{restoreDelay 999}					; delay before restore, sec
		}
	)

	(define "recoil_rifle_semi"
		{recoil
			{shoot {7.5 2.5} {0.4 1.5}}		; pitch / +- random and yaw / +- random, per shot, degree
			{maxAngle 90 999}						; max recoil angle (pitch/yaw), degree
			{restoreTime 999 0}				; recoil restore time, first -> minimum time, second -> additional time per shot, sec
			{restoreDelay 999}					; delay before restore, sec
		}
	)

	(define "recoil_rifle_bolt"
		{recoil
			{shoot {9.0 2.5} {0.5 1.0}}		; pitch / +- random and yaw / +- random, per shot, degree
			{maxAngle 90 999}						; max recoil angle (pitch/yaw), degree
			{restoreTime 999 0}				; recoil restore time, first -> minimum time, second -> additional time per shot, sec
			{restoreDelay 999}					; delay before restore, sec
		}
	)

	(define "recoil_sniper_semi"
		{recoil
			{shoot {10 2.5} {0.5 1.0}}		; pitch / +- random and yaw / +- random, per shot, degree
			{maxAngle 90 999}						; max recoil angle (pitch/yaw), degree
			{restoreTime 999 0}			; recoil restore time, first -> minimum time, second -> additional time per shot, sec
			{restoreDelay 999}					; delay before restore, sec
		}
	)

	(define "recoil_sniper_bolt"
		{recoil
			{shoot {8 2} {0.6 1.2}}		; pitch / +- random and yaw / +- random, per shot, degree
			{maxAngle 90 999}						; max recoil angle (pitch/yaw), degree
			{restoreTime 999 0}			; recoil restore time, first -> minimum time, second -> additional time per shot, sec
			{restoreDelay 999}					; delay before restore, sec
		}
	)

	(define "recoil_smg_low"
		{recoil
			{shoot {0.8 0.2} {0.1 0.25}}		; pitch / +- random and yaw / +- random, per shot, degree
			{maxAngle 90 999}						; max recoil angle (pitch/yaw), degree
			{restoreTime 999 0}				; recoil restore time, first -> minimum time, second -> additional time per shot, sec
			{restoreDelay 999}					; delay before restore, sec
		}
	)

	(define "recoil_smg_medium"
		{recoil
			{shoot {1.0 0.3} {0.15 0.4}}		; pitch / +- random and yaw / +- random, per shot, degree
			{maxAngle 90 999}						; max recoil angle (pitch/yaw), degree
			{restoreTime 999 0}				; recoil restore time, first -> minimum time, second -> additional time per shot, sec
			{restoreDelay 999}					; delay before restore, sec
		}
	)

	(define "recoil_mg_medium"
		{recoil
			{shoot {1.25 0.2} {0.2 0.4}}		; pitch / +- random and yaw / +- random, per shot, degree
			{maxAngle 90 999}						; max recoil angle (pitch/yaw), degree
			{restoreTime 999 0}				; recoil restore time, first -> minimum time, second -> additional time per shot, sec
			{restoreDelay 999}					; delay before restore, sec
		}
	)

	(define "recoil_hmg_medium"
		{recoil
			{shoot {1.5 0.75} {0.2 0.6}}		; pitch / +- random and yaw / +- random, per shot, degree
			{maxAngle 90 999}						; max recoil angle (pitch/yaw), degree
			{restoreTime 999 0}			; recoil restore time, first -> minimum time, second -> additional time per shot, sec
			{restoreDelay 999}					; delay before restore, sec
		}
	)
