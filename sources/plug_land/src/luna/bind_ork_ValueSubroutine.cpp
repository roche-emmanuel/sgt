#include <plug_common.h>

#include <luna/wrappers/wrapper_ork_ValueSubroutine.h>

class luna_wrapper_ork_ValueSubroutine {
public:
	typedef Luna< ork::ValueSubroutine > luna_t;

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

		ork::ValueSubroutine* self= (ork::ValueSubroutine*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::ValueSubroutine >::push(L,self,false);
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
		//ork::ValueSubroutine* ptr= dynamic_cast< ork::ValueSubroutine* >(Luna< ork::Object >::check(L,1));
		ork::ValueSubroutine* ptr= luna_caster< ork::Object, ork::ValueSubroutine >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< ork::ValueSubroutine >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getStage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_set(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// ork::ValueSubroutine::ValueSubroutine(ork::Stage stage, const std::string & name)
	static ork::ValueSubroutine* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::ValueSubroutine::ValueSubroutine(ork::Stage stage, const std::string & name) function, expected prototype:\nork::ValueSubroutine::ValueSubroutine(ork::Stage stage, const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::Stage stage=(ork::Stage)lua_tointeger(L,1);
		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		return new ork::ValueSubroutine(stage, name);
	}

	// ork::ValueSubroutine::ValueSubroutine(ork::Stage stage, const std::string & name, const std::string & value)
	static ork::ValueSubroutine* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::ValueSubroutine::ValueSubroutine(ork::Stage stage, const std::string & name, const std::string & value) function, expected prototype:\nork::ValueSubroutine::ValueSubroutine(ork::Stage stage, const std::string & name, const std::string & value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::Stage stage=(ork::Stage)lua_tointeger(L,1);
		std::string name(lua_tostring(L,2),lua_objlen(L,2));
		std::string value(lua_tostring(L,3),lua_objlen(L,3));

		return new ork::ValueSubroutine(stage, name, value);
	}

	// ork::ValueSubroutine::ValueSubroutine(lua_Table * data, ork::Stage stage, const std::string & name)
	static ork::ValueSubroutine* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in ork::ValueSubroutine::ValueSubroutine(lua_Table * data, ork::Stage stage, const std::string & name) function, expected prototype:\nork::ValueSubroutine::ValueSubroutine(lua_Table * data, ork::Stage stage, const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::Stage stage=(ork::Stage)lua_tointeger(L,2);
		std::string name(lua_tostring(L,3),lua_objlen(L,3));

		return new wrapper_ork_ValueSubroutine(L,NULL, stage, name);
	}

	// ork::ValueSubroutine::ValueSubroutine(lua_Table * data, ork::Stage stage, const std::string & name, const std::string & value)
	static ork::ValueSubroutine* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in ork::ValueSubroutine::ValueSubroutine(lua_Table * data, ork::Stage stage, const std::string & name, const std::string & value) function, expected prototype:\nork::ValueSubroutine::ValueSubroutine(lua_Table * data, ork::Stage stage, const std::string & name, const std::string & value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::Stage stage=(ork::Stage)lua_tointeger(L,2);
		std::string name(lua_tostring(L,3),lua_objlen(L,3));
		std::string value(lua_tostring(L,4),lua_objlen(L,4));

		return new wrapper_ork_ValueSubroutine(L,NULL, stage, name, value);
	}

	// Overload binder for ork::ValueSubroutine::ValueSubroutine
	static ork::ValueSubroutine* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function ValueSubroutine, cannot match any of the overloads for function ValueSubroutine:\n  ValueSubroutine(ork::Stage, const std::string &)\n  ValueSubroutine(ork::Stage, const std::string &, const std::string &)\n  ValueSubroutine(lua_Table *, ork::Stage, const std::string &)\n  ValueSubroutine(lua_Table *, ork::Stage, const std::string &, const std::string &)\n");
		return NULL;
	}


	// Function binds:
	// ork::UniformType ork::ValueSubroutine::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luaL_error(L, "luna typecheck failed in ork::UniformType ork::ValueSubroutine::getType() const function, expected prototype:\nork::UniformType ork::ValueSubroutine::getType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::ValueSubroutine* self=Luna< ork::Object >::checkSubType< ork::ValueSubroutine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::UniformType ork::ValueSubroutine::getType() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::UniformType lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// ork::Stage ork::ValueSubroutine::getStage() const
	static int _bind_getStage(lua_State *L) {
		if (!_lg_typecheck_getStage(L)) {
			luaL_error(L, "luna typecheck failed in ork::Stage ork::ValueSubroutine::getStage() const function, expected prototype:\nork::Stage ork::ValueSubroutine::getStage() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::ValueSubroutine* self=Luna< ork::Object >::checkSubType< ork::ValueSubroutine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::Stage ork::ValueSubroutine::getStage() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::Stage lret = self->getStage();
		lua_pushnumber(L,lret);

		return 1;
	}

	// std::string ork::ValueSubroutine::get() const
	static int _bind_get(lua_State *L) {
		if (!_lg_typecheck_get(L)) {
			luaL_error(L, "luna typecheck failed in std::string ork::ValueSubroutine::get() const function, expected prototype:\nstd::string ork::ValueSubroutine::get() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::ValueSubroutine* self=Luna< ork::Object >::checkSubType< ork::ValueSubroutine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call std::string ork::ValueSubroutine::get() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		std::string lret = self->get();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void ork::ValueSubroutine::set(const std::string & value)
	static int _bind_set(lua_State *L) {
		if (!_lg_typecheck_set(L)) {
			luaL_error(L, "luna typecheck failed in void ork::ValueSubroutine::set(const std::string & value) function, expected prototype:\nvoid ork::ValueSubroutine::set(const std::string & value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string value(lua_tostring(L,2),lua_objlen(L,2));

		ork::ValueSubroutine* self=Luna< ork::Object >::checkSubType< ork::ValueSubroutine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::ValueSubroutine::set(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set(value);

		return 0;
	}

	// const char * ork::ValueSubroutine::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * ork::ValueSubroutine::base_toString() function, expected prototype:\nconst char * ork::ValueSubroutine::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::ValueSubroutine* self=Luna< ork::Object >::checkSubType< ork::ValueSubroutine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * ork::ValueSubroutine::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->ValueSubroutine::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// ork::UniformType ork::ValueSubroutine::base_getType() const
	static int _bind_base_getType(lua_State *L) {
		if (!_lg_typecheck_base_getType(L)) {
			luaL_error(L, "luna typecheck failed in ork::UniformType ork::ValueSubroutine::base_getType() const function, expected prototype:\nork::UniformType ork::ValueSubroutine::base_getType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::ValueSubroutine* self=Luna< ork::Object >::checkSubType< ork::ValueSubroutine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::UniformType ork::ValueSubroutine::base_getType() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::UniformType lret = self->ValueSubroutine::getType();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

ork::ValueSubroutine* LunaTraits< ork::ValueSubroutine >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ork_ValueSubroutine::_bind_ctor(L);
}

void LunaTraits< ork::ValueSubroutine >::_bind_dtor(ork::ValueSubroutine* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< ork::ValueSubroutine >::className[] = "ValueSubroutine";
const char LunaTraits< ork::ValueSubroutine >::fullName[] = "ork::ValueSubroutine";
const char LunaTraits< ork::ValueSubroutine >::moduleName[] = "ork";
const char* LunaTraits< ork::ValueSubroutine >::parents[] = {"ork.Value", 0};
const int LunaTraits< ork::ValueSubroutine >::hash = 97818225;
const int LunaTraits< ork::ValueSubroutine >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< ork::ValueSubroutine >::methods[] = {
	{"getType", &luna_wrapper_ork_ValueSubroutine::_bind_getType},
	{"getStage", &luna_wrapper_ork_ValueSubroutine::_bind_getStage},
	{"get", &luna_wrapper_ork_ValueSubroutine::_bind_get},
	{"set", &luna_wrapper_ork_ValueSubroutine::_bind_set},
	{"base_toString", &luna_wrapper_ork_ValueSubroutine::_bind_base_toString},
	{"base_getType", &luna_wrapper_ork_ValueSubroutine::_bind_base_getType},
	{"fromVoid", &luna_wrapper_ork_ValueSubroutine::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_ValueSubroutine::_bind_asVoid},
	{"getTable", &luna_wrapper_ork_ValueSubroutine::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< ork::ValueSubroutine >::converters[] = {
	{"ork::Object", &luna_wrapper_ork_ValueSubroutine::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< ork::ValueSubroutine >::enumValues[] = {
	{0,0}
};


