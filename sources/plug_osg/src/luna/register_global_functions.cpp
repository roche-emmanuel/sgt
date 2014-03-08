#include <plug_common.h>

#include <osg/GL>
#include <OpenThreads/Version>
#include <osg/Version>
#include <osgDB/Version>
#include <osgGA/Version>
#include <osgParticle/Version>
#include <osgText/Version>
#include <osgUtil/Version>
#include <osgViewer/Version>
#include <OpenThreads/Thread>
#include <osg/Endian>
#include <osg/Geometry>
#include <osg/GLExtensions>
#include <osg/GLObjects>
#include <osg/GLU>
#include <osg/Image>
#include <osg/ImageUtils>
#include <osg/Math>
#include <osg/Notify>
#include <osg/StateSet>
#include <osg/Transform>
#include <osg/Vec2d>
#include <osg/Vec2f>
#include <osg/Vec2s>
#include <osg/Vec3d>
#include <osg/Vec3f>
#include <osg/Vec3s>
#include <osg/Vec4d>
#include <osg/Vec4f>
#include <osg/Vec4s>
#include <osgDB/Archive>
#include <osgDB/ConvertUTF>
#include <osgDB/FileNameUtils>
#include <osgDB/FileUtils>
#include <osgDB/ObjectWrapper>
#include <osgDB/PluginQuery>
#include <osgDB/ReadFile>
#include <osgDB/Registry>
#include <osgDB/WriteFile>
#include <osgDB/XmlParser>
#include <osgText/Font>
#include <osgText/Font3D>
#include <osgUtil/PerlinNoise>

// Function checkers:
inline static bool _lg_typecheck_glLoadMatrix_overload_1(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glLoadMatrix_overload_2(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glMultMatrix_overload_1(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glMultMatrix_overload_2(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_OpenThreadsGetVersion(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_OpenThreadsGetSOVersion(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_OpenThreadsGetLibraryName(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_osgGetVersion(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_osgGetSOVersion(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_osgGetLibraryName(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_osgDBGetVersion(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_osgDBGetLibraryName(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_osgGAGetVersion(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_osgGAGetLibraryName(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_osgParticleGetVersion(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_osgParticleGetLibraryName(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_osgTextGetVersion(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_osgTextGetLibraryName(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_osgUtilGetVersion(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_osgUtilGetLibraryName(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_osgViewerGetVersion(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_osgViewerGetLibraryName(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}


// Function binds:
// void glLoadMatrix(const float * mat)
static int _bind_glLoadMatrix_overload_1(lua_State *L) {
	if (!_lg_typecheck_glLoadMatrix_overload_1(L)) {
		luaL_error(L, "luna typecheck failed in void glLoadMatrix(const float * mat) function, expected prototype:\nvoid glLoadMatrix(const float * mat)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	const float* mat=(const float*)Luna< void >::check(L,1);

	::glLoadMatrix(mat);

	return 0;
}

// void glLoadMatrix(const double * mat)
static int _bind_glLoadMatrix_overload_2(lua_State *L) {
	if (!_lg_typecheck_glLoadMatrix_overload_2(L)) {
		luaL_error(L, "luna typecheck failed in void glLoadMatrix(const double * mat) function, expected prototype:\nvoid glLoadMatrix(const double * mat)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	const double* mat=(const double*)Luna< void >::check(L,1);

	::glLoadMatrix(mat);

	return 0;
}

// Overload binder for glLoadMatrix
static int _bind_glLoadMatrix(lua_State *L) {
	if (_lg_typecheck_glLoadMatrix_overload_1(L)) return _bind_glLoadMatrix_overload_1(L);
	if (_lg_typecheck_glLoadMatrix_overload_2(L)) return _bind_glLoadMatrix_overload_2(L);

	luaL_error(L, "error in function glLoadMatrix, cannot match any of the overloads for function glLoadMatrix:\n  glLoadMatrix(const float *)\n  glLoadMatrix(const double *)\n");
	return 0;
}

// void glMultMatrix(const float * mat)
static int _bind_glMultMatrix_overload_1(lua_State *L) {
	if (!_lg_typecheck_glMultMatrix_overload_1(L)) {
		luaL_error(L, "luna typecheck failed in void glMultMatrix(const float * mat) function, expected prototype:\nvoid glMultMatrix(const float * mat)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	const float* mat=(const float*)Luna< void >::check(L,1);

	::glMultMatrix(mat);

	return 0;
}

// void glMultMatrix(const double * mat)
static int _bind_glMultMatrix_overload_2(lua_State *L) {
	if (!_lg_typecheck_glMultMatrix_overload_2(L)) {
		luaL_error(L, "luna typecheck failed in void glMultMatrix(const double * mat) function, expected prototype:\nvoid glMultMatrix(const double * mat)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	const double* mat=(const double*)Luna< void >::check(L,1);

	::glMultMatrix(mat);

	return 0;
}

// Overload binder for glMultMatrix
static int _bind_glMultMatrix(lua_State *L) {
	if (_lg_typecheck_glMultMatrix_overload_1(L)) return _bind_glMultMatrix_overload_1(L);
	if (_lg_typecheck_glMultMatrix_overload_2(L)) return _bind_glMultMatrix_overload_2(L);

	luaL_error(L, "error in function glMultMatrix, cannot match any of the overloads for function glMultMatrix:\n  glMultMatrix(const float *)\n  glMultMatrix(const double *)\n");
	return 0;
}

// const char * OpenThreadsGetVersion()
static int _bind_OpenThreadsGetVersion(lua_State *L) {
	if (!_lg_typecheck_OpenThreadsGetVersion(L)) {
		luaL_error(L, "luna typecheck failed in const char * OpenThreadsGetVersion() function, expected prototype:\nconst char * OpenThreadsGetVersion()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	const char * lret = ::OpenThreadsGetVersion();
	lua_pushstring(L,lret);

	return 1;
}

// const char * OpenThreadsGetSOVersion()
static int _bind_OpenThreadsGetSOVersion(lua_State *L) {
	if (!_lg_typecheck_OpenThreadsGetSOVersion(L)) {
		luaL_error(L, "luna typecheck failed in const char * OpenThreadsGetSOVersion() function, expected prototype:\nconst char * OpenThreadsGetSOVersion()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	const char * lret = ::OpenThreadsGetSOVersion();
	lua_pushstring(L,lret);

	return 1;
}

// const char * OpenThreadsGetLibraryName()
static int _bind_OpenThreadsGetLibraryName(lua_State *L) {
	if (!_lg_typecheck_OpenThreadsGetLibraryName(L)) {
		luaL_error(L, "luna typecheck failed in const char * OpenThreadsGetLibraryName() function, expected prototype:\nconst char * OpenThreadsGetLibraryName()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	const char * lret = ::OpenThreadsGetLibraryName();
	lua_pushstring(L,lret);

	return 1;
}

// const char * osgGetVersion()
static int _bind_osgGetVersion(lua_State *L) {
	if (!_lg_typecheck_osgGetVersion(L)) {
		luaL_error(L, "luna typecheck failed in const char * osgGetVersion() function, expected prototype:\nconst char * osgGetVersion()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	const char * lret = ::osgGetVersion();
	lua_pushstring(L,lret);

	return 1;
}

// const char * osgGetSOVersion()
static int _bind_osgGetSOVersion(lua_State *L) {
	if (!_lg_typecheck_osgGetSOVersion(L)) {
		luaL_error(L, "luna typecheck failed in const char * osgGetSOVersion() function, expected prototype:\nconst char * osgGetSOVersion()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	const char * lret = ::osgGetSOVersion();
	lua_pushstring(L,lret);

	return 1;
}

// const char * osgGetLibraryName()
static int _bind_osgGetLibraryName(lua_State *L) {
	if (!_lg_typecheck_osgGetLibraryName(L)) {
		luaL_error(L, "luna typecheck failed in const char * osgGetLibraryName() function, expected prototype:\nconst char * osgGetLibraryName()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	const char * lret = ::osgGetLibraryName();
	lua_pushstring(L,lret);

	return 1;
}

// const char * osgDBGetVersion()
static int _bind_osgDBGetVersion(lua_State *L) {
	if (!_lg_typecheck_osgDBGetVersion(L)) {
		luaL_error(L, "luna typecheck failed in const char * osgDBGetVersion() function, expected prototype:\nconst char * osgDBGetVersion()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	const char * lret = ::osgDBGetVersion();
	lua_pushstring(L,lret);

	return 1;
}

// const char * osgDBGetLibraryName()
static int _bind_osgDBGetLibraryName(lua_State *L) {
	if (!_lg_typecheck_osgDBGetLibraryName(L)) {
		luaL_error(L, "luna typecheck failed in const char * osgDBGetLibraryName() function, expected prototype:\nconst char * osgDBGetLibraryName()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	const char * lret = ::osgDBGetLibraryName();
	lua_pushstring(L,lret);

	return 1;
}

// const char * osgGAGetVersion()
static int _bind_osgGAGetVersion(lua_State *L) {
	if (!_lg_typecheck_osgGAGetVersion(L)) {
		luaL_error(L, "luna typecheck failed in const char * osgGAGetVersion() function, expected prototype:\nconst char * osgGAGetVersion()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	const char * lret = ::osgGAGetVersion();
	lua_pushstring(L,lret);

	return 1;
}

// const char * osgGAGetLibraryName()
static int _bind_osgGAGetLibraryName(lua_State *L) {
	if (!_lg_typecheck_osgGAGetLibraryName(L)) {
		luaL_error(L, "luna typecheck failed in const char * osgGAGetLibraryName() function, expected prototype:\nconst char * osgGAGetLibraryName()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	const char * lret = ::osgGAGetLibraryName();
	lua_pushstring(L,lret);

	return 1;
}

// const char * osgParticleGetVersion()
static int _bind_osgParticleGetVersion(lua_State *L) {
	if (!_lg_typecheck_osgParticleGetVersion(L)) {
		luaL_error(L, "luna typecheck failed in const char * osgParticleGetVersion() function, expected prototype:\nconst char * osgParticleGetVersion()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	const char * lret = ::osgParticleGetVersion();
	lua_pushstring(L,lret);

	return 1;
}

// const char * osgParticleGetLibraryName()
static int _bind_osgParticleGetLibraryName(lua_State *L) {
	if (!_lg_typecheck_osgParticleGetLibraryName(L)) {
		luaL_error(L, "luna typecheck failed in const char * osgParticleGetLibraryName() function, expected prototype:\nconst char * osgParticleGetLibraryName()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	const char * lret = ::osgParticleGetLibraryName();
	lua_pushstring(L,lret);

	return 1;
}

// const char * osgTextGetVersion()
static int _bind_osgTextGetVersion(lua_State *L) {
	if (!_lg_typecheck_osgTextGetVersion(L)) {
		luaL_error(L, "luna typecheck failed in const char * osgTextGetVersion() function, expected prototype:\nconst char * osgTextGetVersion()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	const char * lret = ::osgTextGetVersion();
	lua_pushstring(L,lret);

	return 1;
}

// const char * osgTextGetLibraryName()
static int _bind_osgTextGetLibraryName(lua_State *L) {
	if (!_lg_typecheck_osgTextGetLibraryName(L)) {
		luaL_error(L, "luna typecheck failed in const char * osgTextGetLibraryName() function, expected prototype:\nconst char * osgTextGetLibraryName()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	const char * lret = ::osgTextGetLibraryName();
	lua_pushstring(L,lret);

	return 1;
}

// const char * osgUtilGetVersion()
static int _bind_osgUtilGetVersion(lua_State *L) {
	if (!_lg_typecheck_osgUtilGetVersion(L)) {
		luaL_error(L, "luna typecheck failed in const char * osgUtilGetVersion() function, expected prototype:\nconst char * osgUtilGetVersion()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	const char * lret = ::osgUtilGetVersion();
	lua_pushstring(L,lret);

	return 1;
}

// const char * osgUtilGetLibraryName()
static int _bind_osgUtilGetLibraryName(lua_State *L) {
	if (!_lg_typecheck_osgUtilGetLibraryName(L)) {
		luaL_error(L, "luna typecheck failed in const char * osgUtilGetLibraryName() function, expected prototype:\nconst char * osgUtilGetLibraryName()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	const char * lret = ::osgUtilGetLibraryName();
	lua_pushstring(L,lret);

	return 1;
}

// const char * osgViewerGetVersion()
static int _bind_osgViewerGetVersion(lua_State *L) {
	if (!_lg_typecheck_osgViewerGetVersion(L)) {
		luaL_error(L, "luna typecheck failed in const char * osgViewerGetVersion() function, expected prototype:\nconst char * osgViewerGetVersion()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	const char * lret = ::osgViewerGetVersion();
	lua_pushstring(L,lret);

	return 1;
}

// const char * osgViewerGetLibraryName()
static int _bind_osgViewerGetLibraryName(lua_State *L) {
	if (!_lg_typecheck_osgViewerGetLibraryName(L)) {
		luaL_error(L, "luna typecheck failed in const char * osgViewerGetLibraryName() function, expected prototype:\nconst char * osgViewerGetLibraryName()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	const char * lret = ::osgViewerGetLibraryName();
	lua_pushstring(L,lret);

	return 1;
}


// Function checkers:
inline static bool _lg_typecheck_GetNumberOfProcessors(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_SetProcessorAffinityOfCurrentThread(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}


// Function binds:
// int OpenThreads::GetNumberOfProcessors()
static int _bind_GetNumberOfProcessors(lua_State *L) {
	if (!_lg_typecheck_GetNumberOfProcessors(L)) {
		luaL_error(L, "luna typecheck failed in int OpenThreads::GetNumberOfProcessors() function, expected prototype:\nint OpenThreads::GetNumberOfProcessors()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	int lret = OpenThreads::GetNumberOfProcessors();
	lua_pushnumber(L,lret);

	return 1;
}

// int OpenThreads::SetProcessorAffinityOfCurrentThread(unsigned int cpunum)
static int _bind_SetProcessorAffinityOfCurrentThread(lua_State *L) {
	if (!_lg_typecheck_SetProcessorAffinityOfCurrentThread(L)) {
		luaL_error(L, "luna typecheck failed in int OpenThreads::SetProcessorAffinityOfCurrentThread(unsigned int cpunum) function, expected prototype:\nint OpenThreads::SetProcessorAffinityOfCurrentThread(unsigned int cpunum)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int cpunum=(unsigned int)lua_tointeger(L,1);

	int lret = OpenThreads::SetProcessorAffinityOfCurrentThread(cpunum);
	lua_pushnumber(L,lret);

	return 1;
}


// Function checkers:
inline static bool _lg_typecheck_getCpuByteOrder(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_swapBytes(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_swapBytes2(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_swapBytes4(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_swapBytes8(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_swapBytes16(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_createTexturedQuadGeometry_overload_1(lua_State *L) {
	if( lua_gettop(L)!=7 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,92303204) ) return false;
	if( (!(Luna< osg::Vec3f >::check(L,1))) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
	if( (!(Luna< osg::Vec3f >::check(L,2))) ) return false;
	if( !Luna<void>::has_uniqueid(L,3,92303204) ) return false;
	if( (!(Luna< osg::Vec3f >::check(L,3))) ) return false;
	if( lua_type(L,4)!=LUA_TNUMBER ) return false;
	if( lua_type(L,5)!=LUA_TNUMBER ) return false;
	if( lua_type(L,6)!=LUA_TNUMBER ) return false;
	if( lua_type(L,7)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_createTexturedQuadGeometry_overload_2(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<3 || luatop>5 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,92303204) ) return false;
	if( (!(Luna< osg::Vec3f >::check(L,1))) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
	if( (!(Luna< osg::Vec3f >::check(L,2))) ) return false;
	if( !Luna<void>::has_uniqueid(L,3,92303204) ) return false;
	if( (!(Luna< osg::Vec3f >::check(L,3))) ) return false;
	if( luatop>3 && lua_type(L,4)!=LUA_TNUMBER ) return false;
	if( luatop>4 && lua_type(L,5)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_getGLVersionNumber(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_isExtensionInExtensionString(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	if( lua_type(L,2)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_isGLExtensionSupported(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( lua_type(L,2)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_isGLExtensionOrVersionSupported(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( lua_type(L,2)!=LUA_TSTRING ) return false;
	if( lua_type(L,3)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_getGLExtensionFuncPtr_overload_1(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_getGLExtensionFuncPtr_overload_2(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	if( lua_type(L,2)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_getGLExtensionFuncPtr_overload_3(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	if( lua_type(L,2)!=LUA_TSTRING ) return false;
	if( lua_type(L,3)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_setGLExtensionDisableString(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_getGLExtensionDisableString(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_flushDeletedGLObjects(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( lua_type(L,2)!=LUA_TNUMBER ) return false;
	if( lua_type(L,3)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_flushAllDeletedGLObjects(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_deleteAllGLObjects(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_discardAllGLObjects(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_gluErrorString(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_gluScaleImage_overload_1(lua_State *L) {
	if( lua_gettop(L)!=10 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,58853759)) ) return false;
	if( (lua_isnil(L,1)==0 && !(Luna< osg::PixelStorageModes >::check(L,1)) ) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,3625364)) ) return false;
	if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
	if( (lua_type(L,8)!=LUA_TNUMBER || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
	if( (lua_type(L,9)!=LUA_TNUMBER || lua_tointeger(L,9) != lua_tonumber(L,9)) ) return false;
	if( (lua_isnil(L,10)==0 && !Luna<void>::has_uniqueid(L,10,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_gluScaleImage_overload_2(lua_State *L) {
	if( lua_gettop(L)!=9 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,3625364)) ) return false;
	if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
	if( (lua_type(L,8)!=LUA_TNUMBER || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
	if( (lua_isnil(L,9)==0 && !Luna<void>::has_uniqueid(L,9,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_gluBuild1DMipmapLevels(lua_State *L) {
	if( lua_gettop(L)!=9 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
	if( (lua_type(L,8)!=LUA_TNUMBER || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
	if( (lua_isnil(L,9)==0 && !Luna<void>::has_uniqueid(L,9,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_gluBuild1DMipmaps(lua_State *L) {
	if( lua_gettop(L)!=6 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_gluBuild2DMipmapLevels(lua_State *L) {
	if( lua_gettop(L)!=10 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
	if( (lua_type(L,8)!=LUA_TNUMBER || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
	if( (lua_type(L,9)!=LUA_TNUMBER || lua_tointeger(L,9) != lua_tonumber(L,9)) ) return false;
	if( (lua_isnil(L,10)==0 && !Luna<void>::has_uniqueid(L,10,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_gluBuild2DMipmaps(lua_State *L) {
	if( lua_gettop(L)!=7 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	if( (lua_isnil(L,7)==0 && !Luna<void>::has_uniqueid(L,7,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_gluNewTess(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_gluDeleteTess(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,37525689)) ) return false;
	return true;
}

inline static bool _lg_typecheck_gluTessBeginContour(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,37525689)) ) return false;
	return true;
}

inline static bool _lg_typecheck_gluTessEndContour(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,37525689)) ) return false;
	return true;
}

inline static bool _lg_typecheck_gluTessNormal(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,37525689)) ) return false;
	if( lua_type(L,2)!=LUA_TNUMBER ) return false;
	if( lua_type(L,3)!=LUA_TNUMBER ) return false;
	if( lua_type(L,4)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_gluTessProperty(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,37525689)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( lua_type(L,3)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_gluTessVertex(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,37525689)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_gluTessBeginPolygon(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,37525689)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_gluTessEndPolygon(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,37525689)) ) return false;
	return true;
}

inline static bool _lg_typecheck_gluGetTessProperty(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,37525689)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_createGeodeForImage_overload_1(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
	if( (lua_isnil(L,1)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Image >(L,1)) ) ) return false;
	return true;
}

inline static bool _lg_typecheck_createGeodeForImage_overload_2(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
	if( (lua_isnil(L,1)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Image >(L,1)) ) ) return false;
	if( lua_type(L,2)!=LUA_TNUMBER ) return false;
	if( lua_type(L,3)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_computeMinMax(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,92303235) ) return false;
	if( !Luna<void>::has_uniqueid(L,3,92303235) ) return false;
	return true;
}

inline static bool _lg_typecheck_offsetAndScaleImage(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,92303235) ) return false;
	if( !Luna<void>::has_uniqueid(L,3,92303235) ) return false;
	return true;
}

inline static bool _lg_typecheck_copyImage(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<11 || luatop>12 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
	if( (lua_isnil(L,8)==0 && !Luna<void>::has_uniqueid(L,8,50169651)) ) return false;
	if( (lua_type(L,9)!=LUA_TNUMBER || lua_tointeger(L,9) != lua_tonumber(L,9)) ) return false;
	if( (lua_type(L,10)!=LUA_TNUMBER || lua_tointeger(L,10) != lua_tonumber(L,10)) ) return false;
	if( (lua_type(L,11)!=LUA_TNUMBER || lua_tointeger(L,11) != lua_tonumber(L,11)) ) return false;
	if( luatop>11 && lua_isboolean(L,12)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_clearImageToColor(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,92303235) ) return false;
	return true;
}

inline static bool _lg_typecheck_maximimNumOfComponents(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,35913554) ) return false;
	return true;
}

inline static bool _lg_typecheck_createImage3D(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<2 || luatop>6 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,35913554) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( luatop>5 && lua_isboolean(L,6)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_createImage3DWithAlpha(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<1 || luatop>5 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,35913554) ) return false;
	if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( luatop>4 && lua_isboolean(L,5)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_createSpotLightImage(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,92303235) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,92303235) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( lua_type(L,4)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_colorSpaceConversion(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
	if( !Luna<void>::has_uniqueid(L,3,92303235) ) return false;
	return true;
}

inline static bool _lg_typecheck_equivalent_overload_1(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<2 || luatop>3 ) return false;

	if( lua_type(L,1)!=LUA_TNUMBER ) return false;
	if( lua_type(L,2)!=LUA_TNUMBER ) return false;
	if( luatop>2 && lua_type(L,3)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_equivalent_overload_2(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<2 || luatop>3 ) return false;

	if( lua_type(L,1)!=LUA_TNUMBER ) return false;
	if( lua_type(L,2)!=LUA_TNUMBER ) return false;
	if( luatop>2 && lua_type(L,3)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_inDegrees_overload_1(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_inDegrees_overload_2(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_DegreesToRadians_overload_1(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_DegreesToRadians_overload_2(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_RadiansToDegrees_overload_1(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_RadiansToDegrees_overload_2(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_round_overload_1(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_round_overload_2(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_isNaN(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_asciiToDouble(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_asciiToFloat(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_findAsciiToDouble(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_findAsciiToFloat(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_setNotifyLevel(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_getNotifyLevel(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_initNotifyLevel(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_isNotifyEnabled(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_notify_overload_1(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_notify_overload_2(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_setNotifyHandler(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
	return true;
}

inline static bool _lg_typecheck_getNotifyHandler(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_isTextureMode(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_computeLocalToWorld(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<1 || luatop>2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,52841328) ) return false;
	if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_computeWorldToLocal(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<1 || luatop>2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,52841328) ) return false;
	if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_computeLocalToEye(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<2 || luatop>3 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,18903838) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,52841328) ) return false;
	if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_computeEyeToLocal(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<2 || luatop>3 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,18903838) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,52841328) ) return false;
	if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_componentMultiply_overload_1(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,92303171) ) return false;
	if( (!(Luna< osg::Vec2d >::check(L,1))) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,92303171) ) return false;
	if( (!(Luna< osg::Vec2d >::check(L,2))) ) return false;
	return true;
}

inline static bool _lg_typecheck_componentMultiply_overload_2(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,92303173) ) return false;
	if( (!(Luna< osg::Vec2f >::check(L,1))) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,92303173) ) return false;
	if( (!(Luna< osg::Vec2f >::check(L,2))) ) return false;
	return true;
}

inline static bool _lg_typecheck_componentMultiply_overload_3(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,92303186) ) return false;
	if( (!(Luna< osg::Vec2s >::check(L,1))) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,92303186) ) return false;
	if( (!(Luna< osg::Vec2s >::check(L,2))) ) return false;
	return true;
}

inline static bool _lg_typecheck_componentMultiply_overload_4(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,92303202) ) return false;
	if( (!(Luna< osg::Vec3d >::check(L,1))) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
	if( (!(Luna< osg::Vec3d >::check(L,2))) ) return false;
	return true;
}

inline static bool _lg_typecheck_componentMultiply_overload_5(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,92303204) ) return false;
	if( (!(Luna< osg::Vec3f >::check(L,1))) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
	if( (!(Luna< osg::Vec3f >::check(L,2))) ) return false;
	return true;
}

inline static bool _lg_typecheck_componentMultiply_overload_6(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,92303217) ) return false;
	if( (!(Luna< osg::Vec3s >::check(L,1))) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,92303217) ) return false;
	if( (!(Luna< osg::Vec3s >::check(L,2))) ) return false;
	return true;
}

inline static bool _lg_typecheck_componentMultiply_overload_7(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,92303233) ) return false;
	if( (!(Luna< osg::Vec4d >::check(L,1))) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,92303233) ) return false;
	if( (!(Luna< osg::Vec4d >::check(L,2))) ) return false;
	return true;
}

inline static bool _lg_typecheck_componentMultiply_overload_8(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,92303235) ) return false;
	if( (!(Luna< osg::Vec4f >::check(L,1))) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,92303235) ) return false;
	if( (!(Luna< osg::Vec4f >::check(L,2))) ) return false;
	return true;
}

inline static bool _lg_typecheck_componentMultiply_overload_9(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,92303248) ) return false;
	if( (!(Luna< osg::Vec4s >::check(L,1))) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,92303248) ) return false;
	if( (!(Luna< osg::Vec4s >::check(L,2))) ) return false;
	return true;
}

inline static bool _lg_typecheck_componentDivide_overload_1(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,92303171) ) return false;
	if( (!(Luna< osg::Vec2d >::check(L,1))) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,92303171) ) return false;
	if( (!(Luna< osg::Vec2d >::check(L,2))) ) return false;
	return true;
}

inline static bool _lg_typecheck_componentDivide_overload_2(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,92303173) ) return false;
	if( (!(Luna< osg::Vec2f >::check(L,1))) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,92303173) ) return false;
	if( (!(Luna< osg::Vec2f >::check(L,2))) ) return false;
	return true;
}

inline static bool _lg_typecheck_componentDivide_overload_3(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,92303186) ) return false;
	if( (!(Luna< osg::Vec2s >::check(L,1))) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,92303186) ) return false;
	if( (!(Luna< osg::Vec2s >::check(L,2))) ) return false;
	return true;
}

inline static bool _lg_typecheck_componentDivide_overload_4(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,92303202) ) return false;
	if( (!(Luna< osg::Vec3d >::check(L,1))) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
	if( (!(Luna< osg::Vec3d >::check(L,2))) ) return false;
	return true;
}

inline static bool _lg_typecheck_componentDivide_overload_5(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,92303204) ) return false;
	if( (!(Luna< osg::Vec3f >::check(L,1))) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
	if( (!(Luna< osg::Vec3f >::check(L,2))) ) return false;
	return true;
}

inline static bool _lg_typecheck_componentDivide_overload_6(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,92303217) ) return false;
	if( (!(Luna< osg::Vec3s >::check(L,1))) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,92303217) ) return false;
	if( (!(Luna< osg::Vec3s >::check(L,2))) ) return false;
	return true;
}

inline static bool _lg_typecheck_componentDivide_overload_7(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,92303233) ) return false;
	if( (!(Luna< osg::Vec4d >::check(L,1))) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,92303233) ) return false;
	if( (!(Luna< osg::Vec4d >::check(L,2))) ) return false;
	return true;
}

inline static bool _lg_typecheck_componentDivide_overload_8(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,92303235) ) return false;
	if( (!(Luna< osg::Vec4f >::check(L,1))) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,92303235) ) return false;
	if( (!(Luna< osg::Vec4f >::check(L,2))) ) return false;
	return true;
}

inline static bool _lg_typecheck_componentDivide_overload_9(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,92303248) ) return false;
	if( (!(Luna< osg::Vec4s >::check(L,1))) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,92303248) ) return false;
	if( (!(Luna< osg::Vec4s >::check(L,2))) ) return false;
	return true;
}


// Function binds:
// osg::Endian osg::getCpuByteOrder()
static int _bind_getCpuByteOrder(lua_State *L) {
	if (!_lg_typecheck_getCpuByteOrder(L)) {
		luaL_error(L, "luna typecheck failed in osg::Endian osg::getCpuByteOrder() function, expected prototype:\nosg::Endian osg::getCpuByteOrder()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	osg::Endian lret = osg::getCpuByteOrder();
	lua_pushnumber(L,lret);

	return 1;
}

// void osg::swapBytes(char * in, unsigned int size)
static int _bind_swapBytes(lua_State *L) {
	if (!_lg_typecheck_swapBytes(L)) {
		luaL_error(L, "luna typecheck failed in void osg::swapBytes(char * in, unsigned int size) function, expected prototype:\nvoid osg::swapBytes(char * in, unsigned int size)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	char* in=(char*)Luna< void >::check(L,1);
	unsigned int size=(unsigned int)lua_tointeger(L,2);

	osg::swapBytes(in, size);

	return 0;
}

// void osg::swapBytes2(char * in)
static int _bind_swapBytes2(lua_State *L) {
	if (!_lg_typecheck_swapBytes2(L)) {
		luaL_error(L, "luna typecheck failed in void osg::swapBytes2(char * in) function, expected prototype:\nvoid osg::swapBytes2(char * in)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	char* in=(char*)Luna< void >::check(L,1);

	osg::swapBytes2(in);

	return 0;
}

// void osg::swapBytes4(char * in)
static int _bind_swapBytes4(lua_State *L) {
	if (!_lg_typecheck_swapBytes4(L)) {
		luaL_error(L, "luna typecheck failed in void osg::swapBytes4(char * in) function, expected prototype:\nvoid osg::swapBytes4(char * in)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	char* in=(char*)Luna< void >::check(L,1);

	osg::swapBytes4(in);

	return 0;
}

// void osg::swapBytes8(char * in)
static int _bind_swapBytes8(lua_State *L) {
	if (!_lg_typecheck_swapBytes8(L)) {
		luaL_error(L, "luna typecheck failed in void osg::swapBytes8(char * in) function, expected prototype:\nvoid osg::swapBytes8(char * in)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	char* in=(char*)Luna< void >::check(L,1);

	osg::swapBytes8(in);

	return 0;
}

// void osg::swapBytes16(char * in)
static int _bind_swapBytes16(lua_State *L) {
	if (!_lg_typecheck_swapBytes16(L)) {
		luaL_error(L, "luna typecheck failed in void osg::swapBytes16(char * in) function, expected prototype:\nvoid osg::swapBytes16(char * in)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	char* in=(char*)Luna< void >::check(L,1);

	osg::swapBytes16(in);

	return 0;
}

// osg::Geometry * osg::createTexturedQuadGeometry(const osg::Vec3f & corner, const osg::Vec3f & widthVec, const osg::Vec3f & heightVec, float l, float b, float r, float t)
static int _bind_createTexturedQuadGeometry_overload_1(lua_State *L) {
	if (!_lg_typecheck_createTexturedQuadGeometry_overload_1(L)) {
		luaL_error(L, "luna typecheck failed in osg::Geometry * osg::createTexturedQuadGeometry(const osg::Vec3f & corner, const osg::Vec3f & widthVec, const osg::Vec3f & heightVec, float l, float b, float r, float t) function, expected prototype:\nosg::Geometry * osg::createTexturedQuadGeometry(const osg::Vec3f & corner, const osg::Vec3f & widthVec, const osg::Vec3f & heightVec, float l, float b, float r, float t)\nClass arguments details:\narg 1 ID = 92303204\narg 2 ID = 92303204\narg 3 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
	}

	const osg::Vec3f* corner_ptr=(Luna< osg::Vec3f >::check(L,1));
	if( !corner_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg corner in osg::createTexturedQuadGeometry function");
	}
	const osg::Vec3f & corner=*corner_ptr;
	const osg::Vec3f* widthVec_ptr=(Luna< osg::Vec3f >::check(L,2));
	if( !widthVec_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg widthVec in osg::createTexturedQuadGeometry function");
	}
	const osg::Vec3f & widthVec=*widthVec_ptr;
	const osg::Vec3f* heightVec_ptr=(Luna< osg::Vec3f >::check(L,3));
	if( !heightVec_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg heightVec in osg::createTexturedQuadGeometry function");
	}
	const osg::Vec3f & heightVec=*heightVec_ptr;
	float l=(float)lua_tonumber(L,4);
	float b=(float)lua_tonumber(L,5);
	float r=(float)lua_tonumber(L,6);
	float t=(float)lua_tonumber(L,7);

	osg::Geometry * lret = osg::createTexturedQuadGeometry(corner, widthVec, heightVec, l, b, r, t);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::Geometry >::push(L,lret,false);

	return 1;
}

// osg::Geometry * osg::createTexturedQuadGeometry(const osg::Vec3f & corner, const osg::Vec3f & widthVec, const osg::Vec3f & heightVec, float s = 1.0f, float t = 1.0f)
static int _bind_createTexturedQuadGeometry_overload_2(lua_State *L) {
	if (!_lg_typecheck_createTexturedQuadGeometry_overload_2(L)) {
		luaL_error(L, "luna typecheck failed in osg::Geometry * osg::createTexturedQuadGeometry(const osg::Vec3f & corner, const osg::Vec3f & widthVec, const osg::Vec3f & heightVec, float s = 1.0f, float t = 1.0f) function, expected prototype:\nosg::Geometry * osg::createTexturedQuadGeometry(const osg::Vec3f & corner, const osg::Vec3f & widthVec, const osg::Vec3f & heightVec, float s = 1.0f, float t = 1.0f)\nClass arguments details:\narg 1 ID = 92303204\narg 2 ID = 92303204\narg 3 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
	}

	int luatop = lua_gettop(L);

	const osg::Vec3f* corner_ptr=(Luna< osg::Vec3f >::check(L,1));
	if( !corner_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg corner in osg::createTexturedQuadGeometry function");
	}
	const osg::Vec3f & corner=*corner_ptr;
	const osg::Vec3f* widthVec_ptr=(Luna< osg::Vec3f >::check(L,2));
	if( !widthVec_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg widthVec in osg::createTexturedQuadGeometry function");
	}
	const osg::Vec3f & widthVec=*widthVec_ptr;
	const osg::Vec3f* heightVec_ptr=(Luna< osg::Vec3f >::check(L,3));
	if( !heightVec_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg heightVec in osg::createTexturedQuadGeometry function");
	}
	const osg::Vec3f & heightVec=*heightVec_ptr;
	float s=luatop>3 ? (float)lua_tonumber(L,4) : (float)1.0f;
	float t=luatop>4 ? (float)lua_tonumber(L,5) : (float)1.0f;

	osg::Geometry * lret = osg::createTexturedQuadGeometry(corner, widthVec, heightVec, s, t);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::Geometry >::push(L,lret,false);

	return 1;
}

// Overload binder for osg::createTexturedQuadGeometry
static int _bind_createTexturedQuadGeometry(lua_State *L) {
	if (_lg_typecheck_createTexturedQuadGeometry_overload_1(L)) return _bind_createTexturedQuadGeometry_overload_1(L);
	if (_lg_typecheck_createTexturedQuadGeometry_overload_2(L)) return _bind_createTexturedQuadGeometry_overload_2(L);

	luaL_error(L, "error in function createTexturedQuadGeometry, cannot match any of the overloads for function createTexturedQuadGeometry:\n  createTexturedQuadGeometry(const osg::Vec3f &, const osg::Vec3f &, const osg::Vec3f &, float, float, float, float)\n  createTexturedQuadGeometry(const osg::Vec3f &, const osg::Vec3f &, const osg::Vec3f &, float, float)\n");
	return 0;
}

// float osg::getGLVersionNumber()
static int _bind_getGLVersionNumber(lua_State *L) {
	if (!_lg_typecheck_getGLVersionNumber(L)) {
		luaL_error(L, "luna typecheck failed in float osg::getGLVersionNumber() function, expected prototype:\nfloat osg::getGLVersionNumber()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	float lret = osg::getGLVersionNumber();
	lua_pushnumber(L,lret);

	return 1;
}

// bool osg::isExtensionInExtensionString(const char * extension, const char * extensionString)
static int _bind_isExtensionInExtensionString(lua_State *L) {
	if (!_lg_typecheck_isExtensionInExtensionString(L)) {
		luaL_error(L, "luna typecheck failed in bool osg::isExtensionInExtensionString(const char * extension, const char * extensionString) function, expected prototype:\nbool osg::isExtensionInExtensionString(const char * extension, const char * extensionString)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	const char * extension=(const char *)lua_tostring(L,1);
	const char * extensionString=(const char *)lua_tostring(L,2);

	bool lret = osg::isExtensionInExtensionString(extension, extensionString);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// bool osg::isGLExtensionSupported(unsigned int contextID, const char * extension)
static int _bind_isGLExtensionSupported(lua_State *L) {
	if (!_lg_typecheck_isGLExtensionSupported(L)) {
		luaL_error(L, "luna typecheck failed in bool osg::isGLExtensionSupported(unsigned int contextID, const char * extension) function, expected prototype:\nbool osg::isGLExtensionSupported(unsigned int contextID, const char * extension)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int contextID=(unsigned int)lua_tointeger(L,1);
	const char * extension=(const char *)lua_tostring(L,2);

	bool lret = osg::isGLExtensionSupported(contextID, extension);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// bool osg::isGLExtensionOrVersionSupported(unsigned int contextID, const char * extension, float requiredGlVersion)
static int _bind_isGLExtensionOrVersionSupported(lua_State *L) {
	if (!_lg_typecheck_isGLExtensionOrVersionSupported(L)) {
		luaL_error(L, "luna typecheck failed in bool osg::isGLExtensionOrVersionSupported(unsigned int contextID, const char * extension, float requiredGlVersion) function, expected prototype:\nbool osg::isGLExtensionOrVersionSupported(unsigned int contextID, const char * extension, float requiredGlVersion)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int contextID=(unsigned int)lua_tointeger(L,1);
	const char * extension=(const char *)lua_tostring(L,2);
	float requiredGlVersion=(float)lua_tonumber(L,3);

	bool lret = osg::isGLExtensionOrVersionSupported(contextID, extension, requiredGlVersion);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// void * osg::getGLExtensionFuncPtr(const char * funcName)
static int _bind_getGLExtensionFuncPtr_overload_1(lua_State *L) {
	if (!_lg_typecheck_getGLExtensionFuncPtr_overload_1(L)) {
		luaL_error(L, "luna typecheck failed in void * osg::getGLExtensionFuncPtr(const char * funcName) function, expected prototype:\nvoid * osg::getGLExtensionFuncPtr(const char * funcName)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	const char * funcName=(const char *)lua_tostring(L,1);

	void * lret = osg::getGLExtensionFuncPtr(funcName);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< void >::push(L,lret,false);

	return 1;
}

// void * osg::getGLExtensionFuncPtr(const char * funcName, const char * fallbackFuncName)
static int _bind_getGLExtensionFuncPtr_overload_2(lua_State *L) {
	if (!_lg_typecheck_getGLExtensionFuncPtr_overload_2(L)) {
		luaL_error(L, "luna typecheck failed in void * osg::getGLExtensionFuncPtr(const char * funcName, const char * fallbackFuncName) function, expected prototype:\nvoid * osg::getGLExtensionFuncPtr(const char * funcName, const char * fallbackFuncName)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	const char * funcName=(const char *)lua_tostring(L,1);
	const char * fallbackFuncName=(const char *)lua_tostring(L,2);

	void * lret = osg::getGLExtensionFuncPtr(funcName, fallbackFuncName);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< void >::push(L,lret,false);

	return 1;
}

// void * osg::getGLExtensionFuncPtr(const char * funcName1, const char * funcName2, const char * funcName3)
static int _bind_getGLExtensionFuncPtr_overload_3(lua_State *L) {
	if (!_lg_typecheck_getGLExtensionFuncPtr_overload_3(L)) {
		luaL_error(L, "luna typecheck failed in void * osg::getGLExtensionFuncPtr(const char * funcName1, const char * funcName2, const char * funcName3) function, expected prototype:\nvoid * osg::getGLExtensionFuncPtr(const char * funcName1, const char * funcName2, const char * funcName3)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	const char * funcName1=(const char *)lua_tostring(L,1);
	const char * funcName2=(const char *)lua_tostring(L,2);
	const char * funcName3=(const char *)lua_tostring(L,3);

	void * lret = osg::getGLExtensionFuncPtr(funcName1, funcName2, funcName3);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< void >::push(L,lret,false);

	return 1;
}

// Overload binder for osg::getGLExtensionFuncPtr
static int _bind_getGLExtensionFuncPtr(lua_State *L) {
	if (_lg_typecheck_getGLExtensionFuncPtr_overload_1(L)) return _bind_getGLExtensionFuncPtr_overload_1(L);
	if (_lg_typecheck_getGLExtensionFuncPtr_overload_2(L)) return _bind_getGLExtensionFuncPtr_overload_2(L);
	if (_lg_typecheck_getGLExtensionFuncPtr_overload_3(L)) return _bind_getGLExtensionFuncPtr_overload_3(L);

	luaL_error(L, "error in function getGLExtensionFuncPtr, cannot match any of the overloads for function getGLExtensionFuncPtr:\n  getGLExtensionFuncPtr(const char *)\n  getGLExtensionFuncPtr(const char *, const char *)\n  getGLExtensionFuncPtr(const char *, const char *, const char *)\n");
	return 0;
}

// void osg::setGLExtensionDisableString(const std::string & disableString)
static int _bind_setGLExtensionDisableString(lua_State *L) {
	if (!_lg_typecheck_setGLExtensionDisableString(L)) {
		luaL_error(L, "luna typecheck failed in void osg::setGLExtensionDisableString(const std::string & disableString) function, expected prototype:\nvoid osg::setGLExtensionDisableString(const std::string & disableString)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	std::string disableString(lua_tostring(L,1),lua_objlen(L,1));

	osg::setGLExtensionDisableString(disableString);

	return 0;
}

// std::string & osg::getGLExtensionDisableString()
static int _bind_getGLExtensionDisableString(lua_State *L) {
	if (!_lg_typecheck_getGLExtensionDisableString(L)) {
		luaL_error(L, "luna typecheck failed in std::string & osg::getGLExtensionDisableString() function, expected prototype:\nstd::string & osg::getGLExtensionDisableString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	std::string & lret = osg::getGLExtensionDisableString();
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// void osg::flushDeletedGLObjects(unsigned int contextID, double currentTime, double & availableTime)
static int _bind_flushDeletedGLObjects(lua_State *L) {
	if (!_lg_typecheck_flushDeletedGLObjects(L)) {
		luaL_error(L, "luna typecheck failed in void osg::flushDeletedGLObjects(unsigned int contextID, double currentTime, double & availableTime) function, expected prototype:\nvoid osg::flushDeletedGLObjects(unsigned int contextID, double currentTime, double & availableTime)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int contextID=(unsigned int)lua_tointeger(L,1);
	double currentTime=(double)lua_tonumber(L,2);
	double availableTime=(double)lua_tonumber(L,3);

	osg::flushDeletedGLObjects(contextID, currentTime, availableTime);

	lua_pushnumber(L,availableTime);
	return 1;
}

// void osg::flushAllDeletedGLObjects(unsigned int contextID)
static int _bind_flushAllDeletedGLObjects(lua_State *L) {
	if (!_lg_typecheck_flushAllDeletedGLObjects(L)) {
		luaL_error(L, "luna typecheck failed in void osg::flushAllDeletedGLObjects(unsigned int contextID) function, expected prototype:\nvoid osg::flushAllDeletedGLObjects(unsigned int contextID)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int contextID=(unsigned int)lua_tointeger(L,1);

	osg::flushAllDeletedGLObjects(contextID);

	return 0;
}

// void osg::deleteAllGLObjects(unsigned int contextID)
static int _bind_deleteAllGLObjects(lua_State *L) {
	if (!_lg_typecheck_deleteAllGLObjects(L)) {
		luaL_error(L, "luna typecheck failed in void osg::deleteAllGLObjects(unsigned int contextID) function, expected prototype:\nvoid osg::deleteAllGLObjects(unsigned int contextID)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int contextID=(unsigned int)lua_tointeger(L,1);

	osg::deleteAllGLObjects(contextID);

	return 0;
}

// void osg::discardAllGLObjects(unsigned int contextID)
static int _bind_discardAllGLObjects(lua_State *L) {
	if (!_lg_typecheck_discardAllGLObjects(L)) {
		luaL_error(L, "luna typecheck failed in void osg::discardAllGLObjects(unsigned int contextID) function, expected prototype:\nvoid osg::discardAllGLObjects(unsigned int contextID)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int contextID=(unsigned int)lua_tointeger(L,1);

	osg::discardAllGLObjects(contextID);

	return 0;
}

// const unsigned char * osg::gluErrorString(unsigned int error)
static int _bind_gluErrorString(lua_State *L) {
	if (!_lg_typecheck_gluErrorString(L)) {
		luaL_error(L, "luna typecheck failed in const unsigned char * osg::gluErrorString(unsigned int error) function, expected prototype:\nconst unsigned char * osg::gluErrorString(unsigned int error)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int error=(unsigned int)lua_tointeger(L,1);

	const unsigned char * lret = osg::gluErrorString(error);
	luaL_error(L,"Trying to convert pointer on unsigned char lret to lua. This usage should be clarifierd.");

	return 1;
}

// int osg::gluScaleImage(osg::PixelStorageModes * psm, unsigned int format, int wIn, int hIn, unsigned int typeIn, const void * dataIn, int wOut, int hOut, unsigned int typeOut, void * dataOut)
static int _bind_gluScaleImage_overload_1(lua_State *L) {
	if (!_lg_typecheck_gluScaleImage_overload_1(L)) {
		luaL_error(L, "luna typecheck failed in int osg::gluScaleImage(osg::PixelStorageModes * psm, unsigned int format, int wIn, int hIn, unsigned int typeIn, const void * dataIn, int wOut, int hOut, unsigned int typeOut, void * dataOut) function, expected prototype:\nint osg::gluScaleImage(osg::PixelStorageModes * psm, unsigned int format, int wIn, int hIn, unsigned int typeIn, const void * dataIn, int wOut, int hOut, unsigned int typeOut, void * dataOut)\nClass arguments details:\narg 1 ID = 58853759\n\n%s",luna_dumpStack(L).c_str());
	}

	osg::PixelStorageModes* psm=(Luna< osg::PixelStorageModes >::check(L,1));
	unsigned int format=(unsigned int)lua_tointeger(L,2);
	int wIn=(int)lua_tointeger(L,3);
	int hIn=(int)lua_tointeger(L,4);
	unsigned int typeIn=(unsigned int)lua_tointeger(L,5);
	const void* dataIn=(Luna< void >::check(L,6));
	int wOut=(int)lua_tointeger(L,7);
	int hOut=(int)lua_tointeger(L,8);
	unsigned int typeOut=(unsigned int)lua_tointeger(L,9);
	void* dataOut=(Luna< void >::check(L,10));

	int lret = osg::gluScaleImage(psm, format, wIn, hIn, typeIn, dataIn, wOut, hOut, typeOut, dataOut);
	lua_pushnumber(L,lret);

	return 1;
}

// int osg::gluScaleImage(unsigned int format, int wIn, int hIn, unsigned int typeIn, const void * dataIn, int wOut, int hOut, unsigned int typeOut, void * dataOut)
static int _bind_gluScaleImage_overload_2(lua_State *L) {
	if (!_lg_typecheck_gluScaleImage_overload_2(L)) {
		luaL_error(L, "luna typecheck failed in int osg::gluScaleImage(unsigned int format, int wIn, int hIn, unsigned int typeIn, const void * dataIn, int wOut, int hOut, unsigned int typeOut, void * dataOut) function, expected prototype:\nint osg::gluScaleImage(unsigned int format, int wIn, int hIn, unsigned int typeIn, const void * dataIn, int wOut, int hOut, unsigned int typeOut, void * dataOut)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int format=(unsigned int)lua_tointeger(L,1);
	int wIn=(int)lua_tointeger(L,2);
	int hIn=(int)lua_tointeger(L,3);
	unsigned int typeIn=(unsigned int)lua_tointeger(L,4);
	const void* dataIn=(Luna< void >::check(L,5));
	int wOut=(int)lua_tointeger(L,6);
	int hOut=(int)lua_tointeger(L,7);
	unsigned int typeOut=(unsigned int)lua_tointeger(L,8);
	void* dataOut=(Luna< void >::check(L,9));

	int lret = osg::gluScaleImage(format, wIn, hIn, typeIn, dataIn, wOut, hOut, typeOut, dataOut);
	lua_pushnumber(L,lret);

	return 1;
}

// Overload binder for osg::gluScaleImage
static int _bind_gluScaleImage(lua_State *L) {
	if (_lg_typecheck_gluScaleImage_overload_1(L)) return _bind_gluScaleImage_overload_1(L);
	if (_lg_typecheck_gluScaleImage_overload_2(L)) return _bind_gluScaleImage_overload_2(L);

	luaL_error(L, "error in function gluScaleImage, cannot match any of the overloads for function gluScaleImage:\n  gluScaleImage(osg::PixelStorageModes *, unsigned int, int, int, unsigned int, const void *, int, int, unsigned int, void *)\n  gluScaleImage(unsigned int, int, int, unsigned int, const void *, int, int, unsigned int, void *)\n");
	return 0;
}

// int osg::gluBuild1DMipmapLevels(unsigned int target, int internalFormat, int width, unsigned int format, unsigned int type, int level, int base, int max, const void * data)
static int _bind_gluBuild1DMipmapLevels(lua_State *L) {
	if (!_lg_typecheck_gluBuild1DMipmapLevels(L)) {
		luaL_error(L, "luna typecheck failed in int osg::gluBuild1DMipmapLevels(unsigned int target, int internalFormat, int width, unsigned int format, unsigned int type, int level, int base, int max, const void * data) function, expected prototype:\nint osg::gluBuild1DMipmapLevels(unsigned int target, int internalFormat, int width, unsigned int format, unsigned int type, int level, int base, int max, const void * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	int internalFormat=(int)lua_tointeger(L,2);
	int width=(int)lua_tointeger(L,3);
	unsigned int format=(unsigned int)lua_tointeger(L,4);
	unsigned int type=(unsigned int)lua_tointeger(L,5);
	int level=(int)lua_tointeger(L,6);
	int base=(int)lua_tointeger(L,7);
	int max=(int)lua_tointeger(L,8);
	const void* data=(Luna< void >::check(L,9));

	int lret = osg::gluBuild1DMipmapLevels(target, internalFormat, width, format, type, level, base, max, data);
	lua_pushnumber(L,lret);

	return 1;
}

// int osg::gluBuild1DMipmaps(unsigned int target, int internalFormat, int width, unsigned int format, unsigned int type, const void * data)
static int _bind_gluBuild1DMipmaps(lua_State *L) {
	if (!_lg_typecheck_gluBuild1DMipmaps(L)) {
		luaL_error(L, "luna typecheck failed in int osg::gluBuild1DMipmaps(unsigned int target, int internalFormat, int width, unsigned int format, unsigned int type, const void * data) function, expected prototype:\nint osg::gluBuild1DMipmaps(unsigned int target, int internalFormat, int width, unsigned int format, unsigned int type, const void * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	int internalFormat=(int)lua_tointeger(L,2);
	int width=(int)lua_tointeger(L,3);
	unsigned int format=(unsigned int)lua_tointeger(L,4);
	unsigned int type=(unsigned int)lua_tointeger(L,5);
	const void* data=(Luna< void >::check(L,6));

	int lret = osg::gluBuild1DMipmaps(target, internalFormat, width, format, type, data);
	lua_pushnumber(L,lret);

	return 1;
}

// int osg::gluBuild2DMipmapLevels(unsigned int target, int internalFormat, int width, int height, unsigned int format, unsigned int type, int level, int base, int max, const void * data)
static int _bind_gluBuild2DMipmapLevels(lua_State *L) {
	if (!_lg_typecheck_gluBuild2DMipmapLevels(L)) {
		luaL_error(L, "luna typecheck failed in int osg::gluBuild2DMipmapLevels(unsigned int target, int internalFormat, int width, int height, unsigned int format, unsigned int type, int level, int base, int max, const void * data) function, expected prototype:\nint osg::gluBuild2DMipmapLevels(unsigned int target, int internalFormat, int width, int height, unsigned int format, unsigned int type, int level, int base, int max, const void * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	int internalFormat=(int)lua_tointeger(L,2);
	int width=(int)lua_tointeger(L,3);
	int height=(int)lua_tointeger(L,4);
	unsigned int format=(unsigned int)lua_tointeger(L,5);
	unsigned int type=(unsigned int)lua_tointeger(L,6);
	int level=(int)lua_tointeger(L,7);
	int base=(int)lua_tointeger(L,8);
	int max=(int)lua_tointeger(L,9);
	const void* data=(Luna< void >::check(L,10));

	int lret = osg::gluBuild2DMipmapLevels(target, internalFormat, width, height, format, type, level, base, max, data);
	lua_pushnumber(L,lret);

	return 1;
}

// int osg::gluBuild2DMipmaps(unsigned int target, int internalFormat, int width, int height, unsigned int format, unsigned int type, const void * data)
static int _bind_gluBuild2DMipmaps(lua_State *L) {
	if (!_lg_typecheck_gluBuild2DMipmaps(L)) {
		luaL_error(L, "luna typecheck failed in int osg::gluBuild2DMipmaps(unsigned int target, int internalFormat, int width, int height, unsigned int format, unsigned int type, const void * data) function, expected prototype:\nint osg::gluBuild2DMipmaps(unsigned int target, int internalFormat, int width, int height, unsigned int format, unsigned int type, const void * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	int internalFormat=(int)lua_tointeger(L,2);
	int width=(int)lua_tointeger(L,3);
	int height=(int)lua_tointeger(L,4);
	unsigned int format=(unsigned int)lua_tointeger(L,5);
	unsigned int type=(unsigned int)lua_tointeger(L,6);
	const void* data=(Luna< void >::check(L,7));

	int lret = osg::gluBuild2DMipmaps(target, internalFormat, width, height, format, type, data);
	lua_pushnumber(L,lret);

	return 1;
}

// GLUtesselator * osg::gluNewTess()
static int _bind_gluNewTess(lua_State *L) {
	if (!_lg_typecheck_gluNewTess(L)) {
		luaL_error(L, "luna typecheck failed in GLUtesselator * osg::gluNewTess() function, expected prototype:\nGLUtesselator * osg::gluNewTess()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	GLUtesselator * lret = osg::gluNewTess();
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< GLUtesselator >::push(L,lret,false);

	return 1;
}

// void osg::gluDeleteTess(GLUtesselator * tess)
static int _bind_gluDeleteTess(lua_State *L) {
	if (!_lg_typecheck_gluDeleteTess(L)) {
		luaL_error(L, "luna typecheck failed in void osg::gluDeleteTess(GLUtesselator * tess) function, expected prototype:\nvoid osg::gluDeleteTess(GLUtesselator * tess)\nClass arguments details:\narg 1 ID = 37525689\n\n%s",luna_dumpStack(L).c_str());
	}

	GLUtesselator* tess=(Luna< GLUtesselator >::check(L,1));

	osg::gluDeleteTess(tess);

	return 0;
}

// void osg::gluTessBeginContour(GLUtesselator * tess)
static int _bind_gluTessBeginContour(lua_State *L) {
	if (!_lg_typecheck_gluTessBeginContour(L)) {
		luaL_error(L, "luna typecheck failed in void osg::gluTessBeginContour(GLUtesselator * tess) function, expected prototype:\nvoid osg::gluTessBeginContour(GLUtesselator * tess)\nClass arguments details:\narg 1 ID = 37525689\n\n%s",luna_dumpStack(L).c_str());
	}

	GLUtesselator* tess=(Luna< GLUtesselator >::check(L,1));

	osg::gluTessBeginContour(tess);

	return 0;
}

// void osg::gluTessEndContour(GLUtesselator * tess)
static int _bind_gluTessEndContour(lua_State *L) {
	if (!_lg_typecheck_gluTessEndContour(L)) {
		luaL_error(L, "luna typecheck failed in void osg::gluTessEndContour(GLUtesselator * tess) function, expected prototype:\nvoid osg::gluTessEndContour(GLUtesselator * tess)\nClass arguments details:\narg 1 ID = 37525689\n\n%s",luna_dumpStack(L).c_str());
	}

	GLUtesselator* tess=(Luna< GLUtesselator >::check(L,1));

	osg::gluTessEndContour(tess);

	return 0;
}

// void osg::gluTessNormal(GLUtesselator * tess, double valueX, double valueY, double valueZ)
static int _bind_gluTessNormal(lua_State *L) {
	if (!_lg_typecheck_gluTessNormal(L)) {
		luaL_error(L, "luna typecheck failed in void osg::gluTessNormal(GLUtesselator * tess, double valueX, double valueY, double valueZ) function, expected prototype:\nvoid osg::gluTessNormal(GLUtesselator * tess, double valueX, double valueY, double valueZ)\nClass arguments details:\narg 1 ID = 37525689\n\n%s",luna_dumpStack(L).c_str());
	}

	GLUtesselator* tess=(Luna< GLUtesselator >::check(L,1));
	double valueX=(double)lua_tonumber(L,2);
	double valueY=(double)lua_tonumber(L,3);
	double valueZ=(double)lua_tonumber(L,4);

	osg::gluTessNormal(tess, valueX, valueY, valueZ);

	return 0;
}

// void osg::gluTessProperty(GLUtesselator * tess, unsigned int which, double data)
static int _bind_gluTessProperty(lua_State *L) {
	if (!_lg_typecheck_gluTessProperty(L)) {
		luaL_error(L, "luna typecheck failed in void osg::gluTessProperty(GLUtesselator * tess, unsigned int which, double data) function, expected prototype:\nvoid osg::gluTessProperty(GLUtesselator * tess, unsigned int which, double data)\nClass arguments details:\narg 1 ID = 37525689\n\n%s",luna_dumpStack(L).c_str());
	}

	GLUtesselator* tess=(Luna< GLUtesselator >::check(L,1));
	unsigned int which=(unsigned int)lua_tointeger(L,2);
	double data=(double)lua_tonumber(L,3);

	osg::gluTessProperty(tess, which, data);

	return 0;
}

// void osg::gluTessVertex(GLUtesselator * tess, double * location, void * data)
static int _bind_gluTessVertex(lua_State *L) {
	if (!_lg_typecheck_gluTessVertex(L)) {
		luaL_error(L, "luna typecheck failed in void osg::gluTessVertex(GLUtesselator * tess, double * location, void * data) function, expected prototype:\nvoid osg::gluTessVertex(GLUtesselator * tess, double * location, void * data)\nClass arguments details:\narg 1 ID = 37525689\n\n%s",luna_dumpStack(L).c_str());
	}

	GLUtesselator* tess=(Luna< GLUtesselator >::check(L,1));
	double* location=(double*)Luna< void >::check(L,2);
	void* data=(Luna< void >::check(L,3));

	osg::gluTessVertex(tess, location, data);

	return 0;
}

// void osg::gluTessBeginPolygon(GLUtesselator * tess, void * data)
static int _bind_gluTessBeginPolygon(lua_State *L) {
	if (!_lg_typecheck_gluTessBeginPolygon(L)) {
		luaL_error(L, "luna typecheck failed in void osg::gluTessBeginPolygon(GLUtesselator * tess, void * data) function, expected prototype:\nvoid osg::gluTessBeginPolygon(GLUtesselator * tess, void * data)\nClass arguments details:\narg 1 ID = 37525689\n\n%s",luna_dumpStack(L).c_str());
	}

	GLUtesselator* tess=(Luna< GLUtesselator >::check(L,1));
	void* data=(Luna< void >::check(L,2));

	osg::gluTessBeginPolygon(tess, data);

	return 0;
}

// void osg::gluTessEndPolygon(GLUtesselator * tess)
static int _bind_gluTessEndPolygon(lua_State *L) {
	if (!_lg_typecheck_gluTessEndPolygon(L)) {
		luaL_error(L, "luna typecheck failed in void osg::gluTessEndPolygon(GLUtesselator * tess) function, expected prototype:\nvoid osg::gluTessEndPolygon(GLUtesselator * tess)\nClass arguments details:\narg 1 ID = 37525689\n\n%s",luna_dumpStack(L).c_str());
	}

	GLUtesselator* tess=(Luna< GLUtesselator >::check(L,1));

	osg::gluTessEndPolygon(tess);

	return 0;
}

// void osg::gluGetTessProperty(GLUtesselator * tess, unsigned int which, double * value)
static int _bind_gluGetTessProperty(lua_State *L) {
	if (!_lg_typecheck_gluGetTessProperty(L)) {
		luaL_error(L, "luna typecheck failed in void osg::gluGetTessProperty(GLUtesselator * tess, unsigned int which, double * value) function, expected prototype:\nvoid osg::gluGetTessProperty(GLUtesselator * tess, unsigned int which, double * value)\nClass arguments details:\narg 1 ID = 37525689\n\n%s",luna_dumpStack(L).c_str());
	}

	GLUtesselator* tess=(Luna< GLUtesselator >::check(L,1));
	unsigned int which=(unsigned int)lua_tointeger(L,2);
	double* value=(double*)Luna< void >::check(L,3);

	osg::gluGetTessProperty(tess, which, value);

	return 0;
}

// osg::Geode * osg::createGeodeForImage(osg::Image * image)
static int _bind_createGeodeForImage_overload_1(lua_State *L) {
	if (!_lg_typecheck_createGeodeForImage_overload_1(L)) {
		luaL_error(L, "luna typecheck failed in osg::Geode * osg::createGeodeForImage(osg::Image * image) function, expected prototype:\nosg::Geode * osg::createGeodeForImage(osg::Image * image)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
	}

	osg::Image* image=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,1));

	osg::Geode * lret = osg::createGeodeForImage(image);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::Geode >::push(L,lret,false);

	return 1;
}

// osg::Geode * osg::createGeodeForImage(osg::Image * image, float s, float t)
static int _bind_createGeodeForImage_overload_2(lua_State *L) {
	if (!_lg_typecheck_createGeodeForImage_overload_2(L)) {
		luaL_error(L, "luna typecheck failed in osg::Geode * osg::createGeodeForImage(osg::Image * image, float s, float t) function, expected prototype:\nosg::Geode * osg::createGeodeForImage(osg::Image * image, float s, float t)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
	}

	osg::Image* image=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,1));
	float s=(float)lua_tonumber(L,2);
	float t=(float)lua_tonumber(L,3);

	osg::Geode * lret = osg::createGeodeForImage(image, s, t);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::Geode >::push(L,lret,false);

	return 1;
}

// Overload binder for osg::createGeodeForImage
static int _bind_createGeodeForImage(lua_State *L) {
	if (_lg_typecheck_createGeodeForImage_overload_1(L)) return _bind_createGeodeForImage_overload_1(L);
	if (_lg_typecheck_createGeodeForImage_overload_2(L)) return _bind_createGeodeForImage_overload_2(L);

	luaL_error(L, "error in function createGeodeForImage, cannot match any of the overloads for function createGeodeForImage:\n  createGeodeForImage(osg::Image *)\n  createGeodeForImage(osg::Image *, float, float)\n");
	return 0;
}

// bool osg::computeMinMax(const osg::Image * image, osg::Vec4f & min, osg::Vec4f & max)
static int _bind_computeMinMax(lua_State *L) {
	if (!_lg_typecheck_computeMinMax(L)) {
		luaL_error(L, "luna typecheck failed in bool osg::computeMinMax(const osg::Image * image, osg::Vec4f & min, osg::Vec4f & max) function, expected prototype:\nbool osg::computeMinMax(const osg::Image * image, osg::Vec4f & min, osg::Vec4f & max)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 92303235\narg 3 ID = 92303235\n\n%s",luna_dumpStack(L).c_str());
	}

	const osg::Image* image=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,1));
	osg::Vec4f* min_ptr=(Luna< osg::Vec4f >::check(L,2));
	if( !min_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg min in osg::computeMinMax function");
	}
	osg::Vec4f & min=*min_ptr;
	osg::Vec4f* max_ptr=(Luna< osg::Vec4f >::check(L,3));
	if( !max_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg max in osg::computeMinMax function");
	}
	osg::Vec4f & max=*max_ptr;

	bool lret = osg::computeMinMax(image, min, max);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// bool osg::offsetAndScaleImage(osg::Image * image, const osg::Vec4f & offset, const osg::Vec4f & scale)
static int _bind_offsetAndScaleImage(lua_State *L) {
	if (!_lg_typecheck_offsetAndScaleImage(L)) {
		luaL_error(L, "luna typecheck failed in bool osg::offsetAndScaleImage(osg::Image * image, const osg::Vec4f & offset, const osg::Vec4f & scale) function, expected prototype:\nbool osg::offsetAndScaleImage(osg::Image * image, const osg::Vec4f & offset, const osg::Vec4f & scale)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 92303235\narg 3 ID = 92303235\n\n%s",luna_dumpStack(L).c_str());
	}

	osg::Image* image=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,1));
	const osg::Vec4f* offset_ptr=(Luna< osg::Vec4f >::check(L,2));
	if( !offset_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg offset in osg::offsetAndScaleImage function");
	}
	const osg::Vec4f & offset=*offset_ptr;
	const osg::Vec4f* scale_ptr=(Luna< osg::Vec4f >::check(L,3));
	if( !scale_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg scale in osg::offsetAndScaleImage function");
	}
	const osg::Vec4f & scale=*scale_ptr;

	bool lret = osg::offsetAndScaleImage(image, offset, scale);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// bool osg::copyImage(const osg::Image * srcImage, int src_s, int src_t, int src_r, int width, int height, int depth, osg::Image * destImage, int dest_s, int dest_t, int dest_r, bool doRescale = false)
static int _bind_copyImage(lua_State *L) {
	if (!_lg_typecheck_copyImage(L)) {
		luaL_error(L, "luna typecheck failed in bool osg::copyImage(const osg::Image * srcImage, int src_s, int src_t, int src_r, int width, int height, int depth, osg::Image * destImage, int dest_s, int dest_t, int dest_r, bool doRescale = false) function, expected prototype:\nbool osg::copyImage(const osg::Image * srcImage, int src_s, int src_t, int src_r, int width, int height, int depth, osg::Image * destImage, int dest_s, int dest_t, int dest_r, bool doRescale = false)\nClass arguments details:\narg 1 ID = 50169651\narg 8 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
	}

	int luatop = lua_gettop(L);

	const osg::Image* srcImage=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,1));
	int src_s=(int)lua_tointeger(L,2);
	int src_t=(int)lua_tointeger(L,3);
	int src_r=(int)lua_tointeger(L,4);
	int width=(int)lua_tointeger(L,5);
	int height=(int)lua_tointeger(L,6);
	int depth=(int)lua_tointeger(L,7);
	osg::Image* destImage=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,8));
	int dest_s=(int)lua_tointeger(L,9);
	int dest_t=(int)lua_tointeger(L,10);
	int dest_r=(int)lua_tointeger(L,11);
	bool doRescale=luatop>11 ? (bool)(lua_toboolean(L,12)==1) : (bool)false;

	bool lret = osg::copyImage(srcImage, src_s, src_t, src_r, width, height, depth, destImage, dest_s, dest_t, dest_r, doRescale);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// bool osg::clearImageToColor(osg::Image * image, const osg::Vec4f & colour)
static int _bind_clearImageToColor(lua_State *L) {
	if (!_lg_typecheck_clearImageToColor(L)) {
		luaL_error(L, "luna typecheck failed in bool osg::clearImageToColor(osg::Image * image, const osg::Vec4f & colour) function, expected prototype:\nbool osg::clearImageToColor(osg::Image * image, const osg::Vec4f & colour)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 92303235\n\n%s",luna_dumpStack(L).c_str());
	}

	osg::Image* image=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,1));
	const osg::Vec4f* colour_ptr=(Luna< osg::Vec4f >::check(L,2));
	if( !colour_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg colour in osg::clearImageToColor function");
	}
	const osg::Vec4f & colour=*colour_ptr;

	bool lret = osg::clearImageToColor(image, colour);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// unsigned int osg::maximimNumOfComponents(const osg::ImageList & imageList)
static int _bind_maximimNumOfComponents(lua_State *L) {
	if (!_lg_typecheck_maximimNumOfComponents(L)) {
		luaL_error(L, "luna typecheck failed in unsigned int osg::maximimNumOfComponents(const osg::ImageList & imageList) function, expected prototype:\nunsigned int osg::maximimNumOfComponents(const osg::ImageList & imageList)\nClass arguments details:\narg 1 ID = 71630045\n\n%s",luna_dumpStack(L).c_str());
	}

	const osg::ImageList* imageList_ptr=(Luna< std::vector< osg::ref_ptr< osg::Image > > >::checkSubType< osg::ImageList >(L,1));
	if( !imageList_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg imageList in osg::maximimNumOfComponents function");
	}
	const osg::ImageList & imageList=*imageList_ptr;

	unsigned int lret = osg::maximimNumOfComponents(imageList);
	lua_pushnumber(L,lret);

	return 1;
}

// osg::Image * osg::createImage3D(const osg::ImageList & imageList, unsigned int desiredPixelFormat, int s_maximumImageSize = 1024, int t_maximumImageSize = 1024, int r_maximumImageSize = 1024, bool resizeToPowerOfTwo = false)
static int _bind_createImage3D(lua_State *L) {
	if (!_lg_typecheck_createImage3D(L)) {
		luaL_error(L, "luna typecheck failed in osg::Image * osg::createImage3D(const osg::ImageList & imageList, unsigned int desiredPixelFormat, int s_maximumImageSize = 1024, int t_maximumImageSize = 1024, int r_maximumImageSize = 1024, bool resizeToPowerOfTwo = false) function, expected prototype:\nosg::Image * osg::createImage3D(const osg::ImageList & imageList, unsigned int desiredPixelFormat, int s_maximumImageSize = 1024, int t_maximumImageSize = 1024, int r_maximumImageSize = 1024, bool resizeToPowerOfTwo = false)\nClass arguments details:\narg 1 ID = 71630045\n\n%s",luna_dumpStack(L).c_str());
	}

	int luatop = lua_gettop(L);

	const osg::ImageList* imageList_ptr=(Luna< std::vector< osg::ref_ptr< osg::Image > > >::checkSubType< osg::ImageList >(L,1));
	if( !imageList_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg imageList in osg::createImage3D function");
	}
	const osg::ImageList & imageList=*imageList_ptr;
	unsigned int desiredPixelFormat=(unsigned int)lua_tointeger(L,2);
	int s_maximumImageSize=luatop>2 ? (int)lua_tointeger(L,3) : (int)1024;
	int t_maximumImageSize=luatop>3 ? (int)lua_tointeger(L,4) : (int)1024;
	int r_maximumImageSize=luatop>4 ? (int)lua_tointeger(L,5) : (int)1024;
	bool resizeToPowerOfTwo=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : (bool)false;

	osg::Image * lret = osg::createImage3D(imageList, desiredPixelFormat, s_maximumImageSize, t_maximumImageSize, r_maximumImageSize, resizeToPowerOfTwo);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::Image >::push(L,lret,false);

	return 1;
}

// osg::Image * osg::createImage3DWithAlpha(const osg::ImageList & imageList, int s_maximumImageSize = 1024, int t_maximumImageSize = 1024, int r_maximumImageSize = 1024, bool resizeToPowerOfTwo = false)
static int _bind_createImage3DWithAlpha(lua_State *L) {
	if (!_lg_typecheck_createImage3DWithAlpha(L)) {
		luaL_error(L, "luna typecheck failed in osg::Image * osg::createImage3DWithAlpha(const osg::ImageList & imageList, int s_maximumImageSize = 1024, int t_maximumImageSize = 1024, int r_maximumImageSize = 1024, bool resizeToPowerOfTwo = false) function, expected prototype:\nosg::Image * osg::createImage3DWithAlpha(const osg::ImageList & imageList, int s_maximumImageSize = 1024, int t_maximumImageSize = 1024, int r_maximumImageSize = 1024, bool resizeToPowerOfTwo = false)\nClass arguments details:\narg 1 ID = 71630045\n\n%s",luna_dumpStack(L).c_str());
	}

	int luatop = lua_gettop(L);

	const osg::ImageList* imageList_ptr=(Luna< std::vector< osg::ref_ptr< osg::Image > > >::checkSubType< osg::ImageList >(L,1));
	if( !imageList_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg imageList in osg::createImage3DWithAlpha function");
	}
	const osg::ImageList & imageList=*imageList_ptr;
	int s_maximumImageSize=luatop>1 ? (int)lua_tointeger(L,2) : (int)1024;
	int t_maximumImageSize=luatop>2 ? (int)lua_tointeger(L,3) : (int)1024;
	int r_maximumImageSize=luatop>3 ? (int)lua_tointeger(L,4) : (int)1024;
	bool resizeToPowerOfTwo=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : (bool)false;

	osg::Image * lret = osg::createImage3DWithAlpha(imageList, s_maximumImageSize, t_maximumImageSize, r_maximumImageSize, resizeToPowerOfTwo);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::Image >::push(L,lret,false);

	return 1;
}

// osg::Image * osg::createSpotLightImage(const osg::Vec4f & centerColour, const osg::Vec4f & backgroudColour, unsigned int size, float power)
static int _bind_createSpotLightImage(lua_State *L) {
	if (!_lg_typecheck_createSpotLightImage(L)) {
		luaL_error(L, "luna typecheck failed in osg::Image * osg::createSpotLightImage(const osg::Vec4f & centerColour, const osg::Vec4f & backgroudColour, unsigned int size, float power) function, expected prototype:\nosg::Image * osg::createSpotLightImage(const osg::Vec4f & centerColour, const osg::Vec4f & backgroudColour, unsigned int size, float power)\nClass arguments details:\narg 1 ID = 92303235\narg 2 ID = 92303235\n\n%s",luna_dumpStack(L).c_str());
	}

	const osg::Vec4f* centerColour_ptr=(Luna< osg::Vec4f >::check(L,1));
	if( !centerColour_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg centerColour in osg::createSpotLightImage function");
	}
	const osg::Vec4f & centerColour=*centerColour_ptr;
	const osg::Vec4f* backgroudColour_ptr=(Luna< osg::Vec4f >::check(L,2));
	if( !backgroudColour_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg backgroudColour in osg::createSpotLightImage function");
	}
	const osg::Vec4f & backgroudColour=*backgroudColour_ptr;
	unsigned int size=(unsigned int)lua_tointeger(L,3);
	float power=(float)lua_tonumber(L,4);

	osg::Image * lret = osg::createSpotLightImage(centerColour, backgroudColour, size, power);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::Image >::push(L,lret,false);

	return 1;
}

// osg::Image * osg::colorSpaceConversion(osg::ColorSpaceOperation op, osg::Image * image, const osg::Vec4f & colour)
static int _bind_colorSpaceConversion(lua_State *L) {
	if (!_lg_typecheck_colorSpaceConversion(L)) {
		luaL_error(L, "luna typecheck failed in osg::Image * osg::colorSpaceConversion(osg::ColorSpaceOperation op, osg::Image * image, const osg::Vec4f & colour) function, expected prototype:\nosg::Image * osg::colorSpaceConversion(osg::ColorSpaceOperation op, osg::Image * image, const osg::Vec4f & colour)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 92303235\n\n%s",luna_dumpStack(L).c_str());
	}

	osg::ColorSpaceOperation op=(osg::ColorSpaceOperation)lua_tointeger(L,1);
	osg::Image* image=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,2));
	const osg::Vec4f* colour_ptr=(Luna< osg::Vec4f >::check(L,3));
	if( !colour_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg colour in osg::colorSpaceConversion function");
	}
	const osg::Vec4f & colour=*colour_ptr;

	osg::Image * lret = osg::colorSpaceConversion(op, image, colour);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::Image >::push(L,lret,false);

	return 1;
}

// bool osg::equivalent(float lhs, float rhs, float epsilon = 1e-6)
static int _bind_equivalent_overload_1(lua_State *L) {
	if (!_lg_typecheck_equivalent_overload_1(L)) {
		luaL_error(L, "luna typecheck failed in bool osg::equivalent(float lhs, float rhs, float epsilon = 1e-6) function, expected prototype:\nbool osg::equivalent(float lhs, float rhs, float epsilon = 1e-6)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int luatop = lua_gettop(L);

	float lhs=(float)lua_tonumber(L,1);
	float rhs=(float)lua_tonumber(L,2);
	float epsilon=luatop>2 ? (float)lua_tonumber(L,3) : (float)1e-6;

	bool lret = osg::equivalent(lhs, rhs, epsilon);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// bool osg::equivalent(double lhs, double rhs, double epsilon = 1e-6)
static int _bind_equivalent_overload_2(lua_State *L) {
	if (!_lg_typecheck_equivalent_overload_2(L)) {
		luaL_error(L, "luna typecheck failed in bool osg::equivalent(double lhs, double rhs, double epsilon = 1e-6) function, expected prototype:\nbool osg::equivalent(double lhs, double rhs, double epsilon = 1e-6)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int luatop = lua_gettop(L);

	double lhs=(double)lua_tonumber(L,1);
	double rhs=(double)lua_tonumber(L,2);
	double epsilon=luatop>2 ? (double)lua_tonumber(L,3) : (double)1e-6;

	bool lret = osg::equivalent(lhs, rhs, epsilon);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// Overload binder for osg::equivalent
static int _bind_equivalent(lua_State *L) {
	if (_lg_typecheck_equivalent_overload_1(L)) return _bind_equivalent_overload_1(L);
	if (_lg_typecheck_equivalent_overload_2(L)) return _bind_equivalent_overload_2(L);

	luaL_error(L, "error in function equivalent, cannot match any of the overloads for function equivalent:\n  equivalent(float, float, float)\n  equivalent(double, double, double)\n");
	return 0;
}

// float osg::inDegrees(float angle)
static int _bind_inDegrees_overload_1(lua_State *L) {
	if (!_lg_typecheck_inDegrees_overload_1(L)) {
		luaL_error(L, "luna typecheck failed in float osg::inDegrees(float angle) function, expected prototype:\nfloat osg::inDegrees(float angle)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	float angle=(float)lua_tonumber(L,1);

	float lret = osg::inDegrees(angle);
	lua_pushnumber(L,lret);

	return 1;
}

// double osg::inDegrees(double angle)
static int _bind_inDegrees_overload_2(lua_State *L) {
	if (!_lg_typecheck_inDegrees_overload_2(L)) {
		luaL_error(L, "luna typecheck failed in double osg::inDegrees(double angle) function, expected prototype:\ndouble osg::inDegrees(double angle)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	double angle=(double)lua_tonumber(L,1);

	double lret = osg::inDegrees(angle);
	lua_pushnumber(L,lret);

	return 1;
}

// Overload binder for osg::inDegrees
static int _bind_inDegrees(lua_State *L) {
	if (_lg_typecheck_inDegrees_overload_1(L)) return _bind_inDegrees_overload_1(L);
	if (_lg_typecheck_inDegrees_overload_2(L)) return _bind_inDegrees_overload_2(L);

	luaL_error(L, "error in function inDegrees, cannot match any of the overloads for function inDegrees:\n  inDegrees(float)\n  inDegrees(double)\n");
	return 0;
}

// float osg::DegreesToRadians(float angle)
static int _bind_DegreesToRadians_overload_1(lua_State *L) {
	if (!_lg_typecheck_DegreesToRadians_overload_1(L)) {
		luaL_error(L, "luna typecheck failed in float osg::DegreesToRadians(float angle) function, expected prototype:\nfloat osg::DegreesToRadians(float angle)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	float angle=(float)lua_tonumber(L,1);

	float lret = osg::DegreesToRadians(angle);
	lua_pushnumber(L,lret);

	return 1;
}

// double osg::DegreesToRadians(double angle)
static int _bind_DegreesToRadians_overload_2(lua_State *L) {
	if (!_lg_typecheck_DegreesToRadians_overload_2(L)) {
		luaL_error(L, "luna typecheck failed in double osg::DegreesToRadians(double angle) function, expected prototype:\ndouble osg::DegreesToRadians(double angle)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	double angle=(double)lua_tonumber(L,1);

	double lret = osg::DegreesToRadians(angle);
	lua_pushnumber(L,lret);

	return 1;
}

// Overload binder for osg::DegreesToRadians
static int _bind_DegreesToRadians(lua_State *L) {
	if (_lg_typecheck_DegreesToRadians_overload_1(L)) return _bind_DegreesToRadians_overload_1(L);
	if (_lg_typecheck_DegreesToRadians_overload_2(L)) return _bind_DegreesToRadians_overload_2(L);

	luaL_error(L, "error in function DegreesToRadians, cannot match any of the overloads for function DegreesToRadians:\n  DegreesToRadians(float)\n  DegreesToRadians(double)\n");
	return 0;
}

// float osg::RadiansToDegrees(float angle)
static int _bind_RadiansToDegrees_overload_1(lua_State *L) {
	if (!_lg_typecheck_RadiansToDegrees_overload_1(L)) {
		luaL_error(L, "luna typecheck failed in float osg::RadiansToDegrees(float angle) function, expected prototype:\nfloat osg::RadiansToDegrees(float angle)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	float angle=(float)lua_tonumber(L,1);

	float lret = osg::RadiansToDegrees(angle);
	lua_pushnumber(L,lret);

	return 1;
}

// double osg::RadiansToDegrees(double angle)
static int _bind_RadiansToDegrees_overload_2(lua_State *L) {
	if (!_lg_typecheck_RadiansToDegrees_overload_2(L)) {
		luaL_error(L, "luna typecheck failed in double osg::RadiansToDegrees(double angle) function, expected prototype:\ndouble osg::RadiansToDegrees(double angle)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	double angle=(double)lua_tonumber(L,1);

	double lret = osg::RadiansToDegrees(angle);
	lua_pushnumber(L,lret);

	return 1;
}

// Overload binder for osg::RadiansToDegrees
static int _bind_RadiansToDegrees(lua_State *L) {
	if (_lg_typecheck_RadiansToDegrees_overload_1(L)) return _bind_RadiansToDegrees_overload_1(L);
	if (_lg_typecheck_RadiansToDegrees_overload_2(L)) return _bind_RadiansToDegrees_overload_2(L);

	luaL_error(L, "error in function RadiansToDegrees, cannot match any of the overloads for function RadiansToDegrees:\n  RadiansToDegrees(float)\n  RadiansToDegrees(double)\n");
	return 0;
}

// float osg::round(float v)
static int _bind_round_overload_1(lua_State *L) {
	if (!_lg_typecheck_round_overload_1(L)) {
		luaL_error(L, "luna typecheck failed in float osg::round(float v) function, expected prototype:\nfloat osg::round(float v)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	float v=(float)lua_tonumber(L,1);

	float lret = osg::round(v);
	lua_pushnumber(L,lret);

	return 1;
}

// double osg::round(double v)
static int _bind_round_overload_2(lua_State *L) {
	if (!_lg_typecheck_round_overload_2(L)) {
		luaL_error(L, "luna typecheck failed in double osg::round(double v) function, expected prototype:\ndouble osg::round(double v)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	double v=(double)lua_tonumber(L,1);

	double lret = osg::round(v);
	lua_pushnumber(L,lret);

	return 1;
}

// Overload binder for osg::round
static int _bind_round(lua_State *L) {
	if (_lg_typecheck_round_overload_1(L)) return _bind_round_overload_1(L);
	if (_lg_typecheck_round_overload_2(L)) return _bind_round_overload_2(L);

	luaL_error(L, "error in function round, cannot match any of the overloads for function round:\n  round(float)\n  round(double)\n");
	return 0;
}

// bool osg::isNaN(double v)
static int _bind_isNaN(lua_State *L) {
	if (!_lg_typecheck_isNaN(L)) {
		luaL_error(L, "luna typecheck failed in bool osg::isNaN(double v) function, expected prototype:\nbool osg::isNaN(double v)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	double v=(double)lua_tonumber(L,1);

	bool lret = osg::isNaN(v);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// double osg::asciiToDouble(const char * str)
static int _bind_asciiToDouble(lua_State *L) {
	if (!_lg_typecheck_asciiToDouble(L)) {
		luaL_error(L, "luna typecheck failed in double osg::asciiToDouble(const char * str) function, expected prototype:\ndouble osg::asciiToDouble(const char * str)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	const char * str=(const char *)lua_tostring(L,1);

	double lret = osg::asciiToDouble(str);
	lua_pushnumber(L,lret);

	return 1;
}

// float osg::asciiToFloat(const char * str)
static int _bind_asciiToFloat(lua_State *L) {
	if (!_lg_typecheck_asciiToFloat(L)) {
		luaL_error(L, "luna typecheck failed in float osg::asciiToFloat(const char * str) function, expected prototype:\nfloat osg::asciiToFloat(const char * str)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	const char * str=(const char *)lua_tostring(L,1);

	float lret = osg::asciiToFloat(str);
	lua_pushnumber(L,lret);

	return 1;
}

// double osg::findAsciiToDouble(const char * str)
static int _bind_findAsciiToDouble(lua_State *L) {
	if (!_lg_typecheck_findAsciiToDouble(L)) {
		luaL_error(L, "luna typecheck failed in double osg::findAsciiToDouble(const char * str) function, expected prototype:\ndouble osg::findAsciiToDouble(const char * str)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	const char * str=(const char *)lua_tostring(L,1);

	double lret = osg::findAsciiToDouble(str);
	lua_pushnumber(L,lret);

	return 1;
}

// float osg::findAsciiToFloat(const char * str)
static int _bind_findAsciiToFloat(lua_State *L) {
	if (!_lg_typecheck_findAsciiToFloat(L)) {
		luaL_error(L, "luna typecheck failed in float osg::findAsciiToFloat(const char * str) function, expected prototype:\nfloat osg::findAsciiToFloat(const char * str)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	const char * str=(const char *)lua_tostring(L,1);

	float lret = osg::findAsciiToFloat(str);
	lua_pushnumber(L,lret);

	return 1;
}

// void osg::setNotifyLevel(osg::NotifySeverity severity)
static int _bind_setNotifyLevel(lua_State *L) {
	if (!_lg_typecheck_setNotifyLevel(L)) {
		luaL_error(L, "luna typecheck failed in void osg::setNotifyLevel(osg::NotifySeverity severity) function, expected prototype:\nvoid osg::setNotifyLevel(osg::NotifySeverity severity)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	osg::NotifySeverity severity=(osg::NotifySeverity)lua_tointeger(L,1);

	osg::setNotifyLevel(severity);

	return 0;
}

// osg::NotifySeverity osg::getNotifyLevel()
static int _bind_getNotifyLevel(lua_State *L) {
	if (!_lg_typecheck_getNotifyLevel(L)) {
		luaL_error(L, "luna typecheck failed in osg::NotifySeverity osg::getNotifyLevel() function, expected prototype:\nosg::NotifySeverity osg::getNotifyLevel()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	osg::NotifySeverity lret = osg::getNotifyLevel();
	lua_pushnumber(L,lret);

	return 1;
}

// bool osg::initNotifyLevel()
static int _bind_initNotifyLevel(lua_State *L) {
	if (!_lg_typecheck_initNotifyLevel(L)) {
		luaL_error(L, "luna typecheck failed in bool osg::initNotifyLevel() function, expected prototype:\nbool osg::initNotifyLevel()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	bool lret = osg::initNotifyLevel();
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// bool osg::isNotifyEnabled(osg::NotifySeverity severity)
static int _bind_isNotifyEnabled(lua_State *L) {
	if (!_lg_typecheck_isNotifyEnabled(L)) {
		luaL_error(L, "luna typecheck failed in bool osg::isNotifyEnabled(osg::NotifySeverity severity) function, expected prototype:\nbool osg::isNotifyEnabled(osg::NotifySeverity severity)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	osg::NotifySeverity severity=(osg::NotifySeverity)lua_tointeger(L,1);

	bool lret = osg::isNotifyEnabled(severity);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// std::ostream & osg::notify(const osg::NotifySeverity severity)
static int _bind_notify_overload_1(lua_State *L) {
	if (!_lg_typecheck_notify_overload_1(L)) {
		luaL_error(L, "luna typecheck failed in std::ostream & osg::notify(const osg::NotifySeverity severity) function, expected prototype:\nstd::ostream & osg::notify(const osg::NotifySeverity severity)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	const osg::NotifySeverity severity=(const osg::NotifySeverity)lua_tointeger(L,1);

	const std::ostream* lret = &osg::notify(severity);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< std::ostream >::push(L,lret,false);

	return 1;
}

// std::ostream & osg::notify()
static int _bind_notify_overload_2(lua_State *L) {
	if (!_lg_typecheck_notify_overload_2(L)) {
		luaL_error(L, "luna typecheck failed in std::ostream & osg::notify() function, expected prototype:\nstd::ostream & osg::notify()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	const std::ostream* lret = &osg::notify();
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< std::ostream >::push(L,lret,false);

	return 1;
}

// Overload binder for osg::notify
static int _bind_notify(lua_State *L) {
	if (_lg_typecheck_notify_overload_1(L)) return _bind_notify_overload_1(L);
	if (_lg_typecheck_notify_overload_2(L)) return _bind_notify_overload_2(L);

	luaL_error(L, "error in function notify, cannot match any of the overloads for function notify:\n  notify(const osg::NotifySeverity)\n  notify()\n");
	return 0;
}

// void osg::setNotifyHandler(osg::NotifyHandler * handler)
static int _bind_setNotifyHandler(lua_State *L) {
	if (!_lg_typecheck_setNotifyHandler(L)) {
		luaL_error(L, "luna typecheck failed in void osg::setNotifyHandler(osg::NotifyHandler * handler) function, expected prototype:\nvoid osg::setNotifyHandler(osg::NotifyHandler * handler)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
	}

	osg::NotifyHandler* handler=(Luna< osg::Referenced >::checkSubType< osg::NotifyHandler >(L,1));

	osg::setNotifyHandler(handler);

	return 0;
}

// osg::NotifyHandler * osg::getNotifyHandler()
static int _bind_getNotifyHandler(lua_State *L) {
	if (!_lg_typecheck_getNotifyHandler(L)) {
		luaL_error(L, "luna typecheck failed in osg::NotifyHandler * osg::getNotifyHandler() function, expected prototype:\nosg::NotifyHandler * osg::getNotifyHandler()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	osg::NotifyHandler * lret = osg::getNotifyHandler();
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::NotifyHandler >::push(L,lret,false);

	return 1;
}

// bool osg::isTextureMode(unsigned int mode)
static int _bind_isTextureMode(lua_State *L) {
	if (!_lg_typecheck_isTextureMode(L)) {
		luaL_error(L, "luna typecheck failed in bool osg::isTextureMode(unsigned int mode) function, expected prototype:\nbool osg::isTextureMode(unsigned int mode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int mode=(unsigned int)lua_tointeger(L,1);

	bool lret = osg::isTextureMode(mode);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// osg::Matrixd osg::computeLocalToWorld(const osg::NodePath & nodePath, bool ignoreCameras = true)
static int _bind_computeLocalToWorld(lua_State *L) {
	if (!_lg_typecheck_computeLocalToWorld(L)) {
		luaL_error(L, "luna typecheck failed in osg::Matrixd osg::computeLocalToWorld(const osg::NodePath & nodePath, bool ignoreCameras = true) function, expected prototype:\nosg::Matrixd osg::computeLocalToWorld(const osg::NodePath & nodePath, bool ignoreCameras = true)\nClass arguments details:\narg 1 ID = 52841328\n\n%s",luna_dumpStack(L).c_str());
	}

	int luatop = lua_gettop(L);

	const osg::NodePath* nodePath_ptr=(Luna< osg::NodePath >::check(L,1));
	if( !nodePath_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg nodePath in osg::computeLocalToWorld function");
	}
	const osg::NodePath & nodePath=*nodePath_ptr;
	bool ignoreCameras=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

	osg::Matrixd stack_lret = osg::computeLocalToWorld(nodePath, ignoreCameras);
	osg::Matrixd* lret = new osg::Matrixd(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::Matrixd >::push(L,lret,true);

	return 1;
}

// osg::Matrixd osg::computeWorldToLocal(const osg::NodePath & nodePath, bool ignoreCameras = true)
static int _bind_computeWorldToLocal(lua_State *L) {
	if (!_lg_typecheck_computeWorldToLocal(L)) {
		luaL_error(L, "luna typecheck failed in osg::Matrixd osg::computeWorldToLocal(const osg::NodePath & nodePath, bool ignoreCameras = true) function, expected prototype:\nosg::Matrixd osg::computeWorldToLocal(const osg::NodePath & nodePath, bool ignoreCameras = true)\nClass arguments details:\narg 1 ID = 52841328\n\n%s",luna_dumpStack(L).c_str());
	}

	int luatop = lua_gettop(L);

	const osg::NodePath* nodePath_ptr=(Luna< osg::NodePath >::check(L,1));
	if( !nodePath_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg nodePath in osg::computeWorldToLocal function");
	}
	const osg::NodePath & nodePath=*nodePath_ptr;
	bool ignoreCameras=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

	osg::Matrixd stack_lret = osg::computeWorldToLocal(nodePath, ignoreCameras);
	osg::Matrixd* lret = new osg::Matrixd(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::Matrixd >::push(L,lret,true);

	return 1;
}

// osg::Matrixd osg::computeLocalToEye(const osg::Matrixd & modelview, const osg::NodePath & nodePath, bool ignoreCameras = true)
static int _bind_computeLocalToEye(lua_State *L) {
	if (!_lg_typecheck_computeLocalToEye(L)) {
		luaL_error(L, "luna typecheck failed in osg::Matrixd osg::computeLocalToEye(const osg::Matrixd & modelview, const osg::NodePath & nodePath, bool ignoreCameras = true) function, expected prototype:\nosg::Matrixd osg::computeLocalToEye(const osg::Matrixd & modelview, const osg::NodePath & nodePath, bool ignoreCameras = true)\nClass arguments details:\narg 1 ID = 18903838\narg 2 ID = 52841328\n\n%s",luna_dumpStack(L).c_str());
	}

	int luatop = lua_gettop(L);

	const osg::Matrixd* modelview_ptr=(Luna< osg::Matrixd >::check(L,1));
	if( !modelview_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg modelview in osg::computeLocalToEye function");
	}
	const osg::Matrixd & modelview=*modelview_ptr;
	const osg::NodePath* nodePath_ptr=(Luna< osg::NodePath >::check(L,2));
	if( !nodePath_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg nodePath in osg::computeLocalToEye function");
	}
	const osg::NodePath & nodePath=*nodePath_ptr;
	bool ignoreCameras=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

	osg::Matrixd stack_lret = osg::computeLocalToEye(modelview, nodePath, ignoreCameras);
	osg::Matrixd* lret = new osg::Matrixd(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::Matrixd >::push(L,lret,true);

	return 1;
}

// osg::Matrixd osg::computeEyeToLocal(const osg::Matrixd & modelview, const osg::NodePath & nodePath, bool ignoreCameras = true)
static int _bind_computeEyeToLocal(lua_State *L) {
	if (!_lg_typecheck_computeEyeToLocal(L)) {
		luaL_error(L, "luna typecheck failed in osg::Matrixd osg::computeEyeToLocal(const osg::Matrixd & modelview, const osg::NodePath & nodePath, bool ignoreCameras = true) function, expected prototype:\nosg::Matrixd osg::computeEyeToLocal(const osg::Matrixd & modelview, const osg::NodePath & nodePath, bool ignoreCameras = true)\nClass arguments details:\narg 1 ID = 18903838\narg 2 ID = 52841328\n\n%s",luna_dumpStack(L).c_str());
	}

	int luatop = lua_gettop(L);

	const osg::Matrixd* modelview_ptr=(Luna< osg::Matrixd >::check(L,1));
	if( !modelview_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg modelview in osg::computeEyeToLocal function");
	}
	const osg::Matrixd & modelview=*modelview_ptr;
	const osg::NodePath* nodePath_ptr=(Luna< osg::NodePath >::check(L,2));
	if( !nodePath_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg nodePath in osg::computeEyeToLocal function");
	}
	const osg::NodePath & nodePath=*nodePath_ptr;
	bool ignoreCameras=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

	osg::Matrixd stack_lret = osg::computeEyeToLocal(modelview, nodePath, ignoreCameras);
	osg::Matrixd* lret = new osg::Matrixd(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::Matrixd >::push(L,lret,true);

	return 1;
}

// osg::Vec2d osg::componentMultiply(const osg::Vec2d & lhs, const osg::Vec2d & rhs)
static int _bind_componentMultiply_overload_1(lua_State *L) {
	if (!_lg_typecheck_componentMultiply_overload_1(L)) {
		luaL_error(L, "luna typecheck failed in osg::Vec2d osg::componentMultiply(const osg::Vec2d & lhs, const osg::Vec2d & rhs) function, expected prototype:\nosg::Vec2d osg::componentMultiply(const osg::Vec2d & lhs, const osg::Vec2d & rhs)\nClass arguments details:\narg 1 ID = 92303171\narg 2 ID = 92303171\n\n%s",luna_dumpStack(L).c_str());
	}

	const osg::Vec2d* lhs_ptr=(Luna< osg::Vec2d >::check(L,1));
	if( !lhs_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg lhs in osg::componentMultiply function");
	}
	const osg::Vec2d & lhs=*lhs_ptr;
	const osg::Vec2d* rhs_ptr=(Luna< osg::Vec2d >::check(L,2));
	if( !rhs_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::componentMultiply function");
	}
	const osg::Vec2d & rhs=*rhs_ptr;

	osg::Vec2d stack_lret = osg::componentMultiply(lhs, rhs);
	osg::Vec2d* lret = new osg::Vec2d(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::Vec2d >::push(L,lret,true);

	return 1;
}

// osg::Vec2f osg::componentMultiply(const osg::Vec2f & lhs, const osg::Vec2f & rhs)
static int _bind_componentMultiply_overload_2(lua_State *L) {
	if (!_lg_typecheck_componentMultiply_overload_2(L)) {
		luaL_error(L, "luna typecheck failed in osg::Vec2f osg::componentMultiply(const osg::Vec2f & lhs, const osg::Vec2f & rhs) function, expected prototype:\nosg::Vec2f osg::componentMultiply(const osg::Vec2f & lhs, const osg::Vec2f & rhs)\nClass arguments details:\narg 1 ID = 92303173\narg 2 ID = 92303173\n\n%s",luna_dumpStack(L).c_str());
	}

	const osg::Vec2f* lhs_ptr=(Luna< osg::Vec2f >::check(L,1));
	if( !lhs_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg lhs in osg::componentMultiply function");
	}
	const osg::Vec2f & lhs=*lhs_ptr;
	const osg::Vec2f* rhs_ptr=(Luna< osg::Vec2f >::check(L,2));
	if( !rhs_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::componentMultiply function");
	}
	const osg::Vec2f & rhs=*rhs_ptr;

	osg::Vec2f stack_lret = osg::componentMultiply(lhs, rhs);
	osg::Vec2f* lret = new osg::Vec2f(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::Vec2f >::push(L,lret,true);

	return 1;
}

// osg::Vec2s osg::componentMultiply(const osg::Vec2s & lhs, const osg::Vec2s & rhs)
static int _bind_componentMultiply_overload_3(lua_State *L) {
	if (!_lg_typecheck_componentMultiply_overload_3(L)) {
		luaL_error(L, "luna typecheck failed in osg::Vec2s osg::componentMultiply(const osg::Vec2s & lhs, const osg::Vec2s & rhs) function, expected prototype:\nosg::Vec2s osg::componentMultiply(const osg::Vec2s & lhs, const osg::Vec2s & rhs)\nClass arguments details:\narg 1 ID = 92303186\narg 2 ID = 92303186\n\n%s",luna_dumpStack(L).c_str());
	}

	const osg::Vec2s* lhs_ptr=(Luna< osg::Vec2s >::check(L,1));
	if( !lhs_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg lhs in osg::componentMultiply function");
	}
	const osg::Vec2s & lhs=*lhs_ptr;
	const osg::Vec2s* rhs_ptr=(Luna< osg::Vec2s >::check(L,2));
	if( !rhs_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::componentMultiply function");
	}
	const osg::Vec2s & rhs=*rhs_ptr;

	osg::Vec2s stack_lret = osg::componentMultiply(lhs, rhs);
	osg::Vec2s* lret = new osg::Vec2s(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::Vec2s >::push(L,lret,true);

	return 1;
}

// osg::Vec3d osg::componentMultiply(const osg::Vec3d & lhs, const osg::Vec3d & rhs)
static int _bind_componentMultiply_overload_4(lua_State *L) {
	if (!_lg_typecheck_componentMultiply_overload_4(L)) {
		luaL_error(L, "luna typecheck failed in osg::Vec3d osg::componentMultiply(const osg::Vec3d & lhs, const osg::Vec3d & rhs) function, expected prototype:\nosg::Vec3d osg::componentMultiply(const osg::Vec3d & lhs, const osg::Vec3d & rhs)\nClass arguments details:\narg 1 ID = 92303202\narg 2 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
	}

	const osg::Vec3d* lhs_ptr=(Luna< osg::Vec3d >::check(L,1));
	if( !lhs_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg lhs in osg::componentMultiply function");
	}
	const osg::Vec3d & lhs=*lhs_ptr;
	const osg::Vec3d* rhs_ptr=(Luna< osg::Vec3d >::check(L,2));
	if( !rhs_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::componentMultiply function");
	}
	const osg::Vec3d & rhs=*rhs_ptr;

	osg::Vec3d stack_lret = osg::componentMultiply(lhs, rhs);
	osg::Vec3d* lret = new osg::Vec3d(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::Vec3d >::push(L,lret,true);

	return 1;
}

// osg::Vec3f osg::componentMultiply(const osg::Vec3f & lhs, const osg::Vec3f & rhs)
static int _bind_componentMultiply_overload_5(lua_State *L) {
	if (!_lg_typecheck_componentMultiply_overload_5(L)) {
		luaL_error(L, "luna typecheck failed in osg::Vec3f osg::componentMultiply(const osg::Vec3f & lhs, const osg::Vec3f & rhs) function, expected prototype:\nosg::Vec3f osg::componentMultiply(const osg::Vec3f & lhs, const osg::Vec3f & rhs)\nClass arguments details:\narg 1 ID = 92303204\narg 2 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
	}

	const osg::Vec3f* lhs_ptr=(Luna< osg::Vec3f >::check(L,1));
	if( !lhs_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg lhs in osg::componentMultiply function");
	}
	const osg::Vec3f & lhs=*lhs_ptr;
	const osg::Vec3f* rhs_ptr=(Luna< osg::Vec3f >::check(L,2));
	if( !rhs_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::componentMultiply function");
	}
	const osg::Vec3f & rhs=*rhs_ptr;

	osg::Vec3f stack_lret = osg::componentMultiply(lhs, rhs);
	osg::Vec3f* lret = new osg::Vec3f(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::Vec3f >::push(L,lret,true);

	return 1;
}

// osg::Vec3s osg::componentMultiply(const osg::Vec3s & lhs, const osg::Vec3s & rhs)
static int _bind_componentMultiply_overload_6(lua_State *L) {
	if (!_lg_typecheck_componentMultiply_overload_6(L)) {
		luaL_error(L, "luna typecheck failed in osg::Vec3s osg::componentMultiply(const osg::Vec3s & lhs, const osg::Vec3s & rhs) function, expected prototype:\nosg::Vec3s osg::componentMultiply(const osg::Vec3s & lhs, const osg::Vec3s & rhs)\nClass arguments details:\narg 1 ID = 92303217\narg 2 ID = 92303217\n\n%s",luna_dumpStack(L).c_str());
	}

	const osg::Vec3s* lhs_ptr=(Luna< osg::Vec3s >::check(L,1));
	if( !lhs_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg lhs in osg::componentMultiply function");
	}
	const osg::Vec3s & lhs=*lhs_ptr;
	const osg::Vec3s* rhs_ptr=(Luna< osg::Vec3s >::check(L,2));
	if( !rhs_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::componentMultiply function");
	}
	const osg::Vec3s & rhs=*rhs_ptr;

	osg::Vec3s stack_lret = osg::componentMultiply(lhs, rhs);
	osg::Vec3s* lret = new osg::Vec3s(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::Vec3s >::push(L,lret,true);

	return 1;
}

// osg::Vec4d osg::componentMultiply(const osg::Vec4d & lhs, const osg::Vec4d & rhs)
static int _bind_componentMultiply_overload_7(lua_State *L) {
	if (!_lg_typecheck_componentMultiply_overload_7(L)) {
		luaL_error(L, "luna typecheck failed in osg::Vec4d osg::componentMultiply(const osg::Vec4d & lhs, const osg::Vec4d & rhs) function, expected prototype:\nosg::Vec4d osg::componentMultiply(const osg::Vec4d & lhs, const osg::Vec4d & rhs)\nClass arguments details:\narg 1 ID = 92303233\narg 2 ID = 92303233\n\n%s",luna_dumpStack(L).c_str());
	}

	const osg::Vec4d* lhs_ptr=(Luna< osg::Vec4d >::check(L,1));
	if( !lhs_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg lhs in osg::componentMultiply function");
	}
	const osg::Vec4d & lhs=*lhs_ptr;
	const osg::Vec4d* rhs_ptr=(Luna< osg::Vec4d >::check(L,2));
	if( !rhs_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::componentMultiply function");
	}
	const osg::Vec4d & rhs=*rhs_ptr;

	osg::Vec4d stack_lret = osg::componentMultiply(lhs, rhs);
	osg::Vec4d* lret = new osg::Vec4d(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::Vec4d >::push(L,lret,true);

	return 1;
}

// osg::Vec4f osg::componentMultiply(const osg::Vec4f & lhs, const osg::Vec4f & rhs)
static int _bind_componentMultiply_overload_8(lua_State *L) {
	if (!_lg_typecheck_componentMultiply_overload_8(L)) {
		luaL_error(L, "luna typecheck failed in osg::Vec4f osg::componentMultiply(const osg::Vec4f & lhs, const osg::Vec4f & rhs) function, expected prototype:\nosg::Vec4f osg::componentMultiply(const osg::Vec4f & lhs, const osg::Vec4f & rhs)\nClass arguments details:\narg 1 ID = 92303235\narg 2 ID = 92303235\n\n%s",luna_dumpStack(L).c_str());
	}

	const osg::Vec4f* lhs_ptr=(Luna< osg::Vec4f >::check(L,1));
	if( !lhs_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg lhs in osg::componentMultiply function");
	}
	const osg::Vec4f & lhs=*lhs_ptr;
	const osg::Vec4f* rhs_ptr=(Luna< osg::Vec4f >::check(L,2));
	if( !rhs_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::componentMultiply function");
	}
	const osg::Vec4f & rhs=*rhs_ptr;

	osg::Vec4f stack_lret = osg::componentMultiply(lhs, rhs);
	osg::Vec4f* lret = new osg::Vec4f(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::Vec4f >::push(L,lret,true);

	return 1;
}

// osg::Vec4s osg::componentMultiply(const osg::Vec4s & lhs, const osg::Vec4s & rhs)
static int _bind_componentMultiply_overload_9(lua_State *L) {
	if (!_lg_typecheck_componentMultiply_overload_9(L)) {
		luaL_error(L, "luna typecheck failed in osg::Vec4s osg::componentMultiply(const osg::Vec4s & lhs, const osg::Vec4s & rhs) function, expected prototype:\nosg::Vec4s osg::componentMultiply(const osg::Vec4s & lhs, const osg::Vec4s & rhs)\nClass arguments details:\narg 1 ID = 92303248\narg 2 ID = 92303248\n\n%s",luna_dumpStack(L).c_str());
	}

	const osg::Vec4s* lhs_ptr=(Luna< osg::Vec4s >::check(L,1));
	if( !lhs_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg lhs in osg::componentMultiply function");
	}
	const osg::Vec4s & lhs=*lhs_ptr;
	const osg::Vec4s* rhs_ptr=(Luna< osg::Vec4s >::check(L,2));
	if( !rhs_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::componentMultiply function");
	}
	const osg::Vec4s & rhs=*rhs_ptr;

	osg::Vec4s stack_lret = osg::componentMultiply(lhs, rhs);
	osg::Vec4s* lret = new osg::Vec4s(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::Vec4s >::push(L,lret,true);

	return 1;
}

// Overload binder for osg::componentMultiply
static int _bind_componentMultiply(lua_State *L) {
	if (_lg_typecheck_componentMultiply_overload_1(L)) return _bind_componentMultiply_overload_1(L);
	if (_lg_typecheck_componentMultiply_overload_2(L)) return _bind_componentMultiply_overload_2(L);
	if (_lg_typecheck_componentMultiply_overload_3(L)) return _bind_componentMultiply_overload_3(L);
	if (_lg_typecheck_componentMultiply_overload_4(L)) return _bind_componentMultiply_overload_4(L);
	if (_lg_typecheck_componentMultiply_overload_5(L)) return _bind_componentMultiply_overload_5(L);
	if (_lg_typecheck_componentMultiply_overload_6(L)) return _bind_componentMultiply_overload_6(L);
	if (_lg_typecheck_componentMultiply_overload_7(L)) return _bind_componentMultiply_overload_7(L);
	if (_lg_typecheck_componentMultiply_overload_8(L)) return _bind_componentMultiply_overload_8(L);
	if (_lg_typecheck_componentMultiply_overload_9(L)) return _bind_componentMultiply_overload_9(L);

	luaL_error(L, "error in function componentMultiply, cannot match any of the overloads for function componentMultiply:\n  componentMultiply(const osg::Vec2d &, const osg::Vec2d &)\n  componentMultiply(const osg::Vec2f &, const osg::Vec2f &)\n  componentMultiply(const osg::Vec2s &, const osg::Vec2s &)\n  componentMultiply(const osg::Vec3d &, const osg::Vec3d &)\n  componentMultiply(const osg::Vec3f &, const osg::Vec3f &)\n  componentMultiply(const osg::Vec3s &, const osg::Vec3s &)\n  componentMultiply(const osg::Vec4d &, const osg::Vec4d &)\n  componentMultiply(const osg::Vec4f &, const osg::Vec4f &)\n  componentMultiply(const osg::Vec4s &, const osg::Vec4s &)\n");
	return 0;
}

// osg::Vec2d osg::componentDivide(const osg::Vec2d & lhs, const osg::Vec2d & rhs)
static int _bind_componentDivide_overload_1(lua_State *L) {
	if (!_lg_typecheck_componentDivide_overload_1(L)) {
		luaL_error(L, "luna typecheck failed in osg::Vec2d osg::componentDivide(const osg::Vec2d & lhs, const osg::Vec2d & rhs) function, expected prototype:\nosg::Vec2d osg::componentDivide(const osg::Vec2d & lhs, const osg::Vec2d & rhs)\nClass arguments details:\narg 1 ID = 92303171\narg 2 ID = 92303171\n\n%s",luna_dumpStack(L).c_str());
	}

	const osg::Vec2d* lhs_ptr=(Luna< osg::Vec2d >::check(L,1));
	if( !lhs_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg lhs in osg::componentDivide function");
	}
	const osg::Vec2d & lhs=*lhs_ptr;
	const osg::Vec2d* rhs_ptr=(Luna< osg::Vec2d >::check(L,2));
	if( !rhs_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::componentDivide function");
	}
	const osg::Vec2d & rhs=*rhs_ptr;

	osg::Vec2d stack_lret = osg::componentDivide(lhs, rhs);
	osg::Vec2d* lret = new osg::Vec2d(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::Vec2d >::push(L,lret,true);

	return 1;
}

// osg::Vec2f osg::componentDivide(const osg::Vec2f & lhs, const osg::Vec2f & rhs)
static int _bind_componentDivide_overload_2(lua_State *L) {
	if (!_lg_typecheck_componentDivide_overload_2(L)) {
		luaL_error(L, "luna typecheck failed in osg::Vec2f osg::componentDivide(const osg::Vec2f & lhs, const osg::Vec2f & rhs) function, expected prototype:\nosg::Vec2f osg::componentDivide(const osg::Vec2f & lhs, const osg::Vec2f & rhs)\nClass arguments details:\narg 1 ID = 92303173\narg 2 ID = 92303173\n\n%s",luna_dumpStack(L).c_str());
	}

	const osg::Vec2f* lhs_ptr=(Luna< osg::Vec2f >::check(L,1));
	if( !lhs_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg lhs in osg::componentDivide function");
	}
	const osg::Vec2f & lhs=*lhs_ptr;
	const osg::Vec2f* rhs_ptr=(Luna< osg::Vec2f >::check(L,2));
	if( !rhs_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::componentDivide function");
	}
	const osg::Vec2f & rhs=*rhs_ptr;

	osg::Vec2f stack_lret = osg::componentDivide(lhs, rhs);
	osg::Vec2f* lret = new osg::Vec2f(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::Vec2f >::push(L,lret,true);

	return 1;
}

// osg::Vec2s osg::componentDivide(const osg::Vec2s & lhs, const osg::Vec2s & rhs)
static int _bind_componentDivide_overload_3(lua_State *L) {
	if (!_lg_typecheck_componentDivide_overload_3(L)) {
		luaL_error(L, "luna typecheck failed in osg::Vec2s osg::componentDivide(const osg::Vec2s & lhs, const osg::Vec2s & rhs) function, expected prototype:\nosg::Vec2s osg::componentDivide(const osg::Vec2s & lhs, const osg::Vec2s & rhs)\nClass arguments details:\narg 1 ID = 92303186\narg 2 ID = 92303186\n\n%s",luna_dumpStack(L).c_str());
	}

	const osg::Vec2s* lhs_ptr=(Luna< osg::Vec2s >::check(L,1));
	if( !lhs_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg lhs in osg::componentDivide function");
	}
	const osg::Vec2s & lhs=*lhs_ptr;
	const osg::Vec2s* rhs_ptr=(Luna< osg::Vec2s >::check(L,2));
	if( !rhs_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::componentDivide function");
	}
	const osg::Vec2s & rhs=*rhs_ptr;

	osg::Vec2s stack_lret = osg::componentDivide(lhs, rhs);
	osg::Vec2s* lret = new osg::Vec2s(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::Vec2s >::push(L,lret,true);

	return 1;
}

// osg::Vec3d osg::componentDivide(const osg::Vec3d & lhs, const osg::Vec3d & rhs)
static int _bind_componentDivide_overload_4(lua_State *L) {
	if (!_lg_typecheck_componentDivide_overload_4(L)) {
		luaL_error(L, "luna typecheck failed in osg::Vec3d osg::componentDivide(const osg::Vec3d & lhs, const osg::Vec3d & rhs) function, expected prototype:\nosg::Vec3d osg::componentDivide(const osg::Vec3d & lhs, const osg::Vec3d & rhs)\nClass arguments details:\narg 1 ID = 92303202\narg 2 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
	}

	const osg::Vec3d* lhs_ptr=(Luna< osg::Vec3d >::check(L,1));
	if( !lhs_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg lhs in osg::componentDivide function");
	}
	const osg::Vec3d & lhs=*lhs_ptr;
	const osg::Vec3d* rhs_ptr=(Luna< osg::Vec3d >::check(L,2));
	if( !rhs_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::componentDivide function");
	}
	const osg::Vec3d & rhs=*rhs_ptr;

	osg::Vec3d stack_lret = osg::componentDivide(lhs, rhs);
	osg::Vec3d* lret = new osg::Vec3d(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::Vec3d >::push(L,lret,true);

	return 1;
}

// osg::Vec3f osg::componentDivide(const osg::Vec3f & lhs, const osg::Vec3f & rhs)
static int _bind_componentDivide_overload_5(lua_State *L) {
	if (!_lg_typecheck_componentDivide_overload_5(L)) {
		luaL_error(L, "luna typecheck failed in osg::Vec3f osg::componentDivide(const osg::Vec3f & lhs, const osg::Vec3f & rhs) function, expected prototype:\nosg::Vec3f osg::componentDivide(const osg::Vec3f & lhs, const osg::Vec3f & rhs)\nClass arguments details:\narg 1 ID = 92303204\narg 2 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
	}

	const osg::Vec3f* lhs_ptr=(Luna< osg::Vec3f >::check(L,1));
	if( !lhs_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg lhs in osg::componentDivide function");
	}
	const osg::Vec3f & lhs=*lhs_ptr;
	const osg::Vec3f* rhs_ptr=(Luna< osg::Vec3f >::check(L,2));
	if( !rhs_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::componentDivide function");
	}
	const osg::Vec3f & rhs=*rhs_ptr;

	osg::Vec3f stack_lret = osg::componentDivide(lhs, rhs);
	osg::Vec3f* lret = new osg::Vec3f(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::Vec3f >::push(L,lret,true);

	return 1;
}

// osg::Vec3s osg::componentDivide(const osg::Vec3s & lhs, const osg::Vec3s & rhs)
static int _bind_componentDivide_overload_6(lua_State *L) {
	if (!_lg_typecheck_componentDivide_overload_6(L)) {
		luaL_error(L, "luna typecheck failed in osg::Vec3s osg::componentDivide(const osg::Vec3s & lhs, const osg::Vec3s & rhs) function, expected prototype:\nosg::Vec3s osg::componentDivide(const osg::Vec3s & lhs, const osg::Vec3s & rhs)\nClass arguments details:\narg 1 ID = 92303217\narg 2 ID = 92303217\n\n%s",luna_dumpStack(L).c_str());
	}

	const osg::Vec3s* lhs_ptr=(Luna< osg::Vec3s >::check(L,1));
	if( !lhs_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg lhs in osg::componentDivide function");
	}
	const osg::Vec3s & lhs=*lhs_ptr;
	const osg::Vec3s* rhs_ptr=(Luna< osg::Vec3s >::check(L,2));
	if( !rhs_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::componentDivide function");
	}
	const osg::Vec3s & rhs=*rhs_ptr;

	osg::Vec3s stack_lret = osg::componentDivide(lhs, rhs);
	osg::Vec3s* lret = new osg::Vec3s(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::Vec3s >::push(L,lret,true);

	return 1;
}

// osg::Vec4d osg::componentDivide(const osg::Vec4d & lhs, const osg::Vec4d & rhs)
static int _bind_componentDivide_overload_7(lua_State *L) {
	if (!_lg_typecheck_componentDivide_overload_7(L)) {
		luaL_error(L, "luna typecheck failed in osg::Vec4d osg::componentDivide(const osg::Vec4d & lhs, const osg::Vec4d & rhs) function, expected prototype:\nosg::Vec4d osg::componentDivide(const osg::Vec4d & lhs, const osg::Vec4d & rhs)\nClass arguments details:\narg 1 ID = 92303233\narg 2 ID = 92303233\n\n%s",luna_dumpStack(L).c_str());
	}

	const osg::Vec4d* lhs_ptr=(Luna< osg::Vec4d >::check(L,1));
	if( !lhs_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg lhs in osg::componentDivide function");
	}
	const osg::Vec4d & lhs=*lhs_ptr;
	const osg::Vec4d* rhs_ptr=(Luna< osg::Vec4d >::check(L,2));
	if( !rhs_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::componentDivide function");
	}
	const osg::Vec4d & rhs=*rhs_ptr;

	osg::Vec4d stack_lret = osg::componentDivide(lhs, rhs);
	osg::Vec4d* lret = new osg::Vec4d(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::Vec4d >::push(L,lret,true);

	return 1;
}

// osg::Vec4f osg::componentDivide(const osg::Vec4f & lhs, const osg::Vec4f & rhs)
static int _bind_componentDivide_overload_8(lua_State *L) {
	if (!_lg_typecheck_componentDivide_overload_8(L)) {
		luaL_error(L, "luna typecheck failed in osg::Vec4f osg::componentDivide(const osg::Vec4f & lhs, const osg::Vec4f & rhs) function, expected prototype:\nosg::Vec4f osg::componentDivide(const osg::Vec4f & lhs, const osg::Vec4f & rhs)\nClass arguments details:\narg 1 ID = 92303235\narg 2 ID = 92303235\n\n%s",luna_dumpStack(L).c_str());
	}

	const osg::Vec4f* lhs_ptr=(Luna< osg::Vec4f >::check(L,1));
	if( !lhs_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg lhs in osg::componentDivide function");
	}
	const osg::Vec4f & lhs=*lhs_ptr;
	const osg::Vec4f* rhs_ptr=(Luna< osg::Vec4f >::check(L,2));
	if( !rhs_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::componentDivide function");
	}
	const osg::Vec4f & rhs=*rhs_ptr;

	osg::Vec4f stack_lret = osg::componentDivide(lhs, rhs);
	osg::Vec4f* lret = new osg::Vec4f(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::Vec4f >::push(L,lret,true);

	return 1;
}

// osg::Vec4s osg::componentDivide(const osg::Vec4s & lhs, const osg::Vec4s & rhs)
static int _bind_componentDivide_overload_9(lua_State *L) {
	if (!_lg_typecheck_componentDivide_overload_9(L)) {
		luaL_error(L, "luna typecheck failed in osg::Vec4s osg::componentDivide(const osg::Vec4s & lhs, const osg::Vec4s & rhs) function, expected prototype:\nosg::Vec4s osg::componentDivide(const osg::Vec4s & lhs, const osg::Vec4s & rhs)\nClass arguments details:\narg 1 ID = 92303248\narg 2 ID = 92303248\n\n%s",luna_dumpStack(L).c_str());
	}

	const osg::Vec4s* lhs_ptr=(Luna< osg::Vec4s >::check(L,1));
	if( !lhs_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg lhs in osg::componentDivide function");
	}
	const osg::Vec4s & lhs=*lhs_ptr;
	const osg::Vec4s* rhs_ptr=(Luna< osg::Vec4s >::check(L,2));
	if( !rhs_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::componentDivide function");
	}
	const osg::Vec4s & rhs=*rhs_ptr;

	osg::Vec4s stack_lret = osg::componentDivide(lhs, rhs);
	osg::Vec4s* lret = new osg::Vec4s(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::Vec4s >::push(L,lret,true);

	return 1;
}

// Overload binder for osg::componentDivide
static int _bind_componentDivide(lua_State *L) {
	if (_lg_typecheck_componentDivide_overload_1(L)) return _bind_componentDivide_overload_1(L);
	if (_lg_typecheck_componentDivide_overload_2(L)) return _bind_componentDivide_overload_2(L);
	if (_lg_typecheck_componentDivide_overload_3(L)) return _bind_componentDivide_overload_3(L);
	if (_lg_typecheck_componentDivide_overload_4(L)) return _bind_componentDivide_overload_4(L);
	if (_lg_typecheck_componentDivide_overload_5(L)) return _bind_componentDivide_overload_5(L);
	if (_lg_typecheck_componentDivide_overload_6(L)) return _bind_componentDivide_overload_6(L);
	if (_lg_typecheck_componentDivide_overload_7(L)) return _bind_componentDivide_overload_7(L);
	if (_lg_typecheck_componentDivide_overload_8(L)) return _bind_componentDivide_overload_8(L);
	if (_lg_typecheck_componentDivide_overload_9(L)) return _bind_componentDivide_overload_9(L);

	luaL_error(L, "error in function componentDivide, cannot match any of the overloads for function componentDivide:\n  componentDivide(const osg::Vec2d &, const osg::Vec2d &)\n  componentDivide(const osg::Vec2f &, const osg::Vec2f &)\n  componentDivide(const osg::Vec2s &, const osg::Vec2s &)\n  componentDivide(const osg::Vec3d &, const osg::Vec3d &)\n  componentDivide(const osg::Vec3f &, const osg::Vec3f &)\n  componentDivide(const osg::Vec3s &, const osg::Vec3s &)\n  componentDivide(const osg::Vec4d &, const osg::Vec4d &)\n  componentDivide(const osg::Vec4f &, const osg::Vec4f &)\n  componentDivide(const osg::Vec4s &, const osg::Vec4s &)\n");
	return 0;
}


// Function checkers:
inline static bool _lg_typecheck_openArchive_overload_1(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<2 || luatop>3 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_openArchive_overload_2(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
	if( (lua_isnil(L,4)==0 && !(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,4)) ) ) return false;
	return true;
}

inline static bool _lg_typecheck_convertStringFromCurrentCodePageToUTF8_overload_1(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_convertStringFromCurrentCodePageToUTF8_overload_2(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_convertStringFromCurrentCodePageToUTF8_overload_3(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_convertStringFromUTF8toCurrentCodePage_overload_1(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_convertStringFromUTF8toCurrentCodePage_overload_2(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_convertStringFromUTF8toCurrentCodePage_overload_3(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_getFilePath(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_getFileExtension(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_getFileExtensionIncludingDot(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_getLowerCaseFileExtension(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_getSimpleFileName(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_getNameLessExtension(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_getStrippedName(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_getPathRelative(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	if( lua_type(L,2)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_getPathRoot(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_isAbsolutePath(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_convertFileNameToWindowsStyle(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_convertFileNameToUnixStyle(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_convertToLowerCase(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_getNativePathSeparator(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_isFileNameNativeStyle(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_convertFileNameToNativeStyle(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_equalCaseInsensitive_overload_1(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	if( lua_type(L,2)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_equalCaseInsensitive_overload_2(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	if( lua_type(L,2)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_containsServerAddress(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_getServerProtocol(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_getServerAddress(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_getServerFileName(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_concatPaths(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	if( lua_type(L,2)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_getRealPath(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_makeDirectory(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_makeDirectoryForFile(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_getCurrentWorkingDirectory(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_setCurrentWorkingDirectory(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_fileExists(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_fileType(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_findFileInPath(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<2 || luatop>3 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	if( !Luna<void>::has_uniqueid(L,2,79889541) ) return false;
	if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_findFileInDirectory(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<2 || luatop>3 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	if( lua_type(L,2)!=LUA_TSTRING ) return false;
	if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_getDirectoryContents(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_getSortedDirectoryContents(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_expandWildcardsInFilename(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_copyFile(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	if( lua_type(L,2)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_setDataFilePathList_overload_1(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,79889541) ) return false;
	if( (!(Luna< std::deque< std::string > >::checkSubType< osgDB::FilePathList >(L,1))) ) return false;
	return true;
}

inline static bool _lg_typecheck_setDataFilePathList_overload_2(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_getDataFilePathList(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_findDataFile_overload_1(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<1 || luatop>2 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_findDataFile_overload_2(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<2 || luatop>3 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
	if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,2)) ) ) return false;
	if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_setLibraryFilePathList_overload_1(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,79889541) ) return false;
	if( (!(Luna< std::deque< std::string > >::checkSubType< osgDB::FilePathList >(L,1))) ) return false;
	return true;
}

inline static bool _lg_typecheck_setLibraryFilePathList_overload_2(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_getLibraryFilePathList(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_findLibraryFile(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<1 || luatop>2 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_convertStringPathIntoFilePathList(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	if( !Luna<void>::has_uniqueid(L,2,79889541) ) return false;
	return true;
}

inline static bool _lg_typecheck_containsCurrentWorkingDirectoryReference(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,79889541) ) return false;
	return true;
}

inline static bool _lg_typecheck_appendPlatformSpecificLibraryFilePaths(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,79889541) ) return false;
	return true;
}

inline static bool _lg_typecheck_appendPlatformSpecificResourceFilePaths(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,79889541) ) return false;
	return true;
}

inline static bool _lg_typecheck_split(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<2 || luatop>3 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	if( !Luna<void>::has_uniqueid(L,2,95416160) ) return false;
	if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_listAllAvailablePlugins(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_queryPlugin(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	if( !Luna<void>::has_uniqueid(L,2,14972349) ) return false;
	return true;
}

inline static bool _lg_typecheck_outputPluginDetails(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,2993706) ) return false;
	if( lua_type(L,2)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_readObjectFile_overload_1(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
	if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,2)) ) ) return false;
	return true;
}

inline static bool _lg_typecheck_readObjectFile_overload_2(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_readImageFile_overload_1(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
	if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,2)) ) ) return false;
	return true;
}

inline static bool _lg_typecheck_readImageFile_overload_2(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_readHeightFieldFile_overload_1(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
	if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,2)) ) ) return false;
	return true;
}

inline static bool _lg_typecheck_readHeightFieldFile_overload_2(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_readNodeFile_overload_1(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
	if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,2)) ) ) return false;
	return true;
}

inline static bool _lg_typecheck_readNodeFile_overload_2(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_readShaderFile_overload_1(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
	if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,2)) ) ) return false;
	return true;
}

inline static bool _lg_typecheck_readShaderFile_overload_2(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_readShaderFile_overload_3(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( lua_type(L,2)!=LUA_TSTRING ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
	if( (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3)) ) ) return false;
	return true;
}

inline static bool _lg_typecheck_readShaderFile_overload_4(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( lua_type(L,2)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_readRefObjectFile_overload_1(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
	if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,2)) ) ) return false;
	return true;
}

inline static bool _lg_typecheck_readRefObjectFile_overload_2(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_readRefImageFile_overload_1(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
	if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,2)) ) ) return false;
	return true;
}

inline static bool _lg_typecheck_readRefImageFile_overload_2(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_readRefHeightFieldFile_overload_1(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
	if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,2)) ) ) return false;
	return true;
}

inline static bool _lg_typecheck_readRefHeightFieldFile_overload_2(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_readRefNodeFile_overload_1(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
	if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,2)) ) ) return false;
	return true;
}

inline static bool _lg_typecheck_readRefNodeFile_overload_2(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_readRefShaderFile_overload_1(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
	if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,2)) ) ) return false;
	return true;
}

inline static bool _lg_typecheck_readRefShaderFile_overload_2(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_readCommandLine(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,99527028) ) return false;
	return true;
}

inline static bool _lg_typecheck_writeObjectFile_overload_1(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
	if( (!(Luna< osg::Referenced >::checkSubType< osg::Object >(L,1))) ) return false;
	if( lua_type(L,2)!=LUA_TSTRING ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
	if( (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3)) ) ) return false;
	return true;
}

inline static bool _lg_typecheck_writeObjectFile_overload_2(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
	if( (!(Luna< osg::Referenced >::checkSubType< osg::Object >(L,1))) ) return false;
	if( lua_type(L,2)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_writeImageFile_overload_1(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
	if( (!(Luna< osg::Referenced >::checkSubType< osg::Image >(L,1))) ) return false;
	if( lua_type(L,2)!=LUA_TSTRING ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
	if( (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3)) ) ) return false;
	return true;
}

inline static bool _lg_typecheck_writeImageFile_overload_2(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
	if( (!(Luna< osg::Referenced >::checkSubType< osg::Image >(L,1))) ) return false;
	if( lua_type(L,2)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_writeHeightFieldFile_overload_1(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
	if( (!(Luna< osg::Referenced >::checkSubType< osg::HeightField >(L,1))) ) return false;
	if( lua_type(L,2)!=LUA_TSTRING ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
	if( (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3)) ) ) return false;
	return true;
}

inline static bool _lg_typecheck_writeHeightFieldFile_overload_2(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
	if( (!(Luna< osg::Referenced >::checkSubType< osg::HeightField >(L,1))) ) return false;
	if( lua_type(L,2)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_writeNodeFile_overload_1(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
	if( (!(Luna< osg::Referenced >::checkSubType< osg::Node >(L,1))) ) return false;
	if( lua_type(L,2)!=LUA_TSTRING ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
	if( (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3)) ) ) return false;
	return true;
}

inline static bool _lg_typecheck_writeNodeFile_overload_2(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
	if( (!(Luna< osg::Referenced >::checkSubType< osg::Node >(L,1))) ) return false;
	if( lua_type(L,2)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_writeShaderFile_overload_1(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
	if( (!(Luna< osg::Referenced >::checkSubType< osg::Shader >(L,1))) ) return false;
	if( lua_type(L,2)!=LUA_TSTRING ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
	if( (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3)) ) ) return false;
	return true;
}

inline static bool _lg_typecheck_writeShaderFile_overload_2(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
	if( (!(Luna< osg::Referenced >::checkSubType< osg::Shader >(L,1))) ) return false;
	if( lua_type(L,2)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_readXmlFile_overload_1(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
	if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,2)) ) ) return false;
	return true;
}

inline static bool _lg_typecheck_readXmlFile_overload_2(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_readXmlStream(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,77972206) ) return false;
	return true;
}

inline static bool _lg_typecheck_trimEnclosingSpaces(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}


// Function binds:
// osgDB::Archive * osgDB::openArchive(const std::string & filename, osgDB::ReaderWriter::ArchiveStatus status, unsigned int indexBlockSizeHint = 4096)
static int _bind_openArchive_overload_1(lua_State *L) {
	if (!_lg_typecheck_openArchive_overload_1(L)) {
		luaL_error(L, "luna typecheck failed in osgDB::Archive * osgDB::openArchive(const std::string & filename, osgDB::ReaderWriter::ArchiveStatus status, unsigned int indexBlockSizeHint = 4096) function, expected prototype:\nosgDB::Archive * osgDB::openArchive(const std::string & filename, osgDB::ReaderWriter::ArchiveStatus status, unsigned int indexBlockSizeHint = 4096)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int luatop = lua_gettop(L);

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));
	osgDB::ReaderWriter::ArchiveStatus status=(osgDB::ReaderWriter::ArchiveStatus)lua_tointeger(L,2);
	unsigned int indexBlockSizeHint=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)4096;

	osgDB::Archive * lret = osgDB::openArchive(filename, status, indexBlockSizeHint);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osgDB::Archive >::push(L,lret,false);

	return 1;
}

// osgDB::Archive * osgDB::openArchive(const std::string & filename, osgDB::ReaderWriter::ArchiveStatus status, unsigned int indexBlockSizeHint, osgDB::Options * options)
static int _bind_openArchive_overload_2(lua_State *L) {
	if (!_lg_typecheck_openArchive_overload_2(L)) {
		luaL_error(L, "luna typecheck failed in osgDB::Archive * osgDB::openArchive(const std::string & filename, osgDB::ReaderWriter::ArchiveStatus status, unsigned int indexBlockSizeHint, osgDB::Options * options) function, expected prototype:\nosgDB::Archive * osgDB::openArchive(const std::string & filename, osgDB::ReaderWriter::ArchiveStatus status, unsigned int indexBlockSizeHint, osgDB::Options * options)\nClass arguments details:\narg 4 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
	}

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));
	osgDB::ReaderWriter::ArchiveStatus status=(osgDB::ReaderWriter::ArchiveStatus)lua_tointeger(L,2);
	unsigned int indexBlockSizeHint=(unsigned int)lua_tointeger(L,3);
	osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,4));

	osgDB::Archive * lret = osgDB::openArchive(filename, status, indexBlockSizeHint, options);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osgDB::Archive >::push(L,lret,false);

	return 1;
}

// Overload binder for osgDB::openArchive
static int _bind_openArchive(lua_State *L) {
	if (_lg_typecheck_openArchive_overload_1(L)) return _bind_openArchive_overload_1(L);
	if (_lg_typecheck_openArchive_overload_2(L)) return _bind_openArchive_overload_2(L);

	luaL_error(L, "error in function openArchive, cannot match any of the overloads for function openArchive:\n  openArchive(const std::string &, osgDB::ReaderWriter::ArchiveStatus, unsigned int)\n  openArchive(const std::string &, osgDB::ReaderWriter::ArchiveStatus, unsigned int, osgDB::Options *)\n");
	return 0;
}

// std::string osgDB::convertStringFromCurrentCodePageToUTF8(const char * source, unsigned int sourceLength)
static int _bind_convertStringFromCurrentCodePageToUTF8_overload_1(lua_State *L) {
	if (!_lg_typecheck_convertStringFromCurrentCodePageToUTF8_overload_1(L)) {
		luaL_error(L, "luna typecheck failed in std::string osgDB::convertStringFromCurrentCodePageToUTF8(const char * source, unsigned int sourceLength) function, expected prototype:\nstd::string osgDB::convertStringFromCurrentCodePageToUTF8(const char * source, unsigned int sourceLength)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	const char * source=(const char *)lua_tostring(L,1);
	unsigned sourceLength=(unsigned)lua_tointeger(L,2);

	std::string lret = osgDB::convertStringFromCurrentCodePageToUTF8(source, sourceLength);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// std::string osgDB::convertStringFromCurrentCodePageToUTF8(const std::string & s)
static int _bind_convertStringFromCurrentCodePageToUTF8_overload_2(lua_State *L) {
	if (!_lg_typecheck_convertStringFromCurrentCodePageToUTF8_overload_2(L)) {
		luaL_error(L, "luna typecheck failed in std::string osgDB::convertStringFromCurrentCodePageToUTF8(const std::string & s) function, expected prototype:\nstd::string osgDB::convertStringFromCurrentCodePageToUTF8(const std::string & s)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	std::string s(lua_tostring(L,1),lua_objlen(L,1));

	std::string lret = osgDB::convertStringFromCurrentCodePageToUTF8(s);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// std::string osgDB::convertStringFromCurrentCodePageToUTF8(const char * s)
static int _bind_convertStringFromCurrentCodePageToUTF8_overload_3(lua_State *L) {
	if (!_lg_typecheck_convertStringFromCurrentCodePageToUTF8_overload_3(L)) {
		luaL_error(L, "luna typecheck failed in std::string osgDB::convertStringFromCurrentCodePageToUTF8(const char * s) function, expected prototype:\nstd::string osgDB::convertStringFromCurrentCodePageToUTF8(const char * s)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	const char * s=(const char *)lua_tostring(L,1);

	std::string lret = osgDB::convertStringFromCurrentCodePageToUTF8(s);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// Overload binder for osgDB::convertStringFromCurrentCodePageToUTF8
static int _bind_convertStringFromCurrentCodePageToUTF8(lua_State *L) {
	if (_lg_typecheck_convertStringFromCurrentCodePageToUTF8_overload_1(L)) return _bind_convertStringFromCurrentCodePageToUTF8_overload_1(L);
	if (_lg_typecheck_convertStringFromCurrentCodePageToUTF8_overload_2(L)) return _bind_convertStringFromCurrentCodePageToUTF8_overload_2(L);
	if (_lg_typecheck_convertStringFromCurrentCodePageToUTF8_overload_3(L)) return _bind_convertStringFromCurrentCodePageToUTF8_overload_3(L);

	luaL_error(L, "error in function convertStringFromCurrentCodePageToUTF8, cannot match any of the overloads for function convertStringFromCurrentCodePageToUTF8:\n  convertStringFromCurrentCodePageToUTF8(const char *, unsigned int)\n  convertStringFromCurrentCodePageToUTF8(const std::string &)\n  convertStringFromCurrentCodePageToUTF8(const char *)\n");
	return 0;
}

// std::string osgDB::convertStringFromUTF8toCurrentCodePage(const char * source, unsigned int sourceLength)
static int _bind_convertStringFromUTF8toCurrentCodePage_overload_1(lua_State *L) {
	if (!_lg_typecheck_convertStringFromUTF8toCurrentCodePage_overload_1(L)) {
		luaL_error(L, "luna typecheck failed in std::string osgDB::convertStringFromUTF8toCurrentCodePage(const char * source, unsigned int sourceLength) function, expected prototype:\nstd::string osgDB::convertStringFromUTF8toCurrentCodePage(const char * source, unsigned int sourceLength)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	const char * source=(const char *)lua_tostring(L,1);
	unsigned sourceLength=(unsigned)lua_tointeger(L,2);

	std::string lret = osgDB::convertStringFromUTF8toCurrentCodePage(source, sourceLength);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// std::string osgDB::convertStringFromUTF8toCurrentCodePage(const std::string & s)
static int _bind_convertStringFromUTF8toCurrentCodePage_overload_2(lua_State *L) {
	if (!_lg_typecheck_convertStringFromUTF8toCurrentCodePage_overload_2(L)) {
		luaL_error(L, "luna typecheck failed in std::string osgDB::convertStringFromUTF8toCurrentCodePage(const std::string & s) function, expected prototype:\nstd::string osgDB::convertStringFromUTF8toCurrentCodePage(const std::string & s)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	std::string s(lua_tostring(L,1),lua_objlen(L,1));

	std::string lret = osgDB::convertStringFromUTF8toCurrentCodePage(s);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// std::string osgDB::convertStringFromUTF8toCurrentCodePage(const char * s)
static int _bind_convertStringFromUTF8toCurrentCodePage_overload_3(lua_State *L) {
	if (!_lg_typecheck_convertStringFromUTF8toCurrentCodePage_overload_3(L)) {
		luaL_error(L, "luna typecheck failed in std::string osgDB::convertStringFromUTF8toCurrentCodePage(const char * s) function, expected prototype:\nstd::string osgDB::convertStringFromUTF8toCurrentCodePage(const char * s)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	const char * s=(const char *)lua_tostring(L,1);

	std::string lret = osgDB::convertStringFromUTF8toCurrentCodePage(s);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// Overload binder for osgDB::convertStringFromUTF8toCurrentCodePage
static int _bind_convertStringFromUTF8toCurrentCodePage(lua_State *L) {
	if (_lg_typecheck_convertStringFromUTF8toCurrentCodePage_overload_1(L)) return _bind_convertStringFromUTF8toCurrentCodePage_overload_1(L);
	if (_lg_typecheck_convertStringFromUTF8toCurrentCodePage_overload_2(L)) return _bind_convertStringFromUTF8toCurrentCodePage_overload_2(L);
	if (_lg_typecheck_convertStringFromUTF8toCurrentCodePage_overload_3(L)) return _bind_convertStringFromUTF8toCurrentCodePage_overload_3(L);

	luaL_error(L, "error in function convertStringFromUTF8toCurrentCodePage, cannot match any of the overloads for function convertStringFromUTF8toCurrentCodePage:\n  convertStringFromUTF8toCurrentCodePage(const char *, unsigned int)\n  convertStringFromUTF8toCurrentCodePage(const std::string &)\n  convertStringFromUTF8toCurrentCodePage(const char *)\n");
	return 0;
}

// std::string osgDB::getFilePath(const std::string & filename)
static int _bind_getFilePath(lua_State *L) {
	if (!_lg_typecheck_getFilePath(L)) {
		luaL_error(L, "luna typecheck failed in std::string osgDB::getFilePath(const std::string & filename) function, expected prototype:\nstd::string osgDB::getFilePath(const std::string & filename)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));

	std::string lret = osgDB::getFilePath(filename);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// std::string osgDB::getFileExtension(const std::string & filename)
static int _bind_getFileExtension(lua_State *L) {
	if (!_lg_typecheck_getFileExtension(L)) {
		luaL_error(L, "luna typecheck failed in std::string osgDB::getFileExtension(const std::string & filename) function, expected prototype:\nstd::string osgDB::getFileExtension(const std::string & filename)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));

	std::string lret = osgDB::getFileExtension(filename);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// std::string osgDB::getFileExtensionIncludingDot(const std::string & filename)
static int _bind_getFileExtensionIncludingDot(lua_State *L) {
	if (!_lg_typecheck_getFileExtensionIncludingDot(L)) {
		luaL_error(L, "luna typecheck failed in std::string osgDB::getFileExtensionIncludingDot(const std::string & filename) function, expected prototype:\nstd::string osgDB::getFileExtensionIncludingDot(const std::string & filename)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));

	std::string lret = osgDB::getFileExtensionIncludingDot(filename);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// std::string osgDB::getLowerCaseFileExtension(const std::string & filename)
static int _bind_getLowerCaseFileExtension(lua_State *L) {
	if (!_lg_typecheck_getLowerCaseFileExtension(L)) {
		luaL_error(L, "luna typecheck failed in std::string osgDB::getLowerCaseFileExtension(const std::string & filename) function, expected prototype:\nstd::string osgDB::getLowerCaseFileExtension(const std::string & filename)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));

	std::string lret = osgDB::getLowerCaseFileExtension(filename);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// std::string osgDB::getSimpleFileName(const std::string & fileName)
static int _bind_getSimpleFileName(lua_State *L) {
	if (!_lg_typecheck_getSimpleFileName(L)) {
		luaL_error(L, "luna typecheck failed in std::string osgDB::getSimpleFileName(const std::string & fileName) function, expected prototype:\nstd::string osgDB::getSimpleFileName(const std::string & fileName)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	std::string fileName(lua_tostring(L,1),lua_objlen(L,1));

	std::string lret = osgDB::getSimpleFileName(fileName);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// std::string osgDB::getNameLessExtension(const std::string & fileName)
static int _bind_getNameLessExtension(lua_State *L) {
	if (!_lg_typecheck_getNameLessExtension(L)) {
		luaL_error(L, "luna typecheck failed in std::string osgDB::getNameLessExtension(const std::string & fileName) function, expected prototype:\nstd::string osgDB::getNameLessExtension(const std::string & fileName)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	std::string fileName(lua_tostring(L,1),lua_objlen(L,1));

	std::string lret = osgDB::getNameLessExtension(fileName);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// std::string osgDB::getStrippedName(const std::string & fileName)
static int _bind_getStrippedName(lua_State *L) {
	if (!_lg_typecheck_getStrippedName(L)) {
		luaL_error(L, "luna typecheck failed in std::string osgDB::getStrippedName(const std::string & fileName) function, expected prototype:\nstd::string osgDB::getStrippedName(const std::string & fileName)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	std::string fileName(lua_tostring(L,1),lua_objlen(L,1));

	std::string lret = osgDB::getStrippedName(fileName);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// std::string osgDB::getPathRelative(const std::string & from, const std::string & to)
static int _bind_getPathRelative(lua_State *L) {
	if (!_lg_typecheck_getPathRelative(L)) {
		luaL_error(L, "luna typecheck failed in std::string osgDB::getPathRelative(const std::string & from, const std::string & to) function, expected prototype:\nstd::string osgDB::getPathRelative(const std::string & from, const std::string & to)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	std::string from(lua_tostring(L,1),lua_objlen(L,1));
	std::string to(lua_tostring(L,2),lua_objlen(L,2));

	std::string lret = osgDB::getPathRelative(from, to);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// std::string osgDB::getPathRoot(const std::string & path)
static int _bind_getPathRoot(lua_State *L) {
	if (!_lg_typecheck_getPathRoot(L)) {
		luaL_error(L, "luna typecheck failed in std::string osgDB::getPathRoot(const std::string & path) function, expected prototype:\nstd::string osgDB::getPathRoot(const std::string & path)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	std::string path(lua_tostring(L,1),lua_objlen(L,1));

	std::string lret = osgDB::getPathRoot(path);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// bool osgDB::isAbsolutePath(const std::string & path)
static int _bind_isAbsolutePath(lua_State *L) {
	if (!_lg_typecheck_isAbsolutePath(L)) {
		luaL_error(L, "luna typecheck failed in bool osgDB::isAbsolutePath(const std::string & path) function, expected prototype:\nbool osgDB::isAbsolutePath(const std::string & path)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	std::string path(lua_tostring(L,1),lua_objlen(L,1));

	bool lret = osgDB::isAbsolutePath(path);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// std::string osgDB::convertFileNameToWindowsStyle(const std::string & fileName)
static int _bind_convertFileNameToWindowsStyle(lua_State *L) {
	if (!_lg_typecheck_convertFileNameToWindowsStyle(L)) {
		luaL_error(L, "luna typecheck failed in std::string osgDB::convertFileNameToWindowsStyle(const std::string & fileName) function, expected prototype:\nstd::string osgDB::convertFileNameToWindowsStyle(const std::string & fileName)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	std::string fileName(lua_tostring(L,1),lua_objlen(L,1));

	std::string lret = osgDB::convertFileNameToWindowsStyle(fileName);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// std::string osgDB::convertFileNameToUnixStyle(const std::string & fileName)
static int _bind_convertFileNameToUnixStyle(lua_State *L) {
	if (!_lg_typecheck_convertFileNameToUnixStyle(L)) {
		luaL_error(L, "luna typecheck failed in std::string osgDB::convertFileNameToUnixStyle(const std::string & fileName) function, expected prototype:\nstd::string osgDB::convertFileNameToUnixStyle(const std::string & fileName)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	std::string fileName(lua_tostring(L,1),lua_objlen(L,1));

	std::string lret = osgDB::convertFileNameToUnixStyle(fileName);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// std::string osgDB::convertToLowerCase(const std::string & fileName)
static int _bind_convertToLowerCase(lua_State *L) {
	if (!_lg_typecheck_convertToLowerCase(L)) {
		luaL_error(L, "luna typecheck failed in std::string osgDB::convertToLowerCase(const std::string & fileName) function, expected prototype:\nstd::string osgDB::convertToLowerCase(const std::string & fileName)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	std::string fileName(lua_tostring(L,1),lua_objlen(L,1));

	std::string lret = osgDB::convertToLowerCase(fileName);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// char osgDB::getNativePathSeparator()
static int _bind_getNativePathSeparator(lua_State *L) {
	if (!_lg_typecheck_getNativePathSeparator(L)) {
		luaL_error(L, "luna typecheck failed in char osgDB::getNativePathSeparator() function, expected prototype:\nchar osgDB::getNativePathSeparator()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	char lret = osgDB::getNativePathSeparator();
	lua_pushnumber(L,lret);

	return 1;
}

// bool osgDB::isFileNameNativeStyle(const std::string & fileName)
static int _bind_isFileNameNativeStyle(lua_State *L) {
	if (!_lg_typecheck_isFileNameNativeStyle(L)) {
		luaL_error(L, "luna typecheck failed in bool osgDB::isFileNameNativeStyle(const std::string & fileName) function, expected prototype:\nbool osgDB::isFileNameNativeStyle(const std::string & fileName)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	std::string fileName(lua_tostring(L,1),lua_objlen(L,1));

	bool lret = osgDB::isFileNameNativeStyle(fileName);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// std::string osgDB::convertFileNameToNativeStyle(const std::string & fileName)
static int _bind_convertFileNameToNativeStyle(lua_State *L) {
	if (!_lg_typecheck_convertFileNameToNativeStyle(L)) {
		luaL_error(L, "luna typecheck failed in std::string osgDB::convertFileNameToNativeStyle(const std::string & fileName) function, expected prototype:\nstd::string osgDB::convertFileNameToNativeStyle(const std::string & fileName)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	std::string fileName(lua_tostring(L,1),lua_objlen(L,1));

	std::string lret = osgDB::convertFileNameToNativeStyle(fileName);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// bool osgDB::equalCaseInsensitive(const std::string & lhs, const std::string & rhs)
static int _bind_equalCaseInsensitive_overload_1(lua_State *L) {
	if (!_lg_typecheck_equalCaseInsensitive_overload_1(L)) {
		luaL_error(L, "luna typecheck failed in bool osgDB::equalCaseInsensitive(const std::string & lhs, const std::string & rhs) function, expected prototype:\nbool osgDB::equalCaseInsensitive(const std::string & lhs, const std::string & rhs)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	std::string lhs(lua_tostring(L,1),lua_objlen(L,1));
	std::string rhs(lua_tostring(L,2),lua_objlen(L,2));

	bool lret = osgDB::equalCaseInsensitive(lhs, rhs);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// bool osgDB::equalCaseInsensitive(const std::string & lhs, const char * rhs)
static int _bind_equalCaseInsensitive_overload_2(lua_State *L) {
	if (!_lg_typecheck_equalCaseInsensitive_overload_2(L)) {
		luaL_error(L, "luna typecheck failed in bool osgDB::equalCaseInsensitive(const std::string & lhs, const char * rhs) function, expected prototype:\nbool osgDB::equalCaseInsensitive(const std::string & lhs, const char * rhs)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	std::string lhs(lua_tostring(L,1),lua_objlen(L,1));
	const char * rhs=(const char *)lua_tostring(L,2);

	bool lret = osgDB::equalCaseInsensitive(lhs, rhs);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// Overload binder for osgDB::equalCaseInsensitive
static int _bind_equalCaseInsensitive(lua_State *L) {
	if (_lg_typecheck_equalCaseInsensitive_overload_1(L)) return _bind_equalCaseInsensitive_overload_1(L);
	if (_lg_typecheck_equalCaseInsensitive_overload_2(L)) return _bind_equalCaseInsensitive_overload_2(L);

	luaL_error(L, "error in function equalCaseInsensitive, cannot match any of the overloads for function equalCaseInsensitive:\n  equalCaseInsensitive(const std::string &, const std::string &)\n  equalCaseInsensitive(const std::string &, const char *)\n");
	return 0;
}

// bool osgDB::containsServerAddress(const std::string & filename)
static int _bind_containsServerAddress(lua_State *L) {
	if (!_lg_typecheck_containsServerAddress(L)) {
		luaL_error(L, "luna typecheck failed in bool osgDB::containsServerAddress(const std::string & filename) function, expected prototype:\nbool osgDB::containsServerAddress(const std::string & filename)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));

	bool lret = osgDB::containsServerAddress(filename);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// std::string osgDB::getServerProtocol(const std::string & filename)
static int _bind_getServerProtocol(lua_State *L) {
	if (!_lg_typecheck_getServerProtocol(L)) {
		luaL_error(L, "luna typecheck failed in std::string osgDB::getServerProtocol(const std::string & filename) function, expected prototype:\nstd::string osgDB::getServerProtocol(const std::string & filename)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));

	std::string lret = osgDB::getServerProtocol(filename);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// std::string osgDB::getServerAddress(const std::string & filename)
static int _bind_getServerAddress(lua_State *L) {
	if (!_lg_typecheck_getServerAddress(L)) {
		luaL_error(L, "luna typecheck failed in std::string osgDB::getServerAddress(const std::string & filename) function, expected prototype:\nstd::string osgDB::getServerAddress(const std::string & filename)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));

	std::string lret = osgDB::getServerAddress(filename);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// std::string osgDB::getServerFileName(const std::string & filename)
static int _bind_getServerFileName(lua_State *L) {
	if (!_lg_typecheck_getServerFileName(L)) {
		luaL_error(L, "luna typecheck failed in std::string osgDB::getServerFileName(const std::string & filename) function, expected prototype:\nstd::string osgDB::getServerFileName(const std::string & filename)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));

	std::string lret = osgDB::getServerFileName(filename);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// std::string osgDB::concatPaths(const std::string & left, const std::string & right)
static int _bind_concatPaths(lua_State *L) {
	if (!_lg_typecheck_concatPaths(L)) {
		luaL_error(L, "luna typecheck failed in std::string osgDB::concatPaths(const std::string & left, const std::string & right) function, expected prototype:\nstd::string osgDB::concatPaths(const std::string & left, const std::string & right)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	std::string left(lua_tostring(L,1),lua_objlen(L,1));
	std::string right(lua_tostring(L,2),lua_objlen(L,2));

	std::string lret = osgDB::concatPaths(left, right);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// std::string osgDB::getRealPath(const std::string & path)
static int _bind_getRealPath(lua_State *L) {
	if (!_lg_typecheck_getRealPath(L)) {
		luaL_error(L, "luna typecheck failed in std::string osgDB::getRealPath(const std::string & path) function, expected prototype:\nstd::string osgDB::getRealPath(const std::string & path)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	std::string path(lua_tostring(L,1),lua_objlen(L,1));

	std::string lret = osgDB::getRealPath(path);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// bool osgDB::makeDirectory(const std::string & directoryPath)
static int _bind_makeDirectory(lua_State *L) {
	if (!_lg_typecheck_makeDirectory(L)) {
		luaL_error(L, "luna typecheck failed in bool osgDB::makeDirectory(const std::string & directoryPath) function, expected prototype:\nbool osgDB::makeDirectory(const std::string & directoryPath)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	std::string directoryPath(lua_tostring(L,1),lua_objlen(L,1));

	bool lret = osgDB::makeDirectory(directoryPath);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// bool osgDB::makeDirectoryForFile(const std::string & filePath)
static int _bind_makeDirectoryForFile(lua_State *L) {
	if (!_lg_typecheck_makeDirectoryForFile(L)) {
		luaL_error(L, "luna typecheck failed in bool osgDB::makeDirectoryForFile(const std::string & filePath) function, expected prototype:\nbool osgDB::makeDirectoryForFile(const std::string & filePath)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	std::string filePath(lua_tostring(L,1),lua_objlen(L,1));

	bool lret = osgDB::makeDirectoryForFile(filePath);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// std::string osgDB::getCurrentWorkingDirectory()
static int _bind_getCurrentWorkingDirectory(lua_State *L) {
	if (!_lg_typecheck_getCurrentWorkingDirectory(L)) {
		luaL_error(L, "luna typecheck failed in std::string osgDB::getCurrentWorkingDirectory() function, expected prototype:\nstd::string osgDB::getCurrentWorkingDirectory()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	std::string lret = osgDB::getCurrentWorkingDirectory();
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// bool osgDB::setCurrentWorkingDirectory(const std::string & newCurrentWorkingDirectory)
static int _bind_setCurrentWorkingDirectory(lua_State *L) {
	if (!_lg_typecheck_setCurrentWorkingDirectory(L)) {
		luaL_error(L, "luna typecheck failed in bool osgDB::setCurrentWorkingDirectory(const std::string & newCurrentWorkingDirectory) function, expected prototype:\nbool osgDB::setCurrentWorkingDirectory(const std::string & newCurrentWorkingDirectory)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	std::string newCurrentWorkingDirectory(lua_tostring(L,1),lua_objlen(L,1));

	bool lret = osgDB::setCurrentWorkingDirectory(newCurrentWorkingDirectory);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// bool osgDB::fileExists(const std::string & filename)
static int _bind_fileExists(lua_State *L) {
	if (!_lg_typecheck_fileExists(L)) {
		luaL_error(L, "luna typecheck failed in bool osgDB::fileExists(const std::string & filename) function, expected prototype:\nbool osgDB::fileExists(const std::string & filename)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));

	bool lret = osgDB::fileExists(filename);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// osgDB::FileType osgDB::fileType(const std::string & filename)
static int _bind_fileType(lua_State *L) {
	if (!_lg_typecheck_fileType(L)) {
		luaL_error(L, "luna typecheck failed in osgDB::FileType osgDB::fileType(const std::string & filename) function, expected prototype:\nosgDB::FileType osgDB::fileType(const std::string & filename)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));

	osgDB::FileType lret = osgDB::fileType(filename);
	lua_pushnumber(L,lret);

	return 1;
}

// std::string osgDB::findFileInPath(const std::string & filename, const osgDB::FilePathList & filePath, osgDB::CaseSensitivity caseSensitivity = osgDB::CASE_SENSITIVE)
static int _bind_findFileInPath(lua_State *L) {
	if (!_lg_typecheck_findFileInPath(L)) {
		luaL_error(L, "luna typecheck failed in std::string osgDB::findFileInPath(const std::string & filename, const osgDB::FilePathList & filePath, osgDB::CaseSensitivity caseSensitivity = osgDB::CASE_SENSITIVE) function, expected prototype:\nstd::string osgDB::findFileInPath(const std::string & filename, const osgDB::FilePathList & filePath, osgDB::CaseSensitivity caseSensitivity = osgDB::CASE_SENSITIVE)\nClass arguments details:\narg 2 ID = 54591957\n\n%s",luna_dumpStack(L).c_str());
	}

	int luatop = lua_gettop(L);

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));
	const osgDB::FilePathList* filePath_ptr=(Luna< std::deque< std::string > >::checkSubType< osgDB::FilePathList >(L,2));
	if( !filePath_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg filePath in osgDB::findFileInPath function");
	}
	const osgDB::FilePathList & filePath=*filePath_ptr;
	osgDB::CaseSensitivity caseSensitivity=luatop>2 ? (osgDB::CaseSensitivity)lua_tointeger(L,3) : (osgDB::CaseSensitivity)osgDB::CASE_SENSITIVE;

	std::string lret = osgDB::findFileInPath(filename, filePath, caseSensitivity);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// std::string osgDB::findFileInDirectory(const std::string & fileName, const std::string & dirName, osgDB::CaseSensitivity caseSensitivity = osgDB::CASE_SENSITIVE)
static int _bind_findFileInDirectory(lua_State *L) {
	if (!_lg_typecheck_findFileInDirectory(L)) {
		luaL_error(L, "luna typecheck failed in std::string osgDB::findFileInDirectory(const std::string & fileName, const std::string & dirName, osgDB::CaseSensitivity caseSensitivity = osgDB::CASE_SENSITIVE) function, expected prototype:\nstd::string osgDB::findFileInDirectory(const std::string & fileName, const std::string & dirName, osgDB::CaseSensitivity caseSensitivity = osgDB::CASE_SENSITIVE)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int luatop = lua_gettop(L);

	std::string fileName(lua_tostring(L,1),lua_objlen(L,1));
	std::string dirName(lua_tostring(L,2),lua_objlen(L,2));
	osgDB::CaseSensitivity caseSensitivity=luatop>2 ? (osgDB::CaseSensitivity)lua_tointeger(L,3) : (osgDB::CaseSensitivity)osgDB::CASE_SENSITIVE;

	std::string lret = osgDB::findFileInDirectory(fileName, dirName, caseSensitivity);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// osgDB::DirectoryContents osgDB::getDirectoryContents(const std::string & dirName)
static int _bind_getDirectoryContents(lua_State *L) {
	if (!_lg_typecheck_getDirectoryContents(L)) {
		luaL_error(L, "luna typecheck failed in osgDB::DirectoryContents osgDB::getDirectoryContents(const std::string & dirName) function, expected prototype:\nosgDB::DirectoryContents osgDB::getDirectoryContents(const std::string & dirName)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	std::string dirName(lua_tostring(L,1),lua_objlen(L,1));

	osgDB::DirectoryContents stack_lret = osgDB::getDirectoryContents(dirName);
	osgDB::DirectoryContents* lret = new osgDB::DirectoryContents(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osgDB::DirectoryContents >::push(L,lret,true);

	return 1;
}

// osgDB::DirectoryContents osgDB::getSortedDirectoryContents(const std::string & dirName)
static int _bind_getSortedDirectoryContents(lua_State *L) {
	if (!_lg_typecheck_getSortedDirectoryContents(L)) {
		luaL_error(L, "luna typecheck failed in osgDB::DirectoryContents osgDB::getSortedDirectoryContents(const std::string & dirName) function, expected prototype:\nosgDB::DirectoryContents osgDB::getSortedDirectoryContents(const std::string & dirName)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	std::string dirName(lua_tostring(L,1),lua_objlen(L,1));

	osgDB::DirectoryContents stack_lret = osgDB::getSortedDirectoryContents(dirName);
	osgDB::DirectoryContents* lret = new osgDB::DirectoryContents(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osgDB::DirectoryContents >::push(L,lret,true);

	return 1;
}

// osgDB::DirectoryContents osgDB::expandWildcardsInFilename(const std::string & filename)
static int _bind_expandWildcardsInFilename(lua_State *L) {
	if (!_lg_typecheck_expandWildcardsInFilename(L)) {
		luaL_error(L, "luna typecheck failed in osgDB::DirectoryContents osgDB::expandWildcardsInFilename(const std::string & filename) function, expected prototype:\nosgDB::DirectoryContents osgDB::expandWildcardsInFilename(const std::string & filename)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));

	osgDB::DirectoryContents stack_lret = osgDB::expandWildcardsInFilename(filename);
	osgDB::DirectoryContents* lret = new osgDB::DirectoryContents(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osgDB::DirectoryContents >::push(L,lret,true);

	return 1;
}

// osgDB::FileOpResult::Value osgDB::copyFile(const std::string & source, const std::string & destination)
static int _bind_copyFile(lua_State *L) {
	if (!_lg_typecheck_copyFile(L)) {
		luaL_error(L, "luna typecheck failed in osgDB::FileOpResult::Value osgDB::copyFile(const std::string & source, const std::string & destination) function, expected prototype:\nosgDB::FileOpResult::Value osgDB::copyFile(const std::string & source, const std::string & destination)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	std::string source(lua_tostring(L,1),lua_objlen(L,1));
	std::string destination(lua_tostring(L,2),lua_objlen(L,2));

	osgDB::FileOpResult::Value lret = osgDB::copyFile(source, destination);
	lua_pushnumber(L,lret);

	return 1;
}

// void osgDB::setDataFilePathList(const osgDB::FilePathList & filepath)
static int _bind_setDataFilePathList_overload_1(lua_State *L) {
	if (!_lg_typecheck_setDataFilePathList_overload_1(L)) {
		luaL_error(L, "luna typecheck failed in void osgDB::setDataFilePathList(const osgDB::FilePathList & filepath) function, expected prototype:\nvoid osgDB::setDataFilePathList(const osgDB::FilePathList & filepath)\nClass arguments details:\narg 1 ID = 54591957\n\n%s",luna_dumpStack(L).c_str());
	}

	const osgDB::FilePathList* filepath_ptr=(Luna< std::deque< std::string > >::checkSubType< osgDB::FilePathList >(L,1));
	if( !filepath_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg filepath in osgDB::setDataFilePathList function");
	}
	const osgDB::FilePathList & filepath=*filepath_ptr;

	osgDB::setDataFilePathList(filepath);

	return 0;
}

// void osgDB::setDataFilePathList(const std::string & paths)
static int _bind_setDataFilePathList_overload_2(lua_State *L) {
	if (!_lg_typecheck_setDataFilePathList_overload_2(L)) {
		luaL_error(L, "luna typecheck failed in void osgDB::setDataFilePathList(const std::string & paths) function, expected prototype:\nvoid osgDB::setDataFilePathList(const std::string & paths)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	std::string paths(lua_tostring(L,1),lua_objlen(L,1));

	osgDB::setDataFilePathList(paths);

	return 0;
}

// Overload binder for osgDB::setDataFilePathList
static int _bind_setDataFilePathList(lua_State *L) {
	if (_lg_typecheck_setDataFilePathList_overload_1(L)) return _bind_setDataFilePathList_overload_1(L);
	if (_lg_typecheck_setDataFilePathList_overload_2(L)) return _bind_setDataFilePathList_overload_2(L);

	luaL_error(L, "error in function setDataFilePathList, cannot match any of the overloads for function setDataFilePathList:\n  setDataFilePathList(const osgDB::FilePathList &)\n  setDataFilePathList(const std::string &)\n");
	return 0;
}

// osgDB::FilePathList & osgDB::getDataFilePathList()
static int _bind_getDataFilePathList(lua_State *L) {
	if (!_lg_typecheck_getDataFilePathList(L)) {
		luaL_error(L, "luna typecheck failed in osgDB::FilePathList & osgDB::getDataFilePathList() function, expected prototype:\nosgDB::FilePathList & osgDB::getDataFilePathList()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	const osgDB::FilePathList* lret = &osgDB::getDataFilePathList();
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osgDB::FilePathList >::push(L,lret,false);

	return 1;
}

// std::string osgDB::findDataFile(const std::string & filename, osgDB::CaseSensitivity caseSensitivity = osgDB::CASE_SENSITIVE)
static int _bind_findDataFile_overload_1(lua_State *L) {
	if (!_lg_typecheck_findDataFile_overload_1(L)) {
		luaL_error(L, "luna typecheck failed in std::string osgDB::findDataFile(const std::string & filename, osgDB::CaseSensitivity caseSensitivity = osgDB::CASE_SENSITIVE) function, expected prototype:\nstd::string osgDB::findDataFile(const std::string & filename, osgDB::CaseSensitivity caseSensitivity = osgDB::CASE_SENSITIVE)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int luatop = lua_gettop(L);

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));
	osgDB::CaseSensitivity caseSensitivity=luatop>1 ? (osgDB::CaseSensitivity)lua_tointeger(L,2) : (osgDB::CaseSensitivity)osgDB::CASE_SENSITIVE;

	std::string lret = osgDB::findDataFile(filename, caseSensitivity);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// std::string osgDB::findDataFile(const std::string & filename, const osgDB::Options * options, osgDB::CaseSensitivity caseSensitivity = osgDB::CASE_SENSITIVE)
static int _bind_findDataFile_overload_2(lua_State *L) {
	if (!_lg_typecheck_findDataFile_overload_2(L)) {
		luaL_error(L, "luna typecheck failed in std::string osgDB::findDataFile(const std::string & filename, const osgDB::Options * options, osgDB::CaseSensitivity caseSensitivity = osgDB::CASE_SENSITIVE) function, expected prototype:\nstd::string osgDB::findDataFile(const std::string & filename, const osgDB::Options * options, osgDB::CaseSensitivity caseSensitivity = osgDB::CASE_SENSITIVE)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
	}

	int luatop = lua_gettop(L);

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));
	const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,2));
	osgDB::CaseSensitivity caseSensitivity=luatop>2 ? (osgDB::CaseSensitivity)lua_tointeger(L,3) : (osgDB::CaseSensitivity)osgDB::CASE_SENSITIVE;

	std::string lret = osgDB::findDataFile(filename, options, caseSensitivity);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// Overload binder for osgDB::findDataFile
static int _bind_findDataFile(lua_State *L) {
	if (_lg_typecheck_findDataFile_overload_1(L)) return _bind_findDataFile_overload_1(L);
	if (_lg_typecheck_findDataFile_overload_2(L)) return _bind_findDataFile_overload_2(L);

	luaL_error(L, "error in function findDataFile, cannot match any of the overloads for function findDataFile:\n  findDataFile(const std::string &, osgDB::CaseSensitivity)\n  findDataFile(const std::string &, const osgDB::Options *, osgDB::CaseSensitivity)\n");
	return 0;
}

// void osgDB::setLibraryFilePathList(const osgDB::FilePathList & filepaths)
static int _bind_setLibraryFilePathList_overload_1(lua_State *L) {
	if (!_lg_typecheck_setLibraryFilePathList_overload_1(L)) {
		luaL_error(L, "luna typecheck failed in void osgDB::setLibraryFilePathList(const osgDB::FilePathList & filepaths) function, expected prototype:\nvoid osgDB::setLibraryFilePathList(const osgDB::FilePathList & filepaths)\nClass arguments details:\narg 1 ID = 54591957\n\n%s",luna_dumpStack(L).c_str());
	}

	const osgDB::FilePathList* filepaths_ptr=(Luna< std::deque< std::string > >::checkSubType< osgDB::FilePathList >(L,1));
	if( !filepaths_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg filepaths in osgDB::setLibraryFilePathList function");
	}
	const osgDB::FilePathList & filepaths=*filepaths_ptr;

	osgDB::setLibraryFilePathList(filepaths);

	return 0;
}

// void osgDB::setLibraryFilePathList(const std::string & paths)
static int _bind_setLibraryFilePathList_overload_2(lua_State *L) {
	if (!_lg_typecheck_setLibraryFilePathList_overload_2(L)) {
		luaL_error(L, "luna typecheck failed in void osgDB::setLibraryFilePathList(const std::string & paths) function, expected prototype:\nvoid osgDB::setLibraryFilePathList(const std::string & paths)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	std::string paths(lua_tostring(L,1),lua_objlen(L,1));

	osgDB::setLibraryFilePathList(paths);

	return 0;
}

// Overload binder for osgDB::setLibraryFilePathList
static int _bind_setLibraryFilePathList(lua_State *L) {
	if (_lg_typecheck_setLibraryFilePathList_overload_1(L)) return _bind_setLibraryFilePathList_overload_1(L);
	if (_lg_typecheck_setLibraryFilePathList_overload_2(L)) return _bind_setLibraryFilePathList_overload_2(L);

	luaL_error(L, "error in function setLibraryFilePathList, cannot match any of the overloads for function setLibraryFilePathList:\n  setLibraryFilePathList(const osgDB::FilePathList &)\n  setLibraryFilePathList(const std::string &)\n");
	return 0;
}

// osgDB::FilePathList & osgDB::getLibraryFilePathList()
static int _bind_getLibraryFilePathList(lua_State *L) {
	if (!_lg_typecheck_getLibraryFilePathList(L)) {
		luaL_error(L, "luna typecheck failed in osgDB::FilePathList & osgDB::getLibraryFilePathList() function, expected prototype:\nosgDB::FilePathList & osgDB::getLibraryFilePathList()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	const osgDB::FilePathList* lret = &osgDB::getLibraryFilePathList();
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osgDB::FilePathList >::push(L,lret,false);

	return 1;
}

// std::string osgDB::findLibraryFile(const std::string & filename, osgDB::CaseSensitivity caseSensitivity = osgDB::CASE_SENSITIVE)
static int _bind_findLibraryFile(lua_State *L) {
	if (!_lg_typecheck_findLibraryFile(L)) {
		luaL_error(L, "luna typecheck failed in std::string osgDB::findLibraryFile(const std::string & filename, osgDB::CaseSensitivity caseSensitivity = osgDB::CASE_SENSITIVE) function, expected prototype:\nstd::string osgDB::findLibraryFile(const std::string & filename, osgDB::CaseSensitivity caseSensitivity = osgDB::CASE_SENSITIVE)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int luatop = lua_gettop(L);

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));
	osgDB::CaseSensitivity caseSensitivity=luatop>1 ? (osgDB::CaseSensitivity)lua_tointeger(L,2) : (osgDB::CaseSensitivity)osgDB::CASE_SENSITIVE;

	std::string lret = osgDB::findLibraryFile(filename, caseSensitivity);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// void osgDB::convertStringPathIntoFilePathList(const std::string & paths, osgDB::FilePathList & filepath)
static int _bind_convertStringPathIntoFilePathList(lua_State *L) {
	if (!_lg_typecheck_convertStringPathIntoFilePathList(L)) {
		luaL_error(L, "luna typecheck failed in void osgDB::convertStringPathIntoFilePathList(const std::string & paths, osgDB::FilePathList & filepath) function, expected prototype:\nvoid osgDB::convertStringPathIntoFilePathList(const std::string & paths, osgDB::FilePathList & filepath)\nClass arguments details:\narg 2 ID = 54591957\n\n%s",luna_dumpStack(L).c_str());
	}

	std::string paths(lua_tostring(L,1),lua_objlen(L,1));
	osgDB::FilePathList* filepath_ptr=(Luna< std::deque< std::string > >::checkSubType< osgDB::FilePathList >(L,2));
	if( !filepath_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg filepath in osgDB::convertStringPathIntoFilePathList function");
	}
	osgDB::FilePathList & filepath=*filepath_ptr;

	osgDB::convertStringPathIntoFilePathList(paths, filepath);

	return 0;
}

// bool osgDB::containsCurrentWorkingDirectoryReference(const osgDB::FilePathList & paths)
static int _bind_containsCurrentWorkingDirectoryReference(lua_State *L) {
	if (!_lg_typecheck_containsCurrentWorkingDirectoryReference(L)) {
		luaL_error(L, "luna typecheck failed in bool osgDB::containsCurrentWorkingDirectoryReference(const osgDB::FilePathList & paths) function, expected prototype:\nbool osgDB::containsCurrentWorkingDirectoryReference(const osgDB::FilePathList & paths)\nClass arguments details:\narg 1 ID = 54591957\n\n%s",luna_dumpStack(L).c_str());
	}

	const osgDB::FilePathList* paths_ptr=(Luna< std::deque< std::string > >::checkSubType< osgDB::FilePathList >(L,1));
	if( !paths_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg paths in osgDB::containsCurrentWorkingDirectoryReference function");
	}
	const osgDB::FilePathList & paths=*paths_ptr;

	bool lret = osgDB::containsCurrentWorkingDirectoryReference(paths);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// void osgDB::appendPlatformSpecificLibraryFilePaths(osgDB::FilePathList & filepath)
static int _bind_appendPlatformSpecificLibraryFilePaths(lua_State *L) {
	if (!_lg_typecheck_appendPlatformSpecificLibraryFilePaths(L)) {
		luaL_error(L, "luna typecheck failed in void osgDB::appendPlatformSpecificLibraryFilePaths(osgDB::FilePathList & filepath) function, expected prototype:\nvoid osgDB::appendPlatformSpecificLibraryFilePaths(osgDB::FilePathList & filepath)\nClass arguments details:\narg 1 ID = 54591957\n\n%s",luna_dumpStack(L).c_str());
	}

	osgDB::FilePathList* filepath_ptr=(Luna< std::deque< std::string > >::checkSubType< osgDB::FilePathList >(L,1));
	if( !filepath_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg filepath in osgDB::appendPlatformSpecificLibraryFilePaths function");
	}
	osgDB::FilePathList & filepath=*filepath_ptr;

	osgDB::appendPlatformSpecificLibraryFilePaths(filepath);

	return 0;
}

// void osgDB::appendPlatformSpecificResourceFilePaths(osgDB::FilePathList & filepath)
static int _bind_appendPlatformSpecificResourceFilePaths(lua_State *L) {
	if (!_lg_typecheck_appendPlatformSpecificResourceFilePaths(L)) {
		luaL_error(L, "luna typecheck failed in void osgDB::appendPlatformSpecificResourceFilePaths(osgDB::FilePathList & filepath) function, expected prototype:\nvoid osgDB::appendPlatformSpecificResourceFilePaths(osgDB::FilePathList & filepath)\nClass arguments details:\narg 1 ID = 54591957\n\n%s",luna_dumpStack(L).c_str());
	}

	osgDB::FilePathList* filepath_ptr=(Luna< std::deque< std::string > >::checkSubType< osgDB::FilePathList >(L,1));
	if( !filepath_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg filepath in osgDB::appendPlatformSpecificResourceFilePaths function");
	}
	osgDB::FilePathList & filepath=*filepath_ptr;

	osgDB::appendPlatformSpecificResourceFilePaths(filepath);

	return 0;
}

// void osgDB::split(const std::string & src, osgDB::StringList & list, char separator = ' ')
static int _bind_split(lua_State *L) {
	if (!_lg_typecheck_split(L)) {
		luaL_error(L, "luna typecheck failed in void osgDB::split(const std::string & src, osgDB::StringList & list, char separator = ' ') function, expected prototype:\nvoid osgDB::split(const std::string & src, osgDB::StringList & list, char separator = ' ')\nClass arguments details:\narg 2 ID = 26072480\n\n%s",luna_dumpStack(L).c_str());
	}

	int luatop = lua_gettop(L);

	std::string src(lua_tostring(L,1),lua_objlen(L,1));
	osgDB::StringList* list_ptr=(Luna< std::vector< std::string > >::checkSubType< osgDB::StringList >(L,2));
	if( !list_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg list in osgDB::split function");
	}
	osgDB::StringList & list=*list_ptr;
	char separator=luatop>2 ? (char)lua_tointeger(L,3) : (char)' ';

	osgDB::split(src, list, separator);

	return 0;
}

// osgDB::FileNameList osgDB::listAllAvailablePlugins()
static int _bind_listAllAvailablePlugins(lua_State *L) {
	if (!_lg_typecheck_listAllAvailablePlugins(L)) {
		luaL_error(L, "luna typecheck failed in osgDB::FileNameList osgDB::listAllAvailablePlugins() function, expected prototype:\nosgDB::FileNameList osgDB::listAllAvailablePlugins()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	osgDB::FileNameList stack_lret = osgDB::listAllAvailablePlugins();
	osgDB::FileNameList* lret = new osgDB::FileNameList(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osgDB::FileNameList >::push(L,lret,true);

	return 1;
}

// bool osgDB::queryPlugin(const std::string & fileName, osgDB::ReaderWriterInfoList & infoList)
static int _bind_queryPlugin(lua_State *L) {
	if (!_lg_typecheck_queryPlugin(L)) {
		luaL_error(L, "luna typecheck failed in bool osgDB::queryPlugin(const std::string & fileName, osgDB::ReaderWriterInfoList & infoList) function, expected prototype:\nbool osgDB::queryPlugin(const std::string & fileName, osgDB::ReaderWriterInfoList & infoList)\nClass arguments details:\narg 2 ID = 75164642\n\n%s",luna_dumpStack(L).c_str());
	}

	std::string fileName(lua_tostring(L,1),lua_objlen(L,1));
	osgDB::ReaderWriterInfoList* infoList_ptr=(Luna< std::list< osg::ref_ptr< osgDB::ReaderWriterInfo > > >::checkSubType< osgDB::ReaderWriterInfoList >(L,2));
	if( !infoList_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg infoList in osgDB::queryPlugin function");
	}
	osgDB::ReaderWriterInfoList & infoList=*infoList_ptr;

	bool lret = osgDB::queryPlugin(fileName, infoList);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// bool osgDB::outputPluginDetails(std::ostream & out, const std::string & fileName)
static int _bind_outputPluginDetails(lua_State *L) {
	if (!_lg_typecheck_outputPluginDetails(L)) {
		luaL_error(L, "luna typecheck failed in bool osgDB::outputPluginDetails(std::ostream & out, const std::string & fileName) function, expected prototype:\nbool osgDB::outputPluginDetails(std::ostream & out, const std::string & fileName)\nClass arguments details:\narg 1 ID = 2993706\n\n%s",luna_dumpStack(L).c_str());
	}

	std::ostream* out_ptr=(Luna< std::ostream >::check(L,1));
	if( !out_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg out in osgDB::outputPluginDetails function");
	}
	std::ostream & out=*out_ptr;
	std::string fileName(lua_tostring(L,2),lua_objlen(L,2));

	bool lret = osgDB::outputPluginDetails(out, fileName);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// osg::Object * osgDB::readObjectFile(const std::string & filename, const osgDB::Options * options)
static int _bind_readObjectFile_overload_1(lua_State *L) {
	if (!_lg_typecheck_readObjectFile_overload_1(L)) {
		luaL_error(L, "luna typecheck failed in osg::Object * osgDB::readObjectFile(const std::string & filename, const osgDB::Options * options) function, expected prototype:\nosg::Object * osgDB::readObjectFile(const std::string & filename, const osgDB::Options * options)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
	}

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));
	const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,2));

	osg::Object * lret = osgDB::readObjectFile(filename, options);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::Object >::push(L,lret,false);

	return 1;
}

// osg::Object * osgDB::readObjectFile(const std::string & filename)
static int _bind_readObjectFile_overload_2(lua_State *L) {
	if (!_lg_typecheck_readObjectFile_overload_2(L)) {
		luaL_error(L, "luna typecheck failed in osg::Object * osgDB::readObjectFile(const std::string & filename) function, expected prototype:\nosg::Object * osgDB::readObjectFile(const std::string & filename)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));

	osg::Object * lret = osgDB::readObjectFile(filename);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::Object >::push(L,lret,false);

	return 1;
}

// Overload binder for osgDB::readObjectFile
static int _bind_readObjectFile(lua_State *L) {
	if (_lg_typecheck_readObjectFile_overload_1(L)) return _bind_readObjectFile_overload_1(L);
	if (_lg_typecheck_readObjectFile_overload_2(L)) return _bind_readObjectFile_overload_2(L);

	luaL_error(L, "error in function readObjectFile, cannot match any of the overloads for function readObjectFile:\n  readObjectFile(const std::string &, const osgDB::Options *)\n  readObjectFile(const std::string &)\n");
	return 0;
}

// osg::Image * osgDB::readImageFile(const std::string & filename, const osgDB::Options * options)
static int _bind_readImageFile_overload_1(lua_State *L) {
	if (!_lg_typecheck_readImageFile_overload_1(L)) {
		luaL_error(L, "luna typecheck failed in osg::Image * osgDB::readImageFile(const std::string & filename, const osgDB::Options * options) function, expected prototype:\nosg::Image * osgDB::readImageFile(const std::string & filename, const osgDB::Options * options)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
	}

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));
	const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,2));

	osg::Image * lret = osgDB::readImageFile(filename, options);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::Image >::push(L,lret,false);

	return 1;
}

// osg::Image * osgDB::readImageFile(const std::string & filename)
static int _bind_readImageFile_overload_2(lua_State *L) {
	if (!_lg_typecheck_readImageFile_overload_2(L)) {
		luaL_error(L, "luna typecheck failed in osg::Image * osgDB::readImageFile(const std::string & filename) function, expected prototype:\nosg::Image * osgDB::readImageFile(const std::string & filename)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));

	osg::Image * lret = osgDB::readImageFile(filename);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::Image >::push(L,lret,false);

	return 1;
}

// Overload binder for osgDB::readImageFile
static int _bind_readImageFile(lua_State *L) {
	if (_lg_typecheck_readImageFile_overload_1(L)) return _bind_readImageFile_overload_1(L);
	if (_lg_typecheck_readImageFile_overload_2(L)) return _bind_readImageFile_overload_2(L);

	luaL_error(L, "error in function readImageFile, cannot match any of the overloads for function readImageFile:\n  readImageFile(const std::string &, const osgDB::Options *)\n  readImageFile(const std::string &)\n");
	return 0;
}

// osg::HeightField * osgDB::readHeightFieldFile(const std::string & filename, const osgDB::Options * options)
static int _bind_readHeightFieldFile_overload_1(lua_State *L) {
	if (!_lg_typecheck_readHeightFieldFile_overload_1(L)) {
		luaL_error(L, "luna typecheck failed in osg::HeightField * osgDB::readHeightFieldFile(const std::string & filename, const osgDB::Options * options) function, expected prototype:\nosg::HeightField * osgDB::readHeightFieldFile(const std::string & filename, const osgDB::Options * options)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
	}

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));
	const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,2));

	osg::HeightField * lret = osgDB::readHeightFieldFile(filename, options);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::HeightField >::push(L,lret,false);

	return 1;
}

// osg::HeightField * osgDB::readHeightFieldFile(const std::string & filename)
static int _bind_readHeightFieldFile_overload_2(lua_State *L) {
	if (!_lg_typecheck_readHeightFieldFile_overload_2(L)) {
		luaL_error(L, "luna typecheck failed in osg::HeightField * osgDB::readHeightFieldFile(const std::string & filename) function, expected prototype:\nosg::HeightField * osgDB::readHeightFieldFile(const std::string & filename)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));

	osg::HeightField * lret = osgDB::readHeightFieldFile(filename);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::HeightField >::push(L,lret,false);

	return 1;
}

// Overload binder for osgDB::readHeightFieldFile
static int _bind_readHeightFieldFile(lua_State *L) {
	if (_lg_typecheck_readHeightFieldFile_overload_1(L)) return _bind_readHeightFieldFile_overload_1(L);
	if (_lg_typecheck_readHeightFieldFile_overload_2(L)) return _bind_readHeightFieldFile_overload_2(L);

	luaL_error(L, "error in function readHeightFieldFile, cannot match any of the overloads for function readHeightFieldFile:\n  readHeightFieldFile(const std::string &, const osgDB::Options *)\n  readHeightFieldFile(const std::string &)\n");
	return 0;
}

// osg::Node * osgDB::readNodeFile(const std::string & filename, const osgDB::Options * options)
static int _bind_readNodeFile_overload_1(lua_State *L) {
	if (!_lg_typecheck_readNodeFile_overload_1(L)) {
		luaL_error(L, "luna typecheck failed in osg::Node * osgDB::readNodeFile(const std::string & filename, const osgDB::Options * options) function, expected prototype:\nosg::Node * osgDB::readNodeFile(const std::string & filename, const osgDB::Options * options)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
	}

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));
	const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,2));

	osg::Node * lret = osgDB::readNodeFile(filename, options);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::Node >::push(L,lret,false);

	return 1;
}

// osg::Node * osgDB::readNodeFile(const std::string & filename)
static int _bind_readNodeFile_overload_2(lua_State *L) {
	if (!_lg_typecheck_readNodeFile_overload_2(L)) {
		luaL_error(L, "luna typecheck failed in osg::Node * osgDB::readNodeFile(const std::string & filename) function, expected prototype:\nosg::Node * osgDB::readNodeFile(const std::string & filename)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));

	osg::Node * lret = osgDB::readNodeFile(filename);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::Node >::push(L,lret,false);

	return 1;
}

// Overload binder for osgDB::readNodeFile
static int _bind_readNodeFile(lua_State *L) {
	if (_lg_typecheck_readNodeFile_overload_1(L)) return _bind_readNodeFile_overload_1(L);
	if (_lg_typecheck_readNodeFile_overload_2(L)) return _bind_readNodeFile_overload_2(L);

	luaL_error(L, "error in function readNodeFile, cannot match any of the overloads for function readNodeFile:\n  readNodeFile(const std::string &, const osgDB::Options *)\n  readNodeFile(const std::string &)\n");
	return 0;
}

// osg::Shader * osgDB::readShaderFile(const std::string & filename, const osgDB::Options * options)
static int _bind_readShaderFile_overload_1(lua_State *L) {
	if (!_lg_typecheck_readShaderFile_overload_1(L)) {
		luaL_error(L, "luna typecheck failed in osg::Shader * osgDB::readShaderFile(const std::string & filename, const osgDB::Options * options) function, expected prototype:\nosg::Shader * osgDB::readShaderFile(const std::string & filename, const osgDB::Options * options)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
	}

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));
	const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,2));

	osg::Shader * lret = osgDB::readShaderFile(filename, options);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::Shader >::push(L,lret,false);

	return 1;
}

// osg::Shader * osgDB::readShaderFile(const std::string & filename)
static int _bind_readShaderFile_overload_2(lua_State *L) {
	if (!_lg_typecheck_readShaderFile_overload_2(L)) {
		luaL_error(L, "luna typecheck failed in osg::Shader * osgDB::readShaderFile(const std::string & filename) function, expected prototype:\nosg::Shader * osgDB::readShaderFile(const std::string & filename)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));

	osg::Shader * lret = osgDB::readShaderFile(filename);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::Shader >::push(L,lret,false);

	return 1;
}

// osg::Shader * osgDB::readShaderFile(osg::Shader::Type type, const std::string & filename, const osgDB::Options * options)
static int _bind_readShaderFile_overload_3(lua_State *L) {
	if (!_lg_typecheck_readShaderFile_overload_3(L)) {
		luaL_error(L, "luna typecheck failed in osg::Shader * osgDB::readShaderFile(osg::Shader::Type type, const std::string & filename, const osgDB::Options * options) function, expected prototype:\nosg::Shader * osgDB::readShaderFile(osg::Shader::Type type, const std::string & filename, const osgDB::Options * options)\nClass arguments details:\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
	}

	osg::Shader::Type type=(osg::Shader::Type)lua_tointeger(L,1);
	std::string filename(lua_tostring(L,2),lua_objlen(L,2));
	const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3));

	osg::Shader * lret = osgDB::readShaderFile(type, filename, options);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::Shader >::push(L,lret,false);

	return 1;
}

// osg::Shader * osgDB::readShaderFile(osg::Shader::Type type, const std::string & filename)
static int _bind_readShaderFile_overload_4(lua_State *L) {
	if (!_lg_typecheck_readShaderFile_overload_4(L)) {
		luaL_error(L, "luna typecheck failed in osg::Shader * osgDB::readShaderFile(osg::Shader::Type type, const std::string & filename) function, expected prototype:\nosg::Shader * osgDB::readShaderFile(osg::Shader::Type type, const std::string & filename)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	osg::Shader::Type type=(osg::Shader::Type)lua_tointeger(L,1);
	std::string filename(lua_tostring(L,2),lua_objlen(L,2));

	osg::Shader * lret = osgDB::readShaderFile(type, filename);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::Shader >::push(L,lret,false);

	return 1;
}

// Overload binder for osgDB::readShaderFile
static int _bind_readShaderFile(lua_State *L) {
	if (_lg_typecheck_readShaderFile_overload_1(L)) return _bind_readShaderFile_overload_1(L);
	if (_lg_typecheck_readShaderFile_overload_2(L)) return _bind_readShaderFile_overload_2(L);
	if (_lg_typecheck_readShaderFile_overload_3(L)) return _bind_readShaderFile_overload_3(L);
	if (_lg_typecheck_readShaderFile_overload_4(L)) return _bind_readShaderFile_overload_4(L);

	luaL_error(L, "error in function readShaderFile, cannot match any of the overloads for function readShaderFile:\n  readShaderFile(const std::string &, const osgDB::Options *)\n  readShaderFile(const std::string &)\n  readShaderFile(osg::Shader::Type, const std::string &, const osgDB::Options *)\n  readShaderFile(osg::Shader::Type, const std::string &)\n");
	return 0;
}

// osg::ref_ptr< osg::Object > osgDB::readRefObjectFile(const std::string & filename, const osgDB::Options * options)
static int _bind_readRefObjectFile_overload_1(lua_State *L) {
	if (!_lg_typecheck_readRefObjectFile_overload_1(L)) {
		luaL_error(L, "luna typecheck failed in osg::ref_ptr< osg::Object > osgDB::readRefObjectFile(const std::string & filename, const osgDB::Options * options) function, expected prototype:\nosg::ref_ptr< osg::Object > osgDB::readRefObjectFile(const std::string & filename, const osgDB::Options * options)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
	}

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));
	const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,2));

	osg::ref_ptr< osg::Object > lret = osgDB::readRefObjectFile(filename, options);
	Luna< osg::Object >::push(L,lret.get(),false);

	return 1;
}

// osg::ref_ptr< osg::Object > osgDB::readRefObjectFile(const std::string & filename)
static int _bind_readRefObjectFile_overload_2(lua_State *L) {
	if (!_lg_typecheck_readRefObjectFile_overload_2(L)) {
		luaL_error(L, "luna typecheck failed in osg::ref_ptr< osg::Object > osgDB::readRefObjectFile(const std::string & filename) function, expected prototype:\nosg::ref_ptr< osg::Object > osgDB::readRefObjectFile(const std::string & filename)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));

	osg::ref_ptr< osg::Object > lret = osgDB::readRefObjectFile(filename);
	Luna< osg::Object >::push(L,lret.get(),false);

	return 1;
}

// Overload binder for osgDB::readRefObjectFile
static int _bind_readRefObjectFile(lua_State *L) {
	if (_lg_typecheck_readRefObjectFile_overload_1(L)) return _bind_readRefObjectFile_overload_1(L);
	if (_lg_typecheck_readRefObjectFile_overload_2(L)) return _bind_readRefObjectFile_overload_2(L);

	luaL_error(L, "error in function readRefObjectFile, cannot match any of the overloads for function readRefObjectFile:\n  readRefObjectFile(const std::string &, const osgDB::Options *)\n  readRefObjectFile(const std::string &)\n");
	return 0;
}

// osg::ref_ptr< osg::Image > osgDB::readRefImageFile(const std::string & filename, const osgDB::Options * options)
static int _bind_readRefImageFile_overload_1(lua_State *L) {
	if (!_lg_typecheck_readRefImageFile_overload_1(L)) {
		luaL_error(L, "luna typecheck failed in osg::ref_ptr< osg::Image > osgDB::readRefImageFile(const std::string & filename, const osgDB::Options * options) function, expected prototype:\nosg::ref_ptr< osg::Image > osgDB::readRefImageFile(const std::string & filename, const osgDB::Options * options)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
	}

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));
	const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,2));

	osg::ref_ptr< osg::Image > lret = osgDB::readRefImageFile(filename, options);
	Luna< osg::Image >::push(L,lret.get(),false);

	return 1;
}

// osg::ref_ptr< osg::Image > osgDB::readRefImageFile(const std::string & filename)
static int _bind_readRefImageFile_overload_2(lua_State *L) {
	if (!_lg_typecheck_readRefImageFile_overload_2(L)) {
		luaL_error(L, "luna typecheck failed in osg::ref_ptr< osg::Image > osgDB::readRefImageFile(const std::string & filename) function, expected prototype:\nosg::ref_ptr< osg::Image > osgDB::readRefImageFile(const std::string & filename)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));

	osg::ref_ptr< osg::Image > lret = osgDB::readRefImageFile(filename);
	Luna< osg::Image >::push(L,lret.get(),false);

	return 1;
}

// Overload binder for osgDB::readRefImageFile
static int _bind_readRefImageFile(lua_State *L) {
	if (_lg_typecheck_readRefImageFile_overload_1(L)) return _bind_readRefImageFile_overload_1(L);
	if (_lg_typecheck_readRefImageFile_overload_2(L)) return _bind_readRefImageFile_overload_2(L);

	luaL_error(L, "error in function readRefImageFile, cannot match any of the overloads for function readRefImageFile:\n  readRefImageFile(const std::string &, const osgDB::Options *)\n  readRefImageFile(const std::string &)\n");
	return 0;
}

// osg::ref_ptr< osg::HeightField > osgDB::readRefHeightFieldFile(const std::string & filename, const osgDB::Options * options)
static int _bind_readRefHeightFieldFile_overload_1(lua_State *L) {
	if (!_lg_typecheck_readRefHeightFieldFile_overload_1(L)) {
		luaL_error(L, "luna typecheck failed in osg::ref_ptr< osg::HeightField > osgDB::readRefHeightFieldFile(const std::string & filename, const osgDB::Options * options) function, expected prototype:\nosg::ref_ptr< osg::HeightField > osgDB::readRefHeightFieldFile(const std::string & filename, const osgDB::Options * options)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
	}

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));
	const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,2));

	osg::ref_ptr< osg::HeightField > lret = osgDB::readRefHeightFieldFile(filename, options);
	Luna< osg::HeightField >::push(L,lret.get(),false);

	return 1;
}

// osg::ref_ptr< osg::HeightField > osgDB::readRefHeightFieldFile(const std::string & filename)
static int _bind_readRefHeightFieldFile_overload_2(lua_State *L) {
	if (!_lg_typecheck_readRefHeightFieldFile_overload_2(L)) {
		luaL_error(L, "luna typecheck failed in osg::ref_ptr< osg::HeightField > osgDB::readRefHeightFieldFile(const std::string & filename) function, expected prototype:\nosg::ref_ptr< osg::HeightField > osgDB::readRefHeightFieldFile(const std::string & filename)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));

	osg::ref_ptr< osg::HeightField > lret = osgDB::readRefHeightFieldFile(filename);
	Luna< osg::HeightField >::push(L,lret.get(),false);

	return 1;
}

// Overload binder for osgDB::readRefHeightFieldFile
static int _bind_readRefHeightFieldFile(lua_State *L) {
	if (_lg_typecheck_readRefHeightFieldFile_overload_1(L)) return _bind_readRefHeightFieldFile_overload_1(L);
	if (_lg_typecheck_readRefHeightFieldFile_overload_2(L)) return _bind_readRefHeightFieldFile_overload_2(L);

	luaL_error(L, "error in function readRefHeightFieldFile, cannot match any of the overloads for function readRefHeightFieldFile:\n  readRefHeightFieldFile(const std::string &, const osgDB::Options *)\n  readRefHeightFieldFile(const std::string &)\n");
	return 0;
}

// osg::ref_ptr< osg::Node > osgDB::readRefNodeFile(const std::string & filename, const osgDB::Options * options)
static int _bind_readRefNodeFile_overload_1(lua_State *L) {
	if (!_lg_typecheck_readRefNodeFile_overload_1(L)) {
		luaL_error(L, "luna typecheck failed in osg::ref_ptr< osg::Node > osgDB::readRefNodeFile(const std::string & filename, const osgDB::Options * options) function, expected prototype:\nosg::ref_ptr< osg::Node > osgDB::readRefNodeFile(const std::string & filename, const osgDB::Options * options)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
	}

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));
	const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,2));

	osg::ref_ptr< osg::Node > lret = osgDB::readRefNodeFile(filename, options);
	Luna< osg::Node >::push(L,lret.get(),false);

	return 1;
}

// osg::ref_ptr< osg::Node > osgDB::readRefNodeFile(const std::string & filename)
static int _bind_readRefNodeFile_overload_2(lua_State *L) {
	if (!_lg_typecheck_readRefNodeFile_overload_2(L)) {
		luaL_error(L, "luna typecheck failed in osg::ref_ptr< osg::Node > osgDB::readRefNodeFile(const std::string & filename) function, expected prototype:\nosg::ref_ptr< osg::Node > osgDB::readRefNodeFile(const std::string & filename)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));

	osg::ref_ptr< osg::Node > lret = osgDB::readRefNodeFile(filename);
	Luna< osg::Node >::push(L,lret.get(),false);

	return 1;
}

// Overload binder for osgDB::readRefNodeFile
static int _bind_readRefNodeFile(lua_State *L) {
	if (_lg_typecheck_readRefNodeFile_overload_1(L)) return _bind_readRefNodeFile_overload_1(L);
	if (_lg_typecheck_readRefNodeFile_overload_2(L)) return _bind_readRefNodeFile_overload_2(L);

	luaL_error(L, "error in function readRefNodeFile, cannot match any of the overloads for function readRefNodeFile:\n  readRefNodeFile(const std::string &, const osgDB::Options *)\n  readRefNodeFile(const std::string &)\n");
	return 0;
}

// osg::ref_ptr< osg::Shader > osgDB::readRefShaderFile(const std::string & filename, const osgDB::Options * options)
static int _bind_readRefShaderFile_overload_1(lua_State *L) {
	if (!_lg_typecheck_readRefShaderFile_overload_1(L)) {
		luaL_error(L, "luna typecheck failed in osg::ref_ptr< osg::Shader > osgDB::readRefShaderFile(const std::string & filename, const osgDB::Options * options) function, expected prototype:\nosg::ref_ptr< osg::Shader > osgDB::readRefShaderFile(const std::string & filename, const osgDB::Options * options)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
	}

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));
	const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,2));

	osg::ref_ptr< osg::Shader > lret = osgDB::readRefShaderFile(filename, options);
	Luna< osg::Shader >::push(L,lret.get(),false);

	return 1;
}

// osg::ref_ptr< osg::Shader > osgDB::readRefShaderFile(const std::string & filename)
static int _bind_readRefShaderFile_overload_2(lua_State *L) {
	if (!_lg_typecheck_readRefShaderFile_overload_2(L)) {
		luaL_error(L, "luna typecheck failed in osg::ref_ptr< osg::Shader > osgDB::readRefShaderFile(const std::string & filename) function, expected prototype:\nosg::ref_ptr< osg::Shader > osgDB::readRefShaderFile(const std::string & filename)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));

	osg::ref_ptr< osg::Shader > lret = osgDB::readRefShaderFile(filename);
	Luna< osg::Shader >::push(L,lret.get(),false);

	return 1;
}

// Overload binder for osgDB::readRefShaderFile
static int _bind_readRefShaderFile(lua_State *L) {
	if (_lg_typecheck_readRefShaderFile_overload_1(L)) return _bind_readRefShaderFile_overload_1(L);
	if (_lg_typecheck_readRefShaderFile_overload_2(L)) return _bind_readRefShaderFile_overload_2(L);

	luaL_error(L, "error in function readRefShaderFile, cannot match any of the overloads for function readRefShaderFile:\n  readRefShaderFile(const std::string &, const osgDB::Options *)\n  readRefShaderFile(const std::string &)\n");
	return 0;
}

// void osgDB::readCommandLine(osg::ArgumentParser & parser)
static int _bind_readCommandLine(lua_State *L) {
	if (!_lg_typecheck_readCommandLine(L)) {
		luaL_error(L, "luna typecheck failed in void osgDB::readCommandLine(osg::ArgumentParser & parser) function, expected prototype:\nvoid osgDB::readCommandLine(osg::ArgumentParser & parser)\nClass arguments details:\narg 1 ID = 99527028\n\n%s",luna_dumpStack(L).c_str());
	}

	osg::ArgumentParser* parser_ptr=(Luna< osg::ArgumentParser >::check(L,1));
	if( !parser_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg parser in osgDB::readCommandLine function");
	}
	osg::ArgumentParser & parser=*parser_ptr;

	osgDB::readCommandLine(parser);

	return 0;
}

// bool osgDB::writeObjectFile(const osg::Object & object, const std::string & filename, const osgDB::Options * options)
static int _bind_writeObjectFile_overload_1(lua_State *L) {
	if (!_lg_typecheck_writeObjectFile_overload_1(L)) {
		luaL_error(L, "luna typecheck failed in bool osgDB::writeObjectFile(const osg::Object & object, const std::string & filename, const osgDB::Options * options) function, expected prototype:\nbool osgDB::writeObjectFile(const osg::Object & object, const std::string & filename, const osgDB::Options * options)\nClass arguments details:\narg 1 ID = 50169651\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
	}

	const osg::Object* object_ptr=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,1));
	if( !object_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg object in osgDB::writeObjectFile function");
	}
	const osg::Object & object=*object_ptr;
	std::string filename(lua_tostring(L,2),lua_objlen(L,2));
	const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3));

	bool lret = osgDB::writeObjectFile(object, filename, options);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// bool osgDB::writeObjectFile(const osg::Object & object, const std::string & filename)
static int _bind_writeObjectFile_overload_2(lua_State *L) {
	if (!_lg_typecheck_writeObjectFile_overload_2(L)) {
		luaL_error(L, "luna typecheck failed in bool osgDB::writeObjectFile(const osg::Object & object, const std::string & filename) function, expected prototype:\nbool osgDB::writeObjectFile(const osg::Object & object, const std::string & filename)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
	}

	const osg::Object* object_ptr=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,1));
	if( !object_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg object in osgDB::writeObjectFile function");
	}
	const osg::Object & object=*object_ptr;
	std::string filename(lua_tostring(L,2),lua_objlen(L,2));

	bool lret = osgDB::writeObjectFile(object, filename);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// Overload binder for osgDB::writeObjectFile
static int _bind_writeObjectFile(lua_State *L) {
	if (_lg_typecheck_writeObjectFile_overload_1(L)) return _bind_writeObjectFile_overload_1(L);
	if (_lg_typecheck_writeObjectFile_overload_2(L)) return _bind_writeObjectFile_overload_2(L);

	luaL_error(L, "error in function writeObjectFile, cannot match any of the overloads for function writeObjectFile:\n  writeObjectFile(const osg::Object &, const std::string &, const osgDB::Options *)\n  writeObjectFile(const osg::Object &, const std::string &)\n");
	return 0;
}

// bool osgDB::writeImageFile(const osg::Image & image, const std::string & filename, const osgDB::Options * options)
static int _bind_writeImageFile_overload_1(lua_State *L) {
	if (!_lg_typecheck_writeImageFile_overload_1(L)) {
		luaL_error(L, "luna typecheck failed in bool osgDB::writeImageFile(const osg::Image & image, const std::string & filename, const osgDB::Options * options) function, expected prototype:\nbool osgDB::writeImageFile(const osg::Image & image, const std::string & filename, const osgDB::Options * options)\nClass arguments details:\narg 1 ID = 50169651\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
	}

	const osg::Image* image_ptr=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,1));
	if( !image_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg image in osgDB::writeImageFile function");
	}
	const osg::Image & image=*image_ptr;
	std::string filename(lua_tostring(L,2),lua_objlen(L,2));
	const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3));

	bool lret = osgDB::writeImageFile(image, filename, options);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// bool osgDB::writeImageFile(const osg::Image & image, const std::string & filename)
static int _bind_writeImageFile_overload_2(lua_State *L) {
	if (!_lg_typecheck_writeImageFile_overload_2(L)) {
		luaL_error(L, "luna typecheck failed in bool osgDB::writeImageFile(const osg::Image & image, const std::string & filename) function, expected prototype:\nbool osgDB::writeImageFile(const osg::Image & image, const std::string & filename)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
	}

	const osg::Image* image_ptr=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,1));
	if( !image_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg image in osgDB::writeImageFile function");
	}
	const osg::Image & image=*image_ptr;
	std::string filename(lua_tostring(L,2),lua_objlen(L,2));

	bool lret = osgDB::writeImageFile(image, filename);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// Overload binder for osgDB::writeImageFile
static int _bind_writeImageFile(lua_State *L) {
	if (_lg_typecheck_writeImageFile_overload_1(L)) return _bind_writeImageFile_overload_1(L);
	if (_lg_typecheck_writeImageFile_overload_2(L)) return _bind_writeImageFile_overload_2(L);

	luaL_error(L, "error in function writeImageFile, cannot match any of the overloads for function writeImageFile:\n  writeImageFile(const osg::Image &, const std::string &, const osgDB::Options *)\n  writeImageFile(const osg::Image &, const std::string &)\n");
	return 0;
}

// bool osgDB::writeHeightFieldFile(const osg::HeightField & hf, const std::string & filename, const osgDB::Options * options)
static int _bind_writeHeightFieldFile_overload_1(lua_State *L) {
	if (!_lg_typecheck_writeHeightFieldFile_overload_1(L)) {
		luaL_error(L, "luna typecheck failed in bool osgDB::writeHeightFieldFile(const osg::HeightField & hf, const std::string & filename, const osgDB::Options * options) function, expected prototype:\nbool osgDB::writeHeightFieldFile(const osg::HeightField & hf, const std::string & filename, const osgDB::Options * options)\nClass arguments details:\narg 1 ID = 50169651\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
	}

	const osg::HeightField* hf_ptr=(Luna< osg::Referenced >::checkSubType< osg::HeightField >(L,1));
	if( !hf_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg hf in osgDB::writeHeightFieldFile function");
	}
	const osg::HeightField & hf=*hf_ptr;
	std::string filename(lua_tostring(L,2),lua_objlen(L,2));
	const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3));

	bool lret = osgDB::writeHeightFieldFile(hf, filename, options);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// bool osgDB::writeHeightFieldFile(const osg::HeightField & hf, const std::string & filename)
static int _bind_writeHeightFieldFile_overload_2(lua_State *L) {
	if (!_lg_typecheck_writeHeightFieldFile_overload_2(L)) {
		luaL_error(L, "luna typecheck failed in bool osgDB::writeHeightFieldFile(const osg::HeightField & hf, const std::string & filename) function, expected prototype:\nbool osgDB::writeHeightFieldFile(const osg::HeightField & hf, const std::string & filename)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
	}

	const osg::HeightField* hf_ptr=(Luna< osg::Referenced >::checkSubType< osg::HeightField >(L,1));
	if( !hf_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg hf in osgDB::writeHeightFieldFile function");
	}
	const osg::HeightField & hf=*hf_ptr;
	std::string filename(lua_tostring(L,2),lua_objlen(L,2));

	bool lret = osgDB::writeHeightFieldFile(hf, filename);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// Overload binder for osgDB::writeHeightFieldFile
static int _bind_writeHeightFieldFile(lua_State *L) {
	if (_lg_typecheck_writeHeightFieldFile_overload_1(L)) return _bind_writeHeightFieldFile_overload_1(L);
	if (_lg_typecheck_writeHeightFieldFile_overload_2(L)) return _bind_writeHeightFieldFile_overload_2(L);

	luaL_error(L, "error in function writeHeightFieldFile, cannot match any of the overloads for function writeHeightFieldFile:\n  writeHeightFieldFile(const osg::HeightField &, const std::string &, const osgDB::Options *)\n  writeHeightFieldFile(const osg::HeightField &, const std::string &)\n");
	return 0;
}

// bool osgDB::writeNodeFile(const osg::Node & node, const std::string & filename, const osgDB::Options * options)
static int _bind_writeNodeFile_overload_1(lua_State *L) {
	if (!_lg_typecheck_writeNodeFile_overload_1(L)) {
		luaL_error(L, "luna typecheck failed in bool osgDB::writeNodeFile(const osg::Node & node, const std::string & filename, const osgDB::Options * options) function, expected prototype:\nbool osgDB::writeNodeFile(const osg::Node & node, const std::string & filename, const osgDB::Options * options)\nClass arguments details:\narg 1 ID = 50169651\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
	}

	const osg::Node* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,1));
	if( !node_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg node in osgDB::writeNodeFile function");
	}
	const osg::Node & node=*node_ptr;
	std::string filename(lua_tostring(L,2),lua_objlen(L,2));
	const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3));

	bool lret = osgDB::writeNodeFile(node, filename, options);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// bool osgDB::writeNodeFile(const osg::Node & node, const std::string & filename)
static int _bind_writeNodeFile_overload_2(lua_State *L) {
	if (!_lg_typecheck_writeNodeFile_overload_2(L)) {
		luaL_error(L, "luna typecheck failed in bool osgDB::writeNodeFile(const osg::Node & node, const std::string & filename) function, expected prototype:\nbool osgDB::writeNodeFile(const osg::Node & node, const std::string & filename)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
	}

	const osg::Node* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,1));
	if( !node_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg node in osgDB::writeNodeFile function");
	}
	const osg::Node & node=*node_ptr;
	std::string filename(lua_tostring(L,2),lua_objlen(L,2));

	bool lret = osgDB::writeNodeFile(node, filename);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// Overload binder for osgDB::writeNodeFile
static int _bind_writeNodeFile(lua_State *L) {
	if (_lg_typecheck_writeNodeFile_overload_1(L)) return _bind_writeNodeFile_overload_1(L);
	if (_lg_typecheck_writeNodeFile_overload_2(L)) return _bind_writeNodeFile_overload_2(L);

	luaL_error(L, "error in function writeNodeFile, cannot match any of the overloads for function writeNodeFile:\n  writeNodeFile(const osg::Node &, const std::string &, const osgDB::Options *)\n  writeNodeFile(const osg::Node &, const std::string &)\n");
	return 0;
}

// bool osgDB::writeShaderFile(const osg::Shader & shader, const std::string & filename, const osgDB::Options * options)
static int _bind_writeShaderFile_overload_1(lua_State *L) {
	if (!_lg_typecheck_writeShaderFile_overload_1(L)) {
		luaL_error(L, "luna typecheck failed in bool osgDB::writeShaderFile(const osg::Shader & shader, const std::string & filename, const osgDB::Options * options) function, expected prototype:\nbool osgDB::writeShaderFile(const osg::Shader & shader, const std::string & filename, const osgDB::Options * options)\nClass arguments details:\narg 1 ID = 50169651\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
	}

	const osg::Shader* shader_ptr=(Luna< osg::Referenced >::checkSubType< osg::Shader >(L,1));
	if( !shader_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg shader in osgDB::writeShaderFile function");
	}
	const osg::Shader & shader=*shader_ptr;
	std::string filename(lua_tostring(L,2),lua_objlen(L,2));
	const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3));

	bool lret = osgDB::writeShaderFile(shader, filename, options);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// bool osgDB::writeShaderFile(const osg::Shader & shader, const std::string & filename)
static int _bind_writeShaderFile_overload_2(lua_State *L) {
	if (!_lg_typecheck_writeShaderFile_overload_2(L)) {
		luaL_error(L, "luna typecheck failed in bool osgDB::writeShaderFile(const osg::Shader & shader, const std::string & filename) function, expected prototype:\nbool osgDB::writeShaderFile(const osg::Shader & shader, const std::string & filename)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
	}

	const osg::Shader* shader_ptr=(Luna< osg::Referenced >::checkSubType< osg::Shader >(L,1));
	if( !shader_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg shader in osgDB::writeShaderFile function");
	}
	const osg::Shader & shader=*shader_ptr;
	std::string filename(lua_tostring(L,2),lua_objlen(L,2));

	bool lret = osgDB::writeShaderFile(shader, filename);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// Overload binder for osgDB::writeShaderFile
static int _bind_writeShaderFile(lua_State *L) {
	if (_lg_typecheck_writeShaderFile_overload_1(L)) return _bind_writeShaderFile_overload_1(L);
	if (_lg_typecheck_writeShaderFile_overload_2(L)) return _bind_writeShaderFile_overload_2(L);

	luaL_error(L, "error in function writeShaderFile, cannot match any of the overloads for function writeShaderFile:\n  writeShaderFile(const osg::Shader &, const std::string &, const osgDB::Options *)\n  writeShaderFile(const osg::Shader &, const std::string &)\n");
	return 0;
}

// osgDB::XmlNode * osgDB::readXmlFile(const std::string & filename, const osgDB::Options * options)
static int _bind_readXmlFile_overload_1(lua_State *L) {
	if (!_lg_typecheck_readXmlFile_overload_1(L)) {
		luaL_error(L, "luna typecheck failed in osgDB::XmlNode * osgDB::readXmlFile(const std::string & filename, const osgDB::Options * options) function, expected prototype:\nosgDB::XmlNode * osgDB::readXmlFile(const std::string & filename, const osgDB::Options * options)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
	}

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));
	const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,2));

	osgDB::XmlNode * lret = osgDB::readXmlFile(filename, options);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osgDB::XmlNode >::push(L,lret,false);

	return 1;
}

// osgDB::XmlNode * osgDB::readXmlFile(const std::string & filename)
static int _bind_readXmlFile_overload_2(lua_State *L) {
	if (!_lg_typecheck_readXmlFile_overload_2(L)) {
		luaL_error(L, "luna typecheck failed in osgDB::XmlNode * osgDB::readXmlFile(const std::string & filename) function, expected prototype:\nosgDB::XmlNode * osgDB::readXmlFile(const std::string & filename)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));

	osgDB::XmlNode * lret = osgDB::readXmlFile(filename);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osgDB::XmlNode >::push(L,lret,false);

	return 1;
}

// Overload binder for osgDB::readXmlFile
static int _bind_readXmlFile(lua_State *L) {
	if (_lg_typecheck_readXmlFile_overload_1(L)) return _bind_readXmlFile_overload_1(L);
	if (_lg_typecheck_readXmlFile_overload_2(L)) return _bind_readXmlFile_overload_2(L);

	luaL_error(L, "error in function readXmlFile, cannot match any of the overloads for function readXmlFile:\n  readXmlFile(const std::string &, const osgDB::Options *)\n  readXmlFile(const std::string &)\n");
	return 0;
}

// osgDB::XmlNode * osgDB::readXmlStream(std::istream & fin)
static int _bind_readXmlStream(lua_State *L) {
	if (!_lg_typecheck_readXmlStream(L)) {
		luaL_error(L, "luna typecheck failed in osgDB::XmlNode * osgDB::readXmlStream(std::istream & fin) function, expected prototype:\nosgDB::XmlNode * osgDB::readXmlStream(std::istream & fin)\nClass arguments details:\narg 1 ID = 77972206\n\n%s",luna_dumpStack(L).c_str());
	}

	std::istream* fin_ptr=(Luna< std::istream >::check(L,1));
	if( !fin_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg fin in osgDB::readXmlStream function");
	}
	std::istream & fin=*fin_ptr;

	osgDB::XmlNode * lret = osgDB::readXmlStream(fin);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osgDB::XmlNode >::push(L,lret,false);

	return 1;
}

// std::string osgDB::trimEnclosingSpaces(const std::string & str)
static int _bind_trimEnclosingSpaces(lua_State *L) {
	if (!_lg_typecheck_trimEnclosingSpaces(L)) {
		luaL_error(L, "luna typecheck failed in std::string osgDB::trimEnclosingSpaces(const std::string & str) function, expected prototype:\nstd::string osgDB::trimEnclosingSpaces(const std::string & str)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	std::string str(lua_tostring(L,1),lua_objlen(L,1));

	std::string lret = osgDB::trimEnclosingSpaces(str);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}


// Function checkers:

// Function binds:

// Function checkers:
inline static bool _lg_typecheck_readFontFile(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<1 || luatop>2 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
	return true;
}

inline static bool _lg_typecheck_readFontStream(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<1 || luatop>2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,77972206) ) return false;
	if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
	return true;
}

inline static bool _lg_typecheck_readRefFontFile(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<1 || luatop>2 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
	return true;
}

inline static bool _lg_typecheck_readRefFontStream(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<1 || luatop>2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,77972206) ) return false;
	if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
	return true;
}

inline static bool _lg_typecheck_findFontFile(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_readFont3DFile(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<1 || luatop>2 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
	return true;
}

inline static bool _lg_typecheck_readFont3DStream(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<1 || luatop>2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,77972206) ) return false;
	if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
	return true;
}

inline static bool _lg_typecheck_readRefFont3DFile(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<1 || luatop>2 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
	return true;
}

inline static bool _lg_typecheck_readRefFont3DStream(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<1 || luatop>2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,77972206) ) return false;
	if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
	return true;
}

inline static bool _lg_typecheck_findFont3DFile(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}


// Function binds:
// osgText::Font * osgText::readFontFile(const std::string & filename, const osgDB::Options * userOptions = 0)
static int _bind_readFontFile(lua_State *L) {
	if (!_lg_typecheck_readFontFile(L)) {
		luaL_error(L, "luna typecheck failed in osgText::Font * osgText::readFontFile(const std::string & filename, const osgDB::Options * userOptions = 0) function, expected prototype:\nosgText::Font * osgText::readFontFile(const std::string & filename, const osgDB::Options * userOptions = 0)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
	}

	int luatop = lua_gettop(L);

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));
	const osgDB::Options* userOptions=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,2)) : (const osgDB::Options*)0;

	osgText::Font * lret = osgText::readFontFile(filename, userOptions);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osgText::Font >::push(L,lret,false);

	return 1;
}

// osgText::Font * osgText::readFontStream(std::istream & stream, const osgDB::Options * userOptions = 0)
static int _bind_readFontStream(lua_State *L) {
	if (!_lg_typecheck_readFontStream(L)) {
		luaL_error(L, "luna typecheck failed in osgText::Font * osgText::readFontStream(std::istream & stream, const osgDB::Options * userOptions = 0) function, expected prototype:\nosgText::Font * osgText::readFontStream(std::istream & stream, const osgDB::Options * userOptions = 0)\nClass arguments details:\narg 1 ID = 77972206\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
	}

	int luatop = lua_gettop(L);

	std::istream* stream_ptr=(Luna< std::istream >::check(L,1));
	if( !stream_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg stream in osgText::readFontStream function");
	}
	std::istream & stream=*stream_ptr;
	const osgDB::Options* userOptions=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,2)) : (const osgDB::Options*)0;

	osgText::Font * lret = osgText::readFontStream(stream, userOptions);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osgText::Font >::push(L,lret,false);

	return 1;
}

// osg::ref_ptr< osgText::Font > osgText::readRefFontFile(const std::string & filename, const osgDB::Options * userOptions = 0)
static int _bind_readRefFontFile(lua_State *L) {
	if (!_lg_typecheck_readRefFontFile(L)) {
		luaL_error(L, "luna typecheck failed in osg::ref_ptr< osgText::Font > osgText::readRefFontFile(const std::string & filename, const osgDB::Options * userOptions = 0) function, expected prototype:\nosg::ref_ptr< osgText::Font > osgText::readRefFontFile(const std::string & filename, const osgDB::Options * userOptions = 0)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
	}

	int luatop = lua_gettop(L);

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));
	const osgDB::Options* userOptions=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,2)) : (const osgDB::Options*)0;

	osg::ref_ptr< osgText::Font > lret = osgText::readRefFontFile(filename, userOptions);
	Luna< osgText::Font >::push(L,lret.get(),false);

	return 1;
}

// osg::ref_ptr< osgText::Font > osgText::readRefFontStream(std::istream & stream, const osgDB::Options * userOptions = 0)
static int _bind_readRefFontStream(lua_State *L) {
	if (!_lg_typecheck_readRefFontStream(L)) {
		luaL_error(L, "luna typecheck failed in osg::ref_ptr< osgText::Font > osgText::readRefFontStream(std::istream & stream, const osgDB::Options * userOptions = 0) function, expected prototype:\nosg::ref_ptr< osgText::Font > osgText::readRefFontStream(std::istream & stream, const osgDB::Options * userOptions = 0)\nClass arguments details:\narg 1 ID = 77972206\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
	}

	int luatop = lua_gettop(L);

	std::istream* stream_ptr=(Luna< std::istream >::check(L,1));
	if( !stream_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg stream in osgText::readRefFontStream function");
	}
	std::istream & stream=*stream_ptr;
	const osgDB::Options* userOptions=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,2)) : (const osgDB::Options*)0;

	osg::ref_ptr< osgText::Font > lret = osgText::readRefFontStream(stream, userOptions);
	Luna< osgText::Font >::push(L,lret.get(),false);

	return 1;
}

// std::string osgText::findFontFile(const std::string & str)
static int _bind_findFontFile(lua_State *L) {
	if (!_lg_typecheck_findFontFile(L)) {
		luaL_error(L, "luna typecheck failed in std::string osgText::findFontFile(const std::string & str) function, expected prototype:\nstd::string osgText::findFontFile(const std::string & str)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	std::string str(lua_tostring(L,1),lua_objlen(L,1));

	std::string lret = osgText::findFontFile(str);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// osgText::Font * osgText::readFont3DFile(const std::string & filename, const osgDB::Options * userOptions = 0)
static int _bind_readFont3DFile(lua_State *L) {
	if (!_lg_typecheck_readFont3DFile(L)) {
		luaL_error(L, "luna typecheck failed in osgText::Font * osgText::readFont3DFile(const std::string & filename, const osgDB::Options * userOptions = 0) function, expected prototype:\nosgText::Font * osgText::readFont3DFile(const std::string & filename, const osgDB::Options * userOptions = 0)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
	}

	int luatop = lua_gettop(L);

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));
	const osgDB::Options* userOptions=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,2)) : (const osgDB::Options*)0;

	osgText::Font * lret = osgText::readFont3DFile(filename, userOptions);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osgText::Font >::push(L,lret,false);

	return 1;
}

// osgText::Font * osgText::readFont3DStream(std::istream & stream, const osgDB::Options * userOptions = 0)
static int _bind_readFont3DStream(lua_State *L) {
	if (!_lg_typecheck_readFont3DStream(L)) {
		luaL_error(L, "luna typecheck failed in osgText::Font * osgText::readFont3DStream(std::istream & stream, const osgDB::Options * userOptions = 0) function, expected prototype:\nosgText::Font * osgText::readFont3DStream(std::istream & stream, const osgDB::Options * userOptions = 0)\nClass arguments details:\narg 1 ID = 77972206\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
	}

	int luatop = lua_gettop(L);

	std::istream* stream_ptr=(Luna< std::istream >::check(L,1));
	if( !stream_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg stream in osgText::readFont3DStream function");
	}
	std::istream & stream=*stream_ptr;
	const osgDB::Options* userOptions=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,2)) : (const osgDB::Options*)0;

	osgText::Font * lret = osgText::readFont3DStream(stream, userOptions);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osgText::Font >::push(L,lret,false);

	return 1;
}

// osg::ref_ptr< osgText::Font > osgText::readRefFont3DFile(const std::string & filename, const osgDB::Options * userOptions = 0)
static int _bind_readRefFont3DFile(lua_State *L) {
	if (!_lg_typecheck_readRefFont3DFile(L)) {
		luaL_error(L, "luna typecheck failed in osg::ref_ptr< osgText::Font > osgText::readRefFont3DFile(const std::string & filename, const osgDB::Options * userOptions = 0) function, expected prototype:\nosg::ref_ptr< osgText::Font > osgText::readRefFont3DFile(const std::string & filename, const osgDB::Options * userOptions = 0)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
	}

	int luatop = lua_gettop(L);

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));
	const osgDB::Options* userOptions=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,2)) : (const osgDB::Options*)0;

	osg::ref_ptr< osgText::Font > lret = osgText::readRefFont3DFile(filename, userOptions);
	Luna< osgText::Font >::push(L,lret.get(),false);

	return 1;
}

// osg::ref_ptr< osgText::Font > osgText::readRefFont3DStream(std::istream & stream, const osgDB::Options * userOptions = 0)
static int _bind_readRefFont3DStream(lua_State *L) {
	if (!_lg_typecheck_readRefFont3DStream(L)) {
		luaL_error(L, "luna typecheck failed in osg::ref_ptr< osgText::Font > osgText::readRefFont3DStream(std::istream & stream, const osgDB::Options * userOptions = 0) function, expected prototype:\nosg::ref_ptr< osgText::Font > osgText::readRefFont3DStream(std::istream & stream, const osgDB::Options * userOptions = 0)\nClass arguments details:\narg 1 ID = 77972206\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
	}

	int luatop = lua_gettop(L);

	std::istream* stream_ptr=(Luna< std::istream >::check(L,1));
	if( !stream_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg stream in osgText::readRefFont3DStream function");
	}
	std::istream & stream=*stream_ptr;
	const osgDB::Options* userOptions=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,2)) : (const osgDB::Options*)0;

	osg::ref_ptr< osgText::Font > lret = osgText::readRefFont3DStream(stream, userOptions);
	Luna< osgText::Font >::push(L,lret.get(),false);

	return 1;
}

// std::string osgText::findFont3DFile(const std::string & str)
static int _bind_findFont3DFile(lua_State *L) {
	if (!_lg_typecheck_findFont3DFile(L)) {
		luaL_error(L, "luna typecheck failed in std::string osgText::findFont3DFile(const std::string & str) function, expected prototype:\nstd::string osgText::findFont3DFile(const std::string & str)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	std::string str(lua_tostring(L,1),lua_objlen(L,1));

	std::string lret = osgText::findFont3DFile(str);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}


// Function checkers:
inline static bool _lg_typecheck_create3DNoiseImage(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_create3DNoiseTexture(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}


// Function binds:
// osg::Image * osgUtil::create3DNoiseImage(int texSize)
static int _bind_create3DNoiseImage(lua_State *L) {
	if (!_lg_typecheck_create3DNoiseImage(L)) {
		luaL_error(L, "luna typecheck failed in osg::Image * osgUtil::create3DNoiseImage(int texSize) function, expected prototype:\nosg::Image * osgUtil::create3DNoiseImage(int texSize)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int texSize=(int)lua_tointeger(L,1);

	osg::Image * lret = osgUtil::create3DNoiseImage(texSize);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::Image >::push(L,lret,false);

	return 1;
}

// osg::Texture3D * osgUtil::create3DNoiseTexture(int texSize)
static int _bind_create3DNoiseTexture(lua_State *L) {
	if (!_lg_typecheck_create3DNoiseTexture(L)) {
		luaL_error(L, "luna typecheck failed in osg::Texture3D * osgUtil::create3DNoiseTexture(int texSize) function, expected prototype:\nosg::Texture3D * osgUtil::create3DNoiseTexture(int texSize)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int texSize=(int)lua_tointeger(L,1);

	osg::Texture3D * lret = osgUtil::create3DNoiseTexture(texSize);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::Texture3D >::push(L,lret,false);

	return 1;
}


#ifdef __cplusplus
extern "C" {
#endif

void register_global_functions(lua_State* L) {
	luna_pushModule(L,"osg");
	lua_pushcfunction(L, _bind_glLoadMatrix); lua_setfield(L,-2,"glLoadMatrix");
	lua_pushcfunction(L, _bind_glMultMatrix); lua_setfield(L,-2,"glMultMatrix");
	lua_pushcfunction(L, _bind_OpenThreadsGetVersion); lua_setfield(L,-2,"OpenThreadsGetVersion");
	lua_pushcfunction(L, _bind_OpenThreadsGetSOVersion); lua_setfield(L,-2,"OpenThreadsGetSOVersion");
	lua_pushcfunction(L, _bind_OpenThreadsGetLibraryName); lua_setfield(L,-2,"OpenThreadsGetLibraryName");
	lua_pushcfunction(L, _bind_osgGetVersion); lua_setfield(L,-2,"osgGetVersion");
	lua_pushcfunction(L, _bind_osgGetSOVersion); lua_setfield(L,-2,"osgGetSOVersion");
	lua_pushcfunction(L, _bind_osgGetLibraryName); lua_setfield(L,-2,"osgGetLibraryName");
	lua_pushcfunction(L, _bind_osgDBGetVersion); lua_setfield(L,-2,"osgDBGetVersion");
	lua_pushcfunction(L, _bind_osgDBGetLibraryName); lua_setfield(L,-2,"osgDBGetLibraryName");
	lua_pushcfunction(L, _bind_osgGAGetVersion); lua_setfield(L,-2,"osgGAGetVersion");
	lua_pushcfunction(L, _bind_osgGAGetLibraryName); lua_setfield(L,-2,"osgGAGetLibraryName");
	lua_pushcfunction(L, _bind_osgParticleGetVersion); lua_setfield(L,-2,"osgParticleGetVersion");
	lua_pushcfunction(L, _bind_osgParticleGetLibraryName); lua_setfield(L,-2,"osgParticleGetLibraryName");
	lua_pushcfunction(L, _bind_osgTextGetVersion); lua_setfield(L,-2,"osgTextGetVersion");
	lua_pushcfunction(L, _bind_osgTextGetLibraryName); lua_setfield(L,-2,"osgTextGetLibraryName");
	lua_pushcfunction(L, _bind_osgUtilGetVersion); lua_setfield(L,-2,"osgUtilGetVersion");
	lua_pushcfunction(L, _bind_osgUtilGetLibraryName); lua_setfield(L,-2,"osgUtilGetLibraryName");
	lua_pushcfunction(L, _bind_osgViewerGetVersion); lua_setfield(L,-2,"osgViewerGetVersion");
	lua_pushcfunction(L, _bind_osgViewerGetLibraryName); lua_setfield(L,-2,"osgViewerGetLibraryName");
	luna_popModule(L);
	luna_pushModule(L,"OpenThreads");
	lua_pushcfunction(L, _bind_GetNumberOfProcessors); lua_setfield(L,-2,"GetNumberOfProcessors");
	lua_pushcfunction(L, _bind_SetProcessorAffinityOfCurrentThread); lua_setfield(L,-2,"SetProcessorAffinityOfCurrentThread");
	luna_popModule(L);
	luna_pushModule(L,"osg");
	lua_pushcfunction(L, _bind_getCpuByteOrder); lua_setfield(L,-2,"getCpuByteOrder");
	lua_pushcfunction(L, _bind_swapBytes); lua_setfield(L,-2,"swapBytes");
	lua_pushcfunction(L, _bind_swapBytes2); lua_setfield(L,-2,"swapBytes2");
	lua_pushcfunction(L, _bind_swapBytes4); lua_setfield(L,-2,"swapBytes4");
	lua_pushcfunction(L, _bind_swapBytes8); lua_setfield(L,-2,"swapBytes8");
	lua_pushcfunction(L, _bind_swapBytes16); lua_setfield(L,-2,"swapBytes16");
	lua_pushcfunction(L, _bind_createTexturedQuadGeometry); lua_setfield(L,-2,"createTexturedQuadGeometry");
	lua_pushcfunction(L, _bind_getGLVersionNumber); lua_setfield(L,-2,"getGLVersionNumber");
	lua_pushcfunction(L, _bind_isExtensionInExtensionString); lua_setfield(L,-2,"isExtensionInExtensionString");
	lua_pushcfunction(L, _bind_isGLExtensionSupported); lua_setfield(L,-2,"isGLExtensionSupported");
	lua_pushcfunction(L, _bind_isGLExtensionOrVersionSupported); lua_setfield(L,-2,"isGLExtensionOrVersionSupported");
	lua_pushcfunction(L, _bind_getGLExtensionFuncPtr); lua_setfield(L,-2,"getGLExtensionFuncPtr");
	lua_pushcfunction(L, _bind_setGLExtensionDisableString); lua_setfield(L,-2,"setGLExtensionDisableString");
	lua_pushcfunction(L, _bind_getGLExtensionDisableString); lua_setfield(L,-2,"getGLExtensionDisableString");
	lua_pushcfunction(L, _bind_flushDeletedGLObjects); lua_setfield(L,-2,"flushDeletedGLObjects");
	lua_pushcfunction(L, _bind_flushAllDeletedGLObjects); lua_setfield(L,-2,"flushAllDeletedGLObjects");
	lua_pushcfunction(L, _bind_deleteAllGLObjects); lua_setfield(L,-2,"deleteAllGLObjects");
	lua_pushcfunction(L, _bind_discardAllGLObjects); lua_setfield(L,-2,"discardAllGLObjects");
	lua_pushcfunction(L, _bind_gluErrorString); lua_setfield(L,-2,"gluErrorString");
	lua_pushcfunction(L, _bind_gluScaleImage); lua_setfield(L,-2,"gluScaleImage");
	lua_pushcfunction(L, _bind_gluBuild1DMipmapLevels); lua_setfield(L,-2,"gluBuild1DMipmapLevels");
	lua_pushcfunction(L, _bind_gluBuild1DMipmaps); lua_setfield(L,-2,"gluBuild1DMipmaps");
	lua_pushcfunction(L, _bind_gluBuild2DMipmapLevels); lua_setfield(L,-2,"gluBuild2DMipmapLevels");
	lua_pushcfunction(L, _bind_gluBuild2DMipmaps); lua_setfield(L,-2,"gluBuild2DMipmaps");
	lua_pushcfunction(L, _bind_gluNewTess); lua_setfield(L,-2,"gluNewTess");
	lua_pushcfunction(L, _bind_gluDeleteTess); lua_setfield(L,-2,"gluDeleteTess");
	lua_pushcfunction(L, _bind_gluTessBeginContour); lua_setfield(L,-2,"gluTessBeginContour");
	lua_pushcfunction(L, _bind_gluTessEndContour); lua_setfield(L,-2,"gluTessEndContour");
	lua_pushcfunction(L, _bind_gluTessNormal); lua_setfield(L,-2,"gluTessNormal");
	lua_pushcfunction(L, _bind_gluTessProperty); lua_setfield(L,-2,"gluTessProperty");
	lua_pushcfunction(L, _bind_gluTessVertex); lua_setfield(L,-2,"gluTessVertex");
	lua_pushcfunction(L, _bind_gluTessBeginPolygon); lua_setfield(L,-2,"gluTessBeginPolygon");
	lua_pushcfunction(L, _bind_gluTessEndPolygon); lua_setfield(L,-2,"gluTessEndPolygon");
	lua_pushcfunction(L, _bind_gluGetTessProperty); lua_setfield(L,-2,"gluGetTessProperty");
	lua_pushcfunction(L, _bind_createGeodeForImage); lua_setfield(L,-2,"createGeodeForImage");
	lua_pushcfunction(L, _bind_computeMinMax); lua_setfield(L,-2,"computeMinMax");
	lua_pushcfunction(L, _bind_offsetAndScaleImage); lua_setfield(L,-2,"offsetAndScaleImage");
	lua_pushcfunction(L, _bind_copyImage); lua_setfield(L,-2,"copyImage");
	lua_pushcfunction(L, _bind_clearImageToColor); lua_setfield(L,-2,"clearImageToColor");
	lua_pushcfunction(L, _bind_maximimNumOfComponents); lua_setfield(L,-2,"maximimNumOfComponents");
	lua_pushcfunction(L, _bind_createImage3D); lua_setfield(L,-2,"createImage3D");
	lua_pushcfunction(L, _bind_createImage3DWithAlpha); lua_setfield(L,-2,"createImage3DWithAlpha");
	lua_pushcfunction(L, _bind_createSpotLightImage); lua_setfield(L,-2,"createSpotLightImage");
	lua_pushcfunction(L, _bind_colorSpaceConversion); lua_setfield(L,-2,"colorSpaceConversion");
	lua_pushcfunction(L, _bind_equivalent); lua_setfield(L,-2,"equivalent");
	lua_pushcfunction(L, _bind_inDegrees); lua_setfield(L,-2,"inDegrees");
	lua_pushcfunction(L, _bind_DegreesToRadians); lua_setfield(L,-2,"DegreesToRadians");
	lua_pushcfunction(L, _bind_RadiansToDegrees); lua_setfield(L,-2,"RadiansToDegrees");
	lua_pushcfunction(L, _bind_round); lua_setfield(L,-2,"round");
	lua_pushcfunction(L, _bind_isNaN); lua_setfield(L,-2,"isNaN");
	lua_pushcfunction(L, _bind_asciiToDouble); lua_setfield(L,-2,"asciiToDouble");
	lua_pushcfunction(L, _bind_asciiToFloat); lua_setfield(L,-2,"asciiToFloat");
	lua_pushcfunction(L, _bind_findAsciiToDouble); lua_setfield(L,-2,"findAsciiToDouble");
	lua_pushcfunction(L, _bind_findAsciiToFloat); lua_setfield(L,-2,"findAsciiToFloat");
	lua_pushcfunction(L, _bind_setNotifyLevel); lua_setfield(L,-2,"setNotifyLevel");
	lua_pushcfunction(L, _bind_getNotifyLevel); lua_setfield(L,-2,"getNotifyLevel");
	lua_pushcfunction(L, _bind_initNotifyLevel); lua_setfield(L,-2,"initNotifyLevel");
	lua_pushcfunction(L, _bind_isNotifyEnabled); lua_setfield(L,-2,"isNotifyEnabled");
	lua_pushcfunction(L, _bind_notify); lua_setfield(L,-2,"notify");
	lua_pushcfunction(L, _bind_setNotifyHandler); lua_setfield(L,-2,"setNotifyHandler");
	lua_pushcfunction(L, _bind_getNotifyHandler); lua_setfield(L,-2,"getNotifyHandler");
	lua_pushcfunction(L, _bind_isTextureMode); lua_setfield(L,-2,"isTextureMode");
	lua_pushcfunction(L, _bind_computeLocalToWorld); lua_setfield(L,-2,"computeLocalToWorld");
	lua_pushcfunction(L, _bind_computeWorldToLocal); lua_setfield(L,-2,"computeWorldToLocal");
	lua_pushcfunction(L, _bind_computeLocalToEye); lua_setfield(L,-2,"computeLocalToEye");
	lua_pushcfunction(L, _bind_computeEyeToLocal); lua_setfield(L,-2,"computeEyeToLocal");
	lua_pushcfunction(L, _bind_componentMultiply); lua_setfield(L,-2,"componentMultiply");
	lua_pushcfunction(L, _bind_componentDivide); lua_setfield(L,-2,"componentDivide");
	luna_popModule(L);
	luna_pushModule(L,"osgDB");
	lua_pushcfunction(L, _bind_openArchive); lua_setfield(L,-2,"openArchive");
	lua_pushcfunction(L, _bind_convertStringFromCurrentCodePageToUTF8); lua_setfield(L,-2,"convertStringFromCurrentCodePageToUTF8");
	lua_pushcfunction(L, _bind_convertStringFromUTF8toCurrentCodePage); lua_setfield(L,-2,"convertStringFromUTF8toCurrentCodePage");
	lua_pushcfunction(L, _bind_getFilePath); lua_setfield(L,-2,"getFilePath");
	lua_pushcfunction(L, _bind_getFileExtension); lua_setfield(L,-2,"getFileExtension");
	lua_pushcfunction(L, _bind_getFileExtensionIncludingDot); lua_setfield(L,-2,"getFileExtensionIncludingDot");
	lua_pushcfunction(L, _bind_getLowerCaseFileExtension); lua_setfield(L,-2,"getLowerCaseFileExtension");
	lua_pushcfunction(L, _bind_getSimpleFileName); lua_setfield(L,-2,"getSimpleFileName");
	lua_pushcfunction(L, _bind_getNameLessExtension); lua_setfield(L,-2,"getNameLessExtension");
	lua_pushcfunction(L, _bind_getStrippedName); lua_setfield(L,-2,"getStrippedName");
	lua_pushcfunction(L, _bind_getPathRelative); lua_setfield(L,-2,"getPathRelative");
	lua_pushcfunction(L, _bind_getPathRoot); lua_setfield(L,-2,"getPathRoot");
	lua_pushcfunction(L, _bind_isAbsolutePath); lua_setfield(L,-2,"isAbsolutePath");
	lua_pushcfunction(L, _bind_convertFileNameToWindowsStyle); lua_setfield(L,-2,"convertFileNameToWindowsStyle");
	lua_pushcfunction(L, _bind_convertFileNameToUnixStyle); lua_setfield(L,-2,"convertFileNameToUnixStyle");
	lua_pushcfunction(L, _bind_convertToLowerCase); lua_setfield(L,-2,"convertToLowerCase");
	lua_pushcfunction(L, _bind_getNativePathSeparator); lua_setfield(L,-2,"getNativePathSeparator");
	lua_pushcfunction(L, _bind_isFileNameNativeStyle); lua_setfield(L,-2,"isFileNameNativeStyle");
	lua_pushcfunction(L, _bind_convertFileNameToNativeStyle); lua_setfield(L,-2,"convertFileNameToNativeStyle");
	lua_pushcfunction(L, _bind_equalCaseInsensitive); lua_setfield(L,-2,"equalCaseInsensitive");
	lua_pushcfunction(L, _bind_containsServerAddress); lua_setfield(L,-2,"containsServerAddress");
	lua_pushcfunction(L, _bind_getServerProtocol); lua_setfield(L,-2,"getServerProtocol");
	lua_pushcfunction(L, _bind_getServerAddress); lua_setfield(L,-2,"getServerAddress");
	lua_pushcfunction(L, _bind_getServerFileName); lua_setfield(L,-2,"getServerFileName");
	lua_pushcfunction(L, _bind_concatPaths); lua_setfield(L,-2,"concatPaths");
	lua_pushcfunction(L, _bind_getRealPath); lua_setfield(L,-2,"getRealPath");
	lua_pushcfunction(L, _bind_makeDirectory); lua_setfield(L,-2,"makeDirectory");
	lua_pushcfunction(L, _bind_makeDirectoryForFile); lua_setfield(L,-2,"makeDirectoryForFile");
	lua_pushcfunction(L, _bind_getCurrentWorkingDirectory); lua_setfield(L,-2,"getCurrentWorkingDirectory");
	lua_pushcfunction(L, _bind_setCurrentWorkingDirectory); lua_setfield(L,-2,"setCurrentWorkingDirectory");
	lua_pushcfunction(L, _bind_fileExists); lua_setfield(L,-2,"fileExists");
	lua_pushcfunction(L, _bind_fileType); lua_setfield(L,-2,"fileType");
	lua_pushcfunction(L, _bind_findFileInPath); lua_setfield(L,-2,"findFileInPath");
	lua_pushcfunction(L, _bind_findFileInDirectory); lua_setfield(L,-2,"findFileInDirectory");
	lua_pushcfunction(L, _bind_getDirectoryContents); lua_setfield(L,-2,"getDirectoryContents");
	lua_pushcfunction(L, _bind_getSortedDirectoryContents); lua_setfield(L,-2,"getSortedDirectoryContents");
	lua_pushcfunction(L, _bind_expandWildcardsInFilename); lua_setfield(L,-2,"expandWildcardsInFilename");
	lua_pushcfunction(L, _bind_copyFile); lua_setfield(L,-2,"copyFile");
	lua_pushcfunction(L, _bind_setDataFilePathList); lua_setfield(L,-2,"setDataFilePathList");
	lua_pushcfunction(L, _bind_getDataFilePathList); lua_setfield(L,-2,"getDataFilePathList");
	lua_pushcfunction(L, _bind_findDataFile); lua_setfield(L,-2,"findDataFile");
	lua_pushcfunction(L, _bind_setLibraryFilePathList); lua_setfield(L,-2,"setLibraryFilePathList");
	lua_pushcfunction(L, _bind_getLibraryFilePathList); lua_setfield(L,-2,"getLibraryFilePathList");
	lua_pushcfunction(L, _bind_findLibraryFile); lua_setfield(L,-2,"findLibraryFile");
	lua_pushcfunction(L, _bind_convertStringPathIntoFilePathList); lua_setfield(L,-2,"convertStringPathIntoFilePathList");
	lua_pushcfunction(L, _bind_containsCurrentWorkingDirectoryReference); lua_setfield(L,-2,"containsCurrentWorkingDirectoryReference");
	lua_pushcfunction(L, _bind_appendPlatformSpecificLibraryFilePaths); lua_setfield(L,-2,"appendPlatformSpecificLibraryFilePaths");
	lua_pushcfunction(L, _bind_appendPlatformSpecificResourceFilePaths); lua_setfield(L,-2,"appendPlatformSpecificResourceFilePaths");
	lua_pushcfunction(L, _bind_split); lua_setfield(L,-2,"split");
	lua_pushcfunction(L, _bind_listAllAvailablePlugins); lua_setfield(L,-2,"listAllAvailablePlugins");
	lua_pushcfunction(L, _bind_queryPlugin); lua_setfield(L,-2,"queryPlugin");
	lua_pushcfunction(L, _bind_outputPluginDetails); lua_setfield(L,-2,"outputPluginDetails");
	lua_pushcfunction(L, _bind_readObjectFile); lua_setfield(L,-2,"readObjectFile");
	lua_pushcfunction(L, _bind_readImageFile); lua_setfield(L,-2,"readImageFile");
	lua_pushcfunction(L, _bind_readHeightFieldFile); lua_setfield(L,-2,"readHeightFieldFile");
	lua_pushcfunction(L, _bind_readNodeFile); lua_setfield(L,-2,"readNodeFile");
	lua_pushcfunction(L, _bind_readShaderFile); lua_setfield(L,-2,"readShaderFile");
	lua_pushcfunction(L, _bind_readRefObjectFile); lua_setfield(L,-2,"readRefObjectFile");
	lua_pushcfunction(L, _bind_readRefImageFile); lua_setfield(L,-2,"readRefImageFile");
	lua_pushcfunction(L, _bind_readRefHeightFieldFile); lua_setfield(L,-2,"readRefHeightFieldFile");
	lua_pushcfunction(L, _bind_readRefNodeFile); lua_setfield(L,-2,"readRefNodeFile");
	lua_pushcfunction(L, _bind_readRefShaderFile); lua_setfield(L,-2,"readRefShaderFile");
	lua_pushcfunction(L, _bind_readCommandLine); lua_setfield(L,-2,"readCommandLine");
	lua_pushcfunction(L, _bind_writeObjectFile); lua_setfield(L,-2,"writeObjectFile");
	lua_pushcfunction(L, _bind_writeImageFile); lua_setfield(L,-2,"writeImageFile");
	lua_pushcfunction(L, _bind_writeHeightFieldFile); lua_setfield(L,-2,"writeHeightFieldFile");
	lua_pushcfunction(L, _bind_writeNodeFile); lua_setfield(L,-2,"writeNodeFile");
	lua_pushcfunction(L, _bind_writeShaderFile); lua_setfield(L,-2,"writeShaderFile");
	lua_pushcfunction(L, _bind_readXmlFile); lua_setfield(L,-2,"readXmlFile");
	lua_pushcfunction(L, _bind_readXmlStream); lua_setfield(L,-2,"readXmlStream");
	lua_pushcfunction(L, _bind_trimEnclosingSpaces); lua_setfield(L,-2,"trimEnclosingSpaces");
	luna_popModule(L);
	luna_pushModule(L,"osgText");
	lua_pushcfunction(L, _bind_readFontFile); lua_setfield(L,-2,"readFontFile");
	lua_pushcfunction(L, _bind_readFontStream); lua_setfield(L,-2,"readFontStream");
	lua_pushcfunction(L, _bind_readRefFontFile); lua_setfield(L,-2,"readRefFontFile");
	lua_pushcfunction(L, _bind_readRefFontStream); lua_setfield(L,-2,"readRefFontStream");
	lua_pushcfunction(L, _bind_findFontFile); lua_setfield(L,-2,"findFontFile");
	lua_pushcfunction(L, _bind_readFont3DFile); lua_setfield(L,-2,"readFont3DFile");
	lua_pushcfunction(L, _bind_readFont3DStream); lua_setfield(L,-2,"readFont3DStream");
	lua_pushcfunction(L, _bind_readRefFont3DFile); lua_setfield(L,-2,"readRefFont3DFile");
	lua_pushcfunction(L, _bind_readRefFont3DStream); lua_setfield(L,-2,"readRefFont3DStream");
	lua_pushcfunction(L, _bind_findFont3DFile); lua_setfield(L,-2,"findFont3DFile");
	luna_popModule(L);
	luna_pushModule(L,"osgUtil");
	lua_pushcfunction(L, _bind_create3DNoiseImage); lua_setfield(L,-2,"create3DNoiseImage");
	lua_pushcfunction(L, _bind_create3DNoiseTexture); lua_setfield(L,-2,"create3DNoiseTexture");
	luna_popModule(L);
}

#ifdef __cplusplus
}
#endif

