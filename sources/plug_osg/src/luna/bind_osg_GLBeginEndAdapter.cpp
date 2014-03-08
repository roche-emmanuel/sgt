#include <plug_common.h>

class luna_wrapper_osg_GLBeginEndAdapter {
public:
	typedef Luna< osg::GLBeginEndAdapter > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,22643526) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::GLBeginEndAdapter*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::GLBeginEndAdapter* rhs =(Luna< osg::GLBeginEndAdapter >::check(L,2));
		osg::GLBeginEndAdapter* self=(Luna< osg::GLBeginEndAdapter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
	}

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::GLBeginEndAdapter* self= (osg::GLBeginEndAdapter*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::GLBeginEndAdapter >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,22643526) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osg::GLBeginEndAdapter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::GLBeginEndAdapter* self=(Luna< osg::GLBeginEndAdapter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::GLBeginEndAdapter");
		
		return luna_dynamicCast(L,converters,"osg::GLBeginEndAdapter",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setState(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getState_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getState_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMatrixMode_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMatrixMode_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_PushMatrix(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_PopMatrix(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_LoadIdentity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_LoadMatrixd(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MultMatrixd(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Translatef(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Scalef(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Rotatef(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Translated(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Scaled(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Rotated(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Vertex3f(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Vertex3fv(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Vertex3dv_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Vertex3dv_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Color4f(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Color3fv(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Color4fv(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Color4ubv(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Normal3f(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Normal3fv(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_TexCoord1f(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_TexCoord1fv(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_TexCoord2f(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_TexCoord2fv(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_TexCoord3f(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_TexCoord3fv(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_TexCoord4f(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_TexCoord4fv(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MultiTexCoord1f(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MultiTexCoord1fv(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MultiTexCoord2f(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MultiTexCoord2fv(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MultiTexCoord3f(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MultiTexCoord3fv(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MultiTexCoord4f(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( lua_type(L,6)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MultiTexCoord4fv(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_VertexAttrib1f(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_VertexAttrib1fv(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_VertexAttrib2f(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_VertexAttrib2fv(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_VertexAttrib3f(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_VertexAttrib3fv(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_VertexAttrib4f(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( lua_type(L,6)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_VertexAttrib4fv(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Begin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_End(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::GLBeginEndAdapter::GLBeginEndAdapter(osg::State * state = 0)
	static osg::GLBeginEndAdapter* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in osg::GLBeginEndAdapter::GLBeginEndAdapter(osg::State * state = 0) function, expected prototype:\nosg::GLBeginEndAdapter::GLBeginEndAdapter(osg::State * state = 0)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* state=luatop>0 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,1)) : (osg::State*)0;

		return new osg::GLBeginEndAdapter(state);
	}


	// Function binds:
	// void osg::GLBeginEndAdapter::setState(osg::State * state)
	static int _bind_setState(lua_State *L) {
		if (!_lg_typecheck_setState(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GLBeginEndAdapter::setState(osg::State * state) function, expected prototype:\nvoid osg::GLBeginEndAdapter::setState(osg::State * state)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* state=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));

		osg::GLBeginEndAdapter* self=(Luna< osg::GLBeginEndAdapter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GLBeginEndAdapter::setState(osg::State *). Got : '%s'\n%s",typeid(Luna< osg::GLBeginEndAdapter >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setState(state);

		return 0;
	}

	// osg::State * osg::GLBeginEndAdapter::getState()
	static int _bind_getState_overload_1(lua_State *L) {
		if (!_lg_typecheck_getState_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::State * osg::GLBeginEndAdapter::getState() function, expected prototype:\nosg::State * osg::GLBeginEndAdapter::getState()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GLBeginEndAdapter* self=(Luna< osg::GLBeginEndAdapter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::State * osg::GLBeginEndAdapter::getState(). Got : '%s'\n%s",typeid(Luna< osg::GLBeginEndAdapter >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::State * lret = self->getState();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::State >::push(L,lret,false);

		return 1;
	}

	// const osg::State * osg::GLBeginEndAdapter::getState() const
	static int _bind_getState_overload_2(lua_State *L) {
		if (!_lg_typecheck_getState_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::State * osg::GLBeginEndAdapter::getState() const function, expected prototype:\nconst osg::State * osg::GLBeginEndAdapter::getState() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GLBeginEndAdapter* self=(Luna< osg::GLBeginEndAdapter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::State * osg::GLBeginEndAdapter::getState() const. Got : '%s'\n%s",typeid(Luna< osg::GLBeginEndAdapter >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::State * lret = self->getState();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::State >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::GLBeginEndAdapter::getState
	static int _bind_getState(lua_State *L) {
		if (_lg_typecheck_getState_overload_1(L)) return _bind_getState_overload_1(L);
		if (_lg_typecheck_getState_overload_2(L)) return _bind_getState_overload_2(L);

		luaL_error(L, "error in function getState, cannot match any of the overloads for function getState:\n  getState()\n  getState()\n");
		return 0;
	}

	// void osg::GLBeginEndAdapter::setMatrixMode(osg::GLBeginEndAdapter::MatrixMode mode)
	static int _bind_setMatrixMode_overload_1(lua_State *L) {
		if (!_lg_typecheck_setMatrixMode_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GLBeginEndAdapter::setMatrixMode(osg::GLBeginEndAdapter::MatrixMode mode) function, expected prototype:\nvoid osg::GLBeginEndAdapter::setMatrixMode(osg::GLBeginEndAdapter::MatrixMode mode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::GLBeginEndAdapter::MatrixMode mode=(osg::GLBeginEndAdapter::MatrixMode)lua_tointeger(L,2);

		osg::GLBeginEndAdapter* self=(Luna< osg::GLBeginEndAdapter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GLBeginEndAdapter::setMatrixMode(osg::GLBeginEndAdapter::MatrixMode). Got : '%s'\n%s",typeid(Luna< osg::GLBeginEndAdapter >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setMatrixMode(mode);

		return 0;
	}

	// osg::GLBeginEndAdapter::MatrixMode osg::GLBeginEndAdapter::setMatrixMode() const
	static int _bind_setMatrixMode_overload_2(lua_State *L) {
		if (!_lg_typecheck_setMatrixMode_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::GLBeginEndAdapter::MatrixMode osg::GLBeginEndAdapter::setMatrixMode() const function, expected prototype:\nosg::GLBeginEndAdapter::MatrixMode osg::GLBeginEndAdapter::setMatrixMode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GLBeginEndAdapter* self=(Luna< osg::GLBeginEndAdapter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::GLBeginEndAdapter::MatrixMode osg::GLBeginEndAdapter::setMatrixMode() const. Got : '%s'\n%s",typeid(Luna< osg::GLBeginEndAdapter >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::GLBeginEndAdapter::MatrixMode lret = self->setMatrixMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::GLBeginEndAdapter::setMatrixMode
	static int _bind_setMatrixMode(lua_State *L) {
		if (_lg_typecheck_setMatrixMode_overload_1(L)) return _bind_setMatrixMode_overload_1(L);
		if (_lg_typecheck_setMatrixMode_overload_2(L)) return _bind_setMatrixMode_overload_2(L);

		luaL_error(L, "error in function setMatrixMode, cannot match any of the overloads for function setMatrixMode:\n  setMatrixMode(osg::GLBeginEndAdapter::MatrixMode)\n  setMatrixMode()\n");
		return 0;
	}

	// void osg::GLBeginEndAdapter::PushMatrix()
	static int _bind_PushMatrix(lua_State *L) {
		if (!_lg_typecheck_PushMatrix(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GLBeginEndAdapter::PushMatrix() function, expected prototype:\nvoid osg::GLBeginEndAdapter::PushMatrix()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GLBeginEndAdapter* self=(Luna< osg::GLBeginEndAdapter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GLBeginEndAdapter::PushMatrix(). Got : '%s'\n%s",typeid(Luna< osg::GLBeginEndAdapter >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PushMatrix();

		return 0;
	}

	// void osg::GLBeginEndAdapter::PopMatrix()
	static int _bind_PopMatrix(lua_State *L) {
		if (!_lg_typecheck_PopMatrix(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GLBeginEndAdapter::PopMatrix() function, expected prototype:\nvoid osg::GLBeginEndAdapter::PopMatrix()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GLBeginEndAdapter* self=(Luna< osg::GLBeginEndAdapter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GLBeginEndAdapter::PopMatrix(). Got : '%s'\n%s",typeid(Luna< osg::GLBeginEndAdapter >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PopMatrix();

		return 0;
	}

	// void osg::GLBeginEndAdapter::LoadIdentity()
	static int _bind_LoadIdentity(lua_State *L) {
		if (!_lg_typecheck_LoadIdentity(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GLBeginEndAdapter::LoadIdentity() function, expected prototype:\nvoid osg::GLBeginEndAdapter::LoadIdentity()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GLBeginEndAdapter* self=(Luna< osg::GLBeginEndAdapter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GLBeginEndAdapter::LoadIdentity(). Got : '%s'\n%s",typeid(Luna< osg::GLBeginEndAdapter >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LoadIdentity();

		return 0;
	}

	// void osg::GLBeginEndAdapter::LoadMatrixd(const double * m)
	static int _bind_LoadMatrixd(lua_State *L) {
		if (!_lg_typecheck_LoadMatrixd(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GLBeginEndAdapter::LoadMatrixd(const double * m) function, expected prototype:\nvoid osg::GLBeginEndAdapter::LoadMatrixd(const double * m)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const double* m=(const double*)Luna< void >::check(L,2);

		osg::GLBeginEndAdapter* self=(Luna< osg::GLBeginEndAdapter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GLBeginEndAdapter::LoadMatrixd(const double *). Got : '%s'\n%s",typeid(Luna< osg::GLBeginEndAdapter >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LoadMatrixd(m);

		return 0;
	}

	// void osg::GLBeginEndAdapter::MultMatrixd(const double * m)
	static int _bind_MultMatrixd(lua_State *L) {
		if (!_lg_typecheck_MultMatrixd(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GLBeginEndAdapter::MultMatrixd(const double * m) function, expected prototype:\nvoid osg::GLBeginEndAdapter::MultMatrixd(const double * m)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const double* m=(const double*)Luna< void >::check(L,2);

		osg::GLBeginEndAdapter* self=(Luna< osg::GLBeginEndAdapter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GLBeginEndAdapter::MultMatrixd(const double *). Got : '%s'\n%s",typeid(Luna< osg::GLBeginEndAdapter >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->MultMatrixd(m);

		return 0;
	}

	// void osg::GLBeginEndAdapter::Translatef(float x, float y, float z)
	static int _bind_Translatef(lua_State *L) {
		if (!_lg_typecheck_Translatef(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GLBeginEndAdapter::Translatef(float x, float y, float z) function, expected prototype:\nvoid osg::GLBeginEndAdapter::Translatef(float x, float y, float z)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float x=(float)lua_tonumber(L,2);
		float y=(float)lua_tonumber(L,3);
		float z=(float)lua_tonumber(L,4);

		osg::GLBeginEndAdapter* self=(Luna< osg::GLBeginEndAdapter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GLBeginEndAdapter::Translatef(float, float, float). Got : '%s'\n%s",typeid(Luna< osg::GLBeginEndAdapter >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Translatef(x, y, z);

		return 0;
	}

	// void osg::GLBeginEndAdapter::Scalef(float x, float y, float z)
	static int _bind_Scalef(lua_State *L) {
		if (!_lg_typecheck_Scalef(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GLBeginEndAdapter::Scalef(float x, float y, float z) function, expected prototype:\nvoid osg::GLBeginEndAdapter::Scalef(float x, float y, float z)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float x=(float)lua_tonumber(L,2);
		float y=(float)lua_tonumber(L,3);
		float z=(float)lua_tonumber(L,4);

		osg::GLBeginEndAdapter* self=(Luna< osg::GLBeginEndAdapter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GLBeginEndAdapter::Scalef(float, float, float). Got : '%s'\n%s",typeid(Luna< osg::GLBeginEndAdapter >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Scalef(x, y, z);

		return 0;
	}

	// void osg::GLBeginEndAdapter::Rotatef(float angle, float x, float y, float z)
	static int _bind_Rotatef(lua_State *L) {
		if (!_lg_typecheck_Rotatef(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GLBeginEndAdapter::Rotatef(float angle, float x, float y, float z) function, expected prototype:\nvoid osg::GLBeginEndAdapter::Rotatef(float angle, float x, float y, float z)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float angle=(float)lua_tonumber(L,2);
		float x=(float)lua_tonumber(L,3);
		float y=(float)lua_tonumber(L,4);
		float z=(float)lua_tonumber(L,5);

		osg::GLBeginEndAdapter* self=(Luna< osg::GLBeginEndAdapter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GLBeginEndAdapter::Rotatef(float, float, float, float). Got : '%s'\n%s",typeid(Luna< osg::GLBeginEndAdapter >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Rotatef(angle, x, y, z);

		return 0;
	}

	// void osg::GLBeginEndAdapter::Translated(double x, double y, double z)
	static int _bind_Translated(lua_State *L) {
		if (!_lg_typecheck_Translated(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GLBeginEndAdapter::Translated(double x, double y, double z) function, expected prototype:\nvoid osg::GLBeginEndAdapter::Translated(double x, double y, double z)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double x=(double)lua_tonumber(L,2);
		double y=(double)lua_tonumber(L,3);
		double z=(double)lua_tonumber(L,4);

		osg::GLBeginEndAdapter* self=(Luna< osg::GLBeginEndAdapter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GLBeginEndAdapter::Translated(double, double, double). Got : '%s'\n%s",typeid(Luna< osg::GLBeginEndAdapter >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Translated(x, y, z);

		return 0;
	}

	// void osg::GLBeginEndAdapter::Scaled(double x, double y, double z)
	static int _bind_Scaled(lua_State *L) {
		if (!_lg_typecheck_Scaled(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GLBeginEndAdapter::Scaled(double x, double y, double z) function, expected prototype:\nvoid osg::GLBeginEndAdapter::Scaled(double x, double y, double z)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double x=(double)lua_tonumber(L,2);
		double y=(double)lua_tonumber(L,3);
		double z=(double)lua_tonumber(L,4);

		osg::GLBeginEndAdapter* self=(Luna< osg::GLBeginEndAdapter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GLBeginEndAdapter::Scaled(double, double, double). Got : '%s'\n%s",typeid(Luna< osg::GLBeginEndAdapter >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Scaled(x, y, z);

		return 0;
	}

	// void osg::GLBeginEndAdapter::Rotated(double angle, double x, double y, double z)
	static int _bind_Rotated(lua_State *L) {
		if (!_lg_typecheck_Rotated(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GLBeginEndAdapter::Rotated(double angle, double x, double y, double z) function, expected prototype:\nvoid osg::GLBeginEndAdapter::Rotated(double angle, double x, double y, double z)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double angle=(double)lua_tonumber(L,2);
		double x=(double)lua_tonumber(L,3);
		double y=(double)lua_tonumber(L,4);
		double z=(double)lua_tonumber(L,5);

		osg::GLBeginEndAdapter* self=(Luna< osg::GLBeginEndAdapter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GLBeginEndAdapter::Rotated(double, double, double, double). Got : '%s'\n%s",typeid(Luna< osg::GLBeginEndAdapter >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Rotated(angle, x, y, z);

		return 0;
	}

	// void osg::GLBeginEndAdapter::Vertex3f(float x, float y, float z)
	static int _bind_Vertex3f(lua_State *L) {
		if (!_lg_typecheck_Vertex3f(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GLBeginEndAdapter::Vertex3f(float x, float y, float z) function, expected prototype:\nvoid osg::GLBeginEndAdapter::Vertex3f(float x, float y, float z)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float x=(float)lua_tonumber(L,2);
		float y=(float)lua_tonumber(L,3);
		float z=(float)lua_tonumber(L,4);

		osg::GLBeginEndAdapter* self=(Luna< osg::GLBeginEndAdapter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GLBeginEndAdapter::Vertex3f(float, float, float). Got : '%s'\n%s",typeid(Luna< osg::GLBeginEndAdapter >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Vertex3f(x, y, z);

		return 0;
	}

	// void osg::GLBeginEndAdapter::Vertex3fv(const float * v)
	static int _bind_Vertex3fv(lua_State *L) {
		if (!_lg_typecheck_Vertex3fv(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GLBeginEndAdapter::Vertex3fv(const float * v) function, expected prototype:\nvoid osg::GLBeginEndAdapter::Vertex3fv(const float * v)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const float* v=(const float*)Luna< void >::check(L,2);

		osg::GLBeginEndAdapter* self=(Luna< osg::GLBeginEndAdapter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GLBeginEndAdapter::Vertex3fv(const float *). Got : '%s'\n%s",typeid(Luna< osg::GLBeginEndAdapter >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Vertex3fv(v);

		return 0;
	}

	// void osg::GLBeginEndAdapter::Vertex3dv(double x, double y, double z)
	static int _bind_Vertex3dv_overload_1(lua_State *L) {
		if (!_lg_typecheck_Vertex3dv_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GLBeginEndAdapter::Vertex3dv(double x, double y, double z) function, expected prototype:\nvoid osg::GLBeginEndAdapter::Vertex3dv(double x, double y, double z)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double x=(double)lua_tonumber(L,2);
		double y=(double)lua_tonumber(L,3);
		double z=(double)lua_tonumber(L,4);

		osg::GLBeginEndAdapter* self=(Luna< osg::GLBeginEndAdapter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GLBeginEndAdapter::Vertex3dv(double, double, double). Got : '%s'\n%s",typeid(Luna< osg::GLBeginEndAdapter >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Vertex3dv(x, y, z);

		return 0;
	}

	// void osg::GLBeginEndAdapter::Vertex3dv(const double * v)
	static int _bind_Vertex3dv_overload_2(lua_State *L) {
		if (!_lg_typecheck_Vertex3dv_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GLBeginEndAdapter::Vertex3dv(const double * v) function, expected prototype:\nvoid osg::GLBeginEndAdapter::Vertex3dv(const double * v)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const double* v=(const double*)Luna< void >::check(L,2);

		osg::GLBeginEndAdapter* self=(Luna< osg::GLBeginEndAdapter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GLBeginEndAdapter::Vertex3dv(const double *). Got : '%s'\n%s",typeid(Luna< osg::GLBeginEndAdapter >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Vertex3dv(v);

		return 0;
	}

	// Overload binder for osg::GLBeginEndAdapter::Vertex3dv
	static int _bind_Vertex3dv(lua_State *L) {
		if (_lg_typecheck_Vertex3dv_overload_1(L)) return _bind_Vertex3dv_overload_1(L);
		if (_lg_typecheck_Vertex3dv_overload_2(L)) return _bind_Vertex3dv_overload_2(L);

		luaL_error(L, "error in function Vertex3dv, cannot match any of the overloads for function Vertex3dv:\n  Vertex3dv(double, double, double)\n  Vertex3dv(const double *)\n");
		return 0;
	}

	// void osg::GLBeginEndAdapter::Color4f(float red, float green, float blue, float alpha)
	static int _bind_Color4f(lua_State *L) {
		if (!_lg_typecheck_Color4f(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GLBeginEndAdapter::Color4f(float red, float green, float blue, float alpha) function, expected prototype:\nvoid osg::GLBeginEndAdapter::Color4f(float red, float green, float blue, float alpha)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float red=(float)lua_tonumber(L,2);
		float green=(float)lua_tonumber(L,3);
		float blue=(float)lua_tonumber(L,4);
		float alpha=(float)lua_tonumber(L,5);

		osg::GLBeginEndAdapter* self=(Luna< osg::GLBeginEndAdapter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GLBeginEndAdapter::Color4f(float, float, float, float). Got : '%s'\n%s",typeid(Luna< osg::GLBeginEndAdapter >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Color4f(red, green, blue, alpha);

		return 0;
	}

	// void osg::GLBeginEndAdapter::Color3fv(const float * c)
	static int _bind_Color3fv(lua_State *L) {
		if (!_lg_typecheck_Color3fv(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GLBeginEndAdapter::Color3fv(const float * c) function, expected prototype:\nvoid osg::GLBeginEndAdapter::Color3fv(const float * c)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const float* c=(const float*)Luna< void >::check(L,2);

		osg::GLBeginEndAdapter* self=(Luna< osg::GLBeginEndAdapter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GLBeginEndAdapter::Color3fv(const float *). Got : '%s'\n%s",typeid(Luna< osg::GLBeginEndAdapter >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Color3fv(c);

		return 0;
	}

	// void osg::GLBeginEndAdapter::Color4fv(const float * c)
	static int _bind_Color4fv(lua_State *L) {
		if (!_lg_typecheck_Color4fv(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GLBeginEndAdapter::Color4fv(const float * c) function, expected prototype:\nvoid osg::GLBeginEndAdapter::Color4fv(const float * c)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const float* c=(const float*)Luna< void >::check(L,2);

		osg::GLBeginEndAdapter* self=(Luna< osg::GLBeginEndAdapter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GLBeginEndAdapter::Color4fv(const float *). Got : '%s'\n%s",typeid(Luna< osg::GLBeginEndAdapter >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Color4fv(c);

		return 0;
	}

	// void osg::GLBeginEndAdapter::Color4ubv(const unsigned char * c)
	static int _bind_Color4ubv(lua_State *L) {
		if (!_lg_typecheck_Color4ubv(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GLBeginEndAdapter::Color4ubv(const unsigned char * c) function, expected prototype:\nvoid osg::GLBeginEndAdapter::Color4ubv(const unsigned char * c)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char c = (unsigned char)(lua_tointeger(L,2));

		osg::GLBeginEndAdapter* self=(Luna< osg::GLBeginEndAdapter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GLBeginEndAdapter::Color4ubv(const unsigned char *). Got : '%s'\n%s",typeid(Luna< osg::GLBeginEndAdapter >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Color4ubv(&c);

		return 0;
	}

	// void osg::GLBeginEndAdapter::Normal3f(float x, float y, float z)
	static int _bind_Normal3f(lua_State *L) {
		if (!_lg_typecheck_Normal3f(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GLBeginEndAdapter::Normal3f(float x, float y, float z) function, expected prototype:\nvoid osg::GLBeginEndAdapter::Normal3f(float x, float y, float z)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float x=(float)lua_tonumber(L,2);
		float y=(float)lua_tonumber(L,3);
		float z=(float)lua_tonumber(L,4);

		osg::GLBeginEndAdapter* self=(Luna< osg::GLBeginEndAdapter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GLBeginEndAdapter::Normal3f(float, float, float). Got : '%s'\n%s",typeid(Luna< osg::GLBeginEndAdapter >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Normal3f(x, y, z);

		return 0;
	}

	// void osg::GLBeginEndAdapter::Normal3fv(const float * n)
	static int _bind_Normal3fv(lua_State *L) {
		if (!_lg_typecheck_Normal3fv(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GLBeginEndAdapter::Normal3fv(const float * n) function, expected prototype:\nvoid osg::GLBeginEndAdapter::Normal3fv(const float * n)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const float* n=(const float*)Luna< void >::check(L,2);

		osg::GLBeginEndAdapter* self=(Luna< osg::GLBeginEndAdapter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GLBeginEndAdapter::Normal3fv(const float *). Got : '%s'\n%s",typeid(Luna< osg::GLBeginEndAdapter >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Normal3fv(n);

		return 0;
	}

	// void osg::GLBeginEndAdapter::TexCoord1f(float x)
	static int _bind_TexCoord1f(lua_State *L) {
		if (!_lg_typecheck_TexCoord1f(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GLBeginEndAdapter::TexCoord1f(float x) function, expected prototype:\nvoid osg::GLBeginEndAdapter::TexCoord1f(float x)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float x=(float)lua_tonumber(L,2);

		osg::GLBeginEndAdapter* self=(Luna< osg::GLBeginEndAdapter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GLBeginEndAdapter::TexCoord1f(float). Got : '%s'\n%s",typeid(Luna< osg::GLBeginEndAdapter >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TexCoord1f(x);

		return 0;
	}

	// void osg::GLBeginEndAdapter::TexCoord1fv(const float * tc)
	static int _bind_TexCoord1fv(lua_State *L) {
		if (!_lg_typecheck_TexCoord1fv(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GLBeginEndAdapter::TexCoord1fv(const float * tc) function, expected prototype:\nvoid osg::GLBeginEndAdapter::TexCoord1fv(const float * tc)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const float* tc=(const float*)Luna< void >::check(L,2);

		osg::GLBeginEndAdapter* self=(Luna< osg::GLBeginEndAdapter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GLBeginEndAdapter::TexCoord1fv(const float *). Got : '%s'\n%s",typeid(Luna< osg::GLBeginEndAdapter >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TexCoord1fv(tc);

		return 0;
	}

	// void osg::GLBeginEndAdapter::TexCoord2f(float x, float y)
	static int _bind_TexCoord2f(lua_State *L) {
		if (!_lg_typecheck_TexCoord2f(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GLBeginEndAdapter::TexCoord2f(float x, float y) function, expected prototype:\nvoid osg::GLBeginEndAdapter::TexCoord2f(float x, float y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float x=(float)lua_tonumber(L,2);
		float y=(float)lua_tonumber(L,3);

		osg::GLBeginEndAdapter* self=(Luna< osg::GLBeginEndAdapter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GLBeginEndAdapter::TexCoord2f(float, float). Got : '%s'\n%s",typeid(Luna< osg::GLBeginEndAdapter >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TexCoord2f(x, y);

		return 0;
	}

	// void osg::GLBeginEndAdapter::TexCoord2fv(const float * tc)
	static int _bind_TexCoord2fv(lua_State *L) {
		if (!_lg_typecheck_TexCoord2fv(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GLBeginEndAdapter::TexCoord2fv(const float * tc) function, expected prototype:\nvoid osg::GLBeginEndAdapter::TexCoord2fv(const float * tc)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const float* tc=(const float*)Luna< void >::check(L,2);

		osg::GLBeginEndAdapter* self=(Luna< osg::GLBeginEndAdapter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GLBeginEndAdapter::TexCoord2fv(const float *). Got : '%s'\n%s",typeid(Luna< osg::GLBeginEndAdapter >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TexCoord2fv(tc);

		return 0;
	}

	// void osg::GLBeginEndAdapter::TexCoord3f(float x, float y, float z)
	static int _bind_TexCoord3f(lua_State *L) {
		if (!_lg_typecheck_TexCoord3f(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GLBeginEndAdapter::TexCoord3f(float x, float y, float z) function, expected prototype:\nvoid osg::GLBeginEndAdapter::TexCoord3f(float x, float y, float z)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float x=(float)lua_tonumber(L,2);
		float y=(float)lua_tonumber(L,3);
		float z=(float)lua_tonumber(L,4);

		osg::GLBeginEndAdapter* self=(Luna< osg::GLBeginEndAdapter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GLBeginEndAdapter::TexCoord3f(float, float, float). Got : '%s'\n%s",typeid(Luna< osg::GLBeginEndAdapter >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TexCoord3f(x, y, z);

		return 0;
	}

	// void osg::GLBeginEndAdapter::TexCoord3fv(const float * tc)
	static int _bind_TexCoord3fv(lua_State *L) {
		if (!_lg_typecheck_TexCoord3fv(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GLBeginEndAdapter::TexCoord3fv(const float * tc) function, expected prototype:\nvoid osg::GLBeginEndAdapter::TexCoord3fv(const float * tc)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const float* tc=(const float*)Luna< void >::check(L,2);

		osg::GLBeginEndAdapter* self=(Luna< osg::GLBeginEndAdapter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GLBeginEndAdapter::TexCoord3fv(const float *). Got : '%s'\n%s",typeid(Luna< osg::GLBeginEndAdapter >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TexCoord3fv(tc);

		return 0;
	}

	// void osg::GLBeginEndAdapter::TexCoord4f(float x, float y, float z, float w)
	static int _bind_TexCoord4f(lua_State *L) {
		if (!_lg_typecheck_TexCoord4f(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GLBeginEndAdapter::TexCoord4f(float x, float y, float z, float w) function, expected prototype:\nvoid osg::GLBeginEndAdapter::TexCoord4f(float x, float y, float z, float w)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float x=(float)lua_tonumber(L,2);
		float y=(float)lua_tonumber(L,3);
		float z=(float)lua_tonumber(L,4);
		float w=(float)lua_tonumber(L,5);

		osg::GLBeginEndAdapter* self=(Luna< osg::GLBeginEndAdapter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GLBeginEndAdapter::TexCoord4f(float, float, float, float). Got : '%s'\n%s",typeid(Luna< osg::GLBeginEndAdapter >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TexCoord4f(x, y, z, w);

		return 0;
	}

	// void osg::GLBeginEndAdapter::TexCoord4fv(const float * tc)
	static int _bind_TexCoord4fv(lua_State *L) {
		if (!_lg_typecheck_TexCoord4fv(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GLBeginEndAdapter::TexCoord4fv(const float * tc) function, expected prototype:\nvoid osg::GLBeginEndAdapter::TexCoord4fv(const float * tc)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const float* tc=(const float*)Luna< void >::check(L,2);

		osg::GLBeginEndAdapter* self=(Luna< osg::GLBeginEndAdapter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GLBeginEndAdapter::TexCoord4fv(const float *). Got : '%s'\n%s",typeid(Luna< osg::GLBeginEndAdapter >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TexCoord4fv(tc);

		return 0;
	}

	// void osg::GLBeginEndAdapter::MultiTexCoord1f(unsigned int target, float x)
	static int _bind_MultiTexCoord1f(lua_State *L) {
		if (!_lg_typecheck_MultiTexCoord1f(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GLBeginEndAdapter::MultiTexCoord1f(unsigned int target, float x) function, expected prototype:\nvoid osg::GLBeginEndAdapter::MultiTexCoord1f(unsigned int target, float x)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int target=(unsigned int)lua_tointeger(L,2);
		float x=(float)lua_tonumber(L,3);

		osg::GLBeginEndAdapter* self=(Luna< osg::GLBeginEndAdapter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GLBeginEndAdapter::MultiTexCoord1f(unsigned int, float). Got : '%s'\n%s",typeid(Luna< osg::GLBeginEndAdapter >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->MultiTexCoord1f(target, x);

		return 0;
	}

	// void osg::GLBeginEndAdapter::MultiTexCoord1fv(unsigned int target, const float * tc)
	static int _bind_MultiTexCoord1fv(lua_State *L) {
		if (!_lg_typecheck_MultiTexCoord1fv(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GLBeginEndAdapter::MultiTexCoord1fv(unsigned int target, const float * tc) function, expected prototype:\nvoid osg::GLBeginEndAdapter::MultiTexCoord1fv(unsigned int target, const float * tc)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int target=(unsigned int)lua_tointeger(L,2);
		const float* tc=(const float*)Luna< void >::check(L,3);

		osg::GLBeginEndAdapter* self=(Luna< osg::GLBeginEndAdapter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GLBeginEndAdapter::MultiTexCoord1fv(unsigned int, const float *). Got : '%s'\n%s",typeid(Luna< osg::GLBeginEndAdapter >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->MultiTexCoord1fv(target, tc);

		return 0;
	}

	// void osg::GLBeginEndAdapter::MultiTexCoord2f(unsigned int target, float x, float y)
	static int _bind_MultiTexCoord2f(lua_State *L) {
		if (!_lg_typecheck_MultiTexCoord2f(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GLBeginEndAdapter::MultiTexCoord2f(unsigned int target, float x, float y) function, expected prototype:\nvoid osg::GLBeginEndAdapter::MultiTexCoord2f(unsigned int target, float x, float y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int target=(unsigned int)lua_tointeger(L,2);
		float x=(float)lua_tonumber(L,3);
		float y=(float)lua_tonumber(L,4);

		osg::GLBeginEndAdapter* self=(Luna< osg::GLBeginEndAdapter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GLBeginEndAdapter::MultiTexCoord2f(unsigned int, float, float). Got : '%s'\n%s",typeid(Luna< osg::GLBeginEndAdapter >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->MultiTexCoord2f(target, x, y);

		return 0;
	}

	// void osg::GLBeginEndAdapter::MultiTexCoord2fv(unsigned int target, const float * tc)
	static int _bind_MultiTexCoord2fv(lua_State *L) {
		if (!_lg_typecheck_MultiTexCoord2fv(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GLBeginEndAdapter::MultiTexCoord2fv(unsigned int target, const float * tc) function, expected prototype:\nvoid osg::GLBeginEndAdapter::MultiTexCoord2fv(unsigned int target, const float * tc)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int target=(unsigned int)lua_tointeger(L,2);
		const float* tc=(const float*)Luna< void >::check(L,3);

		osg::GLBeginEndAdapter* self=(Luna< osg::GLBeginEndAdapter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GLBeginEndAdapter::MultiTexCoord2fv(unsigned int, const float *). Got : '%s'\n%s",typeid(Luna< osg::GLBeginEndAdapter >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->MultiTexCoord2fv(target, tc);

		return 0;
	}

	// void osg::GLBeginEndAdapter::MultiTexCoord3f(unsigned int target, float x, float y, float z)
	static int _bind_MultiTexCoord3f(lua_State *L) {
		if (!_lg_typecheck_MultiTexCoord3f(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GLBeginEndAdapter::MultiTexCoord3f(unsigned int target, float x, float y, float z) function, expected prototype:\nvoid osg::GLBeginEndAdapter::MultiTexCoord3f(unsigned int target, float x, float y, float z)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int target=(unsigned int)lua_tointeger(L,2);
		float x=(float)lua_tonumber(L,3);
		float y=(float)lua_tonumber(L,4);
		float z=(float)lua_tonumber(L,5);

		osg::GLBeginEndAdapter* self=(Luna< osg::GLBeginEndAdapter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GLBeginEndAdapter::MultiTexCoord3f(unsigned int, float, float, float). Got : '%s'\n%s",typeid(Luna< osg::GLBeginEndAdapter >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->MultiTexCoord3f(target, x, y, z);

		return 0;
	}

	// void osg::GLBeginEndAdapter::MultiTexCoord3fv(unsigned int target, const float * tc)
	static int _bind_MultiTexCoord3fv(lua_State *L) {
		if (!_lg_typecheck_MultiTexCoord3fv(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GLBeginEndAdapter::MultiTexCoord3fv(unsigned int target, const float * tc) function, expected prototype:\nvoid osg::GLBeginEndAdapter::MultiTexCoord3fv(unsigned int target, const float * tc)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int target=(unsigned int)lua_tointeger(L,2);
		const float* tc=(const float*)Luna< void >::check(L,3);

		osg::GLBeginEndAdapter* self=(Luna< osg::GLBeginEndAdapter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GLBeginEndAdapter::MultiTexCoord3fv(unsigned int, const float *). Got : '%s'\n%s",typeid(Luna< osg::GLBeginEndAdapter >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->MultiTexCoord3fv(target, tc);

		return 0;
	}

	// void osg::GLBeginEndAdapter::MultiTexCoord4f(unsigned int target, float x, float y, float z, float w)
	static int _bind_MultiTexCoord4f(lua_State *L) {
		if (!_lg_typecheck_MultiTexCoord4f(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GLBeginEndAdapter::MultiTexCoord4f(unsigned int target, float x, float y, float z, float w) function, expected prototype:\nvoid osg::GLBeginEndAdapter::MultiTexCoord4f(unsigned int target, float x, float y, float z, float w)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int target=(unsigned int)lua_tointeger(L,2);
		float x=(float)lua_tonumber(L,3);
		float y=(float)lua_tonumber(L,4);
		float z=(float)lua_tonumber(L,5);
		float w=(float)lua_tonumber(L,6);

		osg::GLBeginEndAdapter* self=(Luna< osg::GLBeginEndAdapter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GLBeginEndAdapter::MultiTexCoord4f(unsigned int, float, float, float, float). Got : '%s'\n%s",typeid(Luna< osg::GLBeginEndAdapter >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->MultiTexCoord4f(target, x, y, z, w);

		return 0;
	}

	// void osg::GLBeginEndAdapter::MultiTexCoord4fv(unsigned int target, const float * tc)
	static int _bind_MultiTexCoord4fv(lua_State *L) {
		if (!_lg_typecheck_MultiTexCoord4fv(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GLBeginEndAdapter::MultiTexCoord4fv(unsigned int target, const float * tc) function, expected prototype:\nvoid osg::GLBeginEndAdapter::MultiTexCoord4fv(unsigned int target, const float * tc)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int target=(unsigned int)lua_tointeger(L,2);
		const float* tc=(const float*)Luna< void >::check(L,3);

		osg::GLBeginEndAdapter* self=(Luna< osg::GLBeginEndAdapter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GLBeginEndAdapter::MultiTexCoord4fv(unsigned int, const float *). Got : '%s'\n%s",typeid(Luna< osg::GLBeginEndAdapter >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->MultiTexCoord4fv(target, tc);

		return 0;
	}

	// void osg::GLBeginEndAdapter::VertexAttrib1f(unsigned int unit, float x)
	static int _bind_VertexAttrib1f(lua_State *L) {
		if (!_lg_typecheck_VertexAttrib1f(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GLBeginEndAdapter::VertexAttrib1f(unsigned int unit, float x) function, expected prototype:\nvoid osg::GLBeginEndAdapter::VertexAttrib1f(unsigned int unit, float x)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int unit=(unsigned int)lua_tointeger(L,2);
		float x=(float)lua_tonumber(L,3);

		osg::GLBeginEndAdapter* self=(Luna< osg::GLBeginEndAdapter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GLBeginEndAdapter::VertexAttrib1f(unsigned int, float). Got : '%s'\n%s",typeid(Luna< osg::GLBeginEndAdapter >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->VertexAttrib1f(unit, x);

		return 0;
	}

	// void osg::GLBeginEndAdapter::VertexAttrib1fv(unsigned int unit, const float * tc)
	static int _bind_VertexAttrib1fv(lua_State *L) {
		if (!_lg_typecheck_VertexAttrib1fv(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GLBeginEndAdapter::VertexAttrib1fv(unsigned int unit, const float * tc) function, expected prototype:\nvoid osg::GLBeginEndAdapter::VertexAttrib1fv(unsigned int unit, const float * tc)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int unit=(unsigned int)lua_tointeger(L,2);
		const float* tc=(const float*)Luna< void >::check(L,3);

		osg::GLBeginEndAdapter* self=(Luna< osg::GLBeginEndAdapter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GLBeginEndAdapter::VertexAttrib1fv(unsigned int, const float *). Got : '%s'\n%s",typeid(Luna< osg::GLBeginEndAdapter >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->VertexAttrib1fv(unit, tc);

		return 0;
	}

	// void osg::GLBeginEndAdapter::VertexAttrib2f(unsigned int unit, float x, float y)
	static int _bind_VertexAttrib2f(lua_State *L) {
		if (!_lg_typecheck_VertexAttrib2f(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GLBeginEndAdapter::VertexAttrib2f(unsigned int unit, float x, float y) function, expected prototype:\nvoid osg::GLBeginEndAdapter::VertexAttrib2f(unsigned int unit, float x, float y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int unit=(unsigned int)lua_tointeger(L,2);
		float x=(float)lua_tonumber(L,3);
		float y=(float)lua_tonumber(L,4);

		osg::GLBeginEndAdapter* self=(Luna< osg::GLBeginEndAdapter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GLBeginEndAdapter::VertexAttrib2f(unsigned int, float, float). Got : '%s'\n%s",typeid(Luna< osg::GLBeginEndAdapter >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->VertexAttrib2f(unit, x, y);

		return 0;
	}

	// void osg::GLBeginEndAdapter::VertexAttrib2fv(unsigned int unit, const float * tc)
	static int _bind_VertexAttrib2fv(lua_State *L) {
		if (!_lg_typecheck_VertexAttrib2fv(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GLBeginEndAdapter::VertexAttrib2fv(unsigned int unit, const float * tc) function, expected prototype:\nvoid osg::GLBeginEndAdapter::VertexAttrib2fv(unsigned int unit, const float * tc)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int unit=(unsigned int)lua_tointeger(L,2);
		const float* tc=(const float*)Luna< void >::check(L,3);

		osg::GLBeginEndAdapter* self=(Luna< osg::GLBeginEndAdapter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GLBeginEndAdapter::VertexAttrib2fv(unsigned int, const float *). Got : '%s'\n%s",typeid(Luna< osg::GLBeginEndAdapter >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->VertexAttrib2fv(unit, tc);

		return 0;
	}

	// void osg::GLBeginEndAdapter::VertexAttrib3f(unsigned int unit, float x, float y, float z)
	static int _bind_VertexAttrib3f(lua_State *L) {
		if (!_lg_typecheck_VertexAttrib3f(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GLBeginEndAdapter::VertexAttrib3f(unsigned int unit, float x, float y, float z) function, expected prototype:\nvoid osg::GLBeginEndAdapter::VertexAttrib3f(unsigned int unit, float x, float y, float z)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int unit=(unsigned int)lua_tointeger(L,2);
		float x=(float)lua_tonumber(L,3);
		float y=(float)lua_tonumber(L,4);
		float z=(float)lua_tonumber(L,5);

		osg::GLBeginEndAdapter* self=(Luna< osg::GLBeginEndAdapter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GLBeginEndAdapter::VertexAttrib3f(unsigned int, float, float, float). Got : '%s'\n%s",typeid(Luna< osg::GLBeginEndAdapter >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->VertexAttrib3f(unit, x, y, z);

		return 0;
	}

	// void osg::GLBeginEndAdapter::VertexAttrib3fv(unsigned int unit, const float * tc)
	static int _bind_VertexAttrib3fv(lua_State *L) {
		if (!_lg_typecheck_VertexAttrib3fv(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GLBeginEndAdapter::VertexAttrib3fv(unsigned int unit, const float * tc) function, expected prototype:\nvoid osg::GLBeginEndAdapter::VertexAttrib3fv(unsigned int unit, const float * tc)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int unit=(unsigned int)lua_tointeger(L,2);
		const float* tc=(const float*)Luna< void >::check(L,3);

		osg::GLBeginEndAdapter* self=(Luna< osg::GLBeginEndAdapter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GLBeginEndAdapter::VertexAttrib3fv(unsigned int, const float *). Got : '%s'\n%s",typeid(Luna< osg::GLBeginEndAdapter >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->VertexAttrib3fv(unit, tc);

		return 0;
	}

	// void osg::GLBeginEndAdapter::VertexAttrib4f(unsigned int unit, float x, float y, float z, float w)
	static int _bind_VertexAttrib4f(lua_State *L) {
		if (!_lg_typecheck_VertexAttrib4f(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GLBeginEndAdapter::VertexAttrib4f(unsigned int unit, float x, float y, float z, float w) function, expected prototype:\nvoid osg::GLBeginEndAdapter::VertexAttrib4f(unsigned int unit, float x, float y, float z, float w)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int unit=(unsigned int)lua_tointeger(L,2);
		float x=(float)lua_tonumber(L,3);
		float y=(float)lua_tonumber(L,4);
		float z=(float)lua_tonumber(L,5);
		float w=(float)lua_tonumber(L,6);

		osg::GLBeginEndAdapter* self=(Luna< osg::GLBeginEndAdapter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GLBeginEndAdapter::VertexAttrib4f(unsigned int, float, float, float, float). Got : '%s'\n%s",typeid(Luna< osg::GLBeginEndAdapter >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->VertexAttrib4f(unit, x, y, z, w);

		return 0;
	}

	// void osg::GLBeginEndAdapter::VertexAttrib4fv(unsigned int unit, const float * tc)
	static int _bind_VertexAttrib4fv(lua_State *L) {
		if (!_lg_typecheck_VertexAttrib4fv(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GLBeginEndAdapter::VertexAttrib4fv(unsigned int unit, const float * tc) function, expected prototype:\nvoid osg::GLBeginEndAdapter::VertexAttrib4fv(unsigned int unit, const float * tc)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int unit=(unsigned int)lua_tointeger(L,2);
		const float* tc=(const float*)Luna< void >::check(L,3);

		osg::GLBeginEndAdapter* self=(Luna< osg::GLBeginEndAdapter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GLBeginEndAdapter::VertexAttrib4fv(unsigned int, const float *). Got : '%s'\n%s",typeid(Luna< osg::GLBeginEndAdapter >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->VertexAttrib4fv(unit, tc);

		return 0;
	}

	// void osg::GLBeginEndAdapter::Begin(unsigned int mode)
	static int _bind_Begin(lua_State *L) {
		if (!_lg_typecheck_Begin(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GLBeginEndAdapter::Begin(unsigned int mode) function, expected prototype:\nvoid osg::GLBeginEndAdapter::Begin(unsigned int mode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,2);

		osg::GLBeginEndAdapter* self=(Luna< osg::GLBeginEndAdapter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GLBeginEndAdapter::Begin(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::GLBeginEndAdapter >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Begin(mode);

		return 0;
	}

	// void osg::GLBeginEndAdapter::End()
	static int _bind_End(lua_State *L) {
		if (!_lg_typecheck_End(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GLBeginEndAdapter::End() function, expected prototype:\nvoid osg::GLBeginEndAdapter::End()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GLBeginEndAdapter* self=(Luna< osg::GLBeginEndAdapter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GLBeginEndAdapter::End(). Got : '%s'\n%s",typeid(Luna< osg::GLBeginEndAdapter >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->End();

		return 0;
	}

	// void osg::GLBeginEndAdapter::reset()
	static int _bind_reset(lua_State *L) {
		if (!_lg_typecheck_reset(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GLBeginEndAdapter::reset() function, expected prototype:\nvoid osg::GLBeginEndAdapter::reset()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GLBeginEndAdapter* self=(Luna< osg::GLBeginEndAdapter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GLBeginEndAdapter::reset(). Got : '%s'\n%s",typeid(Luna< osg::GLBeginEndAdapter >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->reset();

		return 0;
	}


	// Operator binds:

};

osg::GLBeginEndAdapter* LunaTraits< osg::GLBeginEndAdapter >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_GLBeginEndAdapter::_bind_ctor(L);
}

void LunaTraits< osg::GLBeginEndAdapter >::_bind_dtor(osg::GLBeginEndAdapter* obj) {
	delete obj;
}

const char LunaTraits< osg::GLBeginEndAdapter >::className[] = "GLBeginEndAdapter";
const char LunaTraits< osg::GLBeginEndAdapter >::fullName[] = "osg::GLBeginEndAdapter";
const char LunaTraits< osg::GLBeginEndAdapter >::moduleName[] = "osg";
const char* LunaTraits< osg::GLBeginEndAdapter >::parents[] = {0};
const int LunaTraits< osg::GLBeginEndAdapter >::hash = 22643526;
const int LunaTraits< osg::GLBeginEndAdapter >::uniqueIDs[] = {22643526,0};

luna_RegType LunaTraits< osg::GLBeginEndAdapter >::methods[] = {
	{"setState", &luna_wrapper_osg_GLBeginEndAdapter::_bind_setState},
	{"getState", &luna_wrapper_osg_GLBeginEndAdapter::_bind_getState},
	{"setMatrixMode", &luna_wrapper_osg_GLBeginEndAdapter::_bind_setMatrixMode},
	{"PushMatrix", &luna_wrapper_osg_GLBeginEndAdapter::_bind_PushMatrix},
	{"PopMatrix", &luna_wrapper_osg_GLBeginEndAdapter::_bind_PopMatrix},
	{"LoadIdentity", &luna_wrapper_osg_GLBeginEndAdapter::_bind_LoadIdentity},
	{"LoadMatrixd", &luna_wrapper_osg_GLBeginEndAdapter::_bind_LoadMatrixd},
	{"MultMatrixd", &luna_wrapper_osg_GLBeginEndAdapter::_bind_MultMatrixd},
	{"Translatef", &luna_wrapper_osg_GLBeginEndAdapter::_bind_Translatef},
	{"Scalef", &luna_wrapper_osg_GLBeginEndAdapter::_bind_Scalef},
	{"Rotatef", &luna_wrapper_osg_GLBeginEndAdapter::_bind_Rotatef},
	{"Translated", &luna_wrapper_osg_GLBeginEndAdapter::_bind_Translated},
	{"Scaled", &luna_wrapper_osg_GLBeginEndAdapter::_bind_Scaled},
	{"Rotated", &luna_wrapper_osg_GLBeginEndAdapter::_bind_Rotated},
	{"Vertex3f", &luna_wrapper_osg_GLBeginEndAdapter::_bind_Vertex3f},
	{"Vertex3fv", &luna_wrapper_osg_GLBeginEndAdapter::_bind_Vertex3fv},
	{"Vertex3dv", &luna_wrapper_osg_GLBeginEndAdapter::_bind_Vertex3dv},
	{"Color4f", &luna_wrapper_osg_GLBeginEndAdapter::_bind_Color4f},
	{"Color3fv", &luna_wrapper_osg_GLBeginEndAdapter::_bind_Color3fv},
	{"Color4fv", &luna_wrapper_osg_GLBeginEndAdapter::_bind_Color4fv},
	{"Color4ubv", &luna_wrapper_osg_GLBeginEndAdapter::_bind_Color4ubv},
	{"Normal3f", &luna_wrapper_osg_GLBeginEndAdapter::_bind_Normal3f},
	{"Normal3fv", &luna_wrapper_osg_GLBeginEndAdapter::_bind_Normal3fv},
	{"TexCoord1f", &luna_wrapper_osg_GLBeginEndAdapter::_bind_TexCoord1f},
	{"TexCoord1fv", &luna_wrapper_osg_GLBeginEndAdapter::_bind_TexCoord1fv},
	{"TexCoord2f", &luna_wrapper_osg_GLBeginEndAdapter::_bind_TexCoord2f},
	{"TexCoord2fv", &luna_wrapper_osg_GLBeginEndAdapter::_bind_TexCoord2fv},
	{"TexCoord3f", &luna_wrapper_osg_GLBeginEndAdapter::_bind_TexCoord3f},
	{"TexCoord3fv", &luna_wrapper_osg_GLBeginEndAdapter::_bind_TexCoord3fv},
	{"TexCoord4f", &luna_wrapper_osg_GLBeginEndAdapter::_bind_TexCoord4f},
	{"TexCoord4fv", &luna_wrapper_osg_GLBeginEndAdapter::_bind_TexCoord4fv},
	{"MultiTexCoord1f", &luna_wrapper_osg_GLBeginEndAdapter::_bind_MultiTexCoord1f},
	{"MultiTexCoord1fv", &luna_wrapper_osg_GLBeginEndAdapter::_bind_MultiTexCoord1fv},
	{"MultiTexCoord2f", &luna_wrapper_osg_GLBeginEndAdapter::_bind_MultiTexCoord2f},
	{"MultiTexCoord2fv", &luna_wrapper_osg_GLBeginEndAdapter::_bind_MultiTexCoord2fv},
	{"MultiTexCoord3f", &luna_wrapper_osg_GLBeginEndAdapter::_bind_MultiTexCoord3f},
	{"MultiTexCoord3fv", &luna_wrapper_osg_GLBeginEndAdapter::_bind_MultiTexCoord3fv},
	{"MultiTexCoord4f", &luna_wrapper_osg_GLBeginEndAdapter::_bind_MultiTexCoord4f},
	{"MultiTexCoord4fv", &luna_wrapper_osg_GLBeginEndAdapter::_bind_MultiTexCoord4fv},
	{"VertexAttrib1f", &luna_wrapper_osg_GLBeginEndAdapter::_bind_VertexAttrib1f},
	{"VertexAttrib1fv", &luna_wrapper_osg_GLBeginEndAdapter::_bind_VertexAttrib1fv},
	{"VertexAttrib2f", &luna_wrapper_osg_GLBeginEndAdapter::_bind_VertexAttrib2f},
	{"VertexAttrib2fv", &luna_wrapper_osg_GLBeginEndAdapter::_bind_VertexAttrib2fv},
	{"VertexAttrib3f", &luna_wrapper_osg_GLBeginEndAdapter::_bind_VertexAttrib3f},
	{"VertexAttrib3fv", &luna_wrapper_osg_GLBeginEndAdapter::_bind_VertexAttrib3fv},
	{"VertexAttrib4f", &luna_wrapper_osg_GLBeginEndAdapter::_bind_VertexAttrib4f},
	{"VertexAttrib4fv", &luna_wrapper_osg_GLBeginEndAdapter::_bind_VertexAttrib4fv},
	{"Begin", &luna_wrapper_osg_GLBeginEndAdapter::_bind_Begin},
	{"End", &luna_wrapper_osg_GLBeginEndAdapter::_bind_End},
	{"reset", &luna_wrapper_osg_GLBeginEndAdapter::_bind_reset},
	{"dynCast", &luna_wrapper_osg_GLBeginEndAdapter::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_GLBeginEndAdapter::_bind___eq},
	{"fromVoid", &luna_wrapper_osg_GLBeginEndAdapter::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_GLBeginEndAdapter::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< osg::GLBeginEndAdapter >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::GLBeginEndAdapter >::enumValues[] = {
	{"APPLY_LOCAL_MATRICES_TO_VERTICES", osg::GLBeginEndAdapter::APPLY_LOCAL_MATRICES_TO_VERTICES},
	{"APPLY_LOCAL_MATRICES_TO_MODELVIEW", osg::GLBeginEndAdapter::APPLY_LOCAL_MATRICES_TO_MODELVIEW},
	{0,0}
};


