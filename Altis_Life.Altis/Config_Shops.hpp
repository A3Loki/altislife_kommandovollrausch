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
                    {"hgun_PDW2000_F",              "", 24000},
                    {"hgun_Pistol_heavy_02_F",      "", 34000},
                    {"SMG_01_F",                    "", 68000},
                    {"arifle_SDAR_F",               "", 100000},
                    {"arifle_TRG20_F",              "", 150000},
                    {"arifle_Katiba_F",             "", 375000},

                    // ** Magazine
                    {"11Rnd_45ACP_Mag",             "", 1000},
                    {"30Rnd_9x21_Mag",              "", 1500},
                    {"6Rnd_45ACP_Cylinder",         "", 2500},
                    {"30Rnd_45ACP_Mag_SMG_01",      "", 3400},
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
					{"srifle_DMR_01_DMS_BI_F",      "", 500000},
                    {"srifle_LRR_camo_F",           "", 1100000},
                    {"srifle_DMR_05_tan_f",         "", 1650000},

					// ** Magazine
					{"10Rnd_762x54_Mag",            "", 7200},
                    {"20Rnd_762x51_Mag",            "", 7900},
                    {"7Rnd_408_Mag",                "", 8500},
                    {"10Rnd_93x64_DMR_05_Mag",      "", 10000}
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
                    {"ItemRadio",                   "Handy", 10},
                    {"ItemMap",                     "",      50},
                    {"ItemCompass",                 "",      50},
                    {"ItemWatch",                   "",      50},
                    {"ToolKit",                     "",      250},
                    {"FirstAidKit",                 "",      150},
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
                    {"ItemGPS",                     "", 10},
                    {"Binocular",                   "", 10},
                    {"ToolKit",                     "", 10},
                    {"FirstAidKit",                 "", 10},
                    {"Medikit",                     "", 10},
                    {"NVGoggles",                   "", 10},
                    {"Chemlight_red",               "", 20},
                    {"Chemlight_yellow",            "", 20},
                    {"Chemlight_green",             "", 20},
                    {"Chemlight_blue",              "", 20}
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
                    {"ToolKit",                     "",      10},
                    {"FirstAidKit",                 "",      150},
                    {"NVGoggles_OPFOR",             "",      10},
                    {"acc_flashlight",              "",      10},
                    {"acc_pointer_IR",              "",      10},

                    // ** Throwable
                    {"Chemlight_red",               "",      10},
                    {"Chemlight_yellow",            "",      10},
                    {"Chemlight_green",             "",      10},
                    {"Chemlight_blue",              "",      10},
                    {"SmokeShellGreen",             "",      15000},
                    {"SmokeShellRed",               "",      15000}
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
                    {"arifle_sdar_F",               "Taser Sturmgewehr",        25000},
                    {"hgun_Rook40_snds_F",          "Taser-Pistole Silenced",   10000},

                    // ** Magazine
                    {"16Rnd_9x21_Mag",              "16er Magazin",             100},
                    {"20Rnd_556x45_UW_mag",         "556er Magazin",            1000}
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
                    {"arifle_sdar_F",               "Taser Sturmgewehr",        25000},
                    {"hgun_Rook40_snds_F",          "Taser-Pistole Silenced",   10000},
                    {"SMG_02_F",                    "Sting 9mm",                30000},
                    {"arifle_MXC_F",                "MX-Carabine",              50000},

                    // ** Magazine
                    {"16Rnd_9x21_Mag",              "16er Magazin",             100},
                    {"30Rnd_9x21_Mag",              "9mm x30 Magazin",          1500},
                    {"30Rnd_65x39_caseless_mag",    "6.5mm Magazin",            2500},
                    {"20Rnd_556x45_UW_mag",         "556er Magazin",            1000},

                    // ** Aufsätze
                    {"optic_Aco",                   "ACO",                      2400},
                    {"optic_Holosight",             "Holovisier",               3200},
                    {"optic_Hamr",                  "RCO",                      4500}
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
                    {"arifle_sdar_F",               "Taser Sturmgewehr",        25000},
                    {"hgun_Rook40_snds_F",          "Taser-Pistole Silenced",   10000},
                    {"SMG_02_F",                    "Sting 9mm",                30000},
                    {"arifle_MXC_F",                "MX-Carabine",              50000},
                    {"arifle_MX_F",                 "MX Sturmgewehr",           60000},
                    {"arifle_MXM_F",                "MXM DMR",                  65000},
                    {"srifle_EBR_F",                "MK18 EMR",                 100000},

                    // ** Magazine
                    {"16Rnd_9x21_Mag",              "16er Magazin",             100},
                    {"30Rnd_9x21_Mag",              "9mm x30 Magazin",          1500},
                    {"30Rnd_65x39_caseless_mag",    "6.5mm Magazin",            2500},
                    {"20Rnd_762x51_Mag",            "7.62mm x20 Magazin",       3400},
                    {"20Rnd_556x45_UW_mag",         "556er Magazin",            1000},

                    // ** Aufsätze
                    {"optic_Aco",                   "ACO",                      2400},
                    {"optic_Holosight",             "Holovisier",               3200},
                    {"optic_Hamr",                  "RCO",                      4500},
                    {"optic_Arco",                  "ARCO",                     7500},
                    {"optic_NVS",                   "NVS",                      11500},
                    {"optic_DMS",                   "DMS",                      14500},
                    {"muzzle_snds_L",               "9mm Schalldämpfer",        5000},
                    {"muzzle_snds_H",               "6.5mm Schalldämpfer",      20000},

                    // ** Items
                    {"Rangefinder",                 "Entfernungsmesser",        35000}

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
                    {"arifle_sdar_F",               "Taser Sturmgewehr",        25000},
                    {"hgun_Rook40_snds_F",          "Taser-Pistole Silenced",   10000},
                    {"SMG_02_F",                    "Sting 9mm",                30000},
                    {"arifle_MXC_F",                "MX-Carabine",              50000},
                    {"arifle_MX_F",                 "MX Sturmgewehr",           60000},
                    {"arifle_MXM_F",                "MXM DMR",                  65000},
                    {"srifle_EBR_F",                "MK18 EMR",                 100000},

                    // ** Magazine
                    {"16Rnd_9x21_Mag",              "16er Magazin",             100},
                    {"30Rnd_9x21_Mag",              "9mm x30 Magazin",          1500},
                    {"30Rnd_65x39_caseless_mag",    "6.5mm Magazin",            2500},
                    {"20Rnd_762x51_Mag",            "7.62mm x20 Magazin",       3400},
                    {"20Rnd_556x45_UW_mag",         "556er Magazin",            1000},

                    // ** Aufsätze
                    {"optic_Aco",                   "ACO",                      2400},
                    {"optic_Holosight",             "Holovisier",               3200},
                    {"optic_Hamr",                  "RCO",                      4500},
                    {"optic_Arco",                  "ARCO",                     7500},
                    {"optic_NVS",                   "NVS",                      11500},
                    {"optic_DMS",                   "DMS",                      14500},
                    {"optic_AMS",                   "AMS",                      25000},
                    {"bipod_03_F_blk",              "Zweibein",                 50000},
                    {"muzzle_snds_L",               "9mm Schalldämpfer",        5000},
                    {"muzzle_snds_H",               "6.5mm Schalldämpfer",      20000},

                    // ** Items
                    {"B_UavTerminal",               "UAV Terminal",             5000},
                    {"Rangefinder",                 "Entfernungsmesser",        35000}
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
                    {"arifle_sdar_F",               "Taser Sturmgewehr",        25000},
                    {"hgun_Rook40_snds_F",          "Taser-Pistole Silenced",   10000},
                    {"SMG_02_F",                    "Sting 9mm",                30000},
                    {"arifle_MXC_F",                "MX-Carabine",              50000},
                    {"arifle_MX_F",                 "MX Sturmgewehr",           60000},
                    {"arifle_MXM_F",                "MXM DMR",                  65000},
                    {"srifle_EBR_F",                "MK18 EMR",                 100000},
                    {"srifle_DMR_02_camo_F",        "MAR-10 .338",              450000},

                    // ** Magazine
                    {"16Rnd_9x21_Mag",              "16er Magazin",             100},
                    {"30Rnd_9x21_Mag",              "9mm x30 Magazin",          1500},
                    {"30Rnd_65x39_caseless_mag",    "6.5mm Magazin",            2500},
                    {"20Rnd_762x51_Mag",            "7.62mm x20 Magazin",       3400},
                    {"20Rnd_556x45_UW_mag",         "556er Magazin",            1000},
                    {"10Rnd_338_Mag",               ".338 x10 Magazin",         5000},

                    // ** Aufsätze
                    {"optic_Aco",                   "ACO",                      2400},
                    {"optic_Holosight",             "Holovisier",               3200},
                    {"optic_Hamr",                  "RCO",                      4500},
                    {"optic_Arco",                  "ARCO",                     7500},
                    {"optic_MRCO",                  "MRCO",                     10000},
                    {"optic_NVS",                   "NVS",                      11500},
                    {"optic_DMS",                   "DMS",                      14500},
                    {"optic_AMS",                   "AMS",                      25000},
                    {"bipod_03_F_blk",              "Zweibein",                 50000},
                    {"muzzle_snds_L",               "9mm Schalldämpfer",        5000},
                    {"muzzle_snds_H",               "6.5mm Schalldämpfer",      20000},
                    {"muzzle_snds_338_black",       "MAR-10 Schalldämpfer",     50000},

                    // ** Items
                    {"B_UavTerminal",               "UAV Terminal",             5000},
                    {"Rangefinder",                 "Entfernungsmesser",        35000}
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
                    {"arifle_sdar_F",               "Taser Sturmgewehr",        25000},
                    {"hgun_Rook40_snds_F",          "Taser-Pistole Silenced",   10000},
                    {"SMG_02_F",                    "Sting 9mm",                30000},
                    {"arifle_MXC_F",                "MX-Carabine",              50000},
                    {"arifle_MX_F",                 "MX Sturmgewehr",           60000},
                    {"arifle_MXM_F",                "MXM DMR",                  65000},
                    {"srifle_EBR_F",                "MK18 EMR",                 100000},
                    {"srifle_DMR_02_camo_F",        "MAR-10 .338",              450000},

                    // ** Magazine
                    {"16Rnd_9x21_Mag",              "16er Magazin",             100},
                    {"30Rnd_9x21_Mag",              "9mm x30 Magazin",          1500},
                    {"30Rnd_65x39_caseless_mag",    "6.5mm Magazin",            2500},
                    {"20Rnd_762x51_Mag",            "7.62mm x20 Magazin",       3400},
                    {"20Rnd_556x45_UW_mag",         "556er Magazin",            1000},
                    {"10Rnd_338_Mag",               ".338 x10 Magazin",         5000},

                    // ** Aufsätze
                    {"optic_Aco",                   "ACO",                      2400},
                    {"optic_Holosight",             "Holovisier",               3200},
                    {"optic_Hamr",                  "RCO",                      4500},
                    {"optic_Arco",                  "ARCO",                     7500},
                    {"optic_MRCO",                  "MRCO",                     10000},
                    {"optic_NVS",                   "NVS",                      11500},
                    {"optic_DMS",                   "DMS",                      14500},
                    {"optic_AMS",                   "AMS",                      25000},
                    {"bipod_03_F_blk",              "Zweibein",                 50000},
                    {"muzzle_snds_L",               "9mm Schalldämpfer",        5000},
                    {"muzzle_snds_H",               "6.5mm Schalldämpfer",      20000},
                    {"muzzle_snds_338_black",       "MAR-10 Schalldämpfer",     50000},

                    // ** Items
                    {"B_UavTerminal",               "UAV Terminal",             5000},
                    {"Rangefinder",                 "Entfernungsmesser",        35000}
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
                    {"arifle_sdar_F",               "Taser Sturmgewehr",        25000},
                    {"hgun_Rook40_snds_F",          "Taser-Pistole Silenced",   10000},
                    {"SMG_02_F",                    "Sting 9mm",                30000},
                    {"arifle_MXC_F",                "MX-Carabine",              50000},
                    {"arifle_MX_F",                 "MX Sturmgewehr",           60000},
                    {"arifle_MXM_F",                "MXM DMR",                  65000},
                    {"srifle_EBR_F",                "MK18 EMR",                 100000},
                    {"srifle_DMR_02_camo_F",        "MAR-10 .338",              450000},

                    // ** Magazine
                    {"16Rnd_9x21_Mag",              "16er Magazin",             100},
                    {"30Rnd_9x21_Mag",              "9mm x30 Magazin",          1500},
                    {"30Rnd_65x39_caseless_mag",    "6.5mm Magazin",            2500},
                    {"20Rnd_762x51_Mag",            "7.62mm x20 Magazin",       3400},
                    {"20Rnd_556x45_UW_mag",         "556er Magazin",            1000},
                    {"10Rnd_338_Mag",               ".338 x10 Magazin",         5000},

                    // ** Aufsätze
                    {"optic_Aco",                   "ACO",                      2400},
                    {"optic_Holosight",             "Holovisier",               3200},
                    {"optic_Hamr",                  "RCO",                      4500},
                    {"optic_Arco",                  "ARCO",                     7500},
                    {"optic_MRCO",                  "MRCO",                     10000},
                    {"optic_NVS",                   "NVS",                      11500},
                    {"optic_DMS",                   "DMS",                      14500},
                    {"optic_AMS",                   "AMS",                      25000},
                    {"bipod_03_F_blk",              "Zweibein",                 50000},
                    {"muzzle_snds_L",               "9mm Schalldämpfer",        5000},
                    {"muzzle_snds_H",               "6.5mm Schalldämpfer",      20000},
                    {"muzzle_snds_338_black",       "MAR-10 Schalldämpfer",     50000},

                    // ** Items
                    {"B_UavTerminal",               "UAV Terminal",             5000},
                    {"Rangefinder",                 "Entfernungsmesser",        35000}
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
                    {"arifle_sdar_F",               "Taser Sturmgewehr",        25000},
                    {"hgun_Rook40_snds_F",          "Taser-Pistole Silenced",   10000},
                    {"SMG_02_F",                    "Sting 9mm",                30000},
                    {"arifle_MXC_F",                "MX-Carabine",              50000},
                    {"arifle_MX_F",                 "MX Sturmgewehr",           60000},
                    {"arifle_MXM_F",                "MXM DMR",                  65000},
                    {"srifle_EBR_F",                "MK18 EMR",                 100000},
                    {"srifle_DMR_02_camo_F",        "MAR-10 .338",              450000},

                    // ** Magazine
                    {"16Rnd_9x21_Mag",              "16er Magazin",             100},
                    {"30Rnd_9x21_Mag",              "9mm x30 Magazin",          1500},
                    {"30Rnd_65x39_caseless_mag",    "6.5mm Magazin",            2500},
                    {"20Rnd_762x51_Mag",            "7.62mm x20 Magazin",       3400},
                    {"20Rnd_556x45_UW_mag",         "556er Magazin",            1000},
                    {"10Rnd_338_Mag",               ".338 x10 Magazin",         5000},

                    // ** Aufsätze
                    {"optic_Aco",                   "ACO",                      2400},
                    {"optic_Holosight",             "Holovisier",               3200},
                    {"optic_Hamr",                  "RCO",                      4500},
                    {"optic_Arco",                  "ARCO",                     7500},
                    {"optic_MRCO",                  "MRCO",                     10000},
                    {"optic_NVS",                   "NVS",                      11500},
                    {"optic_DMS",                   "DMS",                      14500},
                    {"optic_AMS",                   "AMS",                      25000},
                    {"bipod_03_F_blk",              "Zweibein",                 50000},
                    {"muzzle_snds_L",               "9mm Schalldämpfer",        5000},
                    {"muzzle_snds_H",               "6.5mm Schalldämpfer",      20000},
                    {"muzzle_snds_338_black",       "MAR-10 Schalldämpfer",     50000},

                    // ** Items
                    {"B_UavTerminal",               "UAV Terminal",             5000},
                    {"Rangefinder",                 "Entfernungsmesser",        35000}
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
                    {"arifle_sdar_F",               "Taser Sturmgewehr",        25000},
                    {"hgun_Rook40_snds_F",          "Taser-Pistole Silenced",   10000},
                    {"SMG_02_F",                    "Sting 9mm",                30000},
                    {"arifle_MXC_F",                "MX-Carabine",              50000},
                    {"arifle_MX_F",                 "MX Sturmgewehr",           60000},
                    {"arifle_MXM_F",                "MXM DMR",                  65000},
                    {"srifle_EBR_F",                "MK18 EMR",                 100000},
                    {"srifle_DMR_02_camo_F",        "MAR-10 .338",              450000},

                    // ** Magazine
                    {"16Rnd_9x21_Mag",              "16er Magazin",             100},
                    {"30Rnd_9x21_Mag",              "9mm x30 Magazin",          1500},
                    {"30Rnd_65x39_caseless_mag",    "6.5mm Magazin",            2500},
                    {"20Rnd_762x51_Mag",            "7.62mm x20 Magazin",       3400},
                    {"20Rnd_556x45_UW_mag",         "556er Magazin",            1000},
                    {"10Rnd_338_Mag",               ".338 x10 Magazin",         5000},

                    // ** Aufsätze
                    {"optic_Aco",                   "ACO",                      2400},
                    {"optic_Holosight",             "Holovisier",               3200},
                    {"optic_Hamr",                  "RCO",                      4500},
                    {"optic_Arco",                  "ARCO",                     7500},
                    {"optic_MRCO",                  "MRCO",                     10000},
                    {"optic_NVS",                   "NVS",                      11500},
                    {"optic_DMS",                   "DMS",                      14500},
                    {"optic_AMS",                   "AMS",                      25000},
                    {"bipod_03_F_blk",              "Zweibein",                 50000},
                    {"muzzle_snds_L",               "9mm Schalldämpfer",        5000},
                    {"muzzle_snds_H",               "6.5mm Schalldämpfer",      20000},
                    {"muzzle_snds_338_black",       "MAR-10 Schalldämpfer",     50000},

                    // ** Items
                    {"B_UavTerminal",               "UAV Terminal",             5000},
                    {"Rangefinder",                 "Entfernungsmesser",        35000}
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
                    {"arifle_sdar_F",               "Taser Sturmgewehr",        25000},
                    {"hgun_Rook40_snds_F",          "Taser-Pistole Silenced",   10000},
                    {"SMG_02_F",                    "Sting 9mm",                30000},
                    {"arifle_MXC_F",                "MX-Carabine",              50000},
                    {"arifle_MX_F",                 "MX Sturmgewehr",           60000},
                    {"arifle_MXM_F",                "MXM DMR",                  65000},
                    {"srifle_EBR_F",                "MK18 EMR",                 100000},
                    {"srifle_DMR_02_camo_F",        "MAR-10 .338",              450000},

                    // ** Magazine
                    {"16Rnd_9x21_Mag",              "16er Magazin",             100},
                    {"30Rnd_9x21_Mag",              "9mm x30 Magazin",          1500},
                    {"30Rnd_65x39_caseless_mag",    "6.5mm Magazin",            2500},
                    {"20Rnd_762x51_Mag",            "7.62mm x20 Magazin",       3400},
                    {"20Rnd_556x45_UW_mag",         "556er Magazin",            1000},
                    {"10Rnd_338_Mag",               ".338 x10 Magazin",         5000},

                    // ** Aufsätze
                    {"optic_Aco",                   "ACO",                      2400},
                    {"optic_Holosight",             "Holovisier",               3200},
                    {"optic_Hamr",                  "RCO",                      4500},
                    {"optic_Arco",                  "ARCO",                     7500},
                    {"optic_MRCO",                  "MRCO",                     10000},
                    {"optic_NVS",                   "NVS",                      11500},
                    {"optic_DMS",                   "DMS",                      14500},
                    {"optic_AMS",                   "AMS",                      25000},
                    {"bipod_03_F_blk",              "Zweibein",                 50000},
                    {"muzzle_snds_L",               "9mm Schalldämpfer",        5000},
                    {"muzzle_snds_H",               "6.5mm Schalldämpfer",      20000},
                    {"muzzle_snds_338_black",       "MAR-10 Schalldämpfer",     50000},

                    // ** Items
                    {"B_UavTerminal",               "UAV Terminal",             5000},
                    {"Rangefinder",                 "Entfernungsmesser",        35000}
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
                    {"arifle_sdar_F",               "Taser Sturmgewehr",        25000},
                    {"hgun_Rook40_snds_F",          "Taser-Pistole Silenced",   10000},
                    {"SMG_02_F",                    "Sting 9mm",                30000},
                    {"arifle_MXC_F",                "MX-Carabine",              50000},
                    {"arifle_MX_F",                 "MX Sturmgewehr",           60000},
                    {"arifle_MXM_F",                "MXM DMR",                  65000},
                    {"srifle_EBR_F",                "MK18 EMR",                 100000},
                    {"srifle_DMR_02_camo_F",        "MAR-10 .338",              450000},

                    // ** Magazine
                    {"16Rnd_9x21_Mag",              "16er Magazin",             100},
                    {"30Rnd_9x21_Mag",              "9mm x30 Magazin",          1500},
                    {"30Rnd_65x39_caseless_mag",    "6.5mm Magazin",            2500},
                    {"20Rnd_762x51_Mag",            "7.62mm x20 Magazin",       3400},
                    {"20Rnd_556x45_UW_mag",         "556er Magazin",            1000},
                    {"10Rnd_338_Mag",               ".338 x10 Magazin",         5000},

                    // ** Aufsätze
                    {"optic_Aco",                   "ACO",                      2400},
                    {"optic_Holosight",             "Holovisier",               3200},
                    {"optic_Hamr",                  "RCO",                      4500},
                    {"optic_Arco",                  "ARCO",                     7500},
                    {"optic_MRCO",                  "MRCO",                     10000},
                    {"optic_NVS",                   "NVS",                      11500},
                    {"optic_DMS",                   "DMS",                      14500},
                    {"optic_AMS",                   "AMS",                      25000},
                    {"optic_KHS_old",               "Khalia",                   40000},
                    {"optic_LRPS",                  "LRPS",                     35000},
                    {"bipod_03_F_blk",              "Zweibein",                 50000},
                    {"muzzle_snds_L",               "9mm Schalldämpfer",        5000},
                    {"muzzle_snds_H",               "6.5mm Schalldämpfer",      20000},
                    {"muzzle_snds_338_black",       "MAR-10 Schalldämpfer",     50000},

                    // ** Items
                    {"B_UavTerminal",               "UAV Terminal",             5000},
                    {"Rangefinder",                 "Entfernungsmesser",        35000}
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
                    {"FirstAidKit",                 "", 10},
                    {"Medikit",                     "", 10},
                    {"NVGoggles",                   "", 10},
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
                    {"FirstAidKit",                 "", 10},
                    {"Medikit",                     "", 10},
                    {"NVGoggles",                   "", 10},
                    {"Chemlight_red",               "", 20},
                    {"Chemlight_yellow",            "", 20},
                    {"Chemlight_green",             "", 20},
                    {"Chemlight_blue",              "", 20}
        };
    };
};
