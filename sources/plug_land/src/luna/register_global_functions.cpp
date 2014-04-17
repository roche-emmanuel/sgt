#include <plug_common.h>

#include <proland/util/mfs.h>
#include <ork/math/pmath.h>
#include <plug_extensions.h>
#include <ork/math/half.h>
#include <proland/math/color.h>
#include <proland/math/noise.h>
#include <proland/preprocess/terrain/Preprocess.h>
#include <proland/TerrainPlugin.h>
#include <W:/Cloud/Projects/sgt/sources/proland/sources/atmo/proland/preprocess/atmo/PreprocessAtmo.h>
#include <W:/Cloud/Projects/sgt/sources/proland/sources/ocean/proland/OceanPlugin.h>
#include <W:/Cloud/Projects/sgt/sources/proland/sources/forest/proland/ForestPlugin.h>
#include <W:/Cloud/Projects/sgt/sources/proland/sources/forest/proland/preprocess/trees/PreprocessTree.h>
#include <W:/Cloud/Projects/sgt/sources/proland/sources/graph/proland/GraphPlugin.h>
#include <W:/Cloud/Projects/sgt/sources/proland/sources/river/proland/RiverPlugin.h>
#include <W:/Cloud/Projects/sgt/sources/proland/sources/edit/proland/EditPlugin.h>

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

inline static bool _lg_typecheck_mfs_open(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,3625364)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( lua_type(L,3)!=LUA_TSTRING ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,83387491)) ) return false;
	return true;
}

inline static bool _lg_typecheck_mfs_lseek(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,83387491)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_mfs_read(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,83387491)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_mfs_write(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,83387491)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_mfs_size(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,83387491)) ) return false;
	return true;
}

inline static bool _lg_typecheck_mfs_unmap(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,83387491)) ) return false;
	return true;
}

inline static bool _lg_typecheck_mfs_close(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,83387491)) ) return false;
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

// int mfs_open(void * ptr, int size, char * mode, mfs_file * fd)
static int _bind_mfs_open(lua_State *L) {
	if (!_lg_typecheck_mfs_open(L)) {
		luaL_error(L, "luna typecheck failed in int mfs_open(void * ptr, int size, char * mode, mfs_file * fd) function, expected prototype:\nint mfs_open(void * ptr, int size, char * mode, mfs_file * fd)\nClass arguments details:\narg 4 ID = 83387491\n\n%s",luna_dumpStack(L).c_str());
	}

	void* ptr=(Luna< void >::check(L,1));
	int size=(int)lua_tointeger(L,2);
	char* mode=(char*)Luna< void >::check(L,3);
	mfs_file* fd=(Luna< mfs_file >::check(L,4));

	int lret = ::mfs_open(ptr, size, mode, fd);
	lua_pushnumber(L,lret);

	return 1;
}

// int mfs_lseek(mfs_file * fd, int offset, int whence)
static int _bind_mfs_lseek(lua_State *L) {
	if (!_lg_typecheck_mfs_lseek(L)) {
		luaL_error(L, "luna typecheck failed in int mfs_lseek(mfs_file * fd, int offset, int whence) function, expected prototype:\nint mfs_lseek(mfs_file * fd, int offset, int whence)\nClass arguments details:\narg 1 ID = 83387491\n\n%s",luna_dumpStack(L).c_str());
	}

	mfs_file* fd=(Luna< mfs_file >::check(L,1));
	int offset=(int)lua_tointeger(L,2);
	int whence=(int)lua_tointeger(L,3);

	int lret = ::mfs_lseek(fd, offset, whence);
	lua_pushnumber(L,lret);

	return 1;
}

// int mfs_read(mfs_file * fd, void * buf, int size)
static int _bind_mfs_read(lua_State *L) {
	if (!_lg_typecheck_mfs_read(L)) {
		luaL_error(L, "luna typecheck failed in int mfs_read(mfs_file * fd, void * buf, int size) function, expected prototype:\nint mfs_read(mfs_file * fd, void * buf, int size)\nClass arguments details:\narg 1 ID = 83387491\n\n%s",luna_dumpStack(L).c_str());
	}

	mfs_file* fd=(Luna< mfs_file >::check(L,1));
	void* buf=(Luna< void >::check(L,2));
	int size=(int)lua_tointeger(L,3);

	int lret = ::mfs_read(fd, buf, size);
	lua_pushnumber(L,lret);

	return 1;
}

// int mfs_write(mfs_file * fd, void * buf, int size)
static int _bind_mfs_write(lua_State *L) {
	if (!_lg_typecheck_mfs_write(L)) {
		luaL_error(L, "luna typecheck failed in int mfs_write(mfs_file * fd, void * buf, int size) function, expected prototype:\nint mfs_write(mfs_file * fd, void * buf, int size)\nClass arguments details:\narg 1 ID = 83387491\n\n%s",luna_dumpStack(L).c_str());
	}

	mfs_file* fd=(Luna< mfs_file >::check(L,1));
	void* buf=(Luna< void >::check(L,2));
	int size=(int)lua_tointeger(L,3);

	int lret = ::mfs_write(fd, buf, size);
	lua_pushnumber(L,lret);

	return 1;
}

// int mfs_size(mfs_file * fd)
static int _bind_mfs_size(lua_State *L) {
	if (!_lg_typecheck_mfs_size(L)) {
		luaL_error(L, "luna typecheck failed in int mfs_size(mfs_file * fd) function, expected prototype:\nint mfs_size(mfs_file * fd)\nClass arguments details:\narg 1 ID = 83387491\n\n%s",luna_dumpStack(L).c_str());
	}

	mfs_file* fd=(Luna< mfs_file >::check(L,1));

	int lret = ::mfs_size(fd);
	lua_pushnumber(L,lret);

	return 1;
}

// int mfs_unmap(mfs_file * fd)
static int _bind_mfs_unmap(lua_State *L) {
	if (!_lg_typecheck_mfs_unmap(L)) {
		luaL_error(L, "luna typecheck failed in int mfs_unmap(mfs_file * fd) function, expected prototype:\nint mfs_unmap(mfs_file * fd)\nClass arguments details:\narg 1 ID = 83387491\n\n%s",luna_dumpStack(L).c_str());
	}

	mfs_file* fd=(Luna< mfs_file >::check(L,1));

	int lret = ::mfs_unmap(fd);
	lua_pushnumber(L,lret);

	return 1;
}

// int mfs_close(mfs_file * fd)
static int _bind_mfs_close(lua_State *L) {
	if (!_lg_typecheck_mfs_close(L)) {
		luaL_error(L, "luna typecheck failed in int mfs_close(mfs_file * fd) function, expected prototype:\nint mfs_close(mfs_file * fd)\nClass arguments details:\narg 1 ID = 83387491\n\n%s",luna_dumpStack(L).c_str());
	}

	mfs_file* fd=(Luna< mfs_file >::check(L,1));

	int lret = ::mfs_close(fd);
	lua_pushnumber(L,lret);

	return 1;
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
inline static bool _lg_typecheck_initGlew(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}


// Function binds:
// void land::initGlew()
static int _bind_initGlew(lua_State *L) {
	if (!_lg_typecheck_initGlew(L)) {
		luaL_error(L, "luna typecheck failed in void land::initGlew() function, expected prototype:\nvoid land::initGlew()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	land::initGlew();

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


// Function checkers:
inline static bool _lg_typecheck_rgb2hsl(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,81304271) ) return false;
	return true;
}

inline static bool _lg_typecheck_hsl2rgb(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,81304271) ) return false;
	return true;
}

inline static bool _lg_typecheck_dcolor(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<1 || luatop>2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,81304271) ) return false;
	if( luatop>1 && !Luna<void>::has_uniqueid(L,2,81304271) ) return false;
	return true;
}

inline static bool _lg_typecheck_lrandom(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_frandom(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_grandom(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( lua_type(L,1)!=LUA_TNUMBER ) return false;
	if( lua_type(L,2)!=LUA_TNUMBER ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_cnoise_overload_1(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<2 || luatop>3 ) return false;

	if( lua_type(L,1)!=LUA_TNUMBER ) return false;
	if( lua_type(L,2)!=LUA_TNUMBER ) return false;
	if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_cnoise_overload_2(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<3 || luatop>4 ) return false;

	if( lua_type(L,1)!=LUA_TNUMBER ) return false;
	if( lua_type(L,2)!=LUA_TNUMBER ) return false;
	if( lua_type(L,3)!=LUA_TNUMBER ) return false;
	if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	return true;
}

inline static bool _lg_typecheck_snoise_overload_1(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<2 || luatop>3 ) return false;

	if( lua_type(L,1)!=LUA_TNUMBER ) return false;
	if( lua_type(L,2)!=LUA_TNUMBER ) return false;
	if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_snoise_overload_2(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<3 || luatop>4 ) return false;

	if( lua_type(L,1)!=LUA_TNUMBER ) return false;
	if( lua_type(L,2)!=LUA_TNUMBER ) return false;
	if( lua_type(L,3)!=LUA_TNUMBER ) return false;
	if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	return true;
}

inline static bool _lg_typecheck_snoise_overload_3(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<4 || luatop>5 ) return false;

	if( lua_type(L,1)!=LUA_TNUMBER ) return false;
	if( lua_type(L,2)!=LUA_TNUMBER ) return false;
	if( lua_type(L,3)!=LUA_TNUMBER ) return false;
	if( lua_type(L,4)!=LUA_TNUMBER ) return false;
	if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	return true;
}

inline static bool _lg_typecheck_preprocessDem(lua_State *L) {
	if( lua_gettop(L)!=7 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,3893247)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( lua_type(L,5)!=LUA_TSTRING ) return false;
	if( lua_type(L,6)!=LUA_TSTRING ) return false;
	if( lua_type(L,7)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_preprocessSphericalDem(lua_State *L) {
	if( lua_gettop(L)!=7 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,3893247)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( lua_type(L,5)!=LUA_TSTRING ) return false;
	if( lua_type(L,6)!=LUA_TSTRING ) return false;
	if( lua_type(L,7)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_preprocessSphericalAperture(lua_State *L) {
	if( lua_gettop(L)!=6 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( lua_type(L,5)!=LUA_TSTRING ) return false;
	if( lua_type(L,6)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_initTerrainPlugin(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_preprocessAtmo(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,84217978) ) return false;
	if( lua_type(L,2)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_initOceanPlugin(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_initForestPlugin(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_mergeTreeTables(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	if( lua_type(L,2)!=LUA_TSTRING ) return false;
	if( lua_type(L,3)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_preprocessMultisample(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_initGraphPlugin(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_initRiverPlugin(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_initEditPlugin(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}


// Function binds:
// ork::vec3f proland::rgb2hsl(const ork::vec3f & rgb)
static int _bind_rgb2hsl(lua_State *L) {
	if (!_lg_typecheck_rgb2hsl(L)) {
		luaL_error(L, "luna typecheck failed in ork::vec3f proland::rgb2hsl(const ork::vec3f & rgb) function, expected prototype:\nork::vec3f proland::rgb2hsl(const ork::vec3f & rgb)\nClass arguments details:\narg 1 ID = 81304271\n\n%s",luna_dumpStack(L).c_str());
	}

	const ork::vec3f* rgb_ptr=(Luna< ork::vec3f >::check(L,1));
	if( !rgb_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg rgb in proland::rgb2hsl function");
	}
	const ork::vec3f & rgb=*rgb_ptr;

	ork::vec3f stack_lret = proland::rgb2hsl(rgb);
	ork::vec3f* lret = new ork::vec3f(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< ork::vec3f >::push(L,lret,true);

	return 1;
}

// ork::vec3f proland::hsl2rgb(const ork::vec3f & hsl)
static int _bind_hsl2rgb(lua_State *L) {
	if (!_lg_typecheck_hsl2rgb(L)) {
		luaL_error(L, "luna typecheck failed in ork::vec3f proland::hsl2rgb(const ork::vec3f & hsl) function, expected prototype:\nork::vec3f proland::hsl2rgb(const ork::vec3f & hsl)\nClass arguments details:\narg 1 ID = 81304271\n\n%s",luna_dumpStack(L).c_str());
	}

	const ork::vec3f* hsl_ptr=(Luna< ork::vec3f >::check(L,1));
	if( !hsl_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg hsl in proland::hsl2rgb function");
	}
	const ork::vec3f & hsl=*hsl_ptr;

	ork::vec3f stack_lret = proland::hsl2rgb(hsl);
	ork::vec3f* lret = new ork::vec3f(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< ork::vec3f >::push(L,lret,true);

	return 1;
}

// ork::mat3f proland::dcolor(const ork::vec3f & rgb, const ork::vec3f & amp = ork::vec3f (1/12.0f, 1/3.0f, 1/6.0f))
static int _bind_dcolor(lua_State *L) {
	if (!_lg_typecheck_dcolor(L)) {
		luaL_error(L, "luna typecheck failed in ork::mat3f proland::dcolor(const ork::vec3f & rgb, const ork::vec3f & amp = ork::vec3f (1/12.0f, 1/3.0f, 1/6.0f)) function, expected prototype:\nork::mat3f proland::dcolor(const ork::vec3f & rgb, const ork::vec3f & amp = ork::vec3f (1/12.0f, 1/3.0f, 1/6.0f))\nClass arguments details:\narg 1 ID = 81304271\narg 2 ID = 81304271\n\n%s",luna_dumpStack(L).c_str());
	}

	int luatop = lua_gettop(L);

	const ork::vec3f* rgb_ptr=(Luna< ork::vec3f >::check(L,1));
	if( !rgb_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg rgb in proland::dcolor function");
	}
	const ork::vec3f & rgb=*rgb_ptr;
	const ork::vec3f* amp_ptr=luatop>1 ? (Luna< ork::vec3f >::check(L,2)) : NULL;
	if( luatop>1 && !amp_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg amp in proland::dcolor function");
	}
	const ork::vec3f & amp=luatop>1 ? *amp_ptr : (const ork::vec3f&)ork::vec3f (1/12.0f, 1/3.0f, 1/6.0f);

	ork::mat3f stack_lret = proland::dcolor(rgb, amp);
	ork::mat3f* lret = new ork::mat3f(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< ork::mat3f >::push(L,lret,true);

	return 1;
}

// long proland::lrandom(long * seed)
static int _bind_lrandom(lua_State *L) {
	if (!_lg_typecheck_lrandom(L)) {
		luaL_error(L, "luna typecheck failed in long proland::lrandom(long * seed) function, expected prototype:\nlong proland::lrandom(long * seed)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	long* seed=(long*)Luna< void >::check(L,1);

	long lret = proland::lrandom(seed);
	lua_pushnumber(L,lret);

	return 1;
}

// float proland::frandom(long * seed)
static int _bind_frandom(lua_State *L) {
	if (!_lg_typecheck_frandom(L)) {
		luaL_error(L, "luna typecheck failed in float proland::frandom(long * seed) function, expected prototype:\nfloat proland::frandom(long * seed)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	long* seed=(long*)Luna< void >::check(L,1);

	float lret = proland::frandom(seed);
	lua_pushnumber(L,lret);

	return 1;
}

// float proland::grandom(float mean, float stdDeviation, long * seed)
static int _bind_grandom(lua_State *L) {
	if (!_lg_typecheck_grandom(L)) {
		luaL_error(L, "luna typecheck failed in float proland::grandom(float mean, float stdDeviation, long * seed) function, expected prototype:\nfloat proland::grandom(float mean, float stdDeviation, long * seed)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	float mean=(float)lua_tonumber(L,1);
	float stdDeviation=(float)lua_tonumber(L,2);
	long* seed=(long*)Luna< void >::check(L,3);

	float lret = proland::grandom(mean, stdDeviation, seed);
	lua_pushnumber(L,lret);

	return 1;
}

// float proland::cnoise(float x, float y, int P = 0)
static int _bind_cnoise_overload_1(lua_State *L) {
	if (!_lg_typecheck_cnoise_overload_1(L)) {
		luaL_error(L, "luna typecheck failed in float proland::cnoise(float x, float y, int P = 0) function, expected prototype:\nfloat proland::cnoise(float x, float y, int P = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int luatop = lua_gettop(L);

	float x=(float)lua_tonumber(L,1);
	float y=(float)lua_tonumber(L,2);
	int P=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;

	float lret = proland::cnoise(x, y, P);
	lua_pushnumber(L,lret);

	return 1;
}

// float proland::cnoise(float x, float y, float z, int P = 0)
static int _bind_cnoise_overload_2(lua_State *L) {
	if (!_lg_typecheck_cnoise_overload_2(L)) {
		luaL_error(L, "luna typecheck failed in float proland::cnoise(float x, float y, float z, int P = 0) function, expected prototype:\nfloat proland::cnoise(float x, float y, float z, int P = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int luatop = lua_gettop(L);

	float x=(float)lua_tonumber(L,1);
	float y=(float)lua_tonumber(L,2);
	float z=(float)lua_tonumber(L,3);
	int P=luatop>3 ? (int)lua_tointeger(L,4) : (int)0;

	float lret = proland::cnoise(x, y, z, P);
	lua_pushnumber(L,lret);

	return 1;
}

// Overload binder for proland::cnoise
static int _bind_cnoise(lua_State *L) {
	if (_lg_typecheck_cnoise_overload_1(L)) return _bind_cnoise_overload_1(L);
	if (_lg_typecheck_cnoise_overload_2(L)) return _bind_cnoise_overload_2(L);

	luaL_error(L, "error in function cnoise, cannot match any of the overloads for function cnoise:\n  cnoise(float, float, int)\n  cnoise(float, float, float, int)\n");
	return 0;
}

// float proland::snoise(float x, float y, int P = 0)
static int _bind_snoise_overload_1(lua_State *L) {
	if (!_lg_typecheck_snoise_overload_1(L)) {
		luaL_error(L, "luna typecheck failed in float proland::snoise(float x, float y, int P = 0) function, expected prototype:\nfloat proland::snoise(float x, float y, int P = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int luatop = lua_gettop(L);

	float x=(float)lua_tonumber(L,1);
	float y=(float)lua_tonumber(L,2);
	int P=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;

	float lret = proland::snoise(x, y, P);
	lua_pushnumber(L,lret);

	return 1;
}

// float proland::snoise(float x, float y, float z, int P = 0)
static int _bind_snoise_overload_2(lua_State *L) {
	if (!_lg_typecheck_snoise_overload_2(L)) {
		luaL_error(L, "luna typecheck failed in float proland::snoise(float x, float y, float z, int P = 0) function, expected prototype:\nfloat proland::snoise(float x, float y, float z, int P = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int luatop = lua_gettop(L);

	float x=(float)lua_tonumber(L,1);
	float y=(float)lua_tonumber(L,2);
	float z=(float)lua_tonumber(L,3);
	int P=luatop>3 ? (int)lua_tointeger(L,4) : (int)0;

	float lret = proland::snoise(x, y, z, P);
	lua_pushnumber(L,lret);

	return 1;
}

// float proland::snoise(float x, float y, float z, float w, int P = 0)
static int _bind_snoise_overload_3(lua_State *L) {
	if (!_lg_typecheck_snoise_overload_3(L)) {
		luaL_error(L, "luna typecheck failed in float proland::snoise(float x, float y, float z, float w, int P = 0) function, expected prototype:\nfloat proland::snoise(float x, float y, float z, float w, int P = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int luatop = lua_gettop(L);

	float x=(float)lua_tonumber(L,1);
	float y=(float)lua_tonumber(L,2);
	float z=(float)lua_tonumber(L,3);
	float w=(float)lua_tonumber(L,4);
	int P=luatop>4 ? (int)lua_tointeger(L,5) : (int)0;

	float lret = proland::snoise(x, y, z, w, P);
	lua_pushnumber(L,lret);

	return 1;
}

// Overload binder for proland::snoise
static int _bind_snoise(lua_State *L) {
	if (_lg_typecheck_snoise_overload_1(L)) return _bind_snoise_overload_1(L);
	if (_lg_typecheck_snoise_overload_2(L)) return _bind_snoise_overload_2(L);
	if (_lg_typecheck_snoise_overload_3(L)) return _bind_snoise_overload_3(L);

	luaL_error(L, "error in function snoise, cannot match any of the overloads for function snoise:\n  snoise(float, float, int)\n  snoise(float, float, float, int)\n  snoise(float, float, float, float, int)\n");
	return 0;
}

// void proland::preprocessDem(proland::InputMap * src, int dstMinTileSize, int dstTileSize, int dstMaxLevel, const string & dstFolder, const string & tmpFolder, float residualScale)
static int _bind_preprocessDem(lua_State *L) {
	if (!_lg_typecheck_preprocessDem(L)) {
		luaL_error(L, "luna typecheck failed in void proland::preprocessDem(proland::InputMap * src, int dstMinTileSize, int dstTileSize, int dstMaxLevel, const string & dstFolder, const string & tmpFolder, float residualScale) function, expected prototype:\nvoid proland::preprocessDem(proland::InputMap * src, int dstMinTileSize, int dstTileSize, int dstMaxLevel, const string & dstFolder, const string & tmpFolder, float residualScale)\nClass arguments details:\narg 1 ID = 3893247\n\n%s",luna_dumpStack(L).c_str());
	}

	proland::InputMap* src=(Luna< proland::InputMap >::check(L,1));
	int dstMinTileSize=(int)lua_tointeger(L,2);
	int dstTileSize=(int)lua_tointeger(L,3);
	int dstMaxLevel=(int)lua_tointeger(L,4);
	std::string dstFolder(lua_tostring(L,5),lua_objlen(L,5));
	std::string tmpFolder(lua_tostring(L,6),lua_objlen(L,6));
	float residualScale=(float)lua_tonumber(L,7);

	proland::preprocessDem(src, dstMinTileSize, dstTileSize, dstMaxLevel, dstFolder, tmpFolder, residualScale);

	return 0;
}

// void proland::preprocessSphericalDem(proland::InputMap * src, int dstMinTileSize, int dstTileSize, int dstMaxLevel, const string & dstFolder, const string & tmpFolder, float residualScale)
static int _bind_preprocessSphericalDem(lua_State *L) {
	if (!_lg_typecheck_preprocessSphericalDem(L)) {
		luaL_error(L, "luna typecheck failed in void proland::preprocessSphericalDem(proland::InputMap * src, int dstMinTileSize, int dstTileSize, int dstMaxLevel, const string & dstFolder, const string & tmpFolder, float residualScale) function, expected prototype:\nvoid proland::preprocessSphericalDem(proland::InputMap * src, int dstMinTileSize, int dstTileSize, int dstMaxLevel, const string & dstFolder, const string & tmpFolder, float residualScale)\nClass arguments details:\narg 1 ID = 3893247\n\n%s",luna_dumpStack(L).c_str());
	}

	proland::InputMap* src=(Luna< proland::InputMap >::check(L,1));
	int dstMinTileSize=(int)lua_tointeger(L,2);
	int dstTileSize=(int)lua_tointeger(L,3);
	int dstMaxLevel=(int)lua_tointeger(L,4);
	std::string dstFolder(lua_tostring(L,5),lua_objlen(L,5));
	std::string tmpFolder(lua_tostring(L,6),lua_objlen(L,6));
	float residualScale=(float)lua_tonumber(L,7);

	proland::preprocessSphericalDem(src, dstMinTileSize, dstTileSize, dstMaxLevel, dstFolder, tmpFolder, residualScale);

	return 0;
}

// void proland::preprocessSphericalAperture(const string & srcFolder, int minLevel, int maxLevel, int samples, const string & dstFolder, const string & tmpFolder)
static int _bind_preprocessSphericalAperture(lua_State *L) {
	if (!_lg_typecheck_preprocessSphericalAperture(L)) {
		luaL_error(L, "luna typecheck failed in void proland::preprocessSphericalAperture(const string & srcFolder, int minLevel, int maxLevel, int samples, const string & dstFolder, const string & tmpFolder) function, expected prototype:\nvoid proland::preprocessSphericalAperture(const string & srcFolder, int minLevel, int maxLevel, int samples, const string & dstFolder, const string & tmpFolder)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	std::string srcFolder(lua_tostring(L,1),lua_objlen(L,1));
	int minLevel=(int)lua_tointeger(L,2);
	int maxLevel=(int)lua_tointeger(L,3);
	int samples=(int)lua_tointeger(L,4);
	std::string dstFolder(lua_tostring(L,5),lua_objlen(L,5));
	std::string tmpFolder(lua_tostring(L,6),lua_objlen(L,6));

	proland::preprocessSphericalAperture(srcFolder, minLevel, maxLevel, samples, dstFolder, tmpFolder);

	return 0;
}

// void proland::initTerrainPlugin()
static int _bind_initTerrainPlugin(lua_State *L) {
	if (!_lg_typecheck_initTerrainPlugin(L)) {
		luaL_error(L, "luna typecheck failed in void proland::initTerrainPlugin() function, expected prototype:\nvoid proland::initTerrainPlugin()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	proland::initTerrainPlugin();

	return 0;
}

// void proland::preprocessAtmo(const proland::AtmoParameters & params, const char * output)
static int _bind_preprocessAtmo(lua_State *L) {
	if (!_lg_typecheck_preprocessAtmo(L)) {
		luaL_error(L, "luna typecheck failed in void proland::preprocessAtmo(const proland::AtmoParameters & params, const char * output) function, expected prototype:\nvoid proland::preprocessAtmo(const proland::AtmoParameters & params, const char * output)\nClass arguments details:\narg 1 ID = 84217978\n\n%s",luna_dumpStack(L).c_str());
	}

	const proland::AtmoParameters* params_ptr=(Luna< proland::AtmoParameters >::check(L,1));
	if( !params_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg params in proland::preprocessAtmo function");
	}
	const proland::AtmoParameters & params=*params_ptr;
	const char * output=(const char *)lua_tostring(L,2);

	proland::preprocessAtmo(params, output);

	return 0;
}

// void proland::initOceanPlugin()
static int _bind_initOceanPlugin(lua_State *L) {
	if (!_lg_typecheck_initOceanPlugin(L)) {
		luaL_error(L, "luna typecheck failed in void proland::initOceanPlugin() function, expected prototype:\nvoid proland::initOceanPlugin()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	proland::initOceanPlugin();

	return 0;
}

// void proland::initForestPlugin()
static int _bind_initForestPlugin(lua_State *L) {
	if (!_lg_typecheck_initForestPlugin(L)) {
		luaL_error(L, "luna typecheck failed in void proland::initForestPlugin() function, expected prototype:\nvoid proland::initForestPlugin()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	proland::initForestPlugin();

	return 0;
}

// void proland::mergeTreeTables(const char * input1, const char * input2, const char * output)
static int _bind_mergeTreeTables(lua_State *L) {
	if (!_lg_typecheck_mergeTreeTables(L)) {
		luaL_error(L, "luna typecheck failed in void proland::mergeTreeTables(const char * input1, const char * input2, const char * output) function, expected prototype:\nvoid proland::mergeTreeTables(const char * input1, const char * input2, const char * output)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	const char * input1=(const char *)lua_tostring(L,1);
	const char * input2=(const char *)lua_tostring(L,2);
	const char * output=(const char *)lua_tostring(L,3);

	proland::mergeTreeTables(input1, input2, output);

	return 0;
}

// void proland::preprocessMultisample(const char * output)
static int _bind_preprocessMultisample(lua_State *L) {
	if (!_lg_typecheck_preprocessMultisample(L)) {
		luaL_error(L, "luna typecheck failed in void proland::preprocessMultisample(const char * output) function, expected prototype:\nvoid proland::preprocessMultisample(const char * output)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	const char * output=(const char *)lua_tostring(L,1);

	proland::preprocessMultisample(output);

	return 0;
}

// void proland::initGraphPlugin()
static int _bind_initGraphPlugin(lua_State *L) {
	if (!_lg_typecheck_initGraphPlugin(L)) {
		luaL_error(L, "luna typecheck failed in void proland::initGraphPlugin() function, expected prototype:\nvoid proland::initGraphPlugin()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	proland::initGraphPlugin();

	return 0;
}

// void proland::initRiverPlugin()
static int _bind_initRiverPlugin(lua_State *L) {
	if (!_lg_typecheck_initRiverPlugin(L)) {
		luaL_error(L, "luna typecheck failed in void proland::initRiverPlugin() function, expected prototype:\nvoid proland::initRiverPlugin()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	proland::initRiverPlugin();

	return 0;
}

// void proland::initEditPlugin()
static int _bind_initEditPlugin(lua_State *L) {
	if (!_lg_typecheck_initEditPlugin(L)) {
		luaL_error(L, "luna typecheck failed in void proland::initEditPlugin() function, expected prototype:\nvoid proland::initEditPlugin()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	proland::initEditPlugin();

	return 0;
}


#ifdef __cplusplus
extern "C" {
#endif

void register_global_functions(lua_State* L) {
	luna_pushModule(L,"land");
	lua_pushcfunction(L, _bind_isFinite); lua_setfield(L,-2,"isFinite");
	lua_pushcfunction(L, _bind_isInf); lua_setfield(L,-2,"isInf");
	lua_pushcfunction(L, _bind_isSubnormal); lua_setfield(L,-2,"isSubnormal");
	lua_pushcfunction(L, _bind_mfs_open); lua_setfield(L,-2,"mfs_open");
	lua_pushcfunction(L, _bind_mfs_lseek); lua_setfield(L,-2,"mfs_lseek");
	lua_pushcfunction(L, _bind_mfs_read); lua_setfield(L,-2,"mfs_read");
	lua_pushcfunction(L, _bind_mfs_write); lua_setfield(L,-2,"mfs_write");
	lua_pushcfunction(L, _bind_mfs_size); lua_setfield(L,-2,"mfs_size");
	lua_pushcfunction(L, _bind_mfs_unmap); lua_setfield(L,-2,"mfs_unmap");
	lua_pushcfunction(L, _bind_mfs_close); lua_setfield(L,-2,"mfs_close");
	lua_pushcfunction(L, _bind_isPointerAligned); lua_setfield(L,-2,"isPointerAligned");
	lua_pushcfunction(L, _bind_alignPointer); lua_setfield(L,-2,"alignPointer");
	lua_pushcfunction(L, _bind_degrees); lua_setfield(L,-2,"degrees");
	lua_pushcfunction(L, _bind_radians); lua_setfield(L,-2,"radians");
	lua_pushcfunction(L, _bind_initGlew); lua_setfield(L,-2,"initGlew");
	luna_popModule(L);
	luna_pushModule(L,"ork");
	lua_pushcfunction(L, _bind_floatToHalf); lua_setfield(L,-2,"floatToHalf");
	lua_pushcfunction(L, _bind_halfToFloat); lua_setfield(L,-2,"halfToFloat");
	luna_popModule(L);
	luna_pushModule(L,"proland");
	lua_pushcfunction(L, _bind_rgb2hsl); lua_setfield(L,-2,"rgb2hsl");
	lua_pushcfunction(L, _bind_hsl2rgb); lua_setfield(L,-2,"hsl2rgb");
	lua_pushcfunction(L, _bind_dcolor); lua_setfield(L,-2,"dcolor");
	lua_pushcfunction(L, _bind_lrandom); lua_setfield(L,-2,"lrandom");
	lua_pushcfunction(L, _bind_frandom); lua_setfield(L,-2,"frandom");
	lua_pushcfunction(L, _bind_grandom); lua_setfield(L,-2,"grandom");
	lua_pushcfunction(L, _bind_cnoise); lua_setfield(L,-2,"cnoise");
	lua_pushcfunction(L, _bind_snoise); lua_setfield(L,-2,"snoise");
	lua_pushcfunction(L, _bind_preprocessDem); lua_setfield(L,-2,"preprocessDem");
	lua_pushcfunction(L, _bind_preprocessSphericalDem); lua_setfield(L,-2,"preprocessSphericalDem");
	lua_pushcfunction(L, _bind_preprocessSphericalAperture); lua_setfield(L,-2,"preprocessSphericalAperture");
	lua_pushcfunction(L, _bind_initTerrainPlugin); lua_setfield(L,-2,"initTerrainPlugin");
	lua_pushcfunction(L, _bind_preprocessAtmo); lua_setfield(L,-2,"preprocessAtmo");
	lua_pushcfunction(L, _bind_initOceanPlugin); lua_setfield(L,-2,"initOceanPlugin");
	lua_pushcfunction(L, _bind_initForestPlugin); lua_setfield(L,-2,"initForestPlugin");
	lua_pushcfunction(L, _bind_mergeTreeTables); lua_setfield(L,-2,"mergeTreeTables");
	lua_pushcfunction(L, _bind_preprocessMultisample); lua_setfield(L,-2,"preprocessMultisample");
	lua_pushcfunction(L, _bind_initGraphPlugin); lua_setfield(L,-2,"initGraphPlugin");
	lua_pushcfunction(L, _bind_initRiverPlugin); lua_setfield(L,-2,"initRiverPlugin");
	lua_pushcfunction(L, _bind_initEditPlugin); lua_setfield(L,-2,"initEditPlugin");
	luna_popModule(L);
}

#ifdef __cplusplus
}
#endif

