#include <plug_common.h>

#include <luna/wrappers/wrapper_ork_XMLResourceLoader.h>

class luna_wrapper_ork_XMLResourceLoader {
public:
	typedef Luna< ork::XMLResourceLoader > luna_t;

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

		ork::XMLResourceLoader* self= (ork::XMLResourceLoader*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::XMLResourceLoader >::push(L,self,false);
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
		//ork::XMLResourceLoader* ptr= dynamic_cast< ork::XMLResourceLoader* >(Luna< ork::Object >::check(L,1));
		ork::XMLResourceLoader* ptr= luna_caster< ork::Object, ork::XMLResourceLoader >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< ork::XMLResourceLoader >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_addPath(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addArchive(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

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

	inline static bool _lg_typecheck_base_findResource(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_loadResource(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_reloadResource(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::ResourceDescriptor >(L,3) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// ork::XMLResourceLoader::XMLResourceLoader()
	static ork::XMLResourceLoader* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::XMLResourceLoader::XMLResourceLoader() function, expected prototype:\nork::XMLResourceLoader::XMLResourceLoader()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new ork::XMLResourceLoader();
	}

	// ork::XMLResourceLoader::XMLResourceLoader(lua_Table * data)
	static ork::XMLResourceLoader* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::XMLResourceLoader::XMLResourceLoader(lua_Table * data) function, expected prototype:\nork::XMLResourceLoader::XMLResourceLoader(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_ork_XMLResourceLoader(L,NULL);
	}

	// Overload binder for ork::XMLResourceLoader::XMLResourceLoader
	static ork::XMLResourceLoader* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function XMLResourceLoader, cannot match any of the overloads for function XMLResourceLoader:\n  XMLResourceLoader()\n  XMLResourceLoader(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void ork::XMLResourceLoader::addPath(const std::string & path)
	static int _bind_addPath(lua_State *L) {
		if (!_lg_typecheck_addPath(L)) {
			luaL_error(L, "luna typecheck failed in void ork::XMLResourceLoader::addPath(const std::string & path) function, expected prototype:\nvoid ork::XMLResourceLoader::addPath(const std::string & path)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string path(lua_tostring(L,2),lua_objlen(L,2));

		ork::XMLResourceLoader* self=Luna< ork::Object >::checkSubType< ork::XMLResourceLoader >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::XMLResourceLoader::addPath(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addPath(path);

		return 0;
	}

	// void ork::XMLResourceLoader::addArchive(const std::string & archive)
	static int _bind_addArchive(lua_State *L) {
		if (!_lg_typecheck_addArchive(L)) {
			luaL_error(L, "luna typecheck failed in void ork::XMLResourceLoader::addArchive(const std::string & archive) function, expected prototype:\nvoid ork::XMLResourceLoader::addArchive(const std::string & archive)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string archive(lua_tostring(L,2),lua_objlen(L,2));

		ork::XMLResourceLoader* self=Luna< ork::Object >::checkSubType< ork::XMLResourceLoader >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::XMLResourceLoader::addArchive(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addArchive(archive);

		return 0;
	}

	// std::string ork::XMLResourceLoader::findResource(const std::string & name)
	static int _bind_findResource(lua_State *L) {
		if (!_lg_typecheck_findResource(L)) {
			luaL_error(L, "luna typecheck failed in std::string ork::XMLResourceLoader::findResource(const std::string & name) function, expected prototype:\nstd::string ork::XMLResourceLoader::findResource(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::XMLResourceLoader* self=Luna< ork::Object >::checkSubType< ork::XMLResourceLoader >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call std::string ork::XMLResourceLoader::findResource(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		std::string lret = self->findResource(name);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// ork::ptr< ork::ResourceDescriptor > ork::XMLResourceLoader::loadResource(const std::string & name)
	static int _bind_loadResource(lua_State *L) {
		if (!_lg_typecheck_loadResource(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::ResourceDescriptor > ork::XMLResourceLoader::loadResource(const std::string & name) function, expected prototype:\nork::ptr< ork::ResourceDescriptor > ork::XMLResourceLoader::loadResource(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::XMLResourceLoader* self=Luna< ork::Object >::checkSubType< ork::XMLResourceLoader >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::ResourceDescriptor > ork::XMLResourceLoader::loadResource(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::ResourceDescriptor > lret = self->loadResource(name);
		Luna< ork::ResourceDescriptor >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::ResourceDescriptor > ork::XMLResourceLoader::reloadResource(const std::string & name, ork::ptr< ork::ResourceDescriptor > currentValue)
	static int _bind_reloadResource(lua_State *L) {
		if (!_lg_typecheck_reloadResource(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::ResourceDescriptor > ork::XMLResourceLoader::reloadResource(const std::string & name, ork::ptr< ork::ResourceDescriptor > currentValue) function, expected prototype:\nork::ptr< ork::ResourceDescriptor > ork::XMLResourceLoader::reloadResource(const std::string & name, ork::ptr< ork::ResourceDescriptor > currentValue)\nClass arguments details:\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));
		ork::ptr< ork::ResourceDescriptor > currentValue = Luna< ork::Object >::checkSubType< ork::ResourceDescriptor >(L,3);

		ork::XMLResourceLoader* self=Luna< ork::Object >::checkSubType< ork::XMLResourceLoader >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::ResourceDescriptor > ork::XMLResourceLoader::reloadResource(const std::string &, ork::ptr< ork::ResourceDescriptor >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::ResourceDescriptor > lret = self->reloadResource(name, currentValue);
		Luna< ork::ResourceDescriptor >::push(L,lret.get(),false);

		return 1;
	}

	// const char * ork::XMLResourceLoader::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * ork::XMLResourceLoader::base_toString() function, expected prototype:\nconst char * ork::XMLResourceLoader::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::XMLResourceLoader* self=Luna< ork::Object >::checkSubType< ork::XMLResourceLoader >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * ork::XMLResourceLoader::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->XMLResourceLoader::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// std::string ork::XMLResourceLoader::base_findResource(const std::string & name)
	static int _bind_base_findResource(lua_State *L) {
		if (!_lg_typecheck_base_findResource(L)) {
			luaL_error(L, "luna typecheck failed in std::string ork::XMLResourceLoader::base_findResource(const std::string & name) function, expected prototype:\nstd::string ork::XMLResourceLoader::base_findResource(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::XMLResourceLoader* self=Luna< ork::Object >::checkSubType< ork::XMLResourceLoader >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call std::string ork::XMLResourceLoader::base_findResource(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		std::string lret = self->XMLResourceLoader::findResource(name);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// ork::ptr< ork::ResourceDescriptor > ork::XMLResourceLoader::base_loadResource(const std::string & name)
	static int _bind_base_loadResource(lua_State *L) {
		if (!_lg_typecheck_base_loadResource(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::ResourceDescriptor > ork::XMLResourceLoader::base_loadResource(const std::string & name) function, expected prototype:\nork::ptr< ork::ResourceDescriptor > ork::XMLResourceLoader::base_loadResource(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::XMLResourceLoader* self=Luna< ork::Object >::checkSubType< ork::XMLResourceLoader >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::ResourceDescriptor > ork::XMLResourceLoader::base_loadResource(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::ResourceDescriptor > lret = self->XMLResourceLoader::loadResource(name);
		Luna< ork::ResourceDescriptor >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::ResourceDescriptor > ork::XMLResourceLoader::base_reloadResource(const std::string & name, ork::ptr< ork::ResourceDescriptor > currentValue)
	static int _bind_base_reloadResource(lua_State *L) {
		if (!_lg_typecheck_base_reloadResource(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::ResourceDescriptor > ork::XMLResourceLoader::base_reloadResource(const std::string & name, ork::ptr< ork::ResourceDescriptor > currentValue) function, expected prototype:\nork::ptr< ork::ResourceDescriptor > ork::XMLResourceLoader::base_reloadResource(const std::string & name, ork::ptr< ork::ResourceDescriptor > currentValue)\nClass arguments details:\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));
		ork::ptr< ork::ResourceDescriptor > currentValue = Luna< ork::Object >::checkSubType< ork::ResourceDescriptor >(L,3);

		ork::XMLResourceLoader* self=Luna< ork::Object >::checkSubType< ork::XMLResourceLoader >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::ResourceDescriptor > ork::XMLResourceLoader::base_reloadResource(const std::string &, ork::ptr< ork::ResourceDescriptor >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::ResourceDescriptor > lret = self->XMLResourceLoader::reloadResource(name, currentValue);
		Luna< ork::ResourceDescriptor >::push(L,lret.get(),false);

		return 1;
	}


	// Operator binds:

};

ork::XMLResourceLoader* LunaTraits< ork::XMLResourceLoader >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ork_XMLResourceLoader::_bind_ctor(L);
}

void LunaTraits< ork::XMLResourceLoader >::_bind_dtor(ork::XMLResourceLoader* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< ork::XMLResourceLoader >::className[] = "XMLResourceLoader";
const char LunaTraits< ork::XMLResourceLoader >::fullName[] = "ork::XMLResourceLoader";
const char LunaTraits< ork::XMLResourceLoader >::moduleName[] = "ork";
const char* LunaTraits< ork::XMLResourceLoader >::parents[] = {"ork.ResourceLoader", 0};
const int LunaTraits< ork::XMLResourceLoader >::hash = 28260560;
const int LunaTraits< ork::XMLResourceLoader >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< ork::XMLResourceLoader >::methods[] = {
	{"addPath", &luna_wrapper_ork_XMLResourceLoader::_bind_addPath},
	{"addArchive", &luna_wrapper_ork_XMLResourceLoader::_bind_addArchive},
	{"findResource", &luna_wrapper_ork_XMLResourceLoader::_bind_findResource},
	{"loadResource", &luna_wrapper_ork_XMLResourceLoader::_bind_loadResource},
	{"reloadResource", &luna_wrapper_ork_XMLResourceLoader::_bind_reloadResource},
	{"base_toString", &luna_wrapper_ork_XMLResourceLoader::_bind_base_toString},
	{"base_findResource", &luna_wrapper_ork_XMLResourceLoader::_bind_base_findResource},
	{"base_loadResource", &luna_wrapper_ork_XMLResourceLoader::_bind_base_loadResource},
	{"base_reloadResource", &luna_wrapper_ork_XMLResourceLoader::_bind_base_reloadResource},
	{"fromVoid", &luna_wrapper_ork_XMLResourceLoader::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_XMLResourceLoader::_bind_asVoid},
	{"getTable", &luna_wrapper_ork_XMLResourceLoader::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< ork::XMLResourceLoader >::converters[] = {
	{"ork::Object", &luna_wrapper_ork_XMLResourceLoader::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< ork::XMLResourceLoader >::enumValues[] = {
	{0,0}
};


