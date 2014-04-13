#include <plug_common.h>

#include <ork/math/pmath.h>
#include <ork/math/half.h>

// Function checkers:
inline static bool _lg_typecheck_isFinite_overload_1(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_isFinite_overload_2(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_isFinite_overload_3(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_isInf_overload_1(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_isInf_overload_2(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_isInf_overload_3(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_isSubnormal_overload_1(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_isSubnormal_overload_2(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_isSubnormal_overload_3(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_isPointerAligned(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,3625364)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_alignPointer(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,3625364)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_degrees_overload_1(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_degrees_overload_2(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_degrees_overload_3(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_radians_overload_1(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_radians_overload_2(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_radians_overload_3(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TNUMBER ) return false;
	return true;
}


// Function binds:
// bool isFinite(double x)
static int _bind_isFinite_overload_1(lua_State *L) {
	if (!_lg_typecheck_isFinite_overload_1(L)) {
		luaL_error(L, "luna typecheck failed in bool isFinite(double x) function, expected prototype:\nbool isFinite(double x)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	double x=(double)lua_tonumber(L,1);

	bool lret = ::isFinite(x);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// bool isFinite(float x)
static int _bind_isFinite_overload_2(lua_State *L) {
	if (!_lg_typecheck_isFinite_overload_2(L)) {
		luaL_error(L, "luna typecheck failed in bool isFinite(float x) function, expected prototype:\nbool isFinite(float x)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	float x=(float)lua_tonumber(L,1);

	bool lret = ::isFinite(x);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// bool isFinite(double x)
static int _bind_isFinite_overload_3(lua_State *L) {
	if (!_lg_typecheck_isFinite_overload_3(L)) {
		luaL_error(L, "luna typecheck failed in bool isFinite(double x) function, expected prototype:\nbool isFinite(double x)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	double x=(double)lua_tonumber(L,1);

	bool lret = ::isFinite(x);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// Overload binder for isFinite
static int _bind_isFinite(lua_State *L) {
	if (_lg_typecheck_isFinite_overload_1(L)) return _bind_isFinite_overload_1(L);
	if (_lg_typecheck_isFinite_overload_2(L)) return _bind_isFinite_overload_2(L);
	if (_lg_typecheck_isFinite_overload_3(L)) return _bind_isFinite_overload_3(L);

	luaL_error(L, "error in function isFinite, cannot match any of the overloads for function isFinite:\n  isFinite(double)\n  isFinite(float)\n  isFinite(double)\n");
	return 0;
}

// bool isInf(double x)
static int _bind_isInf_overload_1(lua_State *L) {
	if (!_lg_typecheck_isInf_overload_1(L)) {
		luaL_error(L, "luna typecheck failed in bool isInf(double x) function, expected prototype:\nbool isInf(double x)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	double x=(double)lua_tonumber(L,1);

	bool lret = ::isInf(x);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// bool isInf(float x)
static int _bind_isInf_overload_2(lua_State *L) {
	if (!_lg_typecheck_isInf_overload_2(L)) {
		luaL_error(L, "luna typecheck failed in bool isInf(float x) function, expected prototype:\nbool isInf(float x)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	float x=(float)lua_tonumber(L,1);

	bool lret = ::isInf(x);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// bool isInf(double x)
static int _bind_isInf_overload_3(lua_State *L) {
	if (!_lg_typecheck_isInf_overload_3(L)) {
		luaL_error(L, "luna typecheck failed in bool isInf(double x) function, expected prototype:\nbool isInf(double x)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	double x=(double)lua_tonumber(L,1);

	bool lret = ::isInf(x);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// Overload binder for isInf
static int _bind_isInf(lua_State *L) {
	if (_lg_typecheck_isInf_overload_1(L)) return _bind_isInf_overload_1(L);
	if (_lg_typecheck_isInf_overload_2(L)) return _bind_isInf_overload_2(L);
	if (_lg_typecheck_isInf_overload_3(L)) return _bind_isInf_overload_3(L);

	luaL_error(L, "error in function isInf, cannot match any of the overloads for function isInf:\n  isInf(double)\n  isInf(float)\n  isInf(double)\n");
	return 0;
}

// bool isSubnormal(double x)
static int _bind_isSubnormal_overload_1(lua_State *L) {
	if (!_lg_typecheck_isSubnormal_overload_1(L)) {
		luaL_error(L, "luna typecheck failed in bool isSubnormal(double x) function, expected prototype:\nbool isSubnormal(double x)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	double x=(double)lua_tonumber(L,1);

	bool lret = ::isSubnormal(x);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// bool isSubnormal(float x)
static int _bind_isSubnormal_overload_2(lua_State *L) {
	if (!_lg_typecheck_isSubnormal_overload_2(L)) {
		luaL_error(L, "luna typecheck failed in bool isSubnormal(float x) function, expected prototype:\nbool isSubnormal(float x)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	float x=(float)lua_tonumber(L,1);

	bool lret = ::isSubnormal(x);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// bool isSubnormal(double x)
static int _bind_isSubnormal_overload_3(lua_State *L) {
	if (!_lg_typecheck_isSubnormal_overload_3(L)) {
		luaL_error(L, "luna typecheck failed in bool isSubnormal(double x) function, expected prototype:\nbool isSubnormal(double x)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	double x=(double)lua_tonumber(L,1);

	bool lret = ::isSubnormal(x);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// Overload binder for isSubnormal
static int _bind_isSubnormal(lua_State *L) {
	if (_lg_typecheck_isSubnormal_overload_1(L)) return _bind_isSubnormal_overload_1(L);
	if (_lg_typecheck_isSubnormal_overload_2(L)) return _bind_isSubnormal_overload_2(L);
	if (_lg_typecheck_isSubnormal_overload_3(L)) return _bind_isSubnormal_overload_3(L);

	luaL_error(L, "error in function isSubnormal, cannot match any of the overloads for function isSubnormal:\n  isSubnormal(double)\n  isSubnormal(float)\n  isSubnormal(double)\n");
	return 0;
}

// bool isPointerAligned(void * p, size_t alignment)
static int _bind_isPointerAligned(lua_State *L) {
	if (!_lg_typecheck_isPointerAligned(L)) {
		luaL_error(L, "luna typecheck failed in bool isPointerAligned(void * p, size_t alignment) function, expected prototype:\nbool isPointerAligned(void * p, size_t alignment)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	void* p=(Luna< void >::check(L,1));
	size_t alignment=(size_t)lua_tointeger(L,2);

	bool lret = ::isPointerAligned(p, alignment);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// void * alignPointer(void * p, size_t alignment)
static int _bind_alignPointer(lua_State *L) {
	if (!_lg_typecheck_alignPointer(L)) {
		luaL_error(L, "luna typecheck failed in void * alignPointer(void * p, size_t alignment) function, expected prototype:\nvoid * alignPointer(void * p, size_t alignment)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	void* p=(Luna< void >::check(L,1));
	size_t alignment=(size_t)lua_tointeger(L,2);

	void * lret = ::alignPointer(p, alignment);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< void >::push(L,lret,false);

	return 1;
}

// float degrees(float x)
static int _bind_degrees_overload_1(lua_State *L) {
	if (!_lg_typecheck_degrees_overload_1(L)) {
		luaL_error(L, "luna typecheck failed in float degrees(float x) function, expected prototype:\nfloat degrees(float x)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	float x=(float)lua_tonumber(L,1);

	float lret = ::degrees(x);
	lua_pushnumber(L,lret);

	return 1;
}

// double degrees(double x)
static int _bind_degrees_overload_2(lua_State *L) {
	if (!_lg_typecheck_degrees_overload_2(L)) {
		luaL_error(L, "luna typecheck failed in double degrees(double x) function, expected prototype:\ndouble degrees(double x)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	double x=(double)lua_tonumber(L,1);

	double lret = ::degrees(x);
	lua_pushnumber(L,lret);

	return 1;
}

// long double degrees(long double x)
static int _bind_degrees_overload_3(lua_State *L) {
	if (!_lg_typecheck_degrees_overload_3(L)) {
		luaL_error(L, "luna typecheck failed in long double degrees(long double x) function, expected prototype:\nlong double degrees(long double x)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	long double x=(long double)lua_tonumber(L,1);

	long double lret = ::degrees(x);
	lua_pushnumber(L,lret);

	return 1;
}

// Overload binder for degrees
static int _bind_degrees(lua_State *L) {
	if (_lg_typecheck_degrees_overload_1(L)) return _bind_degrees_overload_1(L);
	if (_lg_typecheck_degrees_overload_2(L)) return _bind_degrees_overload_2(L);
	if (_lg_typecheck_degrees_overload_3(L)) return _bind_degrees_overload_3(L);

	luaL_error(L, "error in function degrees, cannot match any of the overloads for function degrees:\n  degrees(float)\n  degrees(double)\n  degrees(long double)\n");
	return 0;
}

// float radians(float x)
static int _bind_radians_overload_1(lua_State *L) {
	if (!_lg_typecheck_radians_overload_1(L)) {
		luaL_error(L, "luna typecheck failed in float radians(float x) function, expected prototype:\nfloat radians(float x)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	float x=(float)lua_tonumber(L,1);

	float lret = ::radians(x);
	lua_pushnumber(L,lret);

	return 1;
}

// double radians(double x)
static int _bind_radians_overload_2(lua_State *L) {
	if (!_lg_typecheck_radians_overload_2(L)) {
		luaL_error(L, "luna typecheck failed in double radians(double x) function, expected prototype:\ndouble radians(double x)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	double x=(double)lua_tonumber(L,1);

	double lret = ::radians(x);
	lua_pushnumber(L,lret);

	return 1;
}

// long double radians(long double x)
static int _bind_radians_overload_3(lua_State *L) {
	if (!_lg_typecheck_radians_overload_3(L)) {
		luaL_error(L, "luna typecheck failed in long double radians(long double x) function, expected prototype:\nlong double radians(long double x)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	long double x=(long double)lua_tonumber(L,1);

	long double lret = ::radians(x);
	lua_pushnumber(L,lret);

	return 1;
}

// Overload binder for radians
static int _bind_radians(lua_State *L) {
	if (_lg_typecheck_radians_overload_1(L)) return _bind_radians_overload_1(L);
	if (_lg_typecheck_radians_overload_2(L)) return _bind_radians_overload_2(L);
	if (_lg_typecheck_radians_overload_3(L)) return _bind_radians_overload_3(L);

	luaL_error(L, "error in function radians, cannot match any of the overloads for function radians:\n  radians(float)\n  radians(double)\n  radians(long double)\n");
	return 0;
}


// Function checkers:
inline static bool _lg_typecheck_floatToHalf(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_halfToFloat(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}


// Function binds:
// unsigned short ork::floatToHalf(float x)
static int _bind_floatToHalf(lua_State *L) {
	if (!_lg_typecheck_floatToHalf(L)) {
		luaL_error(L, "luna typecheck failed in unsigned short ork::floatToHalf(float x) function, expected prototype:\nunsigned short ork::floatToHalf(float x)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	float x=(float)lua_tonumber(L,1);

	unsigned short lret = ork::floatToHalf(x);
	lua_pushnumber(L,lret);

	return 1;
}

// float ork::halfToFloat(unsigned short h)
static int _bind_halfToFloat(lua_State *L) {
	if (!_lg_typecheck_halfToFloat(L)) {
		luaL_error(L, "luna typecheck failed in float ork::halfToFloat(unsigned short h) function, expected prototype:\nfloat ork::halfToFloat(unsigned short h)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned short h=(unsigned short)lua_tointeger(L,1);

	float lret = ork::halfToFloat(h);
	lua_pushnumber(L,lret);

	return 1;
}


#ifdef __cplusplus
extern "C" {
#endif

void register_global_functions(lua_State* L) {
	luna_pushModule(L,"land");
	lua_pushcfunction(L, _bind_isFinite); lua_setfield(L,-2,"isFinite");
	lua_pushcfunction(L, _bind_isInf); lua_setfield(L,-2,"isInf");
	lua_pushcfunction(L, _bind_isSubnormal); lua_setfield(L,-2,"isSubnormal");
	lua_pushcfunction(L, _bind_isPointerAligned); lua_setfield(L,-2,"isPointerAligned");
	lua_pushcfunction(L, _bind_alignPointer); lua_setfield(L,-2,"alignPointer");
	lua_pushcfunction(L, _bind_degrees); lua_setfield(L,-2,"degrees");
	lua_pushcfunction(L, _bind_radians); lua_setfield(L,-2,"radians");
	luna_popModule(L);
	luna_pushModule(L,"ork");
	lua_pushcfunction(L, _bind_floatToHalf); lua_setfield(L,-2,"floatToHalf");
	lua_pushcfunction(L, _bind_halfToFloat); lua_setfield(L,-2,"halfToFloat");
	luna_popModule(L);
}

#ifdef __cplusplus
}
#endif

