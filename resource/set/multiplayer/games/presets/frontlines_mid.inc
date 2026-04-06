; == MID WAR STANDARD RESOURCES ==

(include "global_parameters/frontlines/timers_frontlines.inc")

(define "standard_all"
	{teams
		{a ;// ATTACKER TEAM
			{unitset
				{value "mid^conquestonly|doctrineonly"}
			}
			{commandPoints "*=%cp_a"}
			(include "global_parameters/frontlines/unitlimits_attacker.inc")
			{chargeFactors
				("timers_attacker")
			}
			(include "global_parameters/frontlines/budget_attacker.inc" s(%start_a) f(%finish_a) d(%doctrine_a) r(%reinforcement_a))
		}
		{b ;// DEFENDER TEAM
			{unitset
				{value "mid|frontlines^conquestonly|doctrineonly"}
			}
			{commandPoints "*=%cp_b"}
			(include "global_parameters/frontlines/unitlimits_defender.inc")
			{chargeFactors
				("timers_defender")
			}
			(include "global_parameters/frontlines/budget_defender.inc" s(%start_b) f(%finish_b) d(%doctrine_b))
		}
	}

	{bots
		(include "global_parameters/frontlines/bots_standard.inc" period("mid") start_a(%start_a) finish_a(%finish_a) reinforcement_a(%reinforcement_a) start_b(%start_b) finish_b(%finish_b) doctrine_a(%doctrine_a) doctrine_b(%doctrine_b) cp_a(%cp_a) cp_b(%cp_b))
	}
)


; == MID WAR CUSTOM RESOURCES ==
(define "custom_all"
	{common
		
	}
	{teams
		{a ;// ATTACKER TEAM
			{unitset
				{value "mid^conquestonly|doctrineonly"}
			}
			{commandPoints "*=%cp_a"}
			(include "global_parameters/frontlines/unitlimits_attacker.inc")
			{chargeFactors
				("timers_attacker")
			}
			(include "global_parameters/frontlines/budget_attacker_custom.inc" s(%start_a) f(%finish_a) d(%doctrine_a) r(%reinforcement_a))
		}
		{b ;// DEFENDER TEAM
			{unitset
				{value "mid|frontlines^conquestonly|doctrineonly"}
			}
			{commandPoints "*=%cp_b"}
			(include "global_parameters/frontlines/unitlimits_defender.inc")
			{chargeFactors
				("timers_defender")
			}
			(include "global_parameters/frontlines/budget_defender_custom.inc" s(%start_b) f(%finish_b) d(%doctrine_b))
		}
	}

	{bots
		(include "global_parameters/frontlines/bots_custom.inc" period("mid") start_a(%start_a) finish_a(%finish_a) reinforcement_a(%reinforcement_a) start_b(%start_b) finish_b(%finish_b) doctrine_a(%doctrine_a) doctrine_b(%doctrine_b) cp_a(%cp_a) cp_b(%cp_b))
	}
)


; == MID WAR TEST ==
(define "test_mid"
	{teams
		{a ;// ATTACKER TEAM
			{unitset
				{value "mid^conquestonly|doctrineonly"}
			}
			{commandPoints "*=%cp_a"}
			{unitLimits ""}
			{chargeFactors
				{value "*=0"}
			}
			(include "global_parameters/frontlines/budget_attacker.inc" s(%start_a) f(%finish_a) d(%doctrine_a) r(%reinforcement_a))
		}
		{b ;// DEFENDER TEAM
			{unitset
				{value "mid|frontlines^conquestonly|doctrineonly"}
			}
			{commandPoints "*=%cp_b"}
			{unitLimits ""}
			{chargeFactors
				{value "*=0"}
			}
			(include "global_parameters/frontlines/budget_defender.inc" s(%start_b) f(%finish_b) d(%doctrine_b))
		}
	}

	{bots
		(include "global_parameters/frontlines/bots_standard.inc" period("mid") start_a(%start_a) finish_a(%finish_a) reinforcement_a(%reinforcement_a) start_b(%start_b) finish_b(%finish_b) doctrine_a(%doctrine_a) doctrine_b(%doctrine_b) cp_a(%cp_a) cp_b(%cp_b))
	}
)

;------------------------------------------------------------------------------------------------------------
{presets
	{"s:mid_standard_80"
		{gameMode "standard"}
		{unitMode "mid"}
		{specMode "all_normal"}
		{apply "only_roster_mid"}
		("standard_all"			start_a(3300) finish_a(3300) reinforcement_a(400) start_b(2050) finish_b(2050) doctrine_a(300) doctrine_b(200) cp_a(0:175,900:200,1500:225) cp_b(0:110,900:140,1500:170))
		{ranked}
	}
;------------------------------------------------------------------------------------------------------------

; // custom games here

;	{"c:mid_custom_60"
;		{gameMode "custom"}
;		{unitMode "mid"}
;		{specMode "cp_60"}
;		{apply "only_roster_mid"}
;		("custom_all"			start_a(3300) finish_a(3300) reinforcement_a(400) start_b(2050) finish_b(2050) doctrine_a(300) doctrine_b(200) cp_a(0:175,900:200,1500:225) cp_b(0:110,900:140,1500:170))
;	}
	{"s:mid_custom_80"
		{gameMode "custom"}
		{unitMode "mid"}
		{specMode "cp_80"}
		{apply "only_roster_mid"}
		("custom_all"			start_a(3300) finish_a(3300) reinforcement_a(400) start_b(2050) finish_b(2050) doctrine_a(300) doctrine_b(200) cp_a(0:175,900:200,1500:225) cp_b(0:110,900:140,1500:170))
		{ranked}
	}

;------------------------------------------------------------------------------------------------------------

	{"s:test_mid"
		{gameMode "test"}
		{unitMode "mid"}
		{specMode "all_normal"}
		{apply "only_roster_mid"}
		("test_mid"			start_a(50000) finish_a(50000) reinforcement_a(0) start_b(50000) finish_b(50000) doctrine_a(2000) doctrine_b(2000) cp_a(1000) cp_b(1000))
	}
}