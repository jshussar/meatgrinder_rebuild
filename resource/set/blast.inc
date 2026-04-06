;/*----------------------*/

;// Shell mass < 5 kg
(define "he_level_1" ;"he_small_blast"
	{damage blastwave
		{energy (+ (/ %weight 2.5) (+ 0.9 %filler))}
		{area (* 0.5 (+ (/ %weight 10) (* 5 (+ %filler 0.25))))		(+ (/ %weight 10) (* 5 (+ %filler 0.25)))}
		{ground_interaction_radius 0.5}
	}
	{damage add blastwave
		{energy (+ 1.1 (* 0.75 %filler))}
		{area (+ (* %weight 0.25) (+ 1 (* 5 %filler))) 			(+ (* %weight 0.5) (+ 4.5 (* 5 %filler))) }
		{ground_interaction_radius 0} 		;// value is multiplied by 2nd value of area to determine is blast is close enough to ground to trigger terrain fx
	}
)

;// Shell mass > 5kg and Fill mass < 1kg
(define "he_level_2" ;"he_medium_blast"
	{damage blastwave
		{energy (+ (/ %weight 3) (* 2.0 (+ %filler 0.1)))}
		{area 0.4 0.8}
		{ground_interaction_radius 0.25}
	}
	{damage add blastwave
		{energy (+ 1.0 (* %weight 0.15) )}
		{area 0.4 1.0}
		{ground_interaction_radius 0} 		
	}
	{damage add blastwave
		{energy (+ %filler (* %weight (* 1.5  (/ %filler %weight) ) ) )}
		{area (+ (* %weight 0.3) (+ 1.5 (* 2.0 %filler)))			(+ (* %weight 1.0) (+ 2 (* 1.5 %filler) ) )}
		{ground_interaction_radius 0} 		;// value is multiplied by 2nd value of area to deterimine is blast is close enough to ground to trigger terrain fx
	}
)
(define "he_level_2_offmap" ;"he_medium_blast"
	{damage blastwave
		{energy (+ (/ %weight 3) (* 2.0 (+ %filler 0.1)))}
		{area 0.4 0.8}
		{ground_interaction_radius 0.25}
	}
	{damage add blastwave
		{energy (+ 1.0 (* %weight 0.15) )}
		{area 0.4 1.0}
		{ground_interaction_radius 0} 		
	}
	{damage add blastwave
		{energy (+ %filler (* %weight (* 1.5  (/ %filler %weight) ) ) )}
		{area (+ (* %weight 0.3) (+ 1.5 (* 2.0 %filler)))			(+ (* %weight 1.2) (+ 2 (* 1.5 %filler) ) )}
		{ground_interaction_radius 0} 		;// value is multiplied by 2nd value of area to deterimine is blast is close enough to ground to trigger terrain fx
	}
)

;// Shell mass 14 - 35kg and Fill mass 1 - 5kg
(define "he_level_3" ;"he_large_blast"
	{damage blastwave
		{energy (+ (/ %weight 5) (+ 2 (* %filler 0.75)))}
		{area 0.6 1.00}
		{ground_interaction_radius 1.00}
	}
	{damage add blastwave
		{energy (+ 2 (+ (/ %weight 20) (* 1 (+ 1 (/ %filler %weight)))))}
		{area (+ (* %weight 0.1) (+ 0 (* 0.1 %filler)))			(+ (* %weight 0.2) (+ 0 (* 0.1 %filler)))}
		{ground_interaction_radius 0}		;// value is multiplied by 2nd value of area to deterimine is blast is close enough to ground to trigger terrain fx
	}
	{damage add blastwave
		{energy (+ 0.55 (* 0.4 %filler))}
		{area (+ (* %weight 0.1) (+ 5.5 (* 0.75 %filler)))			(+ (* %weight 0.11) (+ 8 (* 1 %filler)))}
		{ground_interaction_radius 0}		;// value is multiplied by 2nd value of area to deterimine is blast is close enough to ground to trigger terrain fx
	}
)

;// Shell mass > 35kg and Fill mass 5 - 10kg
(define "he_level_4" ;"he_super_blast"
	{damage blastwave
		{energy (+ (/ %weight 15) (* %filler 1))}
		{area 1.1 2.2}
		{ground_interaction_radius 0.6}
	}
	{damage add blastwave
		{energy (+ 2 (+ (/ %weight 20) (* 2 (- 1 (/ %filler %weight)))))}
		{area (+ (* %weight 0.05) (+ 0 (* 0.5 %filler)))			(+ (* %weight 0.1) (+ 0 (* 0.75 %filler)))}
		{ground_interaction_radius 0}		;// value is multiplied by 2nd value of area to deterimine is blast is close enough to ground to trigger terrain fx
	}
	{damage add blastwave
		{energy (+ 0.6 (- 1 (/ %filler %weight)))}
		{area (+ (* %weight 0.1) (+ 5 (* 0.5 %filler)))			(+ (* %weight 0.15) (+ 6 (* 1.2 %filler)))}
		{ground_interaction_radius 0}		;// value is multiplied by 2nd value of area to deterimine is blast is close enough to ground to trigger terrain fx
	}
)

;// Fill mass 10 - 25kg
(define "he_level_5" ;"he_mega_blast"
	{damage blastwave
		{energy (+ (/ %weight 25) (+ 10 (* %filler 0.3)))}
		{area 1.5 2.5}
		{ground_interaction_radius 0.8}
	}
	{damage add blastwave
		{energy (+ 2.75 (+ (/ %weight 20) (* 1.5 (- 1 (/ %filler %weight)))))}
		{area (+ (* %weight 0.03) (+ 2.25 (* 0.25 %filler)))		(+ (* %weight 0.04) (+ 5 (* 0.3 %filler)))}
		{ground_interaction_radius 0}		;// value is multiplied by 2nd value of area to deterimine is blast is close enough to ground to trigger terrain fx
	}
	{damage add blastwave
		{energy (+ 0.6 (- 1 (/ %filler %weight)))}
		{area (+ (* %weight 0.03) (+ 9 (* 0.25 %filler)))		(+ (* %weight 0.029) (+ 17 (* 0.26 %filler)))}
		{ground_interaction_radius 0}		;// value is multiplied by 2nd value of area to deterimine is blast is close enough to ground to trigger terrain fx
	}
)

;// Fill mass 25 - 100kg
(define "he_level_6"
	{damage blastwave
		{energy (* %filler 0.4)}
		{area (+ 2 (/ %filler 100)) (+ 4 (/ %filler 50))}
		{ground_interaction_radius 0.8}
	}
	{damage add blastwave
		{energy (+ (* %weight 0.005) (+ 7 (* 0.07 %filler)))}
		{area (+ (* %weight 0.005) (+ 8 (* 0.055 %filler)))			(+ (* %weight 0.005) (+ 14 (* 0.05 %filler)))}
		{ground_interaction_radius 0}		;// value is multiplied by 2nd value of area to deterimine is blast is close enough to ground to trigger terrain fx
	}
	{damage add blastwave
		{energy (+ 0.7 (- 1 (/ %filler %weight)))}
		{area (+ (* %weight 0.004) (+ 13 (* 0.104 %filler)))		(+ (* %weight 0.004) (+ 22 (* 0.11 %filler)))}
		{ground_interaction_radius 0}		;// value is multiplied by 2nd value of area to deterimine is blast is close enough to ground to trigger terrain fx
	}
)

;// Fill mass 100kg +
(define "he_level_7"
	{damage blastwave
		{energy (* %filler 0.25)}
		{area (+ 2 (/ %filler 100)) (+ 4 (/ %filler 50))}
		{ground_interaction_radius 0.8}
	}
	{damage add blastwave
		{energy (+ (* %weight 0.005) (+ 4 (* 0.085 %filler)))}
		{area (+ (* %weight 0.005) (+ 5 (* 0.055 %filler)))			(+ (* %weight 0.005) (+ 14 (* 0.054 %filler)))}
		{ground_interaction_radius 0}		;// value is multiplied by 2nd value of area to deterimine is blast is close enough to ground to trigger terrain fx
	}
	{damage add blastwave
		{energy (+ 0.75 (- 1 (/ %filler %weight)))}
		{area (+ (* %weight 0.005) (+ 11 (* 0.095 %filler)))		(+ (* %weight 0.005) (+ 20 (* 0.1 %filler)))}
		{ground_interaction_radius 0}		;// value is multiplied by 2nd value of area to deterimine is blast is close enough to ground to trigger terrain fx
	}
)

;// Fill mass 1000kg +
(define "he_level_8"
	{damage blastwave
		{energy (* %filler 0.45)}
		{area (+ 4 (/ %filler 100)) (+ 5 (/ %filler 50))}
		{ground_interaction_radius 0.8}
	}
	{damage add blastwave
		{energy (+ (* %weight 0.005) (+ 5 (* 0.02 %filler)))}
		{area (+ (* %weight 0.004) (+ 5 (* 0.008 %filler)))			(+ (* %weight 0.005) (+ 2 (* 0.054 %filler)))}
		{ground_interaction_radius 0}		;// value is multiplied by 2nd value of area to deterimine is blast is close enough to ground to trigger terrain fx
	}
	{damage add blastwave
		{energy (+ 0.55 (- 1 (/ %filler %weight)))}
		{area (+ (* %weight 0.005) (+ 0 (* 0.075 %filler)))		(+ (* %weight 0.005) (+ 15 (* 0.055 %filler)))}
		{ground_interaction_radius 0}		;// value is multiplied by 2nd value of area to deterimine is blast is close enough to ground to trigger terrain fx
	}
)


(define "wp"								;// All White Phosphorus Shells
	{damage fire
		{radius (- (* %cal 0.05) 1.5)}
		{heating 10}
		{time 0.5}
	}
	{damage blastwave
		{energy 1.5}
		{area (* %cal 0.03) (* %cal 0.05)}
		{ground_interaction_radius 0.2}		;// value is multiplied by 2nd value of area to deterimine is blast is close enough to ground to trigger terrain fx
	}
)

(define "smoke_blast"						;// All cannon Smoke Shells
	{damage blastwave
		{energy 1.5}
		{area (* %cal 0.03) (* %cal 0.05)}
		{ground_interaction_radius 0.2}		;// value is multiplied by 2nd value of area to deterimine is blast is close enough to ground to trigger terrain fx
	}
)

;/*----------------------*/

;/*----------------------*/

;// Rocket mass > 5kg and Fill mass < 1kg
(define "rocket_level_2"                                          	;bm-8
	{damage blastwave
		{energy (* 1.0 (+ (/ %weight 5) (* 3 (+ %filler 0.25))))}        ;edit first number to tweak its light-vehicle killing blast potential
		{area 0.7 2.80}
		{ground_interaction_radius 0.5}
	}
	{damage add blastwave                                                   
		{energy (+ 0.55 (- 1 (/ %filler %weight)))}						;the anti-infantry blastwave
		{area (* 1.40 (+ (* %weight 0.25) (+ 2 (* 3 %filler))))			(* 2.80 (+ (* %weight 0.5) (+ 3.5 (* 3 %filler))))}
		{ground_interaction_radius 0} 		;// value is multiplied by 2nd value of area to deterimine is blast is close enough to ground to trigger terrain fx
	}
)

;// Rocket mass 14 - 35kg and Fill mass 1 - 5kg
(define "rocket_level_3" 											; katyusha 132mm 
	{damage blastwave
		{energy (* 1.5 (+ (/ %weight 20) (+ 5 (* %filler 1))))}
		{area 0.70 2.80}
		{ground_interaction_radius 1.25}
	}
	{damage add blastwave
		{energy (+ 2 (+ (/ %weight 20) (* 1 (- 1 (/ %filler %weight)))))}
		{area 2.80			(* 1.41 (+ (* %weight 0.2) (+ 0 (* 0.1 %filler))))}
		{ground_interaction_radius 0}		;// value is multiplied by 2nd value of area to deterimine is blast is close enough to ground to trigger terrain fx
	}
	{damage add blastwave
		{energy (+ 0.55 (- 1 (/ %filler %weight)))}
		{area (* 1.40 (+ (* %weight 0.1) (+ 5.5 (* 0.75 %filler))))			(* 1.40 (+ (* %weight 0.11) (+ 9 (* 1 %filler))))}
		{ground_interaction_radius 0}		;// value is multiplied by 2nd value of area to deterimine is blast is close enough to ground to trigger terrain fx
	}
)

;// Rocket mass > 35kg and Fill mass 5 - 10kg
(define "rocket_level_4" ;
	{damage blastwave
		{energy (* 1.5 (+ (/ %weight 20) (+ 6 (* %filler 1))))}
		{area 1.05 4.20}
		{ground_interaction_radius 0.6}
	}
	{damage add blastwave
		{energy (+ 2 (+ (/ %weight 20) (* 2 (- 1 (/ %filler %weight)))))}
		{area 2.80			(* 1.4 (+ (* %weight 0.1) (+ 0 (* 0.75 %filler))))}
		{ground_interaction_radius 0}		;// value is multiplied by 2nd value of area to deterimine is blast is close enough to ground to trigger terrain fx
	}
	{damage add blastwave
		{energy (+ 0.6 (- 1 (/ %filler %weight)))}
		{area (* 1.4 (+ (* %weight 0.1) (+ 5 (* 0.5 %filler))))			(* 1.40 (+ (* %weight 0.15) (+ 6 (* 1.2 %filler))))}
		{ground_interaction_radius 0}		;// value is multiplied by 2nd value of area to deterimine is blast is close enough to ground to trigger terrain fx
	}
)

;// Rocket mass 10 - 25kg
(define "rocket_level_5" 				;                          
	{damage blastwave
		{energy (* 1.5 (+ (/ %weight 25) (+ 10 (* %filler 0.3))))}
		{area 1.40 5.60}
		{ground_interaction_radius 0.8}
	}
	{damage add blastwave
		{energy (+ 2.75 (+ (/ %weight 20) (* 1.5 (- 1 (/ %filler %weight)))))}
		{area 2.80	(* 1.40 (+ (* %weight 0.04) (+ 5 (* 0.3 %filler))))}
		{ground_interaction_radius 0}		;// value is multiplied by 2nd value of area to deterimine is blast is close enough to ground to trigger terrain fx
	}
	{damage add blastwave
		{energy (+ 0.6 (- 1 (/ %filler %weight)))}
		{area (* 1.40 (+ (* %weight 0.03) (+ 9 (* 0.25 %filler))))		(* 1.40 (+ (* %weight 0.029) (+ 17 (* 0.26 %filler))))}
		{ground_interaction_radius 0}		;// value is multiplied by 2nd value of area to deterimine is blast is close enough to ground to trigger terrain fx
	}
)

;// Rocket mass 25 - 100kg
(define "rocket_level_6"                  ;bm31 300mm
	{damage blastwave
		{energy (* 2.0 (* %filler 0.4))}
		{area 1.40 5.60}
		{ground_interaction_radius 0.8}
	}
	{damage add blastwave
		{energy (+ (* %weight 0.005) (+ 7 (* 0.07 %filler)))}
		{area 2.80	(* 1.40 (+ (* %weight 0.005) (+ 14 (* 0.05 %filler))))}
		{ground_interaction_radius 0}		;// value is multiplied by 2nd value of area to deterimine is blast is close enough to ground to trigger terrain fx
	}
	{damage add blastwave
		{energy (+ 0.7 (- 1 (/ %filler %weight)))}
		{area (* 1.40 (+ (* %weight 0.004) (+ 13 (* 0.104 %filler))))		(* 1.40 (+ (* %weight 0.004) (+ 22 (* 0.11 %filler))))}
		{ground_interaction_radius 0}		;// value is multiplied by 2nd value of area to deterimine is blast is close enough to ground to trigger terrain fx
	}
)

;// Fill mass 100kg +
(define "rocket_level_7"               ;sturmtiger
	{damage blastwave
		{energy (* 2.0 (* %filler 0.25))}            ;most intense blastwave, edit first number to tweak its anti-tank damage
		{area 2.10 12.60}							; total destruction radius. first value is where it stays max, second value is where it drops off to 0
		{ground_interaction_radius 0.8}
	}
	{damage add blastwave
		{energy (* 1.0 (+ (* %weight 0.005) (+ 4 (* 0.085 %filler))))}         ;the anti-building blast radius
		{area 16.80	(* 1.40 (+ (* %weight 0.005) (+ 14 (* 0.054 %filler))))}
		{ground_interaction_radius 0}		;// value is multiplied by 2nd value of area to deterimine is blast is close enough to ground to trigger terrain fx
	}
	{damage add blastwave
		{energy (+ 0.75 (- 1 (/ %filler %weight)))}
		{area (* 1.40 (+ (* %weight 0.005) (+ 11 (* 0.095 %filler))))		(* 2.50 (+ (* %weight 0.005) (+ 20 (* 0.1 %filler))))}
		{ground_interaction_radius 0}		;// value is multiplied by 2nd value of area to deterimine is blast is close enough to ground to trigger terrain fx
	}
)

; this one is special because the filler is huge, make the radius smaller and
; not affected by the filler *that* much
(define "rocket_rbt"
	{damage blastwave
		{energy (* 2.0 (* %filler 0.3))}
		{area 2.10 8.40}
		{ground_interaction_radius 0.8}
	}
	{damage add blastwave
		{energy (+ (* %weight 0.003) (+ 4 (* 0.05 %filler)))}
		{area 4.20	(* 1.40 (+ (* %weight 0.002) (+ 14 (* 0.02 %filler))))}
		{ground_interaction_radius 0}		;// value is multiplied by 2nd value of area to determine is blast is close enough to ground to trigger terrain fx
	}
	{damage add blastwave
		{energy (+ 0.6 (- 1 (/ %filler %weight)))}
		{area (* 1.40 (+ (* %weight 0.002) (+ 11 (* 0.03 %filler))))		(* 1.40 (+ (* %weight 0.002) (+ 20 (* 0.03 %filler))))}
		{ground_interaction_radius 0}		;// value is multiplied by 2nd value of area to determine is blast is close enough to ground to trigger terrain fx
	}
)
