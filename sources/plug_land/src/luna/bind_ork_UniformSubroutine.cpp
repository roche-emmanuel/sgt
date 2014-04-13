#include <plug_common.h>

#include <luna/wrappers/wrapper_ork_UniformSubroutine.h>

class luna_wrapper_ork_UniformSubroutine {
public:
	typedef Luna< ork::UniformSubroutine > luna_t;

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

		ork::UniformSubroutine* self= (ork::UniformSubroutine*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::UniformSubroutine >::push(L,self,false);
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
		//ork::UniformSubroutine* ptr= dynamic_cast< ork::UniformSubroutine* >(Luna< ork::Object >::check(L,1));
		ork::UniformSubroutine* ptr= luna_caster< ork::Object, ork::UniformSubroutine >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< ork::UniformSubroutine >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getStage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPossibleValues(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSubroutine(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_set(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSubroutine(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
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

	inline static bool _lg_typecheck_base_getType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setValue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Value >(L,2) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// ork::UniformType ork::UniformSubroutine::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luaL_error(L, "luna typecheck failed in ork::UniformType ork::UniformSubroutine::getType() const function, expected prototype:\nork::UniformType ork::UniformSubroutine::getType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::UniformSubroutine* self=Luna< ork::Object >::checkSubType< ork::UniformSubroutine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::UniformType ork::UniformSubroutine::getType() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::UniformType lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// ork::Stage ork::UniformSubroutine::getStage() const
	static int _bind_getStage(lua_State *L) {
		if (!_lg_typecheck_getStage(L)) {
			luaL_error(L, "luna typecheck failed in ork::Stage ork::UniformSubroutine::getStage() const function, expected prototype:\nork::Stage ork::UniformSubroutine::getStage() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::UniformSubroutine* self=Luna< ork::Object >::checkSubType< ork::UniformSubroutine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::Stage ork::UniformSubroutine::getStage() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::Stage lret = self->getStage();
		lua_pushnumber(L,lret);

		return 1;
	}

	// std::vector< std::string > ork::UniformSubroutine::getPossibleValues() const
	static int _bind_getPossibleValues(lua_State *L) {
		if (!_lg_typecheck_getPossibleValues(L)) {
			luaL_error(L, "luna typecheck failed in std::vector< std::string > ork::UniformSubroutine::getPossibleValues() const function, expected prototype:\nstd::vector< std::string > ork::UniformSubroutine::getPossibleValues() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::UniformSubroutine* self=Luna< ork::Object >::checkSubType< ork::UniformSubroutine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call std::vector< std::string > ork::UniformSubroutine::getPossibleValues() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		std::vector< std::string > stack_lret = self->getPossibleValues();
		std::vector< std::string >* lret = new std::vector< std::string >(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< std::vector< std::string > >::push(L,lret,true);

		return 1;
	}

	// int ork::UniformSubroutine::get()
	static int _bind_get(lua_State *L) {
		if (!_lg_typecheck_get(L)) {
			luaL_error(L, "luna typecheck failed in int ork::UniformSubroutine::get() function, expected prototype:\nint ork::UniformSubroutine::get()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::UniformSubroutine* self=Luna< ork::Object >::checkSubType< ork::UniformSubroutine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int ork::UniformSubroutine::get(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->get();
		lua_pushnumber(L,lret);

		return 1;
	}

	// std::string ork::UniformSubroutine::getSubroutine()
	static int _bind_getSubroutine(lua_State *L) {
		if (!_lg_typecheck_getSubroutine(L)) {
			luaL_error(L, "luna typecheck failed in std::string ork::UniformSubroutine::getSubroutine() function, expected prototype:\nstd::string ork::UniformSubroutine::getSubroutine()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::UniformSubroutine* self=Luna< ork::Object >::checkSubType< ork::UniformSubroutine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call std::string ork::UniformSubroutine::getSubroutine(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		std::string lret = self->getSubroutine();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void ork::UniformSubroutine::set(int subroutine)
	static int _bind_set(lua_State *L) {
		if (!_lg_typecheck_set(L)) {
			luaL_error(L, "luna typecheck failed in void ork::UniformSubroutine::set(int subroutine) function, expected prototype:\nvoid ork::UniformSubroutine::set(int subroutine)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int subroutine=(int)lua_tointeger(L,2);

		ork::UniformSubroutine* self=Luna< ork::Object >::checkSubType< ork::UniformSubroutine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::UniformSubroutine::set(int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set(subroutine);

		return 0;
	}

	// void ork::UniformSubroutine::setSubroutine(const std::string & subroutine)
	static int _bind_setSubroutine(lua_State *L) {
		if (!_lg_typecheck_setSubroutine(L)) {
			luaL_error(L, "luna typecheck failed in void ork::UniformSubroutine::setSubroutine(const std::string & subroutine) function, expected prototype:\nvoid ork::UniformSubroutine::setSubroutine(const std::string & subroutine)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string subroutine(lua_tostring(L,2),lua_objlen(L,2));

		ork::UniformSubroutine* self=Luna< ork::Object >::checkSubType< ork::UniformSubroutine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::UniformSubroutine::setSubroutine(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setSubroutine(subroutine);

		return 0;
	}

	// void ork::UniformSubroutine::setValue(ork::ptr< ork::Value > v)
	static int _bind_setValue(lua_State *L) {
		if (!_lg_typecheck_setValue(L)) {
			luaL_error(L, "luna typecheck failed in void ork::UniformSubroutine::setValue(ork::ptr< ork::Value > v) function, expected prototype:\nvoid ork::UniformSubroutine::setValue(ork::ptr< ork::Value > v)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Value > v = Luna< ork::Object >::checkSubType< ork::Value >(L,2);

		ork::UniformSubroutine* self=Luna< ork::Object >::checkSubType< ork::UniformSubroutine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::UniformSubroutine::setValue(ork::ptr< ork::Value >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setValue(v);

		return 0;
	}

	// const char * ork::UniformSubroutine::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * ork::UniformSubroutine::base_toString() function, expected prototype:\nconst char * ork::UniformSubroutine::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::UniformSubroutine* self=Luna< ork::Object >::checkSubType< ork::UniformSubroutine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * ork::UniformSubroutine::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->UniformSubroutine::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// ork::UniformType ork::UniformSubroutine::base_getType() const
	static int _bind_base_getType(lua_State *L) {
		if (!_lg_typecheck_base_getType(L)) {
			luaL_error(L, "luna typecheck failed in ork::UniformType ork::UniformSubroutine::base_getType() const function, expected prototype:\nork::UniformType ork::UniformSubroutine::base_getType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::UniformSubroutine* self=Luna< ork::Object >::checkSubType< ork::UniformSubroutine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::UniformType ork::UniformSubroutine::base_getType() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::UniformType lret = self->UniformSubroutine::getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void ork::UniformSubroutine::base_setValue(ork::ptr< ork::Value > v)
	static int _bind_base_setValue(lua_State *L) {
		if (!_lg_typecheck_base_setValue(L)) {
			luaL_error(L, "luna typecheck failed in void ork::UniformSubroutine::base_setValue(ork::ptr< ork::Value > v) function, expected prototype:\nvoid ork::UniformSubroutine::base_setValue(ork::ptr< ork::Value > v)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Value > v = Luna< ork::Object >::checkSubType< ork::Value >(L,2);

		ork::UniformSubroutine* self=Luna< ork::Object >::checkSubType< ork::UniformSubroutine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::UniformSubroutine::base_setValue(ork::ptr< ork::Value >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->UniformSubroutine::setValue(v);

		return 0;
	}


	// Operator binds:

};

ork::UniformSubroutine* LunaTraits< ork::UniformSubroutine >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< ork::UniformSubroutine >::_bind_dtor(ork::UniformSubroutine* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< ork::UniformSubroutine >::className[] = "UniformSubroutine";
const char LunaTraits< ork::UniformSubroutine >::fullName[] = "ork::UniformSubroutine";
const char LunaTraits< ork::UniformSubroutine >::moduleName[] = "ork";
const char* LunaTraits< ork::UniformSubroutine >::parents[] = {"ork.Uniform", 0};
const int LunaTraits< ork::UniformSubroutine >::hash = 81693665;
const int LunaTraits< ork::UniformSubroutine >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< ork::UniformSubroutine >::methods[] = {
	{"getType", &luna_wrapper_ork_UniformSubroutine::_bind_getType},
	{"getStage", &luna_wrapper_ork_UniformSubroutine::_bind_getStage},
	{"getPossibleValues", &luna_wrapper_ork_UniformSubroutine::_bind_getPossibleValues},
	{"get", &luna_wrapper_ork_UniformSubroutine::_bind_get},
	{"getSubroutine", &luna_wrapper_ork_UniformSubroutine::_bind_getSubroutine},
	{"set", &luna_wrapper_ork_UniformSubroutine::_bind_set},
	{"setSubroutine", &luna_wrapper_ork_UniformSubroutine::_bind_setSubroutine},
	{"setValue", &luna_wrapper_ork_UniformSubroutine::_bind_setValue},
	{"base_toString", &luna_wrapper_ork_UniformSubroutine::_bind_base_toString},
	{"base_getType", &luna_wrapper_ork_UniformSubroutine::_bind_base_getType},
	{"base_setValue", &luna_wrapper_ork_UniformSubroutine::_bind_base_setValue},
	{"fromVoid", &luna_wrapper_ork_UniformSubroutine::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_UniformSubroutine::_bind_asVoid},
	{"getTable", &luna_wrapper_ork_UniformSubroutine::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< ork::UniformSubroutine >::converters[] = {
	{"ork::Object", &luna_wrapper_ork_UniformSubroutine::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< ork::UniformSubroutine >::enumValues[] = {
	{0,0}
};


