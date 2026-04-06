; == late WAR STANDARD RESOURCES ==
(define "standard_all"
	{common
		{unitset
			{value "44|45^conquestonly|doctrineonly"}
		}
		{commandPoints "*=%cp"}
		(include "global_parameters/unitlimits.inc")
		{chargeFactors
			{value "*=1.00"}
		}
		(include "global_parameters/budget.inc" s(%start) f(%finish) d(%doctrine))
	}
	{bots
		(include "global_parameters/bots_generic_44-45.inc")
	}
)

; == late WAR CUSTOM RESOURCES ==
(define "custom_all"
	{common
		{unitset
			{value "44|45^conquestonly|doctrineonly"}
		}
		{commandPoints "*=%cp"}
		(include "global_parameters/unitlimits.inc")
		{chargeFactors
			{value "*=1.00"}
			{customize "0;0.25;0.5;1;2"}
		}
		(include "global_parameters/budget_custom.inc" s(%start) f(%finish) d(%doctrine))
	}
	{bots
		(include "global_parameters/bots_generic_44-45.inc")
	}
)

; == late WAR STANDARD RESOURCES ==
(define "standard_all_46"
	{common
		{unitset
			{value "46^conquestonly|doctrineonly"}
		}
		{commandPoints "*=%cp"}
		(include "global_parameters/unitlimits.inc")
		{chargeFactors
			{value "*=1.00"}
		}
		(include "global_parameters/budget.inc" s(%start) f(%finish) d(%doctrine))
	}
	{bots
		(include "global_parameters/bots_generic_46.inc")
	}
)

; == late WAR CUSTOM RESOURCES ==
(define "custom_all_46"
	{common
		{unitset
			{value "46^conquestonly|doctrineonly"}
		}
		{commandPoints "*=%cp"}
		(include "global_parameters/unitlimits.inc")
		{chargeFactors
			{value "*=1.00"}
			{customize "0;0.25;0.5;1;2"}
		}
		(include "global_parameters/budget_custom.inc" s(%start) f(%finish) d(%doctrine))
	}
	{bots
		(include "global_parameters/bots_generic_46.inc")
	}
)

;------------------------------------------------------------------------------------------------------------
{presets
	{"s:standard_100_44-45"
		{gameMode "standard"}
		{unitMode "44-45"}
		{specMode "all_normal"}
		{apply "only_roster_44-45"}
		("standard_all"			start(200) finish(10000) doctrine(1) cp(0:160,900:210,1500:300))
		{ranked}
	}
;------------------------------------------------------------------------------------------------------------	

	{"c:custom_80_44-45"
		{gameMode "custom"}
		{unitMode "44-45"}
		{specMode "cp_80"}
		{apply "only_roster_44-45"}
		("custom_all"			start(200) finish(10000) doctrine(1) cp(0:180,900:230,1500:320))
	}
	{"c:custom_100_44-45"
		{gameMode "custom"}
		{unitMode "44-45"}
		{specMode "cp_100"}
		{apply "only_roster_44-45"}
		("custom_all"			start(200) finish(10000) doctrine(1) cp(0:120,900:200,1500:250))
	}
	{"c:custom_120_44-45"
		{gameMode "custom"}
		{unitMode "44-45"}
		{specMode "cp_120"}
		{apply "only_roster_44-45"}
		("custom_all"			start(200) finish(10000) doctrine(1) cp(0:120,900:200,1500:260))
	}
	{"c:custom_140_44-45"
		{gameMode "custom"}
		{unitMode "44-45"}
		{specMode "cp_140"}
		{apply "only_roster_44-45"}
		("custom_all"			start(200) finish(10000) doctrine(1) cp(0:140,900:200,1500:280))
	}
	{"c:custom_160_44-45"
		{gameMode "custom"}
		{unitMode "44-45"}
		{specMode "cp_160"}
		{apply "only_roster_44-45"}
		("custom_all"			start(200) finish(10000) doctrine(1) cp(0:160,900:210,1500:300))
	}
	{"c:custom_180_44-45"
		{gameMode "custom"}
		{unitMode "44-45"}
		{specMode "cp_180"}
		{apply "only_roster_44-45"}
		("custom_all"			start(200) finish(10000) doctrine(1) cp(0:180,900:230,1500:320))
	}
	{"c:custom_200_44-45"
		{gameMode "custom"}
		{unitMode "44-45"}
		{specMode "cp_200"}
		{apply "only_roster_44-45"}
		("custom_all"			start(200) finish(10000) doctrine(1) cp(0:200,900:250,1500:340))
	}
	{"c:custom_250_44-45"
		{gameMode "custom"}
		{unitMode "44-45"}
		{specMode "cp_250"}
		{apply "only_roster_44-45"}
		("custom_all"			start(200) finish(10000) doctrine(1) cp(0:250,900:300,1500:360))
	}
	
	; --- 46 ---
	{"s:standard_100_46"
		{gameMode "standard"}
		{unitMode "46"}
		{specMode "all_normal"}
		{apply "only_roster_46"}
		("standard_all_46"			start(200) finish(10000) doctrine(1) cp(0:160,900:210,1500:300))
		{ranked}
	}
;------------------------------------------------------------------------------------------------------------	

	{"c:custom_80_46"
		{gameMode "custom"}
		{unitMode "46"}
		{specMode "cp_80"}
		{apply "only_roster_46"}
		("custom_all_46"			start(200) finish(10000) doctrine(1) cp(0:180,900:230,1500:320))
	}
	{"c:custom_100_46"
		{gameMode "custom"}
		{unitMode "46"}
		{specMode "cp_100"}
		{apply "only_roster_46"}
		("custom_all_46"			start(200) finish(10000) doctrine(1) cp(0:120,900:200,1500:250))
	}
	{"c:custom_120_46"
		{gameMode "custom"}
		{unitMode "46"}
		{specMode "cp_120"}
		{apply "only_roster_46"}
		("custom_all_46"			start(200) finish(10000) doctrine(1) cp(0:120,900:200,1500:260))
	}
	{"c:custom_140_46"
		{gameMode "custom"}
		{unitMode "46"}
		{specMode "cp_140"}
		{apply "only_roster_46"}
		("custom_all_46"			start(200) finish(10000) doctrine(1) cp(0:140,900:200,1500:280))
	}
	{"c:custom_160_46"
		{gameMode "custom"}
		{unitMode "46"}
		{specMode "cp_160"}
		{apply "only_roster_46"}
		("custom_all_46"			start(200) finish(10000) doctrine(1) cp(0:160,900:210,1500:300))
	}
	{"c:custom_180_46"
		{gameMode "custom"}
		{unitMode "46"}
		{specMode "cp_180"}
		{apply "only_roster_46"}
		("custom_all_46"			start(200) finish(10000) doctrine(1) cp(0:180,900:230,1500:320))
	}
	{"c:custom_200_46"
		{gameMode "custom"}
		{unitMode "46"}
		{specMode "cp_200"}
		{apply "only_roster_46"}
		("custom_all_46"			start(200) finish(10000) doctrine(1) cp(0:200,900:250,1500:340))
	}
	{"c:custom_250_46"
		{gameMode "custom"}
		{unitMode "46"}
		{specMode "cp_250"}
		{apply "only_roster_46"}
		("custom_all_46"			start(200) finish(10000) doctrine(1) cp(0:250,900:300,1500:360))
	}
	
;------------------------------------------------------------------------------------------------------------
}