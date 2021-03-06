class AH1Z;
class AH1Z_DZ: AH1Z {
	side = 1;
	faction = "USMC";
	vehicleClass = "DayZ Epoch Vehicles";
	crew = ""; 
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;
	fuelCapacity = 1333;
	supplyRadius = 1.3;
	
	class Turrets;
	class MainTurret;	
	
	class EventHandlers: DefaultEventhandlers
	{
		fired = "_this call BIS_Effects_EH_Fired;";
		killed = "_this call BIS_Effects_EH_Killed;";
		engine = "if (_this select 1) then {(_this select 0) animate ['mainrotor_folded',1]; (_this select 0) animate ['mainrotor_unfolded',0]; (_this select 0) animate ['rotorshaft_unfolded',0];} else {_this select 0 setVariable ['engineOffTime',diag_tickTime,false];};"; //Unfold
	};
	class UserActions {
		class Fold {
			displayName = $STR_AM_PACK;
			displayNameDefault = $STR_AM_PACK;
			priority = 0;
			position = "zamerny";
			showWindow = 0;
			radius = 1;
			onlyForPlayer = 1;
			condition = "!isEngineOn this && {player == driver this} && {this animationPhase 'mainrotor_unfolded' == 0} && {diag_tickTime - (this getVariable ['engineOffTime',0]) > 20}";
			statement = "this animate ['mainrotor_folded',0]; this animate ['mainrotor_unfolded',1]; this animate ['rotorshaft_unfolded',1];";
		};
		class Unfold {
			displayName = $STR_AM_UNPACK;
			displayNameDefault = $STR_AM_UNPACK;
			priority = 0;
			position = "zamerny";
			showWindow = 0;
			radius = 1;
			onlyForPlayer = 1;
			condition = "!isEngineOn this && {player == driver this} && {this animationPhase 'mainrotor_unfolded' == 1}";
			statement = "this animate ['mainrotor_folded',1]; this animate ['mainrotor_unfolded',0]; this animate ['rotorshaft_unfolded',0];";
		};
	};
};

class AH1Z_DZE: AH1Z_DZ {
	magazines[] = {"120Rnd_CMFlareMagazine"};
	class Turrets: Turrets	{
		class MainTurret: MainTurret {
			magazines[] = {};
		};
	};
};