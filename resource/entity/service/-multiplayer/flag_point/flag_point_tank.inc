	{able "-select" "minimap"}
	{obstacleid "unbreakable"}
	
	{volume "body" {able clear}}
	
	{Volume "body1"
		{tags "body"}
		{thickness 50}
	}
	
	{sensor
		{visor "main"
    		{vision "flag_point"}
			{bone "visor"}
		}
		{operatableRequired 0}
   	}
	{Placer
		{place "side_pointer"
		}
	}
	{DecalView zoneA
		{Sprite "flagdecal.ebm"
			{Visibility 0.7}
		}
		{layer grounddynamic}
	}
	{DecalView zoneB
		{Sprite "flagdecal.ebm"
			{Visibility 0.7}
		}
		{layer grounddynamic}
	}
	
	{placer}
    {extender "structure"
		{place "sandbags" "flagpoint_sandbags"}
		{place "ammo" "flagpoint_ammo"}	
    }