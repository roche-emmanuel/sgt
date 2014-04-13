#include <plug_common.h>

#include <luna/wrappers/wrapper_ork_ResourceManager.h>

class luna_wrapper_ork_ResourceManager {
public:
	typedef Luna< ork::ResourceManager > luna_t;

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

		ork::ResourceManager* self= (ork::ResourceManager*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::ResourceManager >::push(L,self,false);
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
		//ork::ResourceManager* ptr= dynamic_cast< ork::ResourceManager* >(Luna< ork::Object >::check(L,1));
		ork::ResourceManager* ptr= luna_caster< ork::Object, ork::ResourceManager >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< ork::ResourceManager >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::ResourceLoader >(L,1) ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::ResourceLoader >(L,2) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getLoader(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_loadResource_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_loadResource_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::ResourceDescriptor >(L,2) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,89852901)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< TiXmlBase >::checkSubType< TiXmlElement >(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_updateResources(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_close(lua_State *L) {
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
	// ork::ResourceManager::ResourceManager(ork::ptr< ork::ResourceLoader > loader, unsigned int cacheSize = 0)
	static ork::ResourceManager* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::ResourceManager::ResourceManager(ork::ptr< ork::ResourceLoader > loader, unsigned int cacheSize = 0) function, expected prototype:\nork::ResourceManager::ResourceManager(ork::ptr< ork::ResourceLoader > loader, unsigned int cacheSize = 0)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		ork::ptr< ork::ResourceLoader > loader = Luna< ork::Object >::checkSubType< ork::ResourceLoader >(L,1);
		unsigned int cacheSize=luatop>1 ? (unsigned int)lua_tointeger(L,2) : (unsigned int)0;

		return new ork::ResourceManager(loader, cacheSize);
	}

	// ork::ResourceManager::ResourceManager(lua_Table * data, ork::ptr< ork::ResourceLoader > loader, unsigned int cacheSize = 0)
	static ork::ResourceManager* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::ResourceManager::ResourceManager(lua_Table * data, ork::ptr< ork::ResourceLoader > loader, unsigned int cacheSize = 0) function, expected prototype:\nork::ResourceManager::ResourceManager(lua_Table * data, ork::ptr< ork::ResourceLoader > loader, unsigned int cacheSize = 0)\nClass arguments details:\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		ork::ptr< ork::ResourceLoader > loader = Luna< ork::Object >::checkSubType< ork::ResourceLoader >(L,2);
		unsigned int cacheSize=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		return new wrapper_ork_ResourceManager(L,NULL, loader, cacheSize);
	}

	// Overload binder for ork::ResourceManager::ResourceManager
	static ork::ResourceManager* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ResourceManager, cannot match any of the overloads for function ResourceManager:\n  ResourceManager(ork::ptr< ork::ResourceLoader >, unsigned int)\n  ResourceManager(lua_Table *, ork::ptr< ork::ResourceLoader >, unsigned int)\n");
		return NULL;
	}


	// Function binds:
	// ork::ptr< ork::ResourceLoader > ork::ResourceManager::getLoader()
	static int _bind_getLoader(lua_State *L) {
		if (!_lg_typecheck_getLoader(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::ResourceLoader > ork::ResourceManager::getLoader() function, expected prototype:\nork::ptr< ork::ResourceLoader > ork::ResourceManager::getLoader()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::ResourceManager* self=Luna< ork::Object >::checkSubType< ork::ResourceManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::ResourceLoader > ork::ResourceManager::getLoader(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::ResourceLoader > lret = self->getLoader();
		Luna< ork::ResourceLoader >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::Object > ork::ResourceManager::loadResource(const std::string & name)
	static int _bind_loadResource_overload_1(lua_State *L) {
		if (!_lg_typecheck_loadResource_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Object > ork::ResourceManager::loadResource(const std::string & name) function, expected prototype:\nork::ptr< ork::Object > ork::ResourceManager::loadResource(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::ResourceManager* self=Luna< ork::Object >::checkSubType< ork::ResourceManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Object > ork::ResourceManager::loadResource(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Object > lret = self->loadResource(name);
		Luna< ork::Object >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::Object > ork::ResourceManager::loadResource(ork::ptr< ork::ResourceDescriptor > desc, const TiXmlElement * f)
	static int _bind_loadResource_overload_2(lua_State *L) {
		if (!_lg_typecheck_loadResource_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Object > ork::ResourceManager::loadResource(ork::ptr< ork::ResourceDescriptor > desc, const TiXmlElement * f) function, expected prototype:\nork::ptr< ork::Object > ork::ResourceManager::loadResource(ork::ptr< ork::ResourceDescriptor > desc, const TiXmlElement * f)\nClass arguments details:\narg 1 ID = [unknown]\narg 2 ID = 89852901\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::ResourceDescriptor > desc = Luna< ork::Object >::checkSubType< ork::ResourceDescriptor >(L,2);
		const TiXmlElement* f=(Luna< TiXmlBase >::checkSubType< TiXmlElement >(L,3));

		ork::ResourceManager* self=Luna< ork::Object >::checkSubType< ork::ResourceManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Object > ork::ResourceManager::loadResource(ork::ptr< ork::ResourceDescriptor >, const TiXmlElement *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Object > lret = self->loadResource(desc, f);
		Luna< ork::Object >::push(L,lret.get(),false);

		return 1;
	}

	// Overload binder for ork::ResourceManager::loadResource
	static int _bind_loadResource(lua_State *L) {
		if (_lg_typecheck_loadResource_overload_1(L)) return _bind_loadResource_overload_1(L);
		if (_lg_typecheck_loadResource_overload_2(L)) return _bind_loadResource_overload_2(L);

		luaL_error(L, "error in function loadResource, cannot match any of the overloads for function loadResource:\n  loadResource(const std::string &)\n  loadResource(ork::ptr< ork::ResourceDescriptor >, const TiXmlElement *)\n");
		return 0;
	}

	// bool ork::ResourceManager::updateResources()
	static int _bind_updateResources(lua_State *L) {
		if (!_lg_typecheck_updateResources(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::ResourceManager::updateResources() function, expected prototype:\nbool ork::ResourceManager::updateResources()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::ResourceManager* self=Luna< ork::Object >::checkSubType< ork::ResourceManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::ResourceManager::updateResources(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->updateResources();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void ork::ResourceManager::close()
	static int _bind_close(lua_State *L) {
		if (!_lg_typecheck_close(L)) {
			luaL_error(L, "luna typecheck failed in void ork::ResourceManager::close() function, expected prototype:\nvoid ork::ResourceManager::close()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::ResourceManager* self=Luna< ork::Object >::checkSubType< ork::ResourceManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::ResourceManager::close(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->close();

		return 0;
	}

	// const char * ork::ResourceManager::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * ork::ResourceManager::base_toString() function, expected prototype:\nconst char * ork::ResourceManager::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::ResourceManager* self=Luna< ork::Object >::checkSubType< ork::ResourceManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * ork::ResourceManager::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->ResourceManager::toString();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

ork::ResourceManager* LunaTraits< ork::ResourceManager >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ork_ResourceManager::_bind_ctor(L);
}

void LunaTraits< ork::ResourceManager >::_bind_dtor(ork::ResourceManager* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< ork::ResourceManager >::className[] = "ResourceManager";
const char LunaTraits< ork::ResourceManager >::fullName[] = "ork::ResourceManager";
const char LunaTraits< ork::ResourceManager >::moduleName[] = "ork";
const char* LunaTraits< ork::ResourceManager >::parents[] = {"ork.Object", 0};
const int LunaTraits< ork::ResourceManager >::hash = 43261939;
const int LunaTraits< ork::ResourceManager >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< ork::ResourceManager >::methods[] = {
	{"getLoader", &luna_wrapper_ork_ResourceManager::_bind_getLoader},
	{"loadResource", &luna_wrapper_ork_ResourceManager::_bind_loadResource},
	{"updateResources", &luna_wrapper_ork_ResourceManager::_bind_updateResources},
	{"close", &luna_wrapper_ork_ResourceManager::_bind_close},
	{"base_toString", &luna_wrapper_ork_ResourceManager::_bind_base_toString},
	{"fromVoid", &luna_wrapper_ork_ResourceManager::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_ResourceManager::_bind_asVoid},
	{"getTable", &luna_wrapper_ork_ResourceManager::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< ork::ResourceManager >::converters[] = {
	{"ork::Object", &luna_wrapper_ork_ResourceManager::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< ork::ResourceManager >::enumValues[] = {
	{0,0}
};


