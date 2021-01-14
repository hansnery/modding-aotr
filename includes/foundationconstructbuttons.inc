CommandButton Command_ConstructGondorSentryTower
  Command          = FOUNDATION_CONSTRUCT
  Object           = GondorSentryTower
  TextLabel        = CONTROLBAR:ConstructGondorSentryTower
  ButtonImage      = BGSentryTwr
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipGondorBuildSentryTower
  Radial           = Yes  
End
CommandButton Command_ConstructRohanSentryTower
  Command          = FOUNDATION_CONSTRUCT
  Object           = RohanSentryTower
  TextLabel        = CONTROLBAR:ConstructRohanSentryTower
  ButtonImage      = BRSentryTwr
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipRohanBuildSentryTower
  Radial           = Yes  
End
CommandButton Command_ConstructEvilSentryTower
  Command          = FOUNDATION_CONSTRUCT
  Object           = EvilSentryTower
  TextLabel        = CONTROLBAR:ConstructEvilSentryTower
  ButtonImage      = BISentryTwr
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipEvilBuildSentryTower
  Radial           = Yes  
End
; --------------- Sentry Tower End

;---------------- Lothlorien Foundation Constructs

CommandButton Command_FoundationConstructElvenBarracks
  Command          	= FOUNDATION_CONSTRUCT
  Object           	= ElvenBarracksFoundation
  TextLabel        	= CONTROLBAR:ConstructElvenBarracks
  ButtonImage      	= BILorienBarracks
  ButtonBorderType 	= BUILD 
  DescriptLabel    	= CONTROLBAR:ToolTipElvenBarracks
  Radial           	= Yes  
End
CommandButton Command_FoundationConstructElvenEntMoot
  Command          = FOUNDATION_CONSTRUCT
  Object           = ElvenEntMootFoundation
  TextLabel        = CONTROLBAR:ConstructEntMoot
  ButtonImage      = BILorienEntmoot
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipElvenEntMoot
  Radial           = Yes  
End
CommandButton Command_FoundationConstructEregionForge
	Command          = FOUNDATION_CONSTRUCT
	Object           = EregionForgeFoundation
	TextLabel        = CONTROLBAR:ConstructEregionForge
	ButtonImage      = BILorienStoreHouse ;BEGreenPasture
	ButtonBorderType = BUILD 
	DescriptLabel    = CONTROLBAR:ToolTipEregionForge
	Radial           = Yes  
End
CommandButton Command_FoundationConstructElvenGreenPasture
  Command          	= FOUNDATION_CONSTRUCT
  Object           	= ElvenGreenPastureFoundation
  TextLabel        	= CONTROLBAR:ConstructElvenStable
  ButtonImage      	= BILorienPasture
  ButtonBorderType 	= BUILD 
  DescriptLabel    	= CONTROLBAR:ToolTipGreenPasture
  Radial           	= Yes  
End
CommandButton Command_FoundationConstructElvenStatue
  Command          = FOUNDATION_CONSTRUCT
  Object           = ElvenStatueFoundation
  TextLabel        = CONTROLBAR:ConstructElvenStatue
  ButtonImage      = BILorienStatue
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ElvenHeroicStatueBuild
  Radial           = Yes  
End
CommandButton Command_FoundationConstructElvenWatchTower
  Command          = FOUNDATION_CONSTRUCT
  Object           = ElvenBattleTowerFoundation
  TextLabel        = CONTROLBAR:ConstructElvenBattleTower
  ButtonImage      = BILorienFlet
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipBattleTower
  Radial           = Yes  
End
CommandButton Command_FoundationConstructLorienFletTD
  Command          = FOUNDATION_CONSTRUCT
  Object           = TDLorienFlet
  TextLabel        = CONTROLBAR:ConstructElvenBattleTower
  ButtonImage      = BILorienFlet
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipConstructLothlorienFletTD
  Radial           = Yes  
End
CommandButton Command_FoundationConstructGondorBarracksTD
  Command          = FOUNDATION_CONSTRUCT
  Object           = TDGondorBarracks
  TextLabel        = CONTROLBAR:ConstructMenBarracks
  ButtonImage      = UIGondorBarracks
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipConstructMenBarracks
  Radial           = Yes  
End
CommandButton Command_FoundationConstructEreborSiegeTD
  Command          = FOUNDATION_CONSTRUCT
  Object           = TDSiegeTower
  TextLabel        = CONTROLBAR:Command_DwarvenWallUpgradeToCatapult
  ButtonImage      = BIEreborWindlance
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:TooltipCommand_DwarvenWallUpgradeToCatapult
  Radial           = Yes  
End
CommandButton Command_FoundationConstructElvenMallornTree
  Command          = FOUNDATION_CONSTRUCT
  Object           = ElvenMallornTreeFoundation
  TextLabel        = CONTROLBAR:ConstructElvenMallornTree
  ButtonImage      = BILorienMallornTree
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipMallornTree
  Radial           = Yes  
End
CommandButton Command_FoundationConstructElvenMirrorOfGaladriel
  Command          = FOUNDATION_CONSTRUCT
  Object           = ElvenMirrorOfGaladrielFoundation
  TextLabel        = CONTROLBAR:ConstructGaladrielsWell
  ButtonImage      = BILorienWell
  ButtonBorderType = BUILD 
  DescriptLabel    = OBJECT:GMirrorDescription
  Radial           = Yes  
End
CommandButton Command_FoundationConstructElvenMirrorOfGaladriel_Disabled
  Command          = FOUNDATION_CONSTRUCT
  Object           = ElvenMirrorOfGaladrielFoundation
  Options		   = NEED_UPGRADE
  NeededUpgrade	   = Upgrade_MiniHordeLvl10  
  TextLabel        = CONTROLBAR:ConstructGaladrielsWell
  ButtonImage      = BILorienWell
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipConstructGaladrielMirror_Disabled
  Radial           = Yes  
End


;--------------- Lothlorien End

;--------------- Erebor Foundation Constructs

   CommandButton Command_FoundationConstructDwarvenWorkshop
 	Command          = FOUNDATION_CONSTRUCT
 	Object           = DwarvenWorkshopFoundation
 	TextLabel        = CONTROLBAR:ConstructDwarvenWorkshop
 	ButtonImage      = BIEreborWorkshop
 	ButtonBorderType = BUILD 
 	DescriptLabel    = CONTROLBAR:ToolTipConstructDwarvenWorkshop
 	Radial           = Yes  
 End

CommandButton Command_FoundationConstructDwarvenSentryTower
	Command				= FOUNDATION_CONSTRUCT
	Object				= DwarvenSentryTowerFoundation
	TextLabel			= CONTROLBAR:ConstructDwarvenSentryTower
	ButtonImage			= BIEreborWallTower
	ButtonBorderType		= BUILD
	DescriptLabel			= CONTROLBAR:ToolTipConstructDwarvenSentryTower
	Radial				= Yes
End
CommandButton Command_FoundationConstructDwarvenBarracks
	Command          	= FOUNDATION_CONSTRUCT
	Object           	= DwarfBarracksFoundation
	TextLabel        	= CONTROLBAR:ConstructDwarvenBarracks
	ButtonImage      	= BIEreborBarracks
	ButtonBorderType 	= BUILD 
	DescriptLabel    	= CONTROLBAR:ToolTipConstructDwarvenBarracks
	Radial           	= Yes  
End
CommandButton Command_FoundationConstructDwarvenAssembly
	Command          	= FOUNDATION_CONSTRUCT
	Object           	= DwarvenAssemblyFoundation
	TextLabel        	= CONTROLBAR:ConstructDwarvenAssembly
	ButtonImage      	= BIEreborAssembly
	ButtonBorderType 	= BUILD 
	DescriptLabel    	= CONTROLBAR:TooltipConstructDwarvenAssembly
	Radial           	= Yes  
End
  CommandButton Command_FoundationDwarvenEreborForge
 	Command          = FOUNDATION_CONSTRUCT
 	Object           = EreborForgeFoundation
 	TextLabel        = CONTROLBAR:ConstructDwarvenForgeWorks
 	ButtonImage      = BIEreborForge
 	ButtonBorderType = BUILD 
 	DescriptLabel    = CONTROLBAR:ToolTipConstructDwarvenForgeWorks
 	Radial           = Yes  
 End
 CommandButton Command_FoundationConstructDwarvenForgeWorks
 	Command          = FOUNDATION_CONSTRUCT
 	Object           = DwarvenSiegeWorksFoundation ;EreborForge
 	TextLabel        = CONTROLBAR:ConstructDwarvenHusbandry
 	ButtonImage      = BIEreborRedoubt
 	ButtonBorderType = BUILD 
 	DescriptLabel    = CONTROLBAR:ToolTipConstructDwarvenHusbandry
 	Radial           = Yes
 End
 CommandButton Command_FoundationConstructDwarvenWell
	Command         	= FOUNDATION_CONSTRUCT
	Object           	= DwarvenWell
	TextLabel        	= CONTROLBAR:ConstructDwarvenWell
	ButtonImage	 	= BIEreborWell
	ButtonBorderType 	= BUILD 
	DescriptLabel    	= OBJECT:DwarvenWellDescription
	Radial           	= Yes  
End
 CommandButton Command_FoundationConstructDwarvenMineShaft
	Command          = FOUNDATION_CONSTRUCT
	Object           = DwarvenMineShaftFoundation
	TextLabel        = CONTROLBAR:ConstructDwarvenMineShaft
	ButtonImage      = BIEreborMineshaft
	ButtonBorderType = BUILD 
	DescriptLabel    = CONTROLBAR:TooltipConstructDwarvenMineShaft
	Radial           = Yes  
End
CommandButton Command_FoundationConstructDwarvenStatue
	Command          = FOUNDATION_CONSTRUCT
	Object           = DwarvenStatue
	TextLabel        = CONTROLBAR:ConstructDwarvenStatue
	ButtonImage      = BIEreborStatue
	ButtonBorderType = BUILD 
	DescriptLabel    = CONTROLBAR:HeroicStatueBuild
	Radial           = Yes  
End
CommandButton Command_FoundationConstructDwarvenArcheryRange
	Command          	= FOUNDATION_CONSTRUCT
	Object           	= DwarvenArcheryRangeFoundation
	TextLabel        	= CONTROLBAR:ConstructDwarvenArcheryRange
	ButtonImage      	= BIEreborDaleBarracks
	ButtonBorderType 	= BUILD 
	DescriptLabel    	= CONTROLBAR:TooltipConstructDwarvenArcheryRange
	Radial           	= Yes  
End
CommandButton Command_FoundationConstructDwarvenAssembly
	Command          	= FOUNDATION_CONSTRUCT
	Object           	= DwarvenAssemblyFoundation
	TextLabel        	= CONTROLBAR:ConstructDwarvenAssembly
	ButtonImage      	= BIEreborAssembly
	ButtonBorderType 	= BUILD 
	DescriptLabel    	= CONTROLBAR:TooltipConstructDwarvenAssembly
	Radial           	= Yes  
End

; --------------- Erebor End

;--------------- Gondor Foundation Constructs

CommandButton Command_ConstructGondorFarm
  Command          = FOUNDATION_CONSTRUCT
  Object        		= GondorFarmFoundation 
	TextLabel     		= CONTROLBAR:ConstructMenFarm
	ButtonImage   		= UIGondorFarm
	ButtonBorderType    = BUILD 
	DescriptLabel       = CONTROLBAR:ToolTipConstructMenFarm
	Radial				= Yes  
End
CommandButton Command_ConstructGondorWell
  Command          = FOUNDATION_CONSTRUCT
  Object				= GondorWell
	TextLabel			= CONTROLBAR:ConstructMenWell
	ButtonImage			= UIGondorWell
	ButtonBorderType	= BUILD 
	DescriptLabel		= OBJECT:HearthWellDescription
	Radial				= Yes  
End
CommandButton Command_ConstructGondorBarracks
  Command          = FOUNDATION_CONSTRUCT
  Object        		= GondorBarracksFoundation
	TextLabel     		= CONTROLBAR:ConstructMenBarracks
	ButtonImage   		= UIGondorBarracks
	ButtonBorderType    = BUILD 
	DescriptLabel       = CONTROLBAR:ToolTipConstructMenBarracks
	Radial				= Yes
End
CommandButton Command_ConstructGondorStable
  Command          = FOUNDATION_CONSTRUCT
  Object				= GondorStableFoundation
	TextLabel			= CONTROLBAR:ConstructMenStable
	ButtonImage			= UIGondorStables
	ButtonBorderType	= BUILD 
	DescriptLabel		= CONTROLBAR:ToolTipConstructMenStable
	Radial				= Yes
End
CommandButton Command_ConstructGondorMarketPlace
  Command          = FOUNDATION_CONSTRUCT
  Object				= GondorMarketPlaceFoundation
	TextLabel			= CONTROLBAR:ConstructMenMarketPlace
	ButtonImage			= UIGondorMarketplace ;BUStoneWorker
	ButtonBorderType	= BUILD 
	DescriptLabel		= CONTROLBAR:ToolTipConstructMenMarketPlace
	Radial				= Yes  
End
CommandButton Command_ConstructGondorMarketPlace_Disabled
	Command				= FOUNDATION_CONSTRUCT
	Options				= NEED_UPGRADE
	NeededUpgrade		= Upgrade_MiniHordeLvl10
	Object				= GondorMarketPlaceFoundation
	TextLabel			= CONTROLBAR:ConstructMenMarketPlace
	ButtonImage			= UIGondorMarketplace
	ButtonBorderType	= BUILD 
	DescriptLabel		= CONTROLBAR:ToolTipConstructMenMarketPlace_Disabled
	Radial				= Yes  
End
CommandButton Command_ConstructGondorStatue
  Command          = FOUNDATION_CONSTRUCT
  Object				= GondorStatue
	TextLabel			= CONTROLBAR:ConstructMenStatue
	ButtonImage			= UIGondorStatue
	ButtonBorderType	= BUILD 
	DescriptLabel		= CONTROLBAR:HeroicStatueBuild
	Radial				= Yes  
End
CommandButton Command_ConstructGondorStoneMaker
  Command          = FOUNDATION_CONSTRUCT
  Object				= GondorStoneMakerFoundation
;	AffectsKindOf		= WALK_ON_TOP_OF_WALL DEFENSIVE_WALL
	TextLabel			= CONTROLBAR:ConstructMenStoneMaker
	ButtonImage			= UIGondorStoneworker
	ButtonBorderType	= BUILD 
	DescriptLabel		= CONTROLBAR:ToolTipConstructMenStoneMaker
	Radial				= Yes  
End
CommandButton Command_ConstructGondorArcherRange
  Command          = FOUNDATION_CONSTRUCT
  Object				= GondorArcherRangeFoundation
	TextLabel			= CONTROLBAR:ConstructMenArcheryRange
	ButtonImage			= UIGondorArcheryRange
	ButtonBorderType	= BUILD 
	DescriptLabel		= CONTROLBAR:ToolTipMenArcheryRange
	Radial				= Yes 
End
CommandButton Command_ConstructGondorWorkshop
  Command          = FOUNDATION_CONSTRUCT
  Object				= GondorWorkshopFoundation
	TextLabel			= CONTROLBAR:ConstructMenWorkshop
	ButtonImage			= UIGondorWorkshop
	ButtonBorderType	= BUILD 
	DescriptLabel		= CONTROLBAR:ToolTipConstructMenWorkshop
	Radial				= Yes   
End
CommandButton Command_ConstructGondorBattleTower
  Command          = FOUNDATION_CONSTRUCT
  Object				= GondorBattleTower
	TextLabel			= CONTROLBAR:ConstructMenSentryTower
	ButtonImage			= UIGondorBattleTowernew
	ButtonBorderType	= BUILD 
	DescriptLabel		= CONTROLBAR:ToolTipConstructMenSentryTower
	Radial				= Yes    
End
CommandButton Command_ConstructGondorHseHeal
  Command          = FOUNDATION_CONSTRUCT
  Object           = GondorHseHeal
  TextLabel        = CONTROLBAR:ConstructGondorHseHeal
  ButtonImage      = BGFortress_HouseofHealing
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipGondorBuildHseHeal
  Radial           = Yes  
End
CommandButton Command_ConstructGondorBlackSmith
  Command          = FOUNDATION_CONSTRUCT
  Object				= GondorForgeFoundation
	TextLabel			= CONTROLBAR:ConstructMenBlacksmith
	ButtonImage			= UIGondorBlacksmith
	ButtonBorderType	= BUILD 
	DescriptLabel		= CONTROLBAR:ToolTipConstructMenBlacksmith
	Radial				= Yes
End
CommandButton Command_ConstructGondorWall
  Command          = FOUNDATION_CONSTRUCT
  Object           = GondorInnerWall
  TextLabel        = CONTROLBAR:ConstructGondorWall
  ButtonImage      = BRWall
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipGondorWall
  Radial           = Yes  
End

; --------------- Gondor End

;--------------- Mordor Foundation Constructs

CommandButton Command_ConstructMordorArmory
  Command          = FOUNDATION_CONSTRUCT
  Object           = MordorArmoryFoundation
  TextLabel        = CONTROLBAR:ConstructMordorArmory
  ButtonImage      = BIMordorArmoury
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipConstructMordorArmory
  Radial           = Yes
End
CommandButton Command_ConstructMordorOrcPit
  Command          = FOUNDATION_CONSTRUCT
  Object           = MordorOrcPitFoundation
  TextLabel        = CONTROLBAR:ConstructMordorOrcPit
  ButtonImage      = BIMordorBarracks
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipMordorOrcPit
  Radial           = Yes  
End
CommandButton Command_ConstructMordorTrollCage
  Command          = FOUNDATION_CONSTRUCT
  Object           = MordorTrollCageFoundation
  TextLabel        = CONTROLBAR:ConstructMordorTrollCage
  ButtonImage      = BIMordorTrollCage
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipMordorTrollCage
  Radial           = Yes  
End
CommandButton Command_ConstructMordorSiegeWorks
  Command          = FOUNDATION_CONSTRUCT
  Object           = MordorSiegeWorksFoundation
  TextLabel        = CONTROLBAR:ConstructMordorSiegeWorks
  ButtonImage      = BIMordorSiegeWorks
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipordorSiegeWorks
  Radial           = Yes  
End
CommandButton Command_ConstructMordorHaradrimPalace
  Command          = FOUNDATION_CONSTRUCT
  Object           = MordorHaradrimPalaceFoundation
  TextLabel        = CONTROLBAR:ConstructMordorHaradrimPalace
  ButtonImage      = BIMordorEasterlingEncampment
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipMordorHaradrimPalace
  Radial           = Yes  
End
CommandButton Command_ConstructMumakilPen
  Command          = FOUNDATION_CONSTRUCT
  Object           = MordorMumakilPenFoundation
  TextLabel        = CONTROLBAR:ConstructMordorMumakilPen
  ButtonImage      = uiharadrimpalacebuttonnew
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipMordorMumakilPenPlot
  Radial           = Yes  
End
CommandButton Command_ConstructMordorSlaughterHouse
  Command          = FOUNDATION_CONSTRUCT
  Object           = MordorSlaughterHouseFoundation
  TextLabel        = CONTROLBAR:ConstructSlaughterHouse
  ButtonImage      = BIMordorSlaughterHouse
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipSlaughterHouse
  Radial           = Yes  
End
CommandButton Command_ConstructMordorLumberMill
  Command          = FOUNDATION_CONSTRUCT
  Object           = MordorLumberMillFoundation
  TextLabel        = CONTROLBAR:ConstructMordorLumberMill
  ButtonImage      = uilumbermillnewbutton
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipConstructLumberMill
  Radial           = Yes  
End
CommandButton Command_constructMordorBattleTower
	Command				= FOUNDATION_CONSTRUCT
	Object				= MordorBattleTowerFoundation
	TextLabel			= CONTROLBAR:ConstructMordorBattleTower
	ButtonImage			= BIMordorBattleTower
	ButtonBorderType		= BUILD 
	DescriptLabel			= CONTROLBAR:ToolTipConstructMordorBattleTower
	Radial				= Yes
End

; --------------- Mordor End

;--------------- Isengard Foundation Constructs

CommandButton Command_ConstructIsengardFurnace
  	Command          		= FOUNDATION_CONSTRUCT
  	Object           		= IsengardFurnaceFoundation
  	TextLabel        		= CONTROLBAR:ConstructFurnace
  	ButtonImage      		= BIIsenFurnace
  	ButtonBorderType 		= BUILD 
  	DescriptLabel    		= CONTROLBAR:ToolTipFurnace
  	Radial           		= Yes  
End
CommandButton Command_ConstructIsengardTavern
  	Command          		= FOUNDATION_CONSTRUCT
  	Object           		= IsengardTavernFoundation
  	TextLabel        		= CONTROLBAR:ConstructIsengardTavern
  	ButtonImage      		= BIIsenDunlandGarr
  	ButtonBorderType 		= BUILD 
  	DescriptLabel    		= CONTROLBAR:ToolTipIsengardTavern
  	Radial           		= Yes  
End
CommandButton Command_ConstructIsengardBattleTower
  Command          = FOUNDATION_CONSTRUCT
  Object           = IsengardBattleTowerFoundation
  TextLabel        = CONTROLBAR:ConstructIsengardBattleTower
  ButtonImage      = BIIsenBattleTower
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipBuildIsengardBattleTower
  Radial           = Yes  
End
CommandButton Command_ConstructIsengardUrukPit
  Command          = FOUNDATION_CONSTRUCT
  Object           = IsengardUrukPitFoundation
  TextLabel        = CONTROLBAR:ConstructIsengardUrukPit
  ButtonImage      = BIIsenUrukPit
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipIsengardUrukPit
  Radial           = Yes  
End
CommandButton Command_ConstructIsengardWargPit
  Command          = FOUNDATION_CONSTRUCT
  Object           = IsengardWargPitFoundation
  TextLabel        = CONTROLBAR:ConstructIsengardWargPit
  ButtonImage      = BIIsenWargPit
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipIsengardWargPit
  Radial           = Yes
End
CommandButton Command_ConstructIsengardSiegeWorks
  Command          = FOUNDATION_CONSTRUCT
  Object           = IsengardSiegeWorksFoundation
  TextLabel        = CONTROLBAR:ConstructIsengardSiegeWorks
  ButtonImage      = BIIsenSiegeWorks
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipIsengardSiegeWorks
  Radial           = Yes  
End
CommandButton Command_ConstructIsengardLumberMill
	Command				= FOUNDATION_CONSTRUCT
	Object				= IsengardLumberMillFoundation
	TextLabel			= CONTROLBAR:ConstructIsengardLumberMill
	ButtonImage			= uilumbermillnewbutton
	ButtonBorderType	= BUILD 
	DescriptLabel		= CONTROLBAR:ToolTipConstructLumberMill
	Radial				= Yes  
End
CommandButton Command_ConstructIsengardWargSentry
	Command				= FOUNDATION_CONSTRUCT
	Object				= IsengardWargSentryFoundation
	TextLabel			= CONTROLBAR:ConstructIsengardWargSentry
	ButtonImage			= BIIsenWargCage
	ButtonBorderType	= BUILD 
	DescriptLabel		= CONTROLBAR:ToolTipConstructIsengardWargSentry
	Radial				= Yes
End
CommandButton Command_ConstructIsengardArmory
  Command          = FOUNDATION_CONSTRUCT
  Object           = IsengardArmoryFoundation
  TextLabel        = CONTROLBAR:ConstructIsengardArmory
  ButtonImage      = BIIsenArmoury
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipIsengardArmory
  Radial           = Yes
End

; --------------- Isengard End

;---------------- Rohan Foundation Constructs

CommandButton Command_ConstructRohanArmory
  Command          = FOUNDATION_CONSTRUCT
  Object           = RohanArmory
  TextLabel        = CONTROLBAR:ConstructRohanArmory
  ButtonImage      = BRArmory
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipRohanArmory
  Radial           = Yes  
End
CommandButton Command_ConstructRohanArcherRange
  Command          = FOUNDATION_CONSTRUCT
  Object           = RohanArcherRangeFoundation
  TextLabel        = CONTROLBAR:ConstructMenArcheryRange
  ButtonImage      = BIRohanArcherRange
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipRohanArcheryRange
  Radial           = Yes  
End
CommandButton Command_ConstructRohanStable
  Command          = FOUNDATION_CONSTRUCT
  Object           = RohanStableFoundation
  TextLabel        = CONTROLBAR:ConstructRohanStable
  ButtonImage      = BIRohanStables
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipRohanStable
  Radial           = Yes  
End
CommandButton Command_ConstructRohanBarracksFoundation
  Command          = FOUNDATION_CONSTRUCT
  Object           = RohanBarracksFoundation
  TextLabel        = CONTROLBAR:ConstructMenBarracks
  ButtonImage      = BIRohanBarracks
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipConstructRohanBarracks
  Radial           = Yes  
End
CommandButton Command_ConstructRohanStatue
  Command          = FOUNDATION_CONSTRUCT
  Object           = RohanHeroStatueFoundation
  TextLabel			= CONTROLBAR:ConstructRohanStatue
  ButtonImage			= BIRohanStatue
  ButtonBorderType	= BUILD  
  DescriptLabel		= CONTROLBAR:HeroicStatueBuild
  Radial           = Yes  
End
CommandButton Command_ConstructRohanFarm
  Command          = FOUNDATION_CONSTRUCT
  Object           = RohanFarmFoundation
	TextLabel     		= CONTROLBAR:ConstructMenFarm
	ButtonImage   		= BIRohanFarm
	ButtonBorderType    = BUILD 
	DescriptLabel       = CONTROLBAR:ToolTipConstructRohanFarm
  Radial           = Yes  
End
CommandButton Command_ConstructRohanWindmill
  Command          = FOUNDATION_CONSTRUCT
  Object           = RohanWindmillFoundation
	TextLabel     		= CONTROLBAR:ConstructRohanWindmill
	ButtonImage   		= BIRohanWindmill
	ButtonBorderType    = BUILD 
	DescriptLabel       = CONTROLBAR:ToolTipConstructRohanWindmill
  Radial           = Yes  
End
CommandButton Command_ConstructRohanWell
  Command          = FOUNDATION_CONSTRUCT
  Object           = RohanWellFoundation
	TextLabel			= CONTROLBAR:ConstructRohanWell
	ButtonImage			= BIRohanWell
	ButtonBorderType	= BUILD 
	DescriptLabel		= OBJECT:RohanWellDescription
  Radial           = Yes  
End
CommandButton Command_ConstructRohanBattleTower
  Command          = FOUNDATION_CONSTRUCT
  Object           = RohanBattleTowerNewFoundation
	TextLabel			= CONTROLBAR:ConstructMenSentryTower
	ButtonImage			= BIRohanBattleTower
	ButtonBorderType	= BUILD 
	DescriptLabel		= CONTROLBAR:ToolTipConstructMenSentryTower
  Radial           = Yes  
End
CommandButton Command_ConstructRohanDraftTower
  Command          = FOUNDATION_CONSTRUCT
  Object           = RohanDraftTowerFoundation
	TextLabel			= CONTROLBAR:ConstructRohanDraftTower
	ButtonImage			= BIRohanDraftTower
	ButtonBorderType	= BUILD 
	DescriptLabel		= CONTROLBAR:ToolTipConstructRohanDraftTower
  Radial           = Yes  
End
CommandButton Command_ConstructRohanWorkshop
  Command          = FOUNDATION_CONSTRUCT
  Object           = RohanWorkshopFoundation
	TextLabel			= CONTROLBAR:ConstructRohanWorkshop
	ButtonImage			= BIRohanWorkshop
	ButtonBorderType	= BUILD 
	DescriptLabel		= CONTROLBAR:ToolTipConstructRohanWorkshop
  Radial           = Yes  
End
CommandButton Command_ConstructRohanWall
  Command          = FOUNDATION_CONSTRUCT
  Object           = RohanInnerWall
  TextLabel        = CONTROLBAR:ConstructRohanWall
  ButtonImage      = BRWall
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipRohanWall
  Radial           = Yes  
End

; --------------- Rohan End

;--------------- Wild Foundation Constructs

CommandButton Command_ConstructWildMineShaft
	Command				= FOUNDATION_CONSTRUCT
	Object				= WildMineShaftFoundation
	TextLabel			= CONTROLBAR:ConstructWildMineShaft
	ButtonImage			= UIMMTunnel ;BWAbandonedMineShaft
	ButtonBorderType	= BUILD 
	DescriptLabel		= CONTROLBAR:ToolTipConstructWildMineShaft
	Radial				= Yes  
End
CommandButton Command_ConstructWildLumberMill
	Command				= FOUNDATION_CONSTRUCT
	Object				= WildLumberMillFoundation
	TextLabel			= CONTROLBAR:ConstructWildLumberMill
	ButtonImage			= uilumbermillnewbutton
	ButtonBorderType	= BUILD 
	DescriptLabel		= CONTROLBAR:ToolTipConstructLumberMill
	Radial				= Yes  
END
CommandButton Command_ConstructWildCave
	Command				= FOUNDATION_CONSTRUCT
	Object				= GoblinCaveFoundation
	TextLabel			= CONTROLBAR:ConstructWildGoblinCave
	ButtonImage			= UIMMGoblinCave ;BWCave
	ButtonBorderType	= BUILD 
	DescriptLabel		= CONTROLBAR:ToolTipConstructWildGoblinCave
	Radial				= Yes  
END
CommandButton Command_ConstructWildLodge
	Command				= FOUNDATION_CONSTRUCT
	Object				= WildLodgeFoundation
	TextLabel			= CONTROLBAR:ConstructWildMountainLodge
	ButtonImage			= UIMMGundabadPit
	ButtonBorderType	= BUILD 
	DescriptLabel		= CONTROLBAR:ToolTipConstructWildMountainLodge
	Radial				= Yes  
END
CommandButton Command_ConstructWildFissure
	Command				= FOUNDATION_CONSTRUCT
	Object				= GoblinFissureFoundation
	TextLabel			= CONTROLBAR:ConstructWildGoblinFissure
	ButtonImage			= BIMMTrollLair
	ButtonBorderType	= BUILD 
	DescriptLabel		= CONTROLBAR:ToolTipConstructWildGoblinFissure
	Radial				= Yes  
END
CommandButton Command_ConstructWyrmLair
	Command				= FOUNDATION_CONSTRUCT
	Options				= NEED_UPGRADE
	NeededUpgrade		= Upgrade_WildFortressNorthernWastes
	Object				= FireWyrmLairFoundation
	TextLabel			= CONTROLBAR:ConstructFireWyrmLair
	ButtonImage			= UIMMWyrmLair ;BIWyrmLair
	ButtonBorderType	= BUILD 
	DescriptLabel		= CONTROLBAR:ToolTipConstructFireWyrmLair
	Radial				= Yes  
END
CommandButton Command_ConstructWildSpiderPit
	Command				= FOUNDATION_CONSTRUCT
	Object				= WildSpiderPitFoundation
	TextLabel			= CONTROLBAR:ConstructWildWildSpiderPit
	ButtonImage			= UIMMWargCage ;BWSpiderPit
	ButtonBorderType	= BUILD 
	DescriptLabel		= CONTROLBAR:ToolTipConstructWildWildSpiderPit
	Radial				= Yes  
END
CommandButton Command_ConstructWildTreasureTrove
	Command				= FOUNDATION_CONSTRUCT
	Object				= WildTreasureTroveFoundation
	TextLabel			= CONTROLBAR:ConstructWildTreasureTrove
	ButtonImage			= UIMMTreasureTrove ;BWTreasureTrove
	ButtonBorderType	= BUILD 
	DescriptLabel		= CONTROLBAR:ToolTipConstructWildTreasureTrove
	Radial				= Yes
END
CommandButton Command_ConstructWildSentryTower
	Command				= FOUNDATION_CONSTRUCT
	Object				= WildSentryTowerFoundation
	TextLabel			= CONTROLBAR:ConstructWildSentryTower
	ButtonImage			= BIMMSentryTower
	ButtonBorderType	= BUILD 
	DescriptLabel		= CONTROLBAR:ToolTipConstructWildSentryTower
	Radial				= Yes
End

;--------------- Arnor Foundation Constructs

CommandButton Command_ConstructArnorFarm
  Command          = FOUNDATION_CONSTRUCT
  Object           = ArnorFarm
  TextLabel        = CONTROLBAR:ConstructArnorFarm
  ButtonImage     = BCFarm
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipArnorBuildFarm
  Radial           = Yes  
End
CommandButton Command_ConstructArnorWell
  Command          = FOUNDATION_CONSTRUCT
  Object           = ArnorWell
  TextLabel        = CONTROLBAR:ConstructArnorWell
  ButtonImage      = BGWell
  ButtonBorderType = BUILD 
  DescriptLabel    = OBJECT:HearthWellDescription
  Radial           = Yes  
End
CommandButton Command_ConstructArnorBarracks
  Command          = FOUNDATION_CONSTRUCT
  Object           = ArnorBarracks
  TextLabel        = CONTROLBAR:ConstructArnorBarracks
  ButtonImage      = BGBarracks
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipArnorBuildBarracks
  Radial           = Yes
End
CommandButton Command_ConstructArnorStable
  Command          = FOUNDATION_CONSTRUCT
  Object           = ArnorStable
  TextLabel        = CONTROLBAR:ConstructElvenStable
  ButtonImage      = BEGreenPasture
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipGreenPasture
  Radial           = Yes
End
CommandButton Command_ConstructArnorMarketPlace
  Command          = FOUNDATION_CONSTRUCT
  Object           = ArnorMarketPlace
  TextLabel        = CONTROLBAR:ConstructArnorMarketPlace
  ButtonImage      = BGMarketplace
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipArnorBuildMarketPlace
  Radial           = Yes  
End
CommandButton Command_ConstructArnorStatue
  Command          = FOUNDATION_CONSTRUCT
  Object           = ArnorHeroStatue
  TextLabel        = CONTROLBAR:ConstructArnorStatue
  ButtonImage      = BGHeroicStatue
  ButtonBorderType = BUILD 
  DescriptLabel    = OBJECT:HeroicStatueDescription
  Radial           = Yes  
End
CommandButton Command_ConstructArnorStoneMaker
  Command          = FOUNDATION_CONSTRUCT
  Object           = ArnorStoneMaker
  Options		   = NEEDS_CASTLE_KINDOF
  AffectsKindOf	   = WALK_ON_TOP_OF_WALL DEFENSIVE_WALL
  TextLabel        = CONTROLBAR:ConstructArnorStoneMaker
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipArnorBuildStoneMaker
  Radial           = Yes  
End
CommandButton Command_ConstructArnorArcherRange
  Command          = FOUNDATION_CONSTRUCT
  Object           = ArnorArcherRange
  TextLabel        = CONTROLBAR:ConstructArnorArcherRange
  ButtonImage      = BGArcheryRange
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipArnorBuildArcherRange
  Radial           = Yes  
End
CommandButton Command_ConstructArnorWorkshop
  Command          = FOUNDATION_CONSTRUCT
  Object           = ArnorWorkshop
  TextLabel        = CONTROLBAR:ConstructArnorWorkshop
  ButtonImage      = BGWorkshop
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipArnorBuildWorkshop
  Radial           = Yes  
End
CommandButton Command_ConstructArnorKeep
  Command          = FOUNDATION_CONSTRUCT
  Object           = ArnorKeep
  TextLabel        = CONTROLBAR:ConstructArnorKeep
  ButtonImage      = BGBattleTower
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipBuildArnorKeep
  Radial           = Yes  
End
CommandButton Command_ConstructArnorHseHeal
  Command          = FOUNDATION_CONSTRUCT
  Object           = ArnorHseHeal
  TextLabel        = CONTROLBAR:ConstructArnorHseHeal
  ButtonImage      = BGFortress_HouseofHealing
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipArnorBuildHseHeal
  Radial           = Yes  
End
CommandButton Command_ConstructArnorBlackSmith
  Command          = FOUNDATION_CONSTRUCT
  Object           = ArnorForge
  TextLabel        = CONTROLBAR:ConstructEregionForge
  ButtonImage      = BEEregionForge ;BEGreenPasture
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipEregionForge
  Radial           = Yes
End
CommandButton Command_ConstructArnorWall
  Command          = FOUNDATION_CONSTRUCT
  Object           = ArnorInnerWall
  TextLabel        = CONTROLBAR:ConstructArnorWall
  ButtonImage      = BRWall
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipArnorWall
  Radial           = Yes  
End

; --------------- Arnor End
;--------------- Rivendell Foundation Constructs
CommandButton Command_ConstructRivendellOrchard
	Command       		= FOUNDATION_CONSTRUCT
	Object        		= RivendellOrchardFoundation
	TextLabel     		= CONTROLBAR:ConstructArnorFarm
	ButtonImage   		= BIRivendellOrchard
	ButtonBorderType    = BUILD 
	DescriptLabel       = CONTROLBAR:ToolTipConstructArnorFarm
	Radial				= Yes
End
CommandButton Command_ConstructRivendellForge
	Command				= FOUNDATION_CONSTRUCT
	Object				= RivendellForgeFoundation
	TextLabel			= CONTROLBAR:ConstructRivendellBlacksmith
	ButtonImage			= BIRivendellForge
	ButtonBorderType	= BUILD 
	DescriptLabel		= CONTROLBAR:ToolTipConstructRivendellBlacksmith
	Radial				= Yes
End
CommandButton Command_ConstructRivendellBreelandCamp
	Command				= FOUNDATION_CONSTRUCT
	Object				= RivendellBreeLandEncampmentFoundation
	TextLabel			= CONTROLBAR:ConstructArnorArcheryRange
	ButtonImage			= BIRivendellEncampment
	ButtonBorderType	= BUILD 
	DescriptLabel		= CONTROLBAR:ToolTipArnorArcheryRange
	Radial				= Yes
End
CommandButton Command_ConstructRivendellDunedainGathering
	Command				= FOUNDATION_CONSTRUCT
	Object				= RivendellDunedainGatheringFoundation
	TextLabel			= CONTROLBAR:ConstructArnorStable
	ButtonImage			= BIRivendellGathering
	ButtonBorderType	= BUILD 
	DescriptLabel		= CONTROLBAR:ToolTipConstructArnorStable
	Radial				= Yes
End
CommandButton Command_ConstructRivendellDormitory
	Command       		= FOUNDATION_CONSTRUCT
	Object        		= RivendellDormitoryFoundation
	TextLabel     		= CONTROLBAR:ConstructArnorBarracks
	ButtonImage   		= BIRivendellDormitory
	ButtonBorderType    = BUILD 
	DescriptLabel       = CONTROLBAR:ToolTipConstructArnorBarracks
	Radial				= Yes
End
CommandButton Command_ConstructRivendellLibrary
	Command				= FOUNDATION_CONSTRUCT
	Object				= RivendellLibraryFoundation
	TextLabel			= CONTROLBAR:ConstructArnorMarketPlace
	ButtonImage			= BIRivendellLibrary
	ButtonBorderType	= BUILD 
	DescriptLabel		= CONTROLBAR:ToolTipConstructArnorMarketPlace
	Radial				= Yes  
End
CommandButton Command_ConstructRivendellLibrary_Disabled
	Command				= FOUNDATION_CONSTRUCT
	Options				= NEED_UPGRADE
	NeededUpgrade		= Upgrade_MiniHordeLvl10
	Object				= RivendellLibraryFoundation
	TextLabel			= CONTROLBAR:ConstructArnorMarketPlace
	ButtonImage			= BIRivendellLibrary
	ButtonBorderType	= BUILD 
	DescriptLabel		= CONTROLBAR:ToolTipConstructArnorMarketPlace_Disabled
	Radial				= Yes  
End
CommandButton Command_ConstructRivendellSentryTower
	Command				= FOUNDATION_CONSTRUCT
	Object				= RivendellKeepFoundation
	TextLabel			= CONTROLBAR:ConstructArnorSentryTower
	ButtonImage			= BIRivendellTower
	ButtonBorderType	= BUILD 
	DescriptLabel		= CONTROLBAR:ToolTipConstructArnorSentryTower
	Radial				= Yes  
End
CommandButton Command_ConstructRivendellWell
	Command				= FOUNDATION_CONSTRUCT
	Object				= RivendellWellFoundation
	TextLabel			= CONTROLBAR:ConstructArnorWell
	ButtonImage			= BIRivendellWell
	ButtonBorderType	= BUILD 
	DescriptLabel		= OBJECT:HearthWellDescription
	Radial				= Yes
End
CommandButton Command_ConstructRivendellStatue
	Command				= FOUNDATION_CONSTRUCT
	Object				= RivendellStatueFoundation
	TextLabel			= CONTROLBAR:ConstructArnorStatue
	ButtonImage			= BIRivendellStatue
	ButtonBorderType	= BUILD 
	DescriptLabel		= OBJECT:HeroicStatueDescription
	Radial				= Yes  
End

; --------------- Rivendell End

;--------------- Guldur Foundation Constructs
CommandButton Command_ConstructGuldurSlaveMill
	Command				= FOUNDATION_CONSTRUCT
	Object				= GuldurSlaveMillFoundation
	TextLabel			= CONTROLBAR:ConstructGuldurSlaveMill
	ButtonImage			= BIGuldurMill
	ButtonBorderType	= BUILD 
	DescriptLabel		= CONTROLBAR:TooltipConstructGuldurSlaveMill
	Radial				= Yes  
End
CommandButton Command_ConstructGuldurSlaveMill_DE
	Command				= FOUNDATION_CONSTRUCT
	Object				= GuldurSlaveMillFoundation_DE
	TextLabel			= CONTROLBAR:ConstructGuldurSlaveMill
	ButtonImage			= BIGuldurMill
	ButtonBorderType	= BUILD 
	DescriptLabel		= CONTROLBAR:TooltipConstructGuldurSlaveMill
	Radial				= Yes  
End
CommandButton Command_ConstructGuldurFountOfCorruption
	Command				= FOUNDATION_CONSTRUCT
	Object				= GuldurFountOfCorruptionFoundation
	TextLabel			= CONTROLBAR:ConstructGuldurFountOfCorruption
	ButtonImage			= BIGuldurFount
	ButtonBorderType	= BUILD 
	DescriptLabel		= CONTROLBAR:ToolTipConstructGuldurFountOfCorruption
	Radial				= Yes  
End
CommandButton Command_ConstructGuldurFountOfCorruption_DE
	Command				= FOUNDATION_CONSTRUCT
	Object				= GuldurFountOfCorruptionFoundation_DE
	TextLabel			= CONTROLBAR:ConstructGuldurFountOfCorruption
	ButtonImage			= BIGuldurFount
	ButtonBorderType	= BUILD 
	DescriptLabel		= CONTROLBAR:ToolTipConstructGuldurFountOfCorruption
	Radial				= Yes  
End
CommandButton Command_ConstructGuldurGuldurGaol
	Command				= FOUNDATION_CONSTRUCT
	Object				= GuldurGaolFoundation
	TextLabel			= CONTROLBAR:ConstructGuldurGaol
	ButtonImage			= BIGuldurGaol
	ButtonBorderType	= BUILD 
	DescriptLabel		= CONTROLBAR:ToolTipConstructGuldurGaol
	Radial				= Yes  
End
CommandButton Command_ConstructGuldurGuldurGaol_DE
	Command				= FOUNDATION_CONSTRUCT
	Object				= GuldurGaolFoundation_DE
	TextLabel			= CONTROLBAR:ConstructGuldurGaol
	ButtonImage			= BIGuldurGaol
	ButtonBorderType	= BUILD 
	DescriptLabel		= CONTROLBAR:ToolTipConstructGuldurGaol
	Radial				= Yes  
End
CommandButton Command_ConstructGuldurSpiderLair
	Command				= FOUNDATION_CONSTRUCT
	Object				= GuldurSpiderLairFoundation
	TextLabel			= CONTROLBAR:ConstructGuldurSpiderLair
	ButtonImage			= BIGuldurSpiderLair
	ButtonBorderType	= BUILD 
	DescriptLabel		= CONTROLBAR:ToolTipConstructGuldurSpiderLair
	Radial				= Yes  
End
CommandButton Command_ConstructGuldurSpiderLair_DE
	Command				= FOUNDATION_CONSTRUCT
	Object				= GuldurSpiderLairFoundation_DE
	TextLabel			= CONTROLBAR:ConstructGuldurSpiderLair
	ButtonImage			= BIGuldurSpiderLair
	ButtonBorderType	= BUILD 
	DescriptLabel		= CONTROLBAR:ToolTipConstructGuldurSpiderLair
	Radial				= Yes  
End
CommandButton Command_ConstructGuldurSorceryTower
	Command				= FOUNDATION_CONSTRUCT
	Object				= GuldurSorceryTowerFoundation
	TextLabel			= CONTROLBAR:ConstructGuldurSorceryTower
	ButtonImage			= BIGuldurSpire
	ButtonBorderType	= BUILD 
	DescriptLabel		= CONTROLBAR:ToolTipConstructGuldurSorceryTower
	Radial				= Yes  
End
CommandButton Command_ConstructGuldurSorceryTower_DE
	Command				= FOUNDATION_CONSTRUCT
	Object				= GuldurSorceryTowerFoundation_DE
	TextLabel			= CONTROLBAR:ConstructGuldurSorceryTower
	ButtonImage			= BIGuldurSpire
	ButtonBorderType	= BUILD 
	DescriptLabel		= CONTROLBAR:ToolTipConstructGuldurSorceryTower
	Radial				= Yes  
End
CommandButton Command_ConstructGuldurRuinousTower
	Command				= FOUNDATION_CONSTRUCT
	Object				= GuldurRuinousTowerFoundation
	TextLabel			= CONTROLBAR:ConstructGuldurRuinousTower
	ButtonImage			= BIGuldurRuinousTower
	ButtonBorderType	= BUILD 
	DescriptLabel		= CONTROLBAR:ToolTipConstructGuldurRuinousTower
	Radial				= Yes  
End
CommandButton Command_ConstructGuldurRuinousTower_DE
	Command				= FOUNDATION_CONSTRUCT
	Object				= GuldurRuinousTowerFoundation_DE
	TextLabel			= CONTROLBAR:ConstructGuldurRuinousTower
	ButtonImage			= BIGuldurRuinousTower
	ButtonBorderType	= BUILD 
	DescriptLabel		= CONTROLBAR:ToolTipConstructGuldurRuinousTower
	Radial				= Yes  
End
CommandButton Command_ConstructGuldurRestlessBarrow
	Command				= FOUNDATION_CONSTRUCT
	Object				= GuldurRestlessBarrowFoundation
	TextLabel			= CONTROLBAR:ConstructGuldurRestlessBarrow
	ButtonImage			= BIGuldurBarrow
	ButtonBorderType	= BUILD 
	DescriptLabel		= CONTROLBAR:ToolTipConstructGuldurRestlessBarrow
	Radial				= Yes  
End
CommandButton Command_ConstructGuldurRestlessBarrow_DE
	Command				= FOUNDATION_CONSTRUCT
	Object				= GuldurRestlessBarrowFoundation_DE
	TextLabel			= CONTROLBAR:ConstructGuldurRestlessBarrow
	ButtonImage			= BIGuldurBarrow
	ButtonBorderType	= BUILD 
	DescriptLabel		= CONTROLBAR:ToolTipConstructGuldurRestlessBarrow
	Radial				= Yes  
End
; --------------- Guldur End

;--------------- Mirkwood Foundation Constructs
CommandButton Command_ConstructMirkwoodHuntingLodgeFoundation
	Command       		= FOUNDATION_CONSTRUCT
	Object        		= MirkwoodHuntingLodgeFoundation
	TextLabel     		= CONTROLBAR:ConstructMirkwoodHuntingLodge
	ButtonImage   		= UIHuntingShrine
	ButtonBorderType    = BUILD 
	DescriptLabel       = CONTROLBAR:ToolTipMirkwoodHuntingLodge
	Radial				= Yes
End
CommandButton Command_ConstructMirkwoodVineyardFoundation
	Command       		= FOUNDATION_CONSTRUCT
	Object        		= MirkwoodVineyardFoundation
	TextLabel     		= CONTROLBAR:ConstructMirkwoodVineyard
	ButtonImage   		= UIGreenwoodVineyard
	ButtonBorderType    = BUILD 
	DescriptLabel       = CONTROLBAR:ToolTipMirkwoodVineyard
	Radial				= Yes
End
CommandButton Command_ConstructMirkwoodTrainingGroundsFoundation
	Command       		= FOUNDATION_CONSTRUCT
	Object        		= MirkwoodTrainingGroundsFoundation
	TextLabel     		= CONTROLBAR:ConstructMirkwoodTrainingGrounds
	ButtonImage   		= UISilvanClearing
	ButtonBorderType    = BUILD 
	DescriptLabel       = CONTROLBAR:ToolTipConstructMirkwoodTrainingGrounds
	Radial				= Yes
End
CommandButton Command_ConstructMirkwoodBeorningCabinFoundation
	Command       		= FOUNDATION_CONSTRUCT
	Object        		= MirkwoodBeorningCabinFoundation
	TextLabel     		= CONTROLBAR:ConstructMirkwoodBeorningCabin
	ButtonImage   		= UIBeorningLodge
	ButtonBorderType    = BUILD 
	DescriptLabel       = CONTROLBAR:ToolTipMirkwoodBeorningCabin
	Radial				= Yes
End
CommandButton Command_ConstructMirkwoodRoyalBarracksFoundation
	Command       		= FOUNDATION_CONSTRUCT
	Object        		= MirkwoodRoyalBarracksFoundation
	TextLabel     		= CONTROLBAR:ConstructMirkwoodRoyalBarracks
	ButtonImage   		= UIGreenwoodRoyalBarracks
	ButtonBorderType    = BUILD 
	DescriptLabel       = CONTROLBAR:ToolTipConstructMirkwoodRoyalBarracks
	Radial				= Yes
End
CommandButton Command_ConstructMirkwoodTreasuryFoundation
	Command       		= FOUNDATION_CONSTRUCT
	Object        		= MirkwoodTreasuryFoundation
	TextLabel     		= CONTROLBAR:ConstructMirkwoodTreasury
	ButtonImage   		= UIThranduilTreasury
	ButtonBorderType    = BUILD 
	DescriptLabel       = CONTROLBAR:ToolTipMirkwoodTreasury
	Radial				= Yes
End
CommandButton Command_ConstructMirkwoodSiegeGroundsFoundation
	Command       		= FOUNDATION_CONSTRUCT
	Object        		= MirkwoodSiegeGroundsFoundation
	TextLabel     		= CONTROLBAR:ConstructMirkwoodSiegeGrounds
	ButtonImage   		= UIGreenwoodSiegeGrounds
	ButtonBorderType    = BUILD 
	DescriptLabel       = CONTROLBAR:ToolTipConstructMirkwoodSiegeGrounds
	Radial				= Yes
End
CommandButton Command_ConstructMirkwoodCellarDoorFoundation
	Command       		= FOUNDATION_CONSTRUCT
	Object        		= MirkwoodCellarDoorFoundation
	TextLabel     		= CONTROLBAR:ConstructMirkwoodCellarDoor
	ButtonImage   		= uicellardoor
	ButtonBorderType    = BUILD 
	DescriptLabel       = CONTROLBAR:ToolTipMirkwoodCellarDoor
	Radial				= Yes
End
CommandButton Command_ConstructMirkwoodBattleTowerFoundation
	Command       		= FOUNDATION_CONSTRUCT
	Object        		= MirkwoodBattleTowerFoundation
	TextLabel     		= CONTROLBAR:ConstructMirkwoodBattleTower
	ButtonImage   		= UIWoodlandLookout
	ButtonBorderType    = BUILD 
	DescriptLabel       = CONTROLBAR:ToolTipConstructArnorSentryTower
	Radial				= Yes
End
CommandButton Command_ConstructMirkwoodWellFoundation
	Command       		= FOUNDATION_CONSTRUCT
	Object        		= MirkwoodWellFoundation
	TextLabel     		= CONTROLBAR:ConstructMirkwoodWell
	ButtonImage   		= UIWellofWine
	ButtonBorderType    = BUILD 
	DescriptLabel       = CONTROLBAR:MirkwoodWellDescription
	Radial				= Yes
End
CommandButton Command_ConstructMirkwoodStatueFoundation
	Command       		= FOUNDATION_CONSTRUCT
	Object        		= MirkwoodStatueFoundation
	TextLabel     		= CONTROLBAR:ConstructMirkwoodStatue
	ButtonImage   		= UIStatueofOropher
	ButtonBorderType    = BUILD 
	DescriptLabel       = CONTROLBAR:MirkwoodHeroicStatueBuild
	Radial				= Yes
End
; --------------- Mirkwood End