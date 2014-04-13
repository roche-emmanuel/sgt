#include <plug_common.h>

#include <luna/wrappers/wrapper_ork_Uniform.h>

class luna_wrapper_ork_Uniform {
public:
	typedef Luna< ork::Uniform > luna_t;

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

		ork::Uniform* self= (ork::Uniform*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::Uniform >::push(L,self,false);
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
		//ork::Uniform* ptr= dynamic_cast< ork::Uniform* >(Luna< ork::Object >::check(L,1));
		ork::Uniform* ptr= luna_caster< ork::Object, ork::Uniform >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< ork::Uniform >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setValue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Value >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_toString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// ork::UniformType ork::Uniform::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luaL_error(L, "luna typecheck failed in ork::UniformType ork::Uniform::getType() const function, expected prototype:\nork::UniformType ork::Uniform::getType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Uniform* self=Luna< ork::Object >::checkSubType< ork::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::UniformType ork::Uniform::getType() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::UniformType lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// std::string ork::Uniform::getName() const
	static int _bind_getName(lua_State *L) {
		if (!_lg_typecheck_getName(L)) {
			luaL_error(L, "luna typecheck failed in std::string ork::Uniform::getName() const function, expected prototype:\nstd::string ork::Uniform::getName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Uniform* self=Luna< ork::Object >::checkSubType< ork::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call std::string ork::Uniform::getName() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		std::string lret = self->getName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void ork::Uniform::setValue(ork::ptr< ork::Value > v)
	static int _bind_setValue(lua_State *L) {
		if (!_lg_typecheck_setValue(L)) {
			luaL_error(L, "luna typecheck failed in void ork::Uniform::setValue(ork::ptr< ork::Value > v) function, expected prototype:\nvoid ork::Uniform::setValue(ork::ptr< ork::Value > v)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Value > v = Luna< ork::Object >::checkSubType< ork::Value >(L,2);

		ork::Uniform* self=Luna< ork::Object >::checkSubType< ork::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::Uniform::setValue(ork::ptr< ork::Value >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setValue(v);

		return 0;
	}

	// const char * ork::Uniform::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * ork::Uniform::base_toString() function, expected prototype:\nconst char * ork::Uniform::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Uniform* self=Luna< ork::Object >::checkSubType< ork::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * ork::Uniform::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Uniform::toString();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

ork::Uniform* LunaTraits< ork::Uniform >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// ork::UniformType ork::Uniform::getType() const
	// void ork::Uniform::setValue(ork::ptr< ork::Value > v)
	// void ork::Uniform::setValue()
}

void LunaTraits< ork::Uniform >::_bind_dtor(ork::Uniform* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< ork::Uniform >::className[] = "Uniform";
const char LunaTraits< ork::Uniform >::fullName[] = "ork::Uniform";
const char LunaTraits< ork::Uniform >::moduleName[] = "ork";
const char* LunaTraits< ork::Uniform >::parents[] = {"ork.Object", 0};
const int LunaTraits< ork::Uniform >::hash = 10512649;
const int LunaTraits< ork::Uniform >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< ork::Uniform >::methods[] = {
	{"getType", &luna_wrapper_ork_Uniform::_bind_getType},
	{"getName", &luna_wrapper_ork_Uniform::_bind_getName},
	{"setValue", &luna_wrapper_ork_Uniform::_bind_setValue},
	{"base_toString", &luna_wrapper_ork_Uniform::_bind_base_toString},
	{"fromVoid", &luna_wrapper_ork_Uniform::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_Uniform::_bind_asVoid},
	{"getTable", &luna_wrapper_ork_Uniform::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< ork::Uniform >::converters[] = {
	{"ork::Object", &luna_wrapper_ork_Uniform::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< ork::Uniform >::enumValues[] = {
	{0,0}
};


