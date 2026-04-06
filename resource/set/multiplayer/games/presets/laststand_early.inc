; == EARLY WAR STANDARD RESOURCES ==
(define "standard_all"
	{teams
		{a ;// PLAYER DEFENDER TEAM
			{unitset
				{value "early^conquestonly|doctrineonly"}
			}
			{commandPoints "*=%cp_a"}
			(include "global_parameters/unitlimits.inc")
			{chargeFactors
				{value "*=1.00"}
			}
			{balancingFactorBonus	;// only affects players on team A (not bots)
				{chargeDelay 1}		;// adjusts the initial delay only
				{charge 1.0}		;// adjusts the interval only
			}
			(include "global_parameters/last_stand/budget_defender.inc" s(%start_a) f(%finish_a) d(%doctrine))
		}
		{b ;// AI ATTACKER TEAM
			{unitset
				{value "early^conquestonly|doctrineonly"}
			}
			{commandPoints "*=%cp_b"}
			(include "global_parameters/unitlimits.inc")
			{chargeFactors
				{value "*=1.00"}
			}
			(include "global_parameters/last_stand/budget_attacker.inc" s(%start_b) f(%finish_b) d(%doctrine))
		}
	}

	{bots
		(include "global_parameters/last_stand/bots_standard.inc" period("early") start_a(%start_a) finish_a(%finish_a) start_b(%start_b) finish_b(%finish_b) doctrine(%doctrine) cp_a(%cp_a) cp_b(%cp_b))
	}
)


; == EARLY WAR CUSTOM RESOURCES ==
(define "custom_all"
	{common
		{chargeFactors
			{value "*=1.00"}
			{customize "0;0.25;0.5;1;2"}
		}
	}
	{teams
		{a ;// PLAYER DEFENDER TEAM
			{unitset
				{value "early^conquestonly|doctrineonly"}
			}
			{commandPoints "*=%cp_a"}
			(include "global_parameters/unitlimits.inc")
			(include "global_parameters/last_stand/budget_defender_custom.inc" s(%start_a) f(%finish_a) d(%doctrine))
		}
		{b ;// AI ATTACKER TEAM
			{unitset
				{value "early^conquestonly|doctrineonly"}
			}
			{commandPoints "*=%cp_b"}
			(include "global_parameters/unitlimits.inc")
			(include "global_parameters/last_stand/budget_attacker_custom.inc" s(%start_b) f(%finish_b) d(%doctrine))
		}
	}

	{bots
		(include "global_parameters/last_stand/bots_custom.inc" period("early") start_a(%start_a) finish_a(%finish_a) start_b(%start_b) finish_b(%finish_b) doctrine(%doctrine) cp_a(%cp_a) cp_b(%cp_b))
	}
)


; == EARLY WAR TEST ==
(define "test_early"
	{teams
		{a ;// PLAYER DEFENDER TEAM
			{unitset
				{value "early^conquestonly|doctrineonly"}
			}
			{commandPoints "*=%cp_a"}
			{unitLimits ""}
			{chargeFactors
				{value "*=0"}
			}
			(include "global_parameters/last_stand/budget_defender.inc" s(%start_a) f(%finish_a) d(%doctrine))
		}
		{b ;// AI ATTACKER TEAM
			{unitset
				{value "early^conquestonly|doctrineonly"}
			}
			{commandPoints "*=%cp_b"}
			{unitLimits ""}
			{chargeFactors
				{value "*=0"}
			}
			(include "global_parameters/last_stand/budget_attacker.inc" s(%start_b) f(%finish_b) d(%doctrine))
		}
	}

	{bots
		(include "global_parameters/last_stand/bots_standard.inc" period("early") start_a(%start_a) finish_a(%finish_a) start_b(%start_b) finish_b(%finish_b) doctrine(%doctrine) cp_a(%cp_a) cp_b(%cp_b))
	}
)

;------------------------------------------------------------------------------------------------------------
{presets
	{"s:early_standard_80"
		{gameMode "standard"}
		{unitMode "early"}
		{specMode "all_normal"}
		{apply "only_roster_early"}
		("standard_all"			start_a(500) finish_a(8000) start_b(500) finish_b(20000) doctrine(1) cp_a(0:80,900:100,1500:120) cp_b(0:120,900:160,1500:220))
		{ranked}
	}
;------------------------------------------------------------------------------------------------------------

; // custom games here

	{"c:early_custom_60"
		{gameMode "custom"}
		{unitMode "early"}
		{specMode "cp_60"}
		{apply "only_roster_early"}
		("custom_all"			start_a(500) finish_a(8000) start_b(500) finish_b(20000) doctrine(1) cp_a(0:60,900:80,1500:100) cp_b(0:120,900:160,1500:220))
	}
	{"c:early_custom_80"
		{gameMode "custom"}
		{unitMode "early"}
		{specMode "cp_80"}
		{apply "only_roster_early"}
		("custom_all"			start_a(550) finish_a(8000) start_b(550) finish_b(20000) doctrine(1) cp_a(0:80,900:100,1500:120) cp_b(0:140,900:180,1500:240))
	}
	{"c:early_custom_100"
		{gameMode "custom"}
		{unitMode "early"}
		{specMode "cp_100"}
		{apply "only_roster_early"}
		("custom_all"			start_a(600) finish_a(8000) start_b(600) finish_b(20000) doctrine(1) cp_a(0:100,900:120,1500:140) cp_b(0:160,900:200,1500:260))
	}
	{"c:early_custom_120"
		{gameMode "custom"}
		{unitMode "early"}
		{specMode "cp_120"}
		{apply "only_roster_early"}
		("custom_all"			start_a(650) finish_a(8000) start_b(650) finish_b(20000) doctrine(1) cp_a(0:120,900:140,1500:160) cp_b(0:180,900:220,1500:280))
	}

;------------------------------------------------------------------------------------------------------------

	{"s:test_early"
		{gameMode "test"}
		{unitMode "early"}
		{specMode "all_normal"}
		{apply "only_roster_early"}
		("test_early"			start_a(50000) finish_a(50000) start_b(50000) finish_b(50000) doctrine(2000) cp_a(1000) cp_b(1000))
	}
}