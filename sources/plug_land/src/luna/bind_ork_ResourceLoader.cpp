#include <plug_common.h>

#include <luna/wrappers/wrapper_ork_ResourceLoader.h>

class luna_wrapper_ork_ResourceLoader {
public:
	typedef Luna< ork::ResourceLoader > luna_t;

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

		ork::ResourceLoader* self= (ork::ResourceLoader*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::ResourceLoader >::push(L,self,false);
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
		//ork::ResourceLoader* ptr= dynamic_cast< ork::ResourceLoader* >(Luna< ork::Object >::check(L,1));
		ork::ResourceLoader* ptr= luna_caster< ork::Object, ork::ResourceLoader >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< ork::ResourceLoader >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_findResource(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_loadResource(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_reloadResource(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::ResourceDescriptor >(L,3) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_toString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// ork::ResourceLoader::ResourceLoader(lua_Table * data)
	static ork::ResourceLoader* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in ork::ResourceLoader::ResourceLoader(lua_Table * data) function, expected prototype:\nork::ResourceLoader::ResourceLoader(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_ork_ResourceLoader(L,NULL);
	}


	// Function binds:
	// std::string ork::ResourceLoader::findResource(const std::string & name)
	static int _bind_findResource(lua_State *L) {
		if (!_lg_typecheck_findResource(L)) {
			luaL_error(L, "luna typecheck failed in std::string ork::ResourceLoader::findResource(const std::string & name) function, expected prototype:\nstd::string ork::ResourceLoader::findResource(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::ResourceLoader* self=Luna< ork::Object >::checkSubType< ork::ResourceLoader >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call std::string ork::ResourceLoader::findResource(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		std::string lret = self->findResource(name);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// ork::ptr< ork::ResourceDescriptor > ork::ResourceLoader::loadResource(const std::string & name)
	static int _bind_loadResource(lua_State *L) {
		if (!_lg_typecheck_loadResource(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::ResourceDescriptor > ork::ResourceLoader::loadResource(const std::string & name) function, expected prototype:\nork::ptr< ork::ResourceDescriptor > ork::ResourceLoader::loadResource(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::ResourceLoader* self=Luna< ork::Object >::checkSubType< ork::ResourceLoader >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::ResourceDescriptor > ork::ResourceLoader::loadResource(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::ResourceDescriptor > lret = self->loadResource(name);
		Luna< ork::ResourceDescriptor >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::ResourceDescriptor > ork::ResourceLoader::reloadResource(const std::string & name, ork::ptr< ork::ResourceDescriptor > currentValue)
	static int _bind_reloadResource(lua_State *L) {
		if (!_lg_typecheck_reloadResource(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::ResourceDescriptor > ork::ResourceLoader::reloadResource(const std::string & name, ork::ptr< ork::ResourceDescriptor > currentValue) function, expected prototype:\nork::ptr< ork::ResourceDescriptor > ork::ResourceLoader::reloadResource(const std::string & name, ork::ptr< ork::ResourceDescriptor > currentValue)\nClass arguments details:\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));
		ork::ptr< ork::ResourceDescriptor > currentValue = Luna< ork::Object >::checkSubType< ork::ResourceDescriptor >(L,3);

		ork::ResourceLoader* self=Luna< ork::Object >::checkSubType< ork::ResourceLoader >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::ResourceDescriptor > ork::ResourceLoader::reloadResource(const std::string &, ork::ptr< ork::ResourceDescriptor >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::ResourceDescriptor > lret = self->reloadResource(name, currentValue);
		Luna< ork::ResourceDescriptor >::push(L,lret.get(),false);

		return 1;
	}

	// const char * ork::ResourceLoader::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * ork::ResourceLoader::base_toString() function, expected prototype:\nconst char * ork::ResourceLoader::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::ResourceLoader* self=Luna< ork::Object >::checkSubType< ork::ResourceLoader >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * ork::ResourceLoader::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->ResourceLoader::toString();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

ork::ResourceLoader* LunaTraits< ork::ResourceLoader >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ork_ResourceLoader::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// std::string ork::ResourceLoader::findResource(const std::string & name)
	// ork::ptr< ork::ResourceDescriptor > ork::ResourceLoader::loadResource(const std::string & name)
	// ork::ptr< ork::ResourceDescriptor > ork::ResourceLoader::reloadResource(const std::string & name, ork::ptr< ork::ResourceDescriptor > currentValue)
}

void LunaTraits< ork::ResourceLoader >::_bind_dtor(ork::ResourceLoader* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< ork::ResourceLoader >::className[] = "ResourceLoader";
const char LunaTraits< ork::ResourceLoader >::fullName[] = "ork::ResourceLoader";
const char LunaTraits< ork::ResourceLoader >::moduleName[] = "ork";
const char* LunaTraits< ork::ResourceLoader >::parents[] = {"ork.Object", 0};
const int LunaTraits< ork::ResourceLoader >::hash = 27246729;
const int LunaTraits< ork::ResourceLoader >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< ork::ResourceLoader >::methods[] = {
	{"findResource", &luna_wrapper_ork_ResourceLoader::_bind_findResource},
	{"loadResource", &luna_wrapper_ork_ResourceLoader::_bind_loadResource},
	{"reloadResource", &luna_wrapper_ork_ResourceLoader::_bind_reloadResource},
	{"base_toString", &luna_wrapper_ork_ResourceLoader::_bind_base_toString},
	{"fromVoid", &luna_wrapper_ork_ResourceLoader::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_ResourceLoader::_bind_asVoid},
	{"getTable", &luna_wrapper_ork_ResourceLoader::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< ork::ResourceLoader >::converters[] = {
	{"ork::Object", &luna_wrapper_ork_ResourceLoader::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< ork::ResourceLoader >::enumValues[] = {
	{0,0}
};


