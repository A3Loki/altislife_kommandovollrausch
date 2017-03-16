class WeaponShops {

    class gun {
        name = "Billy Joe's Feuerwaffen";
        side = "civ";
        license = "gun";
        level = -1;
        msg = "";
        items[] = {
                    // ** Waffen
					{"hgun_P07_F",                  "", 15000},
                    {"hgun_Pistol_heavy_02_F",      "", 20000},
                    {"hgun_ACPC2_F",                "", 17500},
                    {"hgun_PDW2000_F",              "", 30000},

                    // ** Aufsätze
                    {"optic_ACO_grn_smg",           "", 2500},

                    // ** Magazine
                    {"16Rnd_9x21_Mag",              "", 25},
                    {"9Rnd_45ACP_Mag",              "", 45},
                    {"6Rnd_45ACP_Cylinder",         "", 50},
                    {"30Rnd_9x21_Mag",              "", 75}
        };
    };

    class rebel {
        name = "Leichte Waffen";
        side = "civ";
        license = "rebel";
        level = -1;
        msg = "";
        items[] = {
                    // ** Waffen
					{"hgun_Pistol_heavy_01_F",      "", 12000},
                    {"hgun_PDW2000_F",              "", 30000},
                    {"hgun_Pistol_heavy_02_F",      "", 34000},
                    {"SMG_01_F",                    "", 75000},
                    {"arifle_SDAR_F",               "", 150000},
                    {"arifle_TRG20_F",              "", 200000},
                    {"arifle_Katiba_F",             "", 500000},
					{"arifle_AKS_F",                "", 500000},

                    // ** Magazine
                    {"11Rnd_45ACP_Mag",             "", 1000},
                    {"30Rnd_9x21_Mag",              "", 1500},
                    {"6Rnd_45ACP_Cylinder",         "", 2500},
                    {"30Rnd_45ACP_Mag_SMG_01",      "", 3400},
					{"30Rnd_545x39_Mag_F",          "", 3750},
                    {"20Rnd_556x45_UW_mag",         "", 3750},
                    {"30Rnd_556x45_Stanag",         "", 5650},
                    {"30Rnd_65x39_caseless_green",  "", 6250}
        };
    };

    class rebel_heavy {
        name = "Schwere Waffen";
        side = "civ";
        license = "rebel";
        level = -1;
        msg = "";
        items[] = {
					// ** Waffen
					{"srifle_DMR_06_camo_F",        "", 300000},
					{"srifle_DMR_03_F",             "", 300000},
					{"srifle_DMR_03_woodland_F",    "", 300000},
					{"arifle_AKM_F",                "", 300000},
					{"srifle_DMR_01_DMS_BI_F",      "", 500000},
					{"arifle_AK12_F",               "", 500000},
					{"arifle_AK12_GL_F",            "", 800000},
                    {"srifle_LRR_camo_F",           "", 1100000},
                    {"srifle_DMR_05_tan_f",         "", 1650000},

					// ** Magazine
					{"30Rnd_762x39_Mag_f",          "", 7200},
					{"10Rnd_762x54_Mag",            "", 7200},
                    {"20Rnd_762x51_Mag",            "", 7900},
                    {"7Rnd_408_Mag",                "", 8500},
                    {"10Rnd_93x64_DMR_05_Mag",      "", 10000},
					{"1Rnd_SmokeRed_Grenade_shell", "", 500},
                    {"1Rnd_SmokeGreen_Grenade_shell",   "", 500},
                    {"1Rnd_SmokeYellow_Grenade_shell",  "", 500},
                    {"1Rnd_SmokePurple_Grenade_shell",  "", 500},
                    {"1Rnd_SmokeBlue_Grenade_shell",    "", 500},
                    {"1Rnd_SmokeOrange_Grenade_shell",  "", 500}						
        };
    };

	class rebel_attach {
        name = "Aufsätze und Zubehör";
        side = "civ";
        license = "rebel";
        level = -1;
        msg = "";
        items[] = {
                    // ** Aufsätze
                    {"acc_flashlight",              "", 1000},
					{"acc_pointer_IR",              "", 1000},
					{"muzzle_snds_B",               "", 5000},
					{"muzzle_snds_B_khk_F",         "", 5000},
					{"optic_Arco",                  "", 7500},
					{"optic_Arco_ghex_F",           "", 7500},
                    {"optic_Hamr",                  "", 10000},
                    {"optic_Aco",                   "", 2400},
                    {"optic_Holosight",             "", 3400},
                    {"optic_MRCO",                  "", 7500},
                    {"optic_DMS",                   "", 14050},
                    {"optic_AMS_khk",               "", 24000},
                    {"bipod_01_F_snd",              "", 75000},

                    // ** DLC ZUBEHÖR
                    { "bipod_01_F_blk",             "", 15000 },
                    { "bipod_01_F_mtp",             "", 15000 },
                    { "bipod_01_F_snd",             "", 15000 },
                    { "bipod_02_F_blk",             "", 15000 },
                    { "bipod_02_F_hex",             "", 15000 },
                    { "bipod_02_F_tan",             "", 15000 },
                    { "bipod_03_F_blk",             "", 15000 },
                    { "bipod_03_F_oli",             "", 15000 },
                    { "optic_AMS",                  "", 65000 },
                    { "optic_AMS_khk",              "", 65000 },
                    { "optic_AMS_snd",              "", 65000 },
                    { "optic_KHS_blk",              "", 65000 },
                    { "optic_KHS_hex",              "", 65000 },
                    { "optic_KHS_old",              "", 65000 },
                    { "optic_KHS_tan",              "", 65000 }
        };
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        license = "";
        level = -1;
        msg = "";
        items[] = {
                    // ** Waffen
                    {"hgun_P07_F",                  "", 17000},
                    {"hgun_Pistol_heavy_02_F",      "", 22000},
                    {"hgun_ACPC2_F",                "", 19500},
                    {"hgun_PDW2000_F",              "", 32000},

                    // ** Aufsätze
                    {"optic_ACO_grn_smg",           "", 4500},

                    // ** Magazine
                    {"16Rnd_9x21_Mag",              "", 65},
                    {"9Rnd_45ACP_Mag",              "", 85},
                    {"6Rnd_45ACP_Cylinder",         "", 90},
                    {"30Rnd_9x21_Mag",              "", 125}
        };
    };

    class genstore {
        name = "Altis General Store";
        side = "civ";
        license = "";
        level = -1;
        msg = "";
        items[] = {
                    // ** Items
                    {"Binocular",                   "",      150},
                    {"ItemGPS",                     "",      100},
                    {"ItemRadio",                   "Handy", 50},
                    {"ItemMap",                     "",      10},
                    {"ItemCompass",                 "",      10},
                    {"ItemWatch",                   "",      10},
                    {"ToolKit",                     "",      5000},
                    {"FirstAidKit",                 "",      500},
                    {"NVGoggles",                   "",      15000},
                    {"Chemlight_red",               "",      300},
                    {"Chemlight_yellow",            "",      300},
                    {"Chemlight_green",             "",      300},
                    {"Chemlight_blue",              "",      300}
        };
    };

    class civ_donator {
        name = "Donator Shop";
        side = "civ";
        license = "donator";
        level = -1;
        msg = "";
        items[] = {
                    // ** Waffen
                    {"hgun_Pistol_heavy_01_F",      "", 8000},
                    {"hgun_PDW2000_F",              "", 20000},
                    {"hgun_Pistol_heavy_02_F",      "", 30000},
                    {"SMG_01_F",                    "", 64000},
                    {"arifle_SDAR_F",               "", 90000},
                    {"arifle_TRG20_F",              "", 140000},
                    {"arifle_Katiba_F",             "", 325000},
                    {"srifle_DMR_06_camo_F",        "", 275000},
                    {"srifle_DMR_01_DMS_BI_F",      "", 475000},
                    {"srifle_LRR_camo_F",           "", 975000},
                    {"srifle_DMR_05_tan_f",         "", 1250000},

                    // ** Magazine
                    {"11Rnd_45ACP_Mag",             "", 1000},
                    {"30Rnd_9x21_Mag",              "", 1500},
                    {"6Rnd_45ACP_Cylinder",         "", 2500},
                    {"30Rnd_45ACP_Mag_SMG_01",      "", 3400},
                    {"20Rnd_556x45_UW_mag",         "", 3750},
                    {"30Rnd_556x45_Stanag",         "", 5650},
                    {"30Rnd_65x39_caseless_green",  "", 6250},
                    {"10Rnd_762x54_Mag",            "", 7200},
                    {"20Rnd_762x51_Mag",            "", 7900},
                    {"7Rnd_408_Mag",                "", 8500},
                    {"10Rnd_93x64_DMR_05_Mag",      "", 10000},

                    // ** Aufsätze
                    {"optic_Arco",                  "", 7500},
                    {"optic_Hamr",                  "", 10000},
                    {"optic_Aco",                   "", 2400},
                    {"optic_Holosight",             "", 3400},
                    {"optic_MRCO",                  "", 7500},
                    {"optic_DMS",                   "", 14050},
                    {"optic_AMS_khk",               "", 24000},
                    {"bipod_01_F_snd",              "", 75000},

                    // ** DLC ZUBEHÖR
                    { "bipod_01_F_blk",             "", 15000 },
                    { "bipod_01_F_mtp",             "", 15000 },
                    { "bipod_01_F_snd",             "", 15000 },
                    { "bipod_02_F_blk",             "", 15000 },
                    { "bipod_02_F_hex",             "", 15000 },
                    { "bipod_02_F_tan",             "", 15000 },
                    { "bipod_03_F_blk",             "", 15000 },
                    { "bipod_03_F_oli",             "", 15000 },
                    { "optic_AMS",                  "", 65000 },
                    { "optic_AMS_khk",              "", 65000 },
                    { "optic_AMS_snd",              "", 65000 },
                    { "optic_KHS_blk",              "", 65000 },
                    { "optic_KHS_hex",              "", 65000 },
                    { "optic_KHS_old",              "", 65000 },
                    { "optic_KHS_tan",              "", 65000 }


        };
    };

    class cop_attach {
        name = "Sonstiges";
        side = "cop";
        license = "";
        level = -1;
        msg = "";
        items[] = {
                    // ** Items
                    {"ItemMap",                     "",      10},
                    {"ItemWatch",                   "",      10},
                    {"ItemCompass",                 "",      10},
                    {"ItemGPS",                     "",      10},
                    {"ItemRadio",                   "Handy", 10},
                    {"ToolKit",                     "",      1000},
                    {"FirstAidKit",                 "",      200},
                    {"NVGoggles_OPFOR",             "",      5000},
                    {"acc_flashlight",              "",      100},
                    {"acc_pointer_IR",              "",      100},

                    // ** Throwable
                    {"Chemlight_red",               "",      10},
                    {"Chemlight_yellow",            "",      10},
                    {"Chemlight_green",             "",      10},
                    {"Chemlight_blue",              "",      10},
                    {"SmokeShellGreen",             "",      500},
                    {"SmokeShellRed",               "",      500}
        };
    };

    class cop_recruit {
        name = "Altis Rekrut Shop";
        side = "cop";
        license = "";
        level = -1;
        msg = "";
        items[] = {
                    // ** Waffen
                    {"SMG_05_F",                    "Protector 9mm",            10000},
                    {"hgun_Rook40_snds_F",          "Taser-Pistole Silenced",   1000},

                    // ** Magazine
                    {"16Rnd_9x21_Mag",              "16er Magazin",             100},
                    {"30Rnd_9x21_Mag_SMG_02",       "Protector Magazin x30",    1500},


                    // ** Aufsätze
                    {"optic_Aco",                   "ACO",                      2400},
                    {"optic_Holosight",             "Holovisier",               3200},
                    {"acc_flashlight",              "Lampe",                    100},
                    {"muzzle_snds_L",               "9mm Schalldämpfer",        1000},


                    // ** Items
                    {"Rangefinder",                 "Entfernungsmesser",        10000}
        };
    };
    class cop_officer {
        name = "Wachtmeister Shop";
        side = "cop";
        license = "";
        level = 2;
        msg = "Du bist kein Wachtmeister!";
        items[] = {
                    // ** Waffen
                    {"SMG_05_F",                    "Protector 9mm",            10000},
                    {"hgun_Rook40_snds_F",          "Taser-Pistole Silenced",   1000},
                    {"arifle_SPAR_01_blk_F",        "SPAR-16",                  30000},


                    // ** Magazine
                    {"16Rnd_9x21_Mag",              "16er Magazin",             100},
                    {"30Rnd_9x21_Mag_SMG_02",       "Protector Magazin x30",    1500},
                    {"30Rnd_556x45_Stanag",         "5.56mm Magazin",           1000},


                    // ** Aufsätze
                    {"optic_Aco",                   "ACO",                      2400},
                    {"optic_Holosight",             "Holovisier",               3200},
                    {"optic_Hamr",                  "RCO",                      4500},
                    {"optic_Arco",                  "ARCO",                     7500},
                    {"optic_MRCO",                  "MRCO",                     10000},
                    {"acc_flashlight",              "Lampe",                    100},
                    {"muzzle_snds_L",               "9mm Schalldämpfer",        1000},
                    {"muzzle_snds_M",               "5.56mm Schalldämpfer",     2000},

                    // ** Items
                    {"Rangefinder",                 "Entfernungsmesser",        35000}
        };
    };
    class cop_detective {
        name = "Oberwachtmeister Shop";
        side = "cop";
        license = "";
        level = 3;
        msg = "Du bist kein Oberwachtmeister!";
        items[] = {
                    // ** Waffen
                    {"SMG_05_F",                    "Protector 9mm",            10000},
                    {"hgun_Rook40_snds_F",          "Taser-Pistole Silenced",   1000},
                    {"arifle_SPAR_01_blk_F",        "SPAR-16",                  30000},
                    {"arifle_SPAR_01_GL_blk_F",     "SPAR-16 GL",               35000},

                    // ** Magazine
                    {"16Rnd_9x21_Mag",              "16er Magazin",             100},
                    {"30Rnd_9x21_Mag_SMG_02",       "Protector Magazin x30",    1500},
                    {"30Rnd_556x45_Stanag",         "5.56mm Magazin",           1000},
                    {"1Rnd_Smoke_Grenade_shell",         "",                    1000},


                    // ** Aufsätze
                    {"optic_Aco",                   "ACO",                      2400},
                    {"optic_Holosight",             "Holovisier",               3200},
                    {"optic_Hamr",                  "RCO",                      4500},
                    {"optic_Arco",                  "ARCO",                     7500},
                    {"optic_MRCO",                  "MRCO",                     10000},
                    {"optic_AMS",                   "AMS",                      5000},
                    {"acc_flashlight",              "Lampe",                    100},
                    {"muzzle_snds_L",               "9mm Schalldämpfer",        1000},
                    {"muzzle_snds_M",               "5.56mm Schalldämpfer",     2000},

                    // ** Items
                    {"Rangefinder",                 "Entfernungsmesser",        10000}

        };
    };

	class cop_sergeant {
        name = "Hauptwachtmeister Shop";
        side = "cop";
        license = "";
        level = 4;
        msg = "Du bist kein Hauptwachtmeister!";
        items[] = {
                    // ** Waffen
                    {"SMG_05_F",                    "Protector 9mm",            10000},
                    {"hgun_Rook40_snds_F",          "Taser-Pistole Silenced",   1000},
                    {"arifle_SPAR_01_blk_F",        "SPAR-16",                  30000},
                    {"arifle_SPAR_01_GL_blk_F",     "SPAR-16 GL",               35000},
                    {"arifle_SPAR_03_blk_F",        "SPAR-17",                  50000},

                    // ** Magazine
                    {"16Rnd_9x21_Mag",              "16er Magazin",             100},
                    {"30Rnd_9x21_Mag_SMG_02",       "Protector Magazin x30",    1500},
                    {"30Rnd_65x39_caseless_green",  "6.5mm Magazin",            2500},
                    {"20Rnd_762x51_Mag",            "7.62mm x20 Magazin",       3400},
                    {"30Rnd_556x45_Stanag",         "5.56mm Magazin",           1000},
                    {"1Rnd_Smoke_Grenade_shell",         "",                    1000},

                    // ** Aufsätze
                    {"optic_Aco",                   "ACO",                      2400},
                    {"optic_Holosight",             "Holovisier",               3200},
                    {"optic_Hamr",                  "RCO",                      4500},
                    {"optic_Arco",                  "ARCO",                     7500},
                    {"optic_MRCO",                  "MRCO",                     10000},
                    {"optic_DMS",                   "DMS",                      14500},
                    {"acc_flashlight",              "Lampe",                    100},
                    {"muzzle_snds_L",               "9mm Schalldämpfer",        1000},
                    {"muzzle_snds_M",               "5.56mm Schalldämpfer",     2000},
                    {"muzzle_snds_B",               "7.62mm Schalldämpfer",     3000},

                    // ** Items
                    {"Rangefinder",                 "Entfernungsmesser",        10000}
        };
    };

	class cop_master_sergeant {
        name = "Leutnant Shop";
        side = "cop";
        license = "";
        level = 5;
        msg = "Du bist kein Leutnant!";
        items[] = {
                    // ** Waffen
                    {"SMG_05_F",                    "Protector 9mm",            10000},
                    {"hgun_Rook40_snds_F",          "Taser-Pistole Silenced",   1000},
                    {"arifle_SPAR_01_blk_F",        "SPAR-16",                  30000},
                    {"arifle_SPAR_01_GL_blk_F",     "SPAR-16 GL",               35000},
                    {"arifle_SPAR_03_blk_F",        "SPAR-17",                  50000},
                    {"arifle_ARX_blk_F",            "",                         50000},

                    // ** Magazine
                    {"16Rnd_9x21_Mag",              "16er Magazin",             100},
                    {"30Rnd_9x21_Mag_SMG_02",       "Protector Magazin x30",    1500},
                    {"30Rnd_65x39_caseless_green",  "6.5mm Magazin",            2500},
                    {"20Rnd_762x51_Mag",            "7.62mm x20 Magazin",       3400},
                    {"30Rnd_556x45_Stanag",         "5.56mm Magazin",           1000},
                    {"30Rnd_65x39_caseless_green",  "6.5mm Magazin",            2500},
                    {"10Rnd_338_Mag",               ".338 10Rnd",               5000},
                    {"1Rnd_Smoke_Grenade_shell",         "",                    1000},

                    // ** Aufsätze
                    {"optic_Aco",                   "ACO",                      2400},
                    {"optic_Holosight",             "Holovisier",               3200},
                    {"optic_Hamr",                  "RCO",                      4500},
                    {"optic_Arco",                  "ARCO",                     7500},
                    {"optic_MRCO",                  "MRCO",                     10000},
                    {"optic_DMS",                   "DMS",                      14500},
                    {"optic_KHS_blk",               "Kahlia",                   14500},
                    {"acc_flashlight",              "Lampe",                    100},
                    {"bipod_03_F_blk",              "Zweibein",                 1000},
                    {"muzzle_snds_L",               "9mm Schalldämpfer",        1000},
                    {"muzzle_snds_M",               "5.56mm Schalldämpfer",     2000},
                    {"muzzle_snds_B",               "7.62mm Schalldämpfer",     3000},

                    // ** Items
                    {"Rangefinder",                 "Entfernungsmesser",        10000}
        };
    };

	class cop_captain {
        name = "Oberleutnant Shop";
        side = "cop";
        license = "";
        level = 6;
        msg = "Du bist kein Oberleutnant!";
        items[] = {
                    // ** Waffen
                    {"SMG_05_F",                    "Protector 9mm",            10000},
                    {"hgun_Rook40_snds_F",          "Taser-Pistole Silenced",   1000},
                    {"arifle_SPAR_01_blk_F",        "SPAR-16",                  30000},
                    {"arifle_SPAR_01_GL_blk_F",     "SPAR-16 GL",               35000},
                    {"arifle_SPAR_03_blk_F",        "SPAR-17",                  50000},
                    {"arifle_ARX_blk_F",            "",                         50000},
                    {"srifle_DMR_02_F",             "",                         50000},

                    // ** Magazine
                    {"16Rnd_9x21_Mag",              "16er Magazin",             100},
                    {"30Rnd_9x21_Mag_SMG_02",       "Protector Magazin x30",    1500},
                    {"30Rnd_65x39_caseless_green",  "6.5mm Magazin",            2500},
                    {"20Rnd_762x51_Mag",            "7.62mm x20 Magazin",       3400},
                    {"30Rnd_556x45_Stanag",         "5.56mm Magazin",           1000},
                    {"30Rnd_65x39_caseless_green",  "6.5mm Magazin",            2500},
                    {"10Rnd_50BW_Mag_F",            ".50 BW",                   5000},
                    {"10Rnd_338_Mag",               ".338 10Rnd",               5000},
                    {"1Rnd_Smoke_Grenade_shell",         "",                    1000},

                    // ** Aufsätze
                    {"optic_Aco",                   "ACO",                      2400},
                    {"optic_Holosight",             "Holovisier",               3200},
                    {"optic_Hamr",                  "RCO",                      4500},
                    {"optic_Arco",                  "ARCO",                     7500},
                    {"optic_MRCO",                  "MRCO",                     10000},
                    {"optic_DMS",                   "DMS",                      14500},
                    {"optic_KHS_blk",               "Kahlia",                   14500},
                    {"optic_AMS",                   "AMS",                      5000},
                    {"acc_flashlight",              "Lampe",                    100},
                    {"bipod_03_F_blk",              "Zweibein",                 1000},
                    {"muzzle_snds_L",               "9mm Schalldämpfer",        1000},
                    {"muzzle_snds_M",               "5.56mm Schalldämpfer",     2000},
                    {"muzzle_snds_B",               "7.62mm Schalldämpfer",     3000},
                    {"muzzle_snds_338_black",       ".338 Schalldämpfer",       4000},

                    // ** Items
                    {"Rangefinder",                 "Entfernungsmesser",        10000}
        };
    };

	class cop_commander {
        name = "Hauptmann Shop";
        side = "cop";
        license = "";
        level = 7;
        msg = "Du bist kein Hauptmann!";
        items[] = {
                    // ** Waffen
                    {"SMG_05_F",                    "Protector 9mm",            10000},
                    {"hgun_Rook40_snds_F",          "Taser-Pistole Silenced",   1000},
                    {"arifle_SPAR_01_blk_F",        "SPAR-16",                  30000},
                    {"arifle_SPAR_01_GL_blk_F",     "SPAR-16 GL",               35000},
                    {"arifle_SPAR_03_blk_F",        "SPAR-17",                  50000},
                    {"arifle_ARX_blk_F",            "",                         50000},
                    {"srifle_DMR_02_F",             "",                         50000},

                    // ** Magazine
                    {"16Rnd_9x21_Mag",              "16er Magazin",             100},
                    {"30Rnd_9x21_Mag_SMG_02",       "Protector Magazin x30",    1500},
                    {"30Rnd_65x39_caseless_green",  "6.5mm Magazin",            2500},
                    {"20Rnd_762x51_Mag",            "7.62mm x20 Magazin",       3400},
                    {"30Rnd_556x45_Stanag",         "5.56mm Magazin",           1000},
                    {"30Rnd_65x39_caseless_green",  "6.5mm Magazin",            2500},
                    {"10Rnd_50BW_Mag_F",            ".50 BW",                   5000},
                    {"10Rnd_338_Mag",               ".338 10Rnd",               5000},
                    {"1Rnd_Smoke_Grenade_shell",         "",                    1000},

                    // ** Aufsätze
                    {"optic_Aco",                   "ACO",                      2400},
                    {"optic_Holosight",             "Holovisier",               3200},
                    {"optic_Hamr",                  "RCO",                      4500},
                    {"optic_Arco",                  "ARCO",                     7500},
                    {"optic_MRCO",                  "MRCO",                     10000},
                    {"optic_DMS",                   "DMS",                      14500},
                    {"optic_KHS_blk",               "Kahlia",                   14500},
                    {"optic_AMS",                   "AMS",                      5000},
                    {"acc_flashlight",              "Lampe",                    100},
                    {"bipod_03_F_blk",              "Zweibein",                 1000},
                    {"muzzle_snds_L",               "9mm Schalldämpfer",        1000},
                    {"muzzle_snds_M",               "5.56mm Schalldämpfer",     2000},
                    {"muzzle_snds_B",               "7.62mm Schalldämpfer",     3000},
                    {"muzzle_snds_338_black",       ".338 Schalldämpfer",       4000},

                    // ** Items
                    {"Rangefinder",                 "Entfernungsmesser",        10000}
        };
    };

	class cop_major {
        name = "Stabshauptmann Shop";
        side = "cop";
        license = "";
        level = 8;
        msg = "Du bist kein Stabshauptmann!";
        items[] = {
                     // ** Waffen
                    {"SMG_05_F",                    "Protector 9mm",            10000},
                    {"hgun_Rook40_snds_F",          "Taser-Pistole Silenced",   1000},
                    {"arifle_SPAR_01_blk_F",        "SPAR-16",                  30000},
                    {"arifle_SPAR_01_GL_blk_F",     "SPAR-16 GL",               35000},
                    {"arifle_SPAR_03_blk_F",        "SPAR-17",                  50000},
                    {"arifle_ARX_blk_F",            "",                         50000},
                    {"srifle_DMR_02_F",             "",                         50000},

                    // ** Magazine
                    {"16Rnd_9x21_Mag",              "16er Magazin",             100},
                    {"30Rnd_9x21_Mag_SMG_02",       "Protector Magazin x30",    1500},
                    {"30Rnd_65x39_caseless_green",  "6.5mm Magazin",            2500},
                    {"20Rnd_762x51_Mag",            "7.62mm x20 Magazin",       3400},
                    {"30Rnd_556x45_Stanag",         "5.56mm Magazin",           1000},
                    {"30Rnd_65x39_caseless_green",  "6.5mm Magazin",            2500},
                    {"10Rnd_50BW_Mag_F",            ".50 BW",                   5000},
                    {"10Rnd_338_Mag",               ".338 10Rnd",               5000},
                    {"1Rnd_Smoke_Grenade_shell",         "",                    1000},

                    // ** Aufsätze
                    {"optic_Aco",                   "ACO",                      2400},
                    {"optic_Holosight",             "Holovisier",               3200},
                    {"optic_Hamr",                  "RCO",                      4500},
                    {"optic_Arco",                  "ARCO",                     7500},
                    {"optic_MRCO",                  "MRCO",                     10000},
                    {"optic_DMS",                   "DMS",                      14500},
                    {"optic_KHS_blk",               "Kahlia",                   14500},
                    {"optic_AMS",                   "AMS",                      5000},
                    {"acc_flashlight",              "Lampe",                    100},
                    {"bipod_03_F_blk",              "Zweibein",                 1000},
                    {"muzzle_snds_L",               "9mm Schalldämpfer",        1000},
                    {"muzzle_snds_M",               "5.56mm Schalldämpfer",     2000},
                    {"muzzle_snds_B",               "7.62mm Schalldämpfer",     3000},
                    {"muzzle_snds_338_black",       ".338 Schalldämpfer",       4000},

                    // ** Items
                    {"Rangefinder",                 "Entfernungsmesser",        10000}
        };
    };

	class cop_colonel {
        name = "Major Shop";
        side = "cop";
        license = "";
        level = 9;
        msg = "Du bist kein Major!";
        items[] = {
                    // ** Waffen
                    {"SMG_05_F",                    "Protector 9mm",            10000},
                    {"hgun_Rook40_snds_F",          "Taser-Pistole Silenced",   1000},
                    {"arifle_SPAR_01_blk_F",        "SPAR-16",                  30000},
                    {"arifle_SPAR_01_GL_blk_F",     "SPAR-16 GL",               35000},
                    {"arifle_SPAR_03_blk_F",        "SPAR-17",                  50000},
                    {"arifle_ARX_blk_F",            "",                         50000},
                    {"srifle_DMR_02_F",             "",                         50000},

                    // ** Magazine
                    {"16Rnd_9x21_Mag",              "16er Magazin",             100},
                    {"30Rnd_9x21_Mag_SMG_02",       "Protector Magazin x30",    1500},
                    {"30Rnd_65x39_caseless_green",  "6.5mm Magazin",            2500},
                    {"20Rnd_762x51_Mag",            "7.62mm x20 Magazin",       3400},
                    {"30Rnd_556x45_Stanag",         "5.56mm Magazin",           1000},
                    {"30Rnd_65x39_caseless_green",  "6.5mm Magazin",            2500},
                    {"10Rnd_50BW_Mag_F",            ".50 BW",                   5000},
                    {"10Rnd_338_Mag",               ".338 10Rnd",               5000},
                    {"1Rnd_Smoke_Grenade_shell",         "",                    1000},

                    // ** Aufsätze
                    {"optic_Aco",                   "ACO",                      2400},
                    {"optic_Holosight",             "Holovisier",               3200},
                    {"optic_Hamr",                  "RCO",                      4500},
                    {"optic_Arco",                  "ARCO",                     7500},
                    {"optic_MRCO",                  "MRCO",                     10000},
                    {"optic_DMS",                   "DMS",                      14500},
                    {"optic_KHS_blk",               "Kahlia",                   14500},
                    {"optic_AMS",                   "AMS",                      5000},
                    {"acc_flashlight",              "Lampe",                    100},
                    {"bipod_03_F_blk",              "Zweibein",                 1000},
                    {"muzzle_snds_L",               "9mm Schalldämpfer",        1000},
                    {"muzzle_snds_M",               "5.56mm Schalldämpfer",     2000},
                    {"muzzle_snds_B",               "7.62mm Schalldämpfer",     3000},
                    {"muzzle_snds_338_black",       ".338 Schalldämpfer",       4000},

                    // ** Items
                    {"Rangefinder",                 "Entfernungsmesser",        10000}
        };
    };

	class cop_ass_chief {
        name = "General";
        side = "cop";
        license = "";
        level = 10;
        msg = "Du bist nicht der Chef!";
        items[] = {
                    // ** Waffen
                    {"SMG_05_F",                    "Protector 9mm",            10000},
                    {"hgun_Rook40_snds_F",          "Taser-Pistole Silenced",   1000},
                    {"arifle_SPAR_01_blk_F",        "SPAR-16",                  30000},
                    {"arifle_SPAR_01_GL_blk_F",     "SPAR-16 GL",               35000},
                    {"arifle_SPAR_03_blk_F",        "SPAR-17",                  50000},
                    {"arifle_ARX_blk_F",            "",                         50000},
                    {"srifle_DMR_02_F",             "",                         50000},

                    // ** Magazine
                    {"16Rnd_9x21_Mag",              "16er Magazin",             100},
                    {"30Rnd_9x21_Mag_SMG_02",       "Protector Magazin x30",    1500},
                    {"30Rnd_65x39_caseless_green",  "6.5mm Magazin",            2500},
                    {"20Rnd_762x51_Mag",            "7.62mm x20 Magazin",       3400},
                    {"30Rnd_556x45_Stanag",         "5.56mm Magazin",           1000},
                    {"30Rnd_65x39_caseless_green",  "6.5mm Magazin",            2500},
                    {"10Rnd_50BW_Mag_F",            ".50 BW",                   5000},
                    {"10Rnd_338_Mag",               ".338 10Rnd",               5000},
                    {"1Rnd_Smoke_Grenade_shell",         "",                    1000},

                    // ** Aufsätze
                    {"optic_Aco",                   "ACO",                      2400},
                    {"optic_Holosight",             "Holovisier",               3200},
                    {"optic_Hamr",                  "RCO",                      4500},
                    {"optic_Arco",                  "ARCO",                     7500},
                    {"optic_MRCO",                  "MRCO",                     10000},
                    {"optic_DMS",                   "DMS",                      14500},
                    {"optic_KHS_blk",               "Kahlia",                   14500},
                    {"optic_AMS",                   "AMS",                      5000},
                    {"acc_flashlight",              "Lampe",                    100},
                    {"bipod_03_F_blk",              "Zweibein",                 1000},
                    {"muzzle_snds_L",               "9mm Schalldämpfer",        1000},
                    {"muzzle_snds_M",               "5.56mm Schalldämpfer",     2000},
                    {"muzzle_snds_B",               "7.62mm Schalldämpfer",     3000},
                    {"muzzle_snds_338_black",       ".338 Schalldämpfer",       4000},

                    // ** Items
                    {"Rangefinder",                 "Entfernungsmesser",        10000}
        };
    };

	class cop_chief {
        name = "GIGN";
        side = "cop";
        license = "";
        level = 11;
        msg = "Du bist kein Mitglied der Spezialeinheit!";
        items[] = {
                    // ** Waffen
                    {"SMG_05_F",                    "Protector 9mm",            10000},
                    {"hgun_Rook40_snds_F",          "Taser-Pistole Silenced",   1000},
                    {"arifle_SPAR_01_blk_F",        "SPAR-16",                  30000},
                    {"arifle_SPAR_01_GL_blk_F",     "SPAR-16 GL",               35000},
                    {"arifle_SPAR_03_blk_F",        "SPAR-17",                  50000},
                    {"arifle_ARX_blk_F",            "",                         50000},
                    {"srifle_DMR_02_F",             "",                         50000},

                    // ** Magazine
                    {"16Rnd_9x21_Mag",              "16er Magazin",             100},
                    {"30Rnd_9x21_Mag_SMG_02",       "Protector Magazin x30",    1500},
                    {"30Rnd_65x39_caseless_green",  "6.5mm Magazin",            2500},
                    {"20Rnd_762x51_Mag",            "7.62mm x20 Magazin",       3400},
                    {"30Rnd_556x45_Stanag",         "5.56mm Magazin",           1000},
                    {"30Rnd_65x39_caseless_green",  "6.5mm Magazin",            2500},
                    {"10Rnd_50BW_Mag_F",            ".50 BW",                   5000},
                    {"10Rnd_338_Mag",               ".338 10Rnd",               5000},
                    {"1Rnd_Smoke_Grenade_shell",         "",                    1000},

                    // ** Aufsätze
                    {"optic_Aco",                   "ACO",                      2400},
                    {"optic_Holosight",             "Holovisier",               3200},
                    {"optic_Hamr",                  "RCO",                      4500},
                    {"optic_Arco",                  "ARCO",                     7500},
                    {"optic_MRCO",                  "MRCO",                     10000},
                    {"optic_DMS",                   "DMS",                      14500},
                    {"optic_KHS_blk",               "Kahlia",                   14500},
                    {"optic_AMS",                   "AMS",                      5000},
                    {"acc_flashlight",              "Lampe",                    100},
                    {"bipod_03_F_blk",              "Zweibein",                 1000},
                    {"muzzle_snds_L",               "9mm Schalldämpfer",        1000},
                    {"muzzle_snds_M",               "5.56mm Schalldämpfer",     2000},
                    {"muzzle_snds_B",               "7.62mm Schalldämpfer",     3000},
                    {"muzzle_snds_338_black",       ".338 Schalldämpfer",       4000},

                    // ** Items
                    {"Rangefinder",                 "Entfernungsmesser",        10000}
        };
    };

    class med_basic {
        name = "Rettungshelfer";
        side = "med";
        license = "";
        level = -1;
        items[] = {
                    {"ItemGPS",                     "", 10},
                    {"Binocular",                   "", 10},
                    {"ToolKit",                     "", 10},
                    {"FirstAidKit",                 "", 100},
                    {"Medikit",                     "", 100},
                    {"NVGoggles",                   "", 5000},
                    {"Chemlight_red",               "", 20},
                    {"Chemlight_yellow",            "", 20},
                    {"Chemlight_green",             "", 20},
                    {"Chemlight_blue",              "", 20}
        };
    };


	class med_notarzt {
        name = "Sanitäterausrüstung";
        side = "med";
        license = "";
        level = 2;
        items[] = {
                    {"ItemGPS",                     "", 10},
                    {"Binocular",                   "", 10},
                    {"ToolKit",                     "", 10},
                    {"FirstAidKit",                 "", 100},
                    {"Medikit",                     "", 100},
                    {"NVGoggles",                   "", 5000},
                    {"Chemlight_red",               "", 20},
                    {"Chemlight_yellow",            "", 20},
                    {"Chemlight_green",             "", 20},
                    {"Chemlight_blue",              "", 20}
        };
    };
};
