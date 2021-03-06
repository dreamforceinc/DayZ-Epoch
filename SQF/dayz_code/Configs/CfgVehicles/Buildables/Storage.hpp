class Gunrack1;
class GunRack_DZ: Gunrack1
{
	armor = 200;
	scope = 2;
	displayName = $STR_EPOCH_GUNRACK;
	vehicleClass = "DayZ Epoch Buildables";
	transportMaxWeapons = 20;
	transportMaxMagazines = 10;
	transportMaxBackpacks = 0;
	offset[] = {0,2.5,0.5};
	removeoutput[] = {{"ItemGunRackKit",1}};
	nounderground = 0;
	upgradeBuilding[] = {"GunRack2_DZ",{"ItemToolbox","Handsaw_DZE","Hammer_DZE"},{{"ItemPlank",4},{"equip_nails",1}}};	
};

class GunRack2_DZ: Gunrack1
{
	armor = 400;
	scope = 2;
	displayName = $STR_EPOCH_GUNRACK2;
	vehicleClass = "DayZ Epoch Buildables";
	transportMaxWeapons = 40;
	transportMaxMagazines = 20;
	transportMaxBackpacks = 0;
	offset[] = {0,2.5,0.5};
	removeoutput[] = {{"ItemGunRackKit2",1}};
	nounderground = 0;
	constructioncount = 2;
};

class Fort_Crate_wood;
class WoodCrate_DZ: Fort_Crate_wood
{
	scope = 2;
	destrType = "DestructBuilding";
	offset[] = {0,2.5,0.5};
	armor = 200;
	displayName = $STR_EPOCH_WOODCRATE;
	vehicleClass = "DayZ Epoch Buildables";
	transportMaxMagazines = 50;
	transportMaxWeapons = 5;
	transportMaxBackpacks = 1;
	removeoutput[] = {{"ItemWoodCrateKit",1}};
	nounderground = 0;
	upgradeBuilding[] = {"WoodCrate2_DZ",{"ItemToolbox","Handsaw_DZE","Hammer_DZE"},{{"PartWoodPlywood",2},{"ItemPlank",2},{"equip_nails",1}}};	
};

class WoodCrate2_DZ: Fort_Crate_wood
{
	scope = 2;
	destrType = "DestructBuilding";
	offset[] = {0,2.5,0.5};
	armor = 400;
	displayName = $STR_EPOCH_WOODCRATE2;
	vehicleClass = "DayZ Epoch Buildables";
	transportMaxMagazines = 100;
	transportMaxWeapons = 10;
	transportMaxBackpacks = 2;
	removeoutput[] = {{"ItemWoodCrateKit2",1}};
	nounderground = 0;
	constructioncount = 2;
};

class Land_KBud;
class OutHouse_DZ: Land_KBud
{
	armor = 200;
	scope = 2;
	offset[] = {0,2.5,1};
	displayName = $STR_EPOCH_OUTHOUSE;
	vehicleClass = "DayZ Epoch Buildables";
	transportMaxMagazines = 4;
	transportMaxWeapons = 4;
	transportMaxBackpacks = 4;
	constructioncount = 2;
	class transportmagazines {};
};

class StorageShed_DZ: Land_Shed_M01
{
	armor = 1600;
	scope = 2;
	model = "\z\addons\dayz_epoch_v\base_building\storage\Shed_M02.p3d";
	offset[] = {0,4,0};
	displayName = $STR_EPOCH_STORAGESHED;
	vehicleClass = "DayZ Epoch Buildables";
	transportMaxMagazines = 400;
	transportMaxWeapons = 40;
	transportMaxBackpacks = 20;
	constructioncount = 6;
	GhostPreview = "StorageShed_Preview_DZ";	
	
	class UserActions
	{
		class CloseDoor
		{
			position = "";
			displayName = $STR_DN_OUT_C_DOOR;
			radius = 4;
			onlyForPlayer = 1;
			condition = "this animationPhase 'open' == 1";
			statement = "this animate ['open', 0];";
		};
		class OpenDoor
		{
			position = "";
			displayName = $STR_DN_OUT_O_DOOR;
			radius = 4;
			onlyForPlayer = 1;
			condition = "this animationPhase 'open' == 0";
			statement = "this animate ['open', 1];";
		};
	};
	
	upgradeBuilding[] = {"StorageShed2_DZ",{"ItemToolbox","ItemCrowbar","ItemSledge"},{{"equip_metal_sheet",4},{"ItemMetalSheet",2},{"ItemScrews",2}}};	
};
class StorageShed2_DZ: Land_Shed_M01
{
	armor = 3200;
	scope = 2;
	model = "\z\addons\dayz_epoch_v\base_building\storage\Shed_M02.p3d";
	offset[] = {0,4,0};
	displayName = $STR_EPOCH_STORAGESHED2;
	vehicleClass = "DayZ Epoch Buildables";
	transportMaxMagazines = 600;
	transportMaxWeapons = 60;
	transportMaxBackpacks = 30;
	constructioncount = 12;
	GhostPreview = "StorageShed_Preview_DZ";	
	
	class UserActions
	{
		class CloseDoor
		{
			position = "";
			displayName = $STR_DN_OUT_C_DOOR;
			radius = 4;
			onlyForPlayer = 1;
			condition = "this animationPhase 'open' == 1";
			statement = "this animate ['open', 0];";
		};
		class OpenDoor
		{
			position = "";
			displayName = $STR_DN_OUT_O_DOOR;
			radius = 4;
			onlyForPlayer = 1;
			condition = "this animationPhase 'open' == 0";
			statement = "this animate ['open', 1];";
		};
	};	
};

class Land_kulna;
class WoodShack_DZ: Land_kulna
{
	scope = 2;
	destrType = "DestructBuilding";
	offset[] = {0,4,1.3};
	armor = 800;
	displayName = $STR_EPOCH_WOODSHACK;
	vehicleClass = "DayZ Epoch Buildables";
	transportMaxMagazines = 100;
	transportMaxWeapons = 10;
	transportMaxBackpacks = 5;
	constructioncount = 4;
	nounderground = 0;
	upgradeBuilding[] = {"WoodShack2_DZ",{"ItemToolbox","Handsaw_DZE","Hammer_DZE"},{{"PartWoodPlywood",4},{"equip_nails",2}}};
};
class WoodShack2_DZ: Land_kulna
{
	scope = 2;
	destrType = "DestructBuilding";
	offset[] = {0,4,1.3};
	armor = 1600;
	displayName = $STR_EPOCH_WOODSHACK2;
	vehicleClass = "DayZ Epoch Buildables";
	transportMaxMagazines = 175;
	transportMaxWeapons = 20;
	transportMaxBackpacks = 10;
	constructioncount = 8;
	nounderground = 0;
};

class Land_Shed_wooden;
class Wooden_shed_DZ: Land_Shed_wooden
{
	scope = 2;
	destrType = "DestructBuilding";
	offset[] = {0,5,1};
	armor = 1000;
	displayName = $STR_EPOCH_NICEWOODSHED;
	vehicleClass = "DayZ Epoch Buildables";
	transportMaxMagazines = 200;
	transportMaxWeapons = 20;
	transportMaxBackpacks = 10;
	nounderground = 0;
	constructioncount = 5;
	upgradeBuilding[] = {"Wooden_shed2_DZ",{"ItemToolbox","Handsaw_DZE","Hammer_DZE"},{{"PartWoodPlywood",8},{"equip_nails",2}}};
};

class Wooden_shed2_DZ: Land_Shed_wooden
{
	scope = 2;
	destrType = "DestructBuilding";
	offset[] = {0,5,1};
	armor = 2000;
	displayName = $STR_EPOCH_NICEWOODSHED2;
	vehicleClass = "DayZ Epoch Buildables";
	transportMaxMagazines = 300;
	transportMaxWeapons = 30;
	transportMaxBackpacks = 15;
	nounderground = 0;
	constructioncount = 10;
};

class Advanced_WorkBench_DZ: BuiltItems
{
	scope = 2;
	destrType = "DestructBuilding";
	offset[] = {0,2,0};
	model = "\z\addons\dayz_epoch_v\props\workbench\workbench_2.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	transportMaxWeapons = 45;	
	transportMaxMagazines = 20;
	transportmaxbackpacks = 1;	
	armor = 400;
	displayName = $STR_EPOCH_WORKBENCH_ADVANCED;
	vehicleClass = "DayZ Epoch Buildables";
	maintainBuilding[] = {{"ItemPlank",2}};
	constructioncount = 3;
	removeoutput[] = {{"PartWoodPlywood",3},{"ItemPlank",3}};
	nounderground = 0;
};

class CookTripod_DZ: BuiltItems
{
	scope = 2;
	displayName = $STR_ITEM_NAME_COOKINGTRIPOD;
	offset[] = {0,2,0};
	destrType = "DestructBuilding";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	transportMaxWeapons = 0;	
	transportMaxMagazines = 4;
	transportmaxbackpacks = 0;
	armor = 500;
	model = "\z\addons\dayz_epoch_w\items\cook_tripod.p3d";
	vehicleClass = "DayZ Epoch Buildables";
	nounderground = 0;
	requireplot = 0;
	removeoutput[] = {{"cook_tripod_kit",1}};
};

class Stoneoven_DZ: BuiltItems 
{
	scope = 2;
	displayName = $STR_EPOCH_STONEOVEN;
	destrType = "DestructTree";
	offset[] = {0,1.5,0};
	model = "\z\addons\dayz_epoch_v\props\oven\oven.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 400;
	transportMaxWeapons = 1;	
	transportMaxMagazines = 35;
	transportmaxbackpacks = 0;
	constructioncount = 2;
	removeoutput[] = {{"stoneoven_kit",1}};
	nounderground = 0;
	vehicleClass = "DayZ Epoch Buildables";
};

class Commode_DZ: BuiltItems 
{
	scope = 2;
	model = "\z\addons\dayz_epoch_v\base_building\storage\case_bedroom_b";
	displayName = $STR_EPOCH_COMMODE;
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;	
	constructioncount = 1;
	transportMaxWeapons = 5;	
	transportMaxMagazines = 25;
	transportmaxbackpacks = 3;
	offset[] = {0,2.5,0.5};
	removeoutput[] = {{"commode_kit",1}};
	vehicleClass = "DayZ Epoch Buildables";
};
	
class Wardrobe_DZ: BuiltItems 
{
	scope = 2;
	model = "\z\addons\dayz_epoch_v\base_building\storage\Dhangar_whiteskrin";
	displayName = $STR_EPOCH_WARDROBE;
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;	
	constructioncount = 1;
	transportMaxWeapons = 5;	
	transportMaxMagazines = 25;
	transportmaxbackpacks = 3;
	offset[] = {0,2.5,0.5};
	removeoutput[] = {{"wardrobe_kit",1}};
	vehicleClass = "DayZ Epoch Buildables";
};	

class Fridge_DZ: BuiltItems 
{
	scope = 2;
	model = "\z\addons\dayz_epoch_v\base_building\storage\fridge";
	displayName = $STR_EPOCH_FRIDGE;
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;	
	constructioncount = 1;
	transportMaxWeapons = 7;	
	transportMaxMagazines = 35;
	transportmaxbackpacks = 3;
	offset[] = {0,2.5,0.5};
	removeoutput[] = {{"fridge_kit",1}};
	vehicleClass = "DayZ Epoch Buildables";
};

class Washing_Machine_DZ: BuiltItems 
{
	scope = 2;
	model = "\z\addons\dayz_epoch_v\base_building\storage\washing_machine";
	displayName = $STR_EPOCH_WASHINGMACHINE;
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;	
	constructioncount = 1;
	transportMaxWeapons = 2;	
	transportMaxMagazines = 15;
	transportmaxbackpacks = 3;
	offset[] = {0,2.5,0.5};
	removeoutput[] = {{"washing_machine_kit",1}};
	vehicleClass = "DayZ Epoch Buildables";
};	

class Server_Rack_DZ: BuiltItems 
{
	scope = 2;
	model = "\z\addons\dayz_epoch_v\props\server\dze_server";
	displayName = $STR_EPOCH_SERVERRACK;
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;	
	constructioncount = 1;
	transportMaxWeapons = 15;	
	transportMaxMagazines = 25;
	transportmaxbackpacks = 1;
	offset[] = {0,2.5,0.5};
	removeoutput[] = {{"server_rack_kit",1}};
	vehicleClass = "DayZ Epoch Buildables";
};	

class ATM_DZ: BuiltItems 
{
	scope = 2;
	model = "\z\addons\dayz_epoch_v\props\atm\dze_atm";
	displayName = $STR_EPOCH_ATM;
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;	
	constructioncount = 1;
	transportMaxWeapons = 5;	
	transportMaxMagazines = 35;
	transportmaxbackpacks = 4;
	offset[] = {0,2.5,1.5};
	removeoutput[] = {{"atm_kit",1}};
	vehicleClass = "DayZ Epoch Buildables";
};

class Armchair_DZ: BuiltItems 
{
	scope = 2;
	model = "\z\addons\dayz_epoch_v\base_building\storage\armchair";
	displayName = $STR_EPOCH_ARMCHAIR;
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;		
	constructioncount = 1;
	transportMaxWeapons = 1;	
	transportMaxMagazines = 5;
	transportmaxbackpacks = 1;	
	offset[] = {0,2.5,0};
	removeoutput[] = {{"armchair_kit",1}};
	vehicleClass = "DayZ Epoch Buildables";
};	

class Sofa_DZ: BuiltItems 
{
	scope = 2;
	model = "\z\addons\dayz_epoch_v\props\sofa\sofa";
	displayName = $STR_EPOCH_SOFA;
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;	
	constructioncount = 1;
	transportMaxWeapons = 5;	
	transportMaxMagazines = 35;
	transportmaxbackpacks = 3;
	offset[] = {0,2.5,0};
	removeoutput[] = {{"sofa_kit",1}};
	vehicleClass = "DayZ Epoch Buildables";
};	
	
class Arcade_DZ: BuiltItems 
{
	scope = 2;
	model = "\z\addons\dayz_epoch_v\props\arcade\neagea";
	displayName = $STR_EPOCH_ARCADE;
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;	
	constructioncount = 1;
	transportMaxWeapons = 15;	
	transportMaxMagazines = 35;
	transportmaxbackpacks = 5;	
	offset[] = {0,2.5,0};
	removeoutput[] = {{"arcade_kit",1}};
	vehicleClass = "DayZ Epoch Buildables";
};

class Vendmachine1_DZ: BuiltItems 
{
	scope = 2;
	model = "\z\addons\dayz_epoch_v\props\vending\vendmachine_2";
	displayName = $STR_EPOCH_VENDINGMACHINE1;
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;	
	constructioncount = 1;
	transportMaxWeapons = 15;	
	transportMaxMagazines = 45;
	transportmaxbackpacks = 5;
	offset[] = {0,2.5,0};
	removeoutput[] = {{"vendmachine1_kit",1}};
	vehicleClass = "DayZ Epoch Buildables";
};

class Vendmachine2_DZ: BuiltItems 
{
	scope = 2;
	model = "\z\addons\dayz_epoch_v\base_building\storage\vending_machine";
	displayName = $STR_EPOCH_VENDINGMACHINE2;
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;	
	constructioncount = 1;
	offset[] = {0,2.5,1.5};
	transportMaxWeapons = 15;	
	transportMaxMagazines = 45;
	transportmaxbackpacks = 5;
	removeoutput[] = {{"vendmachine2_kit",1}};
	vehicleClass = "DayZ Epoch Buildables";
};

class StorageCrate_DZ: BuiltItems 
{
	scope = 2;
	model = "z\addons\dayz_buildings\models\item_storage.p3d";
	displayName = $STR_EPOCH_STORAGECRATE;
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;	
	constructioncount = 1;
	offset[] = {0,2.5,0.3};
	transportMaxWeapons = 3;	
	transportMaxMagazines = 60;
	transportmaxbackpacks = 1;
	removeoutput[] = {{"storage_crate_kit",1}};
	vehicleClass = "DayZ Epoch Buildables";
};

class CamoStorageCrate_DZ: BuiltItems 
{
	scope = 2;
	model = "\z\addons\dayz_epoch_v\base_building\storage\dze_camo_ammobednaX.p3d";
	displayName = $STR_EPOCH_CAMO_STORAGE_CRATE;
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;	
	constructioncount = 3;
	offset[] = {0,3,0};
	transportMaxWeapons = 15;	
	transportMaxMagazines = 55;
	transportmaxbackpacks = 6;
	requireplot = 0;
	removeoutput[] = {{"camo_storage_crate_kit",1}};
	vehicleClass = "DayZ Epoch Buildables";
};