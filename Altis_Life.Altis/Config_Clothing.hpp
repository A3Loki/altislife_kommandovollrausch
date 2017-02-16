/*
	ARRAY FORMAT:
		0: STRING (Classname)
		1: STRING (Display Name, leave as "" for default)
		2: SCALAR (Price)
		4: ARRAY (This is for limiting items to certain things)
			0: Variable to read from
			1: Variable Value Type
			2: What to compare to
*/
class Clothing {
	class bruce {
		title = "STR_Shops_C_Bruce";
		license = "";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_C_Poloshirt_blue", "Poloshirt Blue", 250, { "", "", -1 } },
			{ "U_C_Poloshirt_burgundy", "Poloshirt Burgundy", 275, { "", "", -1 } },
			{ "U_C_Poloshirt_redwhite", "Poloshirt Red/White", 150, { "", "", -1 } },
			{ "U_C_Poloshirt_salmon", "Poloshirt Salmon", 175, { "", "", -1 } },
			{ "U_C_Poloshirt_stripped", "Poloshirt stripped", 125, { "", "", -1 } },
			{ "U_C_Poloshirt_tricolour", "Poloshirt Tricolor", 350, { "", "", -1 } },
			{ "U_C_Poor_2", "Rag tagged clothes", 250, { "", "", -1 } },
			{ "U_IG_Guerilla2_2", "Green stripped shirt & Pants", 650, { "", "", -1 } },
			{ "U_IG_Guerilla3_1", "Brown Jacket & Pants", 735, { "", "", -1 } },
			{ "U_IG_Guerilla2_3", "The Outback Rangler", 1200, { "", "", -1 } },
			{ "U_C_HunterBody_grn", "The Hunters Look", 1500, { "", "", -1 } },
			{ "U_C_WorkerCoveralls", "Mechanic Coveralls", 2500, { "", "", -1 } },
			{ "U_OrestesBody", "Surfing On Land", 1100, { "", "", -1 } },
			{ "U_NikosAgedBody", "Casual Wears", 5000, { "", "", -1 } }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_Bandanna_camo", "Camo Bandanna", 120, { "", "", -1 } },
			{ "H_Bandanna_surfer", "Surfer Bandanna", 130, { "", "", -1 } },
			{ "H_Bandanna_gry", "Grey Bandanna", 150, { "", "", -1 } },
			{ "H_Bandanna_cbr", "", 165, { "", "", -1 } },
			{ "H_Bandanna_surfer", "", 135, { "", "", -1 } },
			{ "H_Bandanna_khk", "Khaki Bandanna", 145, { "", "", -1 } },
			{ "H_Bandanna_sgg", "Sage Bandanna", 160, { "", "", -1 } },
			{ "H_StrawHat", "Straw Fedora", 225, { "", "", -1 } },
			{ "H_BandMask_blk", "Hat & Bandanna", 300, { "", "", -1 } },
			{ "H_Booniehat_tan", "", 425, { "", "", -1 } },
			{ "H_Hat_blue", "", 310, { "", "", -1 } },
			{ "H_Hat_brown", "", 276, { "", "", -1 } },
			{ "H_Hat_checker", "", 340, { "", "", -1 } },
			{ "H_Hat_grey", "", 280, { "", "", -1 } },
			{ "H_Hat_tan", "", 265, { "", "", -1 } },
			{ "H_Cap_blu", "", 150, { "", "", -1 } },
			{ "H_Cap_grn", "", 150, { "", "", -1 } },
			{ "H_Cap_grn_BI", "", 150, { "", "", -1 } },
			{ "H_Cap_oli", "", 150, { "", "", -1 } },
			{ "H_Cap_red", "", 150, { "", "", -1 } },
			{ "H_Cap_tan", "", 150, { "", "", -1 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Shades_Black", "", 25, { "", "", -1 } },
			{ "G_Shades_Blue", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackred", "", 20, { "", "", -1 } },
			{ "G_Sport_Checkered", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
			{ "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
			{ "G_Squares", "", 10, { "", "", -1 } },
			{ "G_Aviator", "", 100, { "", "", -1 } },
			{ "G_Lady_Mirror", "", 150, { "", "", -1 } },
			{ "G_Lady_Dark", "", 150, { "", "", -1 } },
			{ "G_Lady_Blue", "", 150, { "", "", -1 } },
			{ "G_Lowprofile", "", 30, { "", "", -1 } },
			{ "G_Combat", "", 55, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "B_AssaultPack_cbr", "", 2500, { "", "", -1 } },
			{ "B_Kitbag_mcamo", "", 4500, { "", "", -1 } },
			{ "B_TacticalPack_oli", "", 3500, { "", "", -1 } },
			{ "B_FieldPack_ocamo", "", 3000, { "", "", -1 } },
			{ "B_Bergen_sgg", "", 4500, { "", "", -1 } },
			{ "B_Kitbag_cbr", "", 4500, { "", "", -1 } },
			{ "B_Carryall_oli", "", 5000, { "", "", -1 } },
			{ "B_Carryall_khk", "", 5000, { "", "", -1 } }
		};
	};

	class medcloth {
		title = "STR_Shops_C_Bruce";
		license = "";
		side = "med";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_C_WorkerCoveralls", "ART", 250, { "life_mediclevel", "SCALAR", -1 } },
			{ "U_I_CombatUniform", "Notarzt", 250, { "life_mediclevel", "SCALAR", 3 } }

		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "B_Bergen_mcamo", "", 800, { "", "", -1 } },
			{ "B_Bergen_rgr", "", 800, { "", "", -1 } }
		};
	};

	class cop {
		title = "STR_Shops_C_Police";
		license = "";
		side = "cop";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_Rangemaster", "Rekrut Uniform", 25, { "", "", -1 } },
			{ "U_B_Wetsuit", "Taucheranzug", 25, { "", "", -1 } },
			{ "U_B_GEN_Soldier_F", "Wachtmeister+", 350, { "life_coplevel", "SCALAR", 2 } },
			{ "U_B_GEN_Commander_F", "Leutnant+", 1250, { "life_coplevel", "SCALAR", 6 } },
			{ "U_O_V_Soldier_Viper_F", "SWAT", 550, { "life_coplevel", "SCALAR", 10 } }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_Beret_blk_POLICE", "", 75 , { "", "", -1 } },
			{ "H_Beret_02", "", 85 , { "", "", -1 } },
			{ "H_Watchcap_blk", "", 85 , { "", "", -1 } },
			{ "H_Beret_Colonel", "", 95 , { "", "", -1 } },
			{ "H_HelmetB", "", 105 , { "", "", -1 } },
			{ "H_HelmetB_plain_blk", "", 115 , { "", "", -1 } },
			{ "H_MilCap_gry", "", 125 , { "", "", -1 } },
			{ "H_Cap_headphones", "", 125 , { "", "", -1 } },
			{ "H_Cap_blk", "", 150 , { "", "", -1 } },
			{ "H_Cap_brn_SPECOPS", "", 200 , { "", "", -1 } },
			{ "H_Cap_khaki_specops_UK", "", 200 , { "", "", -1 } },
			{ "H_Cap_tan_specops_US", "", 200 , { "", "", -1 } },
			{ "H_PilotHelmetHeli_B", "", 500 , { "", "", -1 } },
			{ "H_CrewHelmetHeli_B", "", 500 , { "", "", -1 } },
			{ "H_HelmetB_plain_blk", "", 200 , { "", "", -1 } },
			{ "H_HelmetSpecB_blk", "", 300 , { "", "", -1 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Shades_Black", "", 25, { "", "", -1 } },
			{ "G_Shades_Blue", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackred", "", 20, { "", "", -1 } },
			{ "G_Sport_Checkered", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
			{ "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
			{ "G_Squares", "", 10, { "", "", -1 } },
			{ "G_Aviator", "", 100, { "", "", -1 } },
			{ "G_Lady_Mirror", "", 150, { "", "", -1 } },
			{ "G_Lady_Dark", "", 150, { "", "", -1 } },
			{ "G_Lady_Blue", "", 150, { "", "", -1 } },
			{ "G_Lowprofile", "", 30, { "", "", -1 } },
			{ "G_Combat", "", 55, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "V_Rangemaster_belt", "", 800, { "life_coplevel", "SCALAR", 1 } },
			{ "V_RebreatherB", "Atemgeraet", 800, { "life_coplevel", "SCALAR", 1 } },
			{ "V_TacVest_blk_POLICE", "", 1300, { "life_coplevel", "SCALAR", 2 } },
			{ "V_PlateCarrier1_blk", "", 1300, { "life_coplevel", "SCALAR", 2 } },
			{ "V_PlateCarrierIAGL_dgtl", "", 3000, { "life_coplevel", "SCALAR", 4 } },
			{ "V_PlateCarrierSpec_blk", "", 13000, { "life_coplevel", "SCALAR", 4 } },
			{ "V_PlateCarrierGL_blk", "", 13000, { "life_coplevel", "SCALAR", 4 } },
			{ "V_PlateCarrier_Kerry", "", 4500, { "life_coplevel", "SCALAR", 5 } },
			{ "V_PlateCarrier1_rgr", "", 1500, { "life_coplevel", "SCALAR", 5 } },
			{ "V_PlateCarrier3_rgr", "", 1450, { "life_coplevel", "SCALAR", 5 } },
			{ "V_HarnessO_gry", "", 2100, { "life_coplevel", "SCALAR", 5 } },
			{ "V_Chestrig_blk", "", 2300, { "life_coplevel", "SCALAR", 5 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "B_Bergen_mcamo", "", 800, { "", "", -1 } }
		};
	};

	class dive {
		title = "STR_Shops_C_Diving";
		license = "dive";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_B_Wetsuit", "", 2000, { "", "", -1 } }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Diving", "", 500, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "V_RebreatherB", "", 5000, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } }
		};
	};

	class reb {
		title = "STR_Shops_C_Rebel";
		license = "rebel";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_IG_Guerilla1_1", "", 5000, { "", "", -1 } },
			{ "U_I_G_Story_Protagonist_F", "", 7500, { "", "", -1 } },
			{ "U_I_G_resistanceLeader_F", "", 11500, { "", "", -1 } },
			{ "U_O_SpecopsUniform_ocamo", "", 17500, { "", "", -1 } },
			{ "U_O_PilotCoveralls", "", 15610, { "", "", -1 } },
			{ "U_I_pilotCoveralls", "", 15700, { "", "", -1 } },
			{ "U_O_CombatUniform_oucamo", "", 13000, { "", "", -1 } },
			{ "U_O_SpecopsUniform_ocamo", "", 13000, { "", "", -1 } },
			{ "U_O_OfficerUniform_ocamo", "", 13250, { "", "", -1 } },
			{ "U_IG_leader","Guerilla Leader",15340, { "", "", -1 } },
			{ "U_I_CombatUniform", "", 14250, { "", "", -1 } },
			{ "U_I_CombatUniform_tshirt", "", 14250, { "", "", -1 } },
			{ "U_I_OfficerUniform", "", 125009, { "", "", -1 } },
			{ "U_KerryBody", "", 11000, { "", "", -1 } },
			{ "U_IG_Guerilla1_1", "", 12500, { "", "", -1 } },
			{ "U_B_survival_uniform", "", 12000, { "", "", -1 } },
			{ "U_O_GhillieSuit", "", 100000, { "", "", -1 } },
			{ "U_I_GhillieSuit", "", 100000, { "", "", -1 } },
			//DLC
			{ "U_B_FullGhillie_ard", "", 150000, { "", "", -1 } },
			{ "U_I_FullGhillie_ard", "", 150000, { "", "", -1 } },
			{ "U_O_FullGhillie_ard", "", 150000, { "", "", -1 } },
			{ "U_B_FullGhillie_sard", "", 150000, { "", "", -1 } },
			{ "U_O_FullGhillie_sard", "", 150000, { "", "", -1 } },
			{ "U_I_FullGhillie_sard", "", 150000, { "", "", -1 } },
			{ "U_B_FullGhillie_lsh", "", 150000, { "", "", -1 } },
			{ "U_O_FullGhillie_lsh", "", 150000, { "", "", -1 } },
			{ "U_I_FullGhillie_lsh", "", 150000, { "", "", -1 } }
		};

		headgear[] = {
			{ "H_ShemagOpen_tan", "", 850, { "", "", -1 } },
			{ "H_Shemag_olive", "", 850, { "", "", -1 } },
			{ "H_ShemagOpen_khk", "", 800, { "", "", -1 } },
			{ "H_HelmetO_ocamo", "", 2500, { "", "", -1 } },
			{ "H_MilCap_oucamo", "", 1200, { "", "", -1 } },
			{ "H_Bandanna_camo", "", 650, { "", "", -1 } },
			{ "H_HelmetB", "", 750, { "", "", -1 } },
			{ "H_HelmetB_camo", "", 750, { "", "", -1 } },
			{ "H_HelmetB_paint", "", 750, { "", "", -1 } },
			{ "H_HelmetB_light", "", 750, { "", "", -1 } },
			{ "H_HelmetIA", "", 750, { "", "", -1 } },
			{ "H_HelmetB_desert", "", 750, { "", "", -1 } },
			{ "H_HelmetCrew_B", "", 750, { "", "", -1 } },
			{ "H_PilotHelmetFighter_I", "", 750, { "", "", -1 } },
			{ "H_Watchcap_blk", "", 750, { "", "", -1 } },
			{ "H_Watchcap_camo", "", 750, { "", "", -1 } },
			{ "H_Watchcap_khk", "", 750, { "", "", -1 } },
			{ "H_Watchcap_sgg", "", 750, { "", "", -1 } },
			{ "H_MilCap_dgtl", "", 750 , { "", "", -1 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Bandanna_blk", "", 250, { "", "", -1 } },
			{ "G_Balaclava_blk", "", 250, { "", "", -1 } },
			{ "G_Shades_Black", "", 25, { "", "", -1 } },
			{ "G_Shades_Blue", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackred", "", 20, { "", "", -1 } },
			{ "G_Sport_Checkered", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
			{ "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
			{ "G_Squares", "", 10, { "", "", -1 } },
			{ "G_Lowprofile", "", 30, { "", "", -1 } },
			{ "G_Combat", "", 55, { "", "", -1 } }
		};

		vests[] = {
			{ "V_Chestrig_khk", "", 2500, { "", "", -1 } },
			{ "V_Chestrig_rgr", "", 2500, { "", "", -1 } },
			{ "V_Chestrig_blk", "", 2500, { "", "", -1 } },
			{ "V_Chestrig_oli", "", 2500, { "", "", -1 } },
			{ "V_TacVest_khk", "", 2500, { "", "", -1 } },
			{ "V_TacVest_brn", "", 2500, { "", "", -1 } },
			{ "V_TacVest_oli", "", 2500, { "", "", -1 } },
			{ "V_TacVest_blk", "", 2500, { "", "", -1 } },
			{ "V_TacVest_camo", "", 2500, { "", "", -1 } },
			{ "V_TacVestIR_blk", "", 2500, { "", "", -1 } },
			{ "V_HarnessO_brn", "", 2500, { "", "", -1 } },
			{ "V_HarnessOGL_gry", "", 2500, { "", "", -1 } },
			{ "V_PlateCarrierIA1_dgtl", "", 2500, { "", "", -1 } },
			{ "V_PlateCarrierIA2_dgtl", "", 2500, { "", "", -1 } },
			{ "V_RebreatherIA", "", 2500, { "", "", -1 } },
			{ "V_RebreatherIR", "", 2500, { "", "", -1 } },
			{ "V_PlateCarrier_Kerry", "", 2500, { "", "", -1 } },
			{ "V_PlateCarrierL_CTRG", "", 2500, { "", "", -1 } },
			{ "V_PlateCarrierH_CTRG", "", 2500, { "", "", -1 } },
			{ "V_HarnessOGL_brn", "", 2500, { "", "", -1 } },
			//DLC
			{ "V_PlateCarrierSpec_mtp", "", 65000, { "", "", -1 } },
			{ "V_PlateCarrierGL_mtp", "", 55000, { "", "", -1 } },
			{ "V_PlateCarrierIAGL_oli", "", 60000, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "B_AssaultPack_khk", "", 1100, { "", "", -1 } },
			{ "B_AssaultPack_dgtl", "", 1100, { "", "", -1 } },
			{ "B_AssaultPack_rgr", "", 1100, { "", "", -1 } },
			{ "B_AssaultPack_sgg", "", 1100, { "", "", -1 } },
			{ "B_AssaultPack_blk", "", 1100, { "", "", -1 } },
			{ "B_AssaultPack_cbr", "", 1100, { "", "", -1 } },
			{ "B_AssaultPack_mcamo", "", 1100, { "", "", -1 } },
			{ "B_FieldPack_blk", "", 2200, { "", "", -1 } },
			{ "B_FieldPack_ocamo", "", 2200, { "", "", -1 } },
			{ "B_FieldPack_oucamo", "", 2200, { "", "", -1 } },
			{ "B_FieldPack_cbr", "", 2200, { "", "", -1 } },
			{ "B_Kitbag_mcamo", "", 2800, { "", "", -1 } },
			{ "B_Kitbag_sgg", "", 2800, { "", "", -1 } },
			{ "B_Kitbag_cbr", "", 2800, { "", "", -1 } },
			{ "B_Bergen_sgg", "", 3200, { "", "", -1 } },
			{ "B_Bergen_rgr", "", 3200, { "", "", -1 } },
			{ "B_Bergen_blk", "", 3200, { "", "", -1 } },
			{ "B_OutdoorPack_blk", "", 4100, { "", "", -1 } },
			{ "B_OutdoorPack_tan", "", 4100, { "", "", -1 } },
			{ "B_OutdoorPack_blu", "", 4100, { "", "", -1 } },
			{ "B_HuntingBackpack", "", 4100, { "", "", -1 } },
			{ "B_Carryall_ocamo", "", 5500, { "", "", -1 } },
			{ "B_Carryall_oucamo", "", 5500, { "", "", -1 } },
			{ "B_Carryall_mcamo", "", 5500, { "", "", -1 } },
			{ "B_Carryall_oli", "", 5500, { "", "", -1 } },
			{ "B_Carryall_khk", "", 5500, { "", "", -1 } },
			{ "B_Carryall_cbr", "", 5500, { "", "", -1 } }
		};
	};

	class kart {
		title = "STR_Shops_C_Kart";
		license = "";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_C_Driver_1_black", "", 1500, { "", "", -1 } },
			{ "U_C_Driver_1_blue", "", 1500, { "", "", -1 } },
			{ "U_C_Driver_1_red", "", 1500, { "", "", -1 } },
			{ "U_C_Driver_1_orange", "", 1500, { "", "", -1 } },
			{ "U_C_Driver_1_green", "", 1500, { "", "", -1 } },
			{ "U_C_Driver_1_white", "", 1500, { "", "", -1 } },
			{ "U_C_Driver_1_yellow", "", 1500, { "", "", -1 } },
			{ "U_C_Driver_2", "", 3500, { "", "", -1 } },
			{ "U_C_Driver_1", "", 3600, { "", "", -1 } },
			{ "U_C_Driver_3", "", 3700, { "", "", -1 } },
			{ "U_C_Driver_4", "", 3700, { "", "", -1 } }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_RacingHelmet_1_black_F", "", 1000, { "", "", -1 } },
			{ "H_RacingHelmet_1_red_F", "", 1000, { "", "", -1 } },
			{ "H_RacingHelmet_1_white_F", "", 1000, { "", "", -1 } },
			{ "H_RacingHelmet_1_blue_F", "", 1000, { "", "", -1 } },
			{ "H_RacingHelmet_1_yellow_F", "", 1000, { "", "", -1 } },
			{ "H_RacingHelmet_1_green_F", "", 1000, { "", "", -1 } },
			{ "H_RacingHelmet_1_F", "", 2500, { "", "", -1 } },
			{ "H_RacingHelmet_2_F", "", 2500, { "", "", -1 } },
			{ "H_RacingHelmet_3_F", "", 2500, { "", "", -1 } },
			{ "H_RacingHelmet_4_F", "", 2500, { "", "", -1 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } }
		};
	};
};