#include <plug_common.h>

#include <kernel.h>
#include <lunaCommon.h>
#include <plug_extensions.h>
#include <osg/Referenced>

// Function checkers:
inline static bool _lg_typecheck_hasModuleData(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_doLog(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( lua_type(L,2)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_doLogV(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( lua_type(L,2)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_doTrace(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( lua_type(L,2)!=LUA_TSTRING ) return false;
	if( lua_type(L,3)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_doTraceV(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( lua_type(L,2)!=LUA_TSTRING ) return false;
	if( lua_type(L,3)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_loadModuleFromMemory_overload_1(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	if( lua_type(L,2)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_loadModuleFromMemory_overload_2(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	if( lua_type(L,2)!=LUA_TSTRING ) return false;
	if( lua_type(L,3)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_executeMain(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,95416160) ) return false;
	return true;
}

inline static bool _lg_typecheck_openLanes(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_getLuaID(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	return true;
}

inline static bool _lg_typecheck_showError(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_fromLightUserdata(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	return true;
}

inline static bool _lg_typecheck_toLightUserdata(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_newIntArray(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_deleteIntArray(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_getIntArrayAt(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,3625364)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_setIntArrayAt(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,3625364)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}


// Function binds:
// bool hasModuleData(const std::string & name)
static int _bind_hasModuleData(lua_State *L) {
	if (!_lg_typecheck_hasModuleData(L)) {
		luaL_error(L, "luna typecheck failed in bool hasModuleData(const std::string & name) function, expected prototype:\nbool hasModuleData(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	std::string name(lua_tostring(L,1),lua_objlen(L,1));

	bool lret = ::hasModuleData(name);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// void doLog(int level, const std::string & msg)
static int _bind_doLog(lua_State *L) {
	if (!_lg_typecheck_doLog(L)) {
		luaL_error(L, "luna typecheck failed in void doLog(int level, const std::string & msg) function, expected prototype:\nvoid doLog(int level, const std::string & msg)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int level=(int)lua_tointeger(L,1);
	std::string msg(lua_tostring(L,2),lua_objlen(L,2));

	::doLog(level, msg);

	return 0;
}

// void doLogV(int level, const std::string & msg)
static int _bind_doLogV(lua_State *L) {
	if (!_lg_typecheck_doLogV(L)) {
		luaL_error(L, "luna typecheck failed in void doLogV(int level, const std::string & msg) function, expected prototype:\nvoid doLogV(int level, const std::string & msg)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int level=(int)lua_tointeger(L,1);
	std::string msg(lua_tostring(L,2),lua_objlen(L,2));

	::doLogV(level, msg);

	return 0;
}

// void doTrace(int level, const std::string & trace, const std::string & msg)
static int _bind_doTrace(lua_State *L) {
	if (!_lg_typecheck_doTrace(L)) {
		luaL_error(L, "luna typecheck failed in void doTrace(int level, const std::string & trace, const std::string & msg) function, expected prototype:\nvoid doTrace(int level, const std::string & trace, const std::string & msg)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int level=(int)lua_tointeger(L,1);
	std::string trace(lua_tostring(L,2),lua_objlen(L,2));
	std::string msg(lua_tostring(L,3),lua_objlen(L,3));

	::doTrace(level, trace, msg);

	return 0;
}

// void doTraceV(int level, const std::string & trace, const std::string & msg)
static int _bind_doTraceV(lua_State *L) {
	if (!_lg_typecheck_doTraceV(L)) {
		luaL_error(L, "luna typecheck failed in void doTraceV(int level, const std::string & trace, const std::string & msg) function, expected prototype:\nvoid doTraceV(int level, const std::string & trace, const std::string & msg)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int level=(int)lua_tointeger(L,1);
	std::string trace(lua_tostring(L,2),lua_objlen(L,2));
	std::string msg(lua_tostring(L,3),lua_objlen(L,3));

	::doTraceV(level, trace, msg);

	return 0;
}

// int loadModuleFromMemory(const std::string & mname, const std::string & entryname, lua_State * L)
static int _bind_loadModuleFromMemory_overload_1(lua_State *L) {
	if (!_lg_typecheck_loadModuleFromMemory_overload_1(L)) {
		luaL_error(L, "luna typecheck failed in int loadModuleFromMemory(const std::string & mname, const std::string & entryname, lua_State * L) function, expected prototype:\nint loadModuleFromMemory(const std::string & mname, const std::string & entryname, lua_State * L)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	std::string mname(lua_tostring(L,1),lua_objlen(L,1));
	std::string entryname(lua_tostring(L,2),lua_objlen(L,2));

	return ::loadModuleFromMemory(mname, entryname, L);
}

// int loadModuleFromMemory(const std::string & data, const std::string & mname, const std::string & entryname, lua_State * L)
static int _bind_loadModuleFromMemory_overload_2(lua_State *L) {
	if (!_lg_typecheck_loadModuleFromMemory_overload_2(L)) {
		luaL_error(L, "luna typecheck failed in int loadModuleFromMemory(const std::string & data, const std::string & mname, const std::string & entryname, lua_State * L) function, expected prototype:\nint loadModuleFromMemory(const std::string & data, const std::string & mname, const std::string & entryname, lua_State * L)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	std::string data(lua_tostring(L,1),lua_objlen(L,1));
	std::string mname(lua_tostring(L,2),lua_objlen(L,2));
	std::string entryname(lua_tostring(L,3),lua_objlen(L,3));

	return ::loadModuleFromMemory(data, mname, entryname, L);
}

// Overload binder for loadModuleFromMemory
static int _bind_loadModuleFromMemory(lua_State *L) {
	if (_lg_typecheck_loadModuleFromMemory_overload_1(L)) return _bind_loadModuleFromMemory_overload_1(L);
	if (_lg_typecheck_loadModuleFromMemory_overload_2(L)) return _bind_loadModuleFromMemory_overload_2(L);

	luaL_error(L, "error in function loadModuleFromMemory, cannot match any of the overloads for function loadModuleFromMemory:\n  loadModuleFromMemory(const std::string &, const std::string &, lua_State *)\n  loadModuleFromMemory(const std::string &, const std::string &, const std::string &, lua_State *)\n");
	return 0;
}

// int executeMain(const std::vector< std::string > & args)
static int _bind_executeMain(lua_State *L) {
	if (!_lg_typecheck_executeMain(L)) {
		luaL_error(L, "luna typecheck failed in int executeMain(const std::vector< std::string > & args) function, expected prototype:\nint executeMain(const std::vector< std::string > & args)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
	}

	const std::vector< std::string >* args_ptr=(Luna< std::vector< std::string > >::check(L,1));
	if( !args_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg args in executeMain function");
	}
	const std::vector< std::string > & args=*args_ptr;

	int lret = ::executeMain(args);
	lua_pushnumber(L,lret);

	return 1;
}

// void openLanes(lua_State * L)
static int _bind_openLanes(lua_State *L) {
	if (!_lg_typecheck_openLanes(L)) {
		luaL_error(L, "luna typecheck failed in void openLanes(lua_State * L) function, expected prototype:\nvoid openLanes(lua_State * L)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	::openLanes(L);

	return 0;
}

// std::string getLuaID(lua_Any * dum, lua_State * L)
static int _bind_getLuaID(lua_State *L) {
	if (!_lg_typecheck_getLuaID(L)) {
		luaL_error(L, "luna typecheck failed in std::string getLuaID(lua_Any * dum, lua_State * L) function, expected prototype:\nstd::string getLuaID(lua_Any * dum, lua_State * L)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	std::string lret = ::getLuaID(NULL, L);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// int showError(const std::string & text)
static int _bind_showError(lua_State *L) {
	if (!_lg_typecheck_showError(L)) {
		luaL_error(L, "luna typecheck failed in int showError(const std::string & text) function, expected prototype:\nint showError(const std::string & text)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	std::string text(lua_tostring(L,1),lua_objlen(L,1));

	int lret = ::showError(text);
	lua_pushnumber(L,lret);

	return 1;
}

// void * fromLightUserdata(lua_Any * dum, lua_State * L)
static int _bind_fromLightUserdata(lua_State *L) {
	if (!_lg_typecheck_fromLightUserdata(L)) {
		luaL_error(L, "luna typecheck failed in void * fromLightUserdata(lua_Any * dum, lua_State * L) function, expected prototype:\nvoid * fromLightUserdata(lua_Any * dum, lua_State * L)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	void * lret = ::fromLightUserdata(NULL, L);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< void >::push(L,lret,false);

	return 1;
}

// int toLightUserdata(void * obj, lua_State * L)
static int _bind_toLightUserdata(lua_State *L) {
	if (!_lg_typecheck_toLightUserdata(L)) {
		luaL_error(L, "luna typecheck failed in int toLightUserdata(void * obj, lua_State * L) function, expected prototype:\nint toLightUserdata(void * obj, lua_State * L)\nClass arguments details:\narg 1 ID = 3625364\n\n%s",luna_dumpStack(L).c_str());
	}

	void* obj=(Luna< void >::check(L,1));

	return ::toLightUserdata(obj, L);
}

// void * newIntArray(unsigned int size)
static int _bind_newIntArray(lua_State *L) {
	if (!_lg_typecheck_newIntArray(L)) {
		luaL_error(L, "luna typecheck failed in void * newIntArray(unsigned int size) function, expected prototype:\nvoid * newIntArray(unsigned int size)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int size=(unsigned int)lua_tointeger(L,1);

	void * lret = ::newIntArray(size);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< void >::push(L,lret,false);

	return 1;
}

// void deleteIntArray(int * arr)
static int _bind_deleteIntArray(lua_State *L) {
	if (!_lg_typecheck_deleteIntArray(L)) {
		luaL_error(L, "luna typecheck failed in void deleteIntArray(int * arr) function, expected prototype:\nvoid deleteIntArray(int * arr)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int* arr=(int*)Luna< void >::check(L,1);

	::deleteIntArray(arr);

	return 0;
}

// int getIntArrayAt(int * arr, unsigned int index)
static int _bind_getIntArrayAt(lua_State *L) {
	if (!_lg_typecheck_getIntArrayAt(L)) {
		luaL_error(L, "luna typecheck failed in int getIntArrayAt(int * arr, unsigned int index) function, expected prototype:\nint getIntArrayAt(int * arr, unsigned int index)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int* arr=(int*)Luna< void >::check(L,1);
	unsigned int index=(unsigned int)lua_tointeger(L,2);

	int lret = ::getIntArrayAt(arr, index);
	lua_pushnumber(L,lret);

	return 1;
}

// void setIntArrayAt(int * arr, unsigned int index, int value)
static int _bind_setIntArrayAt(lua_State *L) {
	if (!_lg_typecheck_setIntArrayAt(L)) {
		luaL_error(L, "luna typecheck failed in void setIntArrayAt(int * arr, unsigned int index, int value) function, expected prototype:\nvoid setIntArrayAt(int * arr, unsigned int index, int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int* arr=(int*)Luna< void >::check(L,1);
	unsigned int index=(unsigned int)lua_tointeger(L,2);
	int value=(int)lua_tointeger(L,3);

	::setIntArrayAt(arr, index, value);

	return 0;
}


// Function checkers:
inline static bool _lg_typecheck_date_period_to_simple_string(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,8854841) ) return false;
	return true;
}

inline static bool _lg_typecheck_from_string(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_from_undelimited_string(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_date_to_simple_string(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,50186404) ) return false;
	return true;
}

inline static bool _lg_typecheck_date_to_iso_string(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,50186404) ) return false;
	return true;
}

inline static bool _lg_typecheck_date_to_iso_extended_string(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,50186404) ) return false;
	return true;
}


// Function binds:
// std::string boost::gregorian::to_simple_string(boost::gregorian::date_period & dp)
static int _bind_date_period_to_simple_string(lua_State *L) {
	if (!_lg_typecheck_date_period_to_simple_string(L)) {
		luaL_error(L, "luna typecheck failed in std::string boost::gregorian::to_simple_string(boost::gregorian::date_period & dp) function, expected prototype:\nstd::string boost::gregorian::to_simple_string(boost::gregorian::date_period & dp)\nClass arguments details:\narg 1 ID = 8854841\n\n%s",luna_dumpStack(L).c_str());
	}

	boost::gregorian::date_period* dp_ptr=(Luna< boost::gregorian::date_period >::check(L,1));
	if( !dp_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg dp in boost::gregorian::to_simple_string function");
	}
	boost::gregorian::date_period & dp=*dp_ptr;

	std::string lret = boost::gregorian::to_simple_string(dp);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// boost::gregorian::date boost::gregorian::from_string(std::string arg1)
static int _bind_from_string(lua_State *L) {
	if (!_lg_typecheck_from_string(L)) {
		luaL_error(L, "luna typecheck failed in boost::gregorian::date boost::gregorian::from_string(std::string arg1) function, expected prototype:\nboost::gregorian::date boost::gregorian::from_string(std::string arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	std::string _arg1(lua_tostring(L,1),lua_objlen(L,1));

	boost::gregorian::date stack_lret = boost::gregorian::from_string(_arg1);
	boost::gregorian::date* lret = new boost::gregorian::date(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< boost::gregorian::date >::push(L,lret,true);

	return 1;
}

// boost::gregorian::date boost::gregorian::from_undelimited_string(std::string arg1)
static int _bind_from_undelimited_string(lua_State *L) {
	if (!_lg_typecheck_from_undelimited_string(L)) {
		luaL_error(L, "luna typecheck failed in boost::gregorian::date boost::gregorian::from_undelimited_string(std::string arg1) function, expected prototype:\nboost::gregorian::date boost::gregorian::from_undelimited_string(std::string arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	std::string _arg1(lua_tostring(L,1),lua_objlen(L,1));

	boost::gregorian::date stack_lret = boost::gregorian::from_undelimited_string(_arg1);
	boost::gregorian::date* lret = new boost::gregorian::date(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< boost::gregorian::date >::push(L,lret,true);

	return 1;
}

// std::string boost::gregorian::to_simple_string(boost::gregorian::date & d)
static int _bind_date_to_simple_string(lua_State *L) {
	if (!_lg_typecheck_date_to_simple_string(L)) {
		luaL_error(L, "luna typecheck failed in std::string boost::gregorian::to_simple_string(boost::gregorian::date & d) function, expected prototype:\nstd::string boost::gregorian::to_simple_string(boost::gregorian::date & d)\nClass arguments details:\narg 1 ID = 50186404\n\n%s",luna_dumpStack(L).c_str());
	}

	boost::gregorian::date* d_ptr=(Luna< boost::gregorian::date >::check(L,1));
	if( !d_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg d in boost::gregorian::to_simple_string function");
	}
	boost::gregorian::date & d=*d_ptr;

	std::string lret = boost::gregorian::to_simple_string(d);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// std::string boost::gregorian::to_iso_string(boost::gregorian::date & d)
static int _bind_date_to_iso_string(lua_State *L) {
	if (!_lg_typecheck_date_to_iso_string(L)) {
		luaL_error(L, "luna typecheck failed in std::string boost::gregorian::to_iso_string(boost::gregorian::date & d) function, expected prototype:\nstd::string boost::gregorian::to_iso_string(boost::gregorian::date & d)\nClass arguments details:\narg 1 ID = 50186404\n\n%s",luna_dumpStack(L).c_str());
	}

	boost::gregorian::date* d_ptr=(Luna< boost::gregorian::date >::check(L,1));
	if( !d_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg d in boost::gregorian::to_iso_string function");
	}
	boost::gregorian::date & d=*d_ptr;

	std::string lret = boost::gregorian::to_iso_string(d);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// std::string boost::gregorian::to_iso_extended_string(boost::gregorian::date & d)
static int _bind_date_to_iso_extended_string(lua_State *L) {
	if (!_lg_typecheck_date_to_iso_extended_string(L)) {
		luaL_error(L, "luna typecheck failed in std::string boost::gregorian::to_iso_extended_string(boost::gregorian::date & d) function, expected prototype:\nstd::string boost::gregorian::to_iso_extended_string(boost::gregorian::date & d)\nClass arguments details:\narg 1 ID = 50186404\n\n%s",luna_dumpStack(L).c_str());
	}

	boost::gregorian::date* d_ptr=(Luna< boost::gregorian::date >::check(L,1));
	if( !d_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg d in boost::gregorian::to_iso_extended_string function");
	}
	boost::gregorian::date & d=*d_ptr;

	std::string lret = boost::gregorian::to_iso_extended_string(d);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}


// Function checkers:
inline static bool _lg_typecheck_local_day(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_universal_day(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}


// Function binds:
// boost::gregorian::date boost::gregorian::day_clock::local_day()
static int _bind_local_day(lua_State *L) {
	if (!_lg_typecheck_local_day(L)) {
		luaL_error(L, "luna typecheck failed in boost::gregorian::date boost::gregorian::day_clock::local_day() function, expected prototype:\nboost::gregorian::date boost::gregorian::day_clock::local_day()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	boost::gregorian::date stack_lret = boost::gregorian::day_clock::local_day();
	boost::gregorian::date* lret = new boost::gregorian::date(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< boost::gregorian::date >::push(L,lret,true);

	return 1;
}

// boost::gregorian::date boost::gregorian::day_clock::universal_day()
static int _bind_universal_day(lua_State *L) {
	if (!_lg_typecheck_universal_day(L)) {
		luaL_error(L, "luna typecheck failed in boost::gregorian::date boost::gregorian::day_clock::universal_day() function, expected prototype:\nboost::gregorian::date boost::gregorian::day_clock::universal_day()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	boost::gregorian::date stack_lret = boost::gregorian::day_clock::universal_day();
	boost::gregorian::date* lret = new boost::gregorian::date(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< boost::gregorian::date >::push(L,lret,true);

	return 1;
}


// Function checkers:
inline static bool _lg_typecheck_duration_from_string(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_to_simple_string_overload_1(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,3585892) ) return false;
	if( (!(Luna< boost::posix_time::time_duration >::check(L,1))) ) return false;
	return true;
}

inline static bool _lg_typecheck_to_simple_string_overload_2(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,16567808) ) return false;
	if( (!(Luna< boost::posix_time::ptime >::check(L,1))) ) return false;
	return true;
}

inline static bool _lg_typecheck_to_simple_string_overload_3(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,2249806) ) return false;
	if( (!(Luna< boost::posix_time::time_period >::check(L,1))) ) return false;
	return true;
}

inline static bool _lg_typecheck_to_iso_string_overload_1(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,3585892) ) return false;
	if( (!(Luna< boost::posix_time::time_duration >::check(L,1))) ) return false;
	return true;
}

inline static bool _lg_typecheck_to_iso_string_overload_2(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,16567808) ) return false;
	if( (!(Luna< boost::posix_time::ptime >::check(L,1))) ) return false;
	return true;
}

inline static bool _lg_typecheck_time_from_string(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_from_iso_string(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_to_iso_extended_string(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,16567808) ) return false;
	return true;
}


// Function binds:
// boost::posix_time::time_duration boost::posix_time::duration_from_string(std::string arg1)
static int _bind_duration_from_string(lua_State *L) {
	if (!_lg_typecheck_duration_from_string(L)) {
		luaL_error(L, "luna typecheck failed in boost::posix_time::time_duration boost::posix_time::duration_from_string(std::string arg1) function, expected prototype:\nboost::posix_time::time_duration boost::posix_time::duration_from_string(std::string arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	std::string _arg1(lua_tostring(L,1),lua_objlen(L,1));

	boost::posix_time::time_duration stack_lret = boost::posix_time::duration_from_string(_arg1);
	boost::posix_time::time_duration* lret = new boost::posix_time::time_duration(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< boost::posix_time::time_duration >::push(L,lret,true);

	return 1;
}

// std::string boost::posix_time::to_simple_string(boost::posix_time::time_duration & arg1)
static int _bind_to_simple_string_overload_1(lua_State *L) {
	if (!_lg_typecheck_to_simple_string_overload_1(L)) {
		luaL_error(L, "luna typecheck failed in std::string boost::posix_time::to_simple_string(boost::posix_time::time_duration & arg1) function, expected prototype:\nstd::string boost::posix_time::to_simple_string(boost::posix_time::time_duration & arg1)\nClass arguments details:\narg 1 ID = 3585892\n\n%s",luna_dumpStack(L).c_str());
	}

	boost::posix_time::time_duration* _arg1_ptr=(Luna< boost::posix_time::time_duration >::check(L,1));
	if( !_arg1_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in boost::posix_time::to_simple_string function");
	}
	boost::posix_time::time_duration & _arg1=*_arg1_ptr;

	std::string lret = boost::posix_time::to_simple_string(_arg1);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// std::string boost::posix_time::to_simple_string(boost::posix_time::ptime & arg1)
static int _bind_to_simple_string_overload_2(lua_State *L) {
	if (!_lg_typecheck_to_simple_string_overload_2(L)) {
		luaL_error(L, "luna typecheck failed in std::string boost::posix_time::to_simple_string(boost::posix_time::ptime & arg1) function, expected prototype:\nstd::string boost::posix_time::to_simple_string(boost::posix_time::ptime & arg1)\nClass arguments details:\narg 1 ID = 16567808\n\n%s",luna_dumpStack(L).c_str());
	}

	boost::posix_time::ptime* _arg1_ptr=(Luna< boost::posix_time::ptime >::check(L,1));
	if( !_arg1_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in boost::posix_time::to_simple_string function");
	}
	boost::posix_time::ptime & _arg1=*_arg1_ptr;

	std::string lret = boost::posix_time::to_simple_string(_arg1);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// std::string boost::posix_time::to_simple_string(boost::posix_time::time_period & dp)
static int _bind_to_simple_string_overload_3(lua_State *L) {
	if (!_lg_typecheck_to_simple_string_overload_3(L)) {
		luaL_error(L, "luna typecheck failed in std::string boost::posix_time::to_simple_string(boost::posix_time::time_period & dp) function, expected prototype:\nstd::string boost::posix_time::to_simple_string(boost::posix_time::time_period & dp)\nClass arguments details:\narg 1 ID = 2249806\n\n%s",luna_dumpStack(L).c_str());
	}

	boost::posix_time::time_period* dp_ptr=(Luna< boost::posix_time::time_period >::check(L,1));
	if( !dp_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg dp in boost::posix_time::to_simple_string function");
	}
	boost::posix_time::time_period & dp=*dp_ptr;

	std::string lret = boost::posix_time::to_simple_string(dp);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// Overload binder for boost::posix_time::to_simple_string
static int _bind_to_simple_string(lua_State *L) {
	if (_lg_typecheck_to_simple_string_overload_1(L)) return _bind_to_simple_string_overload_1(L);
	if (_lg_typecheck_to_simple_string_overload_2(L)) return _bind_to_simple_string_overload_2(L);
	if (_lg_typecheck_to_simple_string_overload_3(L)) return _bind_to_simple_string_overload_3(L);

	luaL_error(L, "error in function to_simple_string, cannot match any of the overloads for function to_simple_string:\n  to_simple_string(boost::posix_time::time_duration &)\n  to_simple_string(boost::posix_time::ptime &)\n  to_simple_string(boost::posix_time::time_period &)\n");
	return 0;
}

// std::string boost::posix_time::to_iso_string(boost::posix_time::time_duration arg1)
static int _bind_to_iso_string_overload_1(lua_State *L) {
	if (!_lg_typecheck_to_iso_string_overload_1(L)) {
		luaL_error(L, "luna typecheck failed in std::string boost::posix_time::to_iso_string(boost::posix_time::time_duration arg1) function, expected prototype:\nstd::string boost::posix_time::to_iso_string(boost::posix_time::time_duration arg1)\nClass arguments details:\narg 1 ID = 3585892\n\n%s",luna_dumpStack(L).c_str());
	}

	boost::posix_time::time_duration* _arg1_ptr=(Luna< boost::posix_time::time_duration >::check(L,1));
	if( !_arg1_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in boost::posix_time::to_iso_string function");
	}
	boost::posix_time::time_duration _arg1=*_arg1_ptr;

	std::string lret = boost::posix_time::to_iso_string(_arg1);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// std::string boost::posix_time::to_iso_string(boost::posix_time::ptime & arg1)
static int _bind_to_iso_string_overload_2(lua_State *L) {
	if (!_lg_typecheck_to_iso_string_overload_2(L)) {
		luaL_error(L, "luna typecheck failed in std::string boost::posix_time::to_iso_string(boost::posix_time::ptime & arg1) function, expected prototype:\nstd::string boost::posix_time::to_iso_string(boost::posix_time::ptime & arg1)\nClass arguments details:\narg 1 ID = 16567808\n\n%s",luna_dumpStack(L).c_str());
	}

	boost::posix_time::ptime* _arg1_ptr=(Luna< boost::posix_time::ptime >::check(L,1));
	if( !_arg1_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in boost::posix_time::to_iso_string function");
	}
	boost::posix_time::ptime & _arg1=*_arg1_ptr;

	std::string lret = boost::posix_time::to_iso_string(_arg1);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// Overload binder for boost::posix_time::to_iso_string
static int _bind_to_iso_string(lua_State *L) {
	if (_lg_typecheck_to_iso_string_overload_1(L)) return _bind_to_iso_string_overload_1(L);
	if (_lg_typecheck_to_iso_string_overload_2(L)) return _bind_to_iso_string_overload_2(L);

	luaL_error(L, "error in function to_iso_string, cannot match any of the overloads for function to_iso_string:\n  to_iso_string(boost::posix_time::time_duration)\n  to_iso_string(boost::posix_time::ptime &)\n");
	return 0;
}

// boost::posix_time::ptime boost::posix_time::time_from_string(std::string arg1)
static int _bind_time_from_string(lua_State *L) {
	if (!_lg_typecheck_time_from_string(L)) {
		luaL_error(L, "luna typecheck failed in boost::posix_time::ptime boost::posix_time::time_from_string(std::string arg1) function, expected prototype:\nboost::posix_time::ptime boost::posix_time::time_from_string(std::string arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	std::string _arg1(lua_tostring(L,1),lua_objlen(L,1));

	boost::posix_time::ptime stack_lret = boost::posix_time::time_from_string(_arg1);
	boost::posix_time::ptime* lret = new boost::posix_time::ptime(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< boost::posix_time::ptime >::push(L,lret,true);

	return 1;
}

// boost::posix_time::ptime boost::posix_time::from_iso_string(std::string arg1)
static int _bind_from_iso_string(lua_State *L) {
	if (!_lg_typecheck_from_iso_string(L)) {
		luaL_error(L, "luna typecheck failed in boost::posix_time::ptime boost::posix_time::from_iso_string(std::string arg1) function, expected prototype:\nboost::posix_time::ptime boost::posix_time::from_iso_string(std::string arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	std::string _arg1(lua_tostring(L,1),lua_objlen(L,1));

	boost::posix_time::ptime stack_lret = boost::posix_time::from_iso_string(_arg1);
	boost::posix_time::ptime* lret = new boost::posix_time::ptime(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< boost::posix_time::ptime >::push(L,lret,true);

	return 1;
}

// std::string boost::posix_time::to_iso_extended_string(boost::posix_time::ptime & arg1)
static int _bind_to_iso_extended_string(lua_State *L) {
	if (!_lg_typecheck_to_iso_extended_string(L)) {
		luaL_error(L, "luna typecheck failed in std::string boost::posix_time::to_iso_extended_string(boost::posix_time::ptime & arg1) function, expected prototype:\nstd::string boost::posix_time::to_iso_extended_string(boost::posix_time::ptime & arg1)\nClass arguments details:\narg 1 ID = 16567808\n\n%s",luna_dumpStack(L).c_str());
	}

	boost::posix_time::ptime* _arg1_ptr=(Luna< boost::posix_time::ptime >::check(L,1));
	if( !_arg1_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in boost::posix_time::to_iso_extended_string function");
	}
	boost::posix_time::ptime & _arg1=*_arg1_ptr;

	std::string lret = boost::posix_time::to_iso_extended_string(_arg1);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}


// Function checkers:
inline static bool _lg_typecheck_microsec_local_time(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_microsec_universal_time(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}


// Function binds:
// boost::posix_time::ptime boost::posix_time::microsec_clock::local_time()
static int _bind_microsec_local_time(lua_State *L) {
	if (!_lg_typecheck_microsec_local_time(L)) {
		luaL_error(L, "luna typecheck failed in boost::posix_time::ptime boost::posix_time::microsec_clock::local_time() function, expected prototype:\nboost::posix_time::ptime boost::posix_time::microsec_clock::local_time()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	boost::posix_time::ptime stack_lret = boost::posix_time::microsec_clock::local_time();
	boost::posix_time::ptime* lret = new boost::posix_time::ptime(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< boost::posix_time::ptime >::push(L,lret,true);

	return 1;
}

// boost::posix_time::ptime boost::posix_time::microsec_clock::universal_time()
static int _bind_microsec_universal_time(lua_State *L) {
	if (!_lg_typecheck_microsec_universal_time(L)) {
		luaL_error(L, "luna typecheck failed in boost::posix_time::ptime boost::posix_time::microsec_clock::universal_time() function, expected prototype:\nboost::posix_time::ptime boost::posix_time::microsec_clock::universal_time()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	boost::posix_time::ptime stack_lret = boost::posix_time::microsec_clock::universal_time();
	boost::posix_time::ptime* lret = new boost::posix_time::ptime(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< boost::posix_time::ptime >::push(L,lret,true);

	return 1;
}


// Function checkers:
inline static bool _lg_typecheck_second_local_time(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_second_universal_time(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}


// Function binds:
// boost::posix_time::ptime boost::posix_time::second_clock::local_time()
static int _bind_second_local_time(lua_State *L) {
	if (!_lg_typecheck_second_local_time(L)) {
		luaL_error(L, "luna typecheck failed in boost::posix_time::ptime boost::posix_time::second_clock::local_time() function, expected prototype:\nboost::posix_time::ptime boost::posix_time::second_clock::local_time()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	boost::posix_time::ptime stack_lret = boost::posix_time::second_clock::local_time();
	boost::posix_time::ptime* lret = new boost::posix_time::ptime(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< boost::posix_time::ptime >::push(L,lret,true);

	return 1;
}

// boost::posix_time::ptime boost::posix_time::second_clock::universal_time()
static int _bind_second_universal_time(lua_State *L) {
	if (!_lg_typecheck_second_universal_time(L)) {
		luaL_error(L, "luna typecheck failed in boost::posix_time::ptime boost::posix_time::second_clock::universal_time() function, expected prototype:\nboost::posix_time::ptime boost::posix_time::second_clock::universal_time()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	boost::posix_time::ptime stack_lret = boost::posix_time::second_clock::universal_time();
	boost::posix_time::ptime* lret = new boost::posix_time::ptime(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< boost::posix_time::ptime >::push(L,lret,true);

	return 1;
}


// Function checkers:
inline static bool _lg_typecheck_intrusive_ptr_add_ref(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
	return true;
}

inline static bool _lg_typecheck_intrusive_ptr_release(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
	return true;
}


// Function binds:
// void osg::intrusive_ptr_add_ref(osg::Referenced * p)
static int _bind_intrusive_ptr_add_ref(lua_State *L) {
	if (!_lg_typecheck_intrusive_ptr_add_ref(L)) {
		luaL_error(L, "luna typecheck failed in void osg::intrusive_ptr_add_ref(osg::Referenced * p) function, expected prototype:\nvoid osg::intrusive_ptr_add_ref(osg::Referenced * p)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
	}

	osg::Referenced* p=(Luna< osg::Referenced >::check(L,1));

	osg::intrusive_ptr_add_ref(p);

	return 0;
}

// void osg::intrusive_ptr_release(osg::Referenced * p)
static int _bind_intrusive_ptr_release(lua_State *L) {
	if (!_lg_typecheck_intrusive_ptr_release(L)) {
		luaL_error(L, "luna typecheck failed in void osg::intrusive_ptr_release(osg::Referenced * p) function, expected prototype:\nvoid osg::intrusive_ptr_release(osg::Referenced * p)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
	}

	osg::Referenced* p=(Luna< osg::Referenced >::check(L,1));

	osg::intrusive_ptr_release(p);

	return 0;
}


#ifdef __cplusplus
extern "C" {
#endif

void register_global_functions(lua_State* L) {
	luna_pushModule(L,"sgt");
	lua_pushcfunction(L, _bind_hasModuleData); lua_setfield(L,-2,"hasModuleData");
	lua_pushcfunction(L, _bind_doLog); lua_setfield(L,-2,"doLog");
	lua_pushcfunction(L, _bind_doLogV); lua_setfield(L,-2,"doLogV");
	lua_pushcfunction(L, _bind_doTrace); lua_setfield(L,-2,"doTrace");
	lua_pushcfunction(L, _bind_doTraceV); lua_setfield(L,-2,"doTraceV");
	lua_pushcfunction(L, _bind_loadModuleFromMemory); lua_setfield(L,-2,"loadModuleFromMemory");
	lua_pushcfunction(L, _bind_executeMain); lua_setfield(L,-2,"executeMain");
	lua_pushcfunction(L, _bind_openLanes); lua_setfield(L,-2,"openLanes");
	lua_pushcfunction(L, _bind_getLuaID); lua_setfield(L,-2,"getLuaID");
	lua_pushcfunction(L, _bind_showError); lua_setfield(L,-2,"showError");
	lua_pushcfunction(L, _bind_fromLightUserdata); lua_setfield(L,-2,"fromLightUserdata");
	lua_pushcfunction(L, _bind_toLightUserdata); lua_setfield(L,-2,"toLightUserdata");
	lua_pushcfunction(L, _bind_newIntArray); lua_setfield(L,-2,"newIntArray");
	lua_pushcfunction(L, _bind_deleteIntArray); lua_setfield(L,-2,"deleteIntArray");
	lua_pushcfunction(L, _bind_getIntArrayAt); lua_setfield(L,-2,"getIntArrayAt");
	lua_pushcfunction(L, _bind_setIntArrayAt); lua_setfield(L,-2,"setIntArrayAt");
	luna_popModule(L);
	luna_pushModule(L,"boost");
	lua_pushcfunction(L, _bind_date_period_to_simple_string); lua_setfield(L,-2,"date_period_to_simple_string");
	lua_pushcfunction(L, _bind_from_string); lua_setfield(L,-2,"from_string");
	lua_pushcfunction(L, _bind_from_undelimited_string); lua_setfield(L,-2,"from_undelimited_string");
	lua_pushcfunction(L, _bind_date_to_simple_string); lua_setfield(L,-2,"date_to_simple_string");
	lua_pushcfunction(L, _bind_date_to_iso_string); lua_setfield(L,-2,"date_to_iso_string");
	lua_pushcfunction(L, _bind_date_to_iso_extended_string); lua_setfield(L,-2,"date_to_iso_extended_string");
	lua_pushcfunction(L, _bind_local_day); lua_setfield(L,-2,"local_day");
	lua_pushcfunction(L, _bind_universal_day); lua_setfield(L,-2,"universal_day");
	lua_pushcfunction(L, _bind_duration_from_string); lua_setfield(L,-2,"duration_from_string");
	lua_pushcfunction(L, _bind_to_simple_string); lua_setfield(L,-2,"to_simple_string");
	lua_pushcfunction(L, _bind_to_iso_string); lua_setfield(L,-2,"to_iso_string");
	lua_pushcfunction(L, _bind_time_from_string); lua_setfield(L,-2,"time_from_string");
	lua_pushcfunction(L, _bind_from_iso_string); lua_setfield(L,-2,"from_iso_string");
	lua_pushcfunction(L, _bind_to_iso_extended_string); lua_setfield(L,-2,"to_iso_extended_string");
	lua_pushcfunction(L, _bind_microsec_local_time); lua_setfield(L,-2,"microsec_local_time");
	lua_pushcfunction(L, _bind_microsec_universal_time); lua_setfield(L,-2,"microsec_universal_time");
	lua_pushcfunction(L, _bind_second_local_time); lua_setfield(L,-2,"second_local_time");
	lua_pushcfunction(L, _bind_second_universal_time); lua_setfield(L,-2,"second_universal_time");
	luna_popModule(L);
	luna_pushModule(L,"osg");
	lua_pushcfunction(L, _bind_intrusive_ptr_add_ref); lua_setfield(L,-2,"intrusive_ptr_add_ref");
	lua_pushcfunction(L, _bind_intrusive_ptr_release); lua_setfield(L,-2,"intrusive_ptr_release");
	luna_popModule(L);
}

#ifdef __cplusplus
}
#endif

