class WeaponShops {

    class gun {
        name = "Billy Joe's Feuerwaffen";
        side = "civ";
        license = "gun";
        level = -1;
        msg = "";
        items[] = {
					{ "hgun_Rook40_F", "",  6500 },
					{ "hgun_Pistol_heavy_02_F", "",  9850 },
					{ "hgun_ACPC2_F", "",  11500 },
					{ "optic_ACO_grn_smg", "",  2500 },
					{ "V_Rangemaster_belt", "",  4900 },
					{ "16Rnd_9x21_Mag", "",  25 },
					{ "9Rnd_45ACP_Mag", "",  45 },
					{ "6Rnd_45ACP_Cylinder", "",  50 },
					{ "30Rnd_9x21_Mag", "",  75}
        };
    };
    class rebel {
        name = "Leichte Waffen";
        side = "civ";
        license = "rebel";
        level = -1;
        msg = "";
        items[] = {
					{ "hgun_ACPC2_F", "",  9500 },
					{ "9Rnd_45ACP_Mag", "",  650 },
					{ "hgun_Pistol_heavy_01_F", "",  11000 },
					{ "11Rnd_45ACP_Mag", "",  850 },
					{ "hgun_Pistol_heavy_02_F", "",  15000 },
					{ "6Rnd_45ACP_Cylinder", "",  850 },
					{ "SMG_01_F", "",  135000 },
					{ "30Rnd_45ACP_Mag_SMG_01", "",  150 },
					{ "SMG_02_F", "",  135000 },
					{ "30Rnd_9x21_Mag", "",  380 },
					{ "arifle_Katiba_C_F", "",  150000 },
					{ "arifle_Katiba_F", "",  165000 },
					{ "30Rnd_65x39_caseless_green", "",  380 },
					{ "arifle_MXM_F", "",  115000 },
					{ "arifle_MXC_F", "",  85000 },
					{ "arifle_MX_F", "",  95000 },
					{ "30Rnd_65x39_caseless_mag", "",  380 },
					{ "arifle_MX_SW_F", "",  185000 },
					{ "100Rnd_65x39_caseless_mag", "",  450 },
					{ "arifle_TRG20_F", "",  75000 },
					{ "arifle_TRG21_F", "",  75000 },
					{ "30Rnd_556x45_Stanag", "",  380 },
					{ "arifle_Mk20_F", "",  65000 },
					{ "arifle_Mk20_plain_F", "",  65000 },
					{ "arifle_Mk20C_F", "",  45000 },
					{ "arifle_Mk20C_plain_F", "",  55000 },
					{ "30Rnd_556x45_Stanag", "",  950 },
					{ "30Rnd_556x45_Stanag_Tracer_Red", "",  950 },
					{ "30Rnd_556x45_Stanag_Tracer_Green", "",  950 },
					{ "30Rnd_556x45_Stanag_Tracer_Yellow", "",  950 }
        };
    };
	
	    class rebel_heavy {
        name = "Schwere Waffen";
        side = "civ";
        license = "rebel";
        level = -1;
        msg = "";
        items[] = {
					//MG
					{ "LMG_Mk200_F", "",  800000 },
					{ "200Rnd_65x39_cased_Box", "",  15000 },
					{ "LMG_Zafir_F", "",  950000 },
					{ "150Rnd_762x51_Box", "",  18000 },
					//Sniper
					{ "srifle_DMR_06_camo_F", "",  380000 },
					{ "srifle_DMR_06_olive_F", "",  380000 },
					{ "20Rnd_762x51_Mag", "",  15000 },
					{ "srifle_EBR_F", "",  300000 },
					{ "20Rnd_762x51_Mag", "",  9500 },
					{ "srifle_GM6_SOS_F", "",  995000 },
					{ "5Rnd_127x108_Mag", "",  25000 },
					{ "srifle_LRR_F", "",  1480000 },
					{ "7Rnd_408_Mag", "",  25000 },
					{ "srifle_DMR_05_blk_F", "",  960000 },
					{ "srifle_DMR_05_tan_F", "",  960000 },
					{ "srifle_DMR_05_hex_F", "",  960000 },
					{ "10Rnd_93x64_DMR_05_Mag", "",  35000 },
					{ "srifle_DMR_02_F", "",  900000 },
					{ "srifle_DMR_02_camo_F", "",  900000 },
					{ "srifle_DMR_02_sniper_F", "",  900000 },
					{ "10Rnd_338_Mag", "",  35000 },
					//DLC
					{ "srifle_DMR_04_F", "",  315000 },
					{ "srifle_DMR_04_tan_F", "",  315000 },
					{ "10Rnd_127x54_Mag", "",  15000 },
					{ "srifle_DMR_03_F", "",  450000 },
					{ "srifle_DMR_03_khaki_F", "",  450000 },
					{ "srifle_DMR_03_tan_F", "",  450000 },
					{ "srifle_DMR_03_woodland_F", "",  450000 },
					{ "srifle_DMR_03_multicam_F", "",  450000 },
					{ "20Rnd_762x51_Mag", "",  13000 }
        };
    };

	class rebel_attach {
        name = "Aufsätze und Zubehör";
        side = "civ";
        license = "rebel";
        level = -1;
        msg = "";
        items[] = {
						{ "acc_flashlight", "",  2100 },
						{ "acc_pointer_IR", "",  2500 }, 
						{ "optic_Holosight", "",  4100 },
						{ "optic_Aco", "",  3900 },
						{ "optic_ACO_grn", "",  3900 },
						{ "optic_Hamr", "",  6800 },
						{ "optic_Arco", "",  6800 },
						{ "optic_MRCO", "",  6800 },
						{ "optic_SOS", "",  32000 },
						{ "optic_DMS", "",  38000 },
						{ "optic_NVS", "",  55000 },
						{ "muzzle_snds_H", "",  6800 },
						{ "muzzle_snds_L", "",  6800 },
						{ "muzzle_snds_M", "",  6800 },
						{ "muzzle_snds_B", "",  6800 },
						{ "muzzle_snds_H_MG", "",  6800 },
						{ "SmokeShellYellow", "",  15000 },
						{ "SmokeShellGreen", "",  15000 },
						{ "SmokeShellRed", "",  15000 },
						{ "SmokeShellPurple", "",  15000 },
						{ "SmokeShellOrange", "",  15000 },
						{ "Binocular", "",  150 },
						{ "ItemGPS", "",  100 },
						{ "ToolKit", "",  250 },
						{ "FirstAidKit", "",  150 },
						{ "NVGoggles", "",  2000 },
						{ "Rangefinder", "",  8000 },
						{ "ItemRadio", "",  6000 },
						// DLC ZUBEHÖR
						{ "bipod_01_F_blk", "",  15000 },
						{ "bipod_01_F_mtp", "",  15000 },
						{ "bipod_01_F_snd", "",  15000 },
						{ "bipod_02_F_blk", "",  15000 },
						{ "bipod_02_F_hex", "",  15000 },
						{ "bipod_02_F_tan", "",  15000 },
						{ "bipod_03_F_blk", "",  15000 },
						{ "bipod_03_F_oli", "",  15000 },
						{ "optic_AMS", "",  65000 },
						{ "optic_AMS_khk", "",  65000 },
						{ "optic_AMS_snd", "",  65000 },
						{ "optic_KHS_blk", "",  65000 },
						{ "optic_KHS_hex", "",  65000 },
						{ "optic_KHS_old", "",  65000 },
						{ "optic_KHS_tan", "",  65000 },
						{ "muzzle_snds_93mmg", "",  55000 },
						{ "muzzle_snds_93mmg_tan", "",  55000 },
						{ "muzzle_snds_338_black", "",  55000 },
						{ "muzzle_snds_338_green", "",  55000 },
						{ "muzzle_snds_338_sand", "",  55000 }
        };
    };
    class gang {
        name = "Hideout Armament";
        side = "civ";
        license = "";
        level = -1;
        msg = "";
        items[] = {
            { "hgun_Rook40_F", "",  1500 },
            { "hgun_Pistol_heavy_02_F", "",  2500 },
            { "hgun_ACPC2_F", "",  4500 },
            { "hgun_PDW2000_F", "",  9500 },
            { "optic_ACO_grn_smg", "",  950 },
            { "V_Rangemaster_belt", "",  1900 },
            { "16Rnd_9x21_Mag", "",  25 },
            { "9Rnd_45ACP_Mag", "",  45 },
            { "6Rnd_45ACP_Cylinder", "",  50 },
            { "30Rnd_9x21_Mag", "",  75 }
        };
    };
    
    class genstore {
        name = "Altis General Store";
        side = "civ";
        license = "";
        level = -1;
        msg = "";
        items[] = {
        	{ "Binocular", "",  150 },
			{ "ItemGPS", "",  100 },
			{ "ToolKit", "",  250 },
			{ "FirstAidKit", "",  150 },
			{ "NVGoggles", "",  2000 },
			{ "Chemlight_red", "",  300 },
			{ "Chemlight_yellow", "",  300 },
			{ "Chemlight_green", "",  300 },
			{ "Chemlight_blue", "",  300 }
        };
    };
		class cop_attach {
        name = "Aufsätze und Zubehör";
        side = "cop";
        license = "";
        level = -1;
        msg = "";
        items[] = {
						{ "acc_flashlight", "",  2100 },
						{ "acc_pointer_IR", "",  2500 }, 
						{ "optic_Holosight", "",  4100 },
						{ "optic_Aco", "",  3900 },
						{ "optic_ACO_grn", "",  3900 },
						{ "optic_Hamr", "",  6800 },
						{ "optic_Arco", "",  6800 },
						{ "optic_MRCO", "",  6800 },
						{ "optic_SOS", "",  32000 },
						{ "optic_DMS", "",  38000 },
						{ "optic_NVS", "",  55000 },
						{ "muzzle_snds_H", "",  6800 },
						{ "muzzle_snds_L", "",  6800 },
						{ "muzzle_snds_M", "",  6800 },
						{ "muzzle_snds_B", "",  6800 },
						{ "muzzle_snds_H_MG", "",  6800 },
						{ "SmokeShellYellow", "",  15000 },
						{ "SmokeShellGreen", "",  15000 },
						{ "SmokeShellRed", "",  15000 },
						{ "SmokeShellPurple", "",  15000 },
						{ "SmokeShellOrange", "",  15000 },
						{ "Binocular", "",  150 },
						{ "ItemGPS", "",  100 },
						{ "ToolKit", "",  250 },
						{ "FirstAidKit", "",  150 },
						{ "NVGoggles", "",  2000 },
						{ "Rangefinder", "",  8000 },
						{ "ItemRadio", "",  6000 },
						// DLC ZUBEHÖR
						{ "bipod_01_F_blk", "",  15000 },
						{ "bipod_01_F_mtp", "",  15000 },
						{ "bipod_01_F_snd", "",  15000 },
						{ "bipod_02_F_blk", "",  15000 },
						{ "bipod_02_F_hex", "",  15000 },
						{ "bipod_02_F_tan", "",  15000 },
						{ "bipod_03_F_blk", "",  15000 },
						{ "bipod_03_F_oli", "",  15000 },
						{ "optic_AMS", "",  65000 },
						{ "optic_AMS_khk", "",  65000 },
						{ "optic_AMS_snd", "",  65000 },
						{ "optic_KHS_blk", "",  65000 },
						{ "optic_KHS_hex", "",  65000 },
						{ "optic_KHS_old", "",  65000 },
						{ "optic_KHS_tan", "",  65000 },
						{ "muzzle_snds_93mmg", "",  55000 },
						{ "muzzle_snds_93mmg_tan", "",  55000 },
						{ "muzzle_snds_338_black", "",  55000 },
						{ "muzzle_snds_338_green", "",  55000 },
						{ "muzzle_snds_338_sand", "",  55000 }
        };
    };
 
    class cop_recruit {
        name = "Altis Rekrut Shop";
        side = "cop";
        license = "";
        level = -1;
        msg = "";
        items[] = {
				{ "hgun_P07_snds_F" },
				{ "30Rnd_9x21_Mag", "",  300 },
				{ "hgun_ACPC2_F","", 1000 },
				{ "9Rnd_45ACP_Mag","", 1000 },
				{ "FirstAidKit", "",  300 },
				{ "ToolKit", "",  300 }
        };
    };
    class cop_officer {
        name = "Wachtmeister Shop";
        side = "cop";
        license = "";
        level = 2;
        msg = "Du bist kein Wachtmeister!";
        items[] = {
				{ "NVGoggles", "",  1200 },
				{ "hgun_P07_snds_F" },
				{ "30Rnd_9x21_Mag", "",  300 },
				{ "hgun_ACPC2_F","", 1000 },
				{ "9Rnd_45ACP_Mag","", 1000 },
				{ "FirstAidKit", "",  300 },
				{ "ToolKit", "",  300 },
				{ "SMG_02_F", "", 1000 },
				{ "30Rnd_9x21_Mag", "", 300 },
				{ "arifle_MXC_F", "", 1500 },
				{ "30Rnd_65x39_caseless_mag", "", 300 }
        };
    };
    class cop_detective {
        name = "Oberwachtmeister Shop";
        side = "cop";
        license = "";
        level = 3;
        msg = "Du bist kein Oberwachtmeister!";
        items[] = {
				{ "NVGoggles", "",  1200 },
				{ "hgun_P07_snds_F" },
				{ "30Rnd_9x21_Mag", "",  300 },
				{ "hgun_ACPC2_F","", 1000 },
				{ "9Rnd_45ACP_Mag","", 1000 },
				{ "FirstAidKit", "",  300 },
				{ "ToolKit", "",  300 },
				{ "SMG_02_F", "", 1000 },
				{ "30Rnd_9x21_Mag", "", 300 },
				{ "arifle_MXC_F", "", 1500 },
				{ "30Rnd_65x39_caseless_mag", "", 300 },
				{ "arifle_CTAR_blk_F","",1500},
				{ "30Rnd_580x42_Mag_F","",300}
        };
    };    
	
	class cop_sergeant {
        name = "Hauptwachtmeister Shop";
        side = "cop";
        license = "";
        level = 4;
        msg = "Du bist kein Hauptwachtmeister!";
        items[] = {
				{ "NVGoggles", "",  1200 },
				{ "hgun_P07_snds_F" },
				{ "30Rnd_9x21_Mag", "",  300 },
				{ "hgun_ACPC2_F","", 1000 },
				{ "9Rnd_45ACP_Mag","", 1000 },
				{ "FirstAidKit", "",  300 },
				{ "ToolKit", "",  300 },
				{ "SMG_02_F", "", 1000 },
				{ "30Rnd_9x21_Mag", "", 300 },
				{ "arifle_MXC_F", "", 1500 },
				{ "arifle_MXC_Black_F", "", 2500},
				{ "arifle_MX_F", "", 2000 },
				{ "arifle_MX_Black_F", "", 3000 },
				{ "30Rnd_65x39_caseless_mag", "", 300 },
				{ "arifle_CTAR_blk_F","", 1500},
				{ "30Rnd_580x42_Mag_F","", 300},
				{ "arifle_ARX_blk_F","", 1500},
				{ "30Rnd_65x39_caseless_green","", 300}
				
        };
    };	
	
	class cop_master_sergeant {
        name = "Leutnant Shop";
        side = "cop";
        license = "";
        level = 5;
        msg = "Du bist kein Leutnant!";
        items[] = {
				{ "NVGoggles", "",  1200 },
				{ "hgun_P07_snds_F" },
				{ "30Rnd_9x21_Mag", "",  300 },
				{ "hgun_ACPC2_F","", 1000 },
				{ "9Rnd_45ACP_Mag","", 1000 },
				{ "FirstAidKit", "",  300 },
				{ "ToolKit", "",  300 },
				{ "SMG_02_F", "", 1000 },
				{ "30Rnd_9x21_Mag", "", 300 },
				{ "arifle_MXC_F", "", 1500 },
				{ "arifle_MX_F", "", 2000 },
				{ "30Rnd_65x39_caseless_mag", "", 300 },
				{ "arifle_CTAR_blk_F","", 1500},
				{ "30Rnd_580x42_Mag_F","", 300},
				{ "arifle_ARX_blk_F","", 1500},
				{ "30Rnd_65x39_caseless_green","", 300},
				{ "arifle_SPAR_03_blk_F","", 1500},
				{ "20Rnd_762x51_Mag","", 300}
        };
    };
	
	class cop_captain {
        name = "Oberleutnant Shop";
        side = "cop";
        license = "";
        level = 6;
        msg = "Du bist kein Oberleutnant!";
        items[] = {
				{ "NVGoggles", "",  1200 },
				{ "hgun_P07_snds_F" },
				{ "30Rnd_9x21_Mag", "",  300 },
				{ "hgun_ACPC2_F","", 1000 },
				{ "9Rnd_45ACP_Mag","", 1000 },
				{ "FirstAidKit", "",  300 },
				{ "ToolKit", "",  300 },
				{ "SMG_02_F", "", 1000 },
				{ "30Rnd_9x21_Mag", "", 300 },
				{ "arifle_MXC_F", "", 1500 },
				{ "arifle_MX_F", "", 2000 },
				{ "30Rnd_65x39_caseless_mag", "", 300 },
				{ "arifle_CTAR_blk_F","", 1500},
				{ "30Rnd_580x42_Mag_F","", 300},
				{ "arifle_ARX_blk_F","", 1500},
				{ "30Rnd_65x39_caseless_green","", 300},
				{ "10Rnd_50BW_Mag_F","", 1500},
				{ "arifle_SPAR_03_blk_F","", 1500},
				{ "20Rnd_762x51_Mag","", 300}
        };
    };	
	
	class cop_commander {
        name = "Hauptmann Shop";
        side = "cop";
        license = "";
        level = 7;
        msg = "Du bist kein Hauptmann!";
        items[] = {
				{ "NVGoggles", "",  1200 },
				{ "hgun_P07_snds_F", "", 8500 },
				{ "30Rnd_9x21_Mag", "",  300 },
				{ "hgun_ACPC2_F","", 1000 },
				{ "9Rnd_45ACP_Mag","", 1000 },
				{ "FirstAidKit", "",  300 },
				{ "ToolKit", "",  300 },
				{ "SMG_02_F", "", 1000 },
				{ "30Rnd_9x21_Mag", "", 300 },
				{ "arifle_MXC_F", "", 1500 },
				{ "arifle_MX_F", "", 2000 },
				{ "30Rnd_65x39_caseless_mag", "", 300 },
				{ "srifle_DMR_03_F", "", 5000 },
				{ "20Rnd_762x51_Mag", "", 400 },
				{ "arifle_CTAR_blk_F","", 1500},
				{ "30Rnd_580x42_Mag_F","", 300},
				{ "arifle_ARX_blk_F","", 1500},
				{ "30Rnd_65x39_caseless_green","", 300},
				{ "arifle_SPAR_03_blk_F","", 1500},
				{ "20Rnd_762x51_Mag","", 300}
        };
    };

	class cop_major {
        name = "Stabshauptmann Shop";
        side = "cop";
        license = "";
        level = 8;
        msg = "Du bist kein Stabshauptmann!";
        items[] = {
				{ "NVGoggles", "",  1200 },
				{ "hgun_P07_snds_F" },
				{ "30Rnd_9x21_Mag", "",  300 },
				{ "hgun_ACPC2_F","", 1000 },
				{ "9Rnd_45ACP_Mag","", 1000 },
				{ "FirstAidKit", "",  300 },
				{ "ToolKit", "",  300 },
				{ "SMG_02_F", "", 1000 },
				{ "30Rnd_9x21_Mag", "", 300 },
				{ "arifle_MXC_F", "", 1500 },
				{ "arifle_MX_F", "", 2000 },
				{ "30Rnd_65x39_caseless_mag", "", 300 },
				{ "srifle_DMR_03_F", "", 5000 },
				{ "20Rnd_762x51_Mag", "", 400 },
				{ "arifle_CTAR_blk_F","", 1500},
				{ "30Rnd_580x42_Mag_F","", 300},
				{ "arifle_ARX_blk_F","", 1500},
				{ "30Rnd_65x39_caseless_green","", 300},
				{ "arifle_SPAR_03_blk_F","", 1500},
				{ "20Rnd_762x51_Mag","", 300}
        };
    };	
	
	class cop_colonel {
        name = "Major Shop";
        side = "cop";
        license = "";
        level = 9;
        msg = "Du bist kein Major!";
        items[] = {
				{ "NVGoggles", "",  1200 },
				{ "hgun_P07_snds_F" },
				{ "30Rnd_9x21_Mag", "",  300 },
				{ "hgun_ACPC2_F","", 1000 },
				{ "9Rnd_45ACP_Mag","", 1000 },
				{ "FirstAidKit", "",  300 },
				{ "ToolKit", "",  300 },
				{ "SMG_02_F", "", 1000 },
				{ "30Rnd_9x21_Mag", "", 300 },
				{ "arifle_MXC_F", "", 1500 },
				{ "arifle_MX_F", "", 2000 },
				{ "30Rnd_65x39_caseless_mag", "", 300 },
				{ "srifle_DMR_03_F", "", 5000 },
				{ "20Rnd_762x51_Mag", "", 400 },
				{ "arifle_CTAR_blk_F","", 1500},
				{ "30Rnd_580x42_Mag_F","", 300},
				{ "arifle_ARX_blk_F","", 1500},
				{ "30Rnd_65x39_caseless_green","", 300},
				{ "arifle_SPAR_03_blk_F","", 1500},
				{ "20Rnd_762x51_Mag","", 300},
				{ "LMG_Mk200_F","", 1500},
				{ "200Rnd_65x39_cased_Box","",300}
        };
    };
	
	class cop_ass_chief {
        name = "General";
        side = "cop";
        license = "";
        level = 10;
        msg = "Du bist nicht der Chef!";
        items[] = {
				{ "NVGoggles", "",  1200 },
				{ "hgun_P07_snds_F" },
				{ "30Rnd_9x21_Mag", "",  300 },
				{ "hgun_ACPC2_F","", 1000 },
				{ "9Rnd_45ACP_Mag","", 1000 },
				{ "FirstAidKit", "",  300 },
				{ "ToolKit", "",  300 },
				{ "SMG_02_F", "", 1000 },
				{ "30Rnd_9x21_Mag", "", 300 },
				{ "arifle_MXC_F", "", 1500 },
				{ "arifle_MX_F", "", 2000 },
				{ "30Rnd_65x39_caseless_mag", "", 300 },
				{ "srifle_DMR_03_F", "", 5000 },
				{ "20Rnd_762x51_Mag", "", 400 },
				{ "arifle_CTAR_blk_F","", 1500},
				{ "30Rnd_580x42_Mag_F","", 300},
				{ "arifle_ARX_blk_F","", 1500},
				{ "30Rnd_65x39_caseless_green","", 300},
				{ "arifle_SPAR_03_blk_F","", 1500},
				{ "20Rnd_762x51_Mag","", 300},
				{ "arifle_AK12_F","", 1500},
				{ "30Rnd_762x39_Mag_F","", 300}
        };
    };
	
	class cop_chief {
        name = "GIGN";
        side = "cop";
        license = "";
        level = 11;
        msg = "Du bist kein Mitglied der Spezialeinheit!";
        items[] = {
				{ "NVGoggles", "",  1200 },
				{ "hgun_P07_snds_F" },
				{ "30Rnd_9x21_Mag", "",  300 },
				{ "hgun_ACPC2_F","", 1000 },
				{ "9Rnd_45ACP_Mag","", 1000 },
				{ "FirstAidKit", "",  300 },
				{ "ToolKit", "",  300 },
				{ "SMG_02_F", "", 1000 },
				{ "30Rnd_9x21_Mag", "", 300 },
				{ "arifle_MXC_F", "", 1500 },
				{ "arifle_MX_F", "", 2000 },
				{ "30Rnd_65x39_caseless_mag", "", 300 },
				{ "srifle_DMR_03_F", "", 5000 },
				{ "20Rnd_762x51_Mag", "", 400 },
				{ "arifle_CTAR_blk_F","", 1500},
				{ "30Rnd_580x42_Mag_F","", 300},
				{ "arifle_ARX_blk_F","", 1500},
				{ "30Rnd_65x39_caseless_green","", 300},
				{ "arifle_SPAR_03_blk_F","", 1500},
				{ "20Rnd_762x51_Mag","", 300},
				{ "arifle_AK12_F","", 1500},
				{ "30Rnd_762x39_Mag_F","", 300},
				{ "srifle_DMR_02_F","", 1500},
				{ "10Rnd_338_Mag","", 1500}
        };
    };
    
    class med_basic {
        name = "Rettungshelfer";
        side = "med";
        license = "";
        level = -1;
        items[] = {
            { "ItemGPS", "",  100 },
			{ "Binocular", "",  150 },
			{ "ToolKit", "",  250 },
			{ "FirstAidKit", "",  150 },
			{ "Medikit", "",  500 }
        };
    };

	
	class med_notarzt {
        name = "Sanitäterausrüstung";
        side = "med";
        license = "";
        level = 2;
        items[] = {
            { "ItemGPS", "",  100 },
			{ "Binocular", "",  150 },
			{ "ToolKit", "",  250 },
			{ "FirstAidKit", "",  150 },
			{ "Medikit", "",  500 },
			{ "NVGoggles", "",  1200 }
        };
    };
};
