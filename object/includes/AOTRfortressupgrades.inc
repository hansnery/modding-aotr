//;;,;; Fortress granteconomybonus behaviors moved to this file for 2.1, now that we're adding Scavenger too.
//;;,;; It'll be much easier to maintain and allow us to change all our Fortresses at once :)

	;//Morgul Sorcery Upgrade
	
	Behavior = AttributeModifierAuraUpdate ModuleTag_Arkenstonehandout
		StartsActive		= Yes ;If no, requires upgrade to turn on.
		BonusName		= ArkenstonePassiveHandout
		;TriggeredBy		= Upgrade_DwarvenFortressMightyCatapult
		RefreshDelay		= 2000
		Range			= 99999
		ObjectFilter	= NONE +HERO ;+STRUCTURE
	End	
	
	Behavior = AttributeModifierAuraUpdate ModuleTag_SummonedGundabadUnitsArkenstone
		StartsActive			= Yes ;If no, requires upgrade to turn on.
		BonusName			= HasIsenSiegeWorks
		;TriggeredBy			= Upgrade_DwarvenFortressMightyCatapult
		RefreshDelay			= 2000
		Range				= 99999
		ObjectFilter			= ANY +STRUCTURE +PORTER ;;+FireWyrmLair
	End

	
	
	Behavior = UnpauseSpecialPowerUpgrade ModuleTag_IvoryTowerVisionEnabler
		SpecialPowerTemplate = SpecialAbilityMenFortressIvoryTowerVision
		TriggeredBy = Upgrade_MenFortressIvoryTower
		RequiresAllTriggers = Yes
	End
	
		// Ivory Tower improvement, Gives a bonus to me, as well as unlocking a spell
	Behavior = AttributeModifierUpgrade ModuleTag_IvoryTowerBonus
		AttributeModifier	= MenFortressIvoryTowerBonus
		TriggeredBy			= Upgrade_MenFortressIvoryTower
		RequiresAllTriggers = Yes
	End
	
	;//Morgul Sorcery Upgrade
	Behavior = CastleUpgrade ModuleTag_PassOutNumenorStoneworkUpgradeMorgul
		TriggeredBy	= Upgrade_MordorFortressMorgulSorceryTrigger
		Upgrade		= Upgrade_MordorFortressMorgulSorcery
	End
	
		Behavior = AttributeModifierAuraUpdate ModuleTag_SummonedGundabadUnits
		StartsActive			= Yes ;If no, requires upgrade to turn on.
		BonusName			= DragonnestUpgradePassout
		TriggeredBy			= Upgrade_WildFortressWebCocoon ;HasIsenSiegeWorks
		RefreshDelay			= 2000
		Range				= 99999
		ObjectFilter			= ANY +GoblinFissure +FireWyrmLair
	End

	Behavior = CastleUpgrade ModuleTag_PassOutWebCocoonUpgrade
		TriggeredBy	= Upgrade_WildFortressWebCocoonTrigger
		Upgrade		= Upgrade_WildFortressWebCocoon
	End