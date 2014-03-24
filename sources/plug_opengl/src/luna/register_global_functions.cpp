#include <plug_common.h>

#include <glcorearb_4.3.h>

// Function checkers:
inline static bool _lg_typecheck_glCullFace(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glFrontFace(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glHint(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glLineWidth(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_glPointSize(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_glPolygonMode(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glScissor(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glTexParameterf(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( lua_type(L,3)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_glTexParameterfv(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glTexParameteri(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glTexParameteriv(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glTexImage1D(lua_State *L) {
	if( lua_gettop(L)!=8 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
	if( (lua_isnil(L,8)==0 && !Luna<void>::has_uniqueid(L,8,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glTexImage2D(lua_State *L) {
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

inline static bool _lg_typecheck_glDrawBuffer(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glClear(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glClearColor(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( lua_type(L,1)!=LUA_TNUMBER ) return false;
	if( lua_type(L,2)!=LUA_TNUMBER ) return false;
	if( lua_type(L,3)!=LUA_TNUMBER ) return false;
	if( lua_type(L,4)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_glClearStencil(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glClearDepth(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_glStencilMask(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glColorMask(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glDepthMask(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glDisable(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glEnable(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glFinish(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_glFlush(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_glBlendFunc(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glLogicOp(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glStencilFunc(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glStencilOp(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glDepthFunc(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glPixelStoref(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( lua_type(L,2)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_glPixelStorei(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glReadBuffer(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glReadPixels(lua_State *L) {
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

inline static bool _lg_typecheck_glGetBooleanv(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetDoublev(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetError(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_glGetFloatv(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetIntegerv(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetString(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetTexImage(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetTexParameterfv(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetTexParameteriv(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetTexLevelParameterfv(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetTexLevelParameteriv(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glIsEnabled(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glDepthRange(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_type(L,1)!=LUA_TNUMBER ) return false;
	if( lua_type(L,2)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_glViewport(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glDrawArrays(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glDrawElements(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glPolygonOffset(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_type(L,1)!=LUA_TNUMBER ) return false;
	if( lua_type(L,2)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_glCopyTexImage1D(lua_State *L) {
	if( lua_gettop(L)!=7 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glCopyTexImage2D(lua_State *L) {
	if( lua_gettop(L)!=8 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
	if( (lua_type(L,8)!=LUA_TNUMBER || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glCopyTexSubImage1D(lua_State *L) {
	if( lua_gettop(L)!=6 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glCopyTexSubImage2D(lua_State *L) {
	if( lua_gettop(L)!=8 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
	if( (lua_type(L,8)!=LUA_TNUMBER || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glTexSubImage1D(lua_State *L) {
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

inline static bool _lg_typecheck_glTexSubImage2D(lua_State *L) {
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

inline static bool _lg_typecheck_glBindTexture(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glDeleteTextures(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glGenTextures(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glIsTexture(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glBlendColor(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( lua_type(L,1)!=LUA_TNUMBER ) return false;
	if( lua_type(L,2)!=LUA_TNUMBER ) return false;
	if( lua_type(L,3)!=LUA_TNUMBER ) return false;
	if( lua_type(L,4)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_glBlendEquation(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glDrawRangeElements(lua_State *L) {
	if( lua_gettop(L)!=6 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glTexImage3D(lua_State *L) {
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

inline static bool _lg_typecheck_glTexSubImage3D(lua_State *L) {
	if( lua_gettop(L)!=11 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
	if( (lua_type(L,8)!=LUA_TNUMBER || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
	if( (lua_type(L,9)!=LUA_TNUMBER || lua_tointeger(L,9) != lua_tonumber(L,9)) ) return false;
	if( (lua_type(L,10)!=LUA_TNUMBER || lua_tointeger(L,10) != lua_tonumber(L,10)) ) return false;
	if( (lua_isnil(L,11)==0 && !Luna<void>::has_uniqueid(L,11,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glCopyTexSubImage3D(lua_State *L) {
	if( lua_gettop(L)!=9 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
	if( (lua_type(L,8)!=LUA_TNUMBER || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
	if( (lua_type(L,9)!=LUA_TNUMBER || lua_tointeger(L,9) != lua_tonumber(L,9)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glActiveTexture(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glSampleCoverage(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_type(L,1)!=LUA_TNUMBER ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glCompressedTexImage3D(lua_State *L) {
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

inline static bool _lg_typecheck_glCompressedTexImage2D(lua_State *L) {
	if( lua_gettop(L)!=8 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
	if( (lua_isnil(L,8)==0 && !Luna<void>::has_uniqueid(L,8,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glCompressedTexImage1D(lua_State *L) {
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

inline static bool _lg_typecheck_glCompressedTexSubImage3D(lua_State *L) {
	if( lua_gettop(L)!=11 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
	if( (lua_type(L,8)!=LUA_TNUMBER || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
	if( (lua_type(L,9)!=LUA_TNUMBER || lua_tointeger(L,9) != lua_tonumber(L,9)) ) return false;
	if( (lua_type(L,10)!=LUA_TNUMBER || lua_tointeger(L,10) != lua_tonumber(L,10)) ) return false;
	if( (lua_isnil(L,11)==0 && !Luna<void>::has_uniqueid(L,11,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glCompressedTexSubImage2D(lua_State *L) {
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

inline static bool _lg_typecheck_glCompressedTexSubImage1D(lua_State *L) {
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

inline static bool _lg_typecheck_glGetCompressedTexImage(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glBlendFuncSeparate(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glMultiDrawArrays(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glPointParameterf(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( lua_type(L,2)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_glPointParameterfv(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glPointParameteri(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glPointParameteriv(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glGenQueries(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glDeleteQueries(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glIsQuery(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glBeginQuery(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glEndQuery(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetQueryiv(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetQueryObjectiv(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetQueryObjectuiv(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glBindBuffer(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glDeleteBuffers(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glGenBuffers(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glIsBuffer(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glBufferData(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,32973728) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glBufferSubData(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,32973728) ) return false;
	if( !Luna<void>::has_uniqueid(L,3,32973728) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetBufferSubData(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,32973728) ) return false;
	if( !Luna<void>::has_uniqueid(L,3,32973728) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glMapBuffer(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glUnmapBuffer(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetBufferParameteriv(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glBlendEquationSeparate(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glDrawBuffers(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glStencilOpSeparate(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glStencilFuncSeparate(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glStencilMaskSeparate(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glAttachShader(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glBindAttribLocation(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( lua_type(L,3)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_glCompileShader(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glCreateProgram(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_glCreateShader(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glDeleteProgram(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glDeleteShader(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glDetachShader(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glDisableVertexAttribArray(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glEnableVertexAttribArray(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetActiveAttrib(lua_State *L) {
	if( lua_gettop(L)!=7 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,3625364)) ) return false;
	if( (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,3625364)) ) return false;
	if( lua_type(L,7)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetActiveUniform(lua_State *L) {
	if( lua_gettop(L)!=7 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,3625364)) ) return false;
	if( (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,3625364)) ) return false;
	if( lua_type(L,7)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetAttachedShaders(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetAttribLocation(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( lua_type(L,2)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetProgramiv(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetProgramInfoLog(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	if( lua_type(L,4)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetShaderiv(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetShaderInfoLog(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	if( lua_type(L,4)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetShaderSource(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	if( lua_type(L,4)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetUniformLocation(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( lua_type(L,2)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetUniformfv(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetUniformiv(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetVertexAttribdv(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetVertexAttribfv(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetVertexAttribiv(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glIsProgram(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glIsShader(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glLinkProgram(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glUseProgram(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glUniform1f(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( lua_type(L,2)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_glUniform2f(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( lua_type(L,2)!=LUA_TNUMBER ) return false;
	if( lua_type(L,3)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_glUniform3f(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( lua_type(L,2)!=LUA_TNUMBER ) return false;
	if( lua_type(L,3)!=LUA_TNUMBER ) return false;
	if( lua_type(L,4)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_glUniform4f(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( lua_type(L,2)!=LUA_TNUMBER ) return false;
	if( lua_type(L,3)!=LUA_TNUMBER ) return false;
	if( lua_type(L,4)!=LUA_TNUMBER ) return false;
	if( lua_type(L,5)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_glUniform1i(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glUniform2i(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glUniform3i(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glUniform4i(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glUniform1fv(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glUniform2fv(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glUniform3fv(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glUniform4fv(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glUniform1iv(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glUniform2iv(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glUniform3iv(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glUniform4iv(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glUniformMatrix2fv(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glUniformMatrix3fv(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glUniformMatrix4fv(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glValidateProgram(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexAttrib1d(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( lua_type(L,2)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexAttrib1dv(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexAttrib1f(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( lua_type(L,2)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexAttrib1fv(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexAttrib1s(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexAttrib1sv(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexAttrib2d(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( lua_type(L,2)!=LUA_TNUMBER ) return false;
	if( lua_type(L,3)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexAttrib2dv(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexAttrib2f(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( lua_type(L,2)!=LUA_TNUMBER ) return false;
	if( lua_type(L,3)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexAttrib2fv(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexAttrib2s(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexAttrib2sv(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexAttrib3d(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( lua_type(L,2)!=LUA_TNUMBER ) return false;
	if( lua_type(L,3)!=LUA_TNUMBER ) return false;
	if( lua_type(L,4)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexAttrib3dv(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexAttrib3f(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( lua_type(L,2)!=LUA_TNUMBER ) return false;
	if( lua_type(L,3)!=LUA_TNUMBER ) return false;
	if( lua_type(L,4)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexAttrib3fv(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexAttrib3s(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexAttrib3sv(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexAttrib4Nbv(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexAttrib4Niv(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexAttrib4Nsv(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexAttrib4Nub(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexAttrib4Nubv(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexAttrib4Nuiv(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexAttrib4Nusv(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexAttrib4bv(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexAttrib4d(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( lua_type(L,2)!=LUA_TNUMBER ) return false;
	if( lua_type(L,3)!=LUA_TNUMBER ) return false;
	if( lua_type(L,4)!=LUA_TNUMBER ) return false;
	if( lua_type(L,5)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexAttrib4dv(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexAttrib4f(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( lua_type(L,2)!=LUA_TNUMBER ) return false;
	if( lua_type(L,3)!=LUA_TNUMBER ) return false;
	if( lua_type(L,4)!=LUA_TNUMBER ) return false;
	if( lua_type(L,5)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexAttrib4fv(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexAttrib4iv(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexAttrib4s(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexAttrib4sv(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexAttrib4ubv(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexAttrib4uiv(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexAttrib4usv(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexAttribPointer(lua_State *L) {
	if( lua_gettop(L)!=6 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glUniformMatrix2x3fv(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glUniformMatrix3x2fv(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glUniformMatrix2x4fv(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glUniformMatrix4x2fv(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glUniformMatrix3x4fv(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glUniformMatrix4x3fv(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glColorMaski(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetBooleani_v(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetIntegeri_v(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glEnablei(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glDisablei(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glIsEnabledi(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glBeginTransformFeedback(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glEndTransformFeedback(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_glBindBufferRange(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( !Luna<void>::has_uniqueid(L,4,32973728) ) return false;
	if( !Luna<void>::has_uniqueid(L,5,32973728) ) return false;
	return true;
}

inline static bool _lg_typecheck_glBindBufferBase(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetTransformFeedbackVarying(lua_State *L) {
	if( lua_gettop(L)!=7 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,3625364)) ) return false;
	if( (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,3625364)) ) return false;
	if( lua_type(L,7)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_glClampColor(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glBeginConditionalRender(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glEndConditionalRender(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_glVertexAttribIPointer(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetVertexAttribIiv(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetVertexAttribIuiv(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexAttribI1i(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexAttribI2i(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexAttribI3i(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexAttribI4i(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexAttribI1ui(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexAttribI2ui(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexAttribI3ui(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexAttribI4ui(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexAttribI1iv(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexAttribI2iv(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexAttribI3iv(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexAttribI4iv(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexAttribI1uiv(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexAttribI2uiv(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexAttribI3uiv(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexAttribI4uiv(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexAttribI4bv(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexAttribI4sv(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexAttribI4ubv(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexAttribI4usv(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetUniformuiv(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glBindFragDataLocation(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( lua_type(L,3)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetFragDataLocation(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( lua_type(L,2)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_glUniform1ui(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glUniform2ui(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glUniform3ui(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glUniform4ui(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glUniform1uiv(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glUniform2uiv(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glUniform3uiv(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glUniform4uiv(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glTexParameterIiv(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glTexParameterIuiv(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetTexParameterIiv(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetTexParameterIuiv(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glClearBufferiv(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glClearBufferuiv(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glClearBufferfv(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glClearBufferfi(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( lua_type(L,3)!=LUA_TNUMBER ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetStringi(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glDrawArraysInstanced(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glDrawElementsInstanced(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glTexBuffer(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glPrimitiveRestartIndex(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetInteger64i_v(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,32973728)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetBufferParameteri64v(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,32973728)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glFramebufferTexture(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexAttribDivisor(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glMinSampleShading(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_glBlendEquationi(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glBlendEquationSeparatei(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glBlendFunci(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glBlendFuncSeparatei(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glIsRenderbuffer(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glBindRenderbuffer(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glDeleteRenderbuffers(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glGenRenderbuffers(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glRenderbufferStorage(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetRenderbufferParameteriv(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glIsFramebuffer(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glBindFramebuffer(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glDeleteFramebuffers(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glGenFramebuffers(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glCheckFramebufferStatus(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glFramebufferTexture1D(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glFramebufferTexture2D(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glFramebufferTexture3D(lua_State *L) {
	if( lua_gettop(L)!=6 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glFramebufferRenderbuffer(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetFramebufferAttachmentParameteriv(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glGenerateMipmap(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glBlitFramebuffer(lua_State *L) {
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
	if( (lua_type(L,10)!=LUA_TNUMBER || lua_tointeger(L,10) != lua_tonumber(L,10)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glRenderbufferStorageMultisample(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glFramebufferTextureLayer(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glMapBufferRange(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,32973728) ) return false;
	if( !Luna<void>::has_uniqueid(L,3,32973728) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glFlushMappedBufferRange(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,32973728) ) return false;
	if( !Luna<void>::has_uniqueid(L,3,32973728) ) return false;
	return true;
}

inline static bool _lg_typecheck_glBindVertexArray(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glDeleteVertexArrays(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glGenVertexArrays(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glIsVertexArray(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetActiveUniformsiv(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetActiveUniformName(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	if( lua_type(L,5)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetUniformBlockIndex(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( lua_type(L,2)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetActiveUniformBlockiv(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetActiveUniformBlockName(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	if( lua_type(L,5)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_glUniformBlockBinding(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glCopyBufferSubData(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( !Luna<void>::has_uniqueid(L,3,32973728) ) return false;
	if( !Luna<void>::has_uniqueid(L,4,32973728) ) return false;
	if( !Luna<void>::has_uniqueid(L,5,32973728) ) return false;
	return true;
}

inline static bool _lg_typecheck_glDrawElementsBaseVertex(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glDrawRangeElementsBaseVertex(lua_State *L) {
	if( lua_gettop(L)!=7 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,3625364)) ) return false;
	if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glDrawElementsInstancedBaseVertex(lua_State *L) {
	if( lua_gettop(L)!=6 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glProvokingVertex(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glTexImage2DMultisample(lua_State *L) {
	if( lua_gettop(L)!=6 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glTexImage3DMultisample(lua_State *L) {
	if( lua_gettop(L)!=7 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetMultisamplefv(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glSampleMaski(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glBlendEquationiARB(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glBlendEquationSeparateiARB(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glBlendFunciARB(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glBlendFuncSeparateiARB(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glMinSampleShadingARB(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_glNamedStringARB(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( lua_type(L,3)!=LUA_TSTRING ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( lua_type(L,5)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_glDeleteNamedStringARB(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( lua_type(L,2)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_glIsNamedStringARB(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( lua_type(L,2)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetNamedStringARB(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( lua_type(L,2)!=LUA_TSTRING ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	if( lua_type(L,5)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetNamedStringivARB(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( lua_type(L,2)!=LUA_TSTRING ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glBindFragDataLocationIndexed(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( lua_type(L,4)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetFragDataIndex(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( lua_type(L,2)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_glGenSamplers(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glDeleteSamplers(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glIsSampler(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glBindSampler(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glSamplerParameteri(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glSamplerParameteriv(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glSamplerParameterf(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( lua_type(L,3)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_glSamplerParameterfv(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glSamplerParameterIiv(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glSamplerParameterIuiv(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetSamplerParameteriv(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetSamplerParameterIiv(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetSamplerParameterfv(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetSamplerParameterIuiv(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glQueryCounter(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetQueryObjecti64v(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,32973728)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetQueryObjectui64v(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,60998621)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexP2ui(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexP2uiv(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexP3ui(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexP3uiv(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexP4ui(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexP4uiv(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glTexCoordP1ui(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glTexCoordP1uiv(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glTexCoordP2ui(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glTexCoordP2uiv(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glTexCoordP3ui(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glTexCoordP3uiv(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glTexCoordP4ui(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glTexCoordP4uiv(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glMultiTexCoordP1ui(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glMultiTexCoordP1uiv(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glMultiTexCoordP2ui(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glMultiTexCoordP2uiv(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glMultiTexCoordP3ui(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glMultiTexCoordP3uiv(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glMultiTexCoordP4ui(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glMultiTexCoordP4uiv(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glNormalP3ui(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glNormalP3uiv(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glColorP3ui(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glColorP3uiv(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glColorP4ui(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glColorP4uiv(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glSecondaryColorP3ui(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glSecondaryColorP3uiv(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexAttribP1ui(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexAttribP1uiv(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexAttribP2ui(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexAttribP2uiv(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexAttribP3ui(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexAttribP3uiv(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexAttribP4ui(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexAttribP4uiv(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glDrawArraysIndirect(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glDrawElementsIndirect(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glUniform1d(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( lua_type(L,2)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_glUniform2d(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( lua_type(L,2)!=LUA_TNUMBER ) return false;
	if( lua_type(L,3)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_glUniform3d(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( lua_type(L,2)!=LUA_TNUMBER ) return false;
	if( lua_type(L,3)!=LUA_TNUMBER ) return false;
	if( lua_type(L,4)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_glUniform4d(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( lua_type(L,2)!=LUA_TNUMBER ) return false;
	if( lua_type(L,3)!=LUA_TNUMBER ) return false;
	if( lua_type(L,4)!=LUA_TNUMBER ) return false;
	if( lua_type(L,5)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_glUniform1dv(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glUniform2dv(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glUniform3dv(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glUniform4dv(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glUniformMatrix2dv(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glUniformMatrix3dv(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glUniformMatrix4dv(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glUniformMatrix2x3dv(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glUniformMatrix2x4dv(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glUniformMatrix3x2dv(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glUniformMatrix3x4dv(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glUniformMatrix4x2dv(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glUniformMatrix4x3dv(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetUniformdv(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetSubroutineUniformLocation(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( lua_type(L,3)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetSubroutineIndex(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( lua_type(L,3)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetActiveSubroutineUniformiv(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetActiveSubroutineUniformName(lua_State *L) {
	if( lua_gettop(L)!=6 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,3625364)) ) return false;
	if( lua_type(L,6)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetActiveSubroutineName(lua_State *L) {
	if( lua_gettop(L)!=6 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,3625364)) ) return false;
	if( lua_type(L,6)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_glUniformSubroutinesuiv(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetUniformSubroutineuiv(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetProgramStageiv(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glPatchParameteri(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glPatchParameterfv(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glBindTransformFeedback(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glDeleteTransformFeedbacks(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glGenTransformFeedbacks(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glIsTransformFeedback(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glPauseTransformFeedback(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_glResumeTransformFeedback(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_glDrawTransformFeedback(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glDrawTransformFeedbackStream(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glBeginQueryIndexed(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glEndQueryIndexed(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetQueryIndexediv(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glReleaseShaderCompiler(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_glShaderBinary(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetShaderPrecisionFormat(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glDepthRangef(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_type(L,1)!=LUA_TNUMBER ) return false;
	if( lua_type(L,2)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_glClearDepthf(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetProgramBinary(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glProgramBinary(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glProgramParameteri(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glUseProgramStages(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glActiveShaderProgram(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glBindProgramPipeline(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glDeleteProgramPipelines(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glGenProgramPipelines(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glIsProgramPipeline(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetProgramPipelineiv(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glProgramUniform1i(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glProgramUniform1iv(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glProgramUniform1f(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( lua_type(L,3)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_glProgramUniform1fv(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glProgramUniform1d(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( lua_type(L,3)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_glProgramUniform1dv(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glProgramUniform1ui(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glProgramUniform1uiv(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glProgramUniform2i(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glProgramUniform2iv(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glProgramUniform2f(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( lua_type(L,3)!=LUA_TNUMBER ) return false;
	if( lua_type(L,4)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_glProgramUniform2fv(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glProgramUniform2d(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( lua_type(L,3)!=LUA_TNUMBER ) return false;
	if( lua_type(L,4)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_glProgramUniform2dv(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glProgramUniform2ui(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glProgramUniform2uiv(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glProgramUniform3i(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glProgramUniform3iv(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glProgramUniform3f(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( lua_type(L,3)!=LUA_TNUMBER ) return false;
	if( lua_type(L,4)!=LUA_TNUMBER ) return false;
	if( lua_type(L,5)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_glProgramUniform3fv(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glProgramUniform3d(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( lua_type(L,3)!=LUA_TNUMBER ) return false;
	if( lua_type(L,4)!=LUA_TNUMBER ) return false;
	if( lua_type(L,5)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_glProgramUniform3dv(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glProgramUniform3ui(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glProgramUniform3uiv(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glProgramUniform4i(lua_State *L) {
	if( lua_gettop(L)!=6 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glProgramUniform4iv(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glProgramUniform4f(lua_State *L) {
	if( lua_gettop(L)!=6 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( lua_type(L,3)!=LUA_TNUMBER ) return false;
	if( lua_type(L,4)!=LUA_TNUMBER ) return false;
	if( lua_type(L,5)!=LUA_TNUMBER ) return false;
	if( lua_type(L,6)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_glProgramUniform4fv(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glProgramUniform4d(lua_State *L) {
	if( lua_gettop(L)!=6 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( lua_type(L,3)!=LUA_TNUMBER ) return false;
	if( lua_type(L,4)!=LUA_TNUMBER ) return false;
	if( lua_type(L,5)!=LUA_TNUMBER ) return false;
	if( lua_type(L,6)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_glProgramUniform4dv(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glProgramUniform4ui(lua_State *L) {
	if( lua_gettop(L)!=6 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glProgramUniform4uiv(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glProgramUniformMatrix2fv(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glProgramUniformMatrix3fv(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glProgramUniformMatrix4fv(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glProgramUniformMatrix2dv(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glProgramUniformMatrix3dv(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glProgramUniformMatrix4dv(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glProgramUniformMatrix2x3fv(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glProgramUniformMatrix3x2fv(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glProgramUniformMatrix2x4fv(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glProgramUniformMatrix4x2fv(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glProgramUniformMatrix3x4fv(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glProgramUniformMatrix4x3fv(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glProgramUniformMatrix2x3dv(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glProgramUniformMatrix3x2dv(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glProgramUniformMatrix2x4dv(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glProgramUniformMatrix4x2dv(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glProgramUniformMatrix3x4dv(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glProgramUniformMatrix4x3dv(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glValidateProgramPipeline(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetProgramPipelineInfoLog(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	if( lua_type(L,4)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexAttribL1d(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( lua_type(L,2)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexAttribL2d(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( lua_type(L,2)!=LUA_TNUMBER ) return false;
	if( lua_type(L,3)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexAttribL3d(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( lua_type(L,2)!=LUA_TNUMBER ) return false;
	if( lua_type(L,3)!=LUA_TNUMBER ) return false;
	if( lua_type(L,4)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexAttribL4d(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( lua_type(L,2)!=LUA_TNUMBER ) return false;
	if( lua_type(L,3)!=LUA_TNUMBER ) return false;
	if( lua_type(L,4)!=LUA_TNUMBER ) return false;
	if( lua_type(L,5)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexAttribL1dv(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexAttribL2dv(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexAttribL3dv(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexAttribL4dv(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexAttribLPointer(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetVertexAttribLdv(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glViewportArrayv(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glViewportIndexedf(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( lua_type(L,2)!=LUA_TNUMBER ) return false;
	if( lua_type(L,3)!=LUA_TNUMBER ) return false;
	if( lua_type(L,4)!=LUA_TNUMBER ) return false;
	if( lua_type(L,5)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_glViewportIndexedfv(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glScissorArrayv(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glScissorIndexed(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glScissorIndexedv(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glDepthRangeArrayv(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glDepthRangeIndexed(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( lua_type(L,2)!=LUA_TNUMBER ) return false;
	if( lua_type(L,3)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetFloati_v(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetDoublei_v(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glDebugMessageControlARB(lua_State *L) {
	if( lua_gettop(L)!=6 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,3625364)) ) return false;
	if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glDebugMessageInsertARB(lua_State *L) {
	if( lua_gettop(L)!=6 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( lua_type(L,6)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetDebugMessageLogARB(lua_State *L) {
	if( lua_gettop(L)!=8 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,3625364)) ) return false;
	if( (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,3625364)) ) return false;
	if( (lua_isnil(L,7)==0 && !Luna<void>::has_uniqueid(L,7,3625364)) ) return false;
	if( lua_type(L,8)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetGraphicsResetStatusARB(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_glGetnTexImageARB(lua_State *L) {
	if( lua_gettop(L)!=6 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glReadnPixelsARB(lua_State *L) {
	if( lua_gettop(L)!=8 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
	if( (lua_isnil(L,8)==0 && !Luna<void>::has_uniqueid(L,8,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetnCompressedTexImageARB(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetnUniformfvARB(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetnUniformivARB(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetnUniformuivARB(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetnUniformdvARB(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glDrawArraysInstancedBaseInstance(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glDrawElementsInstancedBaseInstance(lua_State *L) {
	if( lua_gettop(L)!=6 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glDrawElementsInstancedBaseVertexBaseInstance(lua_State *L) {
	if( lua_gettop(L)!=7 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glDrawTransformFeedbackInstanced(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glDrawTransformFeedbackStreamInstanced(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetInternalformativ(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetActiveAtomicCounterBufferiv(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glBindImageTexture(lua_State *L) {
	if( lua_gettop(L)!=7 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glMemoryBarrier(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glTexStorage1D(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glTexStorage2D(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glTexStorage3D(lua_State *L) {
	if( lua_gettop(L)!=6 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glTextureStorage1DEXT(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glTextureStorage2DEXT(lua_State *L) {
	if( lua_gettop(L)!=6 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glTextureStorage3DEXT(lua_State *L) {
	if( lua_gettop(L)!=7 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glDebugMessageControl(lua_State *L) {
	if( lua_gettop(L)!=6 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,3625364)) ) return false;
	if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glDebugMessageInsert(lua_State *L) {
	if( lua_gettop(L)!=6 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( lua_type(L,6)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetDebugMessageLog(lua_State *L) {
	if( lua_gettop(L)!=8 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,3625364)) ) return false;
	if( (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,3625364)) ) return false;
	if( (lua_isnil(L,7)==0 && !Luna<void>::has_uniqueid(L,7,3625364)) ) return false;
	if( lua_type(L,8)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_glPushDebugGroup(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( lua_type(L,4)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_glObjectLabel(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( lua_type(L,4)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetObjectLabel(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	if( lua_type(L,5)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_glObjectPtrLabel(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,3625364)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( lua_type(L,3)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetObjectPtrLabel(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,3625364)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	if( lua_type(L,4)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_glClearBufferData(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glClearBufferSubData(lua_State *L) {
	if( lua_gettop(L)!=7 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( !Luna<void>::has_uniqueid(L,3,32973728) ) return false;
	if( !Luna<void>::has_uniqueid(L,4,32973728) ) return false;
	if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	if( (lua_isnil(L,7)==0 && !Luna<void>::has_uniqueid(L,7,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glClearNamedBufferDataEXT(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glClearNamedBufferSubDataEXT(lua_State *L) {
	if( lua_gettop(L)!=7 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( !Luna<void>::has_uniqueid(L,5,32973728) ) return false;
	if( !Luna<void>::has_uniqueid(L,6,32973728) ) return false;
	if( (lua_isnil(L,7)==0 && !Luna<void>::has_uniqueid(L,7,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glDispatchCompute(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glDispatchComputeIndirect(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,32973728) ) return false;
	return true;
}

inline static bool _lg_typecheck_glCopyImageSubData(lua_State *L) {
	if( lua_gettop(L)!=15 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
	if( (lua_type(L,8)!=LUA_TNUMBER || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
	if( (lua_type(L,9)!=LUA_TNUMBER || lua_tointeger(L,9) != lua_tonumber(L,9)) ) return false;
	if( (lua_type(L,10)!=LUA_TNUMBER || lua_tointeger(L,10) != lua_tonumber(L,10)) ) return false;
	if( (lua_type(L,11)!=LUA_TNUMBER || lua_tointeger(L,11) != lua_tonumber(L,11)) ) return false;
	if( (lua_type(L,12)!=LUA_TNUMBER || lua_tointeger(L,12) != lua_tonumber(L,12)) ) return false;
	if( (lua_type(L,13)!=LUA_TNUMBER || lua_tointeger(L,13) != lua_tonumber(L,13)) ) return false;
	if( (lua_type(L,14)!=LUA_TNUMBER || lua_tointeger(L,14) != lua_tonumber(L,14)) ) return false;
	if( (lua_type(L,15)!=LUA_TNUMBER || lua_tointeger(L,15) != lua_tonumber(L,15)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glTextureView(lua_State *L) {
	if( lua_gettop(L)!=8 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
	if( (lua_type(L,8)!=LUA_TNUMBER || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glBindVertexBuffer(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( !Luna<void>::has_uniqueid(L,3,32973728) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexAttribFormat(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexAttribIFormat(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexAttribLFormat(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexAttribBinding(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glVertexBindingDivisor(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glFramebufferParameteri(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetFramebufferParameteriv(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glNamedFramebufferParameteriEXT(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetNamedFramebufferParameterivEXT(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetInternalformati64v(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,32973728)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glInvalidateTexSubImage(lua_State *L) {
	if( lua_gettop(L)!=8 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
	if( (lua_type(L,8)!=LUA_TNUMBER || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glInvalidateTexImage(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glInvalidateBufferSubData(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,32973728) ) return false;
	if( !Luna<void>::has_uniqueid(L,3,32973728) ) return false;
	return true;
}

inline static bool _lg_typecheck_glInvalidateBufferData(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glInvalidateFramebuffer(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glInvalidateSubFramebuffer(lua_State *L) {
	if( lua_gettop(L)!=7 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glMultiDrawArraysIndirect(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glMultiDrawElementsIndirect(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetProgramInterfaceiv(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetProgramResourceIndex(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( lua_type(L,3)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetProgramResourceName(lua_State *L) {
	if( lua_gettop(L)!=6 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,3625364)) ) return false;
	if( lua_type(L,6)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetProgramResourceiv(lua_State *L) {
	if( lua_gettop(L)!=8 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,3625364)) ) return false;
	if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	if( (lua_isnil(L,7)==0 && !Luna<void>::has_uniqueid(L,7,3625364)) ) return false;
	if( (lua_isnil(L,8)==0 && !Luna<void>::has_uniqueid(L,8,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetProgramResourceLocation(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( lua_type(L,3)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_glGetProgramResourceLocationIndex(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( lua_type(L,3)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_glShaderStorageBlockBinding(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glTexBufferRange(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( !Luna<void>::has_uniqueid(L,4,32973728) ) return false;
	if( !Luna<void>::has_uniqueid(L,5,32973728) ) return false;
	return true;
}

inline static bool _lg_typecheck_glTextureBufferRangeEXT(lua_State *L) {
	if( lua_gettop(L)!=6 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( !Luna<void>::has_uniqueid(L,5,32973728) ) return false;
	if( !Luna<void>::has_uniqueid(L,6,32973728) ) return false;
	return true;
}

inline static bool _lg_typecheck_glTexStorage2DMultisample(lua_State *L) {
	if( lua_gettop(L)!=6 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glTexStorage3DMultisample(lua_State *L) {
	if( lua_gettop(L)!=7 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glTextureStorage2DMultisampleEXT(lua_State *L) {
	if( lua_gettop(L)!=7 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glTextureStorage3DMultisampleEXT(lua_State *L) {
	if( lua_gettop(L)!=8 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
	if( (lua_type(L,8)!=LUA_TNUMBER || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
	return true;
}

inline static bool _lg_typecheck_glewInit(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_glewIsSupported(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_glewGetExtension(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}


// Function binds:
// void glCullFace(unsigned int mode)
static int _bind_glCullFace(lua_State *L) {
	if (!_lg_typecheck_glCullFace(L)) {
		luaL_error(L, "luna typecheck failed in void glCullFace(unsigned int mode) function, expected prototype:\nvoid glCullFace(unsigned int mode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int mode=(unsigned int)lua_tointeger(L,1);

	::glCullFace(mode);

	return 0;
}

// void glFrontFace(unsigned int mode)
static int _bind_glFrontFace(lua_State *L) {
	if (!_lg_typecheck_glFrontFace(L)) {
		luaL_error(L, "luna typecheck failed in void glFrontFace(unsigned int mode) function, expected prototype:\nvoid glFrontFace(unsigned int mode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int mode=(unsigned int)lua_tointeger(L,1);

	::glFrontFace(mode);

	return 0;
}

// void glHint(unsigned int target, unsigned int mode)
static int _bind_glHint(lua_State *L) {
	if (!_lg_typecheck_glHint(L)) {
		luaL_error(L, "luna typecheck failed in void glHint(unsigned int target, unsigned int mode) function, expected prototype:\nvoid glHint(unsigned int target, unsigned int mode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	unsigned int mode=(unsigned int)lua_tointeger(L,2);

	::glHint(target, mode);

	return 0;
}

// void glLineWidth(float width)
static int _bind_glLineWidth(lua_State *L) {
	if (!_lg_typecheck_glLineWidth(L)) {
		luaL_error(L, "luna typecheck failed in void glLineWidth(float width) function, expected prototype:\nvoid glLineWidth(float width)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	float width=(float)lua_tonumber(L,1);

	::glLineWidth(width);

	return 0;
}

// void glPointSize(float size)
static int _bind_glPointSize(lua_State *L) {
	if (!_lg_typecheck_glPointSize(L)) {
		luaL_error(L, "luna typecheck failed in void glPointSize(float size) function, expected prototype:\nvoid glPointSize(float size)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	float size=(float)lua_tonumber(L,1);

	::glPointSize(size);

	return 0;
}

// void glPolygonMode(unsigned int face, unsigned int mode)
static int _bind_glPolygonMode(lua_State *L) {
	if (!_lg_typecheck_glPolygonMode(L)) {
		luaL_error(L, "luna typecheck failed in void glPolygonMode(unsigned int face, unsigned int mode) function, expected prototype:\nvoid glPolygonMode(unsigned int face, unsigned int mode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int face=(unsigned int)lua_tointeger(L,1);
	unsigned int mode=(unsigned int)lua_tointeger(L,2);

	::glPolygonMode(face, mode);

	return 0;
}

// void glScissor(int x, int y, int width, int height)
static int _bind_glScissor(lua_State *L) {
	if (!_lg_typecheck_glScissor(L)) {
		luaL_error(L, "luna typecheck failed in void glScissor(int x, int y, int width, int height) function, expected prototype:\nvoid glScissor(int x, int y, int width, int height)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int x=(int)lua_tointeger(L,1);
	int y=(int)lua_tointeger(L,2);
	int width=(int)lua_tointeger(L,3);
	int height=(int)lua_tointeger(L,4);

	::glScissor(x, y, width, height);

	return 0;
}

// void glTexParameterf(unsigned int target, unsigned int pname, float param)
static int _bind_glTexParameterf(lua_State *L) {
	if (!_lg_typecheck_glTexParameterf(L)) {
		luaL_error(L, "luna typecheck failed in void glTexParameterf(unsigned int target, unsigned int pname, float param) function, expected prototype:\nvoid glTexParameterf(unsigned int target, unsigned int pname, float param)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	unsigned int pname=(unsigned int)lua_tointeger(L,2);
	float param=(float)lua_tonumber(L,3);

	::glTexParameterf(target, pname, param);

	return 0;
}

// void glTexParameterfv(unsigned int target, unsigned int pname, const float * params)
static int _bind_glTexParameterfv(lua_State *L) {
	if (!_lg_typecheck_glTexParameterfv(L)) {
		luaL_error(L, "luna typecheck failed in void glTexParameterfv(unsigned int target, unsigned int pname, const float * params) function, expected prototype:\nvoid glTexParameterfv(unsigned int target, unsigned int pname, const float * params)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	unsigned int pname=(unsigned int)lua_tointeger(L,2);
	const float* params=(const float*)Luna< void >::check(L,3);

	::glTexParameterfv(target, pname, params);

	return 0;
}

// void glTexParameteri(unsigned int target, unsigned int pname, int param)
static int _bind_glTexParameteri(lua_State *L) {
	if (!_lg_typecheck_glTexParameteri(L)) {
		luaL_error(L, "luna typecheck failed in void glTexParameteri(unsigned int target, unsigned int pname, int param) function, expected prototype:\nvoid glTexParameteri(unsigned int target, unsigned int pname, int param)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	unsigned int pname=(unsigned int)lua_tointeger(L,2);
	int param=(int)lua_tointeger(L,3);

	::glTexParameteri(target, pname, param);

	return 0;
}

// void glTexParameteriv(unsigned int target, unsigned int pname, const int * params)
static int _bind_glTexParameteriv(lua_State *L) {
	if (!_lg_typecheck_glTexParameteriv(L)) {
		luaL_error(L, "luna typecheck failed in void glTexParameteriv(unsigned int target, unsigned int pname, const int * params) function, expected prototype:\nvoid glTexParameteriv(unsigned int target, unsigned int pname, const int * params)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	unsigned int pname=(unsigned int)lua_tointeger(L,2);
	const int* params=(const int*)Luna< void >::check(L,3);

	::glTexParameteriv(target, pname, params);

	return 0;
}

// void glTexImage1D(unsigned int target, int level, int internalformat, int width, int border, unsigned int format, unsigned int type, const void * pixels)
static int _bind_glTexImage1D(lua_State *L) {
	if (!_lg_typecheck_glTexImage1D(L)) {
		luaL_error(L, "luna typecheck failed in void glTexImage1D(unsigned int target, int level, int internalformat, int width, int border, unsigned int format, unsigned int type, const void * pixels) function, expected prototype:\nvoid glTexImage1D(unsigned int target, int level, int internalformat, int width, int border, unsigned int format, unsigned int type, const void * pixels)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	int level=(int)lua_tointeger(L,2);
	int internalformat=(int)lua_tointeger(L,3);
	int width=(int)lua_tointeger(L,4);
	int border=(int)lua_tointeger(L,5);
	unsigned int format=(unsigned int)lua_tointeger(L,6);
	unsigned int type=(unsigned int)lua_tointeger(L,7);
	const void* pixels=(Luna< void >::check(L,8));

	::glTexImage1D(target, level, internalformat, width, border, format, type, pixels);

	return 0;
}

// void glTexImage2D(unsigned int target, int level, int internalformat, int width, int height, int border, unsigned int format, unsigned int type, const void * pixels)
static int _bind_glTexImage2D(lua_State *L) {
	if (!_lg_typecheck_glTexImage2D(L)) {
		luaL_error(L, "luna typecheck failed in void glTexImage2D(unsigned int target, int level, int internalformat, int width, int height, int border, unsigned int format, unsigned int type, const void * pixels) function, expected prototype:\nvoid glTexImage2D(unsigned int target, int level, int internalformat, int width, int height, int border, unsigned int format, unsigned int type, const void * pixels)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	int level=(int)lua_tointeger(L,2);
	int internalformat=(int)lua_tointeger(L,3);
	int width=(int)lua_tointeger(L,4);
	int height=(int)lua_tointeger(L,5);
	int border=(int)lua_tointeger(L,6);
	unsigned int format=(unsigned int)lua_tointeger(L,7);
	unsigned int type=(unsigned int)lua_tointeger(L,8);
	const void* pixels=(Luna< void >::check(L,9));

	::glTexImage2D(target, level, internalformat, width, height, border, format, type, pixels);

	return 0;
}

// void glDrawBuffer(unsigned int mode)
static int _bind_glDrawBuffer(lua_State *L) {
	if (!_lg_typecheck_glDrawBuffer(L)) {
		luaL_error(L, "luna typecheck failed in void glDrawBuffer(unsigned int mode) function, expected prototype:\nvoid glDrawBuffer(unsigned int mode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int mode=(unsigned int)lua_tointeger(L,1);

	::glDrawBuffer(mode);

	return 0;
}

// void glClear(unsigned int mask)
static int _bind_glClear(lua_State *L) {
	if (!_lg_typecheck_glClear(L)) {
		luaL_error(L, "luna typecheck failed in void glClear(unsigned int mask) function, expected prototype:\nvoid glClear(unsigned int mask)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int mask=(unsigned int)lua_tointeger(L,1);

	::glClear(mask);

	return 0;
}

// void glClearColor(float red, float green, float blue, float alpha)
static int _bind_glClearColor(lua_State *L) {
	if (!_lg_typecheck_glClearColor(L)) {
		luaL_error(L, "luna typecheck failed in void glClearColor(float red, float green, float blue, float alpha) function, expected prototype:\nvoid glClearColor(float red, float green, float blue, float alpha)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	float red=(float)lua_tonumber(L,1);
	float green=(float)lua_tonumber(L,2);
	float blue=(float)lua_tonumber(L,3);
	float alpha=(float)lua_tonumber(L,4);

	::glClearColor(red, green, blue, alpha);

	return 0;
}

// void glClearStencil(int s)
static int _bind_glClearStencil(lua_State *L) {
	if (!_lg_typecheck_glClearStencil(L)) {
		luaL_error(L, "luna typecheck failed in void glClearStencil(int s) function, expected prototype:\nvoid glClearStencil(int s)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int s=(int)lua_tointeger(L,1);

	::glClearStencil(s);

	return 0;
}

// void glClearDepth(double depth)
static int _bind_glClearDepth(lua_State *L) {
	if (!_lg_typecheck_glClearDepth(L)) {
		luaL_error(L, "luna typecheck failed in void glClearDepth(double depth) function, expected prototype:\nvoid glClearDepth(double depth)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	double depth=(double)lua_tonumber(L,1);

	::glClearDepth(depth);

	return 0;
}

// void glStencilMask(unsigned int mask)
static int _bind_glStencilMask(lua_State *L) {
	if (!_lg_typecheck_glStencilMask(L)) {
		luaL_error(L, "luna typecheck failed in void glStencilMask(unsigned int mask) function, expected prototype:\nvoid glStencilMask(unsigned int mask)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int mask=(unsigned int)lua_tointeger(L,1);

	::glStencilMask(mask);

	return 0;
}

// void glColorMask(unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha)
static int _bind_glColorMask(lua_State *L) {
	if (!_lg_typecheck_glColorMask(L)) {
		luaL_error(L, "luna typecheck failed in void glColorMask(unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha) function, expected prototype:\nvoid glColorMask(unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned char red = (unsigned char)(lua_tointeger(L,1));
	unsigned char green = (unsigned char)(lua_tointeger(L,2));
	unsigned char blue = (unsigned char)(lua_tointeger(L,3));
	unsigned char alpha = (unsigned char)(lua_tointeger(L,4));

	::glColorMask(red, green, blue, alpha);

	return 0;
}

// void glDepthMask(unsigned char flag)
static int _bind_glDepthMask(lua_State *L) {
	if (!_lg_typecheck_glDepthMask(L)) {
		luaL_error(L, "luna typecheck failed in void glDepthMask(unsigned char flag) function, expected prototype:\nvoid glDepthMask(unsigned char flag)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned char flag = (unsigned char)(lua_tointeger(L,1));

	::glDepthMask(flag);

	return 0;
}

// void glDisable(unsigned int cap)
static int _bind_glDisable(lua_State *L) {
	if (!_lg_typecheck_glDisable(L)) {
		luaL_error(L, "luna typecheck failed in void glDisable(unsigned int cap) function, expected prototype:\nvoid glDisable(unsigned int cap)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int cap=(unsigned int)lua_tointeger(L,1);

	::glDisable(cap);

	return 0;
}

// void glEnable(unsigned int cap)
static int _bind_glEnable(lua_State *L) {
	if (!_lg_typecheck_glEnable(L)) {
		luaL_error(L, "luna typecheck failed in void glEnable(unsigned int cap) function, expected prototype:\nvoid glEnable(unsigned int cap)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int cap=(unsigned int)lua_tointeger(L,1);

	::glEnable(cap);

	return 0;
}

// void glFinish()
static int _bind_glFinish(lua_State *L) {
	if (!_lg_typecheck_glFinish(L)) {
		luaL_error(L, "luna typecheck failed in void glFinish() function, expected prototype:\nvoid glFinish()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	::glFinish();

	return 0;
}

// void glFlush()
static int _bind_glFlush(lua_State *L) {
	if (!_lg_typecheck_glFlush(L)) {
		luaL_error(L, "luna typecheck failed in void glFlush() function, expected prototype:\nvoid glFlush()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	::glFlush();

	return 0;
}

// void glBlendFunc(unsigned int sfactor, unsigned int dfactor)
static int _bind_glBlendFunc(lua_State *L) {
	if (!_lg_typecheck_glBlendFunc(L)) {
		luaL_error(L, "luna typecheck failed in void glBlendFunc(unsigned int sfactor, unsigned int dfactor) function, expected prototype:\nvoid glBlendFunc(unsigned int sfactor, unsigned int dfactor)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int sfactor=(unsigned int)lua_tointeger(L,1);
	unsigned int dfactor=(unsigned int)lua_tointeger(L,2);

	::glBlendFunc(sfactor, dfactor);

	return 0;
}

// void glLogicOp(unsigned int opcode)
static int _bind_glLogicOp(lua_State *L) {
	if (!_lg_typecheck_glLogicOp(L)) {
		luaL_error(L, "luna typecheck failed in void glLogicOp(unsigned int opcode) function, expected prototype:\nvoid glLogicOp(unsigned int opcode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int opcode=(unsigned int)lua_tointeger(L,1);

	::glLogicOp(opcode);

	return 0;
}

// void glStencilFunc(unsigned int func, int ref, unsigned int mask)
static int _bind_glStencilFunc(lua_State *L) {
	if (!_lg_typecheck_glStencilFunc(L)) {
		luaL_error(L, "luna typecheck failed in void glStencilFunc(unsigned int func, int ref, unsigned int mask) function, expected prototype:\nvoid glStencilFunc(unsigned int func, int ref, unsigned int mask)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int func=(unsigned int)lua_tointeger(L,1);
	int ref=(int)lua_tointeger(L,2);
	unsigned int mask=(unsigned int)lua_tointeger(L,3);

	::glStencilFunc(func, ref, mask);

	return 0;
}

// void glStencilOp(unsigned int fail, unsigned int zfail, unsigned int zpass)
static int _bind_glStencilOp(lua_State *L) {
	if (!_lg_typecheck_glStencilOp(L)) {
		luaL_error(L, "luna typecheck failed in void glStencilOp(unsigned int fail, unsigned int zfail, unsigned int zpass) function, expected prototype:\nvoid glStencilOp(unsigned int fail, unsigned int zfail, unsigned int zpass)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int fail=(unsigned int)lua_tointeger(L,1);
	unsigned int zfail=(unsigned int)lua_tointeger(L,2);
	unsigned int zpass=(unsigned int)lua_tointeger(L,3);

	::glStencilOp(fail, zfail, zpass);

	return 0;
}

// void glDepthFunc(unsigned int func)
static int _bind_glDepthFunc(lua_State *L) {
	if (!_lg_typecheck_glDepthFunc(L)) {
		luaL_error(L, "luna typecheck failed in void glDepthFunc(unsigned int func) function, expected prototype:\nvoid glDepthFunc(unsigned int func)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int func=(unsigned int)lua_tointeger(L,1);

	::glDepthFunc(func);

	return 0;
}

// void glPixelStoref(unsigned int pname, float param)
static int _bind_glPixelStoref(lua_State *L) {
	if (!_lg_typecheck_glPixelStoref(L)) {
		luaL_error(L, "luna typecheck failed in void glPixelStoref(unsigned int pname, float param) function, expected prototype:\nvoid glPixelStoref(unsigned int pname, float param)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int pname=(unsigned int)lua_tointeger(L,1);
	float param=(float)lua_tonumber(L,2);

	::glPixelStoref(pname, param);

	return 0;
}

// void glPixelStorei(unsigned int pname, int param)
static int _bind_glPixelStorei(lua_State *L) {
	if (!_lg_typecheck_glPixelStorei(L)) {
		luaL_error(L, "luna typecheck failed in void glPixelStorei(unsigned int pname, int param) function, expected prototype:\nvoid glPixelStorei(unsigned int pname, int param)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int pname=(unsigned int)lua_tointeger(L,1);
	int param=(int)lua_tointeger(L,2);

	::glPixelStorei(pname, param);

	return 0;
}

// void glReadBuffer(unsigned int mode)
static int _bind_glReadBuffer(lua_State *L) {
	if (!_lg_typecheck_glReadBuffer(L)) {
		luaL_error(L, "luna typecheck failed in void glReadBuffer(unsigned int mode) function, expected prototype:\nvoid glReadBuffer(unsigned int mode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int mode=(unsigned int)lua_tointeger(L,1);

	::glReadBuffer(mode);

	return 0;
}

// void glReadPixels(int x, int y, int width, int height, unsigned int format, unsigned int type, void * pixels)
static int _bind_glReadPixels(lua_State *L) {
	if (!_lg_typecheck_glReadPixels(L)) {
		luaL_error(L, "luna typecheck failed in void glReadPixels(int x, int y, int width, int height, unsigned int format, unsigned int type, void * pixels) function, expected prototype:\nvoid glReadPixels(int x, int y, int width, int height, unsigned int format, unsigned int type, void * pixels)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int x=(int)lua_tointeger(L,1);
	int y=(int)lua_tointeger(L,2);
	int width=(int)lua_tointeger(L,3);
	int height=(int)lua_tointeger(L,4);
	unsigned int format=(unsigned int)lua_tointeger(L,5);
	unsigned int type=(unsigned int)lua_tointeger(L,6);
	void* pixels=(Luna< void >::check(L,7));

	::glReadPixels(x, y, width, height, format, type, pixels);

	return 0;
}

// void glGetBooleanv(unsigned int pname, unsigned char * params)
static int _bind_glGetBooleanv(lua_State *L) {
	if (!_lg_typecheck_glGetBooleanv(L)) {
		luaL_error(L, "luna typecheck failed in void glGetBooleanv(unsigned int pname, unsigned char * params) function, expected prototype:\nvoid glGetBooleanv(unsigned int pname, unsigned char * params)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int pname=(unsigned int)lua_tointeger(L,1);
	unsigned char params = (unsigned char)(lua_tointeger(L,2));

	::glGetBooleanv(pname, &params);

	return 0;
}

// void glGetDoublev(unsigned int pname, double * params)
static int _bind_glGetDoublev(lua_State *L) {
	if (!_lg_typecheck_glGetDoublev(L)) {
		luaL_error(L, "luna typecheck failed in void glGetDoublev(unsigned int pname, double * params) function, expected prototype:\nvoid glGetDoublev(unsigned int pname, double * params)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int pname=(unsigned int)lua_tointeger(L,1);
	double* params=(double*)Luna< void >::check(L,2);

	::glGetDoublev(pname, params);

	return 0;
}

// unsigned int glGetError()
static int _bind_glGetError(lua_State *L) {
	if (!_lg_typecheck_glGetError(L)) {
		luaL_error(L, "luna typecheck failed in unsigned int glGetError() function, expected prototype:\nunsigned int glGetError()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	unsigned int lret = ::glGetError();
	lua_pushnumber(L,lret);

	return 1;
}

// void glGetFloatv(unsigned int pname, float * params)
static int _bind_glGetFloatv(lua_State *L) {
	if (!_lg_typecheck_glGetFloatv(L)) {
		luaL_error(L, "luna typecheck failed in void glGetFloatv(unsigned int pname, float * params) function, expected prototype:\nvoid glGetFloatv(unsigned int pname, float * params)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int pname=(unsigned int)lua_tointeger(L,1);
	float* params=(float*)Luna< void >::check(L,2);

	::glGetFloatv(pname, params);

	return 0;
}

// void glGetIntegerv(unsigned int pname, int * params)
static int _bind_glGetIntegerv(lua_State *L) {
	if (!_lg_typecheck_glGetIntegerv(L)) {
		luaL_error(L, "luna typecheck failed in void glGetIntegerv(unsigned int pname, int * params) function, expected prototype:\nvoid glGetIntegerv(unsigned int pname, int * params)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int pname=(unsigned int)lua_tointeger(L,1);
	int* params=(int*)Luna< void >::check(L,2);

	::glGetIntegerv(pname, params);

	return 0;
}

// const unsigned char * glGetString(unsigned int name)
static int _bind_glGetString(lua_State *L) {
	if (!_lg_typecheck_glGetString(L)) {
		luaL_error(L, "luna typecheck failed in const unsigned char * glGetString(unsigned int name) function, expected prototype:\nconst unsigned char * glGetString(unsigned int name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int name=(unsigned int)lua_tointeger(L,1);

	const unsigned char * lret = ::glGetString(name);
	luaL_error(L,"Trying to convert pointer on unsigned char lret to lua. This usage should be clarifierd.");

	return 1;
}

// void glGetTexImage(unsigned int target, int level, unsigned int format, unsigned int type, void * pixels)
static int _bind_glGetTexImage(lua_State *L) {
	if (!_lg_typecheck_glGetTexImage(L)) {
		luaL_error(L, "luna typecheck failed in void glGetTexImage(unsigned int target, int level, unsigned int format, unsigned int type, void * pixels) function, expected prototype:\nvoid glGetTexImage(unsigned int target, int level, unsigned int format, unsigned int type, void * pixels)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	int level=(int)lua_tointeger(L,2);
	unsigned int format=(unsigned int)lua_tointeger(L,3);
	unsigned int type=(unsigned int)lua_tointeger(L,4);
	void* pixels=(Luna< void >::check(L,5));

	::glGetTexImage(target, level, format, type, pixels);

	return 0;
}

// void glGetTexParameterfv(unsigned int target, unsigned int pname, float * params)
static int _bind_glGetTexParameterfv(lua_State *L) {
	if (!_lg_typecheck_glGetTexParameterfv(L)) {
		luaL_error(L, "luna typecheck failed in void glGetTexParameterfv(unsigned int target, unsigned int pname, float * params) function, expected prototype:\nvoid glGetTexParameterfv(unsigned int target, unsigned int pname, float * params)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	unsigned int pname=(unsigned int)lua_tointeger(L,2);
	float* params=(float*)Luna< void >::check(L,3);

	::glGetTexParameterfv(target, pname, params);

	return 0;
}

// void glGetTexParameteriv(unsigned int target, unsigned int pname, int * params)
static int _bind_glGetTexParameteriv(lua_State *L) {
	if (!_lg_typecheck_glGetTexParameteriv(L)) {
		luaL_error(L, "luna typecheck failed in void glGetTexParameteriv(unsigned int target, unsigned int pname, int * params) function, expected prototype:\nvoid glGetTexParameteriv(unsigned int target, unsigned int pname, int * params)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	unsigned int pname=(unsigned int)lua_tointeger(L,2);
	int* params=(int*)Luna< void >::check(L,3);

	::glGetTexParameteriv(target, pname, params);

	return 0;
}

// void glGetTexLevelParameterfv(unsigned int target, int level, unsigned int pname, float * params)
static int _bind_glGetTexLevelParameterfv(lua_State *L) {
	if (!_lg_typecheck_glGetTexLevelParameterfv(L)) {
		luaL_error(L, "luna typecheck failed in void glGetTexLevelParameterfv(unsigned int target, int level, unsigned int pname, float * params) function, expected prototype:\nvoid glGetTexLevelParameterfv(unsigned int target, int level, unsigned int pname, float * params)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	int level=(int)lua_tointeger(L,2);
	unsigned int pname=(unsigned int)lua_tointeger(L,3);
	float* params=(float*)Luna< void >::check(L,4);

	::glGetTexLevelParameterfv(target, level, pname, params);

	return 0;
}

// void glGetTexLevelParameteriv(unsigned int target, int level, unsigned int pname, int * params)
static int _bind_glGetTexLevelParameteriv(lua_State *L) {
	if (!_lg_typecheck_glGetTexLevelParameteriv(L)) {
		luaL_error(L, "luna typecheck failed in void glGetTexLevelParameteriv(unsigned int target, int level, unsigned int pname, int * params) function, expected prototype:\nvoid glGetTexLevelParameteriv(unsigned int target, int level, unsigned int pname, int * params)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	int level=(int)lua_tointeger(L,2);
	unsigned int pname=(unsigned int)lua_tointeger(L,3);
	int* params=(int*)Luna< void >::check(L,4);

	::glGetTexLevelParameteriv(target, level, pname, params);

	return 0;
}

// unsigned char glIsEnabled(unsigned int cap)
static int _bind_glIsEnabled(lua_State *L) {
	if (!_lg_typecheck_glIsEnabled(L)) {
		luaL_error(L, "luna typecheck failed in unsigned char glIsEnabled(unsigned int cap) function, expected prototype:\nunsigned char glIsEnabled(unsigned int cap)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int cap=(unsigned int)lua_tointeger(L,1);

	unsigned char lret = ::glIsEnabled(cap);
	lua_pushnumber(L,(int)lret);

	return 1;
}

// void glDepthRange(double nearv, double farv)
static int _bind_glDepthRange(lua_State *L) {
	if (!_lg_typecheck_glDepthRange(L)) {
		luaL_error(L, "luna typecheck failed in void glDepthRange(double nearv, double farv) function, expected prototype:\nvoid glDepthRange(double nearv, double farv)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	double nearv=(double)lua_tonumber(L,1);
	double farv=(double)lua_tonumber(L,2);

	::glDepthRange(nearv, farv);

	return 0;
}

// void glViewport(int x, int y, int width, int height)
static int _bind_glViewport(lua_State *L) {
	if (!_lg_typecheck_glViewport(L)) {
		luaL_error(L, "luna typecheck failed in void glViewport(int x, int y, int width, int height) function, expected prototype:\nvoid glViewport(int x, int y, int width, int height)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int x=(int)lua_tointeger(L,1);
	int y=(int)lua_tointeger(L,2);
	int width=(int)lua_tointeger(L,3);
	int height=(int)lua_tointeger(L,4);

	::glViewport(x, y, width, height);

	return 0;
}

// void glDrawArrays(unsigned int mode, int first, int count)
static int _bind_glDrawArrays(lua_State *L) {
	if (!_lg_typecheck_glDrawArrays(L)) {
		luaL_error(L, "luna typecheck failed in void glDrawArrays(unsigned int mode, int first, int count) function, expected prototype:\nvoid glDrawArrays(unsigned int mode, int first, int count)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int mode=(unsigned int)lua_tointeger(L,1);
	int first=(int)lua_tointeger(L,2);
	int count=(int)lua_tointeger(L,3);

	::glDrawArrays(mode, first, count);

	return 0;
}

// void glDrawElements(unsigned int mode, int count, unsigned int type, const void * indices)
static int _bind_glDrawElements(lua_State *L) {
	if (!_lg_typecheck_glDrawElements(L)) {
		luaL_error(L, "luna typecheck failed in void glDrawElements(unsigned int mode, int count, unsigned int type, const void * indices) function, expected prototype:\nvoid glDrawElements(unsigned int mode, int count, unsigned int type, const void * indices)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int mode=(unsigned int)lua_tointeger(L,1);
	int count=(int)lua_tointeger(L,2);
	unsigned int type=(unsigned int)lua_tointeger(L,3);
	const void* indices=(Luna< void >::check(L,4));

	::glDrawElements(mode, count, type, indices);

	return 0;
}

// void glPolygonOffset(float factor, float units)
static int _bind_glPolygonOffset(lua_State *L) {
	if (!_lg_typecheck_glPolygonOffset(L)) {
		luaL_error(L, "luna typecheck failed in void glPolygonOffset(float factor, float units) function, expected prototype:\nvoid glPolygonOffset(float factor, float units)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	float factor=(float)lua_tonumber(L,1);
	float units=(float)lua_tonumber(L,2);

	::glPolygonOffset(factor, units);

	return 0;
}

// void glCopyTexImage1D(unsigned int target, int level, unsigned int internalformat, int x, int y, int width, int border)
static int _bind_glCopyTexImage1D(lua_State *L) {
	if (!_lg_typecheck_glCopyTexImage1D(L)) {
		luaL_error(L, "luna typecheck failed in void glCopyTexImage1D(unsigned int target, int level, unsigned int internalformat, int x, int y, int width, int border) function, expected prototype:\nvoid glCopyTexImage1D(unsigned int target, int level, unsigned int internalformat, int x, int y, int width, int border)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	int level=(int)lua_tointeger(L,2);
	unsigned int internalformat=(unsigned int)lua_tointeger(L,3);
	int x=(int)lua_tointeger(L,4);
	int y=(int)lua_tointeger(L,5);
	int width=(int)lua_tointeger(L,6);
	int border=(int)lua_tointeger(L,7);

	::glCopyTexImage1D(target, level, internalformat, x, y, width, border);

	return 0;
}

// void glCopyTexImage2D(unsigned int target, int level, unsigned int internalformat, int x, int y, int width, int height, int border)
static int _bind_glCopyTexImage2D(lua_State *L) {
	if (!_lg_typecheck_glCopyTexImage2D(L)) {
		luaL_error(L, "luna typecheck failed in void glCopyTexImage2D(unsigned int target, int level, unsigned int internalformat, int x, int y, int width, int height, int border) function, expected prototype:\nvoid glCopyTexImage2D(unsigned int target, int level, unsigned int internalformat, int x, int y, int width, int height, int border)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	int level=(int)lua_tointeger(L,2);
	unsigned int internalformat=(unsigned int)lua_tointeger(L,3);
	int x=(int)lua_tointeger(L,4);
	int y=(int)lua_tointeger(L,5);
	int width=(int)lua_tointeger(L,6);
	int height=(int)lua_tointeger(L,7);
	int border=(int)lua_tointeger(L,8);

	::glCopyTexImage2D(target, level, internalformat, x, y, width, height, border);

	return 0;
}

// void glCopyTexSubImage1D(unsigned int target, int level, int xoffset, int x, int y, int width)
static int _bind_glCopyTexSubImage1D(lua_State *L) {
	if (!_lg_typecheck_glCopyTexSubImage1D(L)) {
		luaL_error(L, "luna typecheck failed in void glCopyTexSubImage1D(unsigned int target, int level, int xoffset, int x, int y, int width) function, expected prototype:\nvoid glCopyTexSubImage1D(unsigned int target, int level, int xoffset, int x, int y, int width)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	int level=(int)lua_tointeger(L,2);
	int xoffset=(int)lua_tointeger(L,3);
	int x=(int)lua_tointeger(L,4);
	int y=(int)lua_tointeger(L,5);
	int width=(int)lua_tointeger(L,6);

	::glCopyTexSubImage1D(target, level, xoffset, x, y, width);

	return 0;
}

// void glCopyTexSubImage2D(unsigned int target, int level, int xoffset, int yoffset, int x, int y, int width, int height)
static int _bind_glCopyTexSubImage2D(lua_State *L) {
	if (!_lg_typecheck_glCopyTexSubImage2D(L)) {
		luaL_error(L, "luna typecheck failed in void glCopyTexSubImage2D(unsigned int target, int level, int xoffset, int yoffset, int x, int y, int width, int height) function, expected prototype:\nvoid glCopyTexSubImage2D(unsigned int target, int level, int xoffset, int yoffset, int x, int y, int width, int height)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	int level=(int)lua_tointeger(L,2);
	int xoffset=(int)lua_tointeger(L,3);
	int yoffset=(int)lua_tointeger(L,4);
	int x=(int)lua_tointeger(L,5);
	int y=(int)lua_tointeger(L,6);
	int width=(int)lua_tointeger(L,7);
	int height=(int)lua_tointeger(L,8);

	::glCopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height);

	return 0;
}

// void glTexSubImage1D(unsigned int target, int level, int xoffset, int width, unsigned int format, unsigned int type, const void * pixels)
static int _bind_glTexSubImage1D(lua_State *L) {
	if (!_lg_typecheck_glTexSubImage1D(L)) {
		luaL_error(L, "luna typecheck failed in void glTexSubImage1D(unsigned int target, int level, int xoffset, int width, unsigned int format, unsigned int type, const void * pixels) function, expected prototype:\nvoid glTexSubImage1D(unsigned int target, int level, int xoffset, int width, unsigned int format, unsigned int type, const void * pixels)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	int level=(int)lua_tointeger(L,2);
	int xoffset=(int)lua_tointeger(L,3);
	int width=(int)lua_tointeger(L,4);
	unsigned int format=(unsigned int)lua_tointeger(L,5);
	unsigned int type=(unsigned int)lua_tointeger(L,6);
	const void* pixels=(Luna< void >::check(L,7));

	::glTexSubImage1D(target, level, xoffset, width, format, type, pixels);

	return 0;
}

// void glTexSubImage2D(unsigned int target, int level, int xoffset, int yoffset, int width, int height, unsigned int format, unsigned int type, const void * pixels)
static int _bind_glTexSubImage2D(lua_State *L) {
	if (!_lg_typecheck_glTexSubImage2D(L)) {
		luaL_error(L, "luna typecheck failed in void glTexSubImage2D(unsigned int target, int level, int xoffset, int yoffset, int width, int height, unsigned int format, unsigned int type, const void * pixels) function, expected prototype:\nvoid glTexSubImage2D(unsigned int target, int level, int xoffset, int yoffset, int width, int height, unsigned int format, unsigned int type, const void * pixels)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	int level=(int)lua_tointeger(L,2);
	int xoffset=(int)lua_tointeger(L,3);
	int yoffset=(int)lua_tointeger(L,4);
	int width=(int)lua_tointeger(L,5);
	int height=(int)lua_tointeger(L,6);
	unsigned int format=(unsigned int)lua_tointeger(L,7);
	unsigned int type=(unsigned int)lua_tointeger(L,8);
	const void* pixels=(Luna< void >::check(L,9));

	::glTexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, pixels);

	return 0;
}

// void glBindTexture(unsigned int target, unsigned int texture)
static int _bind_glBindTexture(lua_State *L) {
	if (!_lg_typecheck_glBindTexture(L)) {
		luaL_error(L, "luna typecheck failed in void glBindTexture(unsigned int target, unsigned int texture) function, expected prototype:\nvoid glBindTexture(unsigned int target, unsigned int texture)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	unsigned int texture=(unsigned int)lua_tointeger(L,2);

	::glBindTexture(target, texture);

	return 0;
}

// void glDeleteTextures(int n, const unsigned int * textures)
static int _bind_glDeleteTextures(lua_State *L) {
	if (!_lg_typecheck_glDeleteTextures(L)) {
		luaL_error(L, "luna typecheck failed in void glDeleteTextures(int n, const unsigned int * textures) function, expected prototype:\nvoid glDeleteTextures(int n, const unsigned int * textures)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int n=(int)lua_tointeger(L,1);
	const unsigned int* textures=(const unsigned int*)Luna< void >::check(L,2);

	::glDeleteTextures(n, textures);

	return 0;
}

// void glGenTextures(int n, unsigned int * textures)
static int _bind_glGenTextures(lua_State *L) {
	if (!_lg_typecheck_glGenTextures(L)) {
		luaL_error(L, "luna typecheck failed in void glGenTextures(int n, unsigned int * textures) function, expected prototype:\nvoid glGenTextures(int n, unsigned int * textures)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int n=(int)lua_tointeger(L,1);
	unsigned int* textures=(unsigned int*)Luna< void >::check(L,2);

	::glGenTextures(n, textures);

	return 0;
}

// unsigned char glIsTexture(unsigned int texture)
static int _bind_glIsTexture(lua_State *L) {
	if (!_lg_typecheck_glIsTexture(L)) {
		luaL_error(L, "luna typecheck failed in unsigned char glIsTexture(unsigned int texture) function, expected prototype:\nunsigned char glIsTexture(unsigned int texture)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int texture=(unsigned int)lua_tointeger(L,1);

	unsigned char lret = ::glIsTexture(texture);
	lua_pushnumber(L,(int)lret);

	return 1;
}

// void glBlendColor(float red, float green, float blue, float alpha)
static int _bind_glBlendColor(lua_State *L) {
	if (!_lg_typecheck_glBlendColor(L)) {
		luaL_error(L, "luna typecheck failed in void glBlendColor(float red, float green, float blue, float alpha) function, expected prototype:\nvoid glBlendColor(float red, float green, float blue, float alpha)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	float red=(float)lua_tonumber(L,1);
	float green=(float)lua_tonumber(L,2);
	float blue=(float)lua_tonumber(L,3);
	float alpha=(float)lua_tonumber(L,4);

	::glBlendColor(red, green, blue, alpha);

	return 0;
}

// void glBlendEquation(unsigned int mode)
static int _bind_glBlendEquation(lua_State *L) {
	if (!_lg_typecheck_glBlendEquation(L)) {
		luaL_error(L, "luna typecheck failed in void glBlendEquation(unsigned int mode) function, expected prototype:\nvoid glBlendEquation(unsigned int mode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int mode=(unsigned int)lua_tointeger(L,1);

	::glBlendEquation(mode);

	return 0;
}

// void glDrawRangeElements(unsigned int mode, unsigned int start, unsigned int end, int count, unsigned int type, const void * indices)
static int _bind_glDrawRangeElements(lua_State *L) {
	if (!_lg_typecheck_glDrawRangeElements(L)) {
		luaL_error(L, "luna typecheck failed in void glDrawRangeElements(unsigned int mode, unsigned int start, unsigned int end, int count, unsigned int type, const void * indices) function, expected prototype:\nvoid glDrawRangeElements(unsigned int mode, unsigned int start, unsigned int end, int count, unsigned int type, const void * indices)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int mode=(unsigned int)lua_tointeger(L,1);
	unsigned int start=(unsigned int)lua_tointeger(L,2);
	unsigned int end=(unsigned int)lua_tointeger(L,3);
	int count=(int)lua_tointeger(L,4);
	unsigned int type=(unsigned int)lua_tointeger(L,5);
	const void* indices=(Luna< void >::check(L,6));

	::glDrawRangeElements(mode, start, end, count, type, indices);

	return 0;
}

// void glTexImage3D(unsigned int target, int level, int internalformat, int width, int height, int depth, int border, unsigned int format, unsigned int type, const void * pixels)
static int _bind_glTexImage3D(lua_State *L) {
	if (!_lg_typecheck_glTexImage3D(L)) {
		luaL_error(L, "luna typecheck failed in void glTexImage3D(unsigned int target, int level, int internalformat, int width, int height, int depth, int border, unsigned int format, unsigned int type, const void * pixels) function, expected prototype:\nvoid glTexImage3D(unsigned int target, int level, int internalformat, int width, int height, int depth, int border, unsigned int format, unsigned int type, const void * pixels)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	int level=(int)lua_tointeger(L,2);
	int internalformat=(int)lua_tointeger(L,3);
	int width=(int)lua_tointeger(L,4);
	int height=(int)lua_tointeger(L,5);
	int depth=(int)lua_tointeger(L,6);
	int border=(int)lua_tointeger(L,7);
	unsigned int format=(unsigned int)lua_tointeger(L,8);
	unsigned int type=(unsigned int)lua_tointeger(L,9);
	const void* pixels=(Luna< void >::check(L,10));

	::glTexImage3D(target, level, internalformat, width, height, depth, border, format, type, pixels);

	return 0;
}

// void glTexSubImage3D(unsigned int target, int level, int xoffset, int yoffset, int zoffset, int width, int height, int depth, unsigned int format, unsigned int type, const void * pixels)
static int _bind_glTexSubImage3D(lua_State *L) {
	if (!_lg_typecheck_glTexSubImage3D(L)) {
		luaL_error(L, "luna typecheck failed in void glTexSubImage3D(unsigned int target, int level, int xoffset, int yoffset, int zoffset, int width, int height, int depth, unsigned int format, unsigned int type, const void * pixels) function, expected prototype:\nvoid glTexSubImage3D(unsigned int target, int level, int xoffset, int yoffset, int zoffset, int width, int height, int depth, unsigned int format, unsigned int type, const void * pixels)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	int level=(int)lua_tointeger(L,2);
	int xoffset=(int)lua_tointeger(L,3);
	int yoffset=(int)lua_tointeger(L,4);
	int zoffset=(int)lua_tointeger(L,5);
	int width=(int)lua_tointeger(L,6);
	int height=(int)lua_tointeger(L,7);
	int depth=(int)lua_tointeger(L,8);
	unsigned int format=(unsigned int)lua_tointeger(L,9);
	unsigned int type=(unsigned int)lua_tointeger(L,10);
	const void* pixels=(Luna< void >::check(L,11));

	::glTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);

	return 0;
}

// void glCopyTexSubImage3D(unsigned int target, int level, int xoffset, int yoffset, int zoffset, int x, int y, int width, int height)
static int _bind_glCopyTexSubImage3D(lua_State *L) {
	if (!_lg_typecheck_glCopyTexSubImage3D(L)) {
		luaL_error(L, "luna typecheck failed in void glCopyTexSubImage3D(unsigned int target, int level, int xoffset, int yoffset, int zoffset, int x, int y, int width, int height) function, expected prototype:\nvoid glCopyTexSubImage3D(unsigned int target, int level, int xoffset, int yoffset, int zoffset, int x, int y, int width, int height)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	int level=(int)lua_tointeger(L,2);
	int xoffset=(int)lua_tointeger(L,3);
	int yoffset=(int)lua_tointeger(L,4);
	int zoffset=(int)lua_tointeger(L,5);
	int x=(int)lua_tointeger(L,6);
	int y=(int)lua_tointeger(L,7);
	int width=(int)lua_tointeger(L,8);
	int height=(int)lua_tointeger(L,9);

	::glCopyTexSubImage3D(target, level, xoffset, yoffset, zoffset, x, y, width, height);

	return 0;
}

// void glActiveTexture(unsigned int texture)
static int _bind_glActiveTexture(lua_State *L) {
	if (!_lg_typecheck_glActiveTexture(L)) {
		luaL_error(L, "luna typecheck failed in void glActiveTexture(unsigned int texture) function, expected prototype:\nvoid glActiveTexture(unsigned int texture)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int texture=(unsigned int)lua_tointeger(L,1);

	::glActiveTexture(texture);

	return 0;
}

// void glSampleCoverage(float value, unsigned char invert)
static int _bind_glSampleCoverage(lua_State *L) {
	if (!_lg_typecheck_glSampleCoverage(L)) {
		luaL_error(L, "luna typecheck failed in void glSampleCoverage(float value, unsigned char invert) function, expected prototype:\nvoid glSampleCoverage(float value, unsigned char invert)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	float value=(float)lua_tonumber(L,1);
	unsigned char invert = (unsigned char)(lua_tointeger(L,2));

	::glSampleCoverage(value, invert);

	return 0;
}

// void glCompressedTexImage3D(unsigned int target, int level, unsigned int internalformat, int width, int height, int depth, int border, int imageSize, const void * data)
static int _bind_glCompressedTexImage3D(lua_State *L) {
	if (!_lg_typecheck_glCompressedTexImage3D(L)) {
		luaL_error(L, "luna typecheck failed in void glCompressedTexImage3D(unsigned int target, int level, unsigned int internalformat, int width, int height, int depth, int border, int imageSize, const void * data) function, expected prototype:\nvoid glCompressedTexImage3D(unsigned int target, int level, unsigned int internalformat, int width, int height, int depth, int border, int imageSize, const void * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	int level=(int)lua_tointeger(L,2);
	unsigned int internalformat=(unsigned int)lua_tointeger(L,3);
	int width=(int)lua_tointeger(L,4);
	int height=(int)lua_tointeger(L,5);
	int depth=(int)lua_tointeger(L,6);
	int border=(int)lua_tointeger(L,7);
	int imageSize=(int)lua_tointeger(L,8);
	const void* data=(Luna< void >::check(L,9));

	::glCompressedTexImage3D(target, level, internalformat, width, height, depth, border, imageSize, data);

	return 0;
}

// void glCompressedTexImage2D(unsigned int target, int level, unsigned int internalformat, int width, int height, int border, int imageSize, const void * data)
static int _bind_glCompressedTexImage2D(lua_State *L) {
	if (!_lg_typecheck_glCompressedTexImage2D(L)) {
		luaL_error(L, "luna typecheck failed in void glCompressedTexImage2D(unsigned int target, int level, unsigned int internalformat, int width, int height, int border, int imageSize, const void * data) function, expected prototype:\nvoid glCompressedTexImage2D(unsigned int target, int level, unsigned int internalformat, int width, int height, int border, int imageSize, const void * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	int level=(int)lua_tointeger(L,2);
	unsigned int internalformat=(unsigned int)lua_tointeger(L,3);
	int width=(int)lua_tointeger(L,4);
	int height=(int)lua_tointeger(L,5);
	int border=(int)lua_tointeger(L,6);
	int imageSize=(int)lua_tointeger(L,7);
	const void* data=(Luna< void >::check(L,8));

	::glCompressedTexImage2D(target, level, internalformat, width, height, border, imageSize, data);

	return 0;
}

// void glCompressedTexImage1D(unsigned int target, int level, unsigned int internalformat, int width, int border, int imageSize, const void * data)
static int _bind_glCompressedTexImage1D(lua_State *L) {
	if (!_lg_typecheck_glCompressedTexImage1D(L)) {
		luaL_error(L, "luna typecheck failed in void glCompressedTexImage1D(unsigned int target, int level, unsigned int internalformat, int width, int border, int imageSize, const void * data) function, expected prototype:\nvoid glCompressedTexImage1D(unsigned int target, int level, unsigned int internalformat, int width, int border, int imageSize, const void * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	int level=(int)lua_tointeger(L,2);
	unsigned int internalformat=(unsigned int)lua_tointeger(L,3);
	int width=(int)lua_tointeger(L,4);
	int border=(int)lua_tointeger(L,5);
	int imageSize=(int)lua_tointeger(L,6);
	const void* data=(Luna< void >::check(L,7));

	::glCompressedTexImage1D(target, level, internalformat, width, border, imageSize, data);

	return 0;
}

// void glCompressedTexSubImage3D(unsigned int target, int level, int xoffset, int yoffset, int zoffset, int width, int height, int depth, unsigned int format, int imageSize, const void * data)
static int _bind_glCompressedTexSubImage3D(lua_State *L) {
	if (!_lg_typecheck_glCompressedTexSubImage3D(L)) {
		luaL_error(L, "luna typecheck failed in void glCompressedTexSubImage3D(unsigned int target, int level, int xoffset, int yoffset, int zoffset, int width, int height, int depth, unsigned int format, int imageSize, const void * data) function, expected prototype:\nvoid glCompressedTexSubImage3D(unsigned int target, int level, int xoffset, int yoffset, int zoffset, int width, int height, int depth, unsigned int format, int imageSize, const void * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	int level=(int)lua_tointeger(L,2);
	int xoffset=(int)lua_tointeger(L,3);
	int yoffset=(int)lua_tointeger(L,4);
	int zoffset=(int)lua_tointeger(L,5);
	int width=(int)lua_tointeger(L,6);
	int height=(int)lua_tointeger(L,7);
	int depth=(int)lua_tointeger(L,8);
	unsigned int format=(unsigned int)lua_tointeger(L,9);
	int imageSize=(int)lua_tointeger(L,10);
	const void* data=(Luna< void >::check(L,11));

	::glCompressedTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);

	return 0;
}

// void glCompressedTexSubImage2D(unsigned int target, int level, int xoffset, int yoffset, int width, int height, unsigned int format, int imageSize, const void * data)
static int _bind_glCompressedTexSubImage2D(lua_State *L) {
	if (!_lg_typecheck_glCompressedTexSubImage2D(L)) {
		luaL_error(L, "luna typecheck failed in void glCompressedTexSubImage2D(unsigned int target, int level, int xoffset, int yoffset, int width, int height, unsigned int format, int imageSize, const void * data) function, expected prototype:\nvoid glCompressedTexSubImage2D(unsigned int target, int level, int xoffset, int yoffset, int width, int height, unsigned int format, int imageSize, const void * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	int level=(int)lua_tointeger(L,2);
	int xoffset=(int)lua_tointeger(L,3);
	int yoffset=(int)lua_tointeger(L,4);
	int width=(int)lua_tointeger(L,5);
	int height=(int)lua_tointeger(L,6);
	unsigned int format=(unsigned int)lua_tointeger(L,7);
	int imageSize=(int)lua_tointeger(L,8);
	const void* data=(Luna< void >::check(L,9));

	::glCompressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, imageSize, data);

	return 0;
}

// void glCompressedTexSubImage1D(unsigned int target, int level, int xoffset, int width, unsigned int format, int imageSize, const void * data)
static int _bind_glCompressedTexSubImage1D(lua_State *L) {
	if (!_lg_typecheck_glCompressedTexSubImage1D(L)) {
		luaL_error(L, "luna typecheck failed in void glCompressedTexSubImage1D(unsigned int target, int level, int xoffset, int width, unsigned int format, int imageSize, const void * data) function, expected prototype:\nvoid glCompressedTexSubImage1D(unsigned int target, int level, int xoffset, int width, unsigned int format, int imageSize, const void * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	int level=(int)lua_tointeger(L,2);
	int xoffset=(int)lua_tointeger(L,3);
	int width=(int)lua_tointeger(L,4);
	unsigned int format=(unsigned int)lua_tointeger(L,5);
	int imageSize=(int)lua_tointeger(L,6);
	const void* data=(Luna< void >::check(L,7));

	::glCompressedTexSubImage1D(target, level, xoffset, width, format, imageSize, data);

	return 0;
}

// void glGetCompressedTexImage(unsigned int target, int level, void * img)
static int _bind_glGetCompressedTexImage(lua_State *L) {
	if (!_lg_typecheck_glGetCompressedTexImage(L)) {
		luaL_error(L, "luna typecheck failed in void glGetCompressedTexImage(unsigned int target, int level, void * img) function, expected prototype:\nvoid glGetCompressedTexImage(unsigned int target, int level, void * img)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	int level=(int)lua_tointeger(L,2);
	void* img=(Luna< void >::check(L,3));

	::glGetCompressedTexImage(target, level, img);

	return 0;
}

// void glBlendFuncSeparate(unsigned int sfactorRGB, unsigned int dfactorRGB, unsigned int sfactorAlpha, unsigned int dfactorAlpha)
static int _bind_glBlendFuncSeparate(lua_State *L) {
	if (!_lg_typecheck_glBlendFuncSeparate(L)) {
		luaL_error(L, "luna typecheck failed in void glBlendFuncSeparate(unsigned int sfactorRGB, unsigned int dfactorRGB, unsigned int sfactorAlpha, unsigned int dfactorAlpha) function, expected prototype:\nvoid glBlendFuncSeparate(unsigned int sfactorRGB, unsigned int dfactorRGB, unsigned int sfactorAlpha, unsigned int dfactorAlpha)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int sfactorRGB=(unsigned int)lua_tointeger(L,1);
	unsigned int dfactorRGB=(unsigned int)lua_tointeger(L,2);
	unsigned int sfactorAlpha=(unsigned int)lua_tointeger(L,3);
	unsigned int dfactorAlpha=(unsigned int)lua_tointeger(L,4);

	::glBlendFuncSeparate(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);

	return 0;
}

// void glMultiDrawArrays(unsigned int mode, const int * first, const int * count, int drawcount)
static int _bind_glMultiDrawArrays(lua_State *L) {
	if (!_lg_typecheck_glMultiDrawArrays(L)) {
		luaL_error(L, "luna typecheck failed in void glMultiDrawArrays(unsigned int mode, const int * first, const int * count, int drawcount) function, expected prototype:\nvoid glMultiDrawArrays(unsigned int mode, const int * first, const int * count, int drawcount)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int mode=(unsigned int)lua_tointeger(L,1);
	const int* first=(const int*)Luna< void >::check(L,2);
	const int* count=(const int*)Luna< void >::check(L,3);
	int drawcount=(int)lua_tointeger(L,4);

	::glMultiDrawArrays(mode, first, count, drawcount);

	return 0;
}

// void glPointParameterf(unsigned int pname, float param)
static int _bind_glPointParameterf(lua_State *L) {
	if (!_lg_typecheck_glPointParameterf(L)) {
		luaL_error(L, "luna typecheck failed in void glPointParameterf(unsigned int pname, float param) function, expected prototype:\nvoid glPointParameterf(unsigned int pname, float param)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int pname=(unsigned int)lua_tointeger(L,1);
	float param=(float)lua_tonumber(L,2);

	::glPointParameterf(pname, param);

	return 0;
}

// void glPointParameterfv(unsigned int pname, const float * params)
static int _bind_glPointParameterfv(lua_State *L) {
	if (!_lg_typecheck_glPointParameterfv(L)) {
		luaL_error(L, "luna typecheck failed in void glPointParameterfv(unsigned int pname, const float * params) function, expected prototype:\nvoid glPointParameterfv(unsigned int pname, const float * params)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int pname=(unsigned int)lua_tointeger(L,1);
	const float* params=(const float*)Luna< void >::check(L,2);

	::glPointParameterfv(pname, params);

	return 0;
}

// void glPointParameteri(unsigned int pname, int param)
static int _bind_glPointParameteri(lua_State *L) {
	if (!_lg_typecheck_glPointParameteri(L)) {
		luaL_error(L, "luna typecheck failed in void glPointParameteri(unsigned int pname, int param) function, expected prototype:\nvoid glPointParameteri(unsigned int pname, int param)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int pname=(unsigned int)lua_tointeger(L,1);
	int param=(int)lua_tointeger(L,2);

	::glPointParameteri(pname, param);

	return 0;
}

// void glPointParameteriv(unsigned int pname, const int * params)
static int _bind_glPointParameteriv(lua_State *L) {
	if (!_lg_typecheck_glPointParameteriv(L)) {
		luaL_error(L, "luna typecheck failed in void glPointParameteriv(unsigned int pname, const int * params) function, expected prototype:\nvoid glPointParameteriv(unsigned int pname, const int * params)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int pname=(unsigned int)lua_tointeger(L,1);
	const int* params=(const int*)Luna< void >::check(L,2);

	::glPointParameteriv(pname, params);

	return 0;
}

// void glGenQueries(int n, unsigned int * ids)
static int _bind_glGenQueries(lua_State *L) {
	if (!_lg_typecheck_glGenQueries(L)) {
		luaL_error(L, "luna typecheck failed in void glGenQueries(int n, unsigned int * ids) function, expected prototype:\nvoid glGenQueries(int n, unsigned int * ids)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int n=(int)lua_tointeger(L,1);
	unsigned int* ids=(unsigned int*)Luna< void >::check(L,2);

	::glGenQueries(n, ids);

	return 0;
}

// void glDeleteQueries(int n, const unsigned int * ids)
static int _bind_glDeleteQueries(lua_State *L) {
	if (!_lg_typecheck_glDeleteQueries(L)) {
		luaL_error(L, "luna typecheck failed in void glDeleteQueries(int n, const unsigned int * ids) function, expected prototype:\nvoid glDeleteQueries(int n, const unsigned int * ids)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int n=(int)lua_tointeger(L,1);
	const unsigned int* ids=(const unsigned int*)Luna< void >::check(L,2);

	::glDeleteQueries(n, ids);

	return 0;
}

// unsigned char glIsQuery(unsigned int id)
static int _bind_glIsQuery(lua_State *L) {
	if (!_lg_typecheck_glIsQuery(L)) {
		luaL_error(L, "luna typecheck failed in unsigned char glIsQuery(unsigned int id) function, expected prototype:\nunsigned char glIsQuery(unsigned int id)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int id=(unsigned int)lua_tointeger(L,1);

	unsigned char lret = ::glIsQuery(id);
	lua_pushnumber(L,(int)lret);

	return 1;
}

// void glBeginQuery(unsigned int target, unsigned int id)
static int _bind_glBeginQuery(lua_State *L) {
	if (!_lg_typecheck_glBeginQuery(L)) {
		luaL_error(L, "luna typecheck failed in void glBeginQuery(unsigned int target, unsigned int id) function, expected prototype:\nvoid glBeginQuery(unsigned int target, unsigned int id)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	unsigned int id=(unsigned int)lua_tointeger(L,2);

	::glBeginQuery(target, id);

	return 0;
}

// void glEndQuery(unsigned int target)
static int _bind_glEndQuery(lua_State *L) {
	if (!_lg_typecheck_glEndQuery(L)) {
		luaL_error(L, "luna typecheck failed in void glEndQuery(unsigned int target) function, expected prototype:\nvoid glEndQuery(unsigned int target)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);

	::glEndQuery(target);

	return 0;
}

// void glGetQueryiv(unsigned int target, unsigned int pname, int * params)
static int _bind_glGetQueryiv(lua_State *L) {
	if (!_lg_typecheck_glGetQueryiv(L)) {
		luaL_error(L, "luna typecheck failed in void glGetQueryiv(unsigned int target, unsigned int pname, int * params) function, expected prototype:\nvoid glGetQueryiv(unsigned int target, unsigned int pname, int * params)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	unsigned int pname=(unsigned int)lua_tointeger(L,2);
	int* params=(int*)Luna< void >::check(L,3);

	::glGetQueryiv(target, pname, params);

	return 0;
}

// void glGetQueryObjectiv(unsigned int id, unsigned int pname, int * params)
static int _bind_glGetQueryObjectiv(lua_State *L) {
	if (!_lg_typecheck_glGetQueryObjectiv(L)) {
		luaL_error(L, "luna typecheck failed in void glGetQueryObjectiv(unsigned int id, unsigned int pname, int * params) function, expected prototype:\nvoid glGetQueryObjectiv(unsigned int id, unsigned int pname, int * params)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int id=(unsigned int)lua_tointeger(L,1);
	unsigned int pname=(unsigned int)lua_tointeger(L,2);
	int* params=(int*)Luna< void >::check(L,3);

	::glGetQueryObjectiv(id, pname, params);

	return 0;
}

// void glGetQueryObjectuiv(unsigned int id, unsigned int pname, unsigned int * params)
static int _bind_glGetQueryObjectuiv(lua_State *L) {
	if (!_lg_typecheck_glGetQueryObjectuiv(L)) {
		luaL_error(L, "luna typecheck failed in void glGetQueryObjectuiv(unsigned int id, unsigned int pname, unsigned int * params) function, expected prototype:\nvoid glGetQueryObjectuiv(unsigned int id, unsigned int pname, unsigned int * params)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int id=(unsigned int)lua_tointeger(L,1);
	unsigned int pname=(unsigned int)lua_tointeger(L,2);
	unsigned int* params=(unsigned int*)Luna< void >::check(L,3);

	::glGetQueryObjectuiv(id, pname, params);

	return 0;
}

// void glBindBuffer(unsigned int target, unsigned int buffer)
static int _bind_glBindBuffer(lua_State *L) {
	if (!_lg_typecheck_glBindBuffer(L)) {
		luaL_error(L, "luna typecheck failed in void glBindBuffer(unsigned int target, unsigned int buffer) function, expected prototype:\nvoid glBindBuffer(unsigned int target, unsigned int buffer)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	unsigned int buffer=(unsigned int)lua_tointeger(L,2);

	::glBindBuffer(target, buffer);

	return 0;
}

// void glDeleteBuffers(int n, const unsigned int * buffers)
static int _bind_glDeleteBuffers(lua_State *L) {
	if (!_lg_typecheck_glDeleteBuffers(L)) {
		luaL_error(L, "luna typecheck failed in void glDeleteBuffers(int n, const unsigned int * buffers) function, expected prototype:\nvoid glDeleteBuffers(int n, const unsigned int * buffers)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int n=(int)lua_tointeger(L,1);
	const unsigned int* buffers=(const unsigned int*)Luna< void >::check(L,2);

	::glDeleteBuffers(n, buffers);

	return 0;
}

// void glGenBuffers(int n, unsigned int * buffers)
static int _bind_glGenBuffers(lua_State *L) {
	if (!_lg_typecheck_glGenBuffers(L)) {
		luaL_error(L, "luna typecheck failed in void glGenBuffers(int n, unsigned int * buffers) function, expected prototype:\nvoid glGenBuffers(int n, unsigned int * buffers)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int n=(int)lua_tointeger(L,1);
	unsigned int* buffers=(unsigned int*)Luna< void >::check(L,2);

	::glGenBuffers(n, buffers);

	return 0;
}

// unsigned char glIsBuffer(unsigned int buffer)
static int _bind_glIsBuffer(lua_State *L) {
	if (!_lg_typecheck_glIsBuffer(L)) {
		luaL_error(L, "luna typecheck failed in unsigned char glIsBuffer(unsigned int buffer) function, expected prototype:\nunsigned char glIsBuffer(unsigned int buffer)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int buffer=(unsigned int)lua_tointeger(L,1);

	unsigned char lret = ::glIsBuffer(buffer);
	lua_pushnumber(L,(int)lret);

	return 1;
}

// void glBufferData(unsigned int target, __int64 size, const void * data, unsigned int usage)
static int _bind_glBufferData(lua_State *L) {
	if (!_lg_typecheck_glBufferData(L)) {
		luaL_error(L, "luna typecheck failed in void glBufferData(unsigned int target, __int64 size, const void * data, unsigned int usage) function, expected prototype:\nvoid glBufferData(unsigned int target, __int64 size, const void * data, unsigned int usage)\nClass arguments details:\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	__int64* size_ptr=(Luna< __int64 >::check(L,2));
	if( !size_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg size in glBufferData function");
	}
	__int64 size=*size_ptr;
	const void* data=(Luna< void >::check(L,3));
	unsigned int usage=(unsigned int)lua_tointeger(L,4);

	::glBufferData(target, size, data, usage);

	return 0;
}

// void glBufferSubData(unsigned int target, __int64 offset, __int64 size, const void * data)
static int _bind_glBufferSubData(lua_State *L) {
	if (!_lg_typecheck_glBufferSubData(L)) {
		luaL_error(L, "luna typecheck failed in void glBufferSubData(unsigned int target, __int64 offset, __int64 size, const void * data) function, expected prototype:\nvoid glBufferSubData(unsigned int target, __int64 offset, __int64 size, const void * data)\nClass arguments details:\narg 2 ID = [unknown]\narg 3 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	__int64* offset_ptr=(Luna< __int64 >::check(L,2));
	if( !offset_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg offset in glBufferSubData function");
	}
	__int64 offset=*offset_ptr;
	__int64* size_ptr=(Luna< __int64 >::check(L,3));
	if( !size_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg size in glBufferSubData function");
	}
	__int64 size=*size_ptr;
	const void* data=(Luna< void >::check(L,4));

	::glBufferSubData(target, offset, size, data);

	return 0;
}

// void glGetBufferSubData(unsigned int target, __int64 offset, __int64 size, void * data)
static int _bind_glGetBufferSubData(lua_State *L) {
	if (!_lg_typecheck_glGetBufferSubData(L)) {
		luaL_error(L, "luna typecheck failed in void glGetBufferSubData(unsigned int target, __int64 offset, __int64 size, void * data) function, expected prototype:\nvoid glGetBufferSubData(unsigned int target, __int64 offset, __int64 size, void * data)\nClass arguments details:\narg 2 ID = [unknown]\narg 3 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	__int64* offset_ptr=(Luna< __int64 >::check(L,2));
	if( !offset_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg offset in glGetBufferSubData function");
	}
	__int64 offset=*offset_ptr;
	__int64* size_ptr=(Luna< __int64 >::check(L,3));
	if( !size_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg size in glGetBufferSubData function");
	}
	__int64 size=*size_ptr;
	void* data=(Luna< void >::check(L,4));

	::glGetBufferSubData(target, offset, size, data);

	return 0;
}

// void * glMapBuffer(unsigned int target, unsigned int access)
static int _bind_glMapBuffer(lua_State *L) {
	if (!_lg_typecheck_glMapBuffer(L)) {
		luaL_error(L, "luna typecheck failed in void * glMapBuffer(unsigned int target, unsigned int access) function, expected prototype:\nvoid * glMapBuffer(unsigned int target, unsigned int access)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	unsigned int access=(unsigned int)lua_tointeger(L,2);

	void * lret = ::glMapBuffer(target, access);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< void >::push(L,lret,false);

	return 1;
}

// unsigned char glUnmapBuffer(unsigned int target)
static int _bind_glUnmapBuffer(lua_State *L) {
	if (!_lg_typecheck_glUnmapBuffer(L)) {
		luaL_error(L, "luna typecheck failed in unsigned char glUnmapBuffer(unsigned int target) function, expected prototype:\nunsigned char glUnmapBuffer(unsigned int target)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);

	unsigned char lret = ::glUnmapBuffer(target);
	lua_pushnumber(L,(int)lret);

	return 1;
}

// void glGetBufferParameteriv(unsigned int target, unsigned int pname, int * params)
static int _bind_glGetBufferParameteriv(lua_State *L) {
	if (!_lg_typecheck_glGetBufferParameteriv(L)) {
		luaL_error(L, "luna typecheck failed in void glGetBufferParameteriv(unsigned int target, unsigned int pname, int * params) function, expected prototype:\nvoid glGetBufferParameteriv(unsigned int target, unsigned int pname, int * params)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	unsigned int pname=(unsigned int)lua_tointeger(L,2);
	int* params=(int*)Luna< void >::check(L,3);

	::glGetBufferParameteriv(target, pname, params);

	return 0;
}

// void glBlendEquationSeparate(unsigned int modeRGB, unsigned int modeAlpha)
static int _bind_glBlendEquationSeparate(lua_State *L) {
	if (!_lg_typecheck_glBlendEquationSeparate(L)) {
		luaL_error(L, "luna typecheck failed in void glBlendEquationSeparate(unsigned int modeRGB, unsigned int modeAlpha) function, expected prototype:\nvoid glBlendEquationSeparate(unsigned int modeRGB, unsigned int modeAlpha)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int modeRGB=(unsigned int)lua_tointeger(L,1);
	unsigned int modeAlpha=(unsigned int)lua_tointeger(L,2);

	::glBlendEquationSeparate(modeRGB, modeAlpha);

	return 0;
}

// void glDrawBuffers(int n, const unsigned int * bufs)
static int _bind_glDrawBuffers(lua_State *L) {
	if (!_lg_typecheck_glDrawBuffers(L)) {
		luaL_error(L, "luna typecheck failed in void glDrawBuffers(int n, const unsigned int * bufs) function, expected prototype:\nvoid glDrawBuffers(int n, const unsigned int * bufs)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int n=(int)lua_tointeger(L,1);
	const unsigned int* bufs=(const unsigned int*)Luna< void >::check(L,2);

	::glDrawBuffers(n, bufs);

	return 0;
}

// void glStencilOpSeparate(unsigned int face, unsigned int sfail, unsigned int dpfail, unsigned int dppass)
static int _bind_glStencilOpSeparate(lua_State *L) {
	if (!_lg_typecheck_glStencilOpSeparate(L)) {
		luaL_error(L, "luna typecheck failed in void glStencilOpSeparate(unsigned int face, unsigned int sfail, unsigned int dpfail, unsigned int dppass) function, expected prototype:\nvoid glStencilOpSeparate(unsigned int face, unsigned int sfail, unsigned int dpfail, unsigned int dppass)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int face=(unsigned int)lua_tointeger(L,1);
	unsigned int sfail=(unsigned int)lua_tointeger(L,2);
	unsigned int dpfail=(unsigned int)lua_tointeger(L,3);
	unsigned int dppass=(unsigned int)lua_tointeger(L,4);

	::glStencilOpSeparate(face, sfail, dpfail, dppass);

	return 0;
}

// void glStencilFuncSeparate(unsigned int face, unsigned int func, int ref, unsigned int mask)
static int _bind_glStencilFuncSeparate(lua_State *L) {
	if (!_lg_typecheck_glStencilFuncSeparate(L)) {
		luaL_error(L, "luna typecheck failed in void glStencilFuncSeparate(unsigned int face, unsigned int func, int ref, unsigned int mask) function, expected prototype:\nvoid glStencilFuncSeparate(unsigned int face, unsigned int func, int ref, unsigned int mask)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int face=(unsigned int)lua_tointeger(L,1);
	unsigned int func=(unsigned int)lua_tointeger(L,2);
	int ref=(int)lua_tointeger(L,3);
	unsigned int mask=(unsigned int)lua_tointeger(L,4);

	::glStencilFuncSeparate(face, func, ref, mask);

	return 0;
}

// void glStencilMaskSeparate(unsigned int face, unsigned int mask)
static int _bind_glStencilMaskSeparate(lua_State *L) {
	if (!_lg_typecheck_glStencilMaskSeparate(L)) {
		luaL_error(L, "luna typecheck failed in void glStencilMaskSeparate(unsigned int face, unsigned int mask) function, expected prototype:\nvoid glStencilMaskSeparate(unsigned int face, unsigned int mask)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int face=(unsigned int)lua_tointeger(L,1);
	unsigned int mask=(unsigned int)lua_tointeger(L,2);

	::glStencilMaskSeparate(face, mask);

	return 0;
}

// void glAttachShader(unsigned int program, unsigned int shader)
static int _bind_glAttachShader(lua_State *L) {
	if (!_lg_typecheck_glAttachShader(L)) {
		luaL_error(L, "luna typecheck failed in void glAttachShader(unsigned int program, unsigned int shader) function, expected prototype:\nvoid glAttachShader(unsigned int program, unsigned int shader)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	unsigned int shader=(unsigned int)lua_tointeger(L,2);

	::glAttachShader(program, shader);

	return 0;
}

// void glBindAttribLocation(unsigned int program, unsigned int index, const char * name)
static int _bind_glBindAttribLocation(lua_State *L) {
	if (!_lg_typecheck_glBindAttribLocation(L)) {
		luaL_error(L, "luna typecheck failed in void glBindAttribLocation(unsigned int program, unsigned int index, const char * name) function, expected prototype:\nvoid glBindAttribLocation(unsigned int program, unsigned int index, const char * name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	unsigned int index=(unsigned int)lua_tointeger(L,2);
	const char * name=(const char *)lua_tostring(L,3);

	::glBindAttribLocation(program, index, name);

	return 0;
}

// void glCompileShader(unsigned int shader)
static int _bind_glCompileShader(lua_State *L) {
	if (!_lg_typecheck_glCompileShader(L)) {
		luaL_error(L, "luna typecheck failed in void glCompileShader(unsigned int shader) function, expected prototype:\nvoid glCompileShader(unsigned int shader)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int shader=(unsigned int)lua_tointeger(L,1);

	::glCompileShader(shader);

	return 0;
}

// unsigned int glCreateProgram()
static int _bind_glCreateProgram(lua_State *L) {
	if (!_lg_typecheck_glCreateProgram(L)) {
		luaL_error(L, "luna typecheck failed in unsigned int glCreateProgram() function, expected prototype:\nunsigned int glCreateProgram()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	unsigned int lret = ::glCreateProgram();
	lua_pushnumber(L,lret);

	return 1;
}

// unsigned int glCreateShader(unsigned int type)
static int _bind_glCreateShader(lua_State *L) {
	if (!_lg_typecheck_glCreateShader(L)) {
		luaL_error(L, "luna typecheck failed in unsigned int glCreateShader(unsigned int type) function, expected prototype:\nunsigned int glCreateShader(unsigned int type)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int type=(unsigned int)lua_tointeger(L,1);

	unsigned int lret = ::glCreateShader(type);
	lua_pushnumber(L,lret);

	return 1;
}

// void glDeleteProgram(unsigned int program)
static int _bind_glDeleteProgram(lua_State *L) {
	if (!_lg_typecheck_glDeleteProgram(L)) {
		luaL_error(L, "luna typecheck failed in void glDeleteProgram(unsigned int program) function, expected prototype:\nvoid glDeleteProgram(unsigned int program)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);

	::glDeleteProgram(program);

	return 0;
}

// void glDeleteShader(unsigned int shader)
static int _bind_glDeleteShader(lua_State *L) {
	if (!_lg_typecheck_glDeleteShader(L)) {
		luaL_error(L, "luna typecheck failed in void glDeleteShader(unsigned int shader) function, expected prototype:\nvoid glDeleteShader(unsigned int shader)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int shader=(unsigned int)lua_tointeger(L,1);

	::glDeleteShader(shader);

	return 0;
}

// void glDetachShader(unsigned int program, unsigned int shader)
static int _bind_glDetachShader(lua_State *L) {
	if (!_lg_typecheck_glDetachShader(L)) {
		luaL_error(L, "luna typecheck failed in void glDetachShader(unsigned int program, unsigned int shader) function, expected prototype:\nvoid glDetachShader(unsigned int program, unsigned int shader)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	unsigned int shader=(unsigned int)lua_tointeger(L,2);

	::glDetachShader(program, shader);

	return 0;
}

// void glDisableVertexAttribArray(unsigned int index)
static int _bind_glDisableVertexAttribArray(lua_State *L) {
	if (!_lg_typecheck_glDisableVertexAttribArray(L)) {
		luaL_error(L, "luna typecheck failed in void glDisableVertexAttribArray(unsigned int index) function, expected prototype:\nvoid glDisableVertexAttribArray(unsigned int index)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);

	::glDisableVertexAttribArray(index);

	return 0;
}

// void glEnableVertexAttribArray(unsigned int index)
static int _bind_glEnableVertexAttribArray(lua_State *L) {
	if (!_lg_typecheck_glEnableVertexAttribArray(L)) {
		luaL_error(L, "luna typecheck failed in void glEnableVertexAttribArray(unsigned int index) function, expected prototype:\nvoid glEnableVertexAttribArray(unsigned int index)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);

	::glEnableVertexAttribArray(index);

	return 0;
}

// void glGetActiveAttrib(unsigned int program, unsigned int index, int bufSize, int * length, int * size, unsigned int * type, char * name)
static int _bind_glGetActiveAttrib(lua_State *L) {
	if (!_lg_typecheck_glGetActiveAttrib(L)) {
		luaL_error(L, "luna typecheck failed in void glGetActiveAttrib(unsigned int program, unsigned int index, int bufSize, int * length, int * size, unsigned int * type, char * name) function, expected prototype:\nvoid glGetActiveAttrib(unsigned int program, unsigned int index, int bufSize, int * length, int * size, unsigned int * type, char * name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	unsigned int index=(unsigned int)lua_tointeger(L,2);
	int bufSize=(int)lua_tointeger(L,3);
	int* length=(int*)Luna< void >::check(L,4);
	int* size=(int*)Luna< void >::check(L,5);
	unsigned int* type=(unsigned int*)Luna< void >::check(L,6);
	char* name=(char*)Luna< void >::check(L,7);

	::glGetActiveAttrib(program, index, bufSize, length, size, type, name);

	return 0;
}

// void glGetActiveUniform(unsigned int program, unsigned int index, int bufSize, int * length, int * size, unsigned int * type, char * name)
static int _bind_glGetActiveUniform(lua_State *L) {
	if (!_lg_typecheck_glGetActiveUniform(L)) {
		luaL_error(L, "luna typecheck failed in void glGetActiveUniform(unsigned int program, unsigned int index, int bufSize, int * length, int * size, unsigned int * type, char * name) function, expected prototype:\nvoid glGetActiveUniform(unsigned int program, unsigned int index, int bufSize, int * length, int * size, unsigned int * type, char * name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	unsigned int index=(unsigned int)lua_tointeger(L,2);
	int bufSize=(int)lua_tointeger(L,3);
	int* length=(int*)Luna< void >::check(L,4);
	int* size=(int*)Luna< void >::check(L,5);
	unsigned int* type=(unsigned int*)Luna< void >::check(L,6);
	char* name=(char*)Luna< void >::check(L,7);

	::glGetActiveUniform(program, index, bufSize, length, size, type, name);

	return 0;
}

// void glGetAttachedShaders(unsigned int program, int maxCount, int * count, unsigned int * obj)
static int _bind_glGetAttachedShaders(lua_State *L) {
	if (!_lg_typecheck_glGetAttachedShaders(L)) {
		luaL_error(L, "luna typecheck failed in void glGetAttachedShaders(unsigned int program, int maxCount, int * count, unsigned int * obj) function, expected prototype:\nvoid glGetAttachedShaders(unsigned int program, int maxCount, int * count, unsigned int * obj)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	int maxCount=(int)lua_tointeger(L,2);
	int* count=(int*)Luna< void >::check(L,3);
	unsigned int* obj=(unsigned int*)Luna< void >::check(L,4);

	::glGetAttachedShaders(program, maxCount, count, obj);

	return 0;
}

// int glGetAttribLocation(unsigned int program, const char * name)
static int _bind_glGetAttribLocation(lua_State *L) {
	if (!_lg_typecheck_glGetAttribLocation(L)) {
		luaL_error(L, "luna typecheck failed in int glGetAttribLocation(unsigned int program, const char * name) function, expected prototype:\nint glGetAttribLocation(unsigned int program, const char * name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	const char * name=(const char *)lua_tostring(L,2);

	int lret = ::glGetAttribLocation(program, name);
	lua_pushnumber(L,lret);

	return 1;
}

// void glGetProgramiv(unsigned int program, unsigned int pname, int * params)
static int _bind_glGetProgramiv(lua_State *L) {
	if (!_lg_typecheck_glGetProgramiv(L)) {
		luaL_error(L, "luna typecheck failed in void glGetProgramiv(unsigned int program, unsigned int pname, int * params) function, expected prototype:\nvoid glGetProgramiv(unsigned int program, unsigned int pname, int * params)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	unsigned int pname=(unsigned int)lua_tointeger(L,2);
	int* params=(int*)Luna< void >::check(L,3);

	::glGetProgramiv(program, pname, params);

	return 0;
}

// void glGetProgramInfoLog(unsigned int program, int bufSize, int * length, char * infoLog)
static int _bind_glGetProgramInfoLog(lua_State *L) {
	if (!_lg_typecheck_glGetProgramInfoLog(L)) {
		luaL_error(L, "luna typecheck failed in void glGetProgramInfoLog(unsigned int program, int bufSize, int * length, char * infoLog) function, expected prototype:\nvoid glGetProgramInfoLog(unsigned int program, int bufSize, int * length, char * infoLog)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	int bufSize=(int)lua_tointeger(L,2);
	int* length=(int*)Luna< void >::check(L,3);
	char* infoLog=(char*)Luna< void >::check(L,4);

	::glGetProgramInfoLog(program, bufSize, length, infoLog);

	return 0;
}

// void glGetShaderiv(unsigned int shader, unsigned int pname, int * params)
static int _bind_glGetShaderiv(lua_State *L) {
	if (!_lg_typecheck_glGetShaderiv(L)) {
		luaL_error(L, "luna typecheck failed in void glGetShaderiv(unsigned int shader, unsigned int pname, int * params) function, expected prototype:\nvoid glGetShaderiv(unsigned int shader, unsigned int pname, int * params)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int shader=(unsigned int)lua_tointeger(L,1);
	unsigned int pname=(unsigned int)lua_tointeger(L,2);
	int* params=(int*)Luna< void >::check(L,3);

	::glGetShaderiv(shader, pname, params);

	return 0;
}

// void glGetShaderInfoLog(unsigned int shader, int bufSize, int * length, char * infoLog)
static int _bind_glGetShaderInfoLog(lua_State *L) {
	if (!_lg_typecheck_glGetShaderInfoLog(L)) {
		luaL_error(L, "luna typecheck failed in void glGetShaderInfoLog(unsigned int shader, int bufSize, int * length, char * infoLog) function, expected prototype:\nvoid glGetShaderInfoLog(unsigned int shader, int bufSize, int * length, char * infoLog)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int shader=(unsigned int)lua_tointeger(L,1);
	int bufSize=(int)lua_tointeger(L,2);
	int* length=(int*)Luna< void >::check(L,3);
	char* infoLog=(char*)Luna< void >::check(L,4);

	::glGetShaderInfoLog(shader, bufSize, length, infoLog);

	return 0;
}

// void glGetShaderSource(unsigned int shader, int bufSize, int * length, char * source)
static int _bind_glGetShaderSource(lua_State *L) {
	if (!_lg_typecheck_glGetShaderSource(L)) {
		luaL_error(L, "luna typecheck failed in void glGetShaderSource(unsigned int shader, int bufSize, int * length, char * source) function, expected prototype:\nvoid glGetShaderSource(unsigned int shader, int bufSize, int * length, char * source)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int shader=(unsigned int)lua_tointeger(L,1);
	int bufSize=(int)lua_tointeger(L,2);
	int* length=(int*)Luna< void >::check(L,3);
	char* source=(char*)Luna< void >::check(L,4);

	::glGetShaderSource(shader, bufSize, length, source);

	return 0;
}

// int glGetUniformLocation(unsigned int program, const char * name)
static int _bind_glGetUniformLocation(lua_State *L) {
	if (!_lg_typecheck_glGetUniformLocation(L)) {
		luaL_error(L, "luna typecheck failed in int glGetUniformLocation(unsigned int program, const char * name) function, expected prototype:\nint glGetUniformLocation(unsigned int program, const char * name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	const char * name=(const char *)lua_tostring(L,2);

	int lret = ::glGetUniformLocation(program, name);
	lua_pushnumber(L,lret);

	return 1;
}

// void glGetUniformfv(unsigned int program, int location, float * params)
static int _bind_glGetUniformfv(lua_State *L) {
	if (!_lg_typecheck_glGetUniformfv(L)) {
		luaL_error(L, "luna typecheck failed in void glGetUniformfv(unsigned int program, int location, float * params) function, expected prototype:\nvoid glGetUniformfv(unsigned int program, int location, float * params)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	int location=(int)lua_tointeger(L,2);
	float* params=(float*)Luna< void >::check(L,3);

	::glGetUniformfv(program, location, params);

	return 0;
}

// void glGetUniformiv(unsigned int program, int location, int * params)
static int _bind_glGetUniformiv(lua_State *L) {
	if (!_lg_typecheck_glGetUniformiv(L)) {
		luaL_error(L, "luna typecheck failed in void glGetUniformiv(unsigned int program, int location, int * params) function, expected prototype:\nvoid glGetUniformiv(unsigned int program, int location, int * params)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	int location=(int)lua_tointeger(L,2);
	int* params=(int*)Luna< void >::check(L,3);

	::glGetUniformiv(program, location, params);

	return 0;
}

// void glGetVertexAttribdv(unsigned int index, unsigned int pname, double * params)
static int _bind_glGetVertexAttribdv(lua_State *L) {
	if (!_lg_typecheck_glGetVertexAttribdv(L)) {
		luaL_error(L, "luna typecheck failed in void glGetVertexAttribdv(unsigned int index, unsigned int pname, double * params) function, expected prototype:\nvoid glGetVertexAttribdv(unsigned int index, unsigned int pname, double * params)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	unsigned int pname=(unsigned int)lua_tointeger(L,2);
	double* params=(double*)Luna< void >::check(L,3);

	::glGetVertexAttribdv(index, pname, params);

	return 0;
}

// void glGetVertexAttribfv(unsigned int index, unsigned int pname, float * params)
static int _bind_glGetVertexAttribfv(lua_State *L) {
	if (!_lg_typecheck_glGetVertexAttribfv(L)) {
		luaL_error(L, "luna typecheck failed in void glGetVertexAttribfv(unsigned int index, unsigned int pname, float * params) function, expected prototype:\nvoid glGetVertexAttribfv(unsigned int index, unsigned int pname, float * params)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	unsigned int pname=(unsigned int)lua_tointeger(L,2);
	float* params=(float*)Luna< void >::check(L,3);

	::glGetVertexAttribfv(index, pname, params);

	return 0;
}

// void glGetVertexAttribiv(unsigned int index, unsigned int pname, int * params)
static int _bind_glGetVertexAttribiv(lua_State *L) {
	if (!_lg_typecheck_glGetVertexAttribiv(L)) {
		luaL_error(L, "luna typecheck failed in void glGetVertexAttribiv(unsigned int index, unsigned int pname, int * params) function, expected prototype:\nvoid glGetVertexAttribiv(unsigned int index, unsigned int pname, int * params)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	unsigned int pname=(unsigned int)lua_tointeger(L,2);
	int* params=(int*)Luna< void >::check(L,3);

	::glGetVertexAttribiv(index, pname, params);

	return 0;
}

// unsigned char glIsProgram(unsigned int program)
static int _bind_glIsProgram(lua_State *L) {
	if (!_lg_typecheck_glIsProgram(L)) {
		luaL_error(L, "luna typecheck failed in unsigned char glIsProgram(unsigned int program) function, expected prototype:\nunsigned char glIsProgram(unsigned int program)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);

	unsigned char lret = ::glIsProgram(program);
	lua_pushnumber(L,(int)lret);

	return 1;
}

// unsigned char glIsShader(unsigned int shader)
static int _bind_glIsShader(lua_State *L) {
	if (!_lg_typecheck_glIsShader(L)) {
		luaL_error(L, "luna typecheck failed in unsigned char glIsShader(unsigned int shader) function, expected prototype:\nunsigned char glIsShader(unsigned int shader)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int shader=(unsigned int)lua_tointeger(L,1);

	unsigned char lret = ::glIsShader(shader);
	lua_pushnumber(L,(int)lret);

	return 1;
}

// void glLinkProgram(unsigned int program)
static int _bind_glLinkProgram(lua_State *L) {
	if (!_lg_typecheck_glLinkProgram(L)) {
		luaL_error(L, "luna typecheck failed in void glLinkProgram(unsigned int program) function, expected prototype:\nvoid glLinkProgram(unsigned int program)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);

	::glLinkProgram(program);

	return 0;
}

// void glUseProgram(unsigned int program)
static int _bind_glUseProgram(lua_State *L) {
	if (!_lg_typecheck_glUseProgram(L)) {
		luaL_error(L, "luna typecheck failed in void glUseProgram(unsigned int program) function, expected prototype:\nvoid glUseProgram(unsigned int program)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);

	::glUseProgram(program);

	return 0;
}

// void glUniform1f(int location, float v0)
static int _bind_glUniform1f(lua_State *L) {
	if (!_lg_typecheck_glUniform1f(L)) {
		luaL_error(L, "luna typecheck failed in void glUniform1f(int location, float v0) function, expected prototype:\nvoid glUniform1f(int location, float v0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int location=(int)lua_tointeger(L,1);
	float v0=(float)lua_tonumber(L,2);

	::glUniform1f(location, v0);

	return 0;
}

// void glUniform2f(int location, float v0, float v1)
static int _bind_glUniform2f(lua_State *L) {
	if (!_lg_typecheck_glUniform2f(L)) {
		luaL_error(L, "luna typecheck failed in void glUniform2f(int location, float v0, float v1) function, expected prototype:\nvoid glUniform2f(int location, float v0, float v1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int location=(int)lua_tointeger(L,1);
	float v0=(float)lua_tonumber(L,2);
	float v1=(float)lua_tonumber(L,3);

	::glUniform2f(location, v0, v1);

	return 0;
}

// void glUniform3f(int location, float v0, float v1, float v2)
static int _bind_glUniform3f(lua_State *L) {
	if (!_lg_typecheck_glUniform3f(L)) {
		luaL_error(L, "luna typecheck failed in void glUniform3f(int location, float v0, float v1, float v2) function, expected prototype:\nvoid glUniform3f(int location, float v0, float v1, float v2)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int location=(int)lua_tointeger(L,1);
	float v0=(float)lua_tonumber(L,2);
	float v1=(float)lua_tonumber(L,3);
	float v2=(float)lua_tonumber(L,4);

	::glUniform3f(location, v0, v1, v2);

	return 0;
}

// void glUniform4f(int location, float v0, float v1, float v2, float v3)
static int _bind_glUniform4f(lua_State *L) {
	if (!_lg_typecheck_glUniform4f(L)) {
		luaL_error(L, "luna typecheck failed in void glUniform4f(int location, float v0, float v1, float v2, float v3) function, expected prototype:\nvoid glUniform4f(int location, float v0, float v1, float v2, float v3)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int location=(int)lua_tointeger(L,1);
	float v0=(float)lua_tonumber(L,2);
	float v1=(float)lua_tonumber(L,3);
	float v2=(float)lua_tonumber(L,4);
	float v3=(float)lua_tonumber(L,5);

	::glUniform4f(location, v0, v1, v2, v3);

	return 0;
}

// void glUniform1i(int location, int v0)
static int _bind_glUniform1i(lua_State *L) {
	if (!_lg_typecheck_glUniform1i(L)) {
		luaL_error(L, "luna typecheck failed in void glUniform1i(int location, int v0) function, expected prototype:\nvoid glUniform1i(int location, int v0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int location=(int)lua_tointeger(L,1);
	int v0=(int)lua_tointeger(L,2);

	::glUniform1i(location, v0);

	return 0;
}

// void glUniform2i(int location, int v0, int v1)
static int _bind_glUniform2i(lua_State *L) {
	if (!_lg_typecheck_glUniform2i(L)) {
		luaL_error(L, "luna typecheck failed in void glUniform2i(int location, int v0, int v1) function, expected prototype:\nvoid glUniform2i(int location, int v0, int v1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int location=(int)lua_tointeger(L,1);
	int v0=(int)lua_tointeger(L,2);
	int v1=(int)lua_tointeger(L,3);

	::glUniform2i(location, v0, v1);

	return 0;
}

// void glUniform3i(int location, int v0, int v1, int v2)
static int _bind_glUniform3i(lua_State *L) {
	if (!_lg_typecheck_glUniform3i(L)) {
		luaL_error(L, "luna typecheck failed in void glUniform3i(int location, int v0, int v1, int v2) function, expected prototype:\nvoid glUniform3i(int location, int v0, int v1, int v2)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int location=(int)lua_tointeger(L,1);
	int v0=(int)lua_tointeger(L,2);
	int v1=(int)lua_tointeger(L,3);
	int v2=(int)lua_tointeger(L,4);

	::glUniform3i(location, v0, v1, v2);

	return 0;
}

// void glUniform4i(int location, int v0, int v1, int v2, int v3)
static int _bind_glUniform4i(lua_State *L) {
	if (!_lg_typecheck_glUniform4i(L)) {
		luaL_error(L, "luna typecheck failed in void glUniform4i(int location, int v0, int v1, int v2, int v3) function, expected prototype:\nvoid glUniform4i(int location, int v0, int v1, int v2, int v3)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int location=(int)lua_tointeger(L,1);
	int v0=(int)lua_tointeger(L,2);
	int v1=(int)lua_tointeger(L,3);
	int v2=(int)lua_tointeger(L,4);
	int v3=(int)lua_tointeger(L,5);

	::glUniform4i(location, v0, v1, v2, v3);

	return 0;
}

// void glUniform1fv(int location, int count, const float * value)
static int _bind_glUniform1fv(lua_State *L) {
	if (!_lg_typecheck_glUniform1fv(L)) {
		luaL_error(L, "luna typecheck failed in void glUniform1fv(int location, int count, const float * value) function, expected prototype:\nvoid glUniform1fv(int location, int count, const float * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int location=(int)lua_tointeger(L,1);
	int count=(int)lua_tointeger(L,2);
	const float* value=(const float*)Luna< void >::check(L,3);

	::glUniform1fv(location, count, value);

	return 0;
}

// void glUniform2fv(int location, int count, const float * value)
static int _bind_glUniform2fv(lua_State *L) {
	if (!_lg_typecheck_glUniform2fv(L)) {
		luaL_error(L, "luna typecheck failed in void glUniform2fv(int location, int count, const float * value) function, expected prototype:\nvoid glUniform2fv(int location, int count, const float * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int location=(int)lua_tointeger(L,1);
	int count=(int)lua_tointeger(L,2);
	const float* value=(const float*)Luna< void >::check(L,3);

	::glUniform2fv(location, count, value);

	return 0;
}

// void glUniform3fv(int location, int count, const float * value)
static int _bind_glUniform3fv(lua_State *L) {
	if (!_lg_typecheck_glUniform3fv(L)) {
		luaL_error(L, "luna typecheck failed in void glUniform3fv(int location, int count, const float * value) function, expected prototype:\nvoid glUniform3fv(int location, int count, const float * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int location=(int)lua_tointeger(L,1);
	int count=(int)lua_tointeger(L,2);
	const float* value=(const float*)Luna< void >::check(L,3);

	::glUniform3fv(location, count, value);

	return 0;
}

// void glUniform4fv(int location, int count, const float * value)
static int _bind_glUniform4fv(lua_State *L) {
	if (!_lg_typecheck_glUniform4fv(L)) {
		luaL_error(L, "luna typecheck failed in void glUniform4fv(int location, int count, const float * value) function, expected prototype:\nvoid glUniform4fv(int location, int count, const float * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int location=(int)lua_tointeger(L,1);
	int count=(int)lua_tointeger(L,2);
	const float* value=(const float*)Luna< void >::check(L,3);

	::glUniform4fv(location, count, value);

	return 0;
}

// void glUniform1iv(int location, int count, const int * value)
static int _bind_glUniform1iv(lua_State *L) {
	if (!_lg_typecheck_glUniform1iv(L)) {
		luaL_error(L, "luna typecheck failed in void glUniform1iv(int location, int count, const int * value) function, expected prototype:\nvoid glUniform1iv(int location, int count, const int * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int location=(int)lua_tointeger(L,1);
	int count=(int)lua_tointeger(L,2);
	const int* value=(const int*)Luna< void >::check(L,3);

	::glUniform1iv(location, count, value);

	return 0;
}

// void glUniform2iv(int location, int count, const int * value)
static int _bind_glUniform2iv(lua_State *L) {
	if (!_lg_typecheck_glUniform2iv(L)) {
		luaL_error(L, "luna typecheck failed in void glUniform2iv(int location, int count, const int * value) function, expected prototype:\nvoid glUniform2iv(int location, int count, const int * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int location=(int)lua_tointeger(L,1);
	int count=(int)lua_tointeger(L,2);
	const int* value=(const int*)Luna< void >::check(L,3);

	::glUniform2iv(location, count, value);

	return 0;
}

// void glUniform3iv(int location, int count, const int * value)
static int _bind_glUniform3iv(lua_State *L) {
	if (!_lg_typecheck_glUniform3iv(L)) {
		luaL_error(L, "luna typecheck failed in void glUniform3iv(int location, int count, const int * value) function, expected prototype:\nvoid glUniform3iv(int location, int count, const int * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int location=(int)lua_tointeger(L,1);
	int count=(int)lua_tointeger(L,2);
	const int* value=(const int*)Luna< void >::check(L,3);

	::glUniform3iv(location, count, value);

	return 0;
}

// void glUniform4iv(int location, int count, const int * value)
static int _bind_glUniform4iv(lua_State *L) {
	if (!_lg_typecheck_glUniform4iv(L)) {
		luaL_error(L, "luna typecheck failed in void glUniform4iv(int location, int count, const int * value) function, expected prototype:\nvoid glUniform4iv(int location, int count, const int * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int location=(int)lua_tointeger(L,1);
	int count=(int)lua_tointeger(L,2);
	const int* value=(const int*)Luna< void >::check(L,3);

	::glUniform4iv(location, count, value);

	return 0;
}

// void glUniformMatrix2fv(int location, int count, unsigned char transpose, const float * value)
static int _bind_glUniformMatrix2fv(lua_State *L) {
	if (!_lg_typecheck_glUniformMatrix2fv(L)) {
		luaL_error(L, "luna typecheck failed in void glUniformMatrix2fv(int location, int count, unsigned char transpose, const float * value) function, expected prototype:\nvoid glUniformMatrix2fv(int location, int count, unsigned char transpose, const float * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int location=(int)lua_tointeger(L,1);
	int count=(int)lua_tointeger(L,2);
	unsigned char transpose = (unsigned char)(lua_tointeger(L,3));
	const float* value=(const float*)Luna< void >::check(L,4);

	::glUniformMatrix2fv(location, count, transpose, value);

	return 0;
}

// void glUniformMatrix3fv(int location, int count, unsigned char transpose, const float * value)
static int _bind_glUniformMatrix3fv(lua_State *L) {
	if (!_lg_typecheck_glUniformMatrix3fv(L)) {
		luaL_error(L, "luna typecheck failed in void glUniformMatrix3fv(int location, int count, unsigned char transpose, const float * value) function, expected prototype:\nvoid glUniformMatrix3fv(int location, int count, unsigned char transpose, const float * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int location=(int)lua_tointeger(L,1);
	int count=(int)lua_tointeger(L,2);
	unsigned char transpose = (unsigned char)(lua_tointeger(L,3));
	const float* value=(const float*)Luna< void >::check(L,4);

	::glUniformMatrix3fv(location, count, transpose, value);

	return 0;
}

// void glUniformMatrix4fv(int location, int count, unsigned char transpose, const float * value)
static int _bind_glUniformMatrix4fv(lua_State *L) {
	if (!_lg_typecheck_glUniformMatrix4fv(L)) {
		luaL_error(L, "luna typecheck failed in void glUniformMatrix4fv(int location, int count, unsigned char transpose, const float * value) function, expected prototype:\nvoid glUniformMatrix4fv(int location, int count, unsigned char transpose, const float * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int location=(int)lua_tointeger(L,1);
	int count=(int)lua_tointeger(L,2);
	unsigned char transpose = (unsigned char)(lua_tointeger(L,3));
	const float* value=(const float*)Luna< void >::check(L,4);

	::glUniformMatrix4fv(location, count, transpose, value);

	return 0;
}

// void glValidateProgram(unsigned int program)
static int _bind_glValidateProgram(lua_State *L) {
	if (!_lg_typecheck_glValidateProgram(L)) {
		luaL_error(L, "luna typecheck failed in void glValidateProgram(unsigned int program) function, expected prototype:\nvoid glValidateProgram(unsigned int program)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);

	::glValidateProgram(program);

	return 0;
}

// void glVertexAttrib1d(unsigned int index, double x)
static int _bind_glVertexAttrib1d(lua_State *L) {
	if (!_lg_typecheck_glVertexAttrib1d(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexAttrib1d(unsigned int index, double x) function, expected prototype:\nvoid glVertexAttrib1d(unsigned int index, double x)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	double x=(double)lua_tonumber(L,2);

	::glVertexAttrib1d(index, x);

	return 0;
}

// void glVertexAttrib1dv(unsigned int index, const double * v)
static int _bind_glVertexAttrib1dv(lua_State *L) {
	if (!_lg_typecheck_glVertexAttrib1dv(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexAttrib1dv(unsigned int index, const double * v) function, expected prototype:\nvoid glVertexAttrib1dv(unsigned int index, const double * v)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	const double* v=(const double*)Luna< void >::check(L,2);

	::glVertexAttrib1dv(index, v);

	return 0;
}

// void glVertexAttrib1f(unsigned int index, float x)
static int _bind_glVertexAttrib1f(lua_State *L) {
	if (!_lg_typecheck_glVertexAttrib1f(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexAttrib1f(unsigned int index, float x) function, expected prototype:\nvoid glVertexAttrib1f(unsigned int index, float x)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	float x=(float)lua_tonumber(L,2);

	::glVertexAttrib1f(index, x);

	return 0;
}

// void glVertexAttrib1fv(unsigned int index, const float * v)
static int _bind_glVertexAttrib1fv(lua_State *L) {
	if (!_lg_typecheck_glVertexAttrib1fv(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexAttrib1fv(unsigned int index, const float * v) function, expected prototype:\nvoid glVertexAttrib1fv(unsigned int index, const float * v)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	const float* v=(const float*)Luna< void >::check(L,2);

	::glVertexAttrib1fv(index, v);

	return 0;
}

// void glVertexAttrib1s(unsigned int index, short x)
static int _bind_glVertexAttrib1s(lua_State *L) {
	if (!_lg_typecheck_glVertexAttrib1s(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexAttrib1s(unsigned int index, short x) function, expected prototype:\nvoid glVertexAttrib1s(unsigned int index, short x)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	short x=(short)lua_tointeger(L,2);

	::glVertexAttrib1s(index, x);

	return 0;
}

// void glVertexAttrib1sv(unsigned int index, const short * v)
static int _bind_glVertexAttrib1sv(lua_State *L) {
	if (!_lg_typecheck_glVertexAttrib1sv(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexAttrib1sv(unsigned int index, const short * v) function, expected prototype:\nvoid glVertexAttrib1sv(unsigned int index, const short * v)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	const short* v=(const short*)Luna< void >::check(L,2);

	::glVertexAttrib1sv(index, v);

	return 0;
}

// void glVertexAttrib2d(unsigned int index, double x, double y)
static int _bind_glVertexAttrib2d(lua_State *L) {
	if (!_lg_typecheck_glVertexAttrib2d(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexAttrib2d(unsigned int index, double x, double y) function, expected prototype:\nvoid glVertexAttrib2d(unsigned int index, double x, double y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	double x=(double)lua_tonumber(L,2);
	double y=(double)lua_tonumber(L,3);

	::glVertexAttrib2d(index, x, y);

	return 0;
}

// void glVertexAttrib2dv(unsigned int index, const double * v)
static int _bind_glVertexAttrib2dv(lua_State *L) {
	if (!_lg_typecheck_glVertexAttrib2dv(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexAttrib2dv(unsigned int index, const double * v) function, expected prototype:\nvoid glVertexAttrib2dv(unsigned int index, const double * v)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	const double* v=(const double*)Luna< void >::check(L,2);

	::glVertexAttrib2dv(index, v);

	return 0;
}

// void glVertexAttrib2f(unsigned int index, float x, float y)
static int _bind_glVertexAttrib2f(lua_State *L) {
	if (!_lg_typecheck_glVertexAttrib2f(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexAttrib2f(unsigned int index, float x, float y) function, expected prototype:\nvoid glVertexAttrib2f(unsigned int index, float x, float y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	float x=(float)lua_tonumber(L,2);
	float y=(float)lua_tonumber(L,3);

	::glVertexAttrib2f(index, x, y);

	return 0;
}

// void glVertexAttrib2fv(unsigned int index, const float * v)
static int _bind_glVertexAttrib2fv(lua_State *L) {
	if (!_lg_typecheck_glVertexAttrib2fv(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexAttrib2fv(unsigned int index, const float * v) function, expected prototype:\nvoid glVertexAttrib2fv(unsigned int index, const float * v)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	const float* v=(const float*)Luna< void >::check(L,2);

	::glVertexAttrib2fv(index, v);

	return 0;
}

// void glVertexAttrib2s(unsigned int index, short x, short y)
static int _bind_glVertexAttrib2s(lua_State *L) {
	if (!_lg_typecheck_glVertexAttrib2s(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexAttrib2s(unsigned int index, short x, short y) function, expected prototype:\nvoid glVertexAttrib2s(unsigned int index, short x, short y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	short x=(short)lua_tointeger(L,2);
	short y=(short)lua_tointeger(L,3);

	::glVertexAttrib2s(index, x, y);

	return 0;
}

// void glVertexAttrib2sv(unsigned int index, const short * v)
static int _bind_glVertexAttrib2sv(lua_State *L) {
	if (!_lg_typecheck_glVertexAttrib2sv(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexAttrib2sv(unsigned int index, const short * v) function, expected prototype:\nvoid glVertexAttrib2sv(unsigned int index, const short * v)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	const short* v=(const short*)Luna< void >::check(L,2);

	::glVertexAttrib2sv(index, v);

	return 0;
}

// void glVertexAttrib3d(unsigned int index, double x, double y, double z)
static int _bind_glVertexAttrib3d(lua_State *L) {
	if (!_lg_typecheck_glVertexAttrib3d(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexAttrib3d(unsigned int index, double x, double y, double z) function, expected prototype:\nvoid glVertexAttrib3d(unsigned int index, double x, double y, double z)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	double x=(double)lua_tonumber(L,2);
	double y=(double)lua_tonumber(L,3);
	double z=(double)lua_tonumber(L,4);

	::glVertexAttrib3d(index, x, y, z);

	return 0;
}

// void glVertexAttrib3dv(unsigned int index, const double * v)
static int _bind_glVertexAttrib3dv(lua_State *L) {
	if (!_lg_typecheck_glVertexAttrib3dv(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexAttrib3dv(unsigned int index, const double * v) function, expected prototype:\nvoid glVertexAttrib3dv(unsigned int index, const double * v)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	const double* v=(const double*)Luna< void >::check(L,2);

	::glVertexAttrib3dv(index, v);

	return 0;
}

// void glVertexAttrib3f(unsigned int index, float x, float y, float z)
static int _bind_glVertexAttrib3f(lua_State *L) {
	if (!_lg_typecheck_glVertexAttrib3f(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexAttrib3f(unsigned int index, float x, float y, float z) function, expected prototype:\nvoid glVertexAttrib3f(unsigned int index, float x, float y, float z)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	float x=(float)lua_tonumber(L,2);
	float y=(float)lua_tonumber(L,3);
	float z=(float)lua_tonumber(L,4);

	::glVertexAttrib3f(index, x, y, z);

	return 0;
}

// void glVertexAttrib3fv(unsigned int index, const float * v)
static int _bind_glVertexAttrib3fv(lua_State *L) {
	if (!_lg_typecheck_glVertexAttrib3fv(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexAttrib3fv(unsigned int index, const float * v) function, expected prototype:\nvoid glVertexAttrib3fv(unsigned int index, const float * v)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	const float* v=(const float*)Luna< void >::check(L,2);

	::glVertexAttrib3fv(index, v);

	return 0;
}

// void glVertexAttrib3s(unsigned int index, short x, short y, short z)
static int _bind_glVertexAttrib3s(lua_State *L) {
	if (!_lg_typecheck_glVertexAttrib3s(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexAttrib3s(unsigned int index, short x, short y, short z) function, expected prototype:\nvoid glVertexAttrib3s(unsigned int index, short x, short y, short z)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	short x=(short)lua_tointeger(L,2);
	short y=(short)lua_tointeger(L,3);
	short z=(short)lua_tointeger(L,4);

	::glVertexAttrib3s(index, x, y, z);

	return 0;
}

// void glVertexAttrib3sv(unsigned int index, const short * v)
static int _bind_glVertexAttrib3sv(lua_State *L) {
	if (!_lg_typecheck_glVertexAttrib3sv(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexAttrib3sv(unsigned int index, const short * v) function, expected prototype:\nvoid glVertexAttrib3sv(unsigned int index, const short * v)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	const short* v=(const short*)Luna< void >::check(L,2);

	::glVertexAttrib3sv(index, v);

	return 0;
}

// void glVertexAttrib4Nbv(unsigned int index, const signed char * v)
static int _bind_glVertexAttrib4Nbv(lua_State *L) {
	if (!_lg_typecheck_glVertexAttrib4Nbv(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexAttrib4Nbv(unsigned int index, const signed char * v) function, expected prototype:\nvoid glVertexAttrib4Nbv(unsigned int index, const signed char * v)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	const signed char* v=(const signed char*)Luna< void >::check(L,2);

	::glVertexAttrib4Nbv(index, v);

	return 0;
}

// void glVertexAttrib4Niv(unsigned int index, const int * v)
static int _bind_glVertexAttrib4Niv(lua_State *L) {
	if (!_lg_typecheck_glVertexAttrib4Niv(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexAttrib4Niv(unsigned int index, const int * v) function, expected prototype:\nvoid glVertexAttrib4Niv(unsigned int index, const int * v)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	const int* v=(const int*)Luna< void >::check(L,2);

	::glVertexAttrib4Niv(index, v);

	return 0;
}

// void glVertexAttrib4Nsv(unsigned int index, const short * v)
static int _bind_glVertexAttrib4Nsv(lua_State *L) {
	if (!_lg_typecheck_glVertexAttrib4Nsv(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexAttrib4Nsv(unsigned int index, const short * v) function, expected prototype:\nvoid glVertexAttrib4Nsv(unsigned int index, const short * v)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	const short* v=(const short*)Luna< void >::check(L,2);

	::glVertexAttrib4Nsv(index, v);

	return 0;
}

// void glVertexAttrib4Nub(unsigned int index, unsigned char x, unsigned char y, unsigned char z, unsigned char w)
static int _bind_glVertexAttrib4Nub(lua_State *L) {
	if (!_lg_typecheck_glVertexAttrib4Nub(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexAttrib4Nub(unsigned int index, unsigned char x, unsigned char y, unsigned char z, unsigned char w) function, expected prototype:\nvoid glVertexAttrib4Nub(unsigned int index, unsigned char x, unsigned char y, unsigned char z, unsigned char w)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	unsigned char x = (unsigned char)(lua_tointeger(L,2));
	unsigned char y = (unsigned char)(lua_tointeger(L,3));
	unsigned char z = (unsigned char)(lua_tointeger(L,4));
	unsigned char w = (unsigned char)(lua_tointeger(L,5));

	::glVertexAttrib4Nub(index, x, y, z, w);

	return 0;
}

// void glVertexAttrib4Nubv(unsigned int index, const unsigned char * v)
static int _bind_glVertexAttrib4Nubv(lua_State *L) {
	if (!_lg_typecheck_glVertexAttrib4Nubv(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexAttrib4Nubv(unsigned int index, const unsigned char * v) function, expected prototype:\nvoid glVertexAttrib4Nubv(unsigned int index, const unsigned char * v)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	unsigned char v = (unsigned char)(lua_tointeger(L,2));

	::glVertexAttrib4Nubv(index, &v);

	return 0;
}

// void glVertexAttrib4Nuiv(unsigned int index, const unsigned int * v)
static int _bind_glVertexAttrib4Nuiv(lua_State *L) {
	if (!_lg_typecheck_glVertexAttrib4Nuiv(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexAttrib4Nuiv(unsigned int index, const unsigned int * v) function, expected prototype:\nvoid glVertexAttrib4Nuiv(unsigned int index, const unsigned int * v)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	const unsigned int* v=(const unsigned int*)Luna< void >::check(L,2);

	::glVertexAttrib4Nuiv(index, v);

	return 0;
}

// void glVertexAttrib4Nusv(unsigned int index, const unsigned short * v)
static int _bind_glVertexAttrib4Nusv(lua_State *L) {
	if (!_lg_typecheck_glVertexAttrib4Nusv(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexAttrib4Nusv(unsigned int index, const unsigned short * v) function, expected prototype:\nvoid glVertexAttrib4Nusv(unsigned int index, const unsigned short * v)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	const unsigned short* v=(const unsigned short*)Luna< void >::check(L,2);

	::glVertexAttrib4Nusv(index, v);

	return 0;
}

// void glVertexAttrib4bv(unsigned int index, const signed char * v)
static int _bind_glVertexAttrib4bv(lua_State *L) {
	if (!_lg_typecheck_glVertexAttrib4bv(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexAttrib4bv(unsigned int index, const signed char * v) function, expected prototype:\nvoid glVertexAttrib4bv(unsigned int index, const signed char * v)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	const signed char* v=(const signed char*)Luna< void >::check(L,2);

	::glVertexAttrib4bv(index, v);

	return 0;
}

// void glVertexAttrib4d(unsigned int index, double x, double y, double z, double w)
static int _bind_glVertexAttrib4d(lua_State *L) {
	if (!_lg_typecheck_glVertexAttrib4d(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexAttrib4d(unsigned int index, double x, double y, double z, double w) function, expected prototype:\nvoid glVertexAttrib4d(unsigned int index, double x, double y, double z, double w)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	double x=(double)lua_tonumber(L,2);
	double y=(double)lua_tonumber(L,3);
	double z=(double)lua_tonumber(L,4);
	double w=(double)lua_tonumber(L,5);

	::glVertexAttrib4d(index, x, y, z, w);

	return 0;
}

// void glVertexAttrib4dv(unsigned int index, const double * v)
static int _bind_glVertexAttrib4dv(lua_State *L) {
	if (!_lg_typecheck_glVertexAttrib4dv(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexAttrib4dv(unsigned int index, const double * v) function, expected prototype:\nvoid glVertexAttrib4dv(unsigned int index, const double * v)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	const double* v=(const double*)Luna< void >::check(L,2);

	::glVertexAttrib4dv(index, v);

	return 0;
}

// void glVertexAttrib4f(unsigned int index, float x, float y, float z, float w)
static int _bind_glVertexAttrib4f(lua_State *L) {
	if (!_lg_typecheck_glVertexAttrib4f(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexAttrib4f(unsigned int index, float x, float y, float z, float w) function, expected prototype:\nvoid glVertexAttrib4f(unsigned int index, float x, float y, float z, float w)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	float x=(float)lua_tonumber(L,2);
	float y=(float)lua_tonumber(L,3);
	float z=(float)lua_tonumber(L,4);
	float w=(float)lua_tonumber(L,5);

	::glVertexAttrib4f(index, x, y, z, w);

	return 0;
}

// void glVertexAttrib4fv(unsigned int index, const float * v)
static int _bind_glVertexAttrib4fv(lua_State *L) {
	if (!_lg_typecheck_glVertexAttrib4fv(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexAttrib4fv(unsigned int index, const float * v) function, expected prototype:\nvoid glVertexAttrib4fv(unsigned int index, const float * v)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	const float* v=(const float*)Luna< void >::check(L,2);

	::glVertexAttrib4fv(index, v);

	return 0;
}

// void glVertexAttrib4iv(unsigned int index, const int * v)
static int _bind_glVertexAttrib4iv(lua_State *L) {
	if (!_lg_typecheck_glVertexAttrib4iv(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexAttrib4iv(unsigned int index, const int * v) function, expected prototype:\nvoid glVertexAttrib4iv(unsigned int index, const int * v)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	const int* v=(const int*)Luna< void >::check(L,2);

	::glVertexAttrib4iv(index, v);

	return 0;
}

// void glVertexAttrib4s(unsigned int index, short x, short y, short z, short w)
static int _bind_glVertexAttrib4s(lua_State *L) {
	if (!_lg_typecheck_glVertexAttrib4s(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexAttrib4s(unsigned int index, short x, short y, short z, short w) function, expected prototype:\nvoid glVertexAttrib4s(unsigned int index, short x, short y, short z, short w)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	short x=(short)lua_tointeger(L,2);
	short y=(short)lua_tointeger(L,3);
	short z=(short)lua_tointeger(L,4);
	short w=(short)lua_tointeger(L,5);

	::glVertexAttrib4s(index, x, y, z, w);

	return 0;
}

// void glVertexAttrib4sv(unsigned int index, const short * v)
static int _bind_glVertexAttrib4sv(lua_State *L) {
	if (!_lg_typecheck_glVertexAttrib4sv(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexAttrib4sv(unsigned int index, const short * v) function, expected prototype:\nvoid glVertexAttrib4sv(unsigned int index, const short * v)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	const short* v=(const short*)Luna< void >::check(L,2);

	::glVertexAttrib4sv(index, v);

	return 0;
}

// void glVertexAttrib4ubv(unsigned int index, const unsigned char * v)
static int _bind_glVertexAttrib4ubv(lua_State *L) {
	if (!_lg_typecheck_glVertexAttrib4ubv(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexAttrib4ubv(unsigned int index, const unsigned char * v) function, expected prototype:\nvoid glVertexAttrib4ubv(unsigned int index, const unsigned char * v)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	unsigned char v = (unsigned char)(lua_tointeger(L,2));

	::glVertexAttrib4ubv(index, &v);

	return 0;
}

// void glVertexAttrib4uiv(unsigned int index, const unsigned int * v)
static int _bind_glVertexAttrib4uiv(lua_State *L) {
	if (!_lg_typecheck_glVertexAttrib4uiv(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexAttrib4uiv(unsigned int index, const unsigned int * v) function, expected prototype:\nvoid glVertexAttrib4uiv(unsigned int index, const unsigned int * v)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	const unsigned int* v=(const unsigned int*)Luna< void >::check(L,2);

	::glVertexAttrib4uiv(index, v);

	return 0;
}

// void glVertexAttrib4usv(unsigned int index, const unsigned short * v)
static int _bind_glVertexAttrib4usv(lua_State *L) {
	if (!_lg_typecheck_glVertexAttrib4usv(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexAttrib4usv(unsigned int index, const unsigned short * v) function, expected prototype:\nvoid glVertexAttrib4usv(unsigned int index, const unsigned short * v)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	const unsigned short* v=(const unsigned short*)Luna< void >::check(L,2);

	::glVertexAttrib4usv(index, v);

	return 0;
}

// void glVertexAttribPointer(unsigned int index, int size, unsigned int type, unsigned char normalized, int stride, const void * pointer)
static int _bind_glVertexAttribPointer(lua_State *L) {
	if (!_lg_typecheck_glVertexAttribPointer(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexAttribPointer(unsigned int index, int size, unsigned int type, unsigned char normalized, int stride, const void * pointer) function, expected prototype:\nvoid glVertexAttribPointer(unsigned int index, int size, unsigned int type, unsigned char normalized, int stride, const void * pointer)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	int size=(int)lua_tointeger(L,2);
	unsigned int type=(unsigned int)lua_tointeger(L,3);
	unsigned char normalized = (unsigned char)(lua_tointeger(L,4));
	int stride=(int)lua_tointeger(L,5);
	const void* pointer=(Luna< void >::check(L,6));

	::glVertexAttribPointer(index, size, type, normalized, stride, pointer);

	return 0;
}

// void glUniformMatrix2x3fv(int location, int count, unsigned char transpose, const float * value)
static int _bind_glUniformMatrix2x3fv(lua_State *L) {
	if (!_lg_typecheck_glUniformMatrix2x3fv(L)) {
		luaL_error(L, "luna typecheck failed in void glUniformMatrix2x3fv(int location, int count, unsigned char transpose, const float * value) function, expected prototype:\nvoid glUniformMatrix2x3fv(int location, int count, unsigned char transpose, const float * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int location=(int)lua_tointeger(L,1);
	int count=(int)lua_tointeger(L,2);
	unsigned char transpose = (unsigned char)(lua_tointeger(L,3));
	const float* value=(const float*)Luna< void >::check(L,4);

	::glUniformMatrix2x3fv(location, count, transpose, value);

	return 0;
}

// void glUniformMatrix3x2fv(int location, int count, unsigned char transpose, const float * value)
static int _bind_glUniformMatrix3x2fv(lua_State *L) {
	if (!_lg_typecheck_glUniformMatrix3x2fv(L)) {
		luaL_error(L, "luna typecheck failed in void glUniformMatrix3x2fv(int location, int count, unsigned char transpose, const float * value) function, expected prototype:\nvoid glUniformMatrix3x2fv(int location, int count, unsigned char transpose, const float * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int location=(int)lua_tointeger(L,1);
	int count=(int)lua_tointeger(L,2);
	unsigned char transpose = (unsigned char)(lua_tointeger(L,3));
	const float* value=(const float*)Luna< void >::check(L,4);

	::glUniformMatrix3x2fv(location, count, transpose, value);

	return 0;
}

// void glUniformMatrix2x4fv(int location, int count, unsigned char transpose, const float * value)
static int _bind_glUniformMatrix2x4fv(lua_State *L) {
	if (!_lg_typecheck_glUniformMatrix2x4fv(L)) {
		luaL_error(L, "luna typecheck failed in void glUniformMatrix2x4fv(int location, int count, unsigned char transpose, const float * value) function, expected prototype:\nvoid glUniformMatrix2x4fv(int location, int count, unsigned char transpose, const float * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int location=(int)lua_tointeger(L,1);
	int count=(int)lua_tointeger(L,2);
	unsigned char transpose = (unsigned char)(lua_tointeger(L,3));
	const float* value=(const float*)Luna< void >::check(L,4);

	::glUniformMatrix2x4fv(location, count, transpose, value);

	return 0;
}

// void glUniformMatrix4x2fv(int location, int count, unsigned char transpose, const float * value)
static int _bind_glUniformMatrix4x2fv(lua_State *L) {
	if (!_lg_typecheck_glUniformMatrix4x2fv(L)) {
		luaL_error(L, "luna typecheck failed in void glUniformMatrix4x2fv(int location, int count, unsigned char transpose, const float * value) function, expected prototype:\nvoid glUniformMatrix4x2fv(int location, int count, unsigned char transpose, const float * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int location=(int)lua_tointeger(L,1);
	int count=(int)lua_tointeger(L,2);
	unsigned char transpose = (unsigned char)(lua_tointeger(L,3));
	const float* value=(const float*)Luna< void >::check(L,4);

	::glUniformMatrix4x2fv(location, count, transpose, value);

	return 0;
}

// void glUniformMatrix3x4fv(int location, int count, unsigned char transpose, const float * value)
static int _bind_glUniformMatrix3x4fv(lua_State *L) {
	if (!_lg_typecheck_glUniformMatrix3x4fv(L)) {
		luaL_error(L, "luna typecheck failed in void glUniformMatrix3x4fv(int location, int count, unsigned char transpose, const float * value) function, expected prototype:\nvoid glUniformMatrix3x4fv(int location, int count, unsigned char transpose, const float * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int location=(int)lua_tointeger(L,1);
	int count=(int)lua_tointeger(L,2);
	unsigned char transpose = (unsigned char)(lua_tointeger(L,3));
	const float* value=(const float*)Luna< void >::check(L,4);

	::glUniformMatrix3x4fv(location, count, transpose, value);

	return 0;
}

// void glUniformMatrix4x3fv(int location, int count, unsigned char transpose, const float * value)
static int _bind_glUniformMatrix4x3fv(lua_State *L) {
	if (!_lg_typecheck_glUniformMatrix4x3fv(L)) {
		luaL_error(L, "luna typecheck failed in void glUniformMatrix4x3fv(int location, int count, unsigned char transpose, const float * value) function, expected prototype:\nvoid glUniformMatrix4x3fv(int location, int count, unsigned char transpose, const float * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int location=(int)lua_tointeger(L,1);
	int count=(int)lua_tointeger(L,2);
	unsigned char transpose = (unsigned char)(lua_tointeger(L,3));
	const float* value=(const float*)Luna< void >::check(L,4);

	::glUniformMatrix4x3fv(location, count, transpose, value);

	return 0;
}

// void glColorMaski(unsigned int index, unsigned char r, unsigned char g, unsigned char b, unsigned char a)
static int _bind_glColorMaski(lua_State *L) {
	if (!_lg_typecheck_glColorMaski(L)) {
		luaL_error(L, "luna typecheck failed in void glColorMaski(unsigned int index, unsigned char r, unsigned char g, unsigned char b, unsigned char a) function, expected prototype:\nvoid glColorMaski(unsigned int index, unsigned char r, unsigned char g, unsigned char b, unsigned char a)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	unsigned char r = (unsigned char)(lua_tointeger(L,2));
	unsigned char g = (unsigned char)(lua_tointeger(L,3));
	unsigned char b = (unsigned char)(lua_tointeger(L,4));
	unsigned char a = (unsigned char)(lua_tointeger(L,5));

	::glColorMaski(index, r, g, b, a);

	return 0;
}

// void glGetBooleani_v(unsigned int target, unsigned int index, unsigned char * data)
static int _bind_glGetBooleani_v(lua_State *L) {
	if (!_lg_typecheck_glGetBooleani_v(L)) {
		luaL_error(L, "luna typecheck failed in void glGetBooleani_v(unsigned int target, unsigned int index, unsigned char * data) function, expected prototype:\nvoid glGetBooleani_v(unsigned int target, unsigned int index, unsigned char * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	unsigned int index=(unsigned int)lua_tointeger(L,2);
	unsigned char data = (unsigned char)(lua_tointeger(L,3));

	::glGetBooleani_v(target, index, &data);

	return 0;
}

// void glGetIntegeri_v(unsigned int target, unsigned int index, int * data)
static int _bind_glGetIntegeri_v(lua_State *L) {
	if (!_lg_typecheck_glGetIntegeri_v(L)) {
		luaL_error(L, "luna typecheck failed in void glGetIntegeri_v(unsigned int target, unsigned int index, int * data) function, expected prototype:\nvoid glGetIntegeri_v(unsigned int target, unsigned int index, int * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	unsigned int index=(unsigned int)lua_tointeger(L,2);
	int* data=(int*)Luna< void >::check(L,3);

	::glGetIntegeri_v(target, index, data);

	return 0;
}

// void glEnablei(unsigned int target, unsigned int index)
static int _bind_glEnablei(lua_State *L) {
	if (!_lg_typecheck_glEnablei(L)) {
		luaL_error(L, "luna typecheck failed in void glEnablei(unsigned int target, unsigned int index) function, expected prototype:\nvoid glEnablei(unsigned int target, unsigned int index)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	unsigned int index=(unsigned int)lua_tointeger(L,2);

	::glEnablei(target, index);

	return 0;
}

// void glDisablei(unsigned int target, unsigned int index)
static int _bind_glDisablei(lua_State *L) {
	if (!_lg_typecheck_glDisablei(L)) {
		luaL_error(L, "luna typecheck failed in void glDisablei(unsigned int target, unsigned int index) function, expected prototype:\nvoid glDisablei(unsigned int target, unsigned int index)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	unsigned int index=(unsigned int)lua_tointeger(L,2);

	::glDisablei(target, index);

	return 0;
}

// unsigned char glIsEnabledi(unsigned int target, unsigned int index)
static int _bind_glIsEnabledi(lua_State *L) {
	if (!_lg_typecheck_glIsEnabledi(L)) {
		luaL_error(L, "luna typecheck failed in unsigned char glIsEnabledi(unsigned int target, unsigned int index) function, expected prototype:\nunsigned char glIsEnabledi(unsigned int target, unsigned int index)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	unsigned int index=(unsigned int)lua_tointeger(L,2);

	unsigned char lret = ::glIsEnabledi(target, index);
	lua_pushnumber(L,(int)lret);

	return 1;
}

// void glBeginTransformFeedback(unsigned int primitiveMode)
static int _bind_glBeginTransformFeedback(lua_State *L) {
	if (!_lg_typecheck_glBeginTransformFeedback(L)) {
		luaL_error(L, "luna typecheck failed in void glBeginTransformFeedback(unsigned int primitiveMode) function, expected prototype:\nvoid glBeginTransformFeedback(unsigned int primitiveMode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int primitiveMode=(unsigned int)lua_tointeger(L,1);

	::glBeginTransformFeedback(primitiveMode);

	return 0;
}

// void glEndTransformFeedback()
static int _bind_glEndTransformFeedback(lua_State *L) {
	if (!_lg_typecheck_glEndTransformFeedback(L)) {
		luaL_error(L, "luna typecheck failed in void glEndTransformFeedback() function, expected prototype:\nvoid glEndTransformFeedback()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	::glEndTransformFeedback();

	return 0;
}

// void glBindBufferRange(unsigned int target, unsigned int index, unsigned int buffer, __int64 offset, __int64 size)
static int _bind_glBindBufferRange(lua_State *L) {
	if (!_lg_typecheck_glBindBufferRange(L)) {
		luaL_error(L, "luna typecheck failed in void glBindBufferRange(unsigned int target, unsigned int index, unsigned int buffer, __int64 offset, __int64 size) function, expected prototype:\nvoid glBindBufferRange(unsigned int target, unsigned int index, unsigned int buffer, __int64 offset, __int64 size)\nClass arguments details:\narg 4 ID = [unknown]\narg 5 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	unsigned int index=(unsigned int)lua_tointeger(L,2);
	unsigned int buffer=(unsigned int)lua_tointeger(L,3);
	__int64* offset_ptr=(Luna< __int64 >::check(L,4));
	if( !offset_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg offset in glBindBufferRange function");
	}
	__int64 offset=*offset_ptr;
	__int64* size_ptr=(Luna< __int64 >::check(L,5));
	if( !size_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg size in glBindBufferRange function");
	}
	__int64 size=*size_ptr;

	::glBindBufferRange(target, index, buffer, offset, size);

	return 0;
}

// void glBindBufferBase(unsigned int target, unsigned int index, unsigned int buffer)
static int _bind_glBindBufferBase(lua_State *L) {
	if (!_lg_typecheck_glBindBufferBase(L)) {
		luaL_error(L, "luna typecheck failed in void glBindBufferBase(unsigned int target, unsigned int index, unsigned int buffer) function, expected prototype:\nvoid glBindBufferBase(unsigned int target, unsigned int index, unsigned int buffer)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	unsigned int index=(unsigned int)lua_tointeger(L,2);
	unsigned int buffer=(unsigned int)lua_tointeger(L,3);

	::glBindBufferBase(target, index, buffer);

	return 0;
}

// void glGetTransformFeedbackVarying(unsigned int program, unsigned int index, int bufSize, int * length, int * size, unsigned int * type, char * name)
static int _bind_glGetTransformFeedbackVarying(lua_State *L) {
	if (!_lg_typecheck_glGetTransformFeedbackVarying(L)) {
		luaL_error(L, "luna typecheck failed in void glGetTransformFeedbackVarying(unsigned int program, unsigned int index, int bufSize, int * length, int * size, unsigned int * type, char * name) function, expected prototype:\nvoid glGetTransformFeedbackVarying(unsigned int program, unsigned int index, int bufSize, int * length, int * size, unsigned int * type, char * name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	unsigned int index=(unsigned int)lua_tointeger(L,2);
	int bufSize=(int)lua_tointeger(L,3);
	int* length=(int*)Luna< void >::check(L,4);
	int* size=(int*)Luna< void >::check(L,5);
	unsigned int* type=(unsigned int*)Luna< void >::check(L,6);
	char* name=(char*)Luna< void >::check(L,7);

	::glGetTransformFeedbackVarying(program, index, bufSize, length, size, type, name);

	return 0;
}

// void glClampColor(unsigned int target, unsigned int clamp)
static int _bind_glClampColor(lua_State *L) {
	if (!_lg_typecheck_glClampColor(L)) {
		luaL_error(L, "luna typecheck failed in void glClampColor(unsigned int target, unsigned int clamp) function, expected prototype:\nvoid glClampColor(unsigned int target, unsigned int clamp)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	unsigned int clamp=(unsigned int)lua_tointeger(L,2);

	::glClampColor(target, clamp);

	return 0;
}

// void glBeginConditionalRender(unsigned int id, unsigned int mode)
static int _bind_glBeginConditionalRender(lua_State *L) {
	if (!_lg_typecheck_glBeginConditionalRender(L)) {
		luaL_error(L, "luna typecheck failed in void glBeginConditionalRender(unsigned int id, unsigned int mode) function, expected prototype:\nvoid glBeginConditionalRender(unsigned int id, unsigned int mode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int id=(unsigned int)lua_tointeger(L,1);
	unsigned int mode=(unsigned int)lua_tointeger(L,2);

	::glBeginConditionalRender(id, mode);

	return 0;
}

// void glEndConditionalRender()
static int _bind_glEndConditionalRender(lua_State *L) {
	if (!_lg_typecheck_glEndConditionalRender(L)) {
		luaL_error(L, "luna typecheck failed in void glEndConditionalRender() function, expected prototype:\nvoid glEndConditionalRender()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	::glEndConditionalRender();

	return 0;
}

// void glVertexAttribIPointer(unsigned int index, int size, unsigned int type, int stride, const void * pointer)
static int _bind_glVertexAttribIPointer(lua_State *L) {
	if (!_lg_typecheck_glVertexAttribIPointer(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexAttribIPointer(unsigned int index, int size, unsigned int type, int stride, const void * pointer) function, expected prototype:\nvoid glVertexAttribIPointer(unsigned int index, int size, unsigned int type, int stride, const void * pointer)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	int size=(int)lua_tointeger(L,2);
	unsigned int type=(unsigned int)lua_tointeger(L,3);
	int stride=(int)lua_tointeger(L,4);
	const void* pointer=(Luna< void >::check(L,5));

	::glVertexAttribIPointer(index, size, type, stride, pointer);

	return 0;
}

// void glGetVertexAttribIiv(unsigned int index, unsigned int pname, int * params)
static int _bind_glGetVertexAttribIiv(lua_State *L) {
	if (!_lg_typecheck_glGetVertexAttribIiv(L)) {
		luaL_error(L, "luna typecheck failed in void glGetVertexAttribIiv(unsigned int index, unsigned int pname, int * params) function, expected prototype:\nvoid glGetVertexAttribIiv(unsigned int index, unsigned int pname, int * params)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	unsigned int pname=(unsigned int)lua_tointeger(L,2);
	int* params=(int*)Luna< void >::check(L,3);

	::glGetVertexAttribIiv(index, pname, params);

	return 0;
}

// void glGetVertexAttribIuiv(unsigned int index, unsigned int pname, unsigned int * params)
static int _bind_glGetVertexAttribIuiv(lua_State *L) {
	if (!_lg_typecheck_glGetVertexAttribIuiv(L)) {
		luaL_error(L, "luna typecheck failed in void glGetVertexAttribIuiv(unsigned int index, unsigned int pname, unsigned int * params) function, expected prototype:\nvoid glGetVertexAttribIuiv(unsigned int index, unsigned int pname, unsigned int * params)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	unsigned int pname=(unsigned int)lua_tointeger(L,2);
	unsigned int* params=(unsigned int*)Luna< void >::check(L,3);

	::glGetVertexAttribIuiv(index, pname, params);

	return 0;
}

// void glVertexAttribI1i(unsigned int index, int x)
static int _bind_glVertexAttribI1i(lua_State *L) {
	if (!_lg_typecheck_glVertexAttribI1i(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexAttribI1i(unsigned int index, int x) function, expected prototype:\nvoid glVertexAttribI1i(unsigned int index, int x)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	int x=(int)lua_tointeger(L,2);

	::glVertexAttribI1i(index, x);

	return 0;
}

// void glVertexAttribI2i(unsigned int index, int x, int y)
static int _bind_glVertexAttribI2i(lua_State *L) {
	if (!_lg_typecheck_glVertexAttribI2i(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexAttribI2i(unsigned int index, int x, int y) function, expected prototype:\nvoid glVertexAttribI2i(unsigned int index, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	int x=(int)lua_tointeger(L,2);
	int y=(int)lua_tointeger(L,3);

	::glVertexAttribI2i(index, x, y);

	return 0;
}

// void glVertexAttribI3i(unsigned int index, int x, int y, int z)
static int _bind_glVertexAttribI3i(lua_State *L) {
	if (!_lg_typecheck_glVertexAttribI3i(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexAttribI3i(unsigned int index, int x, int y, int z) function, expected prototype:\nvoid glVertexAttribI3i(unsigned int index, int x, int y, int z)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	int x=(int)lua_tointeger(L,2);
	int y=(int)lua_tointeger(L,3);
	int z=(int)lua_tointeger(L,4);

	::glVertexAttribI3i(index, x, y, z);

	return 0;
}

// void glVertexAttribI4i(unsigned int index, int x, int y, int z, int w)
static int _bind_glVertexAttribI4i(lua_State *L) {
	if (!_lg_typecheck_glVertexAttribI4i(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexAttribI4i(unsigned int index, int x, int y, int z, int w) function, expected prototype:\nvoid glVertexAttribI4i(unsigned int index, int x, int y, int z, int w)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	int x=(int)lua_tointeger(L,2);
	int y=(int)lua_tointeger(L,3);
	int z=(int)lua_tointeger(L,4);
	int w=(int)lua_tointeger(L,5);

	::glVertexAttribI4i(index, x, y, z, w);

	return 0;
}

// void glVertexAttribI1ui(unsigned int index, unsigned int x)
static int _bind_glVertexAttribI1ui(lua_State *L) {
	if (!_lg_typecheck_glVertexAttribI1ui(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexAttribI1ui(unsigned int index, unsigned int x) function, expected prototype:\nvoid glVertexAttribI1ui(unsigned int index, unsigned int x)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	unsigned int x=(unsigned int)lua_tointeger(L,2);

	::glVertexAttribI1ui(index, x);

	return 0;
}

// void glVertexAttribI2ui(unsigned int index, unsigned int x, unsigned int y)
static int _bind_glVertexAttribI2ui(lua_State *L) {
	if (!_lg_typecheck_glVertexAttribI2ui(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexAttribI2ui(unsigned int index, unsigned int x, unsigned int y) function, expected prototype:\nvoid glVertexAttribI2ui(unsigned int index, unsigned int x, unsigned int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	unsigned int x=(unsigned int)lua_tointeger(L,2);
	unsigned int y=(unsigned int)lua_tointeger(L,3);

	::glVertexAttribI2ui(index, x, y);

	return 0;
}

// void glVertexAttribI3ui(unsigned int index, unsigned int x, unsigned int y, unsigned int z)
static int _bind_glVertexAttribI3ui(lua_State *L) {
	if (!_lg_typecheck_glVertexAttribI3ui(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexAttribI3ui(unsigned int index, unsigned int x, unsigned int y, unsigned int z) function, expected prototype:\nvoid glVertexAttribI3ui(unsigned int index, unsigned int x, unsigned int y, unsigned int z)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	unsigned int x=(unsigned int)lua_tointeger(L,2);
	unsigned int y=(unsigned int)lua_tointeger(L,3);
	unsigned int z=(unsigned int)lua_tointeger(L,4);

	::glVertexAttribI3ui(index, x, y, z);

	return 0;
}

// void glVertexAttribI4ui(unsigned int index, unsigned int x, unsigned int y, unsigned int z, unsigned int w)
static int _bind_glVertexAttribI4ui(lua_State *L) {
	if (!_lg_typecheck_glVertexAttribI4ui(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexAttribI4ui(unsigned int index, unsigned int x, unsigned int y, unsigned int z, unsigned int w) function, expected prototype:\nvoid glVertexAttribI4ui(unsigned int index, unsigned int x, unsigned int y, unsigned int z, unsigned int w)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	unsigned int x=(unsigned int)lua_tointeger(L,2);
	unsigned int y=(unsigned int)lua_tointeger(L,3);
	unsigned int z=(unsigned int)lua_tointeger(L,4);
	unsigned int w=(unsigned int)lua_tointeger(L,5);

	::glVertexAttribI4ui(index, x, y, z, w);

	return 0;
}

// void glVertexAttribI1iv(unsigned int index, const int * v)
static int _bind_glVertexAttribI1iv(lua_State *L) {
	if (!_lg_typecheck_glVertexAttribI1iv(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexAttribI1iv(unsigned int index, const int * v) function, expected prototype:\nvoid glVertexAttribI1iv(unsigned int index, const int * v)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	const int* v=(const int*)Luna< void >::check(L,2);

	::glVertexAttribI1iv(index, v);

	return 0;
}

// void glVertexAttribI2iv(unsigned int index, const int * v)
static int _bind_glVertexAttribI2iv(lua_State *L) {
	if (!_lg_typecheck_glVertexAttribI2iv(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexAttribI2iv(unsigned int index, const int * v) function, expected prototype:\nvoid glVertexAttribI2iv(unsigned int index, const int * v)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	const int* v=(const int*)Luna< void >::check(L,2);

	::glVertexAttribI2iv(index, v);

	return 0;
}

// void glVertexAttribI3iv(unsigned int index, const int * v)
static int _bind_glVertexAttribI3iv(lua_State *L) {
	if (!_lg_typecheck_glVertexAttribI3iv(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexAttribI3iv(unsigned int index, const int * v) function, expected prototype:\nvoid glVertexAttribI3iv(unsigned int index, const int * v)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	const int* v=(const int*)Luna< void >::check(L,2);

	::glVertexAttribI3iv(index, v);

	return 0;
}

// void glVertexAttribI4iv(unsigned int index, const int * v)
static int _bind_glVertexAttribI4iv(lua_State *L) {
	if (!_lg_typecheck_glVertexAttribI4iv(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexAttribI4iv(unsigned int index, const int * v) function, expected prototype:\nvoid glVertexAttribI4iv(unsigned int index, const int * v)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	const int* v=(const int*)Luna< void >::check(L,2);

	::glVertexAttribI4iv(index, v);

	return 0;
}

// void glVertexAttribI1uiv(unsigned int index, const unsigned int * v)
static int _bind_glVertexAttribI1uiv(lua_State *L) {
	if (!_lg_typecheck_glVertexAttribI1uiv(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexAttribI1uiv(unsigned int index, const unsigned int * v) function, expected prototype:\nvoid glVertexAttribI1uiv(unsigned int index, const unsigned int * v)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	const unsigned int* v=(const unsigned int*)Luna< void >::check(L,2);

	::glVertexAttribI1uiv(index, v);

	return 0;
}

// void glVertexAttribI2uiv(unsigned int index, const unsigned int * v)
static int _bind_glVertexAttribI2uiv(lua_State *L) {
	if (!_lg_typecheck_glVertexAttribI2uiv(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexAttribI2uiv(unsigned int index, const unsigned int * v) function, expected prototype:\nvoid glVertexAttribI2uiv(unsigned int index, const unsigned int * v)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	const unsigned int* v=(const unsigned int*)Luna< void >::check(L,2);

	::glVertexAttribI2uiv(index, v);

	return 0;
}

// void glVertexAttribI3uiv(unsigned int index, const unsigned int * v)
static int _bind_glVertexAttribI3uiv(lua_State *L) {
	if (!_lg_typecheck_glVertexAttribI3uiv(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexAttribI3uiv(unsigned int index, const unsigned int * v) function, expected prototype:\nvoid glVertexAttribI3uiv(unsigned int index, const unsigned int * v)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	const unsigned int* v=(const unsigned int*)Luna< void >::check(L,2);

	::glVertexAttribI3uiv(index, v);

	return 0;
}

// void glVertexAttribI4uiv(unsigned int index, const unsigned int * v)
static int _bind_glVertexAttribI4uiv(lua_State *L) {
	if (!_lg_typecheck_glVertexAttribI4uiv(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexAttribI4uiv(unsigned int index, const unsigned int * v) function, expected prototype:\nvoid glVertexAttribI4uiv(unsigned int index, const unsigned int * v)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	const unsigned int* v=(const unsigned int*)Luna< void >::check(L,2);

	::glVertexAttribI4uiv(index, v);

	return 0;
}

// void glVertexAttribI4bv(unsigned int index, const signed char * v)
static int _bind_glVertexAttribI4bv(lua_State *L) {
	if (!_lg_typecheck_glVertexAttribI4bv(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexAttribI4bv(unsigned int index, const signed char * v) function, expected prototype:\nvoid glVertexAttribI4bv(unsigned int index, const signed char * v)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	const signed char* v=(const signed char*)Luna< void >::check(L,2);

	::glVertexAttribI4bv(index, v);

	return 0;
}

// void glVertexAttribI4sv(unsigned int index, const short * v)
static int _bind_glVertexAttribI4sv(lua_State *L) {
	if (!_lg_typecheck_glVertexAttribI4sv(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexAttribI4sv(unsigned int index, const short * v) function, expected prototype:\nvoid glVertexAttribI4sv(unsigned int index, const short * v)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	const short* v=(const short*)Luna< void >::check(L,2);

	::glVertexAttribI4sv(index, v);

	return 0;
}

// void glVertexAttribI4ubv(unsigned int index, const unsigned char * v)
static int _bind_glVertexAttribI4ubv(lua_State *L) {
	if (!_lg_typecheck_glVertexAttribI4ubv(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexAttribI4ubv(unsigned int index, const unsigned char * v) function, expected prototype:\nvoid glVertexAttribI4ubv(unsigned int index, const unsigned char * v)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	unsigned char v = (unsigned char)(lua_tointeger(L,2));

	::glVertexAttribI4ubv(index, &v);

	return 0;
}

// void glVertexAttribI4usv(unsigned int index, const unsigned short * v)
static int _bind_glVertexAttribI4usv(lua_State *L) {
	if (!_lg_typecheck_glVertexAttribI4usv(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexAttribI4usv(unsigned int index, const unsigned short * v) function, expected prototype:\nvoid glVertexAttribI4usv(unsigned int index, const unsigned short * v)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	const unsigned short* v=(const unsigned short*)Luna< void >::check(L,2);

	::glVertexAttribI4usv(index, v);

	return 0;
}

// void glGetUniformuiv(unsigned int program, int location, unsigned int * params)
static int _bind_glGetUniformuiv(lua_State *L) {
	if (!_lg_typecheck_glGetUniformuiv(L)) {
		luaL_error(L, "luna typecheck failed in void glGetUniformuiv(unsigned int program, int location, unsigned int * params) function, expected prototype:\nvoid glGetUniformuiv(unsigned int program, int location, unsigned int * params)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	int location=(int)lua_tointeger(L,2);
	unsigned int* params=(unsigned int*)Luna< void >::check(L,3);

	::glGetUniformuiv(program, location, params);

	return 0;
}

// void glBindFragDataLocation(unsigned int program, unsigned int color, const char * name)
static int _bind_glBindFragDataLocation(lua_State *L) {
	if (!_lg_typecheck_glBindFragDataLocation(L)) {
		luaL_error(L, "luna typecheck failed in void glBindFragDataLocation(unsigned int program, unsigned int color, const char * name) function, expected prototype:\nvoid glBindFragDataLocation(unsigned int program, unsigned int color, const char * name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	unsigned int color=(unsigned int)lua_tointeger(L,2);
	const char * name=(const char *)lua_tostring(L,3);

	::glBindFragDataLocation(program, color, name);

	return 0;
}

// int glGetFragDataLocation(unsigned int program, const char * name)
static int _bind_glGetFragDataLocation(lua_State *L) {
	if (!_lg_typecheck_glGetFragDataLocation(L)) {
		luaL_error(L, "luna typecheck failed in int glGetFragDataLocation(unsigned int program, const char * name) function, expected prototype:\nint glGetFragDataLocation(unsigned int program, const char * name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	const char * name=(const char *)lua_tostring(L,2);

	int lret = ::glGetFragDataLocation(program, name);
	lua_pushnumber(L,lret);

	return 1;
}

// void glUniform1ui(int location, unsigned int v0)
static int _bind_glUniform1ui(lua_State *L) {
	if (!_lg_typecheck_glUniform1ui(L)) {
		luaL_error(L, "luna typecheck failed in void glUniform1ui(int location, unsigned int v0) function, expected prototype:\nvoid glUniform1ui(int location, unsigned int v0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int location=(int)lua_tointeger(L,1);
	unsigned int v0=(unsigned int)lua_tointeger(L,2);

	::glUniform1ui(location, v0);

	return 0;
}

// void glUniform2ui(int location, unsigned int v0, unsigned int v1)
static int _bind_glUniform2ui(lua_State *L) {
	if (!_lg_typecheck_glUniform2ui(L)) {
		luaL_error(L, "luna typecheck failed in void glUniform2ui(int location, unsigned int v0, unsigned int v1) function, expected prototype:\nvoid glUniform2ui(int location, unsigned int v0, unsigned int v1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int location=(int)lua_tointeger(L,1);
	unsigned int v0=(unsigned int)lua_tointeger(L,2);
	unsigned int v1=(unsigned int)lua_tointeger(L,3);

	::glUniform2ui(location, v0, v1);

	return 0;
}

// void glUniform3ui(int location, unsigned int v0, unsigned int v1, unsigned int v2)
static int _bind_glUniform3ui(lua_State *L) {
	if (!_lg_typecheck_glUniform3ui(L)) {
		luaL_error(L, "luna typecheck failed in void glUniform3ui(int location, unsigned int v0, unsigned int v1, unsigned int v2) function, expected prototype:\nvoid glUniform3ui(int location, unsigned int v0, unsigned int v1, unsigned int v2)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int location=(int)lua_tointeger(L,1);
	unsigned int v0=(unsigned int)lua_tointeger(L,2);
	unsigned int v1=(unsigned int)lua_tointeger(L,3);
	unsigned int v2=(unsigned int)lua_tointeger(L,4);

	::glUniform3ui(location, v0, v1, v2);

	return 0;
}

// void glUniform4ui(int location, unsigned int v0, unsigned int v1, unsigned int v2, unsigned int v3)
static int _bind_glUniform4ui(lua_State *L) {
	if (!_lg_typecheck_glUniform4ui(L)) {
		luaL_error(L, "luna typecheck failed in void glUniform4ui(int location, unsigned int v0, unsigned int v1, unsigned int v2, unsigned int v3) function, expected prototype:\nvoid glUniform4ui(int location, unsigned int v0, unsigned int v1, unsigned int v2, unsigned int v3)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int location=(int)lua_tointeger(L,1);
	unsigned int v0=(unsigned int)lua_tointeger(L,2);
	unsigned int v1=(unsigned int)lua_tointeger(L,3);
	unsigned int v2=(unsigned int)lua_tointeger(L,4);
	unsigned int v3=(unsigned int)lua_tointeger(L,5);

	::glUniform4ui(location, v0, v1, v2, v3);

	return 0;
}

// void glUniform1uiv(int location, int count, const unsigned int * value)
static int _bind_glUniform1uiv(lua_State *L) {
	if (!_lg_typecheck_glUniform1uiv(L)) {
		luaL_error(L, "luna typecheck failed in void glUniform1uiv(int location, int count, const unsigned int * value) function, expected prototype:\nvoid glUniform1uiv(int location, int count, const unsigned int * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int location=(int)lua_tointeger(L,1);
	int count=(int)lua_tointeger(L,2);
	const unsigned int* value=(const unsigned int*)Luna< void >::check(L,3);

	::glUniform1uiv(location, count, value);

	return 0;
}

// void glUniform2uiv(int location, int count, const unsigned int * value)
static int _bind_glUniform2uiv(lua_State *L) {
	if (!_lg_typecheck_glUniform2uiv(L)) {
		luaL_error(L, "luna typecheck failed in void glUniform2uiv(int location, int count, const unsigned int * value) function, expected prototype:\nvoid glUniform2uiv(int location, int count, const unsigned int * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int location=(int)lua_tointeger(L,1);
	int count=(int)lua_tointeger(L,2);
	const unsigned int* value=(const unsigned int*)Luna< void >::check(L,3);

	::glUniform2uiv(location, count, value);

	return 0;
}

// void glUniform3uiv(int location, int count, const unsigned int * value)
static int _bind_glUniform3uiv(lua_State *L) {
	if (!_lg_typecheck_glUniform3uiv(L)) {
		luaL_error(L, "luna typecheck failed in void glUniform3uiv(int location, int count, const unsigned int * value) function, expected prototype:\nvoid glUniform3uiv(int location, int count, const unsigned int * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int location=(int)lua_tointeger(L,1);
	int count=(int)lua_tointeger(L,2);
	const unsigned int* value=(const unsigned int*)Luna< void >::check(L,3);

	::glUniform3uiv(location, count, value);

	return 0;
}

// void glUniform4uiv(int location, int count, const unsigned int * value)
static int _bind_glUniform4uiv(lua_State *L) {
	if (!_lg_typecheck_glUniform4uiv(L)) {
		luaL_error(L, "luna typecheck failed in void glUniform4uiv(int location, int count, const unsigned int * value) function, expected prototype:\nvoid glUniform4uiv(int location, int count, const unsigned int * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int location=(int)lua_tointeger(L,1);
	int count=(int)lua_tointeger(L,2);
	const unsigned int* value=(const unsigned int*)Luna< void >::check(L,3);

	::glUniform4uiv(location, count, value);

	return 0;
}

// void glTexParameterIiv(unsigned int target, unsigned int pname, const int * params)
static int _bind_glTexParameterIiv(lua_State *L) {
	if (!_lg_typecheck_glTexParameterIiv(L)) {
		luaL_error(L, "luna typecheck failed in void glTexParameterIiv(unsigned int target, unsigned int pname, const int * params) function, expected prototype:\nvoid glTexParameterIiv(unsigned int target, unsigned int pname, const int * params)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	unsigned int pname=(unsigned int)lua_tointeger(L,2);
	const int* params=(const int*)Luna< void >::check(L,3);

	::glTexParameterIiv(target, pname, params);

	return 0;
}

// void glTexParameterIuiv(unsigned int target, unsigned int pname, const unsigned int * params)
static int _bind_glTexParameterIuiv(lua_State *L) {
	if (!_lg_typecheck_glTexParameterIuiv(L)) {
		luaL_error(L, "luna typecheck failed in void glTexParameterIuiv(unsigned int target, unsigned int pname, const unsigned int * params) function, expected prototype:\nvoid glTexParameterIuiv(unsigned int target, unsigned int pname, const unsigned int * params)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	unsigned int pname=(unsigned int)lua_tointeger(L,2);
	const unsigned int* params=(const unsigned int*)Luna< void >::check(L,3);

	::glTexParameterIuiv(target, pname, params);

	return 0;
}

// void glGetTexParameterIiv(unsigned int target, unsigned int pname, int * params)
static int _bind_glGetTexParameterIiv(lua_State *L) {
	if (!_lg_typecheck_glGetTexParameterIiv(L)) {
		luaL_error(L, "luna typecheck failed in void glGetTexParameterIiv(unsigned int target, unsigned int pname, int * params) function, expected prototype:\nvoid glGetTexParameterIiv(unsigned int target, unsigned int pname, int * params)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	unsigned int pname=(unsigned int)lua_tointeger(L,2);
	int* params=(int*)Luna< void >::check(L,3);

	::glGetTexParameterIiv(target, pname, params);

	return 0;
}

// void glGetTexParameterIuiv(unsigned int target, unsigned int pname, unsigned int * params)
static int _bind_glGetTexParameterIuiv(lua_State *L) {
	if (!_lg_typecheck_glGetTexParameterIuiv(L)) {
		luaL_error(L, "luna typecheck failed in void glGetTexParameterIuiv(unsigned int target, unsigned int pname, unsigned int * params) function, expected prototype:\nvoid glGetTexParameterIuiv(unsigned int target, unsigned int pname, unsigned int * params)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	unsigned int pname=(unsigned int)lua_tointeger(L,2);
	unsigned int* params=(unsigned int*)Luna< void >::check(L,3);

	::glGetTexParameterIuiv(target, pname, params);

	return 0;
}

// void glClearBufferiv(unsigned int buffer, int drawbuffer, const int * value)
static int _bind_glClearBufferiv(lua_State *L) {
	if (!_lg_typecheck_glClearBufferiv(L)) {
		luaL_error(L, "luna typecheck failed in void glClearBufferiv(unsigned int buffer, int drawbuffer, const int * value) function, expected prototype:\nvoid glClearBufferiv(unsigned int buffer, int drawbuffer, const int * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int buffer=(unsigned int)lua_tointeger(L,1);
	int drawbuffer=(int)lua_tointeger(L,2);
	const int* value=(const int*)Luna< void >::check(L,3);

	::glClearBufferiv(buffer, drawbuffer, value);

	return 0;
}

// void glClearBufferuiv(unsigned int buffer, int drawbuffer, const unsigned int * value)
static int _bind_glClearBufferuiv(lua_State *L) {
	if (!_lg_typecheck_glClearBufferuiv(L)) {
		luaL_error(L, "luna typecheck failed in void glClearBufferuiv(unsigned int buffer, int drawbuffer, const unsigned int * value) function, expected prototype:\nvoid glClearBufferuiv(unsigned int buffer, int drawbuffer, const unsigned int * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int buffer=(unsigned int)lua_tointeger(L,1);
	int drawbuffer=(int)lua_tointeger(L,2);
	const unsigned int* value=(const unsigned int*)Luna< void >::check(L,3);

	::glClearBufferuiv(buffer, drawbuffer, value);

	return 0;
}

// void glClearBufferfv(unsigned int buffer, int drawbuffer, const float * value)
static int _bind_glClearBufferfv(lua_State *L) {
	if (!_lg_typecheck_glClearBufferfv(L)) {
		luaL_error(L, "luna typecheck failed in void glClearBufferfv(unsigned int buffer, int drawbuffer, const float * value) function, expected prototype:\nvoid glClearBufferfv(unsigned int buffer, int drawbuffer, const float * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int buffer=(unsigned int)lua_tointeger(L,1);
	int drawbuffer=(int)lua_tointeger(L,2);
	const float* value=(const float*)Luna< void >::check(L,3);

	::glClearBufferfv(buffer, drawbuffer, value);

	return 0;
}

// void glClearBufferfi(unsigned int buffer, int drawbuffer, float depth, int stencil)
static int _bind_glClearBufferfi(lua_State *L) {
	if (!_lg_typecheck_glClearBufferfi(L)) {
		luaL_error(L, "luna typecheck failed in void glClearBufferfi(unsigned int buffer, int drawbuffer, float depth, int stencil) function, expected prototype:\nvoid glClearBufferfi(unsigned int buffer, int drawbuffer, float depth, int stencil)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int buffer=(unsigned int)lua_tointeger(L,1);
	int drawbuffer=(int)lua_tointeger(L,2);
	float depth=(float)lua_tonumber(L,3);
	int stencil=(int)lua_tointeger(L,4);

	::glClearBufferfi(buffer, drawbuffer, depth, stencil);

	return 0;
}

// const unsigned char * glGetStringi(unsigned int name, unsigned int index)
static int _bind_glGetStringi(lua_State *L) {
	if (!_lg_typecheck_glGetStringi(L)) {
		luaL_error(L, "luna typecheck failed in const unsigned char * glGetStringi(unsigned int name, unsigned int index) function, expected prototype:\nconst unsigned char * glGetStringi(unsigned int name, unsigned int index)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int name=(unsigned int)lua_tointeger(L,1);
	unsigned int index=(unsigned int)lua_tointeger(L,2);

	const unsigned char * lret = ::glGetStringi(name, index);
	luaL_error(L,"Trying to convert pointer on unsigned char lret to lua. This usage should be clarifierd.");

	return 1;
}

// void glDrawArraysInstanced(unsigned int mode, int first, int count, int instancecount)
static int _bind_glDrawArraysInstanced(lua_State *L) {
	if (!_lg_typecheck_glDrawArraysInstanced(L)) {
		luaL_error(L, "luna typecheck failed in void glDrawArraysInstanced(unsigned int mode, int first, int count, int instancecount) function, expected prototype:\nvoid glDrawArraysInstanced(unsigned int mode, int first, int count, int instancecount)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int mode=(unsigned int)lua_tointeger(L,1);
	int first=(int)lua_tointeger(L,2);
	int count=(int)lua_tointeger(L,3);
	int instancecount=(int)lua_tointeger(L,4);

	::glDrawArraysInstanced(mode, first, count, instancecount);

	return 0;
}

// void glDrawElementsInstanced(unsigned int mode, int count, unsigned int type, const void * indices, int instancecount)
static int _bind_glDrawElementsInstanced(lua_State *L) {
	if (!_lg_typecheck_glDrawElementsInstanced(L)) {
		luaL_error(L, "luna typecheck failed in void glDrawElementsInstanced(unsigned int mode, int count, unsigned int type, const void * indices, int instancecount) function, expected prototype:\nvoid glDrawElementsInstanced(unsigned int mode, int count, unsigned int type, const void * indices, int instancecount)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int mode=(unsigned int)lua_tointeger(L,1);
	int count=(int)lua_tointeger(L,2);
	unsigned int type=(unsigned int)lua_tointeger(L,3);
	const void* indices=(Luna< void >::check(L,4));
	int instancecount=(int)lua_tointeger(L,5);

	::glDrawElementsInstanced(mode, count, type, indices, instancecount);

	return 0;
}

// void glTexBuffer(unsigned int target, unsigned int internalformat, unsigned int buffer)
static int _bind_glTexBuffer(lua_State *L) {
	if (!_lg_typecheck_glTexBuffer(L)) {
		luaL_error(L, "luna typecheck failed in void glTexBuffer(unsigned int target, unsigned int internalformat, unsigned int buffer) function, expected prototype:\nvoid glTexBuffer(unsigned int target, unsigned int internalformat, unsigned int buffer)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	unsigned int internalformat=(unsigned int)lua_tointeger(L,2);
	unsigned int buffer=(unsigned int)lua_tointeger(L,3);

	::glTexBuffer(target, internalformat, buffer);

	return 0;
}

// void glPrimitiveRestartIndex(unsigned int index)
static int _bind_glPrimitiveRestartIndex(lua_State *L) {
	if (!_lg_typecheck_glPrimitiveRestartIndex(L)) {
		luaL_error(L, "luna typecheck failed in void glPrimitiveRestartIndex(unsigned int index) function, expected prototype:\nvoid glPrimitiveRestartIndex(unsigned int index)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);

	::glPrimitiveRestartIndex(index);

	return 0;
}

// void glGetInteger64i_v(unsigned int target, unsigned int index, __int64 * data)
static int _bind_glGetInteger64i_v(lua_State *L) {
	if (!_lg_typecheck_glGetInteger64i_v(L)) {
		luaL_error(L, "luna typecheck failed in void glGetInteger64i_v(unsigned int target, unsigned int index, __int64 * data) function, expected prototype:\nvoid glGetInteger64i_v(unsigned int target, unsigned int index, __int64 * data)\nClass arguments details:\narg 3 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	unsigned int index=(unsigned int)lua_tointeger(L,2);
	__int64* data=(Luna< __int64 >::check(L,3));

	::glGetInteger64i_v(target, index, data);

	return 0;
}

// void glGetBufferParameteri64v(unsigned int target, unsigned int pname, __int64 * params)
static int _bind_glGetBufferParameteri64v(lua_State *L) {
	if (!_lg_typecheck_glGetBufferParameteri64v(L)) {
		luaL_error(L, "luna typecheck failed in void glGetBufferParameteri64v(unsigned int target, unsigned int pname, __int64 * params) function, expected prototype:\nvoid glGetBufferParameteri64v(unsigned int target, unsigned int pname, __int64 * params)\nClass arguments details:\narg 3 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	unsigned int pname=(unsigned int)lua_tointeger(L,2);
	__int64* params=(Luna< __int64 >::check(L,3));

	::glGetBufferParameteri64v(target, pname, params);

	return 0;
}

// void glFramebufferTexture(unsigned int target, unsigned int attachment, unsigned int texture, int level)
static int _bind_glFramebufferTexture(lua_State *L) {
	if (!_lg_typecheck_glFramebufferTexture(L)) {
		luaL_error(L, "luna typecheck failed in void glFramebufferTexture(unsigned int target, unsigned int attachment, unsigned int texture, int level) function, expected prototype:\nvoid glFramebufferTexture(unsigned int target, unsigned int attachment, unsigned int texture, int level)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	unsigned int attachment=(unsigned int)lua_tointeger(L,2);
	unsigned int texture=(unsigned int)lua_tointeger(L,3);
	int level=(int)lua_tointeger(L,4);

	::glFramebufferTexture(target, attachment, texture, level);

	return 0;
}

// void glVertexAttribDivisor(unsigned int index, unsigned int divisor)
static int _bind_glVertexAttribDivisor(lua_State *L) {
	if (!_lg_typecheck_glVertexAttribDivisor(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexAttribDivisor(unsigned int index, unsigned int divisor) function, expected prototype:\nvoid glVertexAttribDivisor(unsigned int index, unsigned int divisor)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	unsigned int divisor=(unsigned int)lua_tointeger(L,2);

	::glVertexAttribDivisor(index, divisor);

	return 0;
}

// void glMinSampleShading(float value)
static int _bind_glMinSampleShading(lua_State *L) {
	if (!_lg_typecheck_glMinSampleShading(L)) {
		luaL_error(L, "luna typecheck failed in void glMinSampleShading(float value) function, expected prototype:\nvoid glMinSampleShading(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	float value=(float)lua_tonumber(L,1);

	::glMinSampleShading(value);

	return 0;
}

// void glBlendEquationi(unsigned int buf, unsigned int mode)
static int _bind_glBlendEquationi(lua_State *L) {
	if (!_lg_typecheck_glBlendEquationi(L)) {
		luaL_error(L, "luna typecheck failed in void glBlendEquationi(unsigned int buf, unsigned int mode) function, expected prototype:\nvoid glBlendEquationi(unsigned int buf, unsigned int mode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int buf=(unsigned int)lua_tointeger(L,1);
	unsigned int mode=(unsigned int)lua_tointeger(L,2);

	::glBlendEquationi(buf, mode);

	return 0;
}

// void glBlendEquationSeparatei(unsigned int buf, unsigned int modeRGB, unsigned int modeAlpha)
static int _bind_glBlendEquationSeparatei(lua_State *L) {
	if (!_lg_typecheck_glBlendEquationSeparatei(L)) {
		luaL_error(L, "luna typecheck failed in void glBlendEquationSeparatei(unsigned int buf, unsigned int modeRGB, unsigned int modeAlpha) function, expected prototype:\nvoid glBlendEquationSeparatei(unsigned int buf, unsigned int modeRGB, unsigned int modeAlpha)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int buf=(unsigned int)lua_tointeger(L,1);
	unsigned int modeRGB=(unsigned int)lua_tointeger(L,2);
	unsigned int modeAlpha=(unsigned int)lua_tointeger(L,3);

	::glBlendEquationSeparatei(buf, modeRGB, modeAlpha);

	return 0;
}

// void glBlendFunci(unsigned int buf, unsigned int src, unsigned int dst)
static int _bind_glBlendFunci(lua_State *L) {
	if (!_lg_typecheck_glBlendFunci(L)) {
		luaL_error(L, "luna typecheck failed in void glBlendFunci(unsigned int buf, unsigned int src, unsigned int dst) function, expected prototype:\nvoid glBlendFunci(unsigned int buf, unsigned int src, unsigned int dst)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int buf=(unsigned int)lua_tointeger(L,1);
	unsigned int src=(unsigned int)lua_tointeger(L,2);
	unsigned int dst=(unsigned int)lua_tointeger(L,3);

	::glBlendFunci(buf, src, dst);

	return 0;
}

// void glBlendFuncSeparatei(unsigned int buf, unsigned int srcRGB, unsigned int dstRGB, unsigned int srcAlpha, unsigned int dstAlpha)
static int _bind_glBlendFuncSeparatei(lua_State *L) {
	if (!_lg_typecheck_glBlendFuncSeparatei(L)) {
		luaL_error(L, "luna typecheck failed in void glBlendFuncSeparatei(unsigned int buf, unsigned int srcRGB, unsigned int dstRGB, unsigned int srcAlpha, unsigned int dstAlpha) function, expected prototype:\nvoid glBlendFuncSeparatei(unsigned int buf, unsigned int srcRGB, unsigned int dstRGB, unsigned int srcAlpha, unsigned int dstAlpha)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int buf=(unsigned int)lua_tointeger(L,1);
	unsigned int srcRGB=(unsigned int)lua_tointeger(L,2);
	unsigned int dstRGB=(unsigned int)lua_tointeger(L,3);
	unsigned int srcAlpha=(unsigned int)lua_tointeger(L,4);
	unsigned int dstAlpha=(unsigned int)lua_tointeger(L,5);

	::glBlendFuncSeparatei(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);

	return 0;
}

// unsigned char glIsRenderbuffer(unsigned int renderbuffer)
static int _bind_glIsRenderbuffer(lua_State *L) {
	if (!_lg_typecheck_glIsRenderbuffer(L)) {
		luaL_error(L, "luna typecheck failed in unsigned char glIsRenderbuffer(unsigned int renderbuffer) function, expected prototype:\nunsigned char glIsRenderbuffer(unsigned int renderbuffer)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int renderbuffer=(unsigned int)lua_tointeger(L,1);

	unsigned char lret = ::glIsRenderbuffer(renderbuffer);
	lua_pushnumber(L,(int)lret);

	return 1;
}

// void glBindRenderbuffer(unsigned int target, unsigned int renderbuffer)
static int _bind_glBindRenderbuffer(lua_State *L) {
	if (!_lg_typecheck_glBindRenderbuffer(L)) {
		luaL_error(L, "luna typecheck failed in void glBindRenderbuffer(unsigned int target, unsigned int renderbuffer) function, expected prototype:\nvoid glBindRenderbuffer(unsigned int target, unsigned int renderbuffer)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	unsigned int renderbuffer=(unsigned int)lua_tointeger(L,2);

	::glBindRenderbuffer(target, renderbuffer);

	return 0;
}

// void glDeleteRenderbuffers(int n, const unsigned int * renderbuffers)
static int _bind_glDeleteRenderbuffers(lua_State *L) {
	if (!_lg_typecheck_glDeleteRenderbuffers(L)) {
		luaL_error(L, "luna typecheck failed in void glDeleteRenderbuffers(int n, const unsigned int * renderbuffers) function, expected prototype:\nvoid glDeleteRenderbuffers(int n, const unsigned int * renderbuffers)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int n=(int)lua_tointeger(L,1);
	const unsigned int* renderbuffers=(const unsigned int*)Luna< void >::check(L,2);

	::glDeleteRenderbuffers(n, renderbuffers);

	return 0;
}

// void glGenRenderbuffers(int n, unsigned int * renderbuffers)
static int _bind_glGenRenderbuffers(lua_State *L) {
	if (!_lg_typecheck_glGenRenderbuffers(L)) {
		luaL_error(L, "luna typecheck failed in void glGenRenderbuffers(int n, unsigned int * renderbuffers) function, expected prototype:\nvoid glGenRenderbuffers(int n, unsigned int * renderbuffers)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int n=(int)lua_tointeger(L,1);
	unsigned int* renderbuffers=(unsigned int*)Luna< void >::check(L,2);

	::glGenRenderbuffers(n, renderbuffers);

	return 0;
}

// void glRenderbufferStorage(unsigned int target, unsigned int internalformat, int width, int height)
static int _bind_glRenderbufferStorage(lua_State *L) {
	if (!_lg_typecheck_glRenderbufferStorage(L)) {
		luaL_error(L, "luna typecheck failed in void glRenderbufferStorage(unsigned int target, unsigned int internalformat, int width, int height) function, expected prototype:\nvoid glRenderbufferStorage(unsigned int target, unsigned int internalformat, int width, int height)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	unsigned int internalformat=(unsigned int)lua_tointeger(L,2);
	int width=(int)lua_tointeger(L,3);
	int height=(int)lua_tointeger(L,4);

	::glRenderbufferStorage(target, internalformat, width, height);

	return 0;
}

// void glGetRenderbufferParameteriv(unsigned int target, unsigned int pname, int * params)
static int _bind_glGetRenderbufferParameteriv(lua_State *L) {
	if (!_lg_typecheck_glGetRenderbufferParameteriv(L)) {
		luaL_error(L, "luna typecheck failed in void glGetRenderbufferParameteriv(unsigned int target, unsigned int pname, int * params) function, expected prototype:\nvoid glGetRenderbufferParameteriv(unsigned int target, unsigned int pname, int * params)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	unsigned int pname=(unsigned int)lua_tointeger(L,2);
	int* params=(int*)Luna< void >::check(L,3);

	::glGetRenderbufferParameteriv(target, pname, params);

	return 0;
}

// unsigned char glIsFramebuffer(unsigned int framebuffer)
static int _bind_glIsFramebuffer(lua_State *L) {
	if (!_lg_typecheck_glIsFramebuffer(L)) {
		luaL_error(L, "luna typecheck failed in unsigned char glIsFramebuffer(unsigned int framebuffer) function, expected prototype:\nunsigned char glIsFramebuffer(unsigned int framebuffer)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int framebuffer=(unsigned int)lua_tointeger(L,1);

	unsigned char lret = ::glIsFramebuffer(framebuffer);
	lua_pushnumber(L,(int)lret);

	return 1;
}

// void glBindFramebuffer(unsigned int target, unsigned int framebuffer)
static int _bind_glBindFramebuffer(lua_State *L) {
	if (!_lg_typecheck_glBindFramebuffer(L)) {
		luaL_error(L, "luna typecheck failed in void glBindFramebuffer(unsigned int target, unsigned int framebuffer) function, expected prototype:\nvoid glBindFramebuffer(unsigned int target, unsigned int framebuffer)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	unsigned int framebuffer=(unsigned int)lua_tointeger(L,2);

	::glBindFramebuffer(target, framebuffer);

	return 0;
}

// void glDeleteFramebuffers(int n, const unsigned int * framebuffers)
static int _bind_glDeleteFramebuffers(lua_State *L) {
	if (!_lg_typecheck_glDeleteFramebuffers(L)) {
		luaL_error(L, "luna typecheck failed in void glDeleteFramebuffers(int n, const unsigned int * framebuffers) function, expected prototype:\nvoid glDeleteFramebuffers(int n, const unsigned int * framebuffers)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int n=(int)lua_tointeger(L,1);
	const unsigned int* framebuffers=(const unsigned int*)Luna< void >::check(L,2);

	::glDeleteFramebuffers(n, framebuffers);

	return 0;
}

// void glGenFramebuffers(int n, unsigned int * framebuffers)
static int _bind_glGenFramebuffers(lua_State *L) {
	if (!_lg_typecheck_glGenFramebuffers(L)) {
		luaL_error(L, "luna typecheck failed in void glGenFramebuffers(int n, unsigned int * framebuffers) function, expected prototype:\nvoid glGenFramebuffers(int n, unsigned int * framebuffers)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int n=(int)lua_tointeger(L,1);
	unsigned int* framebuffers=(unsigned int*)Luna< void >::check(L,2);

	::glGenFramebuffers(n, framebuffers);

	return 0;
}

// unsigned int glCheckFramebufferStatus(unsigned int target)
static int _bind_glCheckFramebufferStatus(lua_State *L) {
	if (!_lg_typecheck_glCheckFramebufferStatus(L)) {
		luaL_error(L, "luna typecheck failed in unsigned int glCheckFramebufferStatus(unsigned int target) function, expected prototype:\nunsigned int glCheckFramebufferStatus(unsigned int target)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);

	unsigned int lret = ::glCheckFramebufferStatus(target);
	lua_pushnumber(L,lret);

	return 1;
}

// void glFramebufferTexture1D(unsigned int target, unsigned int attachment, unsigned int textarget, unsigned int texture, int level)
static int _bind_glFramebufferTexture1D(lua_State *L) {
	if (!_lg_typecheck_glFramebufferTexture1D(L)) {
		luaL_error(L, "luna typecheck failed in void glFramebufferTexture1D(unsigned int target, unsigned int attachment, unsigned int textarget, unsigned int texture, int level) function, expected prototype:\nvoid glFramebufferTexture1D(unsigned int target, unsigned int attachment, unsigned int textarget, unsigned int texture, int level)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	unsigned int attachment=(unsigned int)lua_tointeger(L,2);
	unsigned int textarget=(unsigned int)lua_tointeger(L,3);
	unsigned int texture=(unsigned int)lua_tointeger(L,4);
	int level=(int)lua_tointeger(L,5);

	::glFramebufferTexture1D(target, attachment, textarget, texture, level);

	return 0;
}

// void glFramebufferTexture2D(unsigned int target, unsigned int attachment, unsigned int textarget, unsigned int texture, int level)
static int _bind_glFramebufferTexture2D(lua_State *L) {
	if (!_lg_typecheck_glFramebufferTexture2D(L)) {
		luaL_error(L, "luna typecheck failed in void glFramebufferTexture2D(unsigned int target, unsigned int attachment, unsigned int textarget, unsigned int texture, int level) function, expected prototype:\nvoid glFramebufferTexture2D(unsigned int target, unsigned int attachment, unsigned int textarget, unsigned int texture, int level)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	unsigned int attachment=(unsigned int)lua_tointeger(L,2);
	unsigned int textarget=(unsigned int)lua_tointeger(L,3);
	unsigned int texture=(unsigned int)lua_tointeger(L,4);
	int level=(int)lua_tointeger(L,5);

	::glFramebufferTexture2D(target, attachment, textarget, texture, level);

	return 0;
}

// void glFramebufferTexture3D(unsigned int target, unsigned int attachment, unsigned int textarget, unsigned int texture, int level, int zoffset)
static int _bind_glFramebufferTexture3D(lua_State *L) {
	if (!_lg_typecheck_glFramebufferTexture3D(L)) {
		luaL_error(L, "luna typecheck failed in void glFramebufferTexture3D(unsigned int target, unsigned int attachment, unsigned int textarget, unsigned int texture, int level, int zoffset) function, expected prototype:\nvoid glFramebufferTexture3D(unsigned int target, unsigned int attachment, unsigned int textarget, unsigned int texture, int level, int zoffset)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	unsigned int attachment=(unsigned int)lua_tointeger(L,2);
	unsigned int textarget=(unsigned int)lua_tointeger(L,3);
	unsigned int texture=(unsigned int)lua_tointeger(L,4);
	int level=(int)lua_tointeger(L,5);
	int zoffset=(int)lua_tointeger(L,6);

	::glFramebufferTexture3D(target, attachment, textarget, texture, level, zoffset);

	return 0;
}

// void glFramebufferRenderbuffer(unsigned int target, unsigned int attachment, unsigned int renderbuffertarget, unsigned int renderbuffer)
static int _bind_glFramebufferRenderbuffer(lua_State *L) {
	if (!_lg_typecheck_glFramebufferRenderbuffer(L)) {
		luaL_error(L, "luna typecheck failed in void glFramebufferRenderbuffer(unsigned int target, unsigned int attachment, unsigned int renderbuffertarget, unsigned int renderbuffer) function, expected prototype:\nvoid glFramebufferRenderbuffer(unsigned int target, unsigned int attachment, unsigned int renderbuffertarget, unsigned int renderbuffer)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	unsigned int attachment=(unsigned int)lua_tointeger(L,2);
	unsigned int renderbuffertarget=(unsigned int)lua_tointeger(L,3);
	unsigned int renderbuffer=(unsigned int)lua_tointeger(L,4);

	::glFramebufferRenderbuffer(target, attachment, renderbuffertarget, renderbuffer);

	return 0;
}

// void glGetFramebufferAttachmentParameteriv(unsigned int target, unsigned int attachment, unsigned int pname, int * params)
static int _bind_glGetFramebufferAttachmentParameteriv(lua_State *L) {
	if (!_lg_typecheck_glGetFramebufferAttachmentParameteriv(L)) {
		luaL_error(L, "luna typecheck failed in void glGetFramebufferAttachmentParameteriv(unsigned int target, unsigned int attachment, unsigned int pname, int * params) function, expected prototype:\nvoid glGetFramebufferAttachmentParameteriv(unsigned int target, unsigned int attachment, unsigned int pname, int * params)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	unsigned int attachment=(unsigned int)lua_tointeger(L,2);
	unsigned int pname=(unsigned int)lua_tointeger(L,3);
	int* params=(int*)Luna< void >::check(L,4);

	::glGetFramebufferAttachmentParameteriv(target, attachment, pname, params);

	return 0;
}

// void glGenerateMipmap(unsigned int target)
static int _bind_glGenerateMipmap(lua_State *L) {
	if (!_lg_typecheck_glGenerateMipmap(L)) {
		luaL_error(L, "luna typecheck failed in void glGenerateMipmap(unsigned int target) function, expected prototype:\nvoid glGenerateMipmap(unsigned int target)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);

	::glGenerateMipmap(target);

	return 0;
}

// void glBlitFramebuffer(int srcX0, int srcY0, int srcX1, int srcY1, int dstX0, int dstY0, int dstX1, int dstY1, unsigned int mask, unsigned int filter)
static int _bind_glBlitFramebuffer(lua_State *L) {
	if (!_lg_typecheck_glBlitFramebuffer(L)) {
		luaL_error(L, "luna typecheck failed in void glBlitFramebuffer(int srcX0, int srcY0, int srcX1, int srcY1, int dstX0, int dstY0, int dstX1, int dstY1, unsigned int mask, unsigned int filter) function, expected prototype:\nvoid glBlitFramebuffer(int srcX0, int srcY0, int srcX1, int srcY1, int dstX0, int dstY0, int dstX1, int dstY1, unsigned int mask, unsigned int filter)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int srcX0=(int)lua_tointeger(L,1);
	int srcY0=(int)lua_tointeger(L,2);
	int srcX1=(int)lua_tointeger(L,3);
	int srcY1=(int)lua_tointeger(L,4);
	int dstX0=(int)lua_tointeger(L,5);
	int dstY0=(int)lua_tointeger(L,6);
	int dstX1=(int)lua_tointeger(L,7);
	int dstY1=(int)lua_tointeger(L,8);
	unsigned int mask=(unsigned int)lua_tointeger(L,9);
	unsigned int filter=(unsigned int)lua_tointeger(L,10);

	::glBlitFramebuffer(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);

	return 0;
}

// void glRenderbufferStorageMultisample(unsigned int target, int samples, unsigned int internalformat, int width, int height)
static int _bind_glRenderbufferStorageMultisample(lua_State *L) {
	if (!_lg_typecheck_glRenderbufferStorageMultisample(L)) {
		luaL_error(L, "luna typecheck failed in void glRenderbufferStorageMultisample(unsigned int target, int samples, unsigned int internalformat, int width, int height) function, expected prototype:\nvoid glRenderbufferStorageMultisample(unsigned int target, int samples, unsigned int internalformat, int width, int height)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	int samples=(int)lua_tointeger(L,2);
	unsigned int internalformat=(unsigned int)lua_tointeger(L,3);
	int width=(int)lua_tointeger(L,4);
	int height=(int)lua_tointeger(L,5);

	::glRenderbufferStorageMultisample(target, samples, internalformat, width, height);

	return 0;
}

// void glFramebufferTextureLayer(unsigned int target, unsigned int attachment, unsigned int texture, int level, int layer)
static int _bind_glFramebufferTextureLayer(lua_State *L) {
	if (!_lg_typecheck_glFramebufferTextureLayer(L)) {
		luaL_error(L, "luna typecheck failed in void glFramebufferTextureLayer(unsigned int target, unsigned int attachment, unsigned int texture, int level, int layer) function, expected prototype:\nvoid glFramebufferTextureLayer(unsigned int target, unsigned int attachment, unsigned int texture, int level, int layer)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	unsigned int attachment=(unsigned int)lua_tointeger(L,2);
	unsigned int texture=(unsigned int)lua_tointeger(L,3);
	int level=(int)lua_tointeger(L,4);
	int layer=(int)lua_tointeger(L,5);

	::glFramebufferTextureLayer(target, attachment, texture, level, layer);

	return 0;
}

// void * glMapBufferRange(unsigned int target, __int64 offset, __int64 length, unsigned int access)
static int _bind_glMapBufferRange(lua_State *L) {
	if (!_lg_typecheck_glMapBufferRange(L)) {
		luaL_error(L, "luna typecheck failed in void * glMapBufferRange(unsigned int target, __int64 offset, __int64 length, unsigned int access) function, expected prototype:\nvoid * glMapBufferRange(unsigned int target, __int64 offset, __int64 length, unsigned int access)\nClass arguments details:\narg 2 ID = [unknown]\narg 3 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	__int64* offset_ptr=(Luna< __int64 >::check(L,2));
	if( !offset_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg offset in glMapBufferRange function");
	}
	__int64 offset=*offset_ptr;
	__int64* length_ptr=(Luna< __int64 >::check(L,3));
	if( !length_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg length in glMapBufferRange function");
	}
	__int64 length=*length_ptr;
	unsigned int access=(unsigned int)lua_tointeger(L,4);

	void * lret = ::glMapBufferRange(target, offset, length, access);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< void >::push(L,lret,false);

	return 1;
}

// void glFlushMappedBufferRange(unsigned int target, __int64 offset, __int64 length)
static int _bind_glFlushMappedBufferRange(lua_State *L) {
	if (!_lg_typecheck_glFlushMappedBufferRange(L)) {
		luaL_error(L, "luna typecheck failed in void glFlushMappedBufferRange(unsigned int target, __int64 offset, __int64 length) function, expected prototype:\nvoid glFlushMappedBufferRange(unsigned int target, __int64 offset, __int64 length)\nClass arguments details:\narg 2 ID = [unknown]\narg 3 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	__int64* offset_ptr=(Luna< __int64 >::check(L,2));
	if( !offset_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg offset in glFlushMappedBufferRange function");
	}
	__int64 offset=*offset_ptr;
	__int64* length_ptr=(Luna< __int64 >::check(L,3));
	if( !length_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg length in glFlushMappedBufferRange function");
	}
	__int64 length=*length_ptr;

	::glFlushMappedBufferRange(target, offset, length);

	return 0;
}

// void glBindVertexArray(unsigned int array)
static int _bind_glBindVertexArray(lua_State *L) {
	if (!_lg_typecheck_glBindVertexArray(L)) {
		luaL_error(L, "luna typecheck failed in void glBindVertexArray(unsigned int array) function, expected prototype:\nvoid glBindVertexArray(unsigned int array)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int array=(unsigned int)lua_tointeger(L,1);

	::glBindVertexArray(array);

	return 0;
}

// void glDeleteVertexArrays(int n, const unsigned int * arrays)
static int _bind_glDeleteVertexArrays(lua_State *L) {
	if (!_lg_typecheck_glDeleteVertexArrays(L)) {
		luaL_error(L, "luna typecheck failed in void glDeleteVertexArrays(int n, const unsigned int * arrays) function, expected prototype:\nvoid glDeleteVertexArrays(int n, const unsigned int * arrays)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int n=(int)lua_tointeger(L,1);
	const unsigned int* arrays=(const unsigned int*)Luna< void >::check(L,2);

	::glDeleteVertexArrays(n, arrays);

	return 0;
}

// void glGenVertexArrays(int n, unsigned int * arrays)
static int _bind_glGenVertexArrays(lua_State *L) {
	if (!_lg_typecheck_glGenVertexArrays(L)) {
		luaL_error(L, "luna typecheck failed in void glGenVertexArrays(int n, unsigned int * arrays) function, expected prototype:\nvoid glGenVertexArrays(int n, unsigned int * arrays)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int n=(int)lua_tointeger(L,1);
	unsigned int* arrays=(unsigned int*)Luna< void >::check(L,2);

	::glGenVertexArrays(n, arrays);

	return 0;
}

// unsigned char glIsVertexArray(unsigned int array)
static int _bind_glIsVertexArray(lua_State *L) {
	if (!_lg_typecheck_glIsVertexArray(L)) {
		luaL_error(L, "luna typecheck failed in unsigned char glIsVertexArray(unsigned int array) function, expected prototype:\nunsigned char glIsVertexArray(unsigned int array)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int array=(unsigned int)lua_tointeger(L,1);

	unsigned char lret = ::glIsVertexArray(array);
	lua_pushnumber(L,(int)lret);

	return 1;
}

// void glGetActiveUniformsiv(unsigned int program, int uniformCount, const unsigned int * uniformIndices, unsigned int pname, int * params)
static int _bind_glGetActiveUniformsiv(lua_State *L) {
	if (!_lg_typecheck_glGetActiveUniformsiv(L)) {
		luaL_error(L, "luna typecheck failed in void glGetActiveUniformsiv(unsigned int program, int uniformCount, const unsigned int * uniformIndices, unsigned int pname, int * params) function, expected prototype:\nvoid glGetActiveUniformsiv(unsigned int program, int uniformCount, const unsigned int * uniformIndices, unsigned int pname, int * params)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	int uniformCount=(int)lua_tointeger(L,2);
	const unsigned int* uniformIndices=(const unsigned int*)Luna< void >::check(L,3);
	unsigned int pname=(unsigned int)lua_tointeger(L,4);
	int* params=(int*)Luna< void >::check(L,5);

	::glGetActiveUniformsiv(program, uniformCount, uniformIndices, pname, params);

	return 0;
}

// void glGetActiveUniformName(unsigned int program, unsigned int uniformIndex, int bufSize, int * length, char * uniformName)
static int _bind_glGetActiveUniformName(lua_State *L) {
	if (!_lg_typecheck_glGetActiveUniformName(L)) {
		luaL_error(L, "luna typecheck failed in void glGetActiveUniformName(unsigned int program, unsigned int uniformIndex, int bufSize, int * length, char * uniformName) function, expected prototype:\nvoid glGetActiveUniformName(unsigned int program, unsigned int uniformIndex, int bufSize, int * length, char * uniformName)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	unsigned int uniformIndex=(unsigned int)lua_tointeger(L,2);
	int bufSize=(int)lua_tointeger(L,3);
	int* length=(int*)Luna< void >::check(L,4);
	char* uniformName=(char*)Luna< void >::check(L,5);

	::glGetActiveUniformName(program, uniformIndex, bufSize, length, uniformName);

	return 0;
}

// unsigned int glGetUniformBlockIndex(unsigned int program, const char * uniformBlockName)
static int _bind_glGetUniformBlockIndex(lua_State *L) {
	if (!_lg_typecheck_glGetUniformBlockIndex(L)) {
		luaL_error(L, "luna typecheck failed in unsigned int glGetUniformBlockIndex(unsigned int program, const char * uniformBlockName) function, expected prototype:\nunsigned int glGetUniformBlockIndex(unsigned int program, const char * uniformBlockName)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	const char * uniformBlockName=(const char *)lua_tostring(L,2);

	unsigned int lret = ::glGetUniformBlockIndex(program, uniformBlockName);
	lua_pushnumber(L,lret);

	return 1;
}

// void glGetActiveUniformBlockiv(unsigned int program, unsigned int uniformBlockIndex, unsigned int pname, int * params)
static int _bind_glGetActiveUniformBlockiv(lua_State *L) {
	if (!_lg_typecheck_glGetActiveUniformBlockiv(L)) {
		luaL_error(L, "luna typecheck failed in void glGetActiveUniformBlockiv(unsigned int program, unsigned int uniformBlockIndex, unsigned int pname, int * params) function, expected prototype:\nvoid glGetActiveUniformBlockiv(unsigned int program, unsigned int uniformBlockIndex, unsigned int pname, int * params)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	unsigned int uniformBlockIndex=(unsigned int)lua_tointeger(L,2);
	unsigned int pname=(unsigned int)lua_tointeger(L,3);
	int* params=(int*)Luna< void >::check(L,4);

	::glGetActiveUniformBlockiv(program, uniformBlockIndex, pname, params);

	return 0;
}

// void glGetActiveUniformBlockName(unsigned int program, unsigned int uniformBlockIndex, int bufSize, int * length, char * uniformBlockName)
static int _bind_glGetActiveUniformBlockName(lua_State *L) {
	if (!_lg_typecheck_glGetActiveUniformBlockName(L)) {
		luaL_error(L, "luna typecheck failed in void glGetActiveUniformBlockName(unsigned int program, unsigned int uniformBlockIndex, int bufSize, int * length, char * uniformBlockName) function, expected prototype:\nvoid glGetActiveUniformBlockName(unsigned int program, unsigned int uniformBlockIndex, int bufSize, int * length, char * uniformBlockName)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	unsigned int uniformBlockIndex=(unsigned int)lua_tointeger(L,2);
	int bufSize=(int)lua_tointeger(L,3);
	int* length=(int*)Luna< void >::check(L,4);
	char* uniformBlockName=(char*)Luna< void >::check(L,5);

	::glGetActiveUniformBlockName(program, uniformBlockIndex, bufSize, length, uniformBlockName);

	return 0;
}

// void glUniformBlockBinding(unsigned int program, unsigned int uniformBlockIndex, unsigned int uniformBlockBinding)
static int _bind_glUniformBlockBinding(lua_State *L) {
	if (!_lg_typecheck_glUniformBlockBinding(L)) {
		luaL_error(L, "luna typecheck failed in void glUniformBlockBinding(unsigned int program, unsigned int uniformBlockIndex, unsigned int uniformBlockBinding) function, expected prototype:\nvoid glUniformBlockBinding(unsigned int program, unsigned int uniformBlockIndex, unsigned int uniformBlockBinding)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	unsigned int uniformBlockIndex=(unsigned int)lua_tointeger(L,2);
	unsigned int uniformBlockBinding=(unsigned int)lua_tointeger(L,3);

	::glUniformBlockBinding(program, uniformBlockIndex, uniformBlockBinding);

	return 0;
}

// void glCopyBufferSubData(unsigned int readTarget, unsigned int writeTarget, __int64 readOffset, __int64 writeOffset, __int64 size)
static int _bind_glCopyBufferSubData(lua_State *L) {
	if (!_lg_typecheck_glCopyBufferSubData(L)) {
		luaL_error(L, "luna typecheck failed in void glCopyBufferSubData(unsigned int readTarget, unsigned int writeTarget, __int64 readOffset, __int64 writeOffset, __int64 size) function, expected prototype:\nvoid glCopyBufferSubData(unsigned int readTarget, unsigned int writeTarget, __int64 readOffset, __int64 writeOffset, __int64 size)\nClass arguments details:\narg 3 ID = [unknown]\narg 4 ID = [unknown]\narg 5 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int readTarget=(unsigned int)lua_tointeger(L,1);
	unsigned int writeTarget=(unsigned int)lua_tointeger(L,2);
	__int64* readOffset_ptr=(Luna< __int64 >::check(L,3));
	if( !readOffset_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg readOffset in glCopyBufferSubData function");
	}
	__int64 readOffset=*readOffset_ptr;
	__int64* writeOffset_ptr=(Luna< __int64 >::check(L,4));
	if( !writeOffset_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg writeOffset in glCopyBufferSubData function");
	}
	__int64 writeOffset=*writeOffset_ptr;
	__int64* size_ptr=(Luna< __int64 >::check(L,5));
	if( !size_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg size in glCopyBufferSubData function");
	}
	__int64 size=*size_ptr;

	::glCopyBufferSubData(readTarget, writeTarget, readOffset, writeOffset, size);

	return 0;
}

// void glDrawElementsBaseVertex(unsigned int mode, int count, unsigned int type, void * indices, int basevertex)
static int _bind_glDrawElementsBaseVertex(lua_State *L) {
	if (!_lg_typecheck_glDrawElementsBaseVertex(L)) {
		luaL_error(L, "luna typecheck failed in void glDrawElementsBaseVertex(unsigned int mode, int count, unsigned int type, void * indices, int basevertex) function, expected prototype:\nvoid glDrawElementsBaseVertex(unsigned int mode, int count, unsigned int type, void * indices, int basevertex)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int mode=(unsigned int)lua_tointeger(L,1);
	int count=(int)lua_tointeger(L,2);
	unsigned int type=(unsigned int)lua_tointeger(L,3);
	void* indices=(Luna< void >::check(L,4));
	int basevertex=(int)lua_tointeger(L,5);

	::glDrawElementsBaseVertex(mode, count, type, indices, basevertex);

	return 0;
}

// void glDrawRangeElementsBaseVertex(unsigned int mode, unsigned int start, unsigned int end, int count, unsigned int type, void * indices, int basevertex)
static int _bind_glDrawRangeElementsBaseVertex(lua_State *L) {
	if (!_lg_typecheck_glDrawRangeElementsBaseVertex(L)) {
		luaL_error(L, "luna typecheck failed in void glDrawRangeElementsBaseVertex(unsigned int mode, unsigned int start, unsigned int end, int count, unsigned int type, void * indices, int basevertex) function, expected prototype:\nvoid glDrawRangeElementsBaseVertex(unsigned int mode, unsigned int start, unsigned int end, int count, unsigned int type, void * indices, int basevertex)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int mode=(unsigned int)lua_tointeger(L,1);
	unsigned int start=(unsigned int)lua_tointeger(L,2);
	unsigned int end=(unsigned int)lua_tointeger(L,3);
	int count=(int)lua_tointeger(L,4);
	unsigned int type=(unsigned int)lua_tointeger(L,5);
	void* indices=(Luna< void >::check(L,6));
	int basevertex=(int)lua_tointeger(L,7);

	::glDrawRangeElementsBaseVertex(mode, start, end, count, type, indices, basevertex);

	return 0;
}

// void glDrawElementsInstancedBaseVertex(unsigned int mode, int count, unsigned int type, void * indices, int instancecount, int basevertex)
static int _bind_glDrawElementsInstancedBaseVertex(lua_State *L) {
	if (!_lg_typecheck_glDrawElementsInstancedBaseVertex(L)) {
		luaL_error(L, "luna typecheck failed in void glDrawElementsInstancedBaseVertex(unsigned int mode, int count, unsigned int type, void * indices, int instancecount, int basevertex) function, expected prototype:\nvoid glDrawElementsInstancedBaseVertex(unsigned int mode, int count, unsigned int type, void * indices, int instancecount, int basevertex)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int mode=(unsigned int)lua_tointeger(L,1);
	int count=(int)lua_tointeger(L,2);
	unsigned int type=(unsigned int)lua_tointeger(L,3);
	void* indices=(Luna< void >::check(L,4));
	int instancecount=(int)lua_tointeger(L,5);
	int basevertex=(int)lua_tointeger(L,6);

	::glDrawElementsInstancedBaseVertex(mode, count, type, indices, instancecount, basevertex);

	return 0;
}

// void glProvokingVertex(unsigned int mode)
static int _bind_glProvokingVertex(lua_State *L) {
	if (!_lg_typecheck_glProvokingVertex(L)) {
		luaL_error(L, "luna typecheck failed in void glProvokingVertex(unsigned int mode) function, expected prototype:\nvoid glProvokingVertex(unsigned int mode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int mode=(unsigned int)lua_tointeger(L,1);

	::glProvokingVertex(mode);

	return 0;
}

// void glTexImage2DMultisample(unsigned int target, int samples, int internalformat, int width, int height, unsigned char fixedsamplelocations)
static int _bind_glTexImage2DMultisample(lua_State *L) {
	if (!_lg_typecheck_glTexImage2DMultisample(L)) {
		luaL_error(L, "luna typecheck failed in void glTexImage2DMultisample(unsigned int target, int samples, int internalformat, int width, int height, unsigned char fixedsamplelocations) function, expected prototype:\nvoid glTexImage2DMultisample(unsigned int target, int samples, int internalformat, int width, int height, unsigned char fixedsamplelocations)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	int samples=(int)lua_tointeger(L,2);
	int internalformat=(int)lua_tointeger(L,3);
	int width=(int)lua_tointeger(L,4);
	int height=(int)lua_tointeger(L,5);
	unsigned char fixedsamplelocations = (unsigned char)(lua_tointeger(L,6));

	::glTexImage2DMultisample(target, samples, internalformat, width, height, fixedsamplelocations);

	return 0;
}

// void glTexImage3DMultisample(unsigned int target, int samples, int internalformat, int width, int height, int depth, unsigned char fixedsamplelocations)
static int _bind_glTexImage3DMultisample(lua_State *L) {
	if (!_lg_typecheck_glTexImage3DMultisample(L)) {
		luaL_error(L, "luna typecheck failed in void glTexImage3DMultisample(unsigned int target, int samples, int internalformat, int width, int height, int depth, unsigned char fixedsamplelocations) function, expected prototype:\nvoid glTexImage3DMultisample(unsigned int target, int samples, int internalformat, int width, int height, int depth, unsigned char fixedsamplelocations)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	int samples=(int)lua_tointeger(L,2);
	int internalformat=(int)lua_tointeger(L,3);
	int width=(int)lua_tointeger(L,4);
	int height=(int)lua_tointeger(L,5);
	int depth=(int)lua_tointeger(L,6);
	unsigned char fixedsamplelocations = (unsigned char)(lua_tointeger(L,7));

	::glTexImage3DMultisample(target, samples, internalformat, width, height, depth, fixedsamplelocations);

	return 0;
}

// void glGetMultisamplefv(unsigned int pname, unsigned int index, float * val)
static int _bind_glGetMultisamplefv(lua_State *L) {
	if (!_lg_typecheck_glGetMultisamplefv(L)) {
		luaL_error(L, "luna typecheck failed in void glGetMultisamplefv(unsigned int pname, unsigned int index, float * val) function, expected prototype:\nvoid glGetMultisamplefv(unsigned int pname, unsigned int index, float * val)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int pname=(unsigned int)lua_tointeger(L,1);
	unsigned int index=(unsigned int)lua_tointeger(L,2);
	float* val=(float*)Luna< void >::check(L,3);

	::glGetMultisamplefv(pname, index, val);

	return 0;
}

// void glSampleMaski(unsigned int index, unsigned int mask)
static int _bind_glSampleMaski(lua_State *L) {
	if (!_lg_typecheck_glSampleMaski(L)) {
		luaL_error(L, "luna typecheck failed in void glSampleMaski(unsigned int index, unsigned int mask) function, expected prototype:\nvoid glSampleMaski(unsigned int index, unsigned int mask)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	unsigned int mask=(unsigned int)lua_tointeger(L,2);

	::glSampleMaski(index, mask);

	return 0;
}

// void glBlendEquationiARB(unsigned int buf, unsigned int mode)
static int _bind_glBlendEquationiARB(lua_State *L) {
	if (!_lg_typecheck_glBlendEquationiARB(L)) {
		luaL_error(L, "luna typecheck failed in void glBlendEquationiARB(unsigned int buf, unsigned int mode) function, expected prototype:\nvoid glBlendEquationiARB(unsigned int buf, unsigned int mode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int buf=(unsigned int)lua_tointeger(L,1);
	unsigned int mode=(unsigned int)lua_tointeger(L,2);

	::glBlendEquationiARB(buf, mode);

	return 0;
}

// void glBlendEquationSeparateiARB(unsigned int buf, unsigned int modeRGB, unsigned int modeAlpha)
static int _bind_glBlendEquationSeparateiARB(lua_State *L) {
	if (!_lg_typecheck_glBlendEquationSeparateiARB(L)) {
		luaL_error(L, "luna typecheck failed in void glBlendEquationSeparateiARB(unsigned int buf, unsigned int modeRGB, unsigned int modeAlpha) function, expected prototype:\nvoid glBlendEquationSeparateiARB(unsigned int buf, unsigned int modeRGB, unsigned int modeAlpha)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int buf=(unsigned int)lua_tointeger(L,1);
	unsigned int modeRGB=(unsigned int)lua_tointeger(L,2);
	unsigned int modeAlpha=(unsigned int)lua_tointeger(L,3);

	::glBlendEquationSeparateiARB(buf, modeRGB, modeAlpha);

	return 0;
}

// void glBlendFunciARB(unsigned int buf, unsigned int src, unsigned int dst)
static int _bind_glBlendFunciARB(lua_State *L) {
	if (!_lg_typecheck_glBlendFunciARB(L)) {
		luaL_error(L, "luna typecheck failed in void glBlendFunciARB(unsigned int buf, unsigned int src, unsigned int dst) function, expected prototype:\nvoid glBlendFunciARB(unsigned int buf, unsigned int src, unsigned int dst)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int buf=(unsigned int)lua_tointeger(L,1);
	unsigned int src=(unsigned int)lua_tointeger(L,2);
	unsigned int dst=(unsigned int)lua_tointeger(L,3);

	::glBlendFunciARB(buf, src, dst);

	return 0;
}

// void glBlendFuncSeparateiARB(unsigned int buf, unsigned int srcRGB, unsigned int dstRGB, unsigned int srcAlpha, unsigned int dstAlpha)
static int _bind_glBlendFuncSeparateiARB(lua_State *L) {
	if (!_lg_typecheck_glBlendFuncSeparateiARB(L)) {
		luaL_error(L, "luna typecheck failed in void glBlendFuncSeparateiARB(unsigned int buf, unsigned int srcRGB, unsigned int dstRGB, unsigned int srcAlpha, unsigned int dstAlpha) function, expected prototype:\nvoid glBlendFuncSeparateiARB(unsigned int buf, unsigned int srcRGB, unsigned int dstRGB, unsigned int srcAlpha, unsigned int dstAlpha)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int buf=(unsigned int)lua_tointeger(L,1);
	unsigned int srcRGB=(unsigned int)lua_tointeger(L,2);
	unsigned int dstRGB=(unsigned int)lua_tointeger(L,3);
	unsigned int srcAlpha=(unsigned int)lua_tointeger(L,4);
	unsigned int dstAlpha=(unsigned int)lua_tointeger(L,5);

	::glBlendFuncSeparateiARB(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);

	return 0;
}

// void glMinSampleShadingARB(float value)
static int _bind_glMinSampleShadingARB(lua_State *L) {
	if (!_lg_typecheck_glMinSampleShadingARB(L)) {
		luaL_error(L, "luna typecheck failed in void glMinSampleShadingARB(float value) function, expected prototype:\nvoid glMinSampleShadingARB(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	float value=(float)lua_tonumber(L,1);

	::glMinSampleShadingARB(value);

	return 0;
}

// void glNamedStringARB(unsigned int type, int namelen, const char * name, int stringlen, const char * string)
static int _bind_glNamedStringARB(lua_State *L) {
	if (!_lg_typecheck_glNamedStringARB(L)) {
		luaL_error(L, "luna typecheck failed in void glNamedStringARB(unsigned int type, int namelen, const char * name, int stringlen, const char * string) function, expected prototype:\nvoid glNamedStringARB(unsigned int type, int namelen, const char * name, int stringlen, const char * string)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int type=(unsigned int)lua_tointeger(L,1);
	int namelen=(int)lua_tointeger(L,2);
	const char * name=(const char *)lua_tostring(L,3);
	int stringlen=(int)lua_tointeger(L,4);
	const char * string=(const char *)lua_tostring(L,5);

	::glNamedStringARB(type, namelen, name, stringlen, string);

	return 0;
}

// void glDeleteNamedStringARB(int namelen, const char * name)
static int _bind_glDeleteNamedStringARB(lua_State *L) {
	if (!_lg_typecheck_glDeleteNamedStringARB(L)) {
		luaL_error(L, "luna typecheck failed in void glDeleteNamedStringARB(int namelen, const char * name) function, expected prototype:\nvoid glDeleteNamedStringARB(int namelen, const char * name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int namelen=(int)lua_tointeger(L,1);
	const char * name=(const char *)lua_tostring(L,2);

	::glDeleteNamedStringARB(namelen, name);

	return 0;
}

// unsigned char glIsNamedStringARB(int namelen, const char * name)
static int _bind_glIsNamedStringARB(lua_State *L) {
	if (!_lg_typecheck_glIsNamedStringARB(L)) {
		luaL_error(L, "luna typecheck failed in unsigned char glIsNamedStringARB(int namelen, const char * name) function, expected prototype:\nunsigned char glIsNamedStringARB(int namelen, const char * name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int namelen=(int)lua_tointeger(L,1);
	const char * name=(const char *)lua_tostring(L,2);

	unsigned char lret = ::glIsNamedStringARB(namelen, name);
	lua_pushnumber(L,(int)lret);

	return 1;
}

// void glGetNamedStringARB(int namelen, const char * name, int bufSize, int * stringlen, char * string)
static int _bind_glGetNamedStringARB(lua_State *L) {
	if (!_lg_typecheck_glGetNamedStringARB(L)) {
		luaL_error(L, "luna typecheck failed in void glGetNamedStringARB(int namelen, const char * name, int bufSize, int * stringlen, char * string) function, expected prototype:\nvoid glGetNamedStringARB(int namelen, const char * name, int bufSize, int * stringlen, char * string)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int namelen=(int)lua_tointeger(L,1);
	const char * name=(const char *)lua_tostring(L,2);
	int bufSize=(int)lua_tointeger(L,3);
	int* stringlen=(int*)Luna< void >::check(L,4);
	char* string=(char*)Luna< void >::check(L,5);

	::glGetNamedStringARB(namelen, name, bufSize, stringlen, string);

	return 0;
}

// void glGetNamedStringivARB(int namelen, const char * name, unsigned int pname, int * params)
static int _bind_glGetNamedStringivARB(lua_State *L) {
	if (!_lg_typecheck_glGetNamedStringivARB(L)) {
		luaL_error(L, "luna typecheck failed in void glGetNamedStringivARB(int namelen, const char * name, unsigned int pname, int * params) function, expected prototype:\nvoid glGetNamedStringivARB(int namelen, const char * name, unsigned int pname, int * params)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int namelen=(int)lua_tointeger(L,1);
	const char * name=(const char *)lua_tostring(L,2);
	unsigned int pname=(unsigned int)lua_tointeger(L,3);
	int* params=(int*)Luna< void >::check(L,4);

	::glGetNamedStringivARB(namelen, name, pname, params);

	return 0;
}

// void glBindFragDataLocationIndexed(unsigned int program, unsigned int colorNumber, unsigned int index, const char * name)
static int _bind_glBindFragDataLocationIndexed(lua_State *L) {
	if (!_lg_typecheck_glBindFragDataLocationIndexed(L)) {
		luaL_error(L, "luna typecheck failed in void glBindFragDataLocationIndexed(unsigned int program, unsigned int colorNumber, unsigned int index, const char * name) function, expected prototype:\nvoid glBindFragDataLocationIndexed(unsigned int program, unsigned int colorNumber, unsigned int index, const char * name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	unsigned int colorNumber=(unsigned int)lua_tointeger(L,2);
	unsigned int index=(unsigned int)lua_tointeger(L,3);
	const char * name=(const char *)lua_tostring(L,4);

	::glBindFragDataLocationIndexed(program, colorNumber, index, name);

	return 0;
}

// int glGetFragDataIndex(unsigned int program, const char * name)
static int _bind_glGetFragDataIndex(lua_State *L) {
	if (!_lg_typecheck_glGetFragDataIndex(L)) {
		luaL_error(L, "luna typecheck failed in int glGetFragDataIndex(unsigned int program, const char * name) function, expected prototype:\nint glGetFragDataIndex(unsigned int program, const char * name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	const char * name=(const char *)lua_tostring(L,2);

	int lret = ::glGetFragDataIndex(program, name);
	lua_pushnumber(L,lret);

	return 1;
}

// void glGenSamplers(int count, unsigned int * samplers)
static int _bind_glGenSamplers(lua_State *L) {
	if (!_lg_typecheck_glGenSamplers(L)) {
		luaL_error(L, "luna typecheck failed in void glGenSamplers(int count, unsigned int * samplers) function, expected prototype:\nvoid glGenSamplers(int count, unsigned int * samplers)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int count=(int)lua_tointeger(L,1);
	unsigned int* samplers=(unsigned int*)Luna< void >::check(L,2);

	::glGenSamplers(count, samplers);

	return 0;
}

// void glDeleteSamplers(int count, const unsigned int * samplers)
static int _bind_glDeleteSamplers(lua_State *L) {
	if (!_lg_typecheck_glDeleteSamplers(L)) {
		luaL_error(L, "luna typecheck failed in void glDeleteSamplers(int count, const unsigned int * samplers) function, expected prototype:\nvoid glDeleteSamplers(int count, const unsigned int * samplers)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int count=(int)lua_tointeger(L,1);
	const unsigned int* samplers=(const unsigned int*)Luna< void >::check(L,2);

	::glDeleteSamplers(count, samplers);

	return 0;
}

// unsigned char glIsSampler(unsigned int sampler)
static int _bind_glIsSampler(lua_State *L) {
	if (!_lg_typecheck_glIsSampler(L)) {
		luaL_error(L, "luna typecheck failed in unsigned char glIsSampler(unsigned int sampler) function, expected prototype:\nunsigned char glIsSampler(unsigned int sampler)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int sampler=(unsigned int)lua_tointeger(L,1);

	unsigned char lret = ::glIsSampler(sampler);
	lua_pushnumber(L,(int)lret);

	return 1;
}

// void glBindSampler(unsigned int unit, unsigned int sampler)
static int _bind_glBindSampler(lua_State *L) {
	if (!_lg_typecheck_glBindSampler(L)) {
		luaL_error(L, "luna typecheck failed in void glBindSampler(unsigned int unit, unsigned int sampler) function, expected prototype:\nvoid glBindSampler(unsigned int unit, unsigned int sampler)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int unit=(unsigned int)lua_tointeger(L,1);
	unsigned int sampler=(unsigned int)lua_tointeger(L,2);

	::glBindSampler(unit, sampler);

	return 0;
}

// void glSamplerParameteri(unsigned int sampler, unsigned int pname, int param)
static int _bind_glSamplerParameteri(lua_State *L) {
	if (!_lg_typecheck_glSamplerParameteri(L)) {
		luaL_error(L, "luna typecheck failed in void glSamplerParameteri(unsigned int sampler, unsigned int pname, int param) function, expected prototype:\nvoid glSamplerParameteri(unsigned int sampler, unsigned int pname, int param)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int sampler=(unsigned int)lua_tointeger(L,1);
	unsigned int pname=(unsigned int)lua_tointeger(L,2);
	int param=(int)lua_tointeger(L,3);

	::glSamplerParameteri(sampler, pname, param);

	return 0;
}

// void glSamplerParameteriv(unsigned int sampler, unsigned int pname, const int * param)
static int _bind_glSamplerParameteriv(lua_State *L) {
	if (!_lg_typecheck_glSamplerParameteriv(L)) {
		luaL_error(L, "luna typecheck failed in void glSamplerParameteriv(unsigned int sampler, unsigned int pname, const int * param) function, expected prototype:\nvoid glSamplerParameteriv(unsigned int sampler, unsigned int pname, const int * param)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int sampler=(unsigned int)lua_tointeger(L,1);
	unsigned int pname=(unsigned int)lua_tointeger(L,2);
	const int* param=(const int*)Luna< void >::check(L,3);

	::glSamplerParameteriv(sampler, pname, param);

	return 0;
}

// void glSamplerParameterf(unsigned int sampler, unsigned int pname, float param)
static int _bind_glSamplerParameterf(lua_State *L) {
	if (!_lg_typecheck_glSamplerParameterf(L)) {
		luaL_error(L, "luna typecheck failed in void glSamplerParameterf(unsigned int sampler, unsigned int pname, float param) function, expected prototype:\nvoid glSamplerParameterf(unsigned int sampler, unsigned int pname, float param)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int sampler=(unsigned int)lua_tointeger(L,1);
	unsigned int pname=(unsigned int)lua_tointeger(L,2);
	float param=(float)lua_tonumber(L,3);

	::glSamplerParameterf(sampler, pname, param);

	return 0;
}

// void glSamplerParameterfv(unsigned int sampler, unsigned int pname, const float * param)
static int _bind_glSamplerParameterfv(lua_State *L) {
	if (!_lg_typecheck_glSamplerParameterfv(L)) {
		luaL_error(L, "luna typecheck failed in void glSamplerParameterfv(unsigned int sampler, unsigned int pname, const float * param) function, expected prototype:\nvoid glSamplerParameterfv(unsigned int sampler, unsigned int pname, const float * param)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int sampler=(unsigned int)lua_tointeger(L,1);
	unsigned int pname=(unsigned int)lua_tointeger(L,2);
	const float* param=(const float*)Luna< void >::check(L,3);

	::glSamplerParameterfv(sampler, pname, param);

	return 0;
}

// void glSamplerParameterIiv(unsigned int sampler, unsigned int pname, const int * param)
static int _bind_glSamplerParameterIiv(lua_State *L) {
	if (!_lg_typecheck_glSamplerParameterIiv(L)) {
		luaL_error(L, "luna typecheck failed in void glSamplerParameterIiv(unsigned int sampler, unsigned int pname, const int * param) function, expected prototype:\nvoid glSamplerParameterIiv(unsigned int sampler, unsigned int pname, const int * param)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int sampler=(unsigned int)lua_tointeger(L,1);
	unsigned int pname=(unsigned int)lua_tointeger(L,2);
	const int* param=(const int*)Luna< void >::check(L,3);

	::glSamplerParameterIiv(sampler, pname, param);

	return 0;
}

// void glSamplerParameterIuiv(unsigned int sampler, unsigned int pname, const unsigned int * param)
static int _bind_glSamplerParameterIuiv(lua_State *L) {
	if (!_lg_typecheck_glSamplerParameterIuiv(L)) {
		luaL_error(L, "luna typecheck failed in void glSamplerParameterIuiv(unsigned int sampler, unsigned int pname, const unsigned int * param) function, expected prototype:\nvoid glSamplerParameterIuiv(unsigned int sampler, unsigned int pname, const unsigned int * param)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int sampler=(unsigned int)lua_tointeger(L,1);
	unsigned int pname=(unsigned int)lua_tointeger(L,2);
	const unsigned int* param=(const unsigned int*)Luna< void >::check(L,3);

	::glSamplerParameterIuiv(sampler, pname, param);

	return 0;
}

// void glGetSamplerParameteriv(unsigned int sampler, unsigned int pname, int * params)
static int _bind_glGetSamplerParameteriv(lua_State *L) {
	if (!_lg_typecheck_glGetSamplerParameteriv(L)) {
		luaL_error(L, "luna typecheck failed in void glGetSamplerParameteriv(unsigned int sampler, unsigned int pname, int * params) function, expected prototype:\nvoid glGetSamplerParameteriv(unsigned int sampler, unsigned int pname, int * params)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int sampler=(unsigned int)lua_tointeger(L,1);
	unsigned int pname=(unsigned int)lua_tointeger(L,2);
	int* params=(int*)Luna< void >::check(L,3);

	::glGetSamplerParameteriv(sampler, pname, params);

	return 0;
}

// void glGetSamplerParameterIiv(unsigned int sampler, unsigned int pname, int * params)
static int _bind_glGetSamplerParameterIiv(lua_State *L) {
	if (!_lg_typecheck_glGetSamplerParameterIiv(L)) {
		luaL_error(L, "luna typecheck failed in void glGetSamplerParameterIiv(unsigned int sampler, unsigned int pname, int * params) function, expected prototype:\nvoid glGetSamplerParameterIiv(unsigned int sampler, unsigned int pname, int * params)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int sampler=(unsigned int)lua_tointeger(L,1);
	unsigned int pname=(unsigned int)lua_tointeger(L,2);
	int* params=(int*)Luna< void >::check(L,3);

	::glGetSamplerParameterIiv(sampler, pname, params);

	return 0;
}

// void glGetSamplerParameterfv(unsigned int sampler, unsigned int pname, float * params)
static int _bind_glGetSamplerParameterfv(lua_State *L) {
	if (!_lg_typecheck_glGetSamplerParameterfv(L)) {
		luaL_error(L, "luna typecheck failed in void glGetSamplerParameterfv(unsigned int sampler, unsigned int pname, float * params) function, expected prototype:\nvoid glGetSamplerParameterfv(unsigned int sampler, unsigned int pname, float * params)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int sampler=(unsigned int)lua_tointeger(L,1);
	unsigned int pname=(unsigned int)lua_tointeger(L,2);
	float* params=(float*)Luna< void >::check(L,3);

	::glGetSamplerParameterfv(sampler, pname, params);

	return 0;
}

// void glGetSamplerParameterIuiv(unsigned int sampler, unsigned int pname, unsigned int * params)
static int _bind_glGetSamplerParameterIuiv(lua_State *L) {
	if (!_lg_typecheck_glGetSamplerParameterIuiv(L)) {
		luaL_error(L, "luna typecheck failed in void glGetSamplerParameterIuiv(unsigned int sampler, unsigned int pname, unsigned int * params) function, expected prototype:\nvoid glGetSamplerParameterIuiv(unsigned int sampler, unsigned int pname, unsigned int * params)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int sampler=(unsigned int)lua_tointeger(L,1);
	unsigned int pname=(unsigned int)lua_tointeger(L,2);
	unsigned int* params=(unsigned int*)Luna< void >::check(L,3);

	::glGetSamplerParameterIuiv(sampler, pname, params);

	return 0;
}

// void glQueryCounter(unsigned int id, unsigned int target)
static int _bind_glQueryCounter(lua_State *L) {
	if (!_lg_typecheck_glQueryCounter(L)) {
		luaL_error(L, "luna typecheck failed in void glQueryCounter(unsigned int id, unsigned int target) function, expected prototype:\nvoid glQueryCounter(unsigned int id, unsigned int target)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int id=(unsigned int)lua_tointeger(L,1);
	unsigned int target=(unsigned int)lua_tointeger(L,2);

	::glQueryCounter(id, target);

	return 0;
}

// void glGetQueryObjecti64v(unsigned int id, unsigned int pname, __int64 * params)
static int _bind_glGetQueryObjecti64v(lua_State *L) {
	if (!_lg_typecheck_glGetQueryObjecti64v(L)) {
		luaL_error(L, "luna typecheck failed in void glGetQueryObjecti64v(unsigned int id, unsigned int pname, __int64 * params) function, expected prototype:\nvoid glGetQueryObjecti64v(unsigned int id, unsigned int pname, __int64 * params)\nClass arguments details:\narg 3 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int id=(unsigned int)lua_tointeger(L,1);
	unsigned int pname=(unsigned int)lua_tointeger(L,2);
	__int64* params=(Luna< __int64 >::check(L,3));

	::glGetQueryObjecti64v(id, pname, params);

	return 0;
}

// void glGetQueryObjectui64v(unsigned int id, unsigned int pname, __uint64 * params)
static int _bind_glGetQueryObjectui64v(lua_State *L) {
	if (!_lg_typecheck_glGetQueryObjectui64v(L)) {
		luaL_error(L, "luna typecheck failed in void glGetQueryObjectui64v(unsigned int id, unsigned int pname, __uint64 * params) function, expected prototype:\nvoid glGetQueryObjectui64v(unsigned int id, unsigned int pname, __uint64 * params)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int id=(unsigned int)lua_tointeger(L,1);
	unsigned int pname=(unsigned int)lua_tointeger(L,2);
	__uint64* params=(Luna< __uint64 >::check(L,3));

	::glGetQueryObjectui64v(id, pname, params);

	return 0;
}

// void glVertexP2ui(unsigned int type, unsigned int value)
static int _bind_glVertexP2ui(lua_State *L) {
	if (!_lg_typecheck_glVertexP2ui(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexP2ui(unsigned int type, unsigned int value) function, expected prototype:\nvoid glVertexP2ui(unsigned int type, unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int type=(unsigned int)lua_tointeger(L,1);
	unsigned int value=(unsigned int)lua_tointeger(L,2);

	::glVertexP2ui(type, value);

	return 0;
}

// void glVertexP2uiv(unsigned int type, const unsigned int * value)
static int _bind_glVertexP2uiv(lua_State *L) {
	if (!_lg_typecheck_glVertexP2uiv(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexP2uiv(unsigned int type, const unsigned int * value) function, expected prototype:\nvoid glVertexP2uiv(unsigned int type, const unsigned int * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int type=(unsigned int)lua_tointeger(L,1);
	const unsigned int* value=(const unsigned int*)Luna< void >::check(L,2);

	::glVertexP2uiv(type, value);

	return 0;
}

// void glVertexP3ui(unsigned int type, unsigned int value)
static int _bind_glVertexP3ui(lua_State *L) {
	if (!_lg_typecheck_glVertexP3ui(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexP3ui(unsigned int type, unsigned int value) function, expected prototype:\nvoid glVertexP3ui(unsigned int type, unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int type=(unsigned int)lua_tointeger(L,1);
	unsigned int value=(unsigned int)lua_tointeger(L,2);

	::glVertexP3ui(type, value);

	return 0;
}

// void glVertexP3uiv(unsigned int type, const unsigned int * value)
static int _bind_glVertexP3uiv(lua_State *L) {
	if (!_lg_typecheck_glVertexP3uiv(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexP3uiv(unsigned int type, const unsigned int * value) function, expected prototype:\nvoid glVertexP3uiv(unsigned int type, const unsigned int * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int type=(unsigned int)lua_tointeger(L,1);
	const unsigned int* value=(const unsigned int*)Luna< void >::check(L,2);

	::glVertexP3uiv(type, value);

	return 0;
}

// void glVertexP4ui(unsigned int type, unsigned int value)
static int _bind_glVertexP4ui(lua_State *L) {
	if (!_lg_typecheck_glVertexP4ui(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexP4ui(unsigned int type, unsigned int value) function, expected prototype:\nvoid glVertexP4ui(unsigned int type, unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int type=(unsigned int)lua_tointeger(L,1);
	unsigned int value=(unsigned int)lua_tointeger(L,2);

	::glVertexP4ui(type, value);

	return 0;
}

// void glVertexP4uiv(unsigned int type, const unsigned int * value)
static int _bind_glVertexP4uiv(lua_State *L) {
	if (!_lg_typecheck_glVertexP4uiv(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexP4uiv(unsigned int type, const unsigned int * value) function, expected prototype:\nvoid glVertexP4uiv(unsigned int type, const unsigned int * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int type=(unsigned int)lua_tointeger(L,1);
	const unsigned int* value=(const unsigned int*)Luna< void >::check(L,2);

	::glVertexP4uiv(type, value);

	return 0;
}

// void glTexCoordP1ui(unsigned int type, unsigned int coords)
static int _bind_glTexCoordP1ui(lua_State *L) {
	if (!_lg_typecheck_glTexCoordP1ui(L)) {
		luaL_error(L, "luna typecheck failed in void glTexCoordP1ui(unsigned int type, unsigned int coords) function, expected prototype:\nvoid glTexCoordP1ui(unsigned int type, unsigned int coords)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int type=(unsigned int)lua_tointeger(L,1);
	unsigned int coords=(unsigned int)lua_tointeger(L,2);

	::glTexCoordP1ui(type, coords);

	return 0;
}

// void glTexCoordP1uiv(unsigned int type, const unsigned int * coords)
static int _bind_glTexCoordP1uiv(lua_State *L) {
	if (!_lg_typecheck_glTexCoordP1uiv(L)) {
		luaL_error(L, "luna typecheck failed in void glTexCoordP1uiv(unsigned int type, const unsigned int * coords) function, expected prototype:\nvoid glTexCoordP1uiv(unsigned int type, const unsigned int * coords)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int type=(unsigned int)lua_tointeger(L,1);
	const unsigned int* coords=(const unsigned int*)Luna< void >::check(L,2);

	::glTexCoordP1uiv(type, coords);

	return 0;
}

// void glTexCoordP2ui(unsigned int type, unsigned int coords)
static int _bind_glTexCoordP2ui(lua_State *L) {
	if (!_lg_typecheck_glTexCoordP2ui(L)) {
		luaL_error(L, "luna typecheck failed in void glTexCoordP2ui(unsigned int type, unsigned int coords) function, expected prototype:\nvoid glTexCoordP2ui(unsigned int type, unsigned int coords)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int type=(unsigned int)lua_tointeger(L,1);
	unsigned int coords=(unsigned int)lua_tointeger(L,2);

	::glTexCoordP2ui(type, coords);

	return 0;
}

// void glTexCoordP2uiv(unsigned int type, const unsigned int * coords)
static int _bind_glTexCoordP2uiv(lua_State *L) {
	if (!_lg_typecheck_glTexCoordP2uiv(L)) {
		luaL_error(L, "luna typecheck failed in void glTexCoordP2uiv(unsigned int type, const unsigned int * coords) function, expected prototype:\nvoid glTexCoordP2uiv(unsigned int type, const unsigned int * coords)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int type=(unsigned int)lua_tointeger(L,1);
	const unsigned int* coords=(const unsigned int*)Luna< void >::check(L,2);

	::glTexCoordP2uiv(type, coords);

	return 0;
}

// void glTexCoordP3ui(unsigned int type, unsigned int coords)
static int _bind_glTexCoordP3ui(lua_State *L) {
	if (!_lg_typecheck_glTexCoordP3ui(L)) {
		luaL_error(L, "luna typecheck failed in void glTexCoordP3ui(unsigned int type, unsigned int coords) function, expected prototype:\nvoid glTexCoordP3ui(unsigned int type, unsigned int coords)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int type=(unsigned int)lua_tointeger(L,1);
	unsigned int coords=(unsigned int)lua_tointeger(L,2);

	::glTexCoordP3ui(type, coords);

	return 0;
}

// void glTexCoordP3uiv(unsigned int type, const unsigned int * coords)
static int _bind_glTexCoordP3uiv(lua_State *L) {
	if (!_lg_typecheck_glTexCoordP3uiv(L)) {
		luaL_error(L, "luna typecheck failed in void glTexCoordP3uiv(unsigned int type, const unsigned int * coords) function, expected prototype:\nvoid glTexCoordP3uiv(unsigned int type, const unsigned int * coords)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int type=(unsigned int)lua_tointeger(L,1);
	const unsigned int* coords=(const unsigned int*)Luna< void >::check(L,2);

	::glTexCoordP3uiv(type, coords);

	return 0;
}

// void glTexCoordP4ui(unsigned int type, unsigned int coords)
static int _bind_glTexCoordP4ui(lua_State *L) {
	if (!_lg_typecheck_glTexCoordP4ui(L)) {
		luaL_error(L, "luna typecheck failed in void glTexCoordP4ui(unsigned int type, unsigned int coords) function, expected prototype:\nvoid glTexCoordP4ui(unsigned int type, unsigned int coords)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int type=(unsigned int)lua_tointeger(L,1);
	unsigned int coords=(unsigned int)lua_tointeger(L,2);

	::glTexCoordP4ui(type, coords);

	return 0;
}

// void glTexCoordP4uiv(unsigned int type, const unsigned int * coords)
static int _bind_glTexCoordP4uiv(lua_State *L) {
	if (!_lg_typecheck_glTexCoordP4uiv(L)) {
		luaL_error(L, "luna typecheck failed in void glTexCoordP4uiv(unsigned int type, const unsigned int * coords) function, expected prototype:\nvoid glTexCoordP4uiv(unsigned int type, const unsigned int * coords)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int type=(unsigned int)lua_tointeger(L,1);
	const unsigned int* coords=(const unsigned int*)Luna< void >::check(L,2);

	::glTexCoordP4uiv(type, coords);

	return 0;
}

// void glMultiTexCoordP1ui(unsigned int texture, unsigned int type, unsigned int coords)
static int _bind_glMultiTexCoordP1ui(lua_State *L) {
	if (!_lg_typecheck_glMultiTexCoordP1ui(L)) {
		luaL_error(L, "luna typecheck failed in void glMultiTexCoordP1ui(unsigned int texture, unsigned int type, unsigned int coords) function, expected prototype:\nvoid glMultiTexCoordP1ui(unsigned int texture, unsigned int type, unsigned int coords)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int texture=(unsigned int)lua_tointeger(L,1);
	unsigned int type=(unsigned int)lua_tointeger(L,2);
	unsigned int coords=(unsigned int)lua_tointeger(L,3);

	::glMultiTexCoordP1ui(texture, type, coords);

	return 0;
}

// void glMultiTexCoordP1uiv(unsigned int texture, unsigned int type, const unsigned int * coords)
static int _bind_glMultiTexCoordP1uiv(lua_State *L) {
	if (!_lg_typecheck_glMultiTexCoordP1uiv(L)) {
		luaL_error(L, "luna typecheck failed in void glMultiTexCoordP1uiv(unsigned int texture, unsigned int type, const unsigned int * coords) function, expected prototype:\nvoid glMultiTexCoordP1uiv(unsigned int texture, unsigned int type, const unsigned int * coords)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int texture=(unsigned int)lua_tointeger(L,1);
	unsigned int type=(unsigned int)lua_tointeger(L,2);
	const unsigned int* coords=(const unsigned int*)Luna< void >::check(L,3);

	::glMultiTexCoordP1uiv(texture, type, coords);

	return 0;
}

// void glMultiTexCoordP2ui(unsigned int texture, unsigned int type, unsigned int coords)
static int _bind_glMultiTexCoordP2ui(lua_State *L) {
	if (!_lg_typecheck_glMultiTexCoordP2ui(L)) {
		luaL_error(L, "luna typecheck failed in void glMultiTexCoordP2ui(unsigned int texture, unsigned int type, unsigned int coords) function, expected prototype:\nvoid glMultiTexCoordP2ui(unsigned int texture, unsigned int type, unsigned int coords)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int texture=(unsigned int)lua_tointeger(L,1);
	unsigned int type=(unsigned int)lua_tointeger(L,2);
	unsigned int coords=(unsigned int)lua_tointeger(L,3);

	::glMultiTexCoordP2ui(texture, type, coords);

	return 0;
}

// void glMultiTexCoordP2uiv(unsigned int texture, unsigned int type, const unsigned int * coords)
static int _bind_glMultiTexCoordP2uiv(lua_State *L) {
	if (!_lg_typecheck_glMultiTexCoordP2uiv(L)) {
		luaL_error(L, "luna typecheck failed in void glMultiTexCoordP2uiv(unsigned int texture, unsigned int type, const unsigned int * coords) function, expected prototype:\nvoid glMultiTexCoordP2uiv(unsigned int texture, unsigned int type, const unsigned int * coords)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int texture=(unsigned int)lua_tointeger(L,1);
	unsigned int type=(unsigned int)lua_tointeger(L,2);
	const unsigned int* coords=(const unsigned int*)Luna< void >::check(L,3);

	::glMultiTexCoordP2uiv(texture, type, coords);

	return 0;
}

// void glMultiTexCoordP3ui(unsigned int texture, unsigned int type, unsigned int coords)
static int _bind_glMultiTexCoordP3ui(lua_State *L) {
	if (!_lg_typecheck_glMultiTexCoordP3ui(L)) {
		luaL_error(L, "luna typecheck failed in void glMultiTexCoordP3ui(unsigned int texture, unsigned int type, unsigned int coords) function, expected prototype:\nvoid glMultiTexCoordP3ui(unsigned int texture, unsigned int type, unsigned int coords)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int texture=(unsigned int)lua_tointeger(L,1);
	unsigned int type=(unsigned int)lua_tointeger(L,2);
	unsigned int coords=(unsigned int)lua_tointeger(L,3);

	::glMultiTexCoordP3ui(texture, type, coords);

	return 0;
}

// void glMultiTexCoordP3uiv(unsigned int texture, unsigned int type, const unsigned int * coords)
static int _bind_glMultiTexCoordP3uiv(lua_State *L) {
	if (!_lg_typecheck_glMultiTexCoordP3uiv(L)) {
		luaL_error(L, "luna typecheck failed in void glMultiTexCoordP3uiv(unsigned int texture, unsigned int type, const unsigned int * coords) function, expected prototype:\nvoid glMultiTexCoordP3uiv(unsigned int texture, unsigned int type, const unsigned int * coords)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int texture=(unsigned int)lua_tointeger(L,1);
	unsigned int type=(unsigned int)lua_tointeger(L,2);
	const unsigned int* coords=(const unsigned int*)Luna< void >::check(L,3);

	::glMultiTexCoordP3uiv(texture, type, coords);

	return 0;
}

// void glMultiTexCoordP4ui(unsigned int texture, unsigned int type, unsigned int coords)
static int _bind_glMultiTexCoordP4ui(lua_State *L) {
	if (!_lg_typecheck_glMultiTexCoordP4ui(L)) {
		luaL_error(L, "luna typecheck failed in void glMultiTexCoordP4ui(unsigned int texture, unsigned int type, unsigned int coords) function, expected prototype:\nvoid glMultiTexCoordP4ui(unsigned int texture, unsigned int type, unsigned int coords)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int texture=(unsigned int)lua_tointeger(L,1);
	unsigned int type=(unsigned int)lua_tointeger(L,2);
	unsigned int coords=(unsigned int)lua_tointeger(L,3);

	::glMultiTexCoordP4ui(texture, type, coords);

	return 0;
}

// void glMultiTexCoordP4uiv(unsigned int texture, unsigned int type, const unsigned int * coords)
static int _bind_glMultiTexCoordP4uiv(lua_State *L) {
	if (!_lg_typecheck_glMultiTexCoordP4uiv(L)) {
		luaL_error(L, "luna typecheck failed in void glMultiTexCoordP4uiv(unsigned int texture, unsigned int type, const unsigned int * coords) function, expected prototype:\nvoid glMultiTexCoordP4uiv(unsigned int texture, unsigned int type, const unsigned int * coords)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int texture=(unsigned int)lua_tointeger(L,1);
	unsigned int type=(unsigned int)lua_tointeger(L,2);
	const unsigned int* coords=(const unsigned int*)Luna< void >::check(L,3);

	::glMultiTexCoordP4uiv(texture, type, coords);

	return 0;
}

// void glNormalP3ui(unsigned int type, unsigned int coords)
static int _bind_glNormalP3ui(lua_State *L) {
	if (!_lg_typecheck_glNormalP3ui(L)) {
		luaL_error(L, "luna typecheck failed in void glNormalP3ui(unsigned int type, unsigned int coords) function, expected prototype:\nvoid glNormalP3ui(unsigned int type, unsigned int coords)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int type=(unsigned int)lua_tointeger(L,1);
	unsigned int coords=(unsigned int)lua_tointeger(L,2);

	::glNormalP3ui(type, coords);

	return 0;
}

// void glNormalP3uiv(unsigned int type, const unsigned int * coords)
static int _bind_glNormalP3uiv(lua_State *L) {
	if (!_lg_typecheck_glNormalP3uiv(L)) {
		luaL_error(L, "luna typecheck failed in void glNormalP3uiv(unsigned int type, const unsigned int * coords) function, expected prototype:\nvoid glNormalP3uiv(unsigned int type, const unsigned int * coords)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int type=(unsigned int)lua_tointeger(L,1);
	const unsigned int* coords=(const unsigned int*)Luna< void >::check(L,2);

	::glNormalP3uiv(type, coords);

	return 0;
}

// void glColorP3ui(unsigned int type, unsigned int color)
static int _bind_glColorP3ui(lua_State *L) {
	if (!_lg_typecheck_glColorP3ui(L)) {
		luaL_error(L, "luna typecheck failed in void glColorP3ui(unsigned int type, unsigned int color) function, expected prototype:\nvoid glColorP3ui(unsigned int type, unsigned int color)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int type=(unsigned int)lua_tointeger(L,1);
	unsigned int color=(unsigned int)lua_tointeger(L,2);

	::glColorP3ui(type, color);

	return 0;
}

// void glColorP3uiv(unsigned int type, const unsigned int * color)
static int _bind_glColorP3uiv(lua_State *L) {
	if (!_lg_typecheck_glColorP3uiv(L)) {
		luaL_error(L, "luna typecheck failed in void glColorP3uiv(unsigned int type, const unsigned int * color) function, expected prototype:\nvoid glColorP3uiv(unsigned int type, const unsigned int * color)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int type=(unsigned int)lua_tointeger(L,1);
	const unsigned int* color=(const unsigned int*)Luna< void >::check(L,2);

	::glColorP3uiv(type, color);

	return 0;
}

// void glColorP4ui(unsigned int type, unsigned int color)
static int _bind_glColorP4ui(lua_State *L) {
	if (!_lg_typecheck_glColorP4ui(L)) {
		luaL_error(L, "luna typecheck failed in void glColorP4ui(unsigned int type, unsigned int color) function, expected prototype:\nvoid glColorP4ui(unsigned int type, unsigned int color)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int type=(unsigned int)lua_tointeger(L,1);
	unsigned int color=(unsigned int)lua_tointeger(L,2);

	::glColorP4ui(type, color);

	return 0;
}

// void glColorP4uiv(unsigned int type, const unsigned int * color)
static int _bind_glColorP4uiv(lua_State *L) {
	if (!_lg_typecheck_glColorP4uiv(L)) {
		luaL_error(L, "luna typecheck failed in void glColorP4uiv(unsigned int type, const unsigned int * color) function, expected prototype:\nvoid glColorP4uiv(unsigned int type, const unsigned int * color)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int type=(unsigned int)lua_tointeger(L,1);
	const unsigned int* color=(const unsigned int*)Luna< void >::check(L,2);

	::glColorP4uiv(type, color);

	return 0;
}

// void glSecondaryColorP3ui(unsigned int type, unsigned int color)
static int _bind_glSecondaryColorP3ui(lua_State *L) {
	if (!_lg_typecheck_glSecondaryColorP3ui(L)) {
		luaL_error(L, "luna typecheck failed in void glSecondaryColorP3ui(unsigned int type, unsigned int color) function, expected prototype:\nvoid glSecondaryColorP3ui(unsigned int type, unsigned int color)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int type=(unsigned int)lua_tointeger(L,1);
	unsigned int color=(unsigned int)lua_tointeger(L,2);

	::glSecondaryColorP3ui(type, color);

	return 0;
}

// void glSecondaryColorP3uiv(unsigned int type, const unsigned int * color)
static int _bind_glSecondaryColorP3uiv(lua_State *L) {
	if (!_lg_typecheck_glSecondaryColorP3uiv(L)) {
		luaL_error(L, "luna typecheck failed in void glSecondaryColorP3uiv(unsigned int type, const unsigned int * color) function, expected prototype:\nvoid glSecondaryColorP3uiv(unsigned int type, const unsigned int * color)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int type=(unsigned int)lua_tointeger(L,1);
	const unsigned int* color=(const unsigned int*)Luna< void >::check(L,2);

	::glSecondaryColorP3uiv(type, color);

	return 0;
}

// void glVertexAttribP1ui(unsigned int index, unsigned int type, unsigned char normalized, unsigned int value)
static int _bind_glVertexAttribP1ui(lua_State *L) {
	if (!_lg_typecheck_glVertexAttribP1ui(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexAttribP1ui(unsigned int index, unsigned int type, unsigned char normalized, unsigned int value) function, expected prototype:\nvoid glVertexAttribP1ui(unsigned int index, unsigned int type, unsigned char normalized, unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	unsigned int type=(unsigned int)lua_tointeger(L,2);
	unsigned char normalized = (unsigned char)(lua_tointeger(L,3));
	unsigned int value=(unsigned int)lua_tointeger(L,4);

	::glVertexAttribP1ui(index, type, normalized, value);

	return 0;
}

// void glVertexAttribP1uiv(unsigned int index, unsigned int type, unsigned char normalized, const unsigned int * value)
static int _bind_glVertexAttribP1uiv(lua_State *L) {
	if (!_lg_typecheck_glVertexAttribP1uiv(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexAttribP1uiv(unsigned int index, unsigned int type, unsigned char normalized, const unsigned int * value) function, expected prototype:\nvoid glVertexAttribP1uiv(unsigned int index, unsigned int type, unsigned char normalized, const unsigned int * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	unsigned int type=(unsigned int)lua_tointeger(L,2);
	unsigned char normalized = (unsigned char)(lua_tointeger(L,3));
	const unsigned int* value=(const unsigned int*)Luna< void >::check(L,4);

	::glVertexAttribP1uiv(index, type, normalized, value);

	return 0;
}

// void glVertexAttribP2ui(unsigned int index, unsigned int type, unsigned char normalized, unsigned int value)
static int _bind_glVertexAttribP2ui(lua_State *L) {
	if (!_lg_typecheck_glVertexAttribP2ui(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexAttribP2ui(unsigned int index, unsigned int type, unsigned char normalized, unsigned int value) function, expected prototype:\nvoid glVertexAttribP2ui(unsigned int index, unsigned int type, unsigned char normalized, unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	unsigned int type=(unsigned int)lua_tointeger(L,2);
	unsigned char normalized = (unsigned char)(lua_tointeger(L,3));
	unsigned int value=(unsigned int)lua_tointeger(L,4);

	::glVertexAttribP2ui(index, type, normalized, value);

	return 0;
}

// void glVertexAttribP2uiv(unsigned int index, unsigned int type, unsigned char normalized, const unsigned int * value)
static int _bind_glVertexAttribP2uiv(lua_State *L) {
	if (!_lg_typecheck_glVertexAttribP2uiv(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexAttribP2uiv(unsigned int index, unsigned int type, unsigned char normalized, const unsigned int * value) function, expected prototype:\nvoid glVertexAttribP2uiv(unsigned int index, unsigned int type, unsigned char normalized, const unsigned int * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	unsigned int type=(unsigned int)lua_tointeger(L,2);
	unsigned char normalized = (unsigned char)(lua_tointeger(L,3));
	const unsigned int* value=(const unsigned int*)Luna< void >::check(L,4);

	::glVertexAttribP2uiv(index, type, normalized, value);

	return 0;
}

// void glVertexAttribP3ui(unsigned int index, unsigned int type, unsigned char normalized, unsigned int value)
static int _bind_glVertexAttribP3ui(lua_State *L) {
	if (!_lg_typecheck_glVertexAttribP3ui(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexAttribP3ui(unsigned int index, unsigned int type, unsigned char normalized, unsigned int value) function, expected prototype:\nvoid glVertexAttribP3ui(unsigned int index, unsigned int type, unsigned char normalized, unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	unsigned int type=(unsigned int)lua_tointeger(L,2);
	unsigned char normalized = (unsigned char)(lua_tointeger(L,3));
	unsigned int value=(unsigned int)lua_tointeger(L,4);

	::glVertexAttribP3ui(index, type, normalized, value);

	return 0;
}

// void glVertexAttribP3uiv(unsigned int index, unsigned int type, unsigned char normalized, const unsigned int * value)
static int _bind_glVertexAttribP3uiv(lua_State *L) {
	if (!_lg_typecheck_glVertexAttribP3uiv(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexAttribP3uiv(unsigned int index, unsigned int type, unsigned char normalized, const unsigned int * value) function, expected prototype:\nvoid glVertexAttribP3uiv(unsigned int index, unsigned int type, unsigned char normalized, const unsigned int * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	unsigned int type=(unsigned int)lua_tointeger(L,2);
	unsigned char normalized = (unsigned char)(lua_tointeger(L,3));
	const unsigned int* value=(const unsigned int*)Luna< void >::check(L,4);

	::glVertexAttribP3uiv(index, type, normalized, value);

	return 0;
}

// void glVertexAttribP4ui(unsigned int index, unsigned int type, unsigned char normalized, unsigned int value)
static int _bind_glVertexAttribP4ui(lua_State *L) {
	if (!_lg_typecheck_glVertexAttribP4ui(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexAttribP4ui(unsigned int index, unsigned int type, unsigned char normalized, unsigned int value) function, expected prototype:\nvoid glVertexAttribP4ui(unsigned int index, unsigned int type, unsigned char normalized, unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	unsigned int type=(unsigned int)lua_tointeger(L,2);
	unsigned char normalized = (unsigned char)(lua_tointeger(L,3));
	unsigned int value=(unsigned int)lua_tointeger(L,4);

	::glVertexAttribP4ui(index, type, normalized, value);

	return 0;
}

// void glVertexAttribP4uiv(unsigned int index, unsigned int type, unsigned char normalized, const unsigned int * value)
static int _bind_glVertexAttribP4uiv(lua_State *L) {
	if (!_lg_typecheck_glVertexAttribP4uiv(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexAttribP4uiv(unsigned int index, unsigned int type, unsigned char normalized, const unsigned int * value) function, expected prototype:\nvoid glVertexAttribP4uiv(unsigned int index, unsigned int type, unsigned char normalized, const unsigned int * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	unsigned int type=(unsigned int)lua_tointeger(L,2);
	unsigned char normalized = (unsigned char)(lua_tointeger(L,3));
	const unsigned int* value=(const unsigned int*)Luna< void >::check(L,4);

	::glVertexAttribP4uiv(index, type, normalized, value);

	return 0;
}

// void glDrawArraysIndirect(unsigned int mode, const void * indirect)
static int _bind_glDrawArraysIndirect(lua_State *L) {
	if (!_lg_typecheck_glDrawArraysIndirect(L)) {
		luaL_error(L, "luna typecheck failed in void glDrawArraysIndirect(unsigned int mode, const void * indirect) function, expected prototype:\nvoid glDrawArraysIndirect(unsigned int mode, const void * indirect)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int mode=(unsigned int)lua_tointeger(L,1);
	const void* indirect=(Luna< void >::check(L,2));

	::glDrawArraysIndirect(mode, indirect);

	return 0;
}

// void glDrawElementsIndirect(unsigned int mode, unsigned int type, const void * indirect)
static int _bind_glDrawElementsIndirect(lua_State *L) {
	if (!_lg_typecheck_glDrawElementsIndirect(L)) {
		luaL_error(L, "luna typecheck failed in void glDrawElementsIndirect(unsigned int mode, unsigned int type, const void * indirect) function, expected prototype:\nvoid glDrawElementsIndirect(unsigned int mode, unsigned int type, const void * indirect)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int mode=(unsigned int)lua_tointeger(L,1);
	unsigned int type=(unsigned int)lua_tointeger(L,2);
	const void* indirect=(Luna< void >::check(L,3));

	::glDrawElementsIndirect(mode, type, indirect);

	return 0;
}

// void glUniform1d(int location, double x)
static int _bind_glUniform1d(lua_State *L) {
	if (!_lg_typecheck_glUniform1d(L)) {
		luaL_error(L, "luna typecheck failed in void glUniform1d(int location, double x) function, expected prototype:\nvoid glUniform1d(int location, double x)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int location=(int)lua_tointeger(L,1);
	double x=(double)lua_tonumber(L,2);

	::glUniform1d(location, x);

	return 0;
}

// void glUniform2d(int location, double x, double y)
static int _bind_glUniform2d(lua_State *L) {
	if (!_lg_typecheck_glUniform2d(L)) {
		luaL_error(L, "luna typecheck failed in void glUniform2d(int location, double x, double y) function, expected prototype:\nvoid glUniform2d(int location, double x, double y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int location=(int)lua_tointeger(L,1);
	double x=(double)lua_tonumber(L,2);
	double y=(double)lua_tonumber(L,3);

	::glUniform2d(location, x, y);

	return 0;
}

// void glUniform3d(int location, double x, double y, double z)
static int _bind_glUniform3d(lua_State *L) {
	if (!_lg_typecheck_glUniform3d(L)) {
		luaL_error(L, "luna typecheck failed in void glUniform3d(int location, double x, double y, double z) function, expected prototype:\nvoid glUniform3d(int location, double x, double y, double z)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int location=(int)lua_tointeger(L,1);
	double x=(double)lua_tonumber(L,2);
	double y=(double)lua_tonumber(L,3);
	double z=(double)lua_tonumber(L,4);

	::glUniform3d(location, x, y, z);

	return 0;
}

// void glUniform4d(int location, double x, double y, double z, double w)
static int _bind_glUniform4d(lua_State *L) {
	if (!_lg_typecheck_glUniform4d(L)) {
		luaL_error(L, "luna typecheck failed in void glUniform4d(int location, double x, double y, double z, double w) function, expected prototype:\nvoid glUniform4d(int location, double x, double y, double z, double w)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int location=(int)lua_tointeger(L,1);
	double x=(double)lua_tonumber(L,2);
	double y=(double)lua_tonumber(L,3);
	double z=(double)lua_tonumber(L,4);
	double w=(double)lua_tonumber(L,5);

	::glUniform4d(location, x, y, z, w);

	return 0;
}

// void glUniform1dv(int location, int count, const double * value)
static int _bind_glUniform1dv(lua_State *L) {
	if (!_lg_typecheck_glUniform1dv(L)) {
		luaL_error(L, "luna typecheck failed in void glUniform1dv(int location, int count, const double * value) function, expected prototype:\nvoid glUniform1dv(int location, int count, const double * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int location=(int)lua_tointeger(L,1);
	int count=(int)lua_tointeger(L,2);
	const double* value=(const double*)Luna< void >::check(L,3);

	::glUniform1dv(location, count, value);

	return 0;
}

// void glUniform2dv(int location, int count, const double * value)
static int _bind_glUniform2dv(lua_State *L) {
	if (!_lg_typecheck_glUniform2dv(L)) {
		luaL_error(L, "luna typecheck failed in void glUniform2dv(int location, int count, const double * value) function, expected prototype:\nvoid glUniform2dv(int location, int count, const double * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int location=(int)lua_tointeger(L,1);
	int count=(int)lua_tointeger(L,2);
	const double* value=(const double*)Luna< void >::check(L,3);

	::glUniform2dv(location, count, value);

	return 0;
}

// void glUniform3dv(int location, int count, const double * value)
static int _bind_glUniform3dv(lua_State *L) {
	if (!_lg_typecheck_glUniform3dv(L)) {
		luaL_error(L, "luna typecheck failed in void glUniform3dv(int location, int count, const double * value) function, expected prototype:\nvoid glUniform3dv(int location, int count, const double * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int location=(int)lua_tointeger(L,1);
	int count=(int)lua_tointeger(L,2);
	const double* value=(const double*)Luna< void >::check(L,3);

	::glUniform3dv(location, count, value);

	return 0;
}

// void glUniform4dv(int location, int count, const double * value)
static int _bind_glUniform4dv(lua_State *L) {
	if (!_lg_typecheck_glUniform4dv(L)) {
		luaL_error(L, "luna typecheck failed in void glUniform4dv(int location, int count, const double * value) function, expected prototype:\nvoid glUniform4dv(int location, int count, const double * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int location=(int)lua_tointeger(L,1);
	int count=(int)lua_tointeger(L,2);
	const double* value=(const double*)Luna< void >::check(L,3);

	::glUniform4dv(location, count, value);

	return 0;
}

// void glUniformMatrix2dv(int location, int count, unsigned char transpose, const double * value)
static int _bind_glUniformMatrix2dv(lua_State *L) {
	if (!_lg_typecheck_glUniformMatrix2dv(L)) {
		luaL_error(L, "luna typecheck failed in void glUniformMatrix2dv(int location, int count, unsigned char transpose, const double * value) function, expected prototype:\nvoid glUniformMatrix2dv(int location, int count, unsigned char transpose, const double * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int location=(int)lua_tointeger(L,1);
	int count=(int)lua_tointeger(L,2);
	unsigned char transpose = (unsigned char)(lua_tointeger(L,3));
	const double* value=(const double*)Luna< void >::check(L,4);

	::glUniformMatrix2dv(location, count, transpose, value);

	return 0;
}

// void glUniformMatrix3dv(int location, int count, unsigned char transpose, const double * value)
static int _bind_glUniformMatrix3dv(lua_State *L) {
	if (!_lg_typecheck_glUniformMatrix3dv(L)) {
		luaL_error(L, "luna typecheck failed in void glUniformMatrix3dv(int location, int count, unsigned char transpose, const double * value) function, expected prototype:\nvoid glUniformMatrix3dv(int location, int count, unsigned char transpose, const double * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int location=(int)lua_tointeger(L,1);
	int count=(int)lua_tointeger(L,2);
	unsigned char transpose = (unsigned char)(lua_tointeger(L,3));
	const double* value=(const double*)Luna< void >::check(L,4);

	::glUniformMatrix3dv(location, count, transpose, value);

	return 0;
}

// void glUniformMatrix4dv(int location, int count, unsigned char transpose, const double * value)
static int _bind_glUniformMatrix4dv(lua_State *L) {
	if (!_lg_typecheck_glUniformMatrix4dv(L)) {
		luaL_error(L, "luna typecheck failed in void glUniformMatrix4dv(int location, int count, unsigned char transpose, const double * value) function, expected prototype:\nvoid glUniformMatrix4dv(int location, int count, unsigned char transpose, const double * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int location=(int)lua_tointeger(L,1);
	int count=(int)lua_tointeger(L,2);
	unsigned char transpose = (unsigned char)(lua_tointeger(L,3));
	const double* value=(const double*)Luna< void >::check(L,4);

	::glUniformMatrix4dv(location, count, transpose, value);

	return 0;
}

// void glUniformMatrix2x3dv(int location, int count, unsigned char transpose, const double * value)
static int _bind_glUniformMatrix2x3dv(lua_State *L) {
	if (!_lg_typecheck_glUniformMatrix2x3dv(L)) {
		luaL_error(L, "luna typecheck failed in void glUniformMatrix2x3dv(int location, int count, unsigned char transpose, const double * value) function, expected prototype:\nvoid glUniformMatrix2x3dv(int location, int count, unsigned char transpose, const double * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int location=(int)lua_tointeger(L,1);
	int count=(int)lua_tointeger(L,2);
	unsigned char transpose = (unsigned char)(lua_tointeger(L,3));
	const double* value=(const double*)Luna< void >::check(L,4);

	::glUniformMatrix2x3dv(location, count, transpose, value);

	return 0;
}

// void glUniformMatrix2x4dv(int location, int count, unsigned char transpose, const double * value)
static int _bind_glUniformMatrix2x4dv(lua_State *L) {
	if (!_lg_typecheck_glUniformMatrix2x4dv(L)) {
		luaL_error(L, "luna typecheck failed in void glUniformMatrix2x4dv(int location, int count, unsigned char transpose, const double * value) function, expected prototype:\nvoid glUniformMatrix2x4dv(int location, int count, unsigned char transpose, const double * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int location=(int)lua_tointeger(L,1);
	int count=(int)lua_tointeger(L,2);
	unsigned char transpose = (unsigned char)(lua_tointeger(L,3));
	const double* value=(const double*)Luna< void >::check(L,4);

	::glUniformMatrix2x4dv(location, count, transpose, value);

	return 0;
}

// void glUniformMatrix3x2dv(int location, int count, unsigned char transpose, const double * value)
static int _bind_glUniformMatrix3x2dv(lua_State *L) {
	if (!_lg_typecheck_glUniformMatrix3x2dv(L)) {
		luaL_error(L, "luna typecheck failed in void glUniformMatrix3x2dv(int location, int count, unsigned char transpose, const double * value) function, expected prototype:\nvoid glUniformMatrix3x2dv(int location, int count, unsigned char transpose, const double * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int location=(int)lua_tointeger(L,1);
	int count=(int)lua_tointeger(L,2);
	unsigned char transpose = (unsigned char)(lua_tointeger(L,3));
	const double* value=(const double*)Luna< void >::check(L,4);

	::glUniformMatrix3x2dv(location, count, transpose, value);

	return 0;
}

// void glUniformMatrix3x4dv(int location, int count, unsigned char transpose, const double * value)
static int _bind_glUniformMatrix3x4dv(lua_State *L) {
	if (!_lg_typecheck_glUniformMatrix3x4dv(L)) {
		luaL_error(L, "luna typecheck failed in void glUniformMatrix3x4dv(int location, int count, unsigned char transpose, const double * value) function, expected prototype:\nvoid glUniformMatrix3x4dv(int location, int count, unsigned char transpose, const double * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int location=(int)lua_tointeger(L,1);
	int count=(int)lua_tointeger(L,2);
	unsigned char transpose = (unsigned char)(lua_tointeger(L,3));
	const double* value=(const double*)Luna< void >::check(L,4);

	::glUniformMatrix3x4dv(location, count, transpose, value);

	return 0;
}

// void glUniformMatrix4x2dv(int location, int count, unsigned char transpose, const double * value)
static int _bind_glUniformMatrix4x2dv(lua_State *L) {
	if (!_lg_typecheck_glUniformMatrix4x2dv(L)) {
		luaL_error(L, "luna typecheck failed in void glUniformMatrix4x2dv(int location, int count, unsigned char transpose, const double * value) function, expected prototype:\nvoid glUniformMatrix4x2dv(int location, int count, unsigned char transpose, const double * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int location=(int)lua_tointeger(L,1);
	int count=(int)lua_tointeger(L,2);
	unsigned char transpose = (unsigned char)(lua_tointeger(L,3));
	const double* value=(const double*)Luna< void >::check(L,4);

	::glUniformMatrix4x2dv(location, count, transpose, value);

	return 0;
}

// void glUniformMatrix4x3dv(int location, int count, unsigned char transpose, const double * value)
static int _bind_glUniformMatrix4x3dv(lua_State *L) {
	if (!_lg_typecheck_glUniformMatrix4x3dv(L)) {
		luaL_error(L, "luna typecheck failed in void glUniformMatrix4x3dv(int location, int count, unsigned char transpose, const double * value) function, expected prototype:\nvoid glUniformMatrix4x3dv(int location, int count, unsigned char transpose, const double * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int location=(int)lua_tointeger(L,1);
	int count=(int)lua_tointeger(L,2);
	unsigned char transpose = (unsigned char)(lua_tointeger(L,3));
	const double* value=(const double*)Luna< void >::check(L,4);

	::glUniformMatrix4x3dv(location, count, transpose, value);

	return 0;
}

// void glGetUniformdv(unsigned int program, int location, double * params)
static int _bind_glGetUniformdv(lua_State *L) {
	if (!_lg_typecheck_glGetUniformdv(L)) {
		luaL_error(L, "luna typecheck failed in void glGetUniformdv(unsigned int program, int location, double * params) function, expected prototype:\nvoid glGetUniformdv(unsigned int program, int location, double * params)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	int location=(int)lua_tointeger(L,2);
	double* params=(double*)Luna< void >::check(L,3);

	::glGetUniformdv(program, location, params);

	return 0;
}

// int glGetSubroutineUniformLocation(unsigned int program, unsigned int shadertype, const char * name)
static int _bind_glGetSubroutineUniformLocation(lua_State *L) {
	if (!_lg_typecheck_glGetSubroutineUniformLocation(L)) {
		luaL_error(L, "luna typecheck failed in int glGetSubroutineUniformLocation(unsigned int program, unsigned int shadertype, const char * name) function, expected prototype:\nint glGetSubroutineUniformLocation(unsigned int program, unsigned int shadertype, const char * name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	unsigned int shadertype=(unsigned int)lua_tointeger(L,2);
	const char * name=(const char *)lua_tostring(L,3);

	int lret = ::glGetSubroutineUniformLocation(program, shadertype, name);
	lua_pushnumber(L,lret);

	return 1;
}

// unsigned int glGetSubroutineIndex(unsigned int program, unsigned int shadertype, const char * name)
static int _bind_glGetSubroutineIndex(lua_State *L) {
	if (!_lg_typecheck_glGetSubroutineIndex(L)) {
		luaL_error(L, "luna typecheck failed in unsigned int glGetSubroutineIndex(unsigned int program, unsigned int shadertype, const char * name) function, expected prototype:\nunsigned int glGetSubroutineIndex(unsigned int program, unsigned int shadertype, const char * name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	unsigned int shadertype=(unsigned int)lua_tointeger(L,2);
	const char * name=(const char *)lua_tostring(L,3);

	unsigned int lret = ::glGetSubroutineIndex(program, shadertype, name);
	lua_pushnumber(L,lret);

	return 1;
}

// void glGetActiveSubroutineUniformiv(unsigned int program, unsigned int shadertype, unsigned int index, unsigned int pname, int * values)
static int _bind_glGetActiveSubroutineUniformiv(lua_State *L) {
	if (!_lg_typecheck_glGetActiveSubroutineUniformiv(L)) {
		luaL_error(L, "luna typecheck failed in void glGetActiveSubroutineUniformiv(unsigned int program, unsigned int shadertype, unsigned int index, unsigned int pname, int * values) function, expected prototype:\nvoid glGetActiveSubroutineUniformiv(unsigned int program, unsigned int shadertype, unsigned int index, unsigned int pname, int * values)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	unsigned int shadertype=(unsigned int)lua_tointeger(L,2);
	unsigned int index=(unsigned int)lua_tointeger(L,3);
	unsigned int pname=(unsigned int)lua_tointeger(L,4);
	int* values=(int*)Luna< void >::check(L,5);

	::glGetActiveSubroutineUniformiv(program, shadertype, index, pname, values);

	return 0;
}

// void glGetActiveSubroutineUniformName(unsigned int program, unsigned int shadertype, unsigned int index, int bufsize, int * length, char * name)
static int _bind_glGetActiveSubroutineUniformName(lua_State *L) {
	if (!_lg_typecheck_glGetActiveSubroutineUniformName(L)) {
		luaL_error(L, "luna typecheck failed in void glGetActiveSubroutineUniformName(unsigned int program, unsigned int shadertype, unsigned int index, int bufsize, int * length, char * name) function, expected prototype:\nvoid glGetActiveSubroutineUniformName(unsigned int program, unsigned int shadertype, unsigned int index, int bufsize, int * length, char * name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	unsigned int shadertype=(unsigned int)lua_tointeger(L,2);
	unsigned int index=(unsigned int)lua_tointeger(L,3);
	int bufsize=(int)lua_tointeger(L,4);
	int* length=(int*)Luna< void >::check(L,5);
	char* name=(char*)Luna< void >::check(L,6);

	::glGetActiveSubroutineUniformName(program, shadertype, index, bufsize, length, name);

	return 0;
}

// void glGetActiveSubroutineName(unsigned int program, unsigned int shadertype, unsigned int index, int bufsize, int * length, char * name)
static int _bind_glGetActiveSubroutineName(lua_State *L) {
	if (!_lg_typecheck_glGetActiveSubroutineName(L)) {
		luaL_error(L, "luna typecheck failed in void glGetActiveSubroutineName(unsigned int program, unsigned int shadertype, unsigned int index, int bufsize, int * length, char * name) function, expected prototype:\nvoid glGetActiveSubroutineName(unsigned int program, unsigned int shadertype, unsigned int index, int bufsize, int * length, char * name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	unsigned int shadertype=(unsigned int)lua_tointeger(L,2);
	unsigned int index=(unsigned int)lua_tointeger(L,3);
	int bufsize=(int)lua_tointeger(L,4);
	int* length=(int*)Luna< void >::check(L,5);
	char* name=(char*)Luna< void >::check(L,6);

	::glGetActiveSubroutineName(program, shadertype, index, bufsize, length, name);

	return 0;
}

// void glUniformSubroutinesuiv(unsigned int shadertype, int count, const unsigned int * indices)
static int _bind_glUniformSubroutinesuiv(lua_State *L) {
	if (!_lg_typecheck_glUniformSubroutinesuiv(L)) {
		luaL_error(L, "luna typecheck failed in void glUniformSubroutinesuiv(unsigned int shadertype, int count, const unsigned int * indices) function, expected prototype:\nvoid glUniformSubroutinesuiv(unsigned int shadertype, int count, const unsigned int * indices)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int shadertype=(unsigned int)lua_tointeger(L,1);
	int count=(int)lua_tointeger(L,2);
	const unsigned int* indices=(const unsigned int*)Luna< void >::check(L,3);

	::glUniformSubroutinesuiv(shadertype, count, indices);

	return 0;
}

// void glGetUniformSubroutineuiv(unsigned int shadertype, int location, unsigned int * params)
static int _bind_glGetUniformSubroutineuiv(lua_State *L) {
	if (!_lg_typecheck_glGetUniformSubroutineuiv(L)) {
		luaL_error(L, "luna typecheck failed in void glGetUniformSubroutineuiv(unsigned int shadertype, int location, unsigned int * params) function, expected prototype:\nvoid glGetUniformSubroutineuiv(unsigned int shadertype, int location, unsigned int * params)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int shadertype=(unsigned int)lua_tointeger(L,1);
	int location=(int)lua_tointeger(L,2);
	unsigned int* params=(unsigned int*)Luna< void >::check(L,3);

	::glGetUniformSubroutineuiv(shadertype, location, params);

	return 0;
}

// void glGetProgramStageiv(unsigned int program, unsigned int shadertype, unsigned int pname, int * values)
static int _bind_glGetProgramStageiv(lua_State *L) {
	if (!_lg_typecheck_glGetProgramStageiv(L)) {
		luaL_error(L, "luna typecheck failed in void glGetProgramStageiv(unsigned int program, unsigned int shadertype, unsigned int pname, int * values) function, expected prototype:\nvoid glGetProgramStageiv(unsigned int program, unsigned int shadertype, unsigned int pname, int * values)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	unsigned int shadertype=(unsigned int)lua_tointeger(L,2);
	unsigned int pname=(unsigned int)lua_tointeger(L,3);
	int* values=(int*)Luna< void >::check(L,4);

	::glGetProgramStageiv(program, shadertype, pname, values);

	return 0;
}

// void glPatchParameteri(unsigned int pname, int value)
static int _bind_glPatchParameteri(lua_State *L) {
	if (!_lg_typecheck_glPatchParameteri(L)) {
		luaL_error(L, "luna typecheck failed in void glPatchParameteri(unsigned int pname, int value) function, expected prototype:\nvoid glPatchParameteri(unsigned int pname, int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int pname=(unsigned int)lua_tointeger(L,1);
	int value=(int)lua_tointeger(L,2);

	::glPatchParameteri(pname, value);

	return 0;
}

// void glPatchParameterfv(unsigned int pname, const float * values)
static int _bind_glPatchParameterfv(lua_State *L) {
	if (!_lg_typecheck_glPatchParameterfv(L)) {
		luaL_error(L, "luna typecheck failed in void glPatchParameterfv(unsigned int pname, const float * values) function, expected prototype:\nvoid glPatchParameterfv(unsigned int pname, const float * values)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int pname=(unsigned int)lua_tointeger(L,1);
	const float* values=(const float*)Luna< void >::check(L,2);

	::glPatchParameterfv(pname, values);

	return 0;
}

// void glBindTransformFeedback(unsigned int target, unsigned int id)
static int _bind_glBindTransformFeedback(lua_State *L) {
	if (!_lg_typecheck_glBindTransformFeedback(L)) {
		luaL_error(L, "luna typecheck failed in void glBindTransformFeedback(unsigned int target, unsigned int id) function, expected prototype:\nvoid glBindTransformFeedback(unsigned int target, unsigned int id)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	unsigned int id=(unsigned int)lua_tointeger(L,2);

	::glBindTransformFeedback(target, id);

	return 0;
}

// void glDeleteTransformFeedbacks(int n, const unsigned int * ids)
static int _bind_glDeleteTransformFeedbacks(lua_State *L) {
	if (!_lg_typecheck_glDeleteTransformFeedbacks(L)) {
		luaL_error(L, "luna typecheck failed in void glDeleteTransformFeedbacks(int n, const unsigned int * ids) function, expected prototype:\nvoid glDeleteTransformFeedbacks(int n, const unsigned int * ids)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int n=(int)lua_tointeger(L,1);
	const unsigned int* ids=(const unsigned int*)Luna< void >::check(L,2);

	::glDeleteTransformFeedbacks(n, ids);

	return 0;
}

// void glGenTransformFeedbacks(int n, unsigned int * ids)
static int _bind_glGenTransformFeedbacks(lua_State *L) {
	if (!_lg_typecheck_glGenTransformFeedbacks(L)) {
		luaL_error(L, "luna typecheck failed in void glGenTransformFeedbacks(int n, unsigned int * ids) function, expected prototype:\nvoid glGenTransformFeedbacks(int n, unsigned int * ids)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int n=(int)lua_tointeger(L,1);
	unsigned int* ids=(unsigned int*)Luna< void >::check(L,2);

	::glGenTransformFeedbacks(n, ids);

	return 0;
}

// unsigned char glIsTransformFeedback(unsigned int id)
static int _bind_glIsTransformFeedback(lua_State *L) {
	if (!_lg_typecheck_glIsTransformFeedback(L)) {
		luaL_error(L, "luna typecheck failed in unsigned char glIsTransformFeedback(unsigned int id) function, expected prototype:\nunsigned char glIsTransformFeedback(unsigned int id)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int id=(unsigned int)lua_tointeger(L,1);

	unsigned char lret = ::glIsTransformFeedback(id);
	lua_pushnumber(L,(int)lret);

	return 1;
}

// void glPauseTransformFeedback()
static int _bind_glPauseTransformFeedback(lua_State *L) {
	if (!_lg_typecheck_glPauseTransformFeedback(L)) {
		luaL_error(L, "luna typecheck failed in void glPauseTransformFeedback() function, expected prototype:\nvoid glPauseTransformFeedback()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	::glPauseTransformFeedback();

	return 0;
}

// void glResumeTransformFeedback()
static int _bind_glResumeTransformFeedback(lua_State *L) {
	if (!_lg_typecheck_glResumeTransformFeedback(L)) {
		luaL_error(L, "luna typecheck failed in void glResumeTransformFeedback() function, expected prototype:\nvoid glResumeTransformFeedback()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	::glResumeTransformFeedback();

	return 0;
}

// void glDrawTransformFeedback(unsigned int mode, unsigned int id)
static int _bind_glDrawTransformFeedback(lua_State *L) {
	if (!_lg_typecheck_glDrawTransformFeedback(L)) {
		luaL_error(L, "luna typecheck failed in void glDrawTransformFeedback(unsigned int mode, unsigned int id) function, expected prototype:\nvoid glDrawTransformFeedback(unsigned int mode, unsigned int id)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int mode=(unsigned int)lua_tointeger(L,1);
	unsigned int id=(unsigned int)lua_tointeger(L,2);

	::glDrawTransformFeedback(mode, id);

	return 0;
}

// void glDrawTransformFeedbackStream(unsigned int mode, unsigned int id, unsigned int stream)
static int _bind_glDrawTransformFeedbackStream(lua_State *L) {
	if (!_lg_typecheck_glDrawTransformFeedbackStream(L)) {
		luaL_error(L, "luna typecheck failed in void glDrawTransformFeedbackStream(unsigned int mode, unsigned int id, unsigned int stream) function, expected prototype:\nvoid glDrawTransformFeedbackStream(unsigned int mode, unsigned int id, unsigned int stream)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int mode=(unsigned int)lua_tointeger(L,1);
	unsigned int id=(unsigned int)lua_tointeger(L,2);
	unsigned int stream=(unsigned int)lua_tointeger(L,3);

	::glDrawTransformFeedbackStream(mode, id, stream);

	return 0;
}

// void glBeginQueryIndexed(unsigned int target, unsigned int index, unsigned int id)
static int _bind_glBeginQueryIndexed(lua_State *L) {
	if (!_lg_typecheck_glBeginQueryIndexed(L)) {
		luaL_error(L, "luna typecheck failed in void glBeginQueryIndexed(unsigned int target, unsigned int index, unsigned int id) function, expected prototype:\nvoid glBeginQueryIndexed(unsigned int target, unsigned int index, unsigned int id)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	unsigned int index=(unsigned int)lua_tointeger(L,2);
	unsigned int id=(unsigned int)lua_tointeger(L,3);

	::glBeginQueryIndexed(target, index, id);

	return 0;
}

// void glEndQueryIndexed(unsigned int target, unsigned int index)
static int _bind_glEndQueryIndexed(lua_State *L) {
	if (!_lg_typecheck_glEndQueryIndexed(L)) {
		luaL_error(L, "luna typecheck failed in void glEndQueryIndexed(unsigned int target, unsigned int index) function, expected prototype:\nvoid glEndQueryIndexed(unsigned int target, unsigned int index)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	unsigned int index=(unsigned int)lua_tointeger(L,2);

	::glEndQueryIndexed(target, index);

	return 0;
}

// void glGetQueryIndexediv(unsigned int target, unsigned int index, unsigned int pname, int * params)
static int _bind_glGetQueryIndexediv(lua_State *L) {
	if (!_lg_typecheck_glGetQueryIndexediv(L)) {
		luaL_error(L, "luna typecheck failed in void glGetQueryIndexediv(unsigned int target, unsigned int index, unsigned int pname, int * params) function, expected prototype:\nvoid glGetQueryIndexediv(unsigned int target, unsigned int index, unsigned int pname, int * params)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	unsigned int index=(unsigned int)lua_tointeger(L,2);
	unsigned int pname=(unsigned int)lua_tointeger(L,3);
	int* params=(int*)Luna< void >::check(L,4);

	::glGetQueryIndexediv(target, index, pname, params);

	return 0;
}

// void glReleaseShaderCompiler()
static int _bind_glReleaseShaderCompiler(lua_State *L) {
	if (!_lg_typecheck_glReleaseShaderCompiler(L)) {
		luaL_error(L, "luna typecheck failed in void glReleaseShaderCompiler() function, expected prototype:\nvoid glReleaseShaderCompiler()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	::glReleaseShaderCompiler();

	return 0;
}

// void glShaderBinary(int count, const unsigned int * shaders, unsigned int binaryformat, const void * binary, int length)
static int _bind_glShaderBinary(lua_State *L) {
	if (!_lg_typecheck_glShaderBinary(L)) {
		luaL_error(L, "luna typecheck failed in void glShaderBinary(int count, const unsigned int * shaders, unsigned int binaryformat, const void * binary, int length) function, expected prototype:\nvoid glShaderBinary(int count, const unsigned int * shaders, unsigned int binaryformat, const void * binary, int length)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int count=(int)lua_tointeger(L,1);
	const unsigned int* shaders=(const unsigned int*)Luna< void >::check(L,2);
	unsigned int binaryformat=(unsigned int)lua_tointeger(L,3);
	const void* binary=(Luna< void >::check(L,4));
	int length=(int)lua_tointeger(L,5);

	::glShaderBinary(count, shaders, binaryformat, binary, length);

	return 0;
}

// void glGetShaderPrecisionFormat(unsigned int shadertype, unsigned int precisiontype, int * range, int * precision)
static int _bind_glGetShaderPrecisionFormat(lua_State *L) {
	if (!_lg_typecheck_glGetShaderPrecisionFormat(L)) {
		luaL_error(L, "luna typecheck failed in void glGetShaderPrecisionFormat(unsigned int shadertype, unsigned int precisiontype, int * range, int * precision) function, expected prototype:\nvoid glGetShaderPrecisionFormat(unsigned int shadertype, unsigned int precisiontype, int * range, int * precision)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int shadertype=(unsigned int)lua_tointeger(L,1);
	unsigned int precisiontype=(unsigned int)lua_tointeger(L,2);
	int* range=(int*)Luna< void >::check(L,3);
	int* precision=(int*)Luna< void >::check(L,4);

	::glGetShaderPrecisionFormat(shadertype, precisiontype, range, precision);

	return 0;
}

// void glDepthRangef(float n, float f)
static int _bind_glDepthRangef(lua_State *L) {
	if (!_lg_typecheck_glDepthRangef(L)) {
		luaL_error(L, "luna typecheck failed in void glDepthRangef(float n, float f) function, expected prototype:\nvoid glDepthRangef(float n, float f)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	float n=(float)lua_tonumber(L,1);
	float f=(float)lua_tonumber(L,2);

	::glDepthRangef(n, f);

	return 0;
}

// void glClearDepthf(float d)
static int _bind_glClearDepthf(lua_State *L) {
	if (!_lg_typecheck_glClearDepthf(L)) {
		luaL_error(L, "luna typecheck failed in void glClearDepthf(float d) function, expected prototype:\nvoid glClearDepthf(float d)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	float d=(float)lua_tonumber(L,1);

	::glClearDepthf(d);

	return 0;
}

// void glGetProgramBinary(unsigned int program, int bufSize, int * length, unsigned int * binaryFormat, void * binary)
static int _bind_glGetProgramBinary(lua_State *L) {
	if (!_lg_typecheck_glGetProgramBinary(L)) {
		luaL_error(L, "luna typecheck failed in void glGetProgramBinary(unsigned int program, int bufSize, int * length, unsigned int * binaryFormat, void * binary) function, expected prototype:\nvoid glGetProgramBinary(unsigned int program, int bufSize, int * length, unsigned int * binaryFormat, void * binary)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	int bufSize=(int)lua_tointeger(L,2);
	int* length=(int*)Luna< void >::check(L,3);
	unsigned int* binaryFormat=(unsigned int*)Luna< void >::check(L,4);
	void* binary=(Luna< void >::check(L,5));

	::glGetProgramBinary(program, bufSize, length, binaryFormat, binary);

	return 0;
}

// void glProgramBinary(unsigned int program, unsigned int binaryFormat, const void * binary, int length)
static int _bind_glProgramBinary(lua_State *L) {
	if (!_lg_typecheck_glProgramBinary(L)) {
		luaL_error(L, "luna typecheck failed in void glProgramBinary(unsigned int program, unsigned int binaryFormat, const void * binary, int length) function, expected prototype:\nvoid glProgramBinary(unsigned int program, unsigned int binaryFormat, const void * binary, int length)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	unsigned int binaryFormat=(unsigned int)lua_tointeger(L,2);
	const void* binary=(Luna< void >::check(L,3));
	int length=(int)lua_tointeger(L,4);

	::glProgramBinary(program, binaryFormat, binary, length);

	return 0;
}

// void glProgramParameteri(unsigned int program, unsigned int pname, int value)
static int _bind_glProgramParameteri(lua_State *L) {
	if (!_lg_typecheck_glProgramParameteri(L)) {
		luaL_error(L, "luna typecheck failed in void glProgramParameteri(unsigned int program, unsigned int pname, int value) function, expected prototype:\nvoid glProgramParameteri(unsigned int program, unsigned int pname, int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	unsigned int pname=(unsigned int)lua_tointeger(L,2);
	int value=(int)lua_tointeger(L,3);

	::glProgramParameteri(program, pname, value);

	return 0;
}

// void glUseProgramStages(unsigned int pipeline, unsigned int stages, unsigned int program)
static int _bind_glUseProgramStages(lua_State *L) {
	if (!_lg_typecheck_glUseProgramStages(L)) {
		luaL_error(L, "luna typecheck failed in void glUseProgramStages(unsigned int pipeline, unsigned int stages, unsigned int program) function, expected prototype:\nvoid glUseProgramStages(unsigned int pipeline, unsigned int stages, unsigned int program)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int pipeline=(unsigned int)lua_tointeger(L,1);
	unsigned int stages=(unsigned int)lua_tointeger(L,2);
	unsigned int program=(unsigned int)lua_tointeger(L,3);

	::glUseProgramStages(pipeline, stages, program);

	return 0;
}

// void glActiveShaderProgram(unsigned int pipeline, unsigned int program)
static int _bind_glActiveShaderProgram(lua_State *L) {
	if (!_lg_typecheck_glActiveShaderProgram(L)) {
		luaL_error(L, "luna typecheck failed in void glActiveShaderProgram(unsigned int pipeline, unsigned int program) function, expected prototype:\nvoid glActiveShaderProgram(unsigned int pipeline, unsigned int program)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int pipeline=(unsigned int)lua_tointeger(L,1);
	unsigned int program=(unsigned int)lua_tointeger(L,2);

	::glActiveShaderProgram(pipeline, program);

	return 0;
}

// void glBindProgramPipeline(unsigned int pipeline)
static int _bind_glBindProgramPipeline(lua_State *L) {
	if (!_lg_typecheck_glBindProgramPipeline(L)) {
		luaL_error(L, "luna typecheck failed in void glBindProgramPipeline(unsigned int pipeline) function, expected prototype:\nvoid glBindProgramPipeline(unsigned int pipeline)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int pipeline=(unsigned int)lua_tointeger(L,1);

	::glBindProgramPipeline(pipeline);

	return 0;
}

// void glDeleteProgramPipelines(int n, const unsigned int * pipelines)
static int _bind_glDeleteProgramPipelines(lua_State *L) {
	if (!_lg_typecheck_glDeleteProgramPipelines(L)) {
		luaL_error(L, "luna typecheck failed in void glDeleteProgramPipelines(int n, const unsigned int * pipelines) function, expected prototype:\nvoid glDeleteProgramPipelines(int n, const unsigned int * pipelines)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int n=(int)lua_tointeger(L,1);
	const unsigned int* pipelines=(const unsigned int*)Luna< void >::check(L,2);

	::glDeleteProgramPipelines(n, pipelines);

	return 0;
}

// void glGenProgramPipelines(int n, unsigned int * pipelines)
static int _bind_glGenProgramPipelines(lua_State *L) {
	if (!_lg_typecheck_glGenProgramPipelines(L)) {
		luaL_error(L, "luna typecheck failed in void glGenProgramPipelines(int n, unsigned int * pipelines) function, expected prototype:\nvoid glGenProgramPipelines(int n, unsigned int * pipelines)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int n=(int)lua_tointeger(L,1);
	unsigned int* pipelines=(unsigned int*)Luna< void >::check(L,2);

	::glGenProgramPipelines(n, pipelines);

	return 0;
}

// unsigned char glIsProgramPipeline(unsigned int pipeline)
static int _bind_glIsProgramPipeline(lua_State *L) {
	if (!_lg_typecheck_glIsProgramPipeline(L)) {
		luaL_error(L, "luna typecheck failed in unsigned char glIsProgramPipeline(unsigned int pipeline) function, expected prototype:\nunsigned char glIsProgramPipeline(unsigned int pipeline)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int pipeline=(unsigned int)lua_tointeger(L,1);

	unsigned char lret = ::glIsProgramPipeline(pipeline);
	lua_pushnumber(L,(int)lret);

	return 1;
}

// void glGetProgramPipelineiv(unsigned int pipeline, unsigned int pname, int * params)
static int _bind_glGetProgramPipelineiv(lua_State *L) {
	if (!_lg_typecheck_glGetProgramPipelineiv(L)) {
		luaL_error(L, "luna typecheck failed in void glGetProgramPipelineiv(unsigned int pipeline, unsigned int pname, int * params) function, expected prototype:\nvoid glGetProgramPipelineiv(unsigned int pipeline, unsigned int pname, int * params)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int pipeline=(unsigned int)lua_tointeger(L,1);
	unsigned int pname=(unsigned int)lua_tointeger(L,2);
	int* params=(int*)Luna< void >::check(L,3);

	::glGetProgramPipelineiv(pipeline, pname, params);

	return 0;
}

// void glProgramUniform1i(unsigned int program, int location, int v0)
static int _bind_glProgramUniform1i(lua_State *L) {
	if (!_lg_typecheck_glProgramUniform1i(L)) {
		luaL_error(L, "luna typecheck failed in void glProgramUniform1i(unsigned int program, int location, int v0) function, expected prototype:\nvoid glProgramUniform1i(unsigned int program, int location, int v0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	int location=(int)lua_tointeger(L,2);
	int v0=(int)lua_tointeger(L,3);

	::glProgramUniform1i(program, location, v0);

	return 0;
}

// void glProgramUniform1iv(unsigned int program, int location, int count, const int * value)
static int _bind_glProgramUniform1iv(lua_State *L) {
	if (!_lg_typecheck_glProgramUniform1iv(L)) {
		luaL_error(L, "luna typecheck failed in void glProgramUniform1iv(unsigned int program, int location, int count, const int * value) function, expected prototype:\nvoid glProgramUniform1iv(unsigned int program, int location, int count, const int * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	int location=(int)lua_tointeger(L,2);
	int count=(int)lua_tointeger(L,3);
	const int* value=(const int*)Luna< void >::check(L,4);

	::glProgramUniform1iv(program, location, count, value);

	return 0;
}

// void glProgramUniform1f(unsigned int program, int location, float v0)
static int _bind_glProgramUniform1f(lua_State *L) {
	if (!_lg_typecheck_glProgramUniform1f(L)) {
		luaL_error(L, "luna typecheck failed in void glProgramUniform1f(unsigned int program, int location, float v0) function, expected prototype:\nvoid glProgramUniform1f(unsigned int program, int location, float v0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	int location=(int)lua_tointeger(L,2);
	float v0=(float)lua_tonumber(L,3);

	::glProgramUniform1f(program, location, v0);

	return 0;
}

// void glProgramUniform1fv(unsigned int program, int location, int count, const float * value)
static int _bind_glProgramUniform1fv(lua_State *L) {
	if (!_lg_typecheck_glProgramUniform1fv(L)) {
		luaL_error(L, "luna typecheck failed in void glProgramUniform1fv(unsigned int program, int location, int count, const float * value) function, expected prototype:\nvoid glProgramUniform1fv(unsigned int program, int location, int count, const float * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	int location=(int)lua_tointeger(L,2);
	int count=(int)lua_tointeger(L,3);
	const float* value=(const float*)Luna< void >::check(L,4);

	::glProgramUniform1fv(program, location, count, value);

	return 0;
}

// void glProgramUniform1d(unsigned int program, int location, double v0)
static int _bind_glProgramUniform1d(lua_State *L) {
	if (!_lg_typecheck_glProgramUniform1d(L)) {
		luaL_error(L, "luna typecheck failed in void glProgramUniform1d(unsigned int program, int location, double v0) function, expected prototype:\nvoid glProgramUniform1d(unsigned int program, int location, double v0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	int location=(int)lua_tointeger(L,2);
	double v0=(double)lua_tonumber(L,3);

	::glProgramUniform1d(program, location, v0);

	return 0;
}

// void glProgramUniform1dv(unsigned int program, int location, int count, const double * value)
static int _bind_glProgramUniform1dv(lua_State *L) {
	if (!_lg_typecheck_glProgramUniform1dv(L)) {
		luaL_error(L, "luna typecheck failed in void glProgramUniform1dv(unsigned int program, int location, int count, const double * value) function, expected prototype:\nvoid glProgramUniform1dv(unsigned int program, int location, int count, const double * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	int location=(int)lua_tointeger(L,2);
	int count=(int)lua_tointeger(L,3);
	const double* value=(const double*)Luna< void >::check(L,4);

	::glProgramUniform1dv(program, location, count, value);

	return 0;
}

// void glProgramUniform1ui(unsigned int program, int location, unsigned int v0)
static int _bind_glProgramUniform1ui(lua_State *L) {
	if (!_lg_typecheck_glProgramUniform1ui(L)) {
		luaL_error(L, "luna typecheck failed in void glProgramUniform1ui(unsigned int program, int location, unsigned int v0) function, expected prototype:\nvoid glProgramUniform1ui(unsigned int program, int location, unsigned int v0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	int location=(int)lua_tointeger(L,2);
	unsigned int v0=(unsigned int)lua_tointeger(L,3);

	::glProgramUniform1ui(program, location, v0);

	return 0;
}

// void glProgramUniform1uiv(unsigned int program, int location, int count, const unsigned int * value)
static int _bind_glProgramUniform1uiv(lua_State *L) {
	if (!_lg_typecheck_glProgramUniform1uiv(L)) {
		luaL_error(L, "luna typecheck failed in void glProgramUniform1uiv(unsigned int program, int location, int count, const unsigned int * value) function, expected prototype:\nvoid glProgramUniform1uiv(unsigned int program, int location, int count, const unsigned int * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	int location=(int)lua_tointeger(L,2);
	int count=(int)lua_tointeger(L,3);
	const unsigned int* value=(const unsigned int*)Luna< void >::check(L,4);

	::glProgramUniform1uiv(program, location, count, value);

	return 0;
}

// void glProgramUniform2i(unsigned int program, int location, int v0, int v1)
static int _bind_glProgramUniform2i(lua_State *L) {
	if (!_lg_typecheck_glProgramUniform2i(L)) {
		luaL_error(L, "luna typecheck failed in void glProgramUniform2i(unsigned int program, int location, int v0, int v1) function, expected prototype:\nvoid glProgramUniform2i(unsigned int program, int location, int v0, int v1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	int location=(int)lua_tointeger(L,2);
	int v0=(int)lua_tointeger(L,3);
	int v1=(int)lua_tointeger(L,4);

	::glProgramUniform2i(program, location, v0, v1);

	return 0;
}

// void glProgramUniform2iv(unsigned int program, int location, int count, const int * value)
static int _bind_glProgramUniform2iv(lua_State *L) {
	if (!_lg_typecheck_glProgramUniform2iv(L)) {
		luaL_error(L, "luna typecheck failed in void glProgramUniform2iv(unsigned int program, int location, int count, const int * value) function, expected prototype:\nvoid glProgramUniform2iv(unsigned int program, int location, int count, const int * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	int location=(int)lua_tointeger(L,2);
	int count=(int)lua_tointeger(L,3);
	const int* value=(const int*)Luna< void >::check(L,4);

	::glProgramUniform2iv(program, location, count, value);

	return 0;
}

// void glProgramUniform2f(unsigned int program, int location, float v0, float v1)
static int _bind_glProgramUniform2f(lua_State *L) {
	if (!_lg_typecheck_glProgramUniform2f(L)) {
		luaL_error(L, "luna typecheck failed in void glProgramUniform2f(unsigned int program, int location, float v0, float v1) function, expected prototype:\nvoid glProgramUniform2f(unsigned int program, int location, float v0, float v1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	int location=(int)lua_tointeger(L,2);
	float v0=(float)lua_tonumber(L,3);
	float v1=(float)lua_tonumber(L,4);

	::glProgramUniform2f(program, location, v0, v1);

	return 0;
}

// void glProgramUniform2fv(unsigned int program, int location, int count, const float * value)
static int _bind_glProgramUniform2fv(lua_State *L) {
	if (!_lg_typecheck_glProgramUniform2fv(L)) {
		luaL_error(L, "luna typecheck failed in void glProgramUniform2fv(unsigned int program, int location, int count, const float * value) function, expected prototype:\nvoid glProgramUniform2fv(unsigned int program, int location, int count, const float * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	int location=(int)lua_tointeger(L,2);
	int count=(int)lua_tointeger(L,3);
	const float* value=(const float*)Luna< void >::check(L,4);

	::glProgramUniform2fv(program, location, count, value);

	return 0;
}

// void glProgramUniform2d(unsigned int program, int location, double v0, double v1)
static int _bind_glProgramUniform2d(lua_State *L) {
	if (!_lg_typecheck_glProgramUniform2d(L)) {
		luaL_error(L, "luna typecheck failed in void glProgramUniform2d(unsigned int program, int location, double v0, double v1) function, expected prototype:\nvoid glProgramUniform2d(unsigned int program, int location, double v0, double v1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	int location=(int)lua_tointeger(L,2);
	double v0=(double)lua_tonumber(L,3);
	double v1=(double)lua_tonumber(L,4);

	::glProgramUniform2d(program, location, v0, v1);

	return 0;
}

// void glProgramUniform2dv(unsigned int program, int location, int count, const double * value)
static int _bind_glProgramUniform2dv(lua_State *L) {
	if (!_lg_typecheck_glProgramUniform2dv(L)) {
		luaL_error(L, "luna typecheck failed in void glProgramUniform2dv(unsigned int program, int location, int count, const double * value) function, expected prototype:\nvoid glProgramUniform2dv(unsigned int program, int location, int count, const double * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	int location=(int)lua_tointeger(L,2);
	int count=(int)lua_tointeger(L,3);
	const double* value=(const double*)Luna< void >::check(L,4);

	::glProgramUniform2dv(program, location, count, value);

	return 0;
}

// void glProgramUniform2ui(unsigned int program, int location, unsigned int v0, unsigned int v1)
static int _bind_glProgramUniform2ui(lua_State *L) {
	if (!_lg_typecheck_glProgramUniform2ui(L)) {
		luaL_error(L, "luna typecheck failed in void glProgramUniform2ui(unsigned int program, int location, unsigned int v0, unsigned int v1) function, expected prototype:\nvoid glProgramUniform2ui(unsigned int program, int location, unsigned int v0, unsigned int v1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	int location=(int)lua_tointeger(L,2);
	unsigned int v0=(unsigned int)lua_tointeger(L,3);
	unsigned int v1=(unsigned int)lua_tointeger(L,4);

	::glProgramUniform2ui(program, location, v0, v1);

	return 0;
}

// void glProgramUniform2uiv(unsigned int program, int location, int count, const unsigned int * value)
static int _bind_glProgramUniform2uiv(lua_State *L) {
	if (!_lg_typecheck_glProgramUniform2uiv(L)) {
		luaL_error(L, "luna typecheck failed in void glProgramUniform2uiv(unsigned int program, int location, int count, const unsigned int * value) function, expected prototype:\nvoid glProgramUniform2uiv(unsigned int program, int location, int count, const unsigned int * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	int location=(int)lua_tointeger(L,2);
	int count=(int)lua_tointeger(L,3);
	const unsigned int* value=(const unsigned int*)Luna< void >::check(L,4);

	::glProgramUniform2uiv(program, location, count, value);

	return 0;
}

// void glProgramUniform3i(unsigned int program, int location, int v0, int v1, int v2)
static int _bind_glProgramUniform3i(lua_State *L) {
	if (!_lg_typecheck_glProgramUniform3i(L)) {
		luaL_error(L, "luna typecheck failed in void glProgramUniform3i(unsigned int program, int location, int v0, int v1, int v2) function, expected prototype:\nvoid glProgramUniform3i(unsigned int program, int location, int v0, int v1, int v2)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	int location=(int)lua_tointeger(L,2);
	int v0=(int)lua_tointeger(L,3);
	int v1=(int)lua_tointeger(L,4);
	int v2=(int)lua_tointeger(L,5);

	::glProgramUniform3i(program, location, v0, v1, v2);

	return 0;
}

// void glProgramUniform3iv(unsigned int program, int location, int count, const int * value)
static int _bind_glProgramUniform3iv(lua_State *L) {
	if (!_lg_typecheck_glProgramUniform3iv(L)) {
		luaL_error(L, "luna typecheck failed in void glProgramUniform3iv(unsigned int program, int location, int count, const int * value) function, expected prototype:\nvoid glProgramUniform3iv(unsigned int program, int location, int count, const int * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	int location=(int)lua_tointeger(L,2);
	int count=(int)lua_tointeger(L,3);
	const int* value=(const int*)Luna< void >::check(L,4);

	::glProgramUniform3iv(program, location, count, value);

	return 0;
}

// void glProgramUniform3f(unsigned int program, int location, float v0, float v1, float v2)
static int _bind_glProgramUniform3f(lua_State *L) {
	if (!_lg_typecheck_glProgramUniform3f(L)) {
		luaL_error(L, "luna typecheck failed in void glProgramUniform3f(unsigned int program, int location, float v0, float v1, float v2) function, expected prototype:\nvoid glProgramUniform3f(unsigned int program, int location, float v0, float v1, float v2)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	int location=(int)lua_tointeger(L,2);
	float v0=(float)lua_tonumber(L,3);
	float v1=(float)lua_tonumber(L,4);
	float v2=(float)lua_tonumber(L,5);

	::glProgramUniform3f(program, location, v0, v1, v2);

	return 0;
}

// void glProgramUniform3fv(unsigned int program, int location, int count, const float * value)
static int _bind_glProgramUniform3fv(lua_State *L) {
	if (!_lg_typecheck_glProgramUniform3fv(L)) {
		luaL_error(L, "luna typecheck failed in void glProgramUniform3fv(unsigned int program, int location, int count, const float * value) function, expected prototype:\nvoid glProgramUniform3fv(unsigned int program, int location, int count, const float * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	int location=(int)lua_tointeger(L,2);
	int count=(int)lua_tointeger(L,3);
	const float* value=(const float*)Luna< void >::check(L,4);

	::glProgramUniform3fv(program, location, count, value);

	return 0;
}

// void glProgramUniform3d(unsigned int program, int location, double v0, double v1, double v2)
static int _bind_glProgramUniform3d(lua_State *L) {
	if (!_lg_typecheck_glProgramUniform3d(L)) {
		luaL_error(L, "luna typecheck failed in void glProgramUniform3d(unsigned int program, int location, double v0, double v1, double v2) function, expected prototype:\nvoid glProgramUniform3d(unsigned int program, int location, double v0, double v1, double v2)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	int location=(int)lua_tointeger(L,2);
	double v0=(double)lua_tonumber(L,3);
	double v1=(double)lua_tonumber(L,4);
	double v2=(double)lua_tonumber(L,5);

	::glProgramUniform3d(program, location, v0, v1, v2);

	return 0;
}

// void glProgramUniform3dv(unsigned int program, int location, int count, const double * value)
static int _bind_glProgramUniform3dv(lua_State *L) {
	if (!_lg_typecheck_glProgramUniform3dv(L)) {
		luaL_error(L, "luna typecheck failed in void glProgramUniform3dv(unsigned int program, int location, int count, const double * value) function, expected prototype:\nvoid glProgramUniform3dv(unsigned int program, int location, int count, const double * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	int location=(int)lua_tointeger(L,2);
	int count=(int)lua_tointeger(L,3);
	const double* value=(const double*)Luna< void >::check(L,4);

	::glProgramUniform3dv(program, location, count, value);

	return 0;
}

// void glProgramUniform3ui(unsigned int program, int location, unsigned int v0, unsigned int v1, unsigned int v2)
static int _bind_glProgramUniform3ui(lua_State *L) {
	if (!_lg_typecheck_glProgramUniform3ui(L)) {
		luaL_error(L, "luna typecheck failed in void glProgramUniform3ui(unsigned int program, int location, unsigned int v0, unsigned int v1, unsigned int v2) function, expected prototype:\nvoid glProgramUniform3ui(unsigned int program, int location, unsigned int v0, unsigned int v1, unsigned int v2)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	int location=(int)lua_tointeger(L,2);
	unsigned int v0=(unsigned int)lua_tointeger(L,3);
	unsigned int v1=(unsigned int)lua_tointeger(L,4);
	unsigned int v2=(unsigned int)lua_tointeger(L,5);

	::glProgramUniform3ui(program, location, v0, v1, v2);

	return 0;
}

// void glProgramUniform3uiv(unsigned int program, int location, int count, const unsigned int * value)
static int _bind_glProgramUniform3uiv(lua_State *L) {
	if (!_lg_typecheck_glProgramUniform3uiv(L)) {
		luaL_error(L, "luna typecheck failed in void glProgramUniform3uiv(unsigned int program, int location, int count, const unsigned int * value) function, expected prototype:\nvoid glProgramUniform3uiv(unsigned int program, int location, int count, const unsigned int * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	int location=(int)lua_tointeger(L,2);
	int count=(int)lua_tointeger(L,3);
	const unsigned int* value=(const unsigned int*)Luna< void >::check(L,4);

	::glProgramUniform3uiv(program, location, count, value);

	return 0;
}

// void glProgramUniform4i(unsigned int program, int location, int v0, int v1, int v2, int v3)
static int _bind_glProgramUniform4i(lua_State *L) {
	if (!_lg_typecheck_glProgramUniform4i(L)) {
		luaL_error(L, "luna typecheck failed in void glProgramUniform4i(unsigned int program, int location, int v0, int v1, int v2, int v3) function, expected prototype:\nvoid glProgramUniform4i(unsigned int program, int location, int v0, int v1, int v2, int v3)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	int location=(int)lua_tointeger(L,2);
	int v0=(int)lua_tointeger(L,3);
	int v1=(int)lua_tointeger(L,4);
	int v2=(int)lua_tointeger(L,5);
	int v3=(int)lua_tointeger(L,6);

	::glProgramUniform4i(program, location, v0, v1, v2, v3);

	return 0;
}

// void glProgramUniform4iv(unsigned int program, int location, int count, const int * value)
static int _bind_glProgramUniform4iv(lua_State *L) {
	if (!_lg_typecheck_glProgramUniform4iv(L)) {
		luaL_error(L, "luna typecheck failed in void glProgramUniform4iv(unsigned int program, int location, int count, const int * value) function, expected prototype:\nvoid glProgramUniform4iv(unsigned int program, int location, int count, const int * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	int location=(int)lua_tointeger(L,2);
	int count=(int)lua_tointeger(L,3);
	const int* value=(const int*)Luna< void >::check(L,4);

	::glProgramUniform4iv(program, location, count, value);

	return 0;
}

// void glProgramUniform4f(unsigned int program, int location, float v0, float v1, float v2, float v3)
static int _bind_glProgramUniform4f(lua_State *L) {
	if (!_lg_typecheck_glProgramUniform4f(L)) {
		luaL_error(L, "luna typecheck failed in void glProgramUniform4f(unsigned int program, int location, float v0, float v1, float v2, float v3) function, expected prototype:\nvoid glProgramUniform4f(unsigned int program, int location, float v0, float v1, float v2, float v3)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	int location=(int)lua_tointeger(L,2);
	float v0=(float)lua_tonumber(L,3);
	float v1=(float)lua_tonumber(L,4);
	float v2=(float)lua_tonumber(L,5);
	float v3=(float)lua_tonumber(L,6);

	::glProgramUniform4f(program, location, v0, v1, v2, v3);

	return 0;
}

// void glProgramUniform4fv(unsigned int program, int location, int count, const float * value)
static int _bind_glProgramUniform4fv(lua_State *L) {
	if (!_lg_typecheck_glProgramUniform4fv(L)) {
		luaL_error(L, "luna typecheck failed in void glProgramUniform4fv(unsigned int program, int location, int count, const float * value) function, expected prototype:\nvoid glProgramUniform4fv(unsigned int program, int location, int count, const float * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	int location=(int)lua_tointeger(L,2);
	int count=(int)lua_tointeger(L,3);
	const float* value=(const float*)Luna< void >::check(L,4);

	::glProgramUniform4fv(program, location, count, value);

	return 0;
}

// void glProgramUniform4d(unsigned int program, int location, double v0, double v1, double v2, double v3)
static int _bind_glProgramUniform4d(lua_State *L) {
	if (!_lg_typecheck_glProgramUniform4d(L)) {
		luaL_error(L, "luna typecheck failed in void glProgramUniform4d(unsigned int program, int location, double v0, double v1, double v2, double v3) function, expected prototype:\nvoid glProgramUniform4d(unsigned int program, int location, double v0, double v1, double v2, double v3)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	int location=(int)lua_tointeger(L,2);
	double v0=(double)lua_tonumber(L,3);
	double v1=(double)lua_tonumber(L,4);
	double v2=(double)lua_tonumber(L,5);
	double v3=(double)lua_tonumber(L,6);

	::glProgramUniform4d(program, location, v0, v1, v2, v3);

	return 0;
}

// void glProgramUniform4dv(unsigned int program, int location, int count, const double * value)
static int _bind_glProgramUniform4dv(lua_State *L) {
	if (!_lg_typecheck_glProgramUniform4dv(L)) {
		luaL_error(L, "luna typecheck failed in void glProgramUniform4dv(unsigned int program, int location, int count, const double * value) function, expected prototype:\nvoid glProgramUniform4dv(unsigned int program, int location, int count, const double * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	int location=(int)lua_tointeger(L,2);
	int count=(int)lua_tointeger(L,3);
	const double* value=(const double*)Luna< void >::check(L,4);

	::glProgramUniform4dv(program, location, count, value);

	return 0;
}

// void glProgramUniform4ui(unsigned int program, int location, unsigned int v0, unsigned int v1, unsigned int v2, unsigned int v3)
static int _bind_glProgramUniform4ui(lua_State *L) {
	if (!_lg_typecheck_glProgramUniform4ui(L)) {
		luaL_error(L, "luna typecheck failed in void glProgramUniform4ui(unsigned int program, int location, unsigned int v0, unsigned int v1, unsigned int v2, unsigned int v3) function, expected prototype:\nvoid glProgramUniform4ui(unsigned int program, int location, unsigned int v0, unsigned int v1, unsigned int v2, unsigned int v3)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	int location=(int)lua_tointeger(L,2);
	unsigned int v0=(unsigned int)lua_tointeger(L,3);
	unsigned int v1=(unsigned int)lua_tointeger(L,4);
	unsigned int v2=(unsigned int)lua_tointeger(L,5);
	unsigned int v3=(unsigned int)lua_tointeger(L,6);

	::glProgramUniform4ui(program, location, v0, v1, v2, v3);

	return 0;
}

// void glProgramUniform4uiv(unsigned int program, int location, int count, const unsigned int * value)
static int _bind_glProgramUniform4uiv(lua_State *L) {
	if (!_lg_typecheck_glProgramUniform4uiv(L)) {
		luaL_error(L, "luna typecheck failed in void glProgramUniform4uiv(unsigned int program, int location, int count, const unsigned int * value) function, expected prototype:\nvoid glProgramUniform4uiv(unsigned int program, int location, int count, const unsigned int * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	int location=(int)lua_tointeger(L,2);
	int count=(int)lua_tointeger(L,3);
	const unsigned int* value=(const unsigned int*)Luna< void >::check(L,4);

	::glProgramUniform4uiv(program, location, count, value);

	return 0;
}

// void glProgramUniformMatrix2fv(unsigned int program, int location, int count, unsigned char transpose, const float * value)
static int _bind_glProgramUniformMatrix2fv(lua_State *L) {
	if (!_lg_typecheck_glProgramUniformMatrix2fv(L)) {
		luaL_error(L, "luna typecheck failed in void glProgramUniformMatrix2fv(unsigned int program, int location, int count, unsigned char transpose, const float * value) function, expected prototype:\nvoid glProgramUniformMatrix2fv(unsigned int program, int location, int count, unsigned char transpose, const float * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	int location=(int)lua_tointeger(L,2);
	int count=(int)lua_tointeger(L,3);
	unsigned char transpose = (unsigned char)(lua_tointeger(L,4));
	const float* value=(const float*)Luna< void >::check(L,5);

	::glProgramUniformMatrix2fv(program, location, count, transpose, value);

	return 0;
}

// void glProgramUniformMatrix3fv(unsigned int program, int location, int count, unsigned char transpose, const float * value)
static int _bind_glProgramUniformMatrix3fv(lua_State *L) {
	if (!_lg_typecheck_glProgramUniformMatrix3fv(L)) {
		luaL_error(L, "luna typecheck failed in void glProgramUniformMatrix3fv(unsigned int program, int location, int count, unsigned char transpose, const float * value) function, expected prototype:\nvoid glProgramUniformMatrix3fv(unsigned int program, int location, int count, unsigned char transpose, const float * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	int location=(int)lua_tointeger(L,2);
	int count=(int)lua_tointeger(L,3);
	unsigned char transpose = (unsigned char)(lua_tointeger(L,4));
	const float* value=(const float*)Luna< void >::check(L,5);

	::glProgramUniformMatrix3fv(program, location, count, transpose, value);

	return 0;
}

// void glProgramUniformMatrix4fv(unsigned int program, int location, int count, unsigned char transpose, const float * value)
static int _bind_glProgramUniformMatrix4fv(lua_State *L) {
	if (!_lg_typecheck_glProgramUniformMatrix4fv(L)) {
		luaL_error(L, "luna typecheck failed in void glProgramUniformMatrix4fv(unsigned int program, int location, int count, unsigned char transpose, const float * value) function, expected prototype:\nvoid glProgramUniformMatrix4fv(unsigned int program, int location, int count, unsigned char transpose, const float * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	int location=(int)lua_tointeger(L,2);
	int count=(int)lua_tointeger(L,3);
	unsigned char transpose = (unsigned char)(lua_tointeger(L,4));
	const float* value=(const float*)Luna< void >::check(L,5);

	::glProgramUniformMatrix4fv(program, location, count, transpose, value);

	return 0;
}

// void glProgramUniformMatrix2dv(unsigned int program, int location, int count, unsigned char transpose, const double * value)
static int _bind_glProgramUniformMatrix2dv(lua_State *L) {
	if (!_lg_typecheck_glProgramUniformMatrix2dv(L)) {
		luaL_error(L, "luna typecheck failed in void glProgramUniformMatrix2dv(unsigned int program, int location, int count, unsigned char transpose, const double * value) function, expected prototype:\nvoid glProgramUniformMatrix2dv(unsigned int program, int location, int count, unsigned char transpose, const double * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	int location=(int)lua_tointeger(L,2);
	int count=(int)lua_tointeger(L,3);
	unsigned char transpose = (unsigned char)(lua_tointeger(L,4));
	const double* value=(const double*)Luna< void >::check(L,5);

	::glProgramUniformMatrix2dv(program, location, count, transpose, value);

	return 0;
}

// void glProgramUniformMatrix3dv(unsigned int program, int location, int count, unsigned char transpose, const double * value)
static int _bind_glProgramUniformMatrix3dv(lua_State *L) {
	if (!_lg_typecheck_glProgramUniformMatrix3dv(L)) {
		luaL_error(L, "luna typecheck failed in void glProgramUniformMatrix3dv(unsigned int program, int location, int count, unsigned char transpose, const double * value) function, expected prototype:\nvoid glProgramUniformMatrix3dv(unsigned int program, int location, int count, unsigned char transpose, const double * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	int location=(int)lua_tointeger(L,2);
	int count=(int)lua_tointeger(L,3);
	unsigned char transpose = (unsigned char)(lua_tointeger(L,4));
	const double* value=(const double*)Luna< void >::check(L,5);

	::glProgramUniformMatrix3dv(program, location, count, transpose, value);

	return 0;
}

// void glProgramUniformMatrix4dv(unsigned int program, int location, int count, unsigned char transpose, const double * value)
static int _bind_glProgramUniformMatrix4dv(lua_State *L) {
	if (!_lg_typecheck_glProgramUniformMatrix4dv(L)) {
		luaL_error(L, "luna typecheck failed in void glProgramUniformMatrix4dv(unsigned int program, int location, int count, unsigned char transpose, const double * value) function, expected prototype:\nvoid glProgramUniformMatrix4dv(unsigned int program, int location, int count, unsigned char transpose, const double * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	int location=(int)lua_tointeger(L,2);
	int count=(int)lua_tointeger(L,3);
	unsigned char transpose = (unsigned char)(lua_tointeger(L,4));
	const double* value=(const double*)Luna< void >::check(L,5);

	::glProgramUniformMatrix4dv(program, location, count, transpose, value);

	return 0;
}

// void glProgramUniformMatrix2x3fv(unsigned int program, int location, int count, unsigned char transpose, const float * value)
static int _bind_glProgramUniformMatrix2x3fv(lua_State *L) {
	if (!_lg_typecheck_glProgramUniformMatrix2x3fv(L)) {
		luaL_error(L, "luna typecheck failed in void glProgramUniformMatrix2x3fv(unsigned int program, int location, int count, unsigned char transpose, const float * value) function, expected prototype:\nvoid glProgramUniformMatrix2x3fv(unsigned int program, int location, int count, unsigned char transpose, const float * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	int location=(int)lua_tointeger(L,2);
	int count=(int)lua_tointeger(L,3);
	unsigned char transpose = (unsigned char)(lua_tointeger(L,4));
	const float* value=(const float*)Luna< void >::check(L,5);

	::glProgramUniformMatrix2x3fv(program, location, count, transpose, value);

	return 0;
}

// void glProgramUniformMatrix3x2fv(unsigned int program, int location, int count, unsigned char transpose, const float * value)
static int _bind_glProgramUniformMatrix3x2fv(lua_State *L) {
	if (!_lg_typecheck_glProgramUniformMatrix3x2fv(L)) {
		luaL_error(L, "luna typecheck failed in void glProgramUniformMatrix3x2fv(unsigned int program, int location, int count, unsigned char transpose, const float * value) function, expected prototype:\nvoid glProgramUniformMatrix3x2fv(unsigned int program, int location, int count, unsigned char transpose, const float * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	int location=(int)lua_tointeger(L,2);
	int count=(int)lua_tointeger(L,3);
	unsigned char transpose = (unsigned char)(lua_tointeger(L,4));
	const float* value=(const float*)Luna< void >::check(L,5);

	::glProgramUniformMatrix3x2fv(program, location, count, transpose, value);

	return 0;
}

// void glProgramUniformMatrix2x4fv(unsigned int program, int location, int count, unsigned char transpose, const float * value)
static int _bind_glProgramUniformMatrix2x4fv(lua_State *L) {
	if (!_lg_typecheck_glProgramUniformMatrix2x4fv(L)) {
		luaL_error(L, "luna typecheck failed in void glProgramUniformMatrix2x4fv(unsigned int program, int location, int count, unsigned char transpose, const float * value) function, expected prototype:\nvoid glProgramUniformMatrix2x4fv(unsigned int program, int location, int count, unsigned char transpose, const float * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	int location=(int)lua_tointeger(L,2);
	int count=(int)lua_tointeger(L,3);
	unsigned char transpose = (unsigned char)(lua_tointeger(L,4));
	const float* value=(const float*)Luna< void >::check(L,5);

	::glProgramUniformMatrix2x4fv(program, location, count, transpose, value);

	return 0;
}

// void glProgramUniformMatrix4x2fv(unsigned int program, int location, int count, unsigned char transpose, const float * value)
static int _bind_glProgramUniformMatrix4x2fv(lua_State *L) {
	if (!_lg_typecheck_glProgramUniformMatrix4x2fv(L)) {
		luaL_error(L, "luna typecheck failed in void glProgramUniformMatrix4x2fv(unsigned int program, int location, int count, unsigned char transpose, const float * value) function, expected prototype:\nvoid glProgramUniformMatrix4x2fv(unsigned int program, int location, int count, unsigned char transpose, const float * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	int location=(int)lua_tointeger(L,2);
	int count=(int)lua_tointeger(L,3);
	unsigned char transpose = (unsigned char)(lua_tointeger(L,4));
	const float* value=(const float*)Luna< void >::check(L,5);

	::glProgramUniformMatrix4x2fv(program, location, count, transpose, value);

	return 0;
}

// void glProgramUniformMatrix3x4fv(unsigned int program, int location, int count, unsigned char transpose, const float * value)
static int _bind_glProgramUniformMatrix3x4fv(lua_State *L) {
	if (!_lg_typecheck_glProgramUniformMatrix3x4fv(L)) {
		luaL_error(L, "luna typecheck failed in void glProgramUniformMatrix3x4fv(unsigned int program, int location, int count, unsigned char transpose, const float * value) function, expected prototype:\nvoid glProgramUniformMatrix3x4fv(unsigned int program, int location, int count, unsigned char transpose, const float * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	int location=(int)lua_tointeger(L,2);
	int count=(int)lua_tointeger(L,3);
	unsigned char transpose = (unsigned char)(lua_tointeger(L,4));
	const float* value=(const float*)Luna< void >::check(L,5);

	::glProgramUniformMatrix3x4fv(program, location, count, transpose, value);

	return 0;
}

// void glProgramUniformMatrix4x3fv(unsigned int program, int location, int count, unsigned char transpose, const float * value)
static int _bind_glProgramUniformMatrix4x3fv(lua_State *L) {
	if (!_lg_typecheck_glProgramUniformMatrix4x3fv(L)) {
		luaL_error(L, "luna typecheck failed in void glProgramUniformMatrix4x3fv(unsigned int program, int location, int count, unsigned char transpose, const float * value) function, expected prototype:\nvoid glProgramUniformMatrix4x3fv(unsigned int program, int location, int count, unsigned char transpose, const float * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	int location=(int)lua_tointeger(L,2);
	int count=(int)lua_tointeger(L,3);
	unsigned char transpose = (unsigned char)(lua_tointeger(L,4));
	const float* value=(const float*)Luna< void >::check(L,5);

	::glProgramUniformMatrix4x3fv(program, location, count, transpose, value);

	return 0;
}

// void glProgramUniformMatrix2x3dv(unsigned int program, int location, int count, unsigned char transpose, const double * value)
static int _bind_glProgramUniformMatrix2x3dv(lua_State *L) {
	if (!_lg_typecheck_glProgramUniformMatrix2x3dv(L)) {
		luaL_error(L, "luna typecheck failed in void glProgramUniformMatrix2x3dv(unsigned int program, int location, int count, unsigned char transpose, const double * value) function, expected prototype:\nvoid glProgramUniformMatrix2x3dv(unsigned int program, int location, int count, unsigned char transpose, const double * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	int location=(int)lua_tointeger(L,2);
	int count=(int)lua_tointeger(L,3);
	unsigned char transpose = (unsigned char)(lua_tointeger(L,4));
	const double* value=(const double*)Luna< void >::check(L,5);

	::glProgramUniformMatrix2x3dv(program, location, count, transpose, value);

	return 0;
}

// void glProgramUniformMatrix3x2dv(unsigned int program, int location, int count, unsigned char transpose, const double * value)
static int _bind_glProgramUniformMatrix3x2dv(lua_State *L) {
	if (!_lg_typecheck_glProgramUniformMatrix3x2dv(L)) {
		luaL_error(L, "luna typecheck failed in void glProgramUniformMatrix3x2dv(unsigned int program, int location, int count, unsigned char transpose, const double * value) function, expected prototype:\nvoid glProgramUniformMatrix3x2dv(unsigned int program, int location, int count, unsigned char transpose, const double * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	int location=(int)lua_tointeger(L,2);
	int count=(int)lua_tointeger(L,3);
	unsigned char transpose = (unsigned char)(lua_tointeger(L,4));
	const double* value=(const double*)Luna< void >::check(L,5);

	::glProgramUniformMatrix3x2dv(program, location, count, transpose, value);

	return 0;
}

// void glProgramUniformMatrix2x4dv(unsigned int program, int location, int count, unsigned char transpose, const double * value)
static int _bind_glProgramUniformMatrix2x4dv(lua_State *L) {
	if (!_lg_typecheck_glProgramUniformMatrix2x4dv(L)) {
		luaL_error(L, "luna typecheck failed in void glProgramUniformMatrix2x4dv(unsigned int program, int location, int count, unsigned char transpose, const double * value) function, expected prototype:\nvoid glProgramUniformMatrix2x4dv(unsigned int program, int location, int count, unsigned char transpose, const double * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	int location=(int)lua_tointeger(L,2);
	int count=(int)lua_tointeger(L,3);
	unsigned char transpose = (unsigned char)(lua_tointeger(L,4));
	const double* value=(const double*)Luna< void >::check(L,5);

	::glProgramUniformMatrix2x4dv(program, location, count, transpose, value);

	return 0;
}

// void glProgramUniformMatrix4x2dv(unsigned int program, int location, int count, unsigned char transpose, const double * value)
static int _bind_glProgramUniformMatrix4x2dv(lua_State *L) {
	if (!_lg_typecheck_glProgramUniformMatrix4x2dv(L)) {
		luaL_error(L, "luna typecheck failed in void glProgramUniformMatrix4x2dv(unsigned int program, int location, int count, unsigned char transpose, const double * value) function, expected prototype:\nvoid glProgramUniformMatrix4x2dv(unsigned int program, int location, int count, unsigned char transpose, const double * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	int location=(int)lua_tointeger(L,2);
	int count=(int)lua_tointeger(L,3);
	unsigned char transpose = (unsigned char)(lua_tointeger(L,4));
	const double* value=(const double*)Luna< void >::check(L,5);

	::glProgramUniformMatrix4x2dv(program, location, count, transpose, value);

	return 0;
}

// void glProgramUniformMatrix3x4dv(unsigned int program, int location, int count, unsigned char transpose, const double * value)
static int _bind_glProgramUniformMatrix3x4dv(lua_State *L) {
	if (!_lg_typecheck_glProgramUniformMatrix3x4dv(L)) {
		luaL_error(L, "luna typecheck failed in void glProgramUniformMatrix3x4dv(unsigned int program, int location, int count, unsigned char transpose, const double * value) function, expected prototype:\nvoid glProgramUniformMatrix3x4dv(unsigned int program, int location, int count, unsigned char transpose, const double * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	int location=(int)lua_tointeger(L,2);
	int count=(int)lua_tointeger(L,3);
	unsigned char transpose = (unsigned char)(lua_tointeger(L,4));
	const double* value=(const double*)Luna< void >::check(L,5);

	::glProgramUniformMatrix3x4dv(program, location, count, transpose, value);

	return 0;
}

// void glProgramUniformMatrix4x3dv(unsigned int program, int location, int count, unsigned char transpose, const double * value)
static int _bind_glProgramUniformMatrix4x3dv(lua_State *L) {
	if (!_lg_typecheck_glProgramUniformMatrix4x3dv(L)) {
		luaL_error(L, "luna typecheck failed in void glProgramUniformMatrix4x3dv(unsigned int program, int location, int count, unsigned char transpose, const double * value) function, expected prototype:\nvoid glProgramUniformMatrix4x3dv(unsigned int program, int location, int count, unsigned char transpose, const double * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	int location=(int)lua_tointeger(L,2);
	int count=(int)lua_tointeger(L,3);
	unsigned char transpose = (unsigned char)(lua_tointeger(L,4));
	const double* value=(const double*)Luna< void >::check(L,5);

	::glProgramUniformMatrix4x3dv(program, location, count, transpose, value);

	return 0;
}

// void glValidateProgramPipeline(unsigned int pipeline)
static int _bind_glValidateProgramPipeline(lua_State *L) {
	if (!_lg_typecheck_glValidateProgramPipeline(L)) {
		luaL_error(L, "luna typecheck failed in void glValidateProgramPipeline(unsigned int pipeline) function, expected prototype:\nvoid glValidateProgramPipeline(unsigned int pipeline)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int pipeline=(unsigned int)lua_tointeger(L,1);

	::glValidateProgramPipeline(pipeline);

	return 0;
}

// void glGetProgramPipelineInfoLog(unsigned int pipeline, int bufSize, int * length, char * infoLog)
static int _bind_glGetProgramPipelineInfoLog(lua_State *L) {
	if (!_lg_typecheck_glGetProgramPipelineInfoLog(L)) {
		luaL_error(L, "luna typecheck failed in void glGetProgramPipelineInfoLog(unsigned int pipeline, int bufSize, int * length, char * infoLog) function, expected prototype:\nvoid glGetProgramPipelineInfoLog(unsigned int pipeline, int bufSize, int * length, char * infoLog)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int pipeline=(unsigned int)lua_tointeger(L,1);
	int bufSize=(int)lua_tointeger(L,2);
	int* length=(int*)Luna< void >::check(L,3);
	char* infoLog=(char*)Luna< void >::check(L,4);

	::glGetProgramPipelineInfoLog(pipeline, bufSize, length, infoLog);

	return 0;
}

// void glVertexAttribL1d(unsigned int index, double x)
static int _bind_glVertexAttribL1d(lua_State *L) {
	if (!_lg_typecheck_glVertexAttribL1d(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexAttribL1d(unsigned int index, double x) function, expected prototype:\nvoid glVertexAttribL1d(unsigned int index, double x)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	double x=(double)lua_tonumber(L,2);

	::glVertexAttribL1d(index, x);

	return 0;
}

// void glVertexAttribL2d(unsigned int index, double x, double y)
static int _bind_glVertexAttribL2d(lua_State *L) {
	if (!_lg_typecheck_glVertexAttribL2d(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexAttribL2d(unsigned int index, double x, double y) function, expected prototype:\nvoid glVertexAttribL2d(unsigned int index, double x, double y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	double x=(double)lua_tonumber(L,2);
	double y=(double)lua_tonumber(L,3);

	::glVertexAttribL2d(index, x, y);

	return 0;
}

// void glVertexAttribL3d(unsigned int index, double x, double y, double z)
static int _bind_glVertexAttribL3d(lua_State *L) {
	if (!_lg_typecheck_glVertexAttribL3d(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexAttribL3d(unsigned int index, double x, double y, double z) function, expected prototype:\nvoid glVertexAttribL3d(unsigned int index, double x, double y, double z)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	double x=(double)lua_tonumber(L,2);
	double y=(double)lua_tonumber(L,3);
	double z=(double)lua_tonumber(L,4);

	::glVertexAttribL3d(index, x, y, z);

	return 0;
}

// void glVertexAttribL4d(unsigned int index, double x, double y, double z, double w)
static int _bind_glVertexAttribL4d(lua_State *L) {
	if (!_lg_typecheck_glVertexAttribL4d(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexAttribL4d(unsigned int index, double x, double y, double z, double w) function, expected prototype:\nvoid glVertexAttribL4d(unsigned int index, double x, double y, double z, double w)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	double x=(double)lua_tonumber(L,2);
	double y=(double)lua_tonumber(L,3);
	double z=(double)lua_tonumber(L,4);
	double w=(double)lua_tonumber(L,5);

	::glVertexAttribL4d(index, x, y, z, w);

	return 0;
}

// void glVertexAttribL1dv(unsigned int index, const double * v)
static int _bind_glVertexAttribL1dv(lua_State *L) {
	if (!_lg_typecheck_glVertexAttribL1dv(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexAttribL1dv(unsigned int index, const double * v) function, expected prototype:\nvoid glVertexAttribL1dv(unsigned int index, const double * v)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	const double* v=(const double*)Luna< void >::check(L,2);

	::glVertexAttribL1dv(index, v);

	return 0;
}

// void glVertexAttribL2dv(unsigned int index, const double * v)
static int _bind_glVertexAttribL2dv(lua_State *L) {
	if (!_lg_typecheck_glVertexAttribL2dv(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexAttribL2dv(unsigned int index, const double * v) function, expected prototype:\nvoid glVertexAttribL2dv(unsigned int index, const double * v)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	const double* v=(const double*)Luna< void >::check(L,2);

	::glVertexAttribL2dv(index, v);

	return 0;
}

// void glVertexAttribL3dv(unsigned int index, const double * v)
static int _bind_glVertexAttribL3dv(lua_State *L) {
	if (!_lg_typecheck_glVertexAttribL3dv(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexAttribL3dv(unsigned int index, const double * v) function, expected prototype:\nvoid glVertexAttribL3dv(unsigned int index, const double * v)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	const double* v=(const double*)Luna< void >::check(L,2);

	::glVertexAttribL3dv(index, v);

	return 0;
}

// void glVertexAttribL4dv(unsigned int index, const double * v)
static int _bind_glVertexAttribL4dv(lua_State *L) {
	if (!_lg_typecheck_glVertexAttribL4dv(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexAttribL4dv(unsigned int index, const double * v) function, expected prototype:\nvoid glVertexAttribL4dv(unsigned int index, const double * v)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	const double* v=(const double*)Luna< void >::check(L,2);

	::glVertexAttribL4dv(index, v);

	return 0;
}

// void glVertexAttribLPointer(unsigned int index, int size, unsigned int type, int stride, const void * pointer)
static int _bind_glVertexAttribLPointer(lua_State *L) {
	if (!_lg_typecheck_glVertexAttribLPointer(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexAttribLPointer(unsigned int index, int size, unsigned int type, int stride, const void * pointer) function, expected prototype:\nvoid glVertexAttribLPointer(unsigned int index, int size, unsigned int type, int stride, const void * pointer)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	int size=(int)lua_tointeger(L,2);
	unsigned int type=(unsigned int)lua_tointeger(L,3);
	int stride=(int)lua_tointeger(L,4);
	const void* pointer=(Luna< void >::check(L,5));

	::glVertexAttribLPointer(index, size, type, stride, pointer);

	return 0;
}

// void glGetVertexAttribLdv(unsigned int index, unsigned int pname, double * params)
static int _bind_glGetVertexAttribLdv(lua_State *L) {
	if (!_lg_typecheck_glGetVertexAttribLdv(L)) {
		luaL_error(L, "luna typecheck failed in void glGetVertexAttribLdv(unsigned int index, unsigned int pname, double * params) function, expected prototype:\nvoid glGetVertexAttribLdv(unsigned int index, unsigned int pname, double * params)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	unsigned int pname=(unsigned int)lua_tointeger(L,2);
	double* params=(double*)Luna< void >::check(L,3);

	::glGetVertexAttribLdv(index, pname, params);

	return 0;
}

// void glViewportArrayv(unsigned int first, int count, const float * v)
static int _bind_glViewportArrayv(lua_State *L) {
	if (!_lg_typecheck_glViewportArrayv(L)) {
		luaL_error(L, "luna typecheck failed in void glViewportArrayv(unsigned int first, int count, const float * v) function, expected prototype:\nvoid glViewportArrayv(unsigned int first, int count, const float * v)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int first=(unsigned int)lua_tointeger(L,1);
	int count=(int)lua_tointeger(L,2);
	const float* v=(const float*)Luna< void >::check(L,3);

	::glViewportArrayv(first, count, v);

	return 0;
}

// void glViewportIndexedf(unsigned int index, float x, float y, float w, float h)
static int _bind_glViewportIndexedf(lua_State *L) {
	if (!_lg_typecheck_glViewportIndexedf(L)) {
		luaL_error(L, "luna typecheck failed in void glViewportIndexedf(unsigned int index, float x, float y, float w, float h) function, expected prototype:\nvoid glViewportIndexedf(unsigned int index, float x, float y, float w, float h)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	float x=(float)lua_tonumber(L,2);
	float y=(float)lua_tonumber(L,3);
	float w=(float)lua_tonumber(L,4);
	float h=(float)lua_tonumber(L,5);

	::glViewportIndexedf(index, x, y, w, h);

	return 0;
}

// void glViewportIndexedfv(unsigned int index, const float * v)
static int _bind_glViewportIndexedfv(lua_State *L) {
	if (!_lg_typecheck_glViewportIndexedfv(L)) {
		luaL_error(L, "luna typecheck failed in void glViewportIndexedfv(unsigned int index, const float * v) function, expected prototype:\nvoid glViewportIndexedfv(unsigned int index, const float * v)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	const float* v=(const float*)Luna< void >::check(L,2);

	::glViewportIndexedfv(index, v);

	return 0;
}

// void glScissorArrayv(unsigned int first, int count, const int * v)
static int _bind_glScissorArrayv(lua_State *L) {
	if (!_lg_typecheck_glScissorArrayv(L)) {
		luaL_error(L, "luna typecheck failed in void glScissorArrayv(unsigned int first, int count, const int * v) function, expected prototype:\nvoid glScissorArrayv(unsigned int first, int count, const int * v)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int first=(unsigned int)lua_tointeger(L,1);
	int count=(int)lua_tointeger(L,2);
	const int* v=(const int*)Luna< void >::check(L,3);

	::glScissorArrayv(first, count, v);

	return 0;
}

// void glScissorIndexed(unsigned int index, int left, int bottom, int width, int height)
static int _bind_glScissorIndexed(lua_State *L) {
	if (!_lg_typecheck_glScissorIndexed(L)) {
		luaL_error(L, "luna typecheck failed in void glScissorIndexed(unsigned int index, int left, int bottom, int width, int height) function, expected prototype:\nvoid glScissorIndexed(unsigned int index, int left, int bottom, int width, int height)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	int left=(int)lua_tointeger(L,2);
	int bottom=(int)lua_tointeger(L,3);
	int width=(int)lua_tointeger(L,4);
	int height=(int)lua_tointeger(L,5);

	::glScissorIndexed(index, left, bottom, width, height);

	return 0;
}

// void glScissorIndexedv(unsigned int index, const int * v)
static int _bind_glScissorIndexedv(lua_State *L) {
	if (!_lg_typecheck_glScissorIndexedv(L)) {
		luaL_error(L, "luna typecheck failed in void glScissorIndexedv(unsigned int index, const int * v) function, expected prototype:\nvoid glScissorIndexedv(unsigned int index, const int * v)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	const int* v=(const int*)Luna< void >::check(L,2);

	::glScissorIndexedv(index, v);

	return 0;
}

// void glDepthRangeArrayv(unsigned int first, int count, const double * v)
static int _bind_glDepthRangeArrayv(lua_State *L) {
	if (!_lg_typecheck_glDepthRangeArrayv(L)) {
		luaL_error(L, "luna typecheck failed in void glDepthRangeArrayv(unsigned int first, int count, const double * v) function, expected prototype:\nvoid glDepthRangeArrayv(unsigned int first, int count, const double * v)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int first=(unsigned int)lua_tointeger(L,1);
	int count=(int)lua_tointeger(L,2);
	const double* v=(const double*)Luna< void >::check(L,3);

	::glDepthRangeArrayv(first, count, v);

	return 0;
}

// void glDepthRangeIndexed(unsigned int index, double n, double f)
static int _bind_glDepthRangeIndexed(lua_State *L) {
	if (!_lg_typecheck_glDepthRangeIndexed(L)) {
		luaL_error(L, "luna typecheck failed in void glDepthRangeIndexed(unsigned int index, double n, double f) function, expected prototype:\nvoid glDepthRangeIndexed(unsigned int index, double n, double f)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int index=(unsigned int)lua_tointeger(L,1);
	double n=(double)lua_tonumber(L,2);
	double f=(double)lua_tonumber(L,3);

	::glDepthRangeIndexed(index, n, f);

	return 0;
}

// void glGetFloati_v(unsigned int target, unsigned int index, float * data)
static int _bind_glGetFloati_v(lua_State *L) {
	if (!_lg_typecheck_glGetFloati_v(L)) {
		luaL_error(L, "luna typecheck failed in void glGetFloati_v(unsigned int target, unsigned int index, float * data) function, expected prototype:\nvoid glGetFloati_v(unsigned int target, unsigned int index, float * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	unsigned int index=(unsigned int)lua_tointeger(L,2);
	float* data=(float*)Luna< void >::check(L,3);

	::glGetFloati_v(target, index, data);

	return 0;
}

// void glGetDoublei_v(unsigned int target, unsigned int index, double * data)
static int _bind_glGetDoublei_v(lua_State *L) {
	if (!_lg_typecheck_glGetDoublei_v(L)) {
		luaL_error(L, "luna typecheck failed in void glGetDoublei_v(unsigned int target, unsigned int index, double * data) function, expected prototype:\nvoid glGetDoublei_v(unsigned int target, unsigned int index, double * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	unsigned int index=(unsigned int)lua_tointeger(L,2);
	double* data=(double*)Luna< void >::check(L,3);

	::glGetDoublei_v(target, index, data);

	return 0;
}

// void glDebugMessageControlARB(unsigned int source, unsigned int type, unsigned int severity, int count, const unsigned int * ids, unsigned char enabled)
static int _bind_glDebugMessageControlARB(lua_State *L) {
	if (!_lg_typecheck_glDebugMessageControlARB(L)) {
		luaL_error(L, "luna typecheck failed in void glDebugMessageControlARB(unsigned int source, unsigned int type, unsigned int severity, int count, const unsigned int * ids, unsigned char enabled) function, expected prototype:\nvoid glDebugMessageControlARB(unsigned int source, unsigned int type, unsigned int severity, int count, const unsigned int * ids, unsigned char enabled)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int source=(unsigned int)lua_tointeger(L,1);
	unsigned int type=(unsigned int)lua_tointeger(L,2);
	unsigned int severity=(unsigned int)lua_tointeger(L,3);
	int count=(int)lua_tointeger(L,4);
	const unsigned int* ids=(const unsigned int*)Luna< void >::check(L,5);
	unsigned char enabled = (unsigned char)(lua_tointeger(L,6));

	::glDebugMessageControlARB(source, type, severity, count, ids, enabled);

	return 0;
}

// void glDebugMessageInsertARB(unsigned int source, unsigned int type, unsigned int id, unsigned int severity, int length, const char * buf)
static int _bind_glDebugMessageInsertARB(lua_State *L) {
	if (!_lg_typecheck_glDebugMessageInsertARB(L)) {
		luaL_error(L, "luna typecheck failed in void glDebugMessageInsertARB(unsigned int source, unsigned int type, unsigned int id, unsigned int severity, int length, const char * buf) function, expected prototype:\nvoid glDebugMessageInsertARB(unsigned int source, unsigned int type, unsigned int id, unsigned int severity, int length, const char * buf)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int source=(unsigned int)lua_tointeger(L,1);
	unsigned int type=(unsigned int)lua_tointeger(L,2);
	unsigned int id=(unsigned int)lua_tointeger(L,3);
	unsigned int severity=(unsigned int)lua_tointeger(L,4);
	int length=(int)lua_tointeger(L,5);
	const char * buf=(const char *)lua_tostring(L,6);

	::glDebugMessageInsertARB(source, type, id, severity, length, buf);

	return 0;
}

// unsigned int glGetDebugMessageLogARB(unsigned int count, int bufsize, unsigned int * sources, unsigned int * types, unsigned int * ids, unsigned int * severities, int * lengths, char * messageLog)
static int _bind_glGetDebugMessageLogARB(lua_State *L) {
	if (!_lg_typecheck_glGetDebugMessageLogARB(L)) {
		luaL_error(L, "luna typecheck failed in unsigned int glGetDebugMessageLogARB(unsigned int count, int bufsize, unsigned int * sources, unsigned int * types, unsigned int * ids, unsigned int * severities, int * lengths, char * messageLog) function, expected prototype:\nunsigned int glGetDebugMessageLogARB(unsigned int count, int bufsize, unsigned int * sources, unsigned int * types, unsigned int * ids, unsigned int * severities, int * lengths, char * messageLog)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int count=(unsigned int)lua_tointeger(L,1);
	int bufsize=(int)lua_tointeger(L,2);
	unsigned int* sources=(unsigned int*)Luna< void >::check(L,3);
	unsigned int* types=(unsigned int*)Luna< void >::check(L,4);
	unsigned int* ids=(unsigned int*)Luna< void >::check(L,5);
	unsigned int* severities=(unsigned int*)Luna< void >::check(L,6);
	int* lengths=(int*)Luna< void >::check(L,7);
	char* messageLog=(char*)Luna< void >::check(L,8);

	unsigned int lret = ::glGetDebugMessageLogARB(count, bufsize, sources, types, ids, severities, lengths, messageLog);
	lua_pushnumber(L,lret);

	return 1;
}

// unsigned int glGetGraphicsResetStatusARB()
static int _bind_glGetGraphicsResetStatusARB(lua_State *L) {
	if (!_lg_typecheck_glGetGraphicsResetStatusARB(L)) {
		luaL_error(L, "luna typecheck failed in unsigned int glGetGraphicsResetStatusARB() function, expected prototype:\nunsigned int glGetGraphicsResetStatusARB()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	unsigned int lret = ::glGetGraphicsResetStatusARB();
	lua_pushnumber(L,lret);

	return 1;
}

// void glGetnTexImageARB(unsigned int target, int level, unsigned int format, unsigned int type, int bufSize, void * img)
static int _bind_glGetnTexImageARB(lua_State *L) {
	if (!_lg_typecheck_glGetnTexImageARB(L)) {
		luaL_error(L, "luna typecheck failed in void glGetnTexImageARB(unsigned int target, int level, unsigned int format, unsigned int type, int bufSize, void * img) function, expected prototype:\nvoid glGetnTexImageARB(unsigned int target, int level, unsigned int format, unsigned int type, int bufSize, void * img)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	int level=(int)lua_tointeger(L,2);
	unsigned int format=(unsigned int)lua_tointeger(L,3);
	unsigned int type=(unsigned int)lua_tointeger(L,4);
	int bufSize=(int)lua_tointeger(L,5);
	void* img=(Luna< void >::check(L,6));

	::glGetnTexImageARB(target, level, format, type, bufSize, img);

	return 0;
}

// void glReadnPixelsARB(int x, int y, int width, int height, unsigned int format, unsigned int type, int bufSize, void * data)
static int _bind_glReadnPixelsARB(lua_State *L) {
	if (!_lg_typecheck_glReadnPixelsARB(L)) {
		luaL_error(L, "luna typecheck failed in void glReadnPixelsARB(int x, int y, int width, int height, unsigned int format, unsigned int type, int bufSize, void * data) function, expected prototype:\nvoid glReadnPixelsARB(int x, int y, int width, int height, unsigned int format, unsigned int type, int bufSize, void * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int x=(int)lua_tointeger(L,1);
	int y=(int)lua_tointeger(L,2);
	int width=(int)lua_tointeger(L,3);
	int height=(int)lua_tointeger(L,4);
	unsigned int format=(unsigned int)lua_tointeger(L,5);
	unsigned int type=(unsigned int)lua_tointeger(L,6);
	int bufSize=(int)lua_tointeger(L,7);
	void* data=(Luna< void >::check(L,8));

	::glReadnPixelsARB(x, y, width, height, format, type, bufSize, data);

	return 0;
}

// void glGetnCompressedTexImageARB(unsigned int target, int lod, int bufSize, void * img)
static int _bind_glGetnCompressedTexImageARB(lua_State *L) {
	if (!_lg_typecheck_glGetnCompressedTexImageARB(L)) {
		luaL_error(L, "luna typecheck failed in void glGetnCompressedTexImageARB(unsigned int target, int lod, int bufSize, void * img) function, expected prototype:\nvoid glGetnCompressedTexImageARB(unsigned int target, int lod, int bufSize, void * img)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	int lod=(int)lua_tointeger(L,2);
	int bufSize=(int)lua_tointeger(L,3);
	void* img=(Luna< void >::check(L,4));

	::glGetnCompressedTexImageARB(target, lod, bufSize, img);

	return 0;
}

// void glGetnUniformfvARB(unsigned int program, int location, int bufSize, float * params)
static int _bind_glGetnUniformfvARB(lua_State *L) {
	if (!_lg_typecheck_glGetnUniformfvARB(L)) {
		luaL_error(L, "luna typecheck failed in void glGetnUniformfvARB(unsigned int program, int location, int bufSize, float * params) function, expected prototype:\nvoid glGetnUniformfvARB(unsigned int program, int location, int bufSize, float * params)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	int location=(int)lua_tointeger(L,2);
	int bufSize=(int)lua_tointeger(L,3);
	float* params=(float*)Luna< void >::check(L,4);

	::glGetnUniformfvARB(program, location, bufSize, params);

	return 0;
}

// void glGetnUniformivARB(unsigned int program, int location, int bufSize, int * params)
static int _bind_glGetnUniformivARB(lua_State *L) {
	if (!_lg_typecheck_glGetnUniformivARB(L)) {
		luaL_error(L, "luna typecheck failed in void glGetnUniformivARB(unsigned int program, int location, int bufSize, int * params) function, expected prototype:\nvoid glGetnUniformivARB(unsigned int program, int location, int bufSize, int * params)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	int location=(int)lua_tointeger(L,2);
	int bufSize=(int)lua_tointeger(L,3);
	int* params=(int*)Luna< void >::check(L,4);

	::glGetnUniformivARB(program, location, bufSize, params);

	return 0;
}

// void glGetnUniformuivARB(unsigned int program, int location, int bufSize, unsigned int * params)
static int _bind_glGetnUniformuivARB(lua_State *L) {
	if (!_lg_typecheck_glGetnUniformuivARB(L)) {
		luaL_error(L, "luna typecheck failed in void glGetnUniformuivARB(unsigned int program, int location, int bufSize, unsigned int * params) function, expected prototype:\nvoid glGetnUniformuivARB(unsigned int program, int location, int bufSize, unsigned int * params)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	int location=(int)lua_tointeger(L,2);
	int bufSize=(int)lua_tointeger(L,3);
	unsigned int* params=(unsigned int*)Luna< void >::check(L,4);

	::glGetnUniformuivARB(program, location, bufSize, params);

	return 0;
}

// void glGetnUniformdvARB(unsigned int program, int location, int bufSize, double * params)
static int _bind_glGetnUniformdvARB(lua_State *L) {
	if (!_lg_typecheck_glGetnUniformdvARB(L)) {
		luaL_error(L, "luna typecheck failed in void glGetnUniformdvARB(unsigned int program, int location, int bufSize, double * params) function, expected prototype:\nvoid glGetnUniformdvARB(unsigned int program, int location, int bufSize, double * params)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	int location=(int)lua_tointeger(L,2);
	int bufSize=(int)lua_tointeger(L,3);
	double* params=(double*)Luna< void >::check(L,4);

	::glGetnUniformdvARB(program, location, bufSize, params);

	return 0;
}

// void glDrawArraysInstancedBaseInstance(unsigned int mode, int first, int count, int instancecount, unsigned int baseinstance)
static int _bind_glDrawArraysInstancedBaseInstance(lua_State *L) {
	if (!_lg_typecheck_glDrawArraysInstancedBaseInstance(L)) {
		luaL_error(L, "luna typecheck failed in void glDrawArraysInstancedBaseInstance(unsigned int mode, int first, int count, int instancecount, unsigned int baseinstance) function, expected prototype:\nvoid glDrawArraysInstancedBaseInstance(unsigned int mode, int first, int count, int instancecount, unsigned int baseinstance)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int mode=(unsigned int)lua_tointeger(L,1);
	int first=(int)lua_tointeger(L,2);
	int count=(int)lua_tointeger(L,3);
	int instancecount=(int)lua_tointeger(L,4);
	unsigned int baseinstance=(unsigned int)lua_tointeger(L,5);

	::glDrawArraysInstancedBaseInstance(mode, first, count, instancecount, baseinstance);

	return 0;
}

// void glDrawElementsInstancedBaseInstance(unsigned int mode, int count, unsigned int type, const void * indices, int instancecount, unsigned int baseinstance)
static int _bind_glDrawElementsInstancedBaseInstance(lua_State *L) {
	if (!_lg_typecheck_glDrawElementsInstancedBaseInstance(L)) {
		luaL_error(L, "luna typecheck failed in void glDrawElementsInstancedBaseInstance(unsigned int mode, int count, unsigned int type, const void * indices, int instancecount, unsigned int baseinstance) function, expected prototype:\nvoid glDrawElementsInstancedBaseInstance(unsigned int mode, int count, unsigned int type, const void * indices, int instancecount, unsigned int baseinstance)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int mode=(unsigned int)lua_tointeger(L,1);
	int count=(int)lua_tointeger(L,2);
	unsigned int type=(unsigned int)lua_tointeger(L,3);
	const void* indices=(Luna< void >::check(L,4));
	int instancecount=(int)lua_tointeger(L,5);
	unsigned int baseinstance=(unsigned int)lua_tointeger(L,6);

	::glDrawElementsInstancedBaseInstance(mode, count, type, indices, instancecount, baseinstance);

	return 0;
}

// void glDrawElementsInstancedBaseVertexBaseInstance(unsigned int mode, int count, unsigned int type, const void * indices, int instancecount, int basevertex, unsigned int baseinstance)
static int _bind_glDrawElementsInstancedBaseVertexBaseInstance(lua_State *L) {
	if (!_lg_typecheck_glDrawElementsInstancedBaseVertexBaseInstance(L)) {
		luaL_error(L, "luna typecheck failed in void glDrawElementsInstancedBaseVertexBaseInstance(unsigned int mode, int count, unsigned int type, const void * indices, int instancecount, int basevertex, unsigned int baseinstance) function, expected prototype:\nvoid glDrawElementsInstancedBaseVertexBaseInstance(unsigned int mode, int count, unsigned int type, const void * indices, int instancecount, int basevertex, unsigned int baseinstance)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int mode=(unsigned int)lua_tointeger(L,1);
	int count=(int)lua_tointeger(L,2);
	unsigned int type=(unsigned int)lua_tointeger(L,3);
	const void* indices=(Luna< void >::check(L,4));
	int instancecount=(int)lua_tointeger(L,5);
	int basevertex=(int)lua_tointeger(L,6);
	unsigned int baseinstance=(unsigned int)lua_tointeger(L,7);

	::glDrawElementsInstancedBaseVertexBaseInstance(mode, count, type, indices, instancecount, basevertex, baseinstance);

	return 0;
}

// void glDrawTransformFeedbackInstanced(unsigned int mode, unsigned int id, int instancecount)
static int _bind_glDrawTransformFeedbackInstanced(lua_State *L) {
	if (!_lg_typecheck_glDrawTransformFeedbackInstanced(L)) {
		luaL_error(L, "luna typecheck failed in void glDrawTransformFeedbackInstanced(unsigned int mode, unsigned int id, int instancecount) function, expected prototype:\nvoid glDrawTransformFeedbackInstanced(unsigned int mode, unsigned int id, int instancecount)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int mode=(unsigned int)lua_tointeger(L,1);
	unsigned int id=(unsigned int)lua_tointeger(L,2);
	int instancecount=(int)lua_tointeger(L,3);

	::glDrawTransformFeedbackInstanced(mode, id, instancecount);

	return 0;
}

// void glDrawTransformFeedbackStreamInstanced(unsigned int mode, unsigned int id, unsigned int stream, int instancecount)
static int _bind_glDrawTransformFeedbackStreamInstanced(lua_State *L) {
	if (!_lg_typecheck_glDrawTransformFeedbackStreamInstanced(L)) {
		luaL_error(L, "luna typecheck failed in void glDrawTransformFeedbackStreamInstanced(unsigned int mode, unsigned int id, unsigned int stream, int instancecount) function, expected prototype:\nvoid glDrawTransformFeedbackStreamInstanced(unsigned int mode, unsigned int id, unsigned int stream, int instancecount)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int mode=(unsigned int)lua_tointeger(L,1);
	unsigned int id=(unsigned int)lua_tointeger(L,2);
	unsigned int stream=(unsigned int)lua_tointeger(L,3);
	int instancecount=(int)lua_tointeger(L,4);

	::glDrawTransformFeedbackStreamInstanced(mode, id, stream, instancecount);

	return 0;
}

// void glGetInternalformativ(unsigned int target, unsigned int internalformat, unsigned int pname, int bufSize, int * params)
static int _bind_glGetInternalformativ(lua_State *L) {
	if (!_lg_typecheck_glGetInternalformativ(L)) {
		luaL_error(L, "luna typecheck failed in void glGetInternalformativ(unsigned int target, unsigned int internalformat, unsigned int pname, int bufSize, int * params) function, expected prototype:\nvoid glGetInternalformativ(unsigned int target, unsigned int internalformat, unsigned int pname, int bufSize, int * params)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	unsigned int internalformat=(unsigned int)lua_tointeger(L,2);
	unsigned int pname=(unsigned int)lua_tointeger(L,3);
	int bufSize=(int)lua_tointeger(L,4);
	int* params=(int*)Luna< void >::check(L,5);

	::glGetInternalformativ(target, internalformat, pname, bufSize, params);

	return 0;
}

// void glGetActiveAtomicCounterBufferiv(unsigned int program, unsigned int bufferIndex, unsigned int pname, int * params)
static int _bind_glGetActiveAtomicCounterBufferiv(lua_State *L) {
	if (!_lg_typecheck_glGetActiveAtomicCounterBufferiv(L)) {
		luaL_error(L, "luna typecheck failed in void glGetActiveAtomicCounterBufferiv(unsigned int program, unsigned int bufferIndex, unsigned int pname, int * params) function, expected prototype:\nvoid glGetActiveAtomicCounterBufferiv(unsigned int program, unsigned int bufferIndex, unsigned int pname, int * params)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	unsigned int bufferIndex=(unsigned int)lua_tointeger(L,2);
	unsigned int pname=(unsigned int)lua_tointeger(L,3);
	int* params=(int*)Luna< void >::check(L,4);

	::glGetActiveAtomicCounterBufferiv(program, bufferIndex, pname, params);

	return 0;
}

// void glBindImageTexture(unsigned int unit, unsigned int texture, int level, unsigned char layered, int layer, unsigned int access, unsigned int format)
static int _bind_glBindImageTexture(lua_State *L) {
	if (!_lg_typecheck_glBindImageTexture(L)) {
		luaL_error(L, "luna typecheck failed in void glBindImageTexture(unsigned int unit, unsigned int texture, int level, unsigned char layered, int layer, unsigned int access, unsigned int format) function, expected prototype:\nvoid glBindImageTexture(unsigned int unit, unsigned int texture, int level, unsigned char layered, int layer, unsigned int access, unsigned int format)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int unit=(unsigned int)lua_tointeger(L,1);
	unsigned int texture=(unsigned int)lua_tointeger(L,2);
	int level=(int)lua_tointeger(L,3);
	unsigned char layered = (unsigned char)(lua_tointeger(L,4));
	int layer=(int)lua_tointeger(L,5);
	unsigned int access=(unsigned int)lua_tointeger(L,6);
	unsigned int format=(unsigned int)lua_tointeger(L,7);

	::glBindImageTexture(unit, texture, level, layered, layer, access, format);

	return 0;
}

// void glMemoryBarrier(unsigned int barriers)
static int _bind_glMemoryBarrier(lua_State *L) {
	if (!_lg_typecheck_glMemoryBarrier(L)) {
		luaL_error(L, "luna typecheck failed in void glMemoryBarrier(unsigned int barriers) function, expected prototype:\nvoid glMemoryBarrier(unsigned int barriers)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int barriers=(unsigned int)lua_tointeger(L,1);

	::glMemoryBarrier(barriers);

	return 0;
}

// void glTexStorage1D(unsigned int target, int levels, unsigned int internalformat, int width)
static int _bind_glTexStorage1D(lua_State *L) {
	if (!_lg_typecheck_glTexStorage1D(L)) {
		luaL_error(L, "luna typecheck failed in void glTexStorage1D(unsigned int target, int levels, unsigned int internalformat, int width) function, expected prototype:\nvoid glTexStorage1D(unsigned int target, int levels, unsigned int internalformat, int width)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	int levels=(int)lua_tointeger(L,2);
	unsigned int internalformat=(unsigned int)lua_tointeger(L,3);
	int width=(int)lua_tointeger(L,4);

	::glTexStorage1D(target, levels, internalformat, width);

	return 0;
}

// void glTexStorage2D(unsigned int target, int levels, unsigned int internalformat, int width, int height)
static int _bind_glTexStorage2D(lua_State *L) {
	if (!_lg_typecheck_glTexStorage2D(L)) {
		luaL_error(L, "luna typecheck failed in void glTexStorage2D(unsigned int target, int levels, unsigned int internalformat, int width, int height) function, expected prototype:\nvoid glTexStorage2D(unsigned int target, int levels, unsigned int internalformat, int width, int height)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	int levels=(int)lua_tointeger(L,2);
	unsigned int internalformat=(unsigned int)lua_tointeger(L,3);
	int width=(int)lua_tointeger(L,4);
	int height=(int)lua_tointeger(L,5);

	::glTexStorage2D(target, levels, internalformat, width, height);

	return 0;
}

// void glTexStorage3D(unsigned int target, int levels, unsigned int internalformat, int width, int height, int depth)
static int _bind_glTexStorage3D(lua_State *L) {
	if (!_lg_typecheck_glTexStorage3D(L)) {
		luaL_error(L, "luna typecheck failed in void glTexStorage3D(unsigned int target, int levels, unsigned int internalformat, int width, int height, int depth) function, expected prototype:\nvoid glTexStorage3D(unsigned int target, int levels, unsigned int internalformat, int width, int height, int depth)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	int levels=(int)lua_tointeger(L,2);
	unsigned int internalformat=(unsigned int)lua_tointeger(L,3);
	int width=(int)lua_tointeger(L,4);
	int height=(int)lua_tointeger(L,5);
	int depth=(int)lua_tointeger(L,6);

	::glTexStorage3D(target, levels, internalformat, width, height, depth);

	return 0;
}

// void glTextureStorage1DEXT(unsigned int texture, unsigned int target, int levels, unsigned int internalformat, int width)
static int _bind_glTextureStorage1DEXT(lua_State *L) {
	if (!_lg_typecheck_glTextureStorage1DEXT(L)) {
		luaL_error(L, "luna typecheck failed in void glTextureStorage1DEXT(unsigned int texture, unsigned int target, int levels, unsigned int internalformat, int width) function, expected prototype:\nvoid glTextureStorage1DEXT(unsigned int texture, unsigned int target, int levels, unsigned int internalformat, int width)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int texture=(unsigned int)lua_tointeger(L,1);
	unsigned int target=(unsigned int)lua_tointeger(L,2);
	int levels=(int)lua_tointeger(L,3);
	unsigned int internalformat=(unsigned int)lua_tointeger(L,4);
	int width=(int)lua_tointeger(L,5);

	::glTextureStorage1DEXT(texture, target, levels, internalformat, width);

	return 0;
}

// void glTextureStorage2DEXT(unsigned int texture, unsigned int target, int levels, unsigned int internalformat, int width, int height)
static int _bind_glTextureStorage2DEXT(lua_State *L) {
	if (!_lg_typecheck_glTextureStorage2DEXT(L)) {
		luaL_error(L, "luna typecheck failed in void glTextureStorage2DEXT(unsigned int texture, unsigned int target, int levels, unsigned int internalformat, int width, int height) function, expected prototype:\nvoid glTextureStorage2DEXT(unsigned int texture, unsigned int target, int levels, unsigned int internalformat, int width, int height)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int texture=(unsigned int)lua_tointeger(L,1);
	unsigned int target=(unsigned int)lua_tointeger(L,2);
	int levels=(int)lua_tointeger(L,3);
	unsigned int internalformat=(unsigned int)lua_tointeger(L,4);
	int width=(int)lua_tointeger(L,5);
	int height=(int)lua_tointeger(L,6);

	::glTextureStorage2DEXT(texture, target, levels, internalformat, width, height);

	return 0;
}

// void glTextureStorage3DEXT(unsigned int texture, unsigned int target, int levels, unsigned int internalformat, int width, int height, int depth)
static int _bind_glTextureStorage3DEXT(lua_State *L) {
	if (!_lg_typecheck_glTextureStorage3DEXT(L)) {
		luaL_error(L, "luna typecheck failed in void glTextureStorage3DEXT(unsigned int texture, unsigned int target, int levels, unsigned int internalformat, int width, int height, int depth) function, expected prototype:\nvoid glTextureStorage3DEXT(unsigned int texture, unsigned int target, int levels, unsigned int internalformat, int width, int height, int depth)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int texture=(unsigned int)lua_tointeger(L,1);
	unsigned int target=(unsigned int)lua_tointeger(L,2);
	int levels=(int)lua_tointeger(L,3);
	unsigned int internalformat=(unsigned int)lua_tointeger(L,4);
	int width=(int)lua_tointeger(L,5);
	int height=(int)lua_tointeger(L,6);
	int depth=(int)lua_tointeger(L,7);

	::glTextureStorage3DEXT(texture, target, levels, internalformat, width, height, depth);

	return 0;
}

// void glDebugMessageControl(unsigned int source, unsigned int type, unsigned int severity, int count, const unsigned int * ids, unsigned char enabled)
static int _bind_glDebugMessageControl(lua_State *L) {
	if (!_lg_typecheck_glDebugMessageControl(L)) {
		luaL_error(L, "luna typecheck failed in void glDebugMessageControl(unsigned int source, unsigned int type, unsigned int severity, int count, const unsigned int * ids, unsigned char enabled) function, expected prototype:\nvoid glDebugMessageControl(unsigned int source, unsigned int type, unsigned int severity, int count, const unsigned int * ids, unsigned char enabled)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int source=(unsigned int)lua_tointeger(L,1);
	unsigned int type=(unsigned int)lua_tointeger(L,2);
	unsigned int severity=(unsigned int)lua_tointeger(L,3);
	int count=(int)lua_tointeger(L,4);
	const unsigned int* ids=(const unsigned int*)Luna< void >::check(L,5);
	unsigned char enabled = (unsigned char)(lua_tointeger(L,6));

	::glDebugMessageControl(source, type, severity, count, ids, enabled);

	return 0;
}

// void glDebugMessageInsert(unsigned int source, unsigned int type, unsigned int id, unsigned int severity, int length, const char * buf)
static int _bind_glDebugMessageInsert(lua_State *L) {
	if (!_lg_typecheck_glDebugMessageInsert(L)) {
		luaL_error(L, "luna typecheck failed in void glDebugMessageInsert(unsigned int source, unsigned int type, unsigned int id, unsigned int severity, int length, const char * buf) function, expected prototype:\nvoid glDebugMessageInsert(unsigned int source, unsigned int type, unsigned int id, unsigned int severity, int length, const char * buf)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int source=(unsigned int)lua_tointeger(L,1);
	unsigned int type=(unsigned int)lua_tointeger(L,2);
	unsigned int id=(unsigned int)lua_tointeger(L,3);
	unsigned int severity=(unsigned int)lua_tointeger(L,4);
	int length=(int)lua_tointeger(L,5);
	const char * buf=(const char *)lua_tostring(L,6);

	::glDebugMessageInsert(source, type, id, severity, length, buf);

	return 0;
}

// unsigned int glGetDebugMessageLog(unsigned int count, int bufsize, unsigned int * sources, unsigned int * types, unsigned int * ids, unsigned int * severities, int * lengths, char * messageLog)
static int _bind_glGetDebugMessageLog(lua_State *L) {
	if (!_lg_typecheck_glGetDebugMessageLog(L)) {
		luaL_error(L, "luna typecheck failed in unsigned int glGetDebugMessageLog(unsigned int count, int bufsize, unsigned int * sources, unsigned int * types, unsigned int * ids, unsigned int * severities, int * lengths, char * messageLog) function, expected prototype:\nunsigned int glGetDebugMessageLog(unsigned int count, int bufsize, unsigned int * sources, unsigned int * types, unsigned int * ids, unsigned int * severities, int * lengths, char * messageLog)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int count=(unsigned int)lua_tointeger(L,1);
	int bufsize=(int)lua_tointeger(L,2);
	unsigned int* sources=(unsigned int*)Luna< void >::check(L,3);
	unsigned int* types=(unsigned int*)Luna< void >::check(L,4);
	unsigned int* ids=(unsigned int*)Luna< void >::check(L,5);
	unsigned int* severities=(unsigned int*)Luna< void >::check(L,6);
	int* lengths=(int*)Luna< void >::check(L,7);
	char* messageLog=(char*)Luna< void >::check(L,8);

	unsigned int lret = ::glGetDebugMessageLog(count, bufsize, sources, types, ids, severities, lengths, messageLog);
	lua_pushnumber(L,lret);

	return 1;
}

// void glPushDebugGroup(unsigned int source, unsigned int id, int length, const char * message)
static int _bind_glPushDebugGroup(lua_State *L) {
	if (!_lg_typecheck_glPushDebugGroup(L)) {
		luaL_error(L, "luna typecheck failed in void glPushDebugGroup(unsigned int source, unsigned int id, int length, const char * message) function, expected prototype:\nvoid glPushDebugGroup(unsigned int source, unsigned int id, int length, const char * message)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int source=(unsigned int)lua_tointeger(L,1);
	unsigned int id=(unsigned int)lua_tointeger(L,2);
	int length=(int)lua_tointeger(L,3);
	const char * message=(const char *)lua_tostring(L,4);

	::glPushDebugGroup(source, id, length, message);

	return 0;
}

// void glObjectLabel(unsigned int identifier, unsigned int name, int length, const char * label)
static int _bind_glObjectLabel(lua_State *L) {
	if (!_lg_typecheck_glObjectLabel(L)) {
		luaL_error(L, "luna typecheck failed in void glObjectLabel(unsigned int identifier, unsigned int name, int length, const char * label) function, expected prototype:\nvoid glObjectLabel(unsigned int identifier, unsigned int name, int length, const char * label)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int identifier=(unsigned int)lua_tointeger(L,1);
	unsigned int name=(unsigned int)lua_tointeger(L,2);
	int length=(int)lua_tointeger(L,3);
	const char * label=(const char *)lua_tostring(L,4);

	::glObjectLabel(identifier, name, length, label);

	return 0;
}

// void glGetObjectLabel(unsigned int identifier, unsigned int name, int bufSize, int * length, char * label)
static int _bind_glGetObjectLabel(lua_State *L) {
	if (!_lg_typecheck_glGetObjectLabel(L)) {
		luaL_error(L, "luna typecheck failed in void glGetObjectLabel(unsigned int identifier, unsigned int name, int bufSize, int * length, char * label) function, expected prototype:\nvoid glGetObjectLabel(unsigned int identifier, unsigned int name, int bufSize, int * length, char * label)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int identifier=(unsigned int)lua_tointeger(L,1);
	unsigned int name=(unsigned int)lua_tointeger(L,2);
	int bufSize=(int)lua_tointeger(L,3);
	int* length=(int*)Luna< void >::check(L,4);
	char* label=(char*)Luna< void >::check(L,5);

	::glGetObjectLabel(identifier, name, bufSize, length, label);

	return 0;
}

// void glObjectPtrLabel(void * ptr, int length, const char * label)
static int _bind_glObjectPtrLabel(lua_State *L) {
	if (!_lg_typecheck_glObjectPtrLabel(L)) {
		luaL_error(L, "luna typecheck failed in void glObjectPtrLabel(void * ptr, int length, const char * label) function, expected prototype:\nvoid glObjectPtrLabel(void * ptr, int length, const char * label)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	void* ptr=(Luna< void >::check(L,1));
	int length=(int)lua_tointeger(L,2);
	const char * label=(const char *)lua_tostring(L,3);

	::glObjectPtrLabel(ptr, length, label);

	return 0;
}

// void glGetObjectPtrLabel(void * ptr, int bufSize, int * length, char * label)
static int _bind_glGetObjectPtrLabel(lua_State *L) {
	if (!_lg_typecheck_glGetObjectPtrLabel(L)) {
		luaL_error(L, "luna typecheck failed in void glGetObjectPtrLabel(void * ptr, int bufSize, int * length, char * label) function, expected prototype:\nvoid glGetObjectPtrLabel(void * ptr, int bufSize, int * length, char * label)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	void* ptr=(Luna< void >::check(L,1));
	int bufSize=(int)lua_tointeger(L,2);
	int* length=(int*)Luna< void >::check(L,3);
	char* label=(char*)Luna< void >::check(L,4);

	::glGetObjectPtrLabel(ptr, bufSize, length, label);

	return 0;
}

// void glClearBufferData(unsigned int target, unsigned int internalformat, unsigned int format, unsigned int type, const void * data)
static int _bind_glClearBufferData(lua_State *L) {
	if (!_lg_typecheck_glClearBufferData(L)) {
		luaL_error(L, "luna typecheck failed in void glClearBufferData(unsigned int target, unsigned int internalformat, unsigned int format, unsigned int type, const void * data) function, expected prototype:\nvoid glClearBufferData(unsigned int target, unsigned int internalformat, unsigned int format, unsigned int type, const void * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	unsigned int internalformat=(unsigned int)lua_tointeger(L,2);
	unsigned int format=(unsigned int)lua_tointeger(L,3);
	unsigned int type=(unsigned int)lua_tointeger(L,4);
	const void* data=(Luna< void >::check(L,5));

	::glClearBufferData(target, internalformat, format, type, data);

	return 0;
}

// void glClearBufferSubData(unsigned int target, unsigned int internalformat, __int64 offset, __int64 size, unsigned int format, unsigned int type, const void * data)
static int _bind_glClearBufferSubData(lua_State *L) {
	if (!_lg_typecheck_glClearBufferSubData(L)) {
		luaL_error(L, "luna typecheck failed in void glClearBufferSubData(unsigned int target, unsigned int internalformat, __int64 offset, __int64 size, unsigned int format, unsigned int type, const void * data) function, expected prototype:\nvoid glClearBufferSubData(unsigned int target, unsigned int internalformat, __int64 offset, __int64 size, unsigned int format, unsigned int type, const void * data)\nClass arguments details:\narg 3 ID = [unknown]\narg 4 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	unsigned int internalformat=(unsigned int)lua_tointeger(L,2);
	__int64* offset_ptr=(Luna< __int64 >::check(L,3));
	if( !offset_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg offset in glClearBufferSubData function");
	}
	__int64 offset=*offset_ptr;
	__int64* size_ptr=(Luna< __int64 >::check(L,4));
	if( !size_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg size in glClearBufferSubData function");
	}
	__int64 size=*size_ptr;
	unsigned int format=(unsigned int)lua_tointeger(L,5);
	unsigned int type=(unsigned int)lua_tointeger(L,6);
	const void* data=(Luna< void >::check(L,7));

	::glClearBufferSubData(target, internalformat, offset, size, format, type, data);

	return 0;
}

// void glClearNamedBufferDataEXT(unsigned int buffer, unsigned int internalformat, unsigned int format, unsigned int type, const void * data)
static int _bind_glClearNamedBufferDataEXT(lua_State *L) {
	if (!_lg_typecheck_glClearNamedBufferDataEXT(L)) {
		luaL_error(L, "luna typecheck failed in void glClearNamedBufferDataEXT(unsigned int buffer, unsigned int internalformat, unsigned int format, unsigned int type, const void * data) function, expected prototype:\nvoid glClearNamedBufferDataEXT(unsigned int buffer, unsigned int internalformat, unsigned int format, unsigned int type, const void * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int buffer=(unsigned int)lua_tointeger(L,1);
	unsigned int internalformat=(unsigned int)lua_tointeger(L,2);
	unsigned int format=(unsigned int)lua_tointeger(L,3);
	unsigned int type=(unsigned int)lua_tointeger(L,4);
	const void* data=(Luna< void >::check(L,5));

	::glClearNamedBufferDataEXT(buffer, internalformat, format, type, data);

	return 0;
}

// void glClearNamedBufferSubDataEXT(unsigned int buffer, unsigned int internalformat, unsigned int format, unsigned int type, __int64 offset, __int64 size, const void * data)
static int _bind_glClearNamedBufferSubDataEXT(lua_State *L) {
	if (!_lg_typecheck_glClearNamedBufferSubDataEXT(L)) {
		luaL_error(L, "luna typecheck failed in void glClearNamedBufferSubDataEXT(unsigned int buffer, unsigned int internalformat, unsigned int format, unsigned int type, __int64 offset, __int64 size, const void * data) function, expected prototype:\nvoid glClearNamedBufferSubDataEXT(unsigned int buffer, unsigned int internalformat, unsigned int format, unsigned int type, __int64 offset, __int64 size, const void * data)\nClass arguments details:\narg 5 ID = [unknown]\narg 6 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int buffer=(unsigned int)lua_tointeger(L,1);
	unsigned int internalformat=(unsigned int)lua_tointeger(L,2);
	unsigned int format=(unsigned int)lua_tointeger(L,3);
	unsigned int type=(unsigned int)lua_tointeger(L,4);
	__int64* offset_ptr=(Luna< __int64 >::check(L,5));
	if( !offset_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg offset in glClearNamedBufferSubDataEXT function");
	}
	__int64 offset=*offset_ptr;
	__int64* size_ptr=(Luna< __int64 >::check(L,6));
	if( !size_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg size in glClearNamedBufferSubDataEXT function");
	}
	__int64 size=*size_ptr;
	const void* data=(Luna< void >::check(L,7));

	::glClearNamedBufferSubDataEXT(buffer, internalformat, format, type, offset, size, data);

	return 0;
}

// void glDispatchCompute(unsigned int num_groups_x, unsigned int num_groups_y, unsigned int num_groups_z)
static int _bind_glDispatchCompute(lua_State *L) {
	if (!_lg_typecheck_glDispatchCompute(L)) {
		luaL_error(L, "luna typecheck failed in void glDispatchCompute(unsigned int num_groups_x, unsigned int num_groups_y, unsigned int num_groups_z) function, expected prototype:\nvoid glDispatchCompute(unsigned int num_groups_x, unsigned int num_groups_y, unsigned int num_groups_z)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int num_groups_x=(unsigned int)lua_tointeger(L,1);
	unsigned int num_groups_y=(unsigned int)lua_tointeger(L,2);
	unsigned int num_groups_z=(unsigned int)lua_tointeger(L,3);

	::glDispatchCompute(num_groups_x, num_groups_y, num_groups_z);

	return 0;
}

// void glDispatchComputeIndirect(__int64 indirect)
static int _bind_glDispatchComputeIndirect(lua_State *L) {
	if (!_lg_typecheck_glDispatchComputeIndirect(L)) {
		luaL_error(L, "luna typecheck failed in void glDispatchComputeIndirect(__int64 indirect) function, expected prototype:\nvoid glDispatchComputeIndirect(__int64 indirect)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
	}

	__int64* indirect_ptr=(Luna< __int64 >::check(L,1));
	if( !indirect_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg indirect in glDispatchComputeIndirect function");
	}
	__int64 indirect=*indirect_ptr;

	::glDispatchComputeIndirect(indirect);

	return 0;
}

// void glCopyImageSubData(unsigned int srcName, unsigned int srcTarget, int srcLevel, int srcX, int srcY, int srcZ, unsigned int dstName, unsigned int dstTarget, int dstLevel, int dstX, int dstY, int dstZ, int srcWidth, int srcHeight, int srcDepth)
static int _bind_glCopyImageSubData(lua_State *L) {
	if (!_lg_typecheck_glCopyImageSubData(L)) {
		luaL_error(L, "luna typecheck failed in void glCopyImageSubData(unsigned int srcName, unsigned int srcTarget, int srcLevel, int srcX, int srcY, int srcZ, unsigned int dstName, unsigned int dstTarget, int dstLevel, int dstX, int dstY, int dstZ, int srcWidth, int srcHeight, int srcDepth) function, expected prototype:\nvoid glCopyImageSubData(unsigned int srcName, unsigned int srcTarget, int srcLevel, int srcX, int srcY, int srcZ, unsigned int dstName, unsigned int dstTarget, int dstLevel, int dstX, int dstY, int dstZ, int srcWidth, int srcHeight, int srcDepth)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int srcName=(unsigned int)lua_tointeger(L,1);
	unsigned int srcTarget=(unsigned int)lua_tointeger(L,2);
	int srcLevel=(int)lua_tointeger(L,3);
	int srcX=(int)lua_tointeger(L,4);
	int srcY=(int)lua_tointeger(L,5);
	int srcZ=(int)lua_tointeger(L,6);
	unsigned int dstName=(unsigned int)lua_tointeger(L,7);
	unsigned int dstTarget=(unsigned int)lua_tointeger(L,8);
	int dstLevel=(int)lua_tointeger(L,9);
	int dstX=(int)lua_tointeger(L,10);
	int dstY=(int)lua_tointeger(L,11);
	int dstZ=(int)lua_tointeger(L,12);
	int srcWidth=(int)lua_tointeger(L,13);
	int srcHeight=(int)lua_tointeger(L,14);
	int srcDepth=(int)lua_tointeger(L,15);

	::glCopyImageSubData(srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, srcWidth, srcHeight, srcDepth);

	return 0;
}

// void glTextureView(unsigned int texture, unsigned int target, unsigned int origtexture, unsigned int internalformat, unsigned int minlevel, unsigned int numlevels, unsigned int minlayer, unsigned int numlayers)
static int _bind_glTextureView(lua_State *L) {
	if (!_lg_typecheck_glTextureView(L)) {
		luaL_error(L, "luna typecheck failed in void glTextureView(unsigned int texture, unsigned int target, unsigned int origtexture, unsigned int internalformat, unsigned int minlevel, unsigned int numlevels, unsigned int minlayer, unsigned int numlayers) function, expected prototype:\nvoid glTextureView(unsigned int texture, unsigned int target, unsigned int origtexture, unsigned int internalformat, unsigned int minlevel, unsigned int numlevels, unsigned int minlayer, unsigned int numlayers)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int texture=(unsigned int)lua_tointeger(L,1);
	unsigned int target=(unsigned int)lua_tointeger(L,2);
	unsigned int origtexture=(unsigned int)lua_tointeger(L,3);
	unsigned int internalformat=(unsigned int)lua_tointeger(L,4);
	unsigned int minlevel=(unsigned int)lua_tointeger(L,5);
	unsigned int numlevels=(unsigned int)lua_tointeger(L,6);
	unsigned int minlayer=(unsigned int)lua_tointeger(L,7);
	unsigned int numlayers=(unsigned int)lua_tointeger(L,8);

	::glTextureView(texture, target, origtexture, internalformat, minlevel, numlevels, minlayer, numlayers);

	return 0;
}

// void glBindVertexBuffer(unsigned int bindingindex, unsigned int buffer, __int64 offset, int stride)
static int _bind_glBindVertexBuffer(lua_State *L) {
	if (!_lg_typecheck_glBindVertexBuffer(L)) {
		luaL_error(L, "luna typecheck failed in void glBindVertexBuffer(unsigned int bindingindex, unsigned int buffer, __int64 offset, int stride) function, expected prototype:\nvoid glBindVertexBuffer(unsigned int bindingindex, unsigned int buffer, __int64 offset, int stride)\nClass arguments details:\narg 3 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int bindingindex=(unsigned int)lua_tointeger(L,1);
	unsigned int buffer=(unsigned int)lua_tointeger(L,2);
	__int64* offset_ptr=(Luna< __int64 >::check(L,3));
	if( !offset_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg offset in glBindVertexBuffer function");
	}
	__int64 offset=*offset_ptr;
	int stride=(int)lua_tointeger(L,4);

	::glBindVertexBuffer(bindingindex, buffer, offset, stride);

	return 0;
}

// void glVertexAttribFormat(unsigned int attribindex, int size, unsigned int type, unsigned char normalized, unsigned int relativeoffset)
static int _bind_glVertexAttribFormat(lua_State *L) {
	if (!_lg_typecheck_glVertexAttribFormat(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexAttribFormat(unsigned int attribindex, int size, unsigned int type, unsigned char normalized, unsigned int relativeoffset) function, expected prototype:\nvoid glVertexAttribFormat(unsigned int attribindex, int size, unsigned int type, unsigned char normalized, unsigned int relativeoffset)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int attribindex=(unsigned int)lua_tointeger(L,1);
	int size=(int)lua_tointeger(L,2);
	unsigned int type=(unsigned int)lua_tointeger(L,3);
	unsigned char normalized = (unsigned char)(lua_tointeger(L,4));
	unsigned int relativeoffset=(unsigned int)lua_tointeger(L,5);

	::glVertexAttribFormat(attribindex, size, type, normalized, relativeoffset);

	return 0;
}

// void glVertexAttribIFormat(unsigned int attribindex, int size, unsigned int type, unsigned int relativeoffset)
static int _bind_glVertexAttribIFormat(lua_State *L) {
	if (!_lg_typecheck_glVertexAttribIFormat(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexAttribIFormat(unsigned int attribindex, int size, unsigned int type, unsigned int relativeoffset) function, expected prototype:\nvoid glVertexAttribIFormat(unsigned int attribindex, int size, unsigned int type, unsigned int relativeoffset)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int attribindex=(unsigned int)lua_tointeger(L,1);
	int size=(int)lua_tointeger(L,2);
	unsigned int type=(unsigned int)lua_tointeger(L,3);
	unsigned int relativeoffset=(unsigned int)lua_tointeger(L,4);

	::glVertexAttribIFormat(attribindex, size, type, relativeoffset);

	return 0;
}

// void glVertexAttribLFormat(unsigned int attribindex, int size, unsigned int type, unsigned int relativeoffset)
static int _bind_glVertexAttribLFormat(lua_State *L) {
	if (!_lg_typecheck_glVertexAttribLFormat(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexAttribLFormat(unsigned int attribindex, int size, unsigned int type, unsigned int relativeoffset) function, expected prototype:\nvoid glVertexAttribLFormat(unsigned int attribindex, int size, unsigned int type, unsigned int relativeoffset)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int attribindex=(unsigned int)lua_tointeger(L,1);
	int size=(int)lua_tointeger(L,2);
	unsigned int type=(unsigned int)lua_tointeger(L,3);
	unsigned int relativeoffset=(unsigned int)lua_tointeger(L,4);

	::glVertexAttribLFormat(attribindex, size, type, relativeoffset);

	return 0;
}

// void glVertexAttribBinding(unsigned int attribindex, unsigned int bindingindex)
static int _bind_glVertexAttribBinding(lua_State *L) {
	if (!_lg_typecheck_glVertexAttribBinding(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexAttribBinding(unsigned int attribindex, unsigned int bindingindex) function, expected prototype:\nvoid glVertexAttribBinding(unsigned int attribindex, unsigned int bindingindex)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int attribindex=(unsigned int)lua_tointeger(L,1);
	unsigned int bindingindex=(unsigned int)lua_tointeger(L,2);

	::glVertexAttribBinding(attribindex, bindingindex);

	return 0;
}

// void glVertexBindingDivisor(unsigned int bindingindex, unsigned int divisor)
static int _bind_glVertexBindingDivisor(lua_State *L) {
	if (!_lg_typecheck_glVertexBindingDivisor(L)) {
		luaL_error(L, "luna typecheck failed in void glVertexBindingDivisor(unsigned int bindingindex, unsigned int divisor) function, expected prototype:\nvoid glVertexBindingDivisor(unsigned int bindingindex, unsigned int divisor)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int bindingindex=(unsigned int)lua_tointeger(L,1);
	unsigned int divisor=(unsigned int)lua_tointeger(L,2);

	::glVertexBindingDivisor(bindingindex, divisor);

	return 0;
}

// void glFramebufferParameteri(unsigned int target, unsigned int pname, int param)
static int _bind_glFramebufferParameteri(lua_State *L) {
	if (!_lg_typecheck_glFramebufferParameteri(L)) {
		luaL_error(L, "luna typecheck failed in void glFramebufferParameteri(unsigned int target, unsigned int pname, int param) function, expected prototype:\nvoid glFramebufferParameteri(unsigned int target, unsigned int pname, int param)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	unsigned int pname=(unsigned int)lua_tointeger(L,2);
	int param=(int)lua_tointeger(L,3);

	::glFramebufferParameteri(target, pname, param);

	return 0;
}

// void glGetFramebufferParameteriv(unsigned int target, unsigned int pname, int * params)
static int _bind_glGetFramebufferParameteriv(lua_State *L) {
	if (!_lg_typecheck_glGetFramebufferParameteriv(L)) {
		luaL_error(L, "luna typecheck failed in void glGetFramebufferParameteriv(unsigned int target, unsigned int pname, int * params) function, expected prototype:\nvoid glGetFramebufferParameteriv(unsigned int target, unsigned int pname, int * params)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	unsigned int pname=(unsigned int)lua_tointeger(L,2);
	int* params=(int*)Luna< void >::check(L,3);

	::glGetFramebufferParameteriv(target, pname, params);

	return 0;
}

// void glNamedFramebufferParameteriEXT(unsigned int framebuffer, unsigned int pname, int param)
static int _bind_glNamedFramebufferParameteriEXT(lua_State *L) {
	if (!_lg_typecheck_glNamedFramebufferParameteriEXT(L)) {
		luaL_error(L, "luna typecheck failed in void glNamedFramebufferParameteriEXT(unsigned int framebuffer, unsigned int pname, int param) function, expected prototype:\nvoid glNamedFramebufferParameteriEXT(unsigned int framebuffer, unsigned int pname, int param)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int framebuffer=(unsigned int)lua_tointeger(L,1);
	unsigned int pname=(unsigned int)lua_tointeger(L,2);
	int param=(int)lua_tointeger(L,3);

	::glNamedFramebufferParameteriEXT(framebuffer, pname, param);

	return 0;
}

// void glGetNamedFramebufferParameterivEXT(unsigned int framebuffer, unsigned int pname, int * params)
static int _bind_glGetNamedFramebufferParameterivEXT(lua_State *L) {
	if (!_lg_typecheck_glGetNamedFramebufferParameterivEXT(L)) {
		luaL_error(L, "luna typecheck failed in void glGetNamedFramebufferParameterivEXT(unsigned int framebuffer, unsigned int pname, int * params) function, expected prototype:\nvoid glGetNamedFramebufferParameterivEXT(unsigned int framebuffer, unsigned int pname, int * params)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int framebuffer=(unsigned int)lua_tointeger(L,1);
	unsigned int pname=(unsigned int)lua_tointeger(L,2);
	int* params=(int*)Luna< void >::check(L,3);

	::glGetNamedFramebufferParameterivEXT(framebuffer, pname, params);

	return 0;
}

// void glGetInternalformati64v(unsigned int target, unsigned int internalformat, unsigned int pname, int bufSize, __int64 * params)
static int _bind_glGetInternalformati64v(lua_State *L) {
	if (!_lg_typecheck_glGetInternalformati64v(L)) {
		luaL_error(L, "luna typecheck failed in void glGetInternalformati64v(unsigned int target, unsigned int internalformat, unsigned int pname, int bufSize, __int64 * params) function, expected prototype:\nvoid glGetInternalformati64v(unsigned int target, unsigned int internalformat, unsigned int pname, int bufSize, __int64 * params)\nClass arguments details:\narg 5 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	unsigned int internalformat=(unsigned int)lua_tointeger(L,2);
	unsigned int pname=(unsigned int)lua_tointeger(L,3);
	int bufSize=(int)lua_tointeger(L,4);
	__int64* params=(Luna< __int64 >::check(L,5));

	::glGetInternalformati64v(target, internalformat, pname, bufSize, params);

	return 0;
}

// void glInvalidateTexSubImage(unsigned int texture, int level, int xoffset, int yoffset, int zoffset, int width, int height, int depth)
static int _bind_glInvalidateTexSubImage(lua_State *L) {
	if (!_lg_typecheck_glInvalidateTexSubImage(L)) {
		luaL_error(L, "luna typecheck failed in void glInvalidateTexSubImage(unsigned int texture, int level, int xoffset, int yoffset, int zoffset, int width, int height, int depth) function, expected prototype:\nvoid glInvalidateTexSubImage(unsigned int texture, int level, int xoffset, int yoffset, int zoffset, int width, int height, int depth)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int texture=(unsigned int)lua_tointeger(L,1);
	int level=(int)lua_tointeger(L,2);
	int xoffset=(int)lua_tointeger(L,3);
	int yoffset=(int)lua_tointeger(L,4);
	int zoffset=(int)lua_tointeger(L,5);
	int width=(int)lua_tointeger(L,6);
	int height=(int)lua_tointeger(L,7);
	int depth=(int)lua_tointeger(L,8);

	::glInvalidateTexSubImage(texture, level, xoffset, yoffset, zoffset, width, height, depth);

	return 0;
}

// void glInvalidateTexImage(unsigned int texture, int level)
static int _bind_glInvalidateTexImage(lua_State *L) {
	if (!_lg_typecheck_glInvalidateTexImage(L)) {
		luaL_error(L, "luna typecheck failed in void glInvalidateTexImage(unsigned int texture, int level) function, expected prototype:\nvoid glInvalidateTexImage(unsigned int texture, int level)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int texture=(unsigned int)lua_tointeger(L,1);
	int level=(int)lua_tointeger(L,2);

	::glInvalidateTexImage(texture, level);

	return 0;
}

// void glInvalidateBufferSubData(unsigned int buffer, __int64 offset, __int64 length)
static int _bind_glInvalidateBufferSubData(lua_State *L) {
	if (!_lg_typecheck_glInvalidateBufferSubData(L)) {
		luaL_error(L, "luna typecheck failed in void glInvalidateBufferSubData(unsigned int buffer, __int64 offset, __int64 length) function, expected prototype:\nvoid glInvalidateBufferSubData(unsigned int buffer, __int64 offset, __int64 length)\nClass arguments details:\narg 2 ID = [unknown]\narg 3 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int buffer=(unsigned int)lua_tointeger(L,1);
	__int64* offset_ptr=(Luna< __int64 >::check(L,2));
	if( !offset_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg offset in glInvalidateBufferSubData function");
	}
	__int64 offset=*offset_ptr;
	__int64* length_ptr=(Luna< __int64 >::check(L,3));
	if( !length_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg length in glInvalidateBufferSubData function");
	}
	__int64 length=*length_ptr;

	::glInvalidateBufferSubData(buffer, offset, length);

	return 0;
}

// void glInvalidateBufferData(unsigned int buffer)
static int _bind_glInvalidateBufferData(lua_State *L) {
	if (!_lg_typecheck_glInvalidateBufferData(L)) {
		luaL_error(L, "luna typecheck failed in void glInvalidateBufferData(unsigned int buffer) function, expected prototype:\nvoid glInvalidateBufferData(unsigned int buffer)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int buffer=(unsigned int)lua_tointeger(L,1);

	::glInvalidateBufferData(buffer);

	return 0;
}

// void glInvalidateFramebuffer(unsigned int target, int numAttachments, const unsigned int * attachments)
static int _bind_glInvalidateFramebuffer(lua_State *L) {
	if (!_lg_typecheck_glInvalidateFramebuffer(L)) {
		luaL_error(L, "luna typecheck failed in void glInvalidateFramebuffer(unsigned int target, int numAttachments, const unsigned int * attachments) function, expected prototype:\nvoid glInvalidateFramebuffer(unsigned int target, int numAttachments, const unsigned int * attachments)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	int numAttachments=(int)lua_tointeger(L,2);
	const unsigned int* attachments=(const unsigned int*)Luna< void >::check(L,3);

	::glInvalidateFramebuffer(target, numAttachments, attachments);

	return 0;
}

// void glInvalidateSubFramebuffer(unsigned int target, int numAttachments, const unsigned int * attachments, int x, int y, int width, int height)
static int _bind_glInvalidateSubFramebuffer(lua_State *L) {
	if (!_lg_typecheck_glInvalidateSubFramebuffer(L)) {
		luaL_error(L, "luna typecheck failed in void glInvalidateSubFramebuffer(unsigned int target, int numAttachments, const unsigned int * attachments, int x, int y, int width, int height) function, expected prototype:\nvoid glInvalidateSubFramebuffer(unsigned int target, int numAttachments, const unsigned int * attachments, int x, int y, int width, int height)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	int numAttachments=(int)lua_tointeger(L,2);
	const unsigned int* attachments=(const unsigned int*)Luna< void >::check(L,3);
	int x=(int)lua_tointeger(L,4);
	int y=(int)lua_tointeger(L,5);
	int width=(int)lua_tointeger(L,6);
	int height=(int)lua_tointeger(L,7);

	::glInvalidateSubFramebuffer(target, numAttachments, attachments, x, y, width, height);

	return 0;
}

// void glMultiDrawArraysIndirect(unsigned int mode, const void * indirect, int drawcount, int stride)
static int _bind_glMultiDrawArraysIndirect(lua_State *L) {
	if (!_lg_typecheck_glMultiDrawArraysIndirect(L)) {
		luaL_error(L, "luna typecheck failed in void glMultiDrawArraysIndirect(unsigned int mode, const void * indirect, int drawcount, int stride) function, expected prototype:\nvoid glMultiDrawArraysIndirect(unsigned int mode, const void * indirect, int drawcount, int stride)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int mode=(unsigned int)lua_tointeger(L,1);
	const void* indirect=(Luna< void >::check(L,2));
	int drawcount=(int)lua_tointeger(L,3);
	int stride=(int)lua_tointeger(L,4);

	::glMultiDrawArraysIndirect(mode, indirect, drawcount, stride);

	return 0;
}

// void glMultiDrawElementsIndirect(unsigned int mode, unsigned int type, const void * indirect, int drawcount, int stride)
static int _bind_glMultiDrawElementsIndirect(lua_State *L) {
	if (!_lg_typecheck_glMultiDrawElementsIndirect(L)) {
		luaL_error(L, "luna typecheck failed in void glMultiDrawElementsIndirect(unsigned int mode, unsigned int type, const void * indirect, int drawcount, int stride) function, expected prototype:\nvoid glMultiDrawElementsIndirect(unsigned int mode, unsigned int type, const void * indirect, int drawcount, int stride)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int mode=(unsigned int)lua_tointeger(L,1);
	unsigned int type=(unsigned int)lua_tointeger(L,2);
	const void* indirect=(Luna< void >::check(L,3));
	int drawcount=(int)lua_tointeger(L,4);
	int stride=(int)lua_tointeger(L,5);

	::glMultiDrawElementsIndirect(mode, type, indirect, drawcount, stride);

	return 0;
}

// void glGetProgramInterfaceiv(unsigned int program, unsigned int programInterface, unsigned int pname, int * params)
static int _bind_glGetProgramInterfaceiv(lua_State *L) {
	if (!_lg_typecheck_glGetProgramInterfaceiv(L)) {
		luaL_error(L, "luna typecheck failed in void glGetProgramInterfaceiv(unsigned int program, unsigned int programInterface, unsigned int pname, int * params) function, expected prototype:\nvoid glGetProgramInterfaceiv(unsigned int program, unsigned int programInterface, unsigned int pname, int * params)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	unsigned int programInterface=(unsigned int)lua_tointeger(L,2);
	unsigned int pname=(unsigned int)lua_tointeger(L,3);
	int* params=(int*)Luna< void >::check(L,4);

	::glGetProgramInterfaceiv(program, programInterface, pname, params);

	return 0;
}

// unsigned int glGetProgramResourceIndex(unsigned int program, unsigned int programInterface, const char * name)
static int _bind_glGetProgramResourceIndex(lua_State *L) {
	if (!_lg_typecheck_glGetProgramResourceIndex(L)) {
		luaL_error(L, "luna typecheck failed in unsigned int glGetProgramResourceIndex(unsigned int program, unsigned int programInterface, const char * name) function, expected prototype:\nunsigned int glGetProgramResourceIndex(unsigned int program, unsigned int programInterface, const char * name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	unsigned int programInterface=(unsigned int)lua_tointeger(L,2);
	const char * name=(const char *)lua_tostring(L,3);

	unsigned int lret = ::glGetProgramResourceIndex(program, programInterface, name);
	lua_pushnumber(L,lret);

	return 1;
}

// void glGetProgramResourceName(unsigned int program, unsigned int programInterface, unsigned int index, int bufSize, int * length, char * name)
static int _bind_glGetProgramResourceName(lua_State *L) {
	if (!_lg_typecheck_glGetProgramResourceName(L)) {
		luaL_error(L, "luna typecheck failed in void glGetProgramResourceName(unsigned int program, unsigned int programInterface, unsigned int index, int bufSize, int * length, char * name) function, expected prototype:\nvoid glGetProgramResourceName(unsigned int program, unsigned int programInterface, unsigned int index, int bufSize, int * length, char * name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	unsigned int programInterface=(unsigned int)lua_tointeger(L,2);
	unsigned int index=(unsigned int)lua_tointeger(L,3);
	int bufSize=(int)lua_tointeger(L,4);
	int* length=(int*)Luna< void >::check(L,5);
	char* name=(char*)Luna< void >::check(L,6);

	::glGetProgramResourceName(program, programInterface, index, bufSize, length, name);

	return 0;
}

// void glGetProgramResourceiv(unsigned int program, unsigned int programInterface, unsigned int index, int propCount, const unsigned int * props, int bufSize, int * length, int * params)
static int _bind_glGetProgramResourceiv(lua_State *L) {
	if (!_lg_typecheck_glGetProgramResourceiv(L)) {
		luaL_error(L, "luna typecheck failed in void glGetProgramResourceiv(unsigned int program, unsigned int programInterface, unsigned int index, int propCount, const unsigned int * props, int bufSize, int * length, int * params) function, expected prototype:\nvoid glGetProgramResourceiv(unsigned int program, unsigned int programInterface, unsigned int index, int propCount, const unsigned int * props, int bufSize, int * length, int * params)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	unsigned int programInterface=(unsigned int)lua_tointeger(L,2);
	unsigned int index=(unsigned int)lua_tointeger(L,3);
	int propCount=(int)lua_tointeger(L,4);
	const unsigned int* props=(const unsigned int*)Luna< void >::check(L,5);
	int bufSize=(int)lua_tointeger(L,6);
	int* length=(int*)Luna< void >::check(L,7);
	int* params=(int*)Luna< void >::check(L,8);

	::glGetProgramResourceiv(program, programInterface, index, propCount, props, bufSize, length, params);

	return 0;
}

// int glGetProgramResourceLocation(unsigned int program, unsigned int programInterface, const char * name)
static int _bind_glGetProgramResourceLocation(lua_State *L) {
	if (!_lg_typecheck_glGetProgramResourceLocation(L)) {
		luaL_error(L, "luna typecheck failed in int glGetProgramResourceLocation(unsigned int program, unsigned int programInterface, const char * name) function, expected prototype:\nint glGetProgramResourceLocation(unsigned int program, unsigned int programInterface, const char * name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	unsigned int programInterface=(unsigned int)lua_tointeger(L,2);
	const char * name=(const char *)lua_tostring(L,3);

	int lret = ::glGetProgramResourceLocation(program, programInterface, name);
	lua_pushnumber(L,lret);

	return 1;
}

// int glGetProgramResourceLocationIndex(unsigned int program, unsigned int programInterface, const char * name)
static int _bind_glGetProgramResourceLocationIndex(lua_State *L) {
	if (!_lg_typecheck_glGetProgramResourceLocationIndex(L)) {
		luaL_error(L, "luna typecheck failed in int glGetProgramResourceLocationIndex(unsigned int program, unsigned int programInterface, const char * name) function, expected prototype:\nint glGetProgramResourceLocationIndex(unsigned int program, unsigned int programInterface, const char * name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	unsigned int programInterface=(unsigned int)lua_tointeger(L,2);
	const char * name=(const char *)lua_tostring(L,3);

	int lret = ::glGetProgramResourceLocationIndex(program, programInterface, name);
	lua_pushnumber(L,lret);

	return 1;
}

// void glShaderStorageBlockBinding(unsigned int program, unsigned int storageBlockIndex, unsigned int storageBlockBinding)
static int _bind_glShaderStorageBlockBinding(lua_State *L) {
	if (!_lg_typecheck_glShaderStorageBlockBinding(L)) {
		luaL_error(L, "luna typecheck failed in void glShaderStorageBlockBinding(unsigned int program, unsigned int storageBlockIndex, unsigned int storageBlockBinding) function, expected prototype:\nvoid glShaderStorageBlockBinding(unsigned int program, unsigned int storageBlockIndex, unsigned int storageBlockBinding)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int program=(unsigned int)lua_tointeger(L,1);
	unsigned int storageBlockIndex=(unsigned int)lua_tointeger(L,2);
	unsigned int storageBlockBinding=(unsigned int)lua_tointeger(L,3);

	::glShaderStorageBlockBinding(program, storageBlockIndex, storageBlockBinding);

	return 0;
}

// void glTexBufferRange(unsigned int target, unsigned int internalformat, unsigned int buffer, __int64 offset, __int64 size)
static int _bind_glTexBufferRange(lua_State *L) {
	if (!_lg_typecheck_glTexBufferRange(L)) {
		luaL_error(L, "luna typecheck failed in void glTexBufferRange(unsigned int target, unsigned int internalformat, unsigned int buffer, __int64 offset, __int64 size) function, expected prototype:\nvoid glTexBufferRange(unsigned int target, unsigned int internalformat, unsigned int buffer, __int64 offset, __int64 size)\nClass arguments details:\narg 4 ID = [unknown]\narg 5 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	unsigned int internalformat=(unsigned int)lua_tointeger(L,2);
	unsigned int buffer=(unsigned int)lua_tointeger(L,3);
	__int64* offset_ptr=(Luna< __int64 >::check(L,4));
	if( !offset_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg offset in glTexBufferRange function");
	}
	__int64 offset=*offset_ptr;
	__int64* size_ptr=(Luna< __int64 >::check(L,5));
	if( !size_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg size in glTexBufferRange function");
	}
	__int64 size=*size_ptr;

	::glTexBufferRange(target, internalformat, buffer, offset, size);

	return 0;
}

// void glTextureBufferRangeEXT(unsigned int texture, unsigned int target, unsigned int internalformat, unsigned int buffer, __int64 offset, __int64 size)
static int _bind_glTextureBufferRangeEXT(lua_State *L) {
	if (!_lg_typecheck_glTextureBufferRangeEXT(L)) {
		luaL_error(L, "luna typecheck failed in void glTextureBufferRangeEXT(unsigned int texture, unsigned int target, unsigned int internalformat, unsigned int buffer, __int64 offset, __int64 size) function, expected prototype:\nvoid glTextureBufferRangeEXT(unsigned int texture, unsigned int target, unsigned int internalformat, unsigned int buffer, __int64 offset, __int64 size)\nClass arguments details:\narg 5 ID = [unknown]\narg 6 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int texture=(unsigned int)lua_tointeger(L,1);
	unsigned int target=(unsigned int)lua_tointeger(L,2);
	unsigned int internalformat=(unsigned int)lua_tointeger(L,3);
	unsigned int buffer=(unsigned int)lua_tointeger(L,4);
	__int64* offset_ptr=(Luna< __int64 >::check(L,5));
	if( !offset_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg offset in glTextureBufferRangeEXT function");
	}
	__int64 offset=*offset_ptr;
	__int64* size_ptr=(Luna< __int64 >::check(L,6));
	if( !size_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg size in glTextureBufferRangeEXT function");
	}
	__int64 size=*size_ptr;

	::glTextureBufferRangeEXT(texture, target, internalformat, buffer, offset, size);

	return 0;
}

// void glTexStorage2DMultisample(unsigned int target, int samples, unsigned int internalformat, int width, int height, unsigned char fixedsamplelocations)
static int _bind_glTexStorage2DMultisample(lua_State *L) {
	if (!_lg_typecheck_glTexStorage2DMultisample(L)) {
		luaL_error(L, "luna typecheck failed in void glTexStorage2DMultisample(unsigned int target, int samples, unsigned int internalformat, int width, int height, unsigned char fixedsamplelocations) function, expected prototype:\nvoid glTexStorage2DMultisample(unsigned int target, int samples, unsigned int internalformat, int width, int height, unsigned char fixedsamplelocations)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	int samples=(int)lua_tointeger(L,2);
	unsigned int internalformat=(unsigned int)lua_tointeger(L,3);
	int width=(int)lua_tointeger(L,4);
	int height=(int)lua_tointeger(L,5);
	unsigned char fixedsamplelocations = (unsigned char)(lua_tointeger(L,6));

	::glTexStorage2DMultisample(target, samples, internalformat, width, height, fixedsamplelocations);

	return 0;
}

// void glTexStorage3DMultisample(unsigned int target, int samples, unsigned int internalformat, int width, int height, int depth, unsigned char fixedsamplelocations)
static int _bind_glTexStorage3DMultisample(lua_State *L) {
	if (!_lg_typecheck_glTexStorage3DMultisample(L)) {
		luaL_error(L, "luna typecheck failed in void glTexStorage3DMultisample(unsigned int target, int samples, unsigned int internalformat, int width, int height, int depth, unsigned char fixedsamplelocations) function, expected prototype:\nvoid glTexStorage3DMultisample(unsigned int target, int samples, unsigned int internalformat, int width, int height, int depth, unsigned char fixedsamplelocations)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	int samples=(int)lua_tointeger(L,2);
	unsigned int internalformat=(unsigned int)lua_tointeger(L,3);
	int width=(int)lua_tointeger(L,4);
	int height=(int)lua_tointeger(L,5);
	int depth=(int)lua_tointeger(L,6);
	unsigned char fixedsamplelocations = (unsigned char)(lua_tointeger(L,7));

	::glTexStorage3DMultisample(target, samples, internalformat, width, height, depth, fixedsamplelocations);

	return 0;
}

// void glTextureStorage2DMultisampleEXT(unsigned int texture, unsigned int target, int samples, unsigned int internalformat, int width, int height, unsigned char fixedsamplelocations)
static int _bind_glTextureStorage2DMultisampleEXT(lua_State *L) {
	if (!_lg_typecheck_glTextureStorage2DMultisampleEXT(L)) {
		luaL_error(L, "luna typecheck failed in void glTextureStorage2DMultisampleEXT(unsigned int texture, unsigned int target, int samples, unsigned int internalformat, int width, int height, unsigned char fixedsamplelocations) function, expected prototype:\nvoid glTextureStorage2DMultisampleEXT(unsigned int texture, unsigned int target, int samples, unsigned int internalformat, int width, int height, unsigned char fixedsamplelocations)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int texture=(unsigned int)lua_tointeger(L,1);
	unsigned int target=(unsigned int)lua_tointeger(L,2);
	int samples=(int)lua_tointeger(L,3);
	unsigned int internalformat=(unsigned int)lua_tointeger(L,4);
	int width=(int)lua_tointeger(L,5);
	int height=(int)lua_tointeger(L,6);
	unsigned char fixedsamplelocations = (unsigned char)(lua_tointeger(L,7));

	::glTextureStorage2DMultisampleEXT(texture, target, samples, internalformat, width, height, fixedsamplelocations);

	return 0;
}

// void glTextureStorage3DMultisampleEXT(unsigned int texture, unsigned int target, int samples, unsigned int internalformat, int width, int height, int depth, unsigned char fixedsamplelocations)
static int _bind_glTextureStorage3DMultisampleEXT(lua_State *L) {
	if (!_lg_typecheck_glTextureStorage3DMultisampleEXT(L)) {
		luaL_error(L, "luna typecheck failed in void glTextureStorage3DMultisampleEXT(unsigned int texture, unsigned int target, int samples, unsigned int internalformat, int width, int height, int depth, unsigned char fixedsamplelocations) function, expected prototype:\nvoid glTextureStorage3DMultisampleEXT(unsigned int texture, unsigned int target, int samples, unsigned int internalformat, int width, int height, int depth, unsigned char fixedsamplelocations)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned int texture=(unsigned int)lua_tointeger(L,1);
	unsigned int target=(unsigned int)lua_tointeger(L,2);
	int samples=(int)lua_tointeger(L,3);
	unsigned int internalformat=(unsigned int)lua_tointeger(L,4);
	int width=(int)lua_tointeger(L,5);
	int height=(int)lua_tointeger(L,6);
	int depth=(int)lua_tointeger(L,7);
	unsigned char fixedsamplelocations = (unsigned char)(lua_tointeger(L,8));

	::glTextureStorage3DMultisampleEXT(texture, target, samples, internalformat, width, height, depth, fixedsamplelocations);

	return 0;
}

// int glewInit()
static int _bind_glewInit(lua_State *L) {
	if (!_lg_typecheck_glewInit(L)) {
		luaL_error(L, "luna typecheck failed in int glewInit() function, expected prototype:\nint glewInit()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	int lret = ::glewInit();
	lua_pushnumber(L,lret);

	return 1;
}

// int glewIsSupported(const char * name)
static int _bind_glewIsSupported(lua_State *L) {
	if (!_lg_typecheck_glewIsSupported(L)) {
		luaL_error(L, "luna typecheck failed in int glewIsSupported(const char * name) function, expected prototype:\nint glewIsSupported(const char * name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	const char * name=(const char *)lua_tostring(L,1);

	int lret = ::glewIsSupported(name);
	lua_pushnumber(L,lret);

	return 1;
}

// int glewGetExtension(const char * name)
static int _bind_glewGetExtension(lua_State *L) {
	if (!_lg_typecheck_glewGetExtension(L)) {
		luaL_error(L, "luna typecheck failed in int glewGetExtension(const char * name) function, expected prototype:\nint glewGetExtension(const char * name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	const char * name=(const char *)lua_tostring(L,1);

	int lret = ::glewGetExtension(name);
	lua_pushnumber(L,lret);

	return 1;
}


#ifdef __cplusplus
extern "C" {
#endif

void register_global_functions(lua_State* L) {
	luna_pushModule(L,"opengl");
	lua_pushcfunction(L, _bind_glCullFace); lua_setfield(L,-2,"glCullFace");
	lua_pushcfunction(L, _bind_glFrontFace); lua_setfield(L,-2,"glFrontFace");
	lua_pushcfunction(L, _bind_glHint); lua_setfield(L,-2,"glHint");
	lua_pushcfunction(L, _bind_glLineWidth); lua_setfield(L,-2,"glLineWidth");
	lua_pushcfunction(L, _bind_glPointSize); lua_setfield(L,-2,"glPointSize");
	lua_pushcfunction(L, _bind_glPolygonMode); lua_setfield(L,-2,"glPolygonMode");
	lua_pushcfunction(L, _bind_glScissor); lua_setfield(L,-2,"glScissor");
	lua_pushcfunction(L, _bind_glTexParameterf); lua_setfield(L,-2,"glTexParameterf");
	lua_pushcfunction(L, _bind_glTexParameterfv); lua_setfield(L,-2,"glTexParameterfv");
	lua_pushcfunction(L, _bind_glTexParameteri); lua_setfield(L,-2,"glTexParameteri");
	lua_pushcfunction(L, _bind_glTexParameteriv); lua_setfield(L,-2,"glTexParameteriv");
	lua_pushcfunction(L, _bind_glTexImage1D); lua_setfield(L,-2,"glTexImage1D");
	lua_pushcfunction(L, _bind_glTexImage2D); lua_setfield(L,-2,"glTexImage2D");
	lua_pushcfunction(L, _bind_glDrawBuffer); lua_setfield(L,-2,"glDrawBuffer");
	lua_pushcfunction(L, _bind_glClear); lua_setfield(L,-2,"glClear");
	lua_pushcfunction(L, _bind_glClearColor); lua_setfield(L,-2,"glClearColor");
	lua_pushcfunction(L, _bind_glClearStencil); lua_setfield(L,-2,"glClearStencil");
	lua_pushcfunction(L, _bind_glClearDepth); lua_setfield(L,-2,"glClearDepth");
	lua_pushcfunction(L, _bind_glStencilMask); lua_setfield(L,-2,"glStencilMask");
	lua_pushcfunction(L, _bind_glColorMask); lua_setfield(L,-2,"glColorMask");
	lua_pushcfunction(L, _bind_glDepthMask); lua_setfield(L,-2,"glDepthMask");
	lua_pushcfunction(L, _bind_glDisable); lua_setfield(L,-2,"glDisable");
	lua_pushcfunction(L, _bind_glEnable); lua_setfield(L,-2,"glEnable");
	lua_pushcfunction(L, _bind_glFinish); lua_setfield(L,-2,"glFinish");
	lua_pushcfunction(L, _bind_glFlush); lua_setfield(L,-2,"glFlush");
	lua_pushcfunction(L, _bind_glBlendFunc); lua_setfield(L,-2,"glBlendFunc");
	lua_pushcfunction(L, _bind_glLogicOp); lua_setfield(L,-2,"glLogicOp");
	lua_pushcfunction(L, _bind_glStencilFunc); lua_setfield(L,-2,"glStencilFunc");
	lua_pushcfunction(L, _bind_glStencilOp); lua_setfield(L,-2,"glStencilOp");
	lua_pushcfunction(L, _bind_glDepthFunc); lua_setfield(L,-2,"glDepthFunc");
	lua_pushcfunction(L, _bind_glPixelStoref); lua_setfield(L,-2,"glPixelStoref");
	lua_pushcfunction(L, _bind_glPixelStorei); lua_setfield(L,-2,"glPixelStorei");
	lua_pushcfunction(L, _bind_glReadBuffer); lua_setfield(L,-2,"glReadBuffer");
	lua_pushcfunction(L, _bind_glReadPixels); lua_setfield(L,-2,"glReadPixels");
	lua_pushcfunction(L, _bind_glGetBooleanv); lua_setfield(L,-2,"glGetBooleanv");
	lua_pushcfunction(L, _bind_glGetDoublev); lua_setfield(L,-2,"glGetDoublev");
	lua_pushcfunction(L, _bind_glGetError); lua_setfield(L,-2,"glGetError");
	lua_pushcfunction(L, _bind_glGetFloatv); lua_setfield(L,-2,"glGetFloatv");
	lua_pushcfunction(L, _bind_glGetIntegerv); lua_setfield(L,-2,"glGetIntegerv");
	lua_pushcfunction(L, _bind_glGetString); lua_setfield(L,-2,"glGetString");
	lua_pushcfunction(L, _bind_glGetTexImage); lua_setfield(L,-2,"glGetTexImage");
	lua_pushcfunction(L, _bind_glGetTexParameterfv); lua_setfield(L,-2,"glGetTexParameterfv");
	lua_pushcfunction(L, _bind_glGetTexParameteriv); lua_setfield(L,-2,"glGetTexParameteriv");
	lua_pushcfunction(L, _bind_glGetTexLevelParameterfv); lua_setfield(L,-2,"glGetTexLevelParameterfv");
	lua_pushcfunction(L, _bind_glGetTexLevelParameteriv); lua_setfield(L,-2,"glGetTexLevelParameteriv");
	lua_pushcfunction(L, _bind_glIsEnabled); lua_setfield(L,-2,"glIsEnabled");
	lua_pushcfunction(L, _bind_glDepthRange); lua_setfield(L,-2,"glDepthRange");
	lua_pushcfunction(L, _bind_glViewport); lua_setfield(L,-2,"glViewport");
	lua_pushcfunction(L, _bind_glDrawArrays); lua_setfield(L,-2,"glDrawArrays");
	lua_pushcfunction(L, _bind_glDrawElements); lua_setfield(L,-2,"glDrawElements");
	lua_pushcfunction(L, _bind_glPolygonOffset); lua_setfield(L,-2,"glPolygonOffset");
	lua_pushcfunction(L, _bind_glCopyTexImage1D); lua_setfield(L,-2,"glCopyTexImage1D");
	lua_pushcfunction(L, _bind_glCopyTexImage2D); lua_setfield(L,-2,"glCopyTexImage2D");
	lua_pushcfunction(L, _bind_glCopyTexSubImage1D); lua_setfield(L,-2,"glCopyTexSubImage1D");
	lua_pushcfunction(L, _bind_glCopyTexSubImage2D); lua_setfield(L,-2,"glCopyTexSubImage2D");
	lua_pushcfunction(L, _bind_glTexSubImage1D); lua_setfield(L,-2,"glTexSubImage1D");
	lua_pushcfunction(L, _bind_glTexSubImage2D); lua_setfield(L,-2,"glTexSubImage2D");
	lua_pushcfunction(L, _bind_glBindTexture); lua_setfield(L,-2,"glBindTexture");
	lua_pushcfunction(L, _bind_glDeleteTextures); lua_setfield(L,-2,"glDeleteTextures");
	lua_pushcfunction(L, _bind_glGenTextures); lua_setfield(L,-2,"glGenTextures");
	lua_pushcfunction(L, _bind_glIsTexture); lua_setfield(L,-2,"glIsTexture");
	lua_pushcfunction(L, _bind_glBlendColor); lua_setfield(L,-2,"glBlendColor");
	lua_pushcfunction(L, _bind_glBlendEquation); lua_setfield(L,-2,"glBlendEquation");
	lua_pushcfunction(L, _bind_glDrawRangeElements); lua_setfield(L,-2,"glDrawRangeElements");
	lua_pushcfunction(L, _bind_glTexImage3D); lua_setfield(L,-2,"glTexImage3D");
	lua_pushcfunction(L, _bind_glTexSubImage3D); lua_setfield(L,-2,"glTexSubImage3D");
	lua_pushcfunction(L, _bind_glCopyTexSubImage3D); lua_setfield(L,-2,"glCopyTexSubImage3D");
	lua_pushcfunction(L, _bind_glActiveTexture); lua_setfield(L,-2,"glActiveTexture");
	lua_pushcfunction(L, _bind_glSampleCoverage); lua_setfield(L,-2,"glSampleCoverage");
	lua_pushcfunction(L, _bind_glCompressedTexImage3D); lua_setfield(L,-2,"glCompressedTexImage3D");
	lua_pushcfunction(L, _bind_glCompressedTexImage2D); lua_setfield(L,-2,"glCompressedTexImage2D");
	lua_pushcfunction(L, _bind_glCompressedTexImage1D); lua_setfield(L,-2,"glCompressedTexImage1D");
	lua_pushcfunction(L, _bind_glCompressedTexSubImage3D); lua_setfield(L,-2,"glCompressedTexSubImage3D");
	lua_pushcfunction(L, _bind_glCompressedTexSubImage2D); lua_setfield(L,-2,"glCompressedTexSubImage2D");
	lua_pushcfunction(L, _bind_glCompressedTexSubImage1D); lua_setfield(L,-2,"glCompressedTexSubImage1D");
	lua_pushcfunction(L, _bind_glGetCompressedTexImage); lua_setfield(L,-2,"glGetCompressedTexImage");
	lua_pushcfunction(L, _bind_glBlendFuncSeparate); lua_setfield(L,-2,"glBlendFuncSeparate");
	lua_pushcfunction(L, _bind_glMultiDrawArrays); lua_setfield(L,-2,"glMultiDrawArrays");
	lua_pushcfunction(L, _bind_glPointParameterf); lua_setfield(L,-2,"glPointParameterf");
	lua_pushcfunction(L, _bind_glPointParameterfv); lua_setfield(L,-2,"glPointParameterfv");
	lua_pushcfunction(L, _bind_glPointParameteri); lua_setfield(L,-2,"glPointParameteri");
	lua_pushcfunction(L, _bind_glPointParameteriv); lua_setfield(L,-2,"glPointParameteriv");
	lua_pushcfunction(L, _bind_glGenQueries); lua_setfield(L,-2,"glGenQueries");
	lua_pushcfunction(L, _bind_glDeleteQueries); lua_setfield(L,-2,"glDeleteQueries");
	lua_pushcfunction(L, _bind_glIsQuery); lua_setfield(L,-2,"glIsQuery");
	lua_pushcfunction(L, _bind_glBeginQuery); lua_setfield(L,-2,"glBeginQuery");
	lua_pushcfunction(L, _bind_glEndQuery); lua_setfield(L,-2,"glEndQuery");
	lua_pushcfunction(L, _bind_glGetQueryiv); lua_setfield(L,-2,"glGetQueryiv");
	lua_pushcfunction(L, _bind_glGetQueryObjectiv); lua_setfield(L,-2,"glGetQueryObjectiv");
	lua_pushcfunction(L, _bind_glGetQueryObjectuiv); lua_setfield(L,-2,"glGetQueryObjectuiv");
	lua_pushcfunction(L, _bind_glBindBuffer); lua_setfield(L,-2,"glBindBuffer");
	lua_pushcfunction(L, _bind_glDeleteBuffers); lua_setfield(L,-2,"glDeleteBuffers");
	lua_pushcfunction(L, _bind_glGenBuffers); lua_setfield(L,-2,"glGenBuffers");
	lua_pushcfunction(L, _bind_glIsBuffer); lua_setfield(L,-2,"glIsBuffer");
	lua_pushcfunction(L, _bind_glBufferData); lua_setfield(L,-2,"glBufferData");
	lua_pushcfunction(L, _bind_glBufferSubData); lua_setfield(L,-2,"glBufferSubData");
	lua_pushcfunction(L, _bind_glGetBufferSubData); lua_setfield(L,-2,"glGetBufferSubData");
	lua_pushcfunction(L, _bind_glMapBuffer); lua_setfield(L,-2,"glMapBuffer");
	lua_pushcfunction(L, _bind_glUnmapBuffer); lua_setfield(L,-2,"glUnmapBuffer");
	lua_pushcfunction(L, _bind_glGetBufferParameteriv); lua_setfield(L,-2,"glGetBufferParameteriv");
	lua_pushcfunction(L, _bind_glBlendEquationSeparate); lua_setfield(L,-2,"glBlendEquationSeparate");
	lua_pushcfunction(L, _bind_glDrawBuffers); lua_setfield(L,-2,"glDrawBuffers");
	lua_pushcfunction(L, _bind_glStencilOpSeparate); lua_setfield(L,-2,"glStencilOpSeparate");
	lua_pushcfunction(L, _bind_glStencilFuncSeparate); lua_setfield(L,-2,"glStencilFuncSeparate");
	lua_pushcfunction(L, _bind_glStencilMaskSeparate); lua_setfield(L,-2,"glStencilMaskSeparate");
	lua_pushcfunction(L, _bind_glAttachShader); lua_setfield(L,-2,"glAttachShader");
	lua_pushcfunction(L, _bind_glBindAttribLocation); lua_setfield(L,-2,"glBindAttribLocation");
	lua_pushcfunction(L, _bind_glCompileShader); lua_setfield(L,-2,"glCompileShader");
	lua_pushcfunction(L, _bind_glCreateProgram); lua_setfield(L,-2,"glCreateProgram");
	lua_pushcfunction(L, _bind_glCreateShader); lua_setfield(L,-2,"glCreateShader");
	lua_pushcfunction(L, _bind_glDeleteProgram); lua_setfield(L,-2,"glDeleteProgram");
	lua_pushcfunction(L, _bind_glDeleteShader); lua_setfield(L,-2,"glDeleteShader");
	lua_pushcfunction(L, _bind_glDetachShader); lua_setfield(L,-2,"glDetachShader");
	lua_pushcfunction(L, _bind_glDisableVertexAttribArray); lua_setfield(L,-2,"glDisableVertexAttribArray");
	lua_pushcfunction(L, _bind_glEnableVertexAttribArray); lua_setfield(L,-2,"glEnableVertexAttribArray");
	lua_pushcfunction(L, _bind_glGetActiveAttrib); lua_setfield(L,-2,"glGetActiveAttrib");
	lua_pushcfunction(L, _bind_glGetActiveUniform); lua_setfield(L,-2,"glGetActiveUniform");
	lua_pushcfunction(L, _bind_glGetAttachedShaders); lua_setfield(L,-2,"glGetAttachedShaders");
	lua_pushcfunction(L, _bind_glGetAttribLocation); lua_setfield(L,-2,"glGetAttribLocation");
	lua_pushcfunction(L, _bind_glGetProgramiv); lua_setfield(L,-2,"glGetProgramiv");
	lua_pushcfunction(L, _bind_glGetProgramInfoLog); lua_setfield(L,-2,"glGetProgramInfoLog");
	lua_pushcfunction(L, _bind_glGetShaderiv); lua_setfield(L,-2,"glGetShaderiv");
	lua_pushcfunction(L, _bind_glGetShaderInfoLog); lua_setfield(L,-2,"glGetShaderInfoLog");
	lua_pushcfunction(L, _bind_glGetShaderSource); lua_setfield(L,-2,"glGetShaderSource");
	lua_pushcfunction(L, _bind_glGetUniformLocation); lua_setfield(L,-2,"glGetUniformLocation");
	lua_pushcfunction(L, _bind_glGetUniformfv); lua_setfield(L,-2,"glGetUniformfv");
	lua_pushcfunction(L, _bind_glGetUniformiv); lua_setfield(L,-2,"glGetUniformiv");
	lua_pushcfunction(L, _bind_glGetVertexAttribdv); lua_setfield(L,-2,"glGetVertexAttribdv");
	lua_pushcfunction(L, _bind_glGetVertexAttribfv); lua_setfield(L,-2,"glGetVertexAttribfv");
	lua_pushcfunction(L, _bind_glGetVertexAttribiv); lua_setfield(L,-2,"glGetVertexAttribiv");
	lua_pushcfunction(L, _bind_glIsProgram); lua_setfield(L,-2,"glIsProgram");
	lua_pushcfunction(L, _bind_glIsShader); lua_setfield(L,-2,"glIsShader");
	lua_pushcfunction(L, _bind_glLinkProgram); lua_setfield(L,-2,"glLinkProgram");
	lua_pushcfunction(L, _bind_glUseProgram); lua_setfield(L,-2,"glUseProgram");
	lua_pushcfunction(L, _bind_glUniform1f); lua_setfield(L,-2,"glUniform1f");
	lua_pushcfunction(L, _bind_glUniform2f); lua_setfield(L,-2,"glUniform2f");
	lua_pushcfunction(L, _bind_glUniform3f); lua_setfield(L,-2,"glUniform3f");
	lua_pushcfunction(L, _bind_glUniform4f); lua_setfield(L,-2,"glUniform4f");
	lua_pushcfunction(L, _bind_glUniform1i); lua_setfield(L,-2,"glUniform1i");
	lua_pushcfunction(L, _bind_glUniform2i); lua_setfield(L,-2,"glUniform2i");
	lua_pushcfunction(L, _bind_glUniform3i); lua_setfield(L,-2,"glUniform3i");
	lua_pushcfunction(L, _bind_glUniform4i); lua_setfield(L,-2,"glUniform4i");
	lua_pushcfunction(L, _bind_glUniform1fv); lua_setfield(L,-2,"glUniform1fv");
	lua_pushcfunction(L, _bind_glUniform2fv); lua_setfield(L,-2,"glUniform2fv");
	lua_pushcfunction(L, _bind_glUniform3fv); lua_setfield(L,-2,"glUniform3fv");
	lua_pushcfunction(L, _bind_glUniform4fv); lua_setfield(L,-2,"glUniform4fv");
	lua_pushcfunction(L, _bind_glUniform1iv); lua_setfield(L,-2,"glUniform1iv");
	lua_pushcfunction(L, _bind_glUniform2iv); lua_setfield(L,-2,"glUniform2iv");
	lua_pushcfunction(L, _bind_glUniform3iv); lua_setfield(L,-2,"glUniform3iv");
	lua_pushcfunction(L, _bind_glUniform4iv); lua_setfield(L,-2,"glUniform4iv");
	lua_pushcfunction(L, _bind_glUniformMatrix2fv); lua_setfield(L,-2,"glUniformMatrix2fv");
	lua_pushcfunction(L, _bind_glUniformMatrix3fv); lua_setfield(L,-2,"glUniformMatrix3fv");
	lua_pushcfunction(L, _bind_glUniformMatrix4fv); lua_setfield(L,-2,"glUniformMatrix4fv");
	lua_pushcfunction(L, _bind_glValidateProgram); lua_setfield(L,-2,"glValidateProgram");
	lua_pushcfunction(L, _bind_glVertexAttrib1d); lua_setfield(L,-2,"glVertexAttrib1d");
	lua_pushcfunction(L, _bind_glVertexAttrib1dv); lua_setfield(L,-2,"glVertexAttrib1dv");
	lua_pushcfunction(L, _bind_glVertexAttrib1f); lua_setfield(L,-2,"glVertexAttrib1f");
	lua_pushcfunction(L, _bind_glVertexAttrib1fv); lua_setfield(L,-2,"glVertexAttrib1fv");
	lua_pushcfunction(L, _bind_glVertexAttrib1s); lua_setfield(L,-2,"glVertexAttrib1s");
	lua_pushcfunction(L, _bind_glVertexAttrib1sv); lua_setfield(L,-2,"glVertexAttrib1sv");
	lua_pushcfunction(L, _bind_glVertexAttrib2d); lua_setfield(L,-2,"glVertexAttrib2d");
	lua_pushcfunction(L, _bind_glVertexAttrib2dv); lua_setfield(L,-2,"glVertexAttrib2dv");
	lua_pushcfunction(L, _bind_glVertexAttrib2f); lua_setfield(L,-2,"glVertexAttrib2f");
	lua_pushcfunction(L, _bind_glVertexAttrib2fv); lua_setfield(L,-2,"glVertexAttrib2fv");
	lua_pushcfunction(L, _bind_glVertexAttrib2s); lua_setfield(L,-2,"glVertexAttrib2s");
	lua_pushcfunction(L, _bind_glVertexAttrib2sv); lua_setfield(L,-2,"glVertexAttrib2sv");
	lua_pushcfunction(L, _bind_glVertexAttrib3d); lua_setfield(L,-2,"glVertexAttrib3d");
	lua_pushcfunction(L, _bind_glVertexAttrib3dv); lua_setfield(L,-2,"glVertexAttrib3dv");
	lua_pushcfunction(L, _bind_glVertexAttrib3f); lua_setfield(L,-2,"glVertexAttrib3f");
	lua_pushcfunction(L, _bind_glVertexAttrib3fv); lua_setfield(L,-2,"glVertexAttrib3fv");
	lua_pushcfunction(L, _bind_glVertexAttrib3s); lua_setfield(L,-2,"glVertexAttrib3s");
	lua_pushcfunction(L, _bind_glVertexAttrib3sv); lua_setfield(L,-2,"glVertexAttrib3sv");
	lua_pushcfunction(L, _bind_glVertexAttrib4Nbv); lua_setfield(L,-2,"glVertexAttrib4Nbv");
	lua_pushcfunction(L, _bind_glVertexAttrib4Niv); lua_setfield(L,-2,"glVertexAttrib4Niv");
	lua_pushcfunction(L, _bind_glVertexAttrib4Nsv); lua_setfield(L,-2,"glVertexAttrib4Nsv");
	lua_pushcfunction(L, _bind_glVertexAttrib4Nub); lua_setfield(L,-2,"glVertexAttrib4Nub");
	lua_pushcfunction(L, _bind_glVertexAttrib4Nubv); lua_setfield(L,-2,"glVertexAttrib4Nubv");
	lua_pushcfunction(L, _bind_glVertexAttrib4Nuiv); lua_setfield(L,-2,"glVertexAttrib4Nuiv");
	lua_pushcfunction(L, _bind_glVertexAttrib4Nusv); lua_setfield(L,-2,"glVertexAttrib4Nusv");
	lua_pushcfunction(L, _bind_glVertexAttrib4bv); lua_setfield(L,-2,"glVertexAttrib4bv");
	lua_pushcfunction(L, _bind_glVertexAttrib4d); lua_setfield(L,-2,"glVertexAttrib4d");
	lua_pushcfunction(L, _bind_glVertexAttrib4dv); lua_setfield(L,-2,"glVertexAttrib4dv");
	lua_pushcfunction(L, _bind_glVertexAttrib4f); lua_setfield(L,-2,"glVertexAttrib4f");
	lua_pushcfunction(L, _bind_glVertexAttrib4fv); lua_setfield(L,-2,"glVertexAttrib4fv");
	lua_pushcfunction(L, _bind_glVertexAttrib4iv); lua_setfield(L,-2,"glVertexAttrib4iv");
	lua_pushcfunction(L, _bind_glVertexAttrib4s); lua_setfield(L,-2,"glVertexAttrib4s");
	lua_pushcfunction(L, _bind_glVertexAttrib4sv); lua_setfield(L,-2,"glVertexAttrib4sv");
	lua_pushcfunction(L, _bind_glVertexAttrib4ubv); lua_setfield(L,-2,"glVertexAttrib4ubv");
	lua_pushcfunction(L, _bind_glVertexAttrib4uiv); lua_setfield(L,-2,"glVertexAttrib4uiv");
	lua_pushcfunction(L, _bind_glVertexAttrib4usv); lua_setfield(L,-2,"glVertexAttrib4usv");
	lua_pushcfunction(L, _bind_glVertexAttribPointer); lua_setfield(L,-2,"glVertexAttribPointer");
	lua_pushcfunction(L, _bind_glUniformMatrix2x3fv); lua_setfield(L,-2,"glUniformMatrix2x3fv");
	lua_pushcfunction(L, _bind_glUniformMatrix3x2fv); lua_setfield(L,-2,"glUniformMatrix3x2fv");
	lua_pushcfunction(L, _bind_glUniformMatrix2x4fv); lua_setfield(L,-2,"glUniformMatrix2x4fv");
	lua_pushcfunction(L, _bind_glUniformMatrix4x2fv); lua_setfield(L,-2,"glUniformMatrix4x2fv");
	lua_pushcfunction(L, _bind_glUniformMatrix3x4fv); lua_setfield(L,-2,"glUniformMatrix3x4fv");
	lua_pushcfunction(L, _bind_glUniformMatrix4x3fv); lua_setfield(L,-2,"glUniformMatrix4x3fv");
	lua_pushcfunction(L, _bind_glColorMaski); lua_setfield(L,-2,"glColorMaski");
	lua_pushcfunction(L, _bind_glGetBooleani_v); lua_setfield(L,-2,"glGetBooleani_v");
	lua_pushcfunction(L, _bind_glGetIntegeri_v); lua_setfield(L,-2,"glGetIntegeri_v");
	lua_pushcfunction(L, _bind_glEnablei); lua_setfield(L,-2,"glEnablei");
	lua_pushcfunction(L, _bind_glDisablei); lua_setfield(L,-2,"glDisablei");
	lua_pushcfunction(L, _bind_glIsEnabledi); lua_setfield(L,-2,"glIsEnabledi");
	lua_pushcfunction(L, _bind_glBeginTransformFeedback); lua_setfield(L,-2,"glBeginTransformFeedback");
	lua_pushcfunction(L, _bind_glEndTransformFeedback); lua_setfield(L,-2,"glEndTransformFeedback");
	lua_pushcfunction(L, _bind_glBindBufferRange); lua_setfield(L,-2,"glBindBufferRange");
	lua_pushcfunction(L, _bind_glBindBufferBase); lua_setfield(L,-2,"glBindBufferBase");
	lua_pushcfunction(L, _bind_glGetTransformFeedbackVarying); lua_setfield(L,-2,"glGetTransformFeedbackVarying");
	lua_pushcfunction(L, _bind_glClampColor); lua_setfield(L,-2,"glClampColor");
	lua_pushcfunction(L, _bind_glBeginConditionalRender); lua_setfield(L,-2,"glBeginConditionalRender");
	lua_pushcfunction(L, _bind_glEndConditionalRender); lua_setfield(L,-2,"glEndConditionalRender");
	lua_pushcfunction(L, _bind_glVertexAttribIPointer); lua_setfield(L,-2,"glVertexAttribIPointer");
	lua_pushcfunction(L, _bind_glGetVertexAttribIiv); lua_setfield(L,-2,"glGetVertexAttribIiv");
	lua_pushcfunction(L, _bind_glGetVertexAttribIuiv); lua_setfield(L,-2,"glGetVertexAttribIuiv");
	lua_pushcfunction(L, _bind_glVertexAttribI1i); lua_setfield(L,-2,"glVertexAttribI1i");
	lua_pushcfunction(L, _bind_glVertexAttribI2i); lua_setfield(L,-2,"glVertexAttribI2i");
	lua_pushcfunction(L, _bind_glVertexAttribI3i); lua_setfield(L,-2,"glVertexAttribI3i");
	lua_pushcfunction(L, _bind_glVertexAttribI4i); lua_setfield(L,-2,"glVertexAttribI4i");
	lua_pushcfunction(L, _bind_glVertexAttribI1ui); lua_setfield(L,-2,"glVertexAttribI1ui");
	lua_pushcfunction(L, _bind_glVertexAttribI2ui); lua_setfield(L,-2,"glVertexAttribI2ui");
	lua_pushcfunction(L, _bind_glVertexAttribI3ui); lua_setfield(L,-2,"glVertexAttribI3ui");
	lua_pushcfunction(L, _bind_glVertexAttribI4ui); lua_setfield(L,-2,"glVertexAttribI4ui");
	lua_pushcfunction(L, _bind_glVertexAttribI1iv); lua_setfield(L,-2,"glVertexAttribI1iv");
	lua_pushcfunction(L, _bind_glVertexAttribI2iv); lua_setfield(L,-2,"glVertexAttribI2iv");
	lua_pushcfunction(L, _bind_glVertexAttribI3iv); lua_setfield(L,-2,"glVertexAttribI3iv");
	lua_pushcfunction(L, _bind_glVertexAttribI4iv); lua_setfield(L,-2,"glVertexAttribI4iv");
	lua_pushcfunction(L, _bind_glVertexAttribI1uiv); lua_setfield(L,-2,"glVertexAttribI1uiv");
	lua_pushcfunction(L, _bind_glVertexAttribI2uiv); lua_setfield(L,-2,"glVertexAttribI2uiv");
	lua_pushcfunction(L, _bind_glVertexAttribI3uiv); lua_setfield(L,-2,"glVertexAttribI3uiv");
	lua_pushcfunction(L, _bind_glVertexAttribI4uiv); lua_setfield(L,-2,"glVertexAttribI4uiv");
	lua_pushcfunction(L, _bind_glVertexAttribI4bv); lua_setfield(L,-2,"glVertexAttribI4bv");
	lua_pushcfunction(L, _bind_glVertexAttribI4sv); lua_setfield(L,-2,"glVertexAttribI4sv");
	lua_pushcfunction(L, _bind_glVertexAttribI4ubv); lua_setfield(L,-2,"glVertexAttribI4ubv");
	lua_pushcfunction(L, _bind_glVertexAttribI4usv); lua_setfield(L,-2,"glVertexAttribI4usv");
	lua_pushcfunction(L, _bind_glGetUniformuiv); lua_setfield(L,-2,"glGetUniformuiv");
	lua_pushcfunction(L, _bind_glBindFragDataLocation); lua_setfield(L,-2,"glBindFragDataLocation");
	lua_pushcfunction(L, _bind_glGetFragDataLocation); lua_setfield(L,-2,"glGetFragDataLocation");
	lua_pushcfunction(L, _bind_glUniform1ui); lua_setfield(L,-2,"glUniform1ui");
	lua_pushcfunction(L, _bind_glUniform2ui); lua_setfield(L,-2,"glUniform2ui");
	lua_pushcfunction(L, _bind_glUniform3ui); lua_setfield(L,-2,"glUniform3ui");
	lua_pushcfunction(L, _bind_glUniform4ui); lua_setfield(L,-2,"glUniform4ui");
	lua_pushcfunction(L, _bind_glUniform1uiv); lua_setfield(L,-2,"glUniform1uiv");
	lua_pushcfunction(L, _bind_glUniform2uiv); lua_setfield(L,-2,"glUniform2uiv");
	lua_pushcfunction(L, _bind_glUniform3uiv); lua_setfield(L,-2,"glUniform3uiv");
	lua_pushcfunction(L, _bind_glUniform4uiv); lua_setfield(L,-2,"glUniform4uiv");
	lua_pushcfunction(L, _bind_glTexParameterIiv); lua_setfield(L,-2,"glTexParameterIiv");
	lua_pushcfunction(L, _bind_glTexParameterIuiv); lua_setfield(L,-2,"glTexParameterIuiv");
	lua_pushcfunction(L, _bind_glGetTexParameterIiv); lua_setfield(L,-2,"glGetTexParameterIiv");
	lua_pushcfunction(L, _bind_glGetTexParameterIuiv); lua_setfield(L,-2,"glGetTexParameterIuiv");
	lua_pushcfunction(L, _bind_glClearBufferiv); lua_setfield(L,-2,"glClearBufferiv");
	lua_pushcfunction(L, _bind_glClearBufferuiv); lua_setfield(L,-2,"glClearBufferuiv");
	lua_pushcfunction(L, _bind_glClearBufferfv); lua_setfield(L,-2,"glClearBufferfv");
	lua_pushcfunction(L, _bind_glClearBufferfi); lua_setfield(L,-2,"glClearBufferfi");
	lua_pushcfunction(L, _bind_glGetStringi); lua_setfield(L,-2,"glGetStringi");
	lua_pushcfunction(L, _bind_glDrawArraysInstanced); lua_setfield(L,-2,"glDrawArraysInstanced");
	lua_pushcfunction(L, _bind_glDrawElementsInstanced); lua_setfield(L,-2,"glDrawElementsInstanced");
	lua_pushcfunction(L, _bind_glTexBuffer); lua_setfield(L,-2,"glTexBuffer");
	lua_pushcfunction(L, _bind_glPrimitiveRestartIndex); lua_setfield(L,-2,"glPrimitiveRestartIndex");
	lua_pushcfunction(L, _bind_glGetInteger64i_v); lua_setfield(L,-2,"glGetInteger64i_v");
	lua_pushcfunction(L, _bind_glGetBufferParameteri64v); lua_setfield(L,-2,"glGetBufferParameteri64v");
	lua_pushcfunction(L, _bind_glFramebufferTexture); lua_setfield(L,-2,"glFramebufferTexture");
	lua_pushcfunction(L, _bind_glVertexAttribDivisor); lua_setfield(L,-2,"glVertexAttribDivisor");
	lua_pushcfunction(L, _bind_glMinSampleShading); lua_setfield(L,-2,"glMinSampleShading");
	lua_pushcfunction(L, _bind_glBlendEquationi); lua_setfield(L,-2,"glBlendEquationi");
	lua_pushcfunction(L, _bind_glBlendEquationSeparatei); lua_setfield(L,-2,"glBlendEquationSeparatei");
	lua_pushcfunction(L, _bind_glBlendFunci); lua_setfield(L,-2,"glBlendFunci");
	lua_pushcfunction(L, _bind_glBlendFuncSeparatei); lua_setfield(L,-2,"glBlendFuncSeparatei");
	lua_pushcfunction(L, _bind_glIsRenderbuffer); lua_setfield(L,-2,"glIsRenderbuffer");
	lua_pushcfunction(L, _bind_glBindRenderbuffer); lua_setfield(L,-2,"glBindRenderbuffer");
	lua_pushcfunction(L, _bind_glDeleteRenderbuffers); lua_setfield(L,-2,"glDeleteRenderbuffers");
	lua_pushcfunction(L, _bind_glGenRenderbuffers); lua_setfield(L,-2,"glGenRenderbuffers");
	lua_pushcfunction(L, _bind_glRenderbufferStorage); lua_setfield(L,-2,"glRenderbufferStorage");
	lua_pushcfunction(L, _bind_glGetRenderbufferParameteriv); lua_setfield(L,-2,"glGetRenderbufferParameteriv");
	lua_pushcfunction(L, _bind_glIsFramebuffer); lua_setfield(L,-2,"glIsFramebuffer");
	lua_pushcfunction(L, _bind_glBindFramebuffer); lua_setfield(L,-2,"glBindFramebuffer");
	lua_pushcfunction(L, _bind_glDeleteFramebuffers); lua_setfield(L,-2,"glDeleteFramebuffers");
	lua_pushcfunction(L, _bind_glGenFramebuffers); lua_setfield(L,-2,"glGenFramebuffers");
	lua_pushcfunction(L, _bind_glCheckFramebufferStatus); lua_setfield(L,-2,"glCheckFramebufferStatus");
	lua_pushcfunction(L, _bind_glFramebufferTexture1D); lua_setfield(L,-2,"glFramebufferTexture1D");
	lua_pushcfunction(L, _bind_glFramebufferTexture2D); lua_setfield(L,-2,"glFramebufferTexture2D");
	lua_pushcfunction(L, _bind_glFramebufferTexture3D); lua_setfield(L,-2,"glFramebufferTexture3D");
	lua_pushcfunction(L, _bind_glFramebufferRenderbuffer); lua_setfield(L,-2,"glFramebufferRenderbuffer");
	lua_pushcfunction(L, _bind_glGetFramebufferAttachmentParameteriv); lua_setfield(L,-2,"glGetFramebufferAttachmentParameteriv");
	lua_pushcfunction(L, _bind_glGenerateMipmap); lua_setfield(L,-2,"glGenerateMipmap");
	lua_pushcfunction(L, _bind_glBlitFramebuffer); lua_setfield(L,-2,"glBlitFramebuffer");
	lua_pushcfunction(L, _bind_glRenderbufferStorageMultisample); lua_setfield(L,-2,"glRenderbufferStorageMultisample");
	lua_pushcfunction(L, _bind_glFramebufferTextureLayer); lua_setfield(L,-2,"glFramebufferTextureLayer");
	lua_pushcfunction(L, _bind_glMapBufferRange); lua_setfield(L,-2,"glMapBufferRange");
	lua_pushcfunction(L, _bind_glFlushMappedBufferRange); lua_setfield(L,-2,"glFlushMappedBufferRange");
	lua_pushcfunction(L, _bind_glBindVertexArray); lua_setfield(L,-2,"glBindVertexArray");
	lua_pushcfunction(L, _bind_glDeleteVertexArrays); lua_setfield(L,-2,"glDeleteVertexArrays");
	lua_pushcfunction(L, _bind_glGenVertexArrays); lua_setfield(L,-2,"glGenVertexArrays");
	lua_pushcfunction(L, _bind_glIsVertexArray); lua_setfield(L,-2,"glIsVertexArray");
	lua_pushcfunction(L, _bind_glGetActiveUniformsiv); lua_setfield(L,-2,"glGetActiveUniformsiv");
	lua_pushcfunction(L, _bind_glGetActiveUniformName); lua_setfield(L,-2,"glGetActiveUniformName");
	lua_pushcfunction(L, _bind_glGetUniformBlockIndex); lua_setfield(L,-2,"glGetUniformBlockIndex");
	lua_pushcfunction(L, _bind_glGetActiveUniformBlockiv); lua_setfield(L,-2,"glGetActiveUniformBlockiv");
	lua_pushcfunction(L, _bind_glGetActiveUniformBlockName); lua_setfield(L,-2,"glGetActiveUniformBlockName");
	lua_pushcfunction(L, _bind_glUniformBlockBinding); lua_setfield(L,-2,"glUniformBlockBinding");
	lua_pushcfunction(L, _bind_glCopyBufferSubData); lua_setfield(L,-2,"glCopyBufferSubData");
	lua_pushcfunction(L, _bind_glDrawElementsBaseVertex); lua_setfield(L,-2,"glDrawElementsBaseVertex");
	lua_pushcfunction(L, _bind_glDrawRangeElementsBaseVertex); lua_setfield(L,-2,"glDrawRangeElementsBaseVertex");
	lua_pushcfunction(L, _bind_glDrawElementsInstancedBaseVertex); lua_setfield(L,-2,"glDrawElementsInstancedBaseVertex");
	lua_pushcfunction(L, _bind_glProvokingVertex); lua_setfield(L,-2,"glProvokingVertex");
	lua_pushcfunction(L, _bind_glTexImage2DMultisample); lua_setfield(L,-2,"glTexImage2DMultisample");
	lua_pushcfunction(L, _bind_glTexImage3DMultisample); lua_setfield(L,-2,"glTexImage3DMultisample");
	lua_pushcfunction(L, _bind_glGetMultisamplefv); lua_setfield(L,-2,"glGetMultisamplefv");
	lua_pushcfunction(L, _bind_glSampleMaski); lua_setfield(L,-2,"glSampleMaski");
	lua_pushcfunction(L, _bind_glBlendEquationiARB); lua_setfield(L,-2,"glBlendEquationiARB");
	lua_pushcfunction(L, _bind_glBlendEquationSeparateiARB); lua_setfield(L,-2,"glBlendEquationSeparateiARB");
	lua_pushcfunction(L, _bind_glBlendFunciARB); lua_setfield(L,-2,"glBlendFunciARB");
	lua_pushcfunction(L, _bind_glBlendFuncSeparateiARB); lua_setfield(L,-2,"glBlendFuncSeparateiARB");
	lua_pushcfunction(L, _bind_glMinSampleShadingARB); lua_setfield(L,-2,"glMinSampleShadingARB");
	lua_pushcfunction(L, _bind_glNamedStringARB); lua_setfield(L,-2,"glNamedStringARB");
	lua_pushcfunction(L, _bind_glDeleteNamedStringARB); lua_setfield(L,-2,"glDeleteNamedStringARB");
	lua_pushcfunction(L, _bind_glIsNamedStringARB); lua_setfield(L,-2,"glIsNamedStringARB");
	lua_pushcfunction(L, _bind_glGetNamedStringARB); lua_setfield(L,-2,"glGetNamedStringARB");
	lua_pushcfunction(L, _bind_glGetNamedStringivARB); lua_setfield(L,-2,"glGetNamedStringivARB");
	lua_pushcfunction(L, _bind_glBindFragDataLocationIndexed); lua_setfield(L,-2,"glBindFragDataLocationIndexed");
	lua_pushcfunction(L, _bind_glGetFragDataIndex); lua_setfield(L,-2,"glGetFragDataIndex");
	lua_pushcfunction(L, _bind_glGenSamplers); lua_setfield(L,-2,"glGenSamplers");
	lua_pushcfunction(L, _bind_glDeleteSamplers); lua_setfield(L,-2,"glDeleteSamplers");
	lua_pushcfunction(L, _bind_glIsSampler); lua_setfield(L,-2,"glIsSampler");
	lua_pushcfunction(L, _bind_glBindSampler); lua_setfield(L,-2,"glBindSampler");
	lua_pushcfunction(L, _bind_glSamplerParameteri); lua_setfield(L,-2,"glSamplerParameteri");
	lua_pushcfunction(L, _bind_glSamplerParameteriv); lua_setfield(L,-2,"glSamplerParameteriv");
	lua_pushcfunction(L, _bind_glSamplerParameterf); lua_setfield(L,-2,"glSamplerParameterf");
	lua_pushcfunction(L, _bind_glSamplerParameterfv); lua_setfield(L,-2,"glSamplerParameterfv");
	lua_pushcfunction(L, _bind_glSamplerParameterIiv); lua_setfield(L,-2,"glSamplerParameterIiv");
	lua_pushcfunction(L, _bind_glSamplerParameterIuiv); lua_setfield(L,-2,"glSamplerParameterIuiv");
	lua_pushcfunction(L, _bind_glGetSamplerParameteriv); lua_setfield(L,-2,"glGetSamplerParameteriv");
	lua_pushcfunction(L, _bind_glGetSamplerParameterIiv); lua_setfield(L,-2,"glGetSamplerParameterIiv");
	lua_pushcfunction(L, _bind_glGetSamplerParameterfv); lua_setfield(L,-2,"glGetSamplerParameterfv");
	lua_pushcfunction(L, _bind_glGetSamplerParameterIuiv); lua_setfield(L,-2,"glGetSamplerParameterIuiv");
	lua_pushcfunction(L, _bind_glQueryCounter); lua_setfield(L,-2,"glQueryCounter");
	lua_pushcfunction(L, _bind_glGetQueryObjecti64v); lua_setfield(L,-2,"glGetQueryObjecti64v");
	lua_pushcfunction(L, _bind_glGetQueryObjectui64v); lua_setfield(L,-2,"glGetQueryObjectui64v");
	lua_pushcfunction(L, _bind_glVertexP2ui); lua_setfield(L,-2,"glVertexP2ui");
	lua_pushcfunction(L, _bind_glVertexP2uiv); lua_setfield(L,-2,"glVertexP2uiv");
	lua_pushcfunction(L, _bind_glVertexP3ui); lua_setfield(L,-2,"glVertexP3ui");
	lua_pushcfunction(L, _bind_glVertexP3uiv); lua_setfield(L,-2,"glVertexP3uiv");
	lua_pushcfunction(L, _bind_glVertexP4ui); lua_setfield(L,-2,"glVertexP4ui");
	lua_pushcfunction(L, _bind_glVertexP4uiv); lua_setfield(L,-2,"glVertexP4uiv");
	lua_pushcfunction(L, _bind_glTexCoordP1ui); lua_setfield(L,-2,"glTexCoordP1ui");
	lua_pushcfunction(L, _bind_glTexCoordP1uiv); lua_setfield(L,-2,"glTexCoordP1uiv");
	lua_pushcfunction(L, _bind_glTexCoordP2ui); lua_setfield(L,-2,"glTexCoordP2ui");
	lua_pushcfunction(L, _bind_glTexCoordP2uiv); lua_setfield(L,-2,"glTexCoordP2uiv");
	lua_pushcfunction(L, _bind_glTexCoordP3ui); lua_setfield(L,-2,"glTexCoordP3ui");
	lua_pushcfunction(L, _bind_glTexCoordP3uiv); lua_setfield(L,-2,"glTexCoordP3uiv");
	lua_pushcfunction(L, _bind_glTexCoordP4ui); lua_setfield(L,-2,"glTexCoordP4ui");
	lua_pushcfunction(L, _bind_glTexCoordP4uiv); lua_setfield(L,-2,"glTexCoordP4uiv");
	lua_pushcfunction(L, _bind_glMultiTexCoordP1ui); lua_setfield(L,-2,"glMultiTexCoordP1ui");
	lua_pushcfunction(L, _bind_glMultiTexCoordP1uiv); lua_setfield(L,-2,"glMultiTexCoordP1uiv");
	lua_pushcfunction(L, _bind_glMultiTexCoordP2ui); lua_setfield(L,-2,"glMultiTexCoordP2ui");
	lua_pushcfunction(L, _bind_glMultiTexCoordP2uiv); lua_setfield(L,-2,"glMultiTexCoordP2uiv");
	lua_pushcfunction(L, _bind_glMultiTexCoordP3ui); lua_setfield(L,-2,"glMultiTexCoordP3ui");
	lua_pushcfunction(L, _bind_glMultiTexCoordP3uiv); lua_setfield(L,-2,"glMultiTexCoordP3uiv");
	lua_pushcfunction(L, _bind_glMultiTexCoordP4ui); lua_setfield(L,-2,"glMultiTexCoordP4ui");
	lua_pushcfunction(L, _bind_glMultiTexCoordP4uiv); lua_setfield(L,-2,"glMultiTexCoordP4uiv");
	lua_pushcfunction(L, _bind_glNormalP3ui); lua_setfield(L,-2,"glNormalP3ui");
	lua_pushcfunction(L, _bind_glNormalP3uiv); lua_setfield(L,-2,"glNormalP3uiv");
	lua_pushcfunction(L, _bind_glColorP3ui); lua_setfield(L,-2,"glColorP3ui");
	lua_pushcfunction(L, _bind_glColorP3uiv); lua_setfield(L,-2,"glColorP3uiv");
	lua_pushcfunction(L, _bind_glColorP4ui); lua_setfield(L,-2,"glColorP4ui");
	lua_pushcfunction(L, _bind_glColorP4uiv); lua_setfield(L,-2,"glColorP4uiv");
	lua_pushcfunction(L, _bind_glSecondaryColorP3ui); lua_setfield(L,-2,"glSecondaryColorP3ui");
	lua_pushcfunction(L, _bind_glSecondaryColorP3uiv); lua_setfield(L,-2,"glSecondaryColorP3uiv");
	lua_pushcfunction(L, _bind_glVertexAttribP1ui); lua_setfield(L,-2,"glVertexAttribP1ui");
	lua_pushcfunction(L, _bind_glVertexAttribP1uiv); lua_setfield(L,-2,"glVertexAttribP1uiv");
	lua_pushcfunction(L, _bind_glVertexAttribP2ui); lua_setfield(L,-2,"glVertexAttribP2ui");
	lua_pushcfunction(L, _bind_glVertexAttribP2uiv); lua_setfield(L,-2,"glVertexAttribP2uiv");
	lua_pushcfunction(L, _bind_glVertexAttribP3ui); lua_setfield(L,-2,"glVertexAttribP3ui");
	lua_pushcfunction(L, _bind_glVertexAttribP3uiv); lua_setfield(L,-2,"glVertexAttribP3uiv");
	lua_pushcfunction(L, _bind_glVertexAttribP4ui); lua_setfield(L,-2,"glVertexAttribP4ui");
	lua_pushcfunction(L, _bind_glVertexAttribP4uiv); lua_setfield(L,-2,"glVertexAttribP4uiv");
	lua_pushcfunction(L, _bind_glDrawArraysIndirect); lua_setfield(L,-2,"glDrawArraysIndirect");
	lua_pushcfunction(L, _bind_glDrawElementsIndirect); lua_setfield(L,-2,"glDrawElementsIndirect");
	lua_pushcfunction(L, _bind_glUniform1d); lua_setfield(L,-2,"glUniform1d");
	lua_pushcfunction(L, _bind_glUniform2d); lua_setfield(L,-2,"glUniform2d");
	lua_pushcfunction(L, _bind_glUniform3d); lua_setfield(L,-2,"glUniform3d");
	lua_pushcfunction(L, _bind_glUniform4d); lua_setfield(L,-2,"glUniform4d");
	lua_pushcfunction(L, _bind_glUniform1dv); lua_setfield(L,-2,"glUniform1dv");
	lua_pushcfunction(L, _bind_glUniform2dv); lua_setfield(L,-2,"glUniform2dv");
	lua_pushcfunction(L, _bind_glUniform3dv); lua_setfield(L,-2,"glUniform3dv");
	lua_pushcfunction(L, _bind_glUniform4dv); lua_setfield(L,-2,"glUniform4dv");
	lua_pushcfunction(L, _bind_glUniformMatrix2dv); lua_setfield(L,-2,"glUniformMatrix2dv");
	lua_pushcfunction(L, _bind_glUniformMatrix3dv); lua_setfield(L,-2,"glUniformMatrix3dv");
	lua_pushcfunction(L, _bind_glUniformMatrix4dv); lua_setfield(L,-2,"glUniformMatrix4dv");
	lua_pushcfunction(L, _bind_glUniformMatrix2x3dv); lua_setfield(L,-2,"glUniformMatrix2x3dv");
	lua_pushcfunction(L, _bind_glUniformMatrix2x4dv); lua_setfield(L,-2,"glUniformMatrix2x4dv");
	lua_pushcfunction(L, _bind_glUniformMatrix3x2dv); lua_setfield(L,-2,"glUniformMatrix3x2dv");
	lua_pushcfunction(L, _bind_glUniformMatrix3x4dv); lua_setfield(L,-2,"glUniformMatrix3x4dv");
	lua_pushcfunction(L, _bind_glUniformMatrix4x2dv); lua_setfield(L,-2,"glUniformMatrix4x2dv");
	lua_pushcfunction(L, _bind_glUniformMatrix4x3dv); lua_setfield(L,-2,"glUniformMatrix4x3dv");
	lua_pushcfunction(L, _bind_glGetUniformdv); lua_setfield(L,-2,"glGetUniformdv");
	lua_pushcfunction(L, _bind_glGetSubroutineUniformLocation); lua_setfield(L,-2,"glGetSubroutineUniformLocation");
	lua_pushcfunction(L, _bind_glGetSubroutineIndex); lua_setfield(L,-2,"glGetSubroutineIndex");
	lua_pushcfunction(L, _bind_glGetActiveSubroutineUniformiv); lua_setfield(L,-2,"glGetActiveSubroutineUniformiv");
	lua_pushcfunction(L, _bind_glGetActiveSubroutineUniformName); lua_setfield(L,-2,"glGetActiveSubroutineUniformName");
	lua_pushcfunction(L, _bind_glGetActiveSubroutineName); lua_setfield(L,-2,"glGetActiveSubroutineName");
	lua_pushcfunction(L, _bind_glUniformSubroutinesuiv); lua_setfield(L,-2,"glUniformSubroutinesuiv");
	lua_pushcfunction(L, _bind_glGetUniformSubroutineuiv); lua_setfield(L,-2,"glGetUniformSubroutineuiv");
	lua_pushcfunction(L, _bind_glGetProgramStageiv); lua_setfield(L,-2,"glGetProgramStageiv");
	lua_pushcfunction(L, _bind_glPatchParameteri); lua_setfield(L,-2,"glPatchParameteri");
	lua_pushcfunction(L, _bind_glPatchParameterfv); lua_setfield(L,-2,"glPatchParameterfv");
	lua_pushcfunction(L, _bind_glBindTransformFeedback); lua_setfield(L,-2,"glBindTransformFeedback");
	lua_pushcfunction(L, _bind_glDeleteTransformFeedbacks); lua_setfield(L,-2,"glDeleteTransformFeedbacks");
	lua_pushcfunction(L, _bind_glGenTransformFeedbacks); lua_setfield(L,-2,"glGenTransformFeedbacks");
	lua_pushcfunction(L, _bind_glIsTransformFeedback); lua_setfield(L,-2,"glIsTransformFeedback");
	lua_pushcfunction(L, _bind_glPauseTransformFeedback); lua_setfield(L,-2,"glPauseTransformFeedback");
	lua_pushcfunction(L, _bind_glResumeTransformFeedback); lua_setfield(L,-2,"glResumeTransformFeedback");
	lua_pushcfunction(L, _bind_glDrawTransformFeedback); lua_setfield(L,-2,"glDrawTransformFeedback");
	lua_pushcfunction(L, _bind_glDrawTransformFeedbackStream); lua_setfield(L,-2,"glDrawTransformFeedbackStream");
	lua_pushcfunction(L, _bind_glBeginQueryIndexed); lua_setfield(L,-2,"glBeginQueryIndexed");
	lua_pushcfunction(L, _bind_glEndQueryIndexed); lua_setfield(L,-2,"glEndQueryIndexed");
	lua_pushcfunction(L, _bind_glGetQueryIndexediv); lua_setfield(L,-2,"glGetQueryIndexediv");
	lua_pushcfunction(L, _bind_glReleaseShaderCompiler); lua_setfield(L,-2,"glReleaseShaderCompiler");
	lua_pushcfunction(L, _bind_glShaderBinary); lua_setfield(L,-2,"glShaderBinary");
	lua_pushcfunction(L, _bind_glGetShaderPrecisionFormat); lua_setfield(L,-2,"glGetShaderPrecisionFormat");
	lua_pushcfunction(L, _bind_glDepthRangef); lua_setfield(L,-2,"glDepthRangef");
	lua_pushcfunction(L, _bind_glClearDepthf); lua_setfield(L,-2,"glClearDepthf");
	lua_pushcfunction(L, _bind_glGetProgramBinary); lua_setfield(L,-2,"glGetProgramBinary");
	lua_pushcfunction(L, _bind_glProgramBinary); lua_setfield(L,-2,"glProgramBinary");
	lua_pushcfunction(L, _bind_glProgramParameteri); lua_setfield(L,-2,"glProgramParameteri");
	lua_pushcfunction(L, _bind_glUseProgramStages); lua_setfield(L,-2,"glUseProgramStages");
	lua_pushcfunction(L, _bind_glActiveShaderProgram); lua_setfield(L,-2,"glActiveShaderProgram");
	lua_pushcfunction(L, _bind_glBindProgramPipeline); lua_setfield(L,-2,"glBindProgramPipeline");
	lua_pushcfunction(L, _bind_glDeleteProgramPipelines); lua_setfield(L,-2,"glDeleteProgramPipelines");
	lua_pushcfunction(L, _bind_glGenProgramPipelines); lua_setfield(L,-2,"glGenProgramPipelines");
	lua_pushcfunction(L, _bind_glIsProgramPipeline); lua_setfield(L,-2,"glIsProgramPipeline");
	lua_pushcfunction(L, _bind_glGetProgramPipelineiv); lua_setfield(L,-2,"glGetProgramPipelineiv");
	lua_pushcfunction(L, _bind_glProgramUniform1i); lua_setfield(L,-2,"glProgramUniform1i");
	lua_pushcfunction(L, _bind_glProgramUniform1iv); lua_setfield(L,-2,"glProgramUniform1iv");
	lua_pushcfunction(L, _bind_glProgramUniform1f); lua_setfield(L,-2,"glProgramUniform1f");
	lua_pushcfunction(L, _bind_glProgramUniform1fv); lua_setfield(L,-2,"glProgramUniform1fv");
	lua_pushcfunction(L, _bind_glProgramUniform1d); lua_setfield(L,-2,"glProgramUniform1d");
	lua_pushcfunction(L, _bind_glProgramUniform1dv); lua_setfield(L,-2,"glProgramUniform1dv");
	lua_pushcfunction(L, _bind_glProgramUniform1ui); lua_setfield(L,-2,"glProgramUniform1ui");
	lua_pushcfunction(L, _bind_glProgramUniform1uiv); lua_setfield(L,-2,"glProgramUniform1uiv");
	lua_pushcfunction(L, _bind_glProgramUniform2i); lua_setfield(L,-2,"glProgramUniform2i");
	lua_pushcfunction(L, _bind_glProgramUniform2iv); lua_setfield(L,-2,"glProgramUniform2iv");
	lua_pushcfunction(L, _bind_glProgramUniform2f); lua_setfield(L,-2,"glProgramUniform2f");
	lua_pushcfunction(L, _bind_glProgramUniform2fv); lua_setfield(L,-2,"glProgramUniform2fv");
	lua_pushcfunction(L, _bind_glProgramUniform2d); lua_setfield(L,-2,"glProgramUniform2d");
	lua_pushcfunction(L, _bind_glProgramUniform2dv); lua_setfield(L,-2,"glProgramUniform2dv");
	lua_pushcfunction(L, _bind_glProgramUniform2ui); lua_setfield(L,-2,"glProgramUniform2ui");
	lua_pushcfunction(L, _bind_glProgramUniform2uiv); lua_setfield(L,-2,"glProgramUniform2uiv");
	lua_pushcfunction(L, _bind_glProgramUniform3i); lua_setfield(L,-2,"glProgramUniform3i");
	lua_pushcfunction(L, _bind_glProgramUniform3iv); lua_setfield(L,-2,"glProgramUniform3iv");
	lua_pushcfunction(L, _bind_glProgramUniform3f); lua_setfield(L,-2,"glProgramUniform3f");
	lua_pushcfunction(L, _bind_glProgramUniform3fv); lua_setfield(L,-2,"glProgramUniform3fv");
	lua_pushcfunction(L, _bind_glProgramUniform3d); lua_setfield(L,-2,"glProgramUniform3d");
	lua_pushcfunction(L, _bind_glProgramUniform3dv); lua_setfield(L,-2,"glProgramUniform3dv");
	lua_pushcfunction(L, _bind_glProgramUniform3ui); lua_setfield(L,-2,"glProgramUniform3ui");
	lua_pushcfunction(L, _bind_glProgramUniform3uiv); lua_setfield(L,-2,"glProgramUniform3uiv");
	lua_pushcfunction(L, _bind_glProgramUniform4i); lua_setfield(L,-2,"glProgramUniform4i");
	lua_pushcfunction(L, _bind_glProgramUniform4iv); lua_setfield(L,-2,"glProgramUniform4iv");
	lua_pushcfunction(L, _bind_glProgramUniform4f); lua_setfield(L,-2,"glProgramUniform4f");
	lua_pushcfunction(L, _bind_glProgramUniform4fv); lua_setfield(L,-2,"glProgramUniform4fv");
	lua_pushcfunction(L, _bind_glProgramUniform4d); lua_setfield(L,-2,"glProgramUniform4d");
	lua_pushcfunction(L, _bind_glProgramUniform4dv); lua_setfield(L,-2,"glProgramUniform4dv");
	lua_pushcfunction(L, _bind_glProgramUniform4ui); lua_setfield(L,-2,"glProgramUniform4ui");
	lua_pushcfunction(L, _bind_glProgramUniform4uiv); lua_setfield(L,-2,"glProgramUniform4uiv");
	lua_pushcfunction(L, _bind_glProgramUniformMatrix2fv); lua_setfield(L,-2,"glProgramUniformMatrix2fv");
	lua_pushcfunction(L, _bind_glProgramUniformMatrix3fv); lua_setfield(L,-2,"glProgramUniformMatrix3fv");
	lua_pushcfunction(L, _bind_glProgramUniformMatrix4fv); lua_setfield(L,-2,"glProgramUniformMatrix4fv");
	lua_pushcfunction(L, _bind_glProgramUniformMatrix2dv); lua_setfield(L,-2,"glProgramUniformMatrix2dv");
	lua_pushcfunction(L, _bind_glProgramUniformMatrix3dv); lua_setfield(L,-2,"glProgramUniformMatrix3dv");
	lua_pushcfunction(L, _bind_glProgramUniformMatrix4dv); lua_setfield(L,-2,"glProgramUniformMatrix4dv");
	lua_pushcfunction(L, _bind_glProgramUniformMatrix2x3fv); lua_setfield(L,-2,"glProgramUniformMatrix2x3fv");
	lua_pushcfunction(L, _bind_glProgramUniformMatrix3x2fv); lua_setfield(L,-2,"glProgramUniformMatrix3x2fv");
	lua_pushcfunction(L, _bind_glProgramUniformMatrix2x4fv); lua_setfield(L,-2,"glProgramUniformMatrix2x4fv");
	lua_pushcfunction(L, _bind_glProgramUniformMatrix4x2fv); lua_setfield(L,-2,"glProgramUniformMatrix4x2fv");
	lua_pushcfunction(L, _bind_glProgramUniformMatrix3x4fv); lua_setfield(L,-2,"glProgramUniformMatrix3x4fv");
	lua_pushcfunction(L, _bind_glProgramUniformMatrix4x3fv); lua_setfield(L,-2,"glProgramUniformMatrix4x3fv");
	lua_pushcfunction(L, _bind_glProgramUniformMatrix2x3dv); lua_setfield(L,-2,"glProgramUniformMatrix2x3dv");
	lua_pushcfunction(L, _bind_glProgramUniformMatrix3x2dv); lua_setfield(L,-2,"glProgramUniformMatrix3x2dv");
	lua_pushcfunction(L, _bind_glProgramUniformMatrix2x4dv); lua_setfield(L,-2,"glProgramUniformMatrix2x4dv");
	lua_pushcfunction(L, _bind_glProgramUniformMatrix4x2dv); lua_setfield(L,-2,"glProgramUniformMatrix4x2dv");
	lua_pushcfunction(L, _bind_glProgramUniformMatrix3x4dv); lua_setfield(L,-2,"glProgramUniformMatrix3x4dv");
	lua_pushcfunction(L, _bind_glProgramUniformMatrix4x3dv); lua_setfield(L,-2,"glProgramUniformMatrix4x3dv");
	lua_pushcfunction(L, _bind_glValidateProgramPipeline); lua_setfield(L,-2,"glValidateProgramPipeline");
	lua_pushcfunction(L, _bind_glGetProgramPipelineInfoLog); lua_setfield(L,-2,"glGetProgramPipelineInfoLog");
	lua_pushcfunction(L, _bind_glVertexAttribL1d); lua_setfield(L,-2,"glVertexAttribL1d");
	lua_pushcfunction(L, _bind_glVertexAttribL2d); lua_setfield(L,-2,"glVertexAttribL2d");
	lua_pushcfunction(L, _bind_glVertexAttribL3d); lua_setfield(L,-2,"glVertexAttribL3d");
	lua_pushcfunction(L, _bind_glVertexAttribL4d); lua_setfield(L,-2,"glVertexAttribL4d");
	lua_pushcfunction(L, _bind_glVertexAttribL1dv); lua_setfield(L,-2,"glVertexAttribL1dv");
	lua_pushcfunction(L, _bind_glVertexAttribL2dv); lua_setfield(L,-2,"glVertexAttribL2dv");
	lua_pushcfunction(L, _bind_glVertexAttribL3dv); lua_setfield(L,-2,"glVertexAttribL3dv");
	lua_pushcfunction(L, _bind_glVertexAttribL4dv); lua_setfield(L,-2,"glVertexAttribL4dv");
	lua_pushcfunction(L, _bind_glVertexAttribLPointer); lua_setfield(L,-2,"glVertexAttribLPointer");
	lua_pushcfunction(L, _bind_glGetVertexAttribLdv); lua_setfield(L,-2,"glGetVertexAttribLdv");
	lua_pushcfunction(L, _bind_glViewportArrayv); lua_setfield(L,-2,"glViewportArrayv");
	lua_pushcfunction(L, _bind_glViewportIndexedf); lua_setfield(L,-2,"glViewportIndexedf");
	lua_pushcfunction(L, _bind_glViewportIndexedfv); lua_setfield(L,-2,"glViewportIndexedfv");
	lua_pushcfunction(L, _bind_glScissorArrayv); lua_setfield(L,-2,"glScissorArrayv");
	lua_pushcfunction(L, _bind_glScissorIndexed); lua_setfield(L,-2,"glScissorIndexed");
	lua_pushcfunction(L, _bind_glScissorIndexedv); lua_setfield(L,-2,"glScissorIndexedv");
	lua_pushcfunction(L, _bind_glDepthRangeArrayv); lua_setfield(L,-2,"glDepthRangeArrayv");
	lua_pushcfunction(L, _bind_glDepthRangeIndexed); lua_setfield(L,-2,"glDepthRangeIndexed");
	lua_pushcfunction(L, _bind_glGetFloati_v); lua_setfield(L,-2,"glGetFloati_v");
	lua_pushcfunction(L, _bind_glGetDoublei_v); lua_setfield(L,-2,"glGetDoublei_v");
	lua_pushcfunction(L, _bind_glDebugMessageControlARB); lua_setfield(L,-2,"glDebugMessageControlARB");
	lua_pushcfunction(L, _bind_glDebugMessageInsertARB); lua_setfield(L,-2,"glDebugMessageInsertARB");
	lua_pushcfunction(L, _bind_glGetDebugMessageLogARB); lua_setfield(L,-2,"glGetDebugMessageLogARB");
	lua_pushcfunction(L, _bind_glGetGraphicsResetStatusARB); lua_setfield(L,-2,"glGetGraphicsResetStatusARB");
	lua_pushcfunction(L, _bind_glGetnTexImageARB); lua_setfield(L,-2,"glGetnTexImageARB");
	lua_pushcfunction(L, _bind_glReadnPixelsARB); lua_setfield(L,-2,"glReadnPixelsARB");
	lua_pushcfunction(L, _bind_glGetnCompressedTexImageARB); lua_setfield(L,-2,"glGetnCompressedTexImageARB");
	lua_pushcfunction(L, _bind_glGetnUniformfvARB); lua_setfield(L,-2,"glGetnUniformfvARB");
	lua_pushcfunction(L, _bind_glGetnUniformivARB); lua_setfield(L,-2,"glGetnUniformivARB");
	lua_pushcfunction(L, _bind_glGetnUniformuivARB); lua_setfield(L,-2,"glGetnUniformuivARB");
	lua_pushcfunction(L, _bind_glGetnUniformdvARB); lua_setfield(L,-2,"glGetnUniformdvARB");
	lua_pushcfunction(L, _bind_glDrawArraysInstancedBaseInstance); lua_setfield(L,-2,"glDrawArraysInstancedBaseInstance");
	lua_pushcfunction(L, _bind_glDrawElementsInstancedBaseInstance); lua_setfield(L,-2,"glDrawElementsInstancedBaseInstance");
	lua_pushcfunction(L, _bind_glDrawElementsInstancedBaseVertexBaseInstance); lua_setfield(L,-2,"glDrawElementsInstancedBaseVertexBaseInstance");
	lua_pushcfunction(L, _bind_glDrawTransformFeedbackInstanced); lua_setfield(L,-2,"glDrawTransformFeedbackInstanced");
	lua_pushcfunction(L, _bind_glDrawTransformFeedbackStreamInstanced); lua_setfield(L,-2,"glDrawTransformFeedbackStreamInstanced");
	lua_pushcfunction(L, _bind_glGetInternalformativ); lua_setfield(L,-2,"glGetInternalformativ");
	lua_pushcfunction(L, _bind_glGetActiveAtomicCounterBufferiv); lua_setfield(L,-2,"glGetActiveAtomicCounterBufferiv");
	lua_pushcfunction(L, _bind_glBindImageTexture); lua_setfield(L,-2,"glBindImageTexture");
	lua_pushcfunction(L, _bind_glMemoryBarrier); lua_setfield(L,-2,"glMemoryBarrier");
	lua_pushcfunction(L, _bind_glTexStorage1D); lua_setfield(L,-2,"glTexStorage1D");
	lua_pushcfunction(L, _bind_glTexStorage2D); lua_setfield(L,-2,"glTexStorage2D");
	lua_pushcfunction(L, _bind_glTexStorage3D); lua_setfield(L,-2,"glTexStorage3D");
	lua_pushcfunction(L, _bind_glTextureStorage1DEXT); lua_setfield(L,-2,"glTextureStorage1DEXT");
	lua_pushcfunction(L, _bind_glTextureStorage2DEXT); lua_setfield(L,-2,"glTextureStorage2DEXT");
	lua_pushcfunction(L, _bind_glTextureStorage3DEXT); lua_setfield(L,-2,"glTextureStorage3DEXT");
	lua_pushcfunction(L, _bind_glDebugMessageControl); lua_setfield(L,-2,"glDebugMessageControl");
	lua_pushcfunction(L, _bind_glDebugMessageInsert); lua_setfield(L,-2,"glDebugMessageInsert");
	lua_pushcfunction(L, _bind_glGetDebugMessageLog); lua_setfield(L,-2,"glGetDebugMessageLog");
	lua_pushcfunction(L, _bind_glPushDebugGroup); lua_setfield(L,-2,"glPushDebugGroup");
	lua_pushcfunction(L, _bind_glObjectLabel); lua_setfield(L,-2,"glObjectLabel");
	lua_pushcfunction(L, _bind_glGetObjectLabel); lua_setfield(L,-2,"glGetObjectLabel");
	lua_pushcfunction(L, _bind_glObjectPtrLabel); lua_setfield(L,-2,"glObjectPtrLabel");
	lua_pushcfunction(L, _bind_glGetObjectPtrLabel); lua_setfield(L,-2,"glGetObjectPtrLabel");
	lua_pushcfunction(L, _bind_glClearBufferData); lua_setfield(L,-2,"glClearBufferData");
	lua_pushcfunction(L, _bind_glClearBufferSubData); lua_setfield(L,-2,"glClearBufferSubData");
	lua_pushcfunction(L, _bind_glClearNamedBufferDataEXT); lua_setfield(L,-2,"glClearNamedBufferDataEXT");
	lua_pushcfunction(L, _bind_glClearNamedBufferSubDataEXT); lua_setfield(L,-2,"glClearNamedBufferSubDataEXT");
	lua_pushcfunction(L, _bind_glDispatchCompute); lua_setfield(L,-2,"glDispatchCompute");
	lua_pushcfunction(L, _bind_glDispatchComputeIndirect); lua_setfield(L,-2,"glDispatchComputeIndirect");
	lua_pushcfunction(L, _bind_glCopyImageSubData); lua_setfield(L,-2,"glCopyImageSubData");
	lua_pushcfunction(L, _bind_glTextureView); lua_setfield(L,-2,"glTextureView");
	lua_pushcfunction(L, _bind_glBindVertexBuffer); lua_setfield(L,-2,"glBindVertexBuffer");
	lua_pushcfunction(L, _bind_glVertexAttribFormat); lua_setfield(L,-2,"glVertexAttribFormat");
	lua_pushcfunction(L, _bind_glVertexAttribIFormat); lua_setfield(L,-2,"glVertexAttribIFormat");
	lua_pushcfunction(L, _bind_glVertexAttribLFormat); lua_setfield(L,-2,"glVertexAttribLFormat");
	lua_pushcfunction(L, _bind_glVertexAttribBinding); lua_setfield(L,-2,"glVertexAttribBinding");
	lua_pushcfunction(L, _bind_glVertexBindingDivisor); lua_setfield(L,-2,"glVertexBindingDivisor");
	lua_pushcfunction(L, _bind_glFramebufferParameteri); lua_setfield(L,-2,"glFramebufferParameteri");
	lua_pushcfunction(L, _bind_glGetFramebufferParameteriv); lua_setfield(L,-2,"glGetFramebufferParameteriv");
	lua_pushcfunction(L, _bind_glNamedFramebufferParameteriEXT); lua_setfield(L,-2,"glNamedFramebufferParameteriEXT");
	lua_pushcfunction(L, _bind_glGetNamedFramebufferParameterivEXT); lua_setfield(L,-2,"glGetNamedFramebufferParameterivEXT");
	lua_pushcfunction(L, _bind_glGetInternalformati64v); lua_setfield(L,-2,"glGetInternalformati64v");
	lua_pushcfunction(L, _bind_glInvalidateTexSubImage); lua_setfield(L,-2,"glInvalidateTexSubImage");
	lua_pushcfunction(L, _bind_glInvalidateTexImage); lua_setfield(L,-2,"glInvalidateTexImage");
	lua_pushcfunction(L, _bind_glInvalidateBufferSubData); lua_setfield(L,-2,"glInvalidateBufferSubData");
	lua_pushcfunction(L, _bind_glInvalidateBufferData); lua_setfield(L,-2,"glInvalidateBufferData");
	lua_pushcfunction(L, _bind_glInvalidateFramebuffer); lua_setfield(L,-2,"glInvalidateFramebuffer");
	lua_pushcfunction(L, _bind_glInvalidateSubFramebuffer); lua_setfield(L,-2,"glInvalidateSubFramebuffer");
	lua_pushcfunction(L, _bind_glMultiDrawArraysIndirect); lua_setfield(L,-2,"glMultiDrawArraysIndirect");
	lua_pushcfunction(L, _bind_glMultiDrawElementsIndirect); lua_setfield(L,-2,"glMultiDrawElementsIndirect");
	lua_pushcfunction(L, _bind_glGetProgramInterfaceiv); lua_setfield(L,-2,"glGetProgramInterfaceiv");
	lua_pushcfunction(L, _bind_glGetProgramResourceIndex); lua_setfield(L,-2,"glGetProgramResourceIndex");
	lua_pushcfunction(L, _bind_glGetProgramResourceName); lua_setfield(L,-2,"glGetProgramResourceName");
	lua_pushcfunction(L, _bind_glGetProgramResourceiv); lua_setfield(L,-2,"glGetProgramResourceiv");
	lua_pushcfunction(L, _bind_glGetProgramResourceLocation); lua_setfield(L,-2,"glGetProgramResourceLocation");
	lua_pushcfunction(L, _bind_glGetProgramResourceLocationIndex); lua_setfield(L,-2,"glGetProgramResourceLocationIndex");
	lua_pushcfunction(L, _bind_glShaderStorageBlockBinding); lua_setfield(L,-2,"glShaderStorageBlockBinding");
	lua_pushcfunction(L, _bind_glTexBufferRange); lua_setfield(L,-2,"glTexBufferRange");
	lua_pushcfunction(L, _bind_glTextureBufferRangeEXT); lua_setfield(L,-2,"glTextureBufferRangeEXT");
	lua_pushcfunction(L, _bind_glTexStorage2DMultisample); lua_setfield(L,-2,"glTexStorage2DMultisample");
	lua_pushcfunction(L, _bind_glTexStorage3DMultisample); lua_setfield(L,-2,"glTexStorage3DMultisample");
	lua_pushcfunction(L, _bind_glTextureStorage2DMultisampleEXT); lua_setfield(L,-2,"glTextureStorage2DMultisampleEXT");
	lua_pushcfunction(L, _bind_glTextureStorage3DMultisampleEXT); lua_setfield(L,-2,"glTextureStorage3DMultisampleEXT");
	lua_pushcfunction(L, _bind_glewInit); lua_setfield(L,-2,"glewInit");
	lua_pushcfunction(L, _bind_glewIsSupported); lua_setfield(L,-2,"glewIsSupported");
	lua_pushcfunction(L, _bind_glewGetExtension); lua_setfield(L,-2,"glewGetExtension");
	luna_popModule(L);
}

#ifdef __cplusplus
}
#endif

