class CarShops {
	/*
		Format:
		{ Classname, rental price, license required, { varname, >= value } }

		{ varname, >= value} this is a "level" requirement mainly used by cops and rebels, do not fill this in if you are not utilizing it.
	*/

    class civ_car {
		side = "civ";
		vehicles[] = {
			{ "C_Hatchback_01_F", 9500, "ausweis" },
			{ "C_Offroad_01_F", 12500, "ausweis" },
			{ "C_SUV_01_F", 35000, "ausweis" },
			{ "C_Hatchback_01_sport_F", 55000, "ausweis" }
		};
	};

	class civ_quad {
		side = "civ";
		vehicles[] = {
			{ "B_Quadbike_01_F", 5000, "" }
		};
	};

	class kart_shop {
		side = "civ";
		vehicles[] = {
			{ "C_Kart_01_Blu_F", 550000 , "ausweis" },
			{ "C_Kart_01_Fuel_F", 550000, "ausweis" },
			{ "C_Kart_01_Red_F", 550000, "ausweis" },
			{ "C_Kart_01_Vrana_F", 550000, "ausweis" }
		};
	};

	class med_shop {
		side = "med";
		vehicles[] = {
			{ "C_Offroad_01_F", 13000, "", { "life_medlevel", -1 } },
			{ "B_Truck_01_transport_F", 75000, "", { "life_medlevel", 2 } },
			{ "C_SUV_01_F", 13000, "", { "life_medlevel", 2 } },
			{ "C_Van_01_box_F", 13000, "", { "life_medlevel", 1 } }
		};
	};

	class med_air {
		side = "med";
		vehicles[] = {
			{ "B_Heli_Light_01_F", 200000, "mAir", { "life_medlevel", 2 } },
			{ "O_Heli_Light_02_unarmed_F", 200000, "mAir", { "life_medlevel", 3 } },
			{ "I_Heli_Transport_02_F", 200000, "mAir", { "life_medlevel", 3 } }
		};
	};

	class civ_truck {
		side = "civ";
		vehicles[] = {
			{ "C_Van_01_transport_F", 40000, "trucking" },
			{ "C_Van_01_fuel_F", 40000, "trucking" },
			{ "O_Truck_02_transport_F", 210000, "trucking" },
			{ "O_Truck_02_covered_F", 215000, "trucking" },
			{ "B_Truck_01_transport_F", 650000, "trucking" },
			{ "B_Truck_01_covered_F", 850000, "trucking" },
			{ "B_Truck_01_ammo_F", 1200000, "trucking" },
			{ "O_Truck_03_transport_F", 1600000, "trucking" },
			{ "O_Truck_03_covered_F", 2200000, "trucking" },
			{ "B_Truck_01_box_F", 3300000, "trucking" },
			{ "O_Truck_03_device_F", 3900000, "trucking" },
			{ "O_Truck_02_fuel_F", 480000, "trucking" },
			{ "B_Truck_01_fuel_F", 850000, "trucking" },
			{ "O_Truck_03_fuel_F", 1500000, "trucking" },
		};
	};

	class reb_car {
		side = "civ";
		vehicles[] = {
			{ "B_Quadbike_01_F", 7500, "rebel" },
			{ "B_G_Offroad_01_F", 55000, "rebel" },
			{ "B_MRAP_01_F", 950000, "rebel" },
			{ "O_MRAP_02_F", 1150000, "rebel" },
			{ "B_Heli_Light_01_F", 325000, "rebel" },
			{ "O_Heli_Light_02_unarmed_F", 1550000, "rebel" },
			{ "I_Heli_light_03_unarmed_F", 1800000, "rebel" },
			{ "O_Heli_Transport_04_F", 2200000, "rebel" },
			{ "O_Heli_Transport_04_ammo_F", 2850000, "rebel" },
			{ "O_Heli_Transport_04_bench_F", 2510000, "rebel" },
			{ "O_Heli_Transport_04_box_F", 2820000, "rebel" },
			{ "O_Heli_Transport_04_repair_F", 2255000, "rebel" },
			{ "O_Heli_Transport_04_covered_F", 3550000, "rebel" }
		};
	};

	class cop_car {
		side = "cop";
		vehicles[] = {
			{ "B_GEN_Offroad_01_gen_F", 13000, "", { "life_coplevel", -1 } },
			{ "C_SUV_01_F", 20000, "", { "life_coplevel", 2 } },
			{ "C_Hatchback_01_sport_F", 20000, "", { "life_coplevel", 4 } },
			{"B_MRAP_01_F", 50000, "gsg" },
			{"I_MRAP_03_F", 50000, "gsg"},
			{"C_Offroad_02_unarmed_F", 15000,"",{"life_coplevel", -1}}
		};
	};

	class civ_air {
		side = "civ";
		vehicles[] = {
			{ "B_Heli_Light_01_F", 330000, "pilot" },
			{ "C_Heli_Light_01_civil_F",350000, "pilot" },
			{ "O_Heli_Light_02_unarmed_F", 750000, "pilot" },
			{ "I_Heli_Transport_02_F",4500000, "pilot" },
			{ "B_Heli_Transport_03_unarmed_F",6500000, "pilot" },
			{ "C_Plane_Civil_01_F",100000,"pilot"},
			{ "C_Plane_Civil_01_racing_F",125000,"pilot"},
			{ "B_T_VTOL_01_infantry_F", 7500000},
			{ "B_T_VTOL_01_infantry_F", 7500000}

		};
	};

	class cop_air {
		side = "cop";
		vehicles[] = {
			{ "B_Heli_Light_01_F", 200000, "cAir", { "life_coplevel", 3 } },
			{ "C_Heli_Light_01_civil_F", 200000, "cAir", { "life_coplevel", 3 } },
			{ "I_Heli_light_03_unarmed_F", 200000, "cAir", { "life_coplevel", 7 } },
			{ "B_Heli_Transport_01_F", 200000, "cAir", { "life_coplevel", 9 } },
			{ "B_T_VTOL_01_infantry_F", 2500000, "cAir", { "life_coplevel", 9 } }
		};
	};

	class cop_airhq {
		side = "cop";
		vehicles[] = {
			{ "B_Heli_Light_01_F", 200000, "cAir", { "life_coplevel", 3 } },
			{ "C_Heli_Light_01_civil_F", 200000, "cAir", { "life_coplevel", 3 } },
			{ "I_Heli_light_03_unarmed_F", 200000, "cAir", { "life_coplevel", 7 } },
			{ "B_Heli_Transport_01_F", 200000, "cAir", { "life_coplevel", 9 } }
		};
	};

	class cop_ship {
		side = "cop";
		vehicles[] = {
			{ "B_Boat_Transport_01_F", 3000, "coastguard" },
			{ "C_Boat_Civil_01_police_F", 20000, "coastguard" },
			{ "B_Boat_Armed_01_minigun_F", 75000, "coastguard" },
			{ "B_SDV_01_F", 100000, "coastguard" }
		};
	};

	class civ_ship {
		side = "civ";
		vehicles[] = {
			{ "C_Rubberboat", 5000, "boat" },
			{ "C_Boat_Civil_01_F", 22000, "boat" },
			{ "B_SDV_01_F", 150000, "boat" }
		};
	};
};

/*
	Vehicle Configs (Contains textures and other stuff)

	storageFee (Getting vehicles out of garage) format:
		INDEX 0: Civilian Price
		INDEX 1: Cop Price
		INDEX 3: EMS Price
		INDEX 4: OPFOR Price (Not implemented in vanilla but still leaving support

	Textures config follows { Texture Name, side, {texture(s)path}}
	Texture(s)path follows this format:
		INDEX 0: Texture Layer 0
		INDEX 1: Texture Layer 1
		INDEX 2: Texture Layer 2
		etc etc etc
*/
class CfgVehicles {
	class Default {
		vItemSpace = 10;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
		insurance = 2500;
		chopShop = 1200;
		textures[] = {};
	};

	class I_Truck_02_medical_F : Default {
		vItemSpace = 150;
		storageFee[] = { 0, 0, 1500, 0 };
		garageSell[] = { 0, 0, 5000, 0 };
		chopShop = 3000;
	};

	class O_Truck_03_medical_F : Default {
		vItemSpace = 200;
		storageFee[] = { 0, 0, 3000, 0 };
		garageSell[] = { 0, 0, 10000, 0 };
		chopShop = 7500;
	};

	class B_Truck_01_medical_F : Default {
		vItemSpace = 250;
		storageFee[] = { 0, 0, 6500, 0 };
		garageSell[] = { 0, 0, 25000, 0 };
		chopShop = 12500;
	};

	class C_Rubberboat {
        vItemSpace = 45;
        storageFee[] = { 400, 300, 0, 0 };
		garageSell[] = { 950, 350, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {};
    };

	class B_Heli_Transport_01_F {
		vItemSpace = 200;
		storageFee[] = { 0, 50000, 0, 0 };
		garageSell[] = { 0, 85000, 0, 0 };
		insurance = 16000;
		chopShop = 45000;
		textures[] = {
			{ "GIGN", "cop", {
                "textures\cop\ghost_gign.jpg"
            } }
		};
	};

	class B_MRAP_01_hmg_F : Default {
		vItemSpace = 100;
	};

	class O_Boat_Armed_01_hmg_F {
        vItemSpace = 175;
 storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 21000, 21000, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {};
    };

	class B_Boat_Armed_01_minigun_F {
        vItemSpace = 175;
        storageFee[] = { 0, 16500, 0, 0 };
		garageSell[] = { 0, 21000, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {};
    };

	class I_Boat_Armed_01_minigun_F {
        vItemSpace = 175;
 storageFee[] = { 1000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {};
    };

	class B_G_Boat_Transport_01_F {
        vItemSpace = 45;
		storageFee[] = { 1000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {};
    };

	class B_Boat_Transport_01_F {
        vItemSpace = 45;
        storageFee[] = { 0, 450, 0, 0 };
		garageSell[] = { 0, 850, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {};
    };

	class O_Truck_03_transport_F {
        vItemSpace = 250;
		storageFee[] = { 1000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {};
    };

	class O_Truck_03_device_F {
        vItemSpace = 285;
        storageFee[] = { 95000, 0, 0, 0 };
		garageSell[] = { 185000, 0, 0, 0 };
        insurance = 25000;
        chopShop = 125000;
        textures[] = {};
    };

	class Land_CargoBox_V1_F : Default {
        vItemSpace = 5000;
    };

	class Box_IND_Grenades_F : Default {
        vItemSpace = 350;
    };

	class B_supplyCrate_F {
        vItemSpace = 700;
    };

	class B_G_Offroad_01_F {
        vItemSpace = 65;
		storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 3500, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {};
    };

	class B_G_Offroad_01_armed_F : B_G_Offroad_01_F {};

	class I_G_Van_01_transport_F {
        vItemSpace = 100;
		storageFee[] = { 1000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class C_Boat_Civil_01_F {
        vItemSpace = 85;
        storageFee[] = { 4500, 2500, 0, 0 };
		garageSell[] = { 6800, 3500, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class C_Boat_Civil_01_police_F {
        vItemSpace = 85;
        storageFee[] = { 0, 3500, 0, 0 };
		garageSell[] = { 0, 4950, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class C_Boat_Civil_01_rescue_F {
        vItemSpace = 85;
		storageFee[] = { 1000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class B_Truck_01_box_F {
        vItemSpace = 350;
        storageFee[] = { 35000, 0, 0, 0 };
		garageSell[] = { 150000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {
            { "Devil", "civ", {
                "textures\civ\civ_hemtt_devil_0.jpg",
                "textures\civ\civ_hemtt_devil_1.jpg",
            } }
        };
    };

	class B_Truck_01_transport_F {
        vItemSpace = 150;
        storageFee[] = { 25650, 0, 0, 0 };
		garageSell[] = { 135000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {
            { "Devil", "civ", {
                "textures\civ\civ_hemtt_devil_0.jpg",
                "textures\civ\civ_hemtt_devil_1.jpg",
            } }
        };
    };

	class O_MRAP_02_F {
        vItemSpace = 60;
        storageFee[] = { 45000, 0, 0, 0 };
		garageSell[] = { 65000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {
            { "TarnRot", "reb", {
                "textures\civ\ifrit_r1.jpg",
				"textures\civ\ifrit_r2.jpg"
            } },
            { "Black Rebell", "reb", {
                "textures\civ\ifrit_rebell_front.jpg",
                "textures\civ\ifrit_rebell_back.jpg",
            } },
            { "Slovakiadragon", "adm", {
                "textures\admin\ifrit_admin_front.jpg",
                "textures\admin\ifrit_sl.jpg",
            } },
            { "Abdul", "adm", {
                "textures\admin\ifrit_admin_front.jpg",
                "textures\admin\ifrit_da.jpg",
            } },
            { "Graf", "adm", {
                "textures\admin\ifrit_admin_front.jpg",
                "textures\admin\ifrit_graf.jpg",
            } },
            { "JimBeam", "adm", {
                "textures\admin\ifrit_admin_front.jpg",
                "textures\admin\ifrit_jimbeam.jpg",
            } },
            { "Loki", "adm", {
                "textures\admin\ifrit_admin_front.jpg",
                "textures\admin\ifrit_loki.jpg",
            } },
            { "Falcone", "adm", {
                "textures\admin\ifrit_admin_front.jpg",
                "textures\admin\ifrit_df.jpg",
            } }
        };
    };

	class I_MRAP_03_F {
        vItemSpace = 125;
		storageFee[] = { 1000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {
        { "GIGN", "cop", {
            "textures\cop\Strider_gign.jpg"
        } }
        };
    };

	class C_Offroad_01_F {
        vItemSpace = 60;
        storageFee[] = { 1000, 500, 650, 1000 };
		garageSell[] = { 6500, 2500, 0, 0 };
        insurance = 2500;
        chopShop = 2500;
        textures[] = {
        	{ "Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa"
            } },
			{ "Yellow", "civ", {
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa",
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa"
            } },
			{ "White", "civ", {
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa",
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa"
            } },
			{ "Blue", "civ", {
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa",
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa"
            } },
			{ "Dark Red", "civ", {
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa",
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa"
            } },
			{ "Blue / White", "civ", {
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa",
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa"
            } },
            { "ART", "med", {
	                "textures\med\medic_offroad.jpg"
            } },
            { "Dodge", "civ", {
	                "textures\civ\civ_offroad_dodge.jpg"
            } },
            { "Weed", "civ", {
	                "textures\civ\civ_offroad_weed.jpg"
            } },
            { "Pokemon", "civ", {
	                "textures\civ\pokemon_off.jpg"
            } }
	    };
    };

	class C_Kart_01_Blu_F {
		vItemSpace = 20;
		storageFee[] = { 1500, 0, 0, 0 };
		garageSell[] = { 3500, 0, 0, 0 };
		inusrance = 1650;
		chopShop = 3500;
		textures[] = {};
	};

	class C_Kart_01_Fuel_F : C_Kart_01_Blu_F {}; //Inherits everything from the above class
	class C_Kart_01_Red_F : C_Kart_01_Blu_F {}; //Inherits everything from the above class
	class C_Kart_01_Vrana_F : C_Kart_01_Blu_F {}; //Inherits everything from the above class

	class C_Hatchback_01_sport_F {
        vItemSpace = 35;
        storageFee[] = { 2500, 1000, 0, 0 };
		garageSell[] = { 15000, 7500, 0, 0 };
        insurance = 5500;
        chopShop = 4500;
        textures[] = {
        	{ "Red", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport01_co.paa"
            } },
			{ "Dark Blue", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport02_co.paa"
            } },
			{ "Orange", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport03_co.paa"
            } },
			{ "Black / White", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport04_co.paa"
            } },
			{ "Beige", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport05_co.paa"
            } },
			{ "Green", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport06_co.paa"
            } },
            { "GNRA", "cop", {
                "textures\cop\Hatchback_Gendarm.jpg"
            } },
            { "Metallica", "civ", {
                "textures\civ\civ_hatchback_metallica.jpg"
            } },
            { "Monster", "civ", {
                "textures\civ\hatchback_sport_ken_block.jpg"
            } },
            { "Ghostbuster", "civ", {
                "textures\civ\ghost_hatchback_sport.jpg"
            } }
        };
    };

	class B_Quadbike_01_F {
        vItemSpace = 25;
		storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 950, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {
			{ "Brown", "cop", {
                "\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa"
            } },
			{ "Digi Desert", "reb", {
	                "\A3\Soft_F\Quadbike_01\Data\quadbike_01_opfor_co.paa"
	        } },
			{ "Black", "civ", {
	                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_black_co.paa"
	        } },
			{ "Blue", "civ", {
	                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_blue_co.paa"
	        } },
			{ "Red", "civ", {
	                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_red_co.paa"
	        } },
			{ "White", "civ", {
	                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_white_co.paa"
	        } },
			{ "Digi Green", "civ", {
	                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_indp_co.paa"
	        } },
			{ "Hunter Camo", "civ", {
	                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
	        } },
	        { "Rebel Camo", "reb", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            } }
        };
    };

	class I_Truck_02_covered_F {
        vItemSpace = 250;
        storageFee[] = { 14500, 0, 0, 0 };
		garageSell[] = { 62000, 0, 0, 0 };
        insurance = 6500;
        chopShop = 20000;
        textures[] = {
        	{ "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            } },
            { "Black", "fed", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

	class I_Truck_02_transport_F : I_Truck_02_covered_F {
        vItemSpace = 200;
        storageFee[] = { 12000, 0, 0, 0 };
		garageSell[] = { 49800, 3500, 0, 0 };
    };

	class O_Truck_03_covered_F {
		vItemSpace = 300;
		storageFee[] = { 25000, 0, 0, 0 };
		garageSell[] = { 65000, 0, 0, 0 };
		insurance = 2500;
		chopShop = 5000;
		textures[] = {};
	};

	class C_Hatchback_01_F {
        vItemSpace = 35;
		storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 4500, 3500, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {
        	{ "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base01_co.paa"
            } },
			{ "Green", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base02_co.paa"
            } },
			{ "Blue", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base03_co.paa"
            } },
			{ "Dark Blue", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base04_co.paa"
            } },
			{ "Yellow", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base06_co.paa"
            } },
			{ "White", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base07_co.paa"
            } },
			{ "Grey", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base08_co.paa"
            } },
            { "Black", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base09_co.paa"
            } },
			{ "Polizei", "cop", {
                "textures\cop\Hatchback_Gendarm.jpg"
            } },
			{ "Mario", "civ", {
                "textures\civ\hatchbackv1.jpg"
            } },
			{ "Peach", "civ", {
                "textures\civ\hatchbackv2.jpg"
            } }
        };
    };

	class C_SUV_01_F {
        vItemSpace = 50;
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 15000, 7500, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {
        	{ "Dark Red", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_co.paa"
            } },
			{ "ART", "med", {
	                "textures\med\suv_art.jpg"
            } },
			{ "Silver", "civ", {
	                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_03_co.paa"
            } },
			{ "Orange", "civ", {
	                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_04_co.paa"
            } },
            { "GNRA", "cop", {
				"textures\cop\SUV_Gendarm.jpg"
            } },
            { "GIGN", "cop", {
                "textures\cop\SUV_GIGN.jpg"
            } },
            { "Batman", "civ", {
                "textures\civ\batman_suv.jpg"
            } },
            { "Carbon", "civ", {
                "textures\civ\carbon_suv.jpg"
            } },
            { "Ferrari", "civ", {
                "textures\civ\civ_suv_ferrari.jpg"
            } },
            { "KV Green", "civ", {
                "textures\civ\civ_suv_server.jpg"
            } },
            { "KV Weiss", "civ", {
                "textures\civ\civ_suv_server_weiss.jpg"
            } },
            { "Skull", "civ", {
                "textures\civ\civ_suv_skull.jpg"
            } },
            { "Lady", "civ", {
                "textures\civ\pink_suv.jpg"
            } },
            { "Rostlaube", "civ", {
                "textures\civ\suv_alt.jpg"
            } },
            { "VIP", "vip", {
                "textures\civ\suv_vip.jpg"
            } },
            { "Taxi", "civ", {
                "textures\civ\taxi_suv.jpg"
            } }
	        };
    };

	class C_Van_01_transport_F {
        vItemSpace = 70;
 storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 25000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {
        	{ "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } }
        };
    };

	class C_Van_01_box_F {
        vItemSpace = 150;
 storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 35000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {
        	{ "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } },
            { "ART", "med", {
                "textures\med\art_truck_front.jpg",
				"textures\med\art_truck_back.jpg"
            } }
        };
    };

	class B_MRAP_01_F {
        vItemSpace = 85;
        storageFee[] = { 0, 7500, 0, 0 };
		garageSell[] = { 0, 10000, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {
            { "GNRA", "cop", {
                "textures\cop\Hunter_Gendarm_Front.jpg",
				"textures\cop\Hunter_Gendarm_back.jpg"
            } },
            { "Black", "med", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } },
			{ "Digital Rot", "reb", {
                "textures\civ\digirot_hunter_1.jpg",
                "textures\civ\digirot_hunter_2.jpg"
            } },
			{ "Black Rebell", "reb", {
                "textures\civ\hunter_rebell_front.jpg",
                "textures\civ\hunter_rebell_back.jpg",
            } }
        };
    };

	class B_Heli_Light_01_F {
        vItemSpace = 90;
        storageFee[] = { 45000, 19500, 0, 0 };
		garageSell[] = { 57000, 35000, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {
			{ "Civ Blue", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"
            } },
			{ "Civ Red", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"
            } },
			{ "Digi Green", "donate", {
	                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa"
            } },
			{ "Blueline", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueline_co.paa"
            } },
			{ "Elliptical", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"
            } },
			{ "Furious", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"
            } },
			{ "Jeans Blue", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"
            } },
			{ "Speedy Redline", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"
            } },
			{ "Sunset", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"
            } },
			{ "Vrana", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"
            } },
			{ "Waves Blue", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"
            } },
			{ "Rebel Digital", "reb", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            } },
            { "ART", "med", {
                "textures\med\art_humming.jpg"
            } },
            { "GNRA", "cop", {
                "textures\cop\humming_gendarm.jpg"
            } }
        };
    };

	class O_Heli_Light_02_unarmed_F {
        vItemSpace = 110;
        storageFee[] = { 55000, 0, 22000, 0 };
		garageSell[] = { 72500, 0, 35000, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {
        	{ "Black", "fed", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_co.paa"
            } },
			{ "White / Blue", "civ", {
	                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"
            } },
			{ "Digi Green", "donate", {
	                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_indp_co.paa"
            } },
			{ "Desert Digi", "reb", {
	                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_opfor_co.paa"
            } },
            { "ART", "med", {
                "textures\med\medic_orca.jpg"
            } }
        };
    };

	class I_Heli_Transport_02_F {
        vItemSpace = 210;
        storageFee[] = { 75000, 0, 0, 0 };
		garageSell[] = { 125000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {
        	{ "Ion", "civ", {
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_ion_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_ion_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_ion_co.paa"
            } },
            { "Dahoman", "civ", {
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_dahoman_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_dahoman_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_dahoman_co.paa"
            } },
            { "Medic", "med", {
                "textures\med\art_mowhawk.jpg",
				"textures\med\art_mowhawk2.jpg",
				"textures\med\art_mowhawk3.jpg"
            } }

        };
    };

	class I_Heli_light_03_unarmed_F {
		vItemSpace = 120;
		 storageFee[] = { 1000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {
            { "GNRA", "cop", {
                "textures\cop\Hellcat_Gendarm.jpg"
            } },
            { "SeeleDerRebellen", "reb", {
                "textures\civ\Hellcat_rebell.jpg"
            } }
        };
	};

	class O_Truck_02_transport_F {
		vItemSpace = 100;
		 storageFee[] = { 1000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {};
	};

	class O_Truck_02_covered_F {
		vItemSpace = 100;
		 storageFee[] = { 1000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {};
	};

	class B_Truck_01_ammo_F {
		vItemSpace = 200;
		 storageFee[] = { 1000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {};
	};

	class C_Van_01_fuel_F {
		vItemSpace = 70;
		 storageFee[] = { 1000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {};
	};

	class O_Truck_02_fuel_F {
		vItemSpace = 125;
		 storageFee[] = { 1000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {};
	};

	class B_Truck_01_fuel_F {
		vItemSpace = 180;
		 storageFee[] = { 1000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {};
	};

	class O_Truck_03_fuel_F {
		vItemSpace = 250;
		 storageFee[] = { 1000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {};
	};

	class B_Heli_Transport_03_unarmed_F {
		vItemSpace = 250;
		 storageFee[] = { 1000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {};
	};

	class O_Heli_Transport_04_F {
		vItemSpace = 150;
		 storageFee[] = { 1000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {};
	};

	class O_Heli_Transport_04_ammo_F {
		vItemSpace = 200;
		 storageFee[] = { 1000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {};
	};

	class O_Heli_Transport_04_bench_F {
		vItemSpace = 180;
		 storageFee[] = { 1000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {};
	};

	class O_Heli_Transport_04_box_F {
		vItemSpace = 250;
		 storageFee[] = { 1000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {};
	};

	class O_Heli_Transport_04_repair_F {
		vItemSpace = 180;
		storageFee[] = { 1000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {};
	};

	class O_Heli_Transport_04_covered_F {
		vItemSpace = 300;
		storageFee[] = { 1000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {};
	};

	class C_Heli_Light_01_civil_F {
		vItemSpace = 90;
		 storageFee[] = { 1000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {
            { "GNRA", "cop", {
                "textures\cop\humming_gendarm.jpg"
            } }
        };
	};

	class B_SDV_01_F {
		vItemSpace = 10;
		 storageFee[] = { 1000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {};
	};

	class B_Truck_01_covered_F {
		vItemSpace = 185;
		 storageFee[] = { 1000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {
            { "Devil", "civ", {
                "textures\civ\civ_hemtt_devil_0.jpg",
                "textures\civ\civ_hemtt_devil_1.jpg",
            } }
        };
    };

	class C_Offroad_02_unarmed_F {
		vItemSpace = 185;
		 storageFee[] = { 1000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {

        { "GNRA", "cop", {
                "textures\cop\jeep_gendarm.jpg"
            } }
        };
	};

	class B_Truck_01_mover_F {
		vItemSpace = 185;
		 storageFee[] = { 1000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {

        { "ART", "med", {
                "textures\med\art_hemtt_mover.jpg",
                "textures\med\art_hemtt2.jpg"
            } }
        };
	};
	class C_Plane_Civil_01_racing_F {
		vItemSpace = 10;
		 storageFee[] = { 1000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {};
	};
	class C_Plane_Civil_01_F {
		vItemSpace = 10;
		 storageFee[] = { 1000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {};
	};
		class B_T_VTOL_01_infantry_F {
		vItemSpace = 1000;
		 storageFee[] = { 1000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {};
	};
};
