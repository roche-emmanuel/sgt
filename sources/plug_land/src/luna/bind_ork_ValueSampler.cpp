#include <plug_common.h>

#include <luna/wrappers/wrapper_ork_ValueSampler.h>

class luna_wrapper_ork_ValueSampler {
public:
	typedef Luna< ork::ValueSampler > luna_t;

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

		ork::ValueSampler* self= (ork::ValueSampler*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::ValueSampler >::push(L,self,false);
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
		//ork::ValueSampler* ptr= dynamic_cast< ork::ValueSampler* >(Luna< ork::Object >::check(L,1));
		ork::ValueSampler* ptr= luna_caster< ork::Object, ork::ValueSampler >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< ork::ValueSampler >::push(L,ptr,false);
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
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Texture >(L,3) ) return false;
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
		if( !Luna<void>::has_uniqueid(L,4,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Texture >(L,4) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_set(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Texture >(L,2) ) return false;
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
	// ork::ValueSampler::ValueSampler(ork::UniformType type, const std::string & name)
	static ork::ValueSampler* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::ValueSampler::ValueSampler(ork::UniformType type, const std::string & name) function, expected prototype:\nork::ValueSampler::ValueSampler(ork::UniformType type, const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::UniformType type=(ork::UniformType)lua_tointeger(L,1);
		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		return new ork::ValueSampler(type, name);
	}

	// ork::ValueSampler::ValueSampler(ork::UniformType type, const std::string & name, ork::ptr< ork::Texture > value)
	static ork::ValueSampler* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::ValueSampler::ValueSampler(ork::UniformType type, const std::string & name, ork::ptr< ork::Texture > value) function, expected prototype:\nork::ValueSampler::ValueSampler(ork::UniformType type, const std::string & name, ork::ptr< ork::Texture > value)\nClass arguments details:\narg 3 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::UniformType type=(ork::UniformType)lua_tointeger(L,1);
		std::string name(lua_tostring(L,2),lua_objlen(L,2));
		ork::ptr< ork::Texture > value = Luna< ork::Object >::checkSubType< ork::Texture >(L,3);

		return new ork::ValueSampler(type, name, value);
	}

	// ork::ValueSampler::ValueSampler(lua_Table * data, ork::UniformType type, const std::string & name)
	static ork::ValueSampler* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in ork::ValueSampler::ValueSampler(lua_Table * data, ork::UniformType type, const std::string & name) function, expected prototype:\nork::ValueSampler::ValueSampler(lua_Table * data, ork::UniformType type, const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::UniformType type=(ork::UniformType)lua_tointeger(L,2);
		std::string name(lua_tostring(L,3),lua_objlen(L,3));

		return new wrapper_ork_ValueSampler(L,NULL, type, name);
	}

	// ork::ValueSampler::ValueSampler(lua_Table * data, ork::UniformType type, const std::string & name, ork::ptr< ork::Texture > value)
	static ork::ValueSampler* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in ork::ValueSampler::ValueSampler(lua_Table * data, ork::UniformType type, const std::string & name, ork::ptr< ork::Texture > value) function, expected prototype:\nork::ValueSampler::ValueSampler(lua_Table * data, ork::UniformType type, const std::string & name, ork::ptr< ork::Texture > value)\nClass arguments details:\narg 4 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::UniformType type=(ork::UniformType)lua_tointeger(L,2);
		std::string name(lua_tostring(L,3),lua_objlen(L,3));
		ork::ptr< ork::Texture > value = Luna< ork::Object >::checkSubType< ork::Texture >(L,4);

		return new wrapper_ork_ValueSampler(L,NULL, type, name, value);
	}

	// Overload binder for ork::ValueSampler::ValueSampler
	static ork::ValueSampler* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function ValueSampler, cannot match any of the overloads for function ValueSampler:\n  ValueSampler(ork::UniformType, const std::string &)\n  ValueSampler(ork::UniformType, const std::string &, ork::ptr< ork::Texture >)\n  ValueSampler(lua_Table *, ork::UniformType, const std::string &)\n  ValueSampler(lua_Table *, ork::UniformType, const std::string &, ork::ptr< ork::Texture >)\n");
		return NULL;
	}


	// Function binds:
	// ork::UniformType ork::ValueSampler::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luaL_error(L, "luna typecheck failed in ork::UniformType ork::ValueSampler::getType() const function, expected prototype:\nork::UniformType ork::ValueSampler::getType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::ValueSampler* self=Luna< ork::Object >::checkSubType< ork::ValueSampler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::UniformType ork::ValueSampler::getType() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::UniformType lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// ork::ptr< ork::Texture > ork::ValueSampler::get() const
	static int _bind_get(lua_State *L) {
		if (!_lg_typecheck_get(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Texture > ork::ValueSampler::get() const function, expected prototype:\nork::ptr< ork::Texture > ork::ValueSampler::get() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::ValueSampler* self=Luna< ork::Object >::checkSubType< ork::ValueSampler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Texture > ork::ValueSampler::get() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Texture > lret = self->get();
		Luna< ork::Texture >::push(L,lret.get(),false);

		return 1;
	}

	// void ork::ValueSampler::set(const ork::ptr< ork::Texture > value)
	static int _bind_set(lua_State *L) {
		if (!_lg_typecheck_set(L)) {
			luaL_error(L, "luna typecheck failed in void ork::ValueSampler::set(const ork::ptr< ork::Texture > value) function, expected prototype:\nvoid ork::ValueSampler::set(const ork::ptr< ork::Texture > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Texture > value = Luna< ork::Object >::checkSubType< ork::Texture >(L,2);

		ork::ValueSampler* self=Luna< ork::Object >::checkSubType< ork::ValueSampler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::ValueSampler::set(const ork::ptr< ork::Texture >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set(value);

		return 0;
	}

	// const char * ork::ValueSampler::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * ork::ValueSampler::base_toString() function, expected prototype:\nconst char * ork::ValueSampler::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::ValueSampler* self=Luna< ork::Object >::checkSubType< ork::ValueSampler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * ork::ValueSampler::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->ValueSampler::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// ork::UniformType ork::ValueSampler::base_getType() const
	static int _bind_base_getType(lua_State *L) {
		if (!_lg_typecheck_base_getType(L)) {
			luaL_error(L, "luna typecheck failed in ork::UniformType ork::ValueSampler::base_getType() const function, expected prototype:\nork::UniformType ork::ValueSampler::base_getType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::ValueSampler* self=Luna< ork::Object >::checkSubType< ork::ValueSampler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::UniformType ork::ValueSampler::base_getType() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::UniformType lret = self->ValueSampler::getType();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

ork::ValueSampler* LunaTraits< ork::ValueSampler >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ork_ValueSampler::_bind_ctor(L);
}

void LunaTraits< ork::ValueSampler >::_bind_dtor(ork::ValueSampler* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< ork::ValueSampler >::className[] = "ValueSampler";
const char LunaTraits< ork::ValueSampler >::fullName[] = "ork::ValueSampler";
const char LunaTraits< ork::ValueSampler >::moduleName[] = "ork";
const char* LunaTraits< ork::ValueSampler >::parents[] = {"ork.Value", 0};
const int LunaTraits< ork::ValueSampler >::hash = 96782362;
const int LunaTraits< ork::ValueSampler >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< ork::ValueSampler >::methods[] = {
	{"getType", &luna_wrapper_ork_ValueSampler::_bind_getType},
	{"get", &luna_wrapper_ork_ValueSampler::_bind_get},
	{"set", &luna_wrapper_ork_ValueSampler::_bind_set},
	{"base_toString", &luna_wrapper_ork_ValueSampler::_bind_base_toString},
	{"base_getType", &luna_wrapper_ork_ValueSampler::_bind_base_getType},
	{"fromVoid", &luna_wrapper_ork_ValueSampler::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_ValueSampler::_bind_asVoid},
	{"getTable", &luna_wrapper_ork_ValueSampler::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< ork::ValueSampler >::converters[] = {
	{"ork::Object", &luna_wrapper_ork_ValueSampler::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< ork::ValueSampler >::enumValues[] = {
	{0,0}
};


