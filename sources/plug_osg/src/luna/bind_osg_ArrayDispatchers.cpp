#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_ArrayDispatchers.h>

class luna_wrapper_osg_ArrayDispatchers {
public:
	typedef Luna< osg::ArrayDispatchers > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<osg::Referenced,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
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

		osg::ArrayDispatchers* self= (osg::ArrayDispatchers*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::ArrayDispatchers >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		//osg::ArrayDispatchers* ptr= dynamic_cast< osg::ArrayDispatchers* >(Luna< osg::Referenced >::check(L,1));
		osg::ArrayDispatchers* ptr= luna_caster< osg::Referenced, osg::ArrayDispatchers >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::ArrayDispatchers >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setState(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_vertexDispatcher(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_normalDispatcher(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_colorDispatcher(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_secondaryColorDispatcher(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_fogCoordDispatcher(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_texCoordDispatcher(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_vertexAttribDispatcher(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setUseGLBeginEndAdapter(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUseGLBeginEndAdapter(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setUseVertexAttribAlias(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUseVertexAttribAlias(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_activate(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_activateVertexArray(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_activateColorArray(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_activateNormalArray(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_activateSecondaryColorArray(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_activateFogCoordArray(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_activateTexCoordArray(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_activateVertexAttribArray(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_dispatch(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_active(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
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

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::ArrayDispatchers::ArrayDispatchers()
	static osg::ArrayDispatchers* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::ArrayDispatchers::ArrayDispatchers() function, expected prototype:\nosg::ArrayDispatchers::ArrayDispatchers()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::ArrayDispatchers();
	}

	// osg::ArrayDispatchers::ArrayDispatchers(lua_Table * data)
	static osg::ArrayDispatchers* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::ArrayDispatchers::ArrayDispatchers(lua_Table * data) function, expected prototype:\nosg::ArrayDispatchers::ArrayDispatchers(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_ArrayDispatchers(L,NULL);
	}

	// Overload binder for osg::ArrayDispatchers::ArrayDispatchers
	static osg::ArrayDispatchers* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ArrayDispatchers, cannot match any of the overloads for function ArrayDispatchers:\n  ArrayDispatchers()\n  ArrayDispatchers(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void osg::ArrayDispatchers::setState(osg::State * state)
	static int _bind_setState(lua_State *L) {
		if (!_lg_typecheck_setState(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ArrayDispatchers::setState(osg::State * state) function, expected prototype:\nvoid osg::ArrayDispatchers::setState(osg::State * state)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* state=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));

		osg::ArrayDispatchers* self=Luna< osg::Referenced >::checkSubType< osg::ArrayDispatchers >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ArrayDispatchers::setState(osg::State *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setState(state);

		return 0;
	}

	// osg::AttributeDispatch * osg::ArrayDispatchers::vertexDispatcher(osg::Array * array, osg::IndexArray * indices)
	static int _bind_vertexDispatcher(lua_State *L) {
		if (!_lg_typecheck_vertexDispatcher(L)) {
			luaL_error(L, "luna typecheck failed in osg::AttributeDispatch * osg::ArrayDispatchers::vertexDispatcher(osg::Array * array, osg::IndexArray * indices) function, expected prototype:\nosg::AttributeDispatch * osg::ArrayDispatchers::vertexDispatcher(osg::Array * array, osg::IndexArray * indices)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Array* array=(Luna< osg::Referenced >::checkSubType< osg::Array >(L,2));
		osg::IndexArray* indices=(Luna< osg::Referenced >::checkSubType< osg::IndexArray >(L,3));

		osg::ArrayDispatchers* self=Luna< osg::Referenced >::checkSubType< osg::ArrayDispatchers >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::AttributeDispatch * osg::ArrayDispatchers::vertexDispatcher(osg::Array *, osg::IndexArray *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::AttributeDispatch * lret = self->vertexDispatcher(array, indices);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::AttributeDispatch >::push(L,lret,false);

		return 1;
	}

	// osg::AttributeDispatch * osg::ArrayDispatchers::normalDispatcher(osg::Array * array, osg::IndexArray * indices)
	static int _bind_normalDispatcher(lua_State *L) {
		if (!_lg_typecheck_normalDispatcher(L)) {
			luaL_error(L, "luna typecheck failed in osg::AttributeDispatch * osg::ArrayDispatchers::normalDispatcher(osg::Array * array, osg::IndexArray * indices) function, expected prototype:\nosg::AttributeDispatch * osg::ArrayDispatchers::normalDispatcher(osg::Array * array, osg::IndexArray * indices)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Array* array=(Luna< osg::Referenced >::checkSubType< osg::Array >(L,2));
		osg::IndexArray* indices=(Luna< osg::Referenced >::checkSubType< osg::IndexArray >(L,3));

		osg::ArrayDispatchers* self=Luna< osg::Referenced >::checkSubType< osg::ArrayDispatchers >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::AttributeDispatch * osg::ArrayDispatchers::normalDispatcher(osg::Array *, osg::IndexArray *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::AttributeDispatch * lret = self->normalDispatcher(array, indices);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::AttributeDispatch >::push(L,lret,false);

		return 1;
	}

	// osg::AttributeDispatch * osg::ArrayDispatchers::colorDispatcher(osg::Array * array, osg::IndexArray * indices)
	static int _bind_colorDispatcher(lua_State *L) {
		if (!_lg_typecheck_colorDispatcher(L)) {
			luaL_error(L, "luna typecheck failed in osg::AttributeDispatch * osg::ArrayDispatchers::colorDispatcher(osg::Array * array, osg::IndexArray * indices) function, expected prototype:\nosg::AttributeDispatch * osg::ArrayDispatchers::colorDispatcher(osg::Array * array, osg::IndexArray * indices)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Array* array=(Luna< osg::Referenced >::checkSubType< osg::Array >(L,2));
		osg::IndexArray* indices=(Luna< osg::Referenced >::checkSubType< osg::IndexArray >(L,3));

		osg::ArrayDispatchers* self=Luna< osg::Referenced >::checkSubType< osg::ArrayDispatchers >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::AttributeDispatch * osg::ArrayDispatchers::colorDispatcher(osg::Array *, osg::IndexArray *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::AttributeDispatch * lret = self->colorDispatcher(array, indices);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::AttributeDispatch >::push(L,lret,false);

		return 1;
	}

	// osg::AttributeDispatch * osg::ArrayDispatchers::secondaryColorDispatcher(osg::Array * array, osg::IndexArray * indices)
	static int _bind_secondaryColorDispatcher(lua_State *L) {
		if (!_lg_typecheck_secondaryColorDispatcher(L)) {
			luaL_error(L, "luna typecheck failed in osg::AttributeDispatch * osg::ArrayDispatchers::secondaryColorDispatcher(osg::Array * array, osg::IndexArray * indices) function, expected prototype:\nosg::AttributeDispatch * osg::ArrayDispatchers::secondaryColorDispatcher(osg::Array * array, osg::IndexArray * indices)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Array* array=(Luna< osg::Referenced >::checkSubType< osg::Array >(L,2));
		osg::IndexArray* indices=(Luna< osg::Referenced >::checkSubType< osg::IndexArray >(L,3));

		osg::ArrayDispatchers* self=Luna< osg::Referenced >::checkSubType< osg::ArrayDispatchers >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::AttributeDispatch * osg::ArrayDispatchers::secondaryColorDispatcher(osg::Array *, osg::IndexArray *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::AttributeDispatch * lret = self->secondaryColorDispatcher(array, indices);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::AttributeDispatch >::push(L,lret,false);

		return 1;
	}

	// osg::AttributeDispatch * osg::ArrayDispatchers::fogCoordDispatcher(osg::Array * array, osg::IndexArray * indices)
	static int _bind_fogCoordDispatcher(lua_State *L) {
		if (!_lg_typecheck_fogCoordDispatcher(L)) {
			luaL_error(L, "luna typecheck failed in osg::AttributeDispatch * osg::ArrayDispatchers::fogCoordDispatcher(osg::Array * array, osg::IndexArray * indices) function, expected prototype:\nosg::AttributeDispatch * osg::ArrayDispatchers::fogCoordDispatcher(osg::Array * array, osg::IndexArray * indices)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Array* array=(Luna< osg::Referenced >::checkSubType< osg::Array >(L,2));
		osg::IndexArray* indices=(Luna< osg::Referenced >::checkSubType< osg::IndexArray >(L,3));

		osg::ArrayDispatchers* self=Luna< osg::Referenced >::checkSubType< osg::ArrayDispatchers >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::AttributeDispatch * osg::ArrayDispatchers::fogCoordDispatcher(osg::Array *, osg::IndexArray *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::AttributeDispatch * lret = self->fogCoordDispatcher(array, indices);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::AttributeDispatch >::push(L,lret,false);

		return 1;
	}

	// osg::AttributeDispatch * osg::ArrayDispatchers::texCoordDispatcher(unsigned int unit, osg::Array * array, osg::IndexArray * indices)
	static int _bind_texCoordDispatcher(lua_State *L) {
		if (!_lg_typecheck_texCoordDispatcher(L)) {
			luaL_error(L, "luna typecheck failed in osg::AttributeDispatch * osg::ArrayDispatchers::texCoordDispatcher(unsigned int unit, osg::Array * array, osg::IndexArray * indices) function, expected prototype:\nosg::AttributeDispatch * osg::ArrayDispatchers::texCoordDispatcher(unsigned int unit, osg::Array * array, osg::IndexArray * indices)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int unit=(unsigned int)lua_tointeger(L,2);
		osg::Array* array=(Luna< osg::Referenced >::checkSubType< osg::Array >(L,3));
		osg::IndexArray* indices=(Luna< osg::Referenced >::checkSubType< osg::IndexArray >(L,4));

		osg::ArrayDispatchers* self=Luna< osg::Referenced >::checkSubType< osg::ArrayDispatchers >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::AttributeDispatch * osg::ArrayDispatchers::texCoordDispatcher(unsigned int, osg::Array *, osg::IndexArray *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::AttributeDispatch * lret = self->texCoordDispatcher(unit, array, indices);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::AttributeDispatch >::push(L,lret,false);

		return 1;
	}

	// osg::AttributeDispatch * osg::ArrayDispatchers::vertexAttribDispatcher(unsigned int unit, osg::Array * array, osg::IndexArray * indices)
	static int _bind_vertexAttribDispatcher(lua_State *L) {
		if (!_lg_typecheck_vertexAttribDispatcher(L)) {
			luaL_error(L, "luna typecheck failed in osg::AttributeDispatch * osg::ArrayDispatchers::vertexAttribDispatcher(unsigned int unit, osg::Array * array, osg::IndexArray * indices) function, expected prototype:\nosg::AttributeDispatch * osg::ArrayDispatchers::vertexAttribDispatcher(unsigned int unit, osg::Array * array, osg::IndexArray * indices)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int unit=(unsigned int)lua_tointeger(L,2);
		osg::Array* array=(Luna< osg::Referenced >::checkSubType< osg::Array >(L,3));
		osg::IndexArray* indices=(Luna< osg::Referenced >::checkSubType< osg::IndexArray >(L,4));

		osg::ArrayDispatchers* self=Luna< osg::Referenced >::checkSubType< osg::ArrayDispatchers >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::AttributeDispatch * osg::ArrayDispatchers::vertexAttribDispatcher(unsigned int, osg::Array *, osg::IndexArray *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::AttributeDispatch * lret = self->vertexAttribDispatcher(unit, array, indices);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::AttributeDispatch >::push(L,lret,false);

		return 1;
	}

	// void osg::ArrayDispatchers::reset()
	static int _bind_reset(lua_State *L) {
		if (!_lg_typecheck_reset(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ArrayDispatchers::reset() function, expected prototype:\nvoid osg::ArrayDispatchers::reset()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ArrayDispatchers* self=Luna< osg::Referenced >::checkSubType< osg::ArrayDispatchers >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ArrayDispatchers::reset(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->reset();

		return 0;
	}

	// void osg::ArrayDispatchers::setUseGLBeginEndAdapter(bool flag)
	static int _bind_setUseGLBeginEndAdapter(lua_State *L) {
		if (!_lg_typecheck_setUseGLBeginEndAdapter(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ArrayDispatchers::setUseGLBeginEndAdapter(bool flag) function, expected prototype:\nvoid osg::ArrayDispatchers::setUseGLBeginEndAdapter(bool flag)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::ArrayDispatchers* self=Luna< osg::Referenced >::checkSubType< osg::ArrayDispatchers >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ArrayDispatchers::setUseGLBeginEndAdapter(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setUseGLBeginEndAdapter(flag);

		return 0;
	}

	// bool osg::ArrayDispatchers::getUseGLBeginEndAdapter() const
	static int _bind_getUseGLBeginEndAdapter(lua_State *L) {
		if (!_lg_typecheck_getUseGLBeginEndAdapter(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ArrayDispatchers::getUseGLBeginEndAdapter() const function, expected prototype:\nbool osg::ArrayDispatchers::getUseGLBeginEndAdapter() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ArrayDispatchers* self=Luna< osg::Referenced >::checkSubType< osg::ArrayDispatchers >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ArrayDispatchers::getUseGLBeginEndAdapter() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getUseGLBeginEndAdapter();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::ArrayDispatchers::setUseVertexAttribAlias(bool flag)
	static int _bind_setUseVertexAttribAlias(lua_State *L) {
		if (!_lg_typecheck_setUseVertexAttribAlias(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ArrayDispatchers::setUseVertexAttribAlias(bool flag) function, expected prototype:\nvoid osg::ArrayDispatchers::setUseVertexAttribAlias(bool flag)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::ArrayDispatchers* self=Luna< osg::Referenced >::checkSubType< osg::ArrayDispatchers >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ArrayDispatchers::setUseVertexAttribAlias(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setUseVertexAttribAlias(flag);

		return 0;
	}

	// bool osg::ArrayDispatchers::getUseVertexAttribAlias() const
	static int _bind_getUseVertexAttribAlias(lua_State *L) {
		if (!_lg_typecheck_getUseVertexAttribAlias(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ArrayDispatchers::getUseVertexAttribAlias() const function, expected prototype:\nbool osg::ArrayDispatchers::getUseVertexAttribAlias() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ArrayDispatchers* self=Luna< osg::Referenced >::checkSubType< osg::ArrayDispatchers >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ArrayDispatchers::getUseVertexAttribAlias() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getUseVertexAttribAlias();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::ArrayDispatchers::activate(unsigned int binding, osg::AttributeDispatch * at)
	static int _bind_activate(lua_State *L) {
		if (!_lg_typecheck_activate(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ArrayDispatchers::activate(unsigned int binding, osg::AttributeDispatch * at) function, expected prototype:\nvoid osg::ArrayDispatchers::activate(unsigned int binding, osg::AttributeDispatch * at)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int binding=(unsigned int)lua_tointeger(L,2);
		osg::AttributeDispatch* at=(Luna< osg::Referenced >::checkSubType< osg::AttributeDispatch >(L,3));

		osg::ArrayDispatchers* self=Luna< osg::Referenced >::checkSubType< osg::ArrayDispatchers >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ArrayDispatchers::activate(unsigned int, osg::AttributeDispatch *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->activate(binding, at);

		return 0;
	}

	// void osg::ArrayDispatchers::activateVertexArray(unsigned int binding, osg::Array * array, osg::IndexArray * indices)
	static int _bind_activateVertexArray(lua_State *L) {
		if (!_lg_typecheck_activateVertexArray(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ArrayDispatchers::activateVertexArray(unsigned int binding, osg::Array * array, osg::IndexArray * indices) function, expected prototype:\nvoid osg::ArrayDispatchers::activateVertexArray(unsigned int binding, osg::Array * array, osg::IndexArray * indices)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int binding=(unsigned int)lua_tointeger(L,2);
		osg::Array* array=(Luna< osg::Referenced >::checkSubType< osg::Array >(L,3));
		osg::IndexArray* indices=(Luna< osg::Referenced >::checkSubType< osg::IndexArray >(L,4));

		osg::ArrayDispatchers* self=Luna< osg::Referenced >::checkSubType< osg::ArrayDispatchers >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ArrayDispatchers::activateVertexArray(unsigned int, osg::Array *, osg::IndexArray *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->activateVertexArray(binding, array, indices);

		return 0;
	}

	// void osg::ArrayDispatchers::activateColorArray(unsigned int binding, osg::Array * array, osg::IndexArray * indices)
	static int _bind_activateColorArray(lua_State *L) {
		if (!_lg_typecheck_activateColorArray(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ArrayDispatchers::activateColorArray(unsigned int binding, osg::Array * array, osg::IndexArray * indices) function, expected prototype:\nvoid osg::ArrayDispatchers::activateColorArray(unsigned int binding, osg::Array * array, osg::IndexArray * indices)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int binding=(unsigned int)lua_tointeger(L,2);
		osg::Array* array=(Luna< osg::Referenced >::checkSubType< osg::Array >(L,3));
		osg::IndexArray* indices=(Luna< osg::Referenced >::checkSubType< osg::IndexArray >(L,4));

		osg::ArrayDispatchers* self=Luna< osg::Referenced >::checkSubType< osg::ArrayDispatchers >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ArrayDispatchers::activateColorArray(unsigned int, osg::Array *, osg::IndexArray *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->activateColorArray(binding, array, indices);

		return 0;
	}

	// void osg::ArrayDispatchers::activateNormalArray(unsigned int binding, osg::Array * array, osg::IndexArray * indices)
	static int _bind_activateNormalArray(lua_State *L) {
		if (!_lg_typecheck_activateNormalArray(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ArrayDispatchers::activateNormalArray(unsigned int binding, osg::Array * array, osg::IndexArray * indices) function, expected prototype:\nvoid osg::ArrayDispatchers::activateNormalArray(unsigned int binding, osg::Array * array, osg::IndexArray * indices)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int binding=(unsigned int)lua_tointeger(L,2);
		osg::Array* array=(Luna< osg::Referenced >::checkSubType< osg::Array >(L,3));
		osg::IndexArray* indices=(Luna< osg::Referenced >::checkSubType< osg::IndexArray >(L,4));

		osg::ArrayDispatchers* self=Luna< osg::Referenced >::checkSubType< osg::ArrayDispatchers >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ArrayDispatchers::activateNormalArray(unsigned int, osg::Array *, osg::IndexArray *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->activateNormalArray(binding, array, indices);

		return 0;
	}

	// void osg::ArrayDispatchers::activateSecondaryColorArray(unsigned int binding, osg::Array * array, osg::IndexArray * indices)
	static int _bind_activateSecondaryColorArray(lua_State *L) {
		if (!_lg_typecheck_activateSecondaryColorArray(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ArrayDispatchers::activateSecondaryColorArray(unsigned int binding, osg::Array * array, osg::IndexArray * indices) function, expected prototype:\nvoid osg::ArrayDispatchers::activateSecondaryColorArray(unsigned int binding, osg::Array * array, osg::IndexArray * indices)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int binding=(unsigned int)lua_tointeger(L,2);
		osg::Array* array=(Luna< osg::Referenced >::checkSubType< osg::Array >(L,3));
		osg::IndexArray* indices=(Luna< osg::Referenced >::checkSubType< osg::IndexArray >(L,4));

		osg::ArrayDispatchers* self=Luna< osg::Referenced >::checkSubType< osg::ArrayDispatchers >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ArrayDispatchers::activateSecondaryColorArray(unsigned int, osg::Array *, osg::IndexArray *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->activateSecondaryColorArray(binding, array, indices);

		return 0;
	}

	// void osg::ArrayDispatchers::activateFogCoordArray(unsigned int binding, osg::Array * array, osg::IndexArray * indices)
	static int _bind_activateFogCoordArray(lua_State *L) {
		if (!_lg_typecheck_activateFogCoordArray(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ArrayDispatchers::activateFogCoordArray(unsigned int binding, osg::Array * array, osg::IndexArray * indices) function, expected prototype:\nvoid osg::ArrayDispatchers::activateFogCoordArray(unsigned int binding, osg::Array * array, osg::IndexArray * indices)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int binding=(unsigned int)lua_tointeger(L,2);
		osg::Array* array=(Luna< osg::Referenced >::checkSubType< osg::Array >(L,3));
		osg::IndexArray* indices=(Luna< osg::Referenced >::checkSubType< osg::IndexArray >(L,4));

		osg::ArrayDispatchers* self=Luna< osg::Referenced >::checkSubType< osg::ArrayDispatchers >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ArrayDispatchers::activateFogCoordArray(unsigned int, osg::Array *, osg::IndexArray *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->activateFogCoordArray(binding, array, indices);

		return 0;
	}

	// void osg::ArrayDispatchers::activateTexCoordArray(unsigned int binding, unsigned int unit, osg::Array * array, osg::IndexArray * indices)
	static int _bind_activateTexCoordArray(lua_State *L) {
		if (!_lg_typecheck_activateTexCoordArray(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ArrayDispatchers::activateTexCoordArray(unsigned int binding, unsigned int unit, osg::Array * array, osg::IndexArray * indices) function, expected prototype:\nvoid osg::ArrayDispatchers::activateTexCoordArray(unsigned int binding, unsigned int unit, osg::Array * array, osg::IndexArray * indices)\nClass arguments details:\narg 3 ID = 50169651\narg 4 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int binding=(unsigned int)lua_tointeger(L,2);
		unsigned int unit=(unsigned int)lua_tointeger(L,3);
		osg::Array* array=(Luna< osg::Referenced >::checkSubType< osg::Array >(L,4));
		osg::IndexArray* indices=(Luna< osg::Referenced >::checkSubType< osg::IndexArray >(L,5));

		osg::ArrayDispatchers* self=Luna< osg::Referenced >::checkSubType< osg::ArrayDispatchers >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ArrayDispatchers::activateTexCoordArray(unsigned int, unsigned int, osg::Array *, osg::IndexArray *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->activateTexCoordArray(binding, unit, array, indices);

		return 0;
	}

	// void osg::ArrayDispatchers::activateVertexAttribArray(unsigned int binding, unsigned int unit, osg::Array * array, osg::IndexArray * indices)
	static int _bind_activateVertexAttribArray(lua_State *L) {
		if (!_lg_typecheck_activateVertexAttribArray(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ArrayDispatchers::activateVertexAttribArray(unsigned int binding, unsigned int unit, osg::Array * array, osg::IndexArray * indices) function, expected prototype:\nvoid osg::ArrayDispatchers::activateVertexAttribArray(unsigned int binding, unsigned int unit, osg::Array * array, osg::IndexArray * indices)\nClass arguments details:\narg 3 ID = 50169651\narg 4 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int binding=(unsigned int)lua_tointeger(L,2);
		unsigned int unit=(unsigned int)lua_tointeger(L,3);
		osg::Array* array=(Luna< osg::Referenced >::checkSubType< osg::Array >(L,4));
		osg::IndexArray* indices=(Luna< osg::Referenced >::checkSubType< osg::IndexArray >(L,5));

		osg::ArrayDispatchers* self=Luna< osg::Referenced >::checkSubType< osg::ArrayDispatchers >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ArrayDispatchers::activateVertexAttribArray(unsigned int, unsigned int, osg::Array *, osg::IndexArray *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->activateVertexAttribArray(binding, unit, array, indices);

		return 0;
	}

	// void osg::ArrayDispatchers::dispatch(unsigned int binding, unsigned int index)
	static int _bind_dispatch(lua_State *L) {
		if (!_lg_typecheck_dispatch(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ArrayDispatchers::dispatch(unsigned int binding, unsigned int index) function, expected prototype:\nvoid osg::ArrayDispatchers::dispatch(unsigned int binding, unsigned int index)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int binding=(unsigned int)lua_tointeger(L,2);
		unsigned int index=(unsigned int)lua_tointeger(L,3);

		osg::ArrayDispatchers* self=Luna< osg::Referenced >::checkSubType< osg::ArrayDispatchers >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ArrayDispatchers::dispatch(unsigned int, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->dispatch(binding, index);

		return 0;
	}

	// bool osg::ArrayDispatchers::active(unsigned int binding) const
	static int _bind_active(lua_State *L) {
		if (!_lg_typecheck_active(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ArrayDispatchers::active(unsigned int binding) const function, expected prototype:\nbool osg::ArrayDispatchers::active(unsigned int binding) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int binding=(unsigned int)lua_tointeger(L,2);

		osg::ArrayDispatchers* self=Luna< osg::Referenced >::checkSubType< osg::ArrayDispatchers >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ArrayDispatchers::active(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->active(binding);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::ArrayDispatchers::Begin(unsigned int mode)
	static int _bind_Begin(lua_State *L) {
		if (!_lg_typecheck_Begin(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ArrayDispatchers::Begin(unsigned int mode) function, expected prototype:\nvoid osg::ArrayDispatchers::Begin(unsigned int mode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,2);

		osg::ArrayDispatchers* self=Luna< osg::Referenced >::checkSubType< osg::ArrayDispatchers >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ArrayDispatchers::Begin(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Begin(mode);

		return 0;
	}

	// void osg::ArrayDispatchers::End()
	static int _bind_End(lua_State *L) {
		if (!_lg_typecheck_End(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ArrayDispatchers::End() function, expected prototype:\nvoid osg::ArrayDispatchers::End()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ArrayDispatchers* self=Luna< osg::Referenced >::checkSubType< osg::ArrayDispatchers >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ArrayDispatchers::End(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->End();

		return 0;
	}

	// void osg::ArrayDispatchers::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ArrayDispatchers::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::ArrayDispatchers::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::ArrayDispatchers* self=Luna< osg::Referenced >::checkSubType< osg::ArrayDispatchers >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ArrayDispatchers::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ArrayDispatchers::setThreadSafeRefUnref(threadSafe);

		return 0;
	}


	// Operator binds:

};

osg::ArrayDispatchers* LunaTraits< osg::ArrayDispatchers >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_ArrayDispatchers::_bind_ctor(L);
}

void LunaTraits< osg::ArrayDispatchers >::_bind_dtor(osg::ArrayDispatchers* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::ArrayDispatchers >::className[] = "ArrayDispatchers";
const char LunaTraits< osg::ArrayDispatchers >::fullName[] = "osg::ArrayDispatchers";
const char LunaTraits< osg::ArrayDispatchers >::moduleName[] = "osg";
const char* LunaTraits< osg::ArrayDispatchers >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::ArrayDispatchers >::hash = 90080039;
const int LunaTraits< osg::ArrayDispatchers >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::ArrayDispatchers >::methods[] = {
	{"setState", &luna_wrapper_osg_ArrayDispatchers::_bind_setState},
	{"vertexDispatcher", &luna_wrapper_osg_ArrayDispatchers::_bind_vertexDispatcher},
	{"normalDispatcher", &luna_wrapper_osg_ArrayDispatchers::_bind_normalDispatcher},
	{"colorDispatcher", &luna_wrapper_osg_ArrayDispatchers::_bind_colorDispatcher},
	{"secondaryColorDispatcher", &luna_wrapper_osg_ArrayDispatchers::_bind_secondaryColorDispatcher},
	{"fogCoordDispatcher", &luna_wrapper_osg_ArrayDispatchers::_bind_fogCoordDispatcher},
	{"texCoordDispatcher", &luna_wrapper_osg_ArrayDispatchers::_bind_texCoordDispatcher},
	{"vertexAttribDispatcher", &luna_wrapper_osg_ArrayDispatchers::_bind_vertexAttribDispatcher},
	{"reset", &luna_wrapper_osg_ArrayDispatchers::_bind_reset},
	{"setUseGLBeginEndAdapter", &luna_wrapper_osg_ArrayDispatchers::_bind_setUseGLBeginEndAdapter},
	{"getUseGLBeginEndAdapter", &luna_wrapper_osg_ArrayDispatchers::_bind_getUseGLBeginEndAdapter},
	{"setUseVertexAttribAlias", &luna_wrapper_osg_ArrayDispatchers::_bind_setUseVertexAttribAlias},
	{"getUseVertexAttribAlias", &luna_wrapper_osg_ArrayDispatchers::_bind_getUseVertexAttribAlias},
	{"activate", &luna_wrapper_osg_ArrayDispatchers::_bind_activate},
	{"activateVertexArray", &luna_wrapper_osg_ArrayDispatchers::_bind_activateVertexArray},
	{"activateColorArray", &luna_wrapper_osg_ArrayDispatchers::_bind_activateColorArray},
	{"activateNormalArray", &luna_wrapper_osg_ArrayDispatchers::_bind_activateNormalArray},
	{"activateSecondaryColorArray", &luna_wrapper_osg_ArrayDispatchers::_bind_activateSecondaryColorArray},
	{"activateFogCoordArray", &luna_wrapper_osg_ArrayDispatchers::_bind_activateFogCoordArray},
	{"activateTexCoordArray", &luna_wrapper_osg_ArrayDispatchers::_bind_activateTexCoordArray},
	{"activateVertexAttribArray", &luna_wrapper_osg_ArrayDispatchers::_bind_activateVertexAttribArray},
	{"dispatch", &luna_wrapper_osg_ArrayDispatchers::_bind_dispatch},
	{"active", &luna_wrapper_osg_ArrayDispatchers::_bind_active},
	{"Begin", &luna_wrapper_osg_ArrayDispatchers::_bind_Begin},
	{"End", &luna_wrapper_osg_ArrayDispatchers::_bind_End},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_ArrayDispatchers::_bind_base_setThreadSafeRefUnref},
	{"fromVoid", &luna_wrapper_osg_ArrayDispatchers::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_ArrayDispatchers::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_ArrayDispatchers::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ArrayDispatchers >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_ArrayDispatchers::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ArrayDispatchers >::enumValues[] = {
	{0,0}
};


