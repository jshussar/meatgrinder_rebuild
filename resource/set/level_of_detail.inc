;{distance 20} = 1 meter in game

;	{"test"
;		{distance 700}		; LOD1
;		{distance 1000		; LOD2
;			{NoFog}
;			;{NoGetShadow}
;			;{NoCastShadow}
;			{off}
;		}
;	}
	{"human"
		{distance ("scale" d(300))
			; LOD1
			{NoParallax}
			{NoBump}
		}
		{distance ("scale" d(1200))
			; LOD2
			{NoGetShadow}
			{NoCastShadow}
			{NoFog}
		}
		{distance ("scale" d(1600))
			; LOD3
		}
		{distance ("scale" d(9000))
			("off")
		}
	}
	{"stuff_weapon"
		{distance ("scale" d(100))
			; LOD1
		}
		{distance ("scale" d(200))
			; LOD2
			{NoBump}
			{NoParallax}
			{NoGetShadow}
		}
		{distance ("scale" d(300))
			; LOD3
			{NoCastShadow}
		}
		{distance ("scale" d(500))
			{NoFog}
		}
		{distance ("scale" d(2000))
			("off")
		}
	}
	{"tracer"
		{distance ("scale" d(200))
			{NoParallax}
		}
		{distance ("scale" d(1000))
			{NoGetShadow}
			{NoFog}
			{NoCastShadow}
			{NoBump}
		}
		{distance ("scale" d(9000))
			("off")
		}
	}
	{"cannon"
		{distance ("scale" d(600))
			; LOD1
			{NoParallax}
			{NoBump}
		}
		{distance ("scale" d(1000))
			; LOD2
		}
		{distance ("scale" d(2000))
			{NoGetShadow}
			{NoFog}
		}
		{distance ("scale" d(3000))
			{NoCastShadow}
		}
		{distance ("scale" d(9000))
			("off")
		}
	}
	{"vehicle"
		{distance ("scale" d(600))
			; LOD1
			{NoBump}
			{NoParallax}
		}
		{distance ("scale" d(1000))
			; LOD2
		}
		{distance ("scale" d(2000))
			{NoGetShadow}
			{NoFog}
		}
		{distance ("scale" d(3000))
			{NoCastShadow}
		}
		{distance ("scale" d(9000))
			("off")
		}
	}
	{"vehicle_plane"
		{distance ("scale" d(600))
			; LOD1
			{NoBump}
			{NoParallax}
		}
		{distance ("scale" d(1000))
			; LOD2
			{NoGetShadow}
		}
		{distance ("scale" d(4000))
			{NoFog}
			{NoCastShadow}
		}
		{distance ("scale" d(12000))
			("off")
		}
	}
	{"stuff_small"
		{distance ("scale" d(200))
			; LOD1
			{NoParallax}
			{NoBump}
		}
		{distance ("scale" d(600))
			; LOD2
			{NoGetShadow}
		}
		{distance ("scale" d(800))
			{NoFog}
			{NoCastShadow}
		}
		{distance ("scale" d(2000))
			("off_small")
		}
	}
	{"stuff_grenade"
		{distance ("scale" d(200))
			; LOD1
			{NoParallax}
			{NoBump}
		}
		{distance ("scale" d(400))
			; LOD2
			{NoGetShadow}
		}
		{distance ("scale" d(1000))
			{NoFog}
			;//{NoCastShadow}
		}
		{distance ("scale" d(6000))
			("off_small")
		}
	}
	{"stuff_mine"
		{distance ("scale" d(200))
			; LOD1
			{NoParallax}
			{NoBump}
		}
		{distance ("scale" d(400))
			; LOD2
			{NoGetShadow}
		}
		{distance ("scale" d(1000))
			{NoFog}
			;//{NoCastShadow}
		}
		{distance ("scale" d(8000))
			("off_small")
		}
	}
	{"part_small"
		{distance ("scale" d(200))
			; LOD1
			{NoParallax}
			{NoBump}
		}
		{distance ("scale" d(800))
			; LOD2
			{NoGetShadow}
		}
		{distance ("scale" d(1500))
			{NoFog}
			;//{NoCastShadow}
		}
		{distance ("scale" d(3000))
			("off_small")
		}
	}
	{"casing"
		{distance ("scale" d(200))
			; LOD1
			{NoBump}
			{NoParallax}
			{NoGetShadow}
		}
		{distance ("scale" d(500))
			; LOD2
			{NoCastShadow}
			{NoFog}
		}
		{distance ("scale" d(2000))
			("off")
		}
	}
	{"part_big"
		{distance ("scale" d(600))
			; LOD1
			{NoParallax}
			{NoBump}
		}
		{distance ("scale" d(1000))
			; LOD2
		}
		{distance ("scale" d(2000))
			;//{NoGetShadow}
			{NoFog}
			;//{NoCastShadow}
		}
		{distance ("scale" d(3500))
			("off")
		}
	}
	{"decor_tiny"
		{distance ("scale" d(200))
			; LOD1
			{NoParallax}
			{NoBump}
		}
		{distance ("scale" d(800))
			; LOD2
		}
		{distance ("scale" d(1250))
			{NoFog}
			;//{NoCastShadow}
		}
		{distance ("scale" d(2000))
			("off_tiny")
		}
	}
	{"decor_small"
		{distance ("scale" d(300))
			; LOD1
			{NoParallax}
			{NoBump}
		}
		{distance ("scale" d(1000))
			; LOD2
			{NoGetShadow}
			{NoFog}
			{NoCastShadow}
		}
		{distance ("scale" d(6500))
			("off_small")
		}
	}
	{"decor_medium"
		{distance ("scale" d(600))
			; LOD1
			{NoParallax}
			{NoBump}
		}
		{distance ("scale" d(2000))
			; LOD2
			{NoFog}
			{NoCastShadow}
			{NoGetShadow}
		}
		{distance ("scale" d(9000))
			("off")
		}
	}
	
	{"decor_big"
		{distance ("scale" d(1000))
			; LOD1
			{NoParallax}
			{NoBump}
		}
		{distance ("scale" d(2500))
			; LOD2
			{NoGetShadow}
			{NoCastShadow}
			{NoFog}
		}
		{distance ("scale" d(14000))
			("off")
		}
	}
	{"concrete"
		{distance ("scale" d(1000))
			; LOD1
			{NoParallax}
		}
		{distance ("scale" d(2500))
			; LOD2
			{NoGetShadow}
			{NoCastShadow}
			{NoFog}
			{NoBump}
		}
		{distance ("scale" d(9000))
			("off")
		}
	}
	{"decor_building"
		{distance ("scale" d(1000))
			; LOD1
			{NoParallax}
			{NoBump}
		}
		{distance ("scale" d(2000))
			; LOD2
			{NoFog}
			{NoGetShadow}
		}
		{distance ("scale" d(7000))
			; LOD2
			{NoCastShadow}
		}
		{distance ("scale" d(13000))
			("off")
		}
	}
	{"decor_landmark"
		{distance ("scale" d(1000))
			; LOD1
			{NoParallax}
			{NoBump}
		}
		{distance ("scale" d(2500))
			; LOD2
			{NoFog}
			{NoGetShadow}
		}
		{distance ("scale" d(3000))
			{NoCastShadow}
		}
		{distance ("scale" d(12000))
			("off")
		}
	}
	{"decor_tree"
		{distance ("scale2" d2(850))
			; LOD1
		}
		{distance ("scale2" d2(1600))
			; LOD2
			;{NoGetShadow}
			{NoBump}
			{NoParallax}
		}
		{distance ("scale2" d2(6000))
			; LOD3 Billboard
			{NoGetShadow}
			{NoFog}
			{NoCastShadow}
		}
		{distance ("scale2" d2(10000))
			("off")
		}
	}
	{"decor_bush"
		{distance ("scale" d(750))
			; LOD1
		}
		{distance ("scale2" d2(1600))
			; LOD2
			{NoBump}
			{NoParallax}
		}
		{distance ("scale2" d2(6000))
			; LOD3 billboard
			{NoGetShadow}
			{NoFog}
			{NoCastShadow}
		}
		{distance ("scale" d(10000))
			("off_small")
		}
	}
	{"decor_trench"
		{distance ("scale" d(6000))
			; LOD1
			{NoParallax}
			{NoBump}
		}
		{distance ("scale" d(8000))
			; LOD2
			{NoGetShadow}
			{NoCastShadow}
			{NoFog}
		}
		{distance ("scale" d(10000))
			("off")
		}
	}
	{"decor_shellhole"
		{distance ("scale" d(2000))
			; LOD1
			{NoParallax}
		}
		{distance ("scale" d(3800))
			{NoBump}
			{NoCastShadow}
		}
		{distance ("scale" d(4500))
			; LOD2
			{NoGetShadow}
			{NoFog}
		}
		{distance ("scale" d(10000))
			("off")
		}
	}
	{"decor_decal"
		{distance ("scale" d(1000))
			; LOD1
			{NoParallax}
		}
		{distance ("scale" d(3000))
			; LOD2
			{NoBump}
			{NoGetShadow}
			{NoCastShadow}
			{NoFog}
		}
		{distance ("scale" d(9000))
			("off")
		}
	}
	{"huge"
		{distance ("scale" d(2000))
			; LOD1
			{NoParallax}
			{NoBump}
		}
		{distance ("scale" d(3000))
			; LOD2
		}
		{distance ("scale" d(6000))
			{NoGetShadow}
			{NoFog}
		}
		{distance ("scale" d(9000))
			{NoCastShadow}
		}
		{distance ("scale" d(14000))
			("off")
		}
	}
	
	{"enormous"
		{distance ("scale" d(2000))
			; LOD1
		}
		{distance ("scale" d(2500))
			; LOD2
			{NoParallax}
		}
		{distance ("scale" d(9000))
			{NoGetShadow}
			{NoFog}
			{NoBump}
		}
		{distance ("scale" d(12000))
			{NoCastShadow}
		}
		{distance ("scale" d(20000))
			("off")
		}
	}

;	{GrassDistance 2500}			;// the grass clip distance, no grass is rendered beyond
;	{GrassThinnerDepth 1500}		;// the distance before clip distance at which grass starts to fade out	
;	{GrassFadeDepth 500}			;// the distance before clip distance at which random grass patches start fading even faster
;	{GrassThinnerPower 2}			;// changes the distribution of early grass fading: values >1 - less patches start fading out earlier, values (0, 1] - more aggressive thinning

;==========================================

; Grass test 60

;	{GrassDistance 3000}
;	{GrassThinnerDepth 3000}
;	{GrassFadeDepth 800}
;	{GrassThinnerPower 0.85}
	
	
; Grass test 66

	{GrassDistance 3500}
	{GrassThinnerDepth 3500}
	{GrassFadeDepth 250}
	{GrassThinnerPower 0.5}

;	{GrassDistance 2500}
;	{GrassThinnerDepth 2500}
;	{GrassFadeDepth 100}
;	{GrassThinnerPower 1.0}


	(mod "mp"
		{GrassThinnerPower 0.5}
	)
	(mod "coop"
		{GrassThinnerPower 0.5}
	)
	{GrassZoomFactor 0.025}			;// allows to extend the grass clip distance based on current zoom level (in FPS mode)
	{ZoomFactor 0.1}
	{MinZoom 1}