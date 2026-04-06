	{extender "fortification"
		{level
			;{built}					; already built when Entity spawns
			{steps 2}					; elements on each quarter of the circle - set to 0 to have 1 element in the center
			{radius 5}					; radius in game length
			;{angle 45}					; rotation of the fortification circle - omit to set the angle automatically
			{azimuth +2} 				; azimuth for every element - omit to set the azimuth automatically
			;{elementAngle 0}			; rotation of every element - omit to set the elementAngle automatically
			{buildTime 60}				; time that a single engineer will require to build this fortification level
			{entity "sandbag_structured_curved"}	; name of entity used for the fortification
			;{skip "0 1 2"}				; elements that will not be built, counting from the right of the Entity
			;{verifyPlacement}
		}
		{level
			{steps 1}
			{radius 3}
			{buildTime 60}
			{entity "sandbag_framed_straight"}
		}
	}