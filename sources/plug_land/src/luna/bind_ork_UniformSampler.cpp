#include <plug_common.h>

#include <luna/wrappers/wrapper_ork_UniformSampler.h>

class luna_wrapper_ork_UniformSampler {
public:
	typedef Luna< ork::UniformSampler > luna_t;

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

		ork::UniformSampler* self= (ork::UniformSampler*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::UniformSampler >::push(L,self,false);
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
		//ork::UniformSampler* ptr= dynamic_cast< ork::UniformSampler* >(Luna< ork::Object >::check(L,1));
		ork::UniformSampler* ptr= luna_caster< ork::Object, ork::UniformSampler >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< ork::UniformSampler >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSampler(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSampler(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Sampler >(L,2) ) return false;
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
	// ork::UniformType ork::UniformSampler::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luaL_error(L, "luna typecheck failed in ork::UniformType ork::UniformSampler::getType() const function, expected prototype:\nork::UniformType ork::UniformSampler::getType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::UniformSampler* self=Luna< ork::Object >::checkSubType< ork::UniformSampler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::UniformType ork::UniformSampler::getType() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::UniformType lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// ork::ptr< ork::Sampler > ork::UniformSampler::getSampler() const
	static int _bind_getSampler(lua_State *L) {
		if (!_lg_typecheck_getSampler(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Sampler > ork::UniformSampler::getSampler() const function, expected prototype:\nork::ptr< ork::Sampler > ork::UniformSampler::getSampler() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::UniformSampler* self=Luna< ork::Object >::checkSubType< ork::UniformSampler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Sampler > ork::UniformSampler::getSampler() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Sampler > lret = self->getSampler();
		Luna< ork::Sampler >::push(L,lret.get(),false);

		return 1;
	}

	// void ork::UniformSampler::setSampler(const ork::ptr< ork::Sampler > sampler)
	static int _bind_setSampler(lua_State *L) {
		if (!_lg_typecheck_setSampler(L)) {
			luaL_error(L, "luna typecheck failed in void ork::UniformSampler::setSampler(const ork::ptr< ork::Sampler > sampler) function, expected prototype:\nvoid ork::UniformSampler::setSampler(const ork::ptr< ork::Sampler > sampler)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Sampler > sampler = Luna< ork::Object >::checkSubType< ork::Sampler >(L,2);

		ork::UniformSampler* self=Luna< ork::Object >::checkSubType< ork::UniformSampler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::UniformSampler::setSampler(const ork::ptr< ork::Sampler >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setSampler(sampler);

		return 0;
	}

	// ork::ptr< ork::Texture > ork::UniformSampler::get() const
	static int _bind_get(lua_State *L) {
		if (!_lg_typecheck_get(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Texture > ork::UniformSampler::get() const function, expected prototype:\nork::ptr< ork::Texture > ork::UniformSampler::get() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::UniformSampler* self=Luna< ork::Object >::checkSubType< ork::UniformSampler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Texture > ork::UniformSampler::get() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Texture > lret = self->get();
		Luna< ork::Texture >::push(L,lret.get(),false);

		return 1;
	}

	// void ork::UniformSampler::set(ork::ptr< ork::Texture > value)
	static int _bind_set(lua_State *L) {
		if (!_lg_typecheck_set(L)) {
			luaL_error(L, "luna typecheck failed in void ork::UniformSampler::set(ork::ptr< ork::Texture > value) function, expected prototype:\nvoid ork::UniformSampler::set(ork::ptr< ork::Texture > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Texture > value = Luna< ork::Object >::checkSubType< ork::Texture >(L,2);

		ork::UniformSampler* self=Luna< ork::Object >::checkSubType< ork::UniformSampler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::UniformSampler::set(ork::ptr< ork::Texture >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set(value);

		return 0;
	}

	// void ork::UniformSampler::setValue(ork::ptr< ork::Value > v)
	static int _bind_setValue(lua_State *L) {
		if (!_lg_typecheck_setValue(L)) {
			luaL_error(L, "luna typecheck failed in void ork::UniformSampler::setValue(ork::ptr< ork::Value > v) function, expected prototype:\nvoid ork::UniformSampler::setValue(ork::ptr< ork::Value > v)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Value > v = Luna< ork::Object >::checkSubType< ork::Value >(L,2);

		ork::UniformSampler* self=Luna< ork::Object >::checkSubType< ork::UniformSampler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::UniformSampler::setValue(ork::ptr< ork::Value >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setValue(v);

		return 0;
	}

	// const char * ork::UniformSampler::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * ork::UniformSampler::base_toString() function, expected prototype:\nconst char * ork::UniformSampler::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::UniformSampler* self=Luna< ork::Object >::checkSubType< ork::UniformSampler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * ork::UniformSampler::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->UniformSampler::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// ork::UniformType ork::UniformSampler::base_getType() const
	static int _bind_base_getType(lua_State *L) {
		if (!_lg_typecheck_base_getType(L)) {
			luaL_error(L, "luna typecheck failed in ork::UniformType ork::UniformSampler::base_getType() const function, expected prototype:\nork::UniformType ork::UniformSampler::base_getType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::UniformSampler* self=Luna< ork::Object >::checkSubType< ork::UniformSampler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::UniformType ork::UniformSampler::base_getType() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::UniformType lret = self->UniformSampler::getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void ork::UniformSampler::base_setValue(ork::ptr< ork::Value > v)
	static int _bind_base_setValue(lua_State *L) {
		if (!_lg_typecheck_base_setValue(L)) {
			luaL_error(L, "luna typecheck failed in void ork::UniformSampler::base_setValue(ork::ptr< ork::Value > v) function, expected prototype:\nvoid ork::UniformSampler::base_setValue(ork::ptr< ork::Value > v)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Value > v = Luna< ork::Object >::checkSubType< ork::Value >(L,2);

		ork::UniformSampler* self=Luna< ork::Object >::checkSubType< ork::UniformSampler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::UniformSampler::base_setValue(ork::ptr< ork::Value >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->UniformSampler::setValue(v);

		return 0;
	}


	// Operator binds:

};

ork::UniformSampler* LunaTraits< ork::UniformSampler >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< ork::UniformSampler >::_bind_dtor(ork::UniformSampler* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< ork::UniformSampler >::className[] = "UniformSampler";
const char LunaTraits< ork::UniformSampler >::fullName[] = "ork::UniformSampler";
const char LunaTraits< ork::UniformSampler >::moduleName[] = "ork";
const char* LunaTraits< ork::UniformSampler >::parents[] = {"ork.Uniform", 0};
const int LunaTraits< ork::UniformSampler >::hash = 34034684;
const int LunaTraits< ork::UniformSampler >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< ork::UniformSampler >::methods[] = {
	{"getType", &luna_wrapper_ork_UniformSampler::_bind_getType},
	{"getSampler", &luna_wrapper_ork_UniformSampler::_bind_getSampler},
	{"setSampler", &luna_wrapper_ork_UniformSampler::_bind_setSampler},
	{"get", &luna_wrapper_ork_UniformSampler::_bind_get},
	{"set", &luna_wrapper_ork_UniformSampler::_bind_set},
	{"setValue", &luna_wrapper_ork_UniformSampler::_bind_setValue},
	{"base_toString", &luna_wrapper_ork_UniformSampler::_bind_base_toString},
	{"base_getType", &luna_wrapper_ork_UniformSampler::_bind_base_getType},
	{"base_setValue", &luna_wrapper_ork_UniformSampler::_bind_base_setValue},
	{"fromVoid", &luna_wrapper_ork_UniformSampler::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_UniformSampler::_bind_asVoid},
	{"getTable", &luna_wrapper_ork_UniformSampler::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< ork::UniformSampler >::converters[] = {
	{"ork::Object", &luna_wrapper_ork_UniformSampler::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< ork::UniformSampler >::enumValues[] = {
	{0,0}
};


