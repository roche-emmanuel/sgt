#include <plug_common.h>

#include <luna/wrappers/wrapper_land_ProlandDrawable.h>

class luna_wrapper_land_ProlandDrawable {
public:
	typedef Luna< land::ProlandDrawable > luna_t;

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

		land::ProlandDrawable* self= (land::ProlandDrawable*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< land::ProlandDrawable >::push(L,self,false);
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
		//land::ProlandDrawable* ptr= dynamic_cast< land::ProlandDrawable* >(Luna< osg::Referenced >::check(L,1));
		land::ProlandDrawable* ptr= luna_caster< osg::Referenced, land::ProlandDrawable >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< land::ProlandDrawable >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,1381405)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< ork::Object >::checkSubType< ork::SceneManager >(L,1)) ) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,1381405)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< ork::Object >::checkSubType< proland::TerrainViewController >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,1381405)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< ork::Object >::checkSubType< ork::SceneManager >(L,2)) ) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,1381405)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< ork::Object >::checkSubType< proland::TerrainViewController >(L,3)) ) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_computeBound(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_computeBound(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// land::ProlandDrawable::ProlandDrawable(ork::SceneManager * sman, proland::TerrainViewController * con)
	static land::ProlandDrawable* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in land::ProlandDrawable::ProlandDrawable(ork::SceneManager * sman, proland::TerrainViewController * con) function, expected prototype:\nland::ProlandDrawable::ProlandDrawable(ork::SceneManager * sman, proland::TerrainViewController * con)\nClass arguments details:\narg 1 ID = 1381405\narg 2 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::SceneManager* sman=(Luna< ork::Object >::checkSubType< ork::SceneManager >(L,1));
		proland::TerrainViewController* con=(Luna< ork::Object >::checkSubType< proland::TerrainViewController >(L,2));

		return new land::ProlandDrawable(sman, con);
	}

	// land::ProlandDrawable::ProlandDrawable(lua_Table * data, ork::SceneManager * sman, proland::TerrainViewController * con)
	static land::ProlandDrawable* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in land::ProlandDrawable::ProlandDrawable(lua_Table * data, ork::SceneManager * sman, proland::TerrainViewController * con) function, expected prototype:\nland::ProlandDrawable::ProlandDrawable(lua_Table * data, ork::SceneManager * sman, proland::TerrainViewController * con)\nClass arguments details:\narg 2 ID = 1381405\narg 3 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::SceneManager* sman=(Luna< ork::Object >::checkSubType< ork::SceneManager >(L,2));
		proland::TerrainViewController* con=(Luna< ork::Object >::checkSubType< proland::TerrainViewController >(L,3));

		return new wrapper_land_ProlandDrawable(L,NULL, sman, con);
	}

	// Overload binder for land::ProlandDrawable::ProlandDrawable
	static land::ProlandDrawable* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ProlandDrawable, cannot match any of the overloads for function ProlandDrawable:\n  ProlandDrawable(ork::SceneManager *, proland::TerrainViewController *)\n  ProlandDrawable(lua_Table *, ork::SceneManager *, proland::TerrainViewController *)\n");
		return NULL;
	}


	// Function binds:
	// osg::BoundingBox land::ProlandDrawable::computeBound() const
	static int _bind_computeBound(lua_State *L) {
		if (!_lg_typecheck_computeBound(L)) {
			luaL_error(L, "luna typecheck failed in osg::BoundingBox land::ProlandDrawable::computeBound() const function, expected prototype:\nosg::BoundingBox land::ProlandDrawable::computeBound() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		land::ProlandDrawable* self=Luna< osg::Referenced >::checkSubType< land::ProlandDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::BoundingBox land::ProlandDrawable::computeBound() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::BoundingBox stack_lret = self->computeBound();
		osg::BoundingBox* lret = new osg::BoundingBox(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingBox >::push(L,lret,true);

		return 1;
	}

	// osg::BoundingBox land::ProlandDrawable::base_computeBound() const
	static int _bind_base_computeBound(lua_State *L) {
		if (!_lg_typecheck_base_computeBound(L)) {
			luaL_error(L, "luna typecheck failed in osg::BoundingBox land::ProlandDrawable::base_computeBound() const function, expected prototype:\nosg::BoundingBox land::ProlandDrawable::base_computeBound() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		land::ProlandDrawable* self=Luna< osg::Referenced >::checkSubType< land::ProlandDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::BoundingBox land::ProlandDrawable::base_computeBound() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::BoundingBox stack_lret = self->ProlandDrawable::computeBound();
		osg::BoundingBox* lret = new osg::BoundingBox(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingBox >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

land::ProlandDrawable* LunaTraits< land::ProlandDrawable >::_bind_ctor(lua_State *L) {
	return luna_wrapper_land_ProlandDrawable::_bind_ctor(L);
}

void LunaTraits< land::ProlandDrawable >::_bind_dtor(land::ProlandDrawable* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< land::ProlandDrawable >::className[] = "ProlandDrawable";
const char LunaTraits< land::ProlandDrawable >::fullName[] = "land::ProlandDrawable";
const char LunaTraits< land::ProlandDrawable >::moduleName[] = "land";
const char* LunaTraits< land::ProlandDrawable >::parents[] = {"osg.Drawable", 0};
const int LunaTraits< land::ProlandDrawable >::hash = 34744539;
const int LunaTraits< land::ProlandDrawable >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< land::ProlandDrawable >::methods[] = {
	{"computeBound", &luna_wrapper_land_ProlandDrawable::_bind_computeBound},
	{"base_computeBound", &luna_wrapper_land_ProlandDrawable::_bind_base_computeBound},
	{"fromVoid", &luna_wrapper_land_ProlandDrawable::_bind_fromVoid},
	{"asVoid", &luna_wrapper_land_ProlandDrawable::_bind_asVoid},
	{"getTable", &luna_wrapper_land_ProlandDrawable::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< land::ProlandDrawable >::converters[] = {
	{"osg::Referenced", &luna_wrapper_land_ProlandDrawable::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< land::ProlandDrawable >::enumValues[] = {
	{0,0}
};


