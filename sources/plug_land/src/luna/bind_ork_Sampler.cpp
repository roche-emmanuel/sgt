#include <plug_common.h>

#include <luna/wrappers/wrapper_ork_Sampler.h>

class luna_wrapper_ork_Sampler {
public:
	typedef Luna< ork::Sampler > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::Object* self=(Luna< ork::Object >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<ork::Object,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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

		ork::Sampler* self= (ork::Sampler*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::Sampler >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1381405) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< ork::Object >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_Object(lua_State *L) {
		// all checked are already performed before reaching this point.
		//ork::Sampler* ptr= dynamic_cast< ork::Sampler* >(Luna< ork::Object >::check(L,1));
		ork::Sampler* ptr= luna_caster< ork::Object, ork::Sampler >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< ork::Sampler >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,84580371) ) return false;
		if( (!(Luna< ork::Sampler::Parameters >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,84580371) ) return false;
		if( (!(Luna< ork::Sampler::Parameters >::check(L,2))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_toString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// ork::Sampler::Sampler(const ork::Sampler::Parameters & value)
	static ork::Sampler* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::Sampler::Sampler(const ork::Sampler::Parameters & value) function, expected prototype:\nork::Sampler::Sampler(const ork::Sampler::Parameters & value)\nClass arguments details:\narg 1 ID = 84580371\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::Sampler::Parameters* value_ptr=(Luna< ork::Sampler::Parameters >::check(L,1));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in ork::Sampler::Sampler function");
		}
		const ork::Sampler::Parameters & value=*value_ptr;

		return new ork::Sampler(value);
	}

	// ork::Sampler::Sampler(lua_Table * data, const ork::Sampler::Parameters & value)
	static ork::Sampler* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::Sampler::Sampler(lua_Table * data, const ork::Sampler::Parameters & value) function, expected prototype:\nork::Sampler::Sampler(lua_Table * data, const ork::Sampler::Parameters & value)\nClass arguments details:\narg 2 ID = 84580371\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::Sampler::Parameters* value_ptr=(Luna< ork::Sampler::Parameters >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in ork::Sampler::Sampler function");
		}
		const ork::Sampler::Parameters & value=*value_ptr;

		return new wrapper_ork_Sampler(L,NULL, value);
	}

	// Overload binder for ork::Sampler::Sampler
	static ork::Sampler* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Sampler, cannot match any of the overloads for function Sampler:\n  Sampler(const ork::Sampler::Parameters &)\n  Sampler(lua_Table *, const ork::Sampler::Parameters &)\n");
		return NULL;
	}


	// Function binds:
	// unsigned int ork::Sampler::getId() const
	static int _bind_getId(lua_State *L) {
		if (!_lg_typecheck_getId(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int ork::Sampler::getId() const function, expected prototype:\nunsigned int ork::Sampler::getId() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Sampler* self=Luna< ork::Object >::checkSubType< ork::Sampler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int ork::Sampler::getId() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getId();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const char * ork::Sampler::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * ork::Sampler::base_toString() function, expected prototype:\nconst char * ork::Sampler::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Sampler* self=Luna< ork::Object >::checkSubType< ork::Sampler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * ork::Sampler::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Sampler::toString();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

ork::Sampler* LunaTraits< ork::Sampler >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ork_Sampler::_bind_ctor(L);
}

void LunaTraits< ork::Sampler >::_bind_dtor(ork::Sampler* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< ork::Sampler >::className[] = "Sampler";
const char LunaTraits< ork::Sampler >::fullName[] = "ork::Sampler";
const char LunaTraits< ork::Sampler >::moduleName[] = "ork";
const char* LunaTraits< ork::Sampler >::parents[] = {"ork.Object", 0};
const int LunaTraits< ork::Sampler >::hash = 67315301;
const int LunaTraits< ork::Sampler >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< ork::Sampler >::methods[] = {
	{"getId", &luna_wrapper_ork_Sampler::_bind_getId},
	{"base_toString", &luna_wrapper_ork_Sampler::_bind_base_toString},
	{"fromVoid", &luna_wrapper_ork_Sampler::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_Sampler::_bind_asVoid},
	{"getTable", &luna_wrapper_ork_Sampler::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< ork::Sampler >::converters[] = {
	{"ork::Object", &luna_wrapper_ork_Sampler::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< ork::Sampler >::enumValues[] = {
	{0,0}
};


