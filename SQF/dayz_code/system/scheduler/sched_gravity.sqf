// (c) facoptere@gmail.com, licensed to DayZMod for the community

sched_gravity_init = {
	// time, current position, time when freefall starts, position when freefall start, freefall in progress
	[ time, VisiblePositionASL player, time, VisiblePositionASL player, false, false]
};

sched_gravity = {
	if ((!(_this select 5) and !isNil 'Dayz_loginCompleted') and {(Dayz_loginCompleted)}) then {
		_this = [ time, VisiblePositionASL player, time, VisiblePositionASL player, false, true];
		//diag_log [ diag_tickTime, __FILE__, "freefall inited" ];
	};

	local _otime = _this select 0; 
	local _opos = _this select 1;
	local _offtime = _this select 2;
	local _offpos =  _this select 3;
	local _inprogress =  _this select 4;
	local _initDone = _this select 5;

	if (_initDone) then {
		// detect and save freefall start
		local _time = time;
		local _ppos = VisiblePositionASL player;
		local _fftime = _time;
		local _ffpos = +(_ppos);
		if ((_opos select 2) - (_ppos select 2) >= if (_inprogress) then {0.1} else {0.39} ) then {
			_fftime = _offtime;
			_ffpos = +(_offpos);
			_inprogress = true;
			//diag_log [ diag_tickTime, __FILE__, "global freefall is currently dh:", (_ffpos select 2) - (_ppos select 2), "dt:", _time - _fftime,"gravity:",2*((_ffpos select 2) - (_ppos select 2))/((0.00001 + _time - _fftime)^2) ,"m.s^-2" ];
			Dayz_freefall = [ _fftime, 0 max ((_ffpos select 2) - (_ppos select 2)), _time - _fftime ];
		}
		else {
			if (_inprogress) then {
				//diag_log [ diag_tickTime, __FILE__, "freefall reset, final freefall height is dh:", (_offpos select 2) - (_ppos select 2), "dt:", _time - _offtime, "gravity:",2*((_offpos select 2) - (_ppos select 2))/((_time - _offtime)^2) ,"m.s^-2" ];
				Dayz_freefall = [ _fftime, 0 max ((_offpos select 2) - (_ppos select 2)), _time - _offtime ];
			}
			else {
				Dayz_freefall = [ _time, 0, 0.1 ]; // not falling
			};
			_inprogress = false;
		};

		[ _time, _ppos, _fftime, _ffpos, _inprogress, _initDone ]
	}
	else { _this }
};
