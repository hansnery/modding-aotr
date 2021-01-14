//--------------------------------------------------------------------------	
//	DARK PRESENCE MECHANIC
//--------------------------------------------------------------------------
	Behavior = GrantUpgradeCreate ModuleTag_GrantUpgrade
		UpgradeToGrant	= Upgrade_GondorStableLevel2
	End	
	Behavior = AttributeModifierAuraUpdate ModuleTag_DarkPresence
		StartsActive	= No ;If no, requires upgrade to turn on.
		TriggeredBy		= Upgrade_GondorStableLevel2
		BonusName		= GuldurDarkPresence
		RefreshDelay	= 100
		Range			= 300
		ObjectFilter	= ANY +GuldurBrokenRabble +GuldurBrokenRabbleA +GuldurBrokenRabbleB +GuldurBrokenRabbleC +GuldurOrcArcher +GuldurOrcPikeman +GuldurOrcPikemanForBrokenRabble +GuldurBannerOrc
	End
	;Behavior = PassiveAreaEffectBehavior ModuleTag_SplashOfHealingWater_Ahh
	;	EffectRadius			= 300
	;	PingDelay				= 3000	;2000;msec
	;	HealPercentPerSecond	= 2%	;3%
	;	AllowFilter				= ANY +HORDE
	;	NonStackable			= Yes
	;	HealFX					= FX_SpellHealUnitHealBuff
	;End	
//--------------------------------------------------------------------------