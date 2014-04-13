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

		land::ProlandDrawable* self=(Luna< land::ProlandDrawable >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<land::ProlandDrawable,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,34744539) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(land::ProlandDrawable*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		land::ProlandDrawable* rhs =(Luna< land::ProlandDrawable >::check(L,2));
		land::ProlandDrawable* self=(Luna< land::ProlandDrawable >::check(L,1));
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

		land::ProlandDrawable* self= (land::ProlandDrawable*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< land::ProlandDrawable >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,34744539) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< land::ProlandDrawable >::check(L,1));
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

		land::ProlandDrawable* self=(Luna< land::ProlandDrawable >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("land::ProlandDrawable");
		
		return luna_dynamicCast(L,converters,"land::ProlandDrawable",name);
	}


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
	// land::ProlandDrawable::ProlandDrawable()
	static land::ProlandDrawable* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in land::ProlandDrawable::ProlandDrawable() function, expected prototype:\nland::ProlandDrawable::ProlandDrawable()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new land::ProlandDrawable();
	}

	// land::ProlandDrawable::ProlandDrawable(lua_Table * data)
	static land::ProlandDrawable* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in land::ProlandDrawable::ProlandDrawable(lua_Table * data) function, expected prototype:\nland::ProlandDrawable::ProlandDrawable(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_land_ProlandDrawable(L,NULL);
	}

	// Overload binder for land::ProlandDrawable::ProlandDrawable
	static land::ProlandDrawable* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ProlandDrawable, cannot match any of the overloads for function ProlandDrawable:\n  ProlandDrawable()\n  ProlandDrawable(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// osg::BoundingBox land::ProlandDrawable::computeBound() const
	static int _bind_computeBound(lua_State *L) {
		if (!_lg_typecheck_computeBound(L)) {
			luaL_error(L, "luna typecheck failed in osg::BoundingBox land::ProlandDrawable::computeBound() const function, expected prototype:\nosg::BoundingBox land::ProlandDrawable::computeBound() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		land::ProlandDrawable* self=(Luna< land::ProlandDrawable >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::BoundingBox land::ProlandDrawable::computeBound() const. Got : '%s'\n%s",typeid(Luna< land::ProlandDrawable >::check(L,1)).name(),luna_dumpStack(L).c_str());
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


		land::ProlandDrawable* self=(Luna< land::ProlandDrawable >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::BoundingBox land::ProlandDrawable::base_computeBound() const. Got : '%s'\n%s",typeid(Luna< land::ProlandDrawable >::check(L,1)).name(),luna_dumpStack(L).c_str());
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
	//delete obj; // destructor protected.
}

const char LunaTraits< land::ProlandDrawable >::className[] = "ProlandDrawable";
const char LunaTraits< land::ProlandDrawable >::fullName[] = "land::ProlandDrawable";
const char LunaTraits< land::ProlandDrawable >::moduleName[] = "land";
const char* LunaTraits< land::ProlandDrawable >::parents[] = {0};
const int LunaTraits< land::ProlandDrawable >::hash = 34744539;
const int LunaTraits< land::ProlandDrawable >::uniqueIDs[] = {34744539,0};

luna_RegType LunaTraits< land::ProlandDrawable >::methods[] = {
	{"computeBound", &luna_wrapper_land_ProlandDrawable::_bind_computeBound},
	{"base_computeBound", &luna_wrapper_land_ProlandDrawable::_bind_base_computeBound},
	{"dynCast", &luna_wrapper_land_ProlandDrawable::_bind_dynCast},
	{"__eq", &luna_wrapper_land_ProlandDrawable::_bind___eq},
	{"fromVoid", &luna_wrapper_land_ProlandDrawable::_bind_fromVoid},
	{"asVoid", &luna_wrapper_land_ProlandDrawable::_bind_asVoid},
	{"getTable", &luna_wrapper_land_ProlandDrawable::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< land::ProlandDrawable >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< land::ProlandDrawable >::enumValues[] = {
	{0,0}
};


