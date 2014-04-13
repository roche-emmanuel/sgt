#include <plug_common.h>

#include <luna/wrappers/wrapper_ork_CompiledResourceLoader_StaticResourceDescriptor.h>

class luna_wrapper_ork_CompiledResourceLoader_StaticResourceDescriptor {
public:
	typedef Luna< ork::CompiledResourceLoader::StaticResourceDescriptor > luna_t;

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

		ork::CompiledResourceLoader::StaticResourceDescriptor* self= (ork::CompiledResourceLoader::StaticResourceDescriptor*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::CompiledResourceLoader::StaticResourceDescriptor >::push(L,self,false);
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
		//ork::CompiledResourceLoader::StaticResourceDescriptor* ptr= dynamic_cast< ork::CompiledResourceLoader::StaticResourceDescriptor* >(Luna< ork::Object >::check(L,1));
		ork::CompiledResourceLoader::StaticResourceDescriptor* ptr= luna_caster< ork::Object, ork::CompiledResourceLoader::StaticResourceDescriptor >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< ork::CompiledResourceLoader::StaticResourceDescriptor >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,89852901)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< TiXmlBase >::checkSubType< TiXmlElement >(L,1)) ) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,89852901)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< TiXmlBase >::checkSubType< TiXmlElement >(L,2)) ) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_clearData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_toString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_clearData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// ork::CompiledResourceLoader::StaticResourceDescriptor::StaticResourceDescriptor(const TiXmlElement * descriptor, unsigned char * data, unsigned int size)
	static ork::CompiledResourceLoader::StaticResourceDescriptor* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::CompiledResourceLoader::StaticResourceDescriptor::StaticResourceDescriptor(const TiXmlElement * descriptor, unsigned char * data, unsigned int size) function, expected prototype:\nork::CompiledResourceLoader::StaticResourceDescriptor::StaticResourceDescriptor(const TiXmlElement * descriptor, unsigned char * data, unsigned int size)\nClass arguments details:\narg 1 ID = 89852901\n\n%s",luna_dumpStack(L).c_str());
		}

		const TiXmlElement* descriptor=(Luna< TiXmlBase >::checkSubType< TiXmlElement >(L,1));
		unsigned char data = (unsigned char)(lua_tointeger(L,2));
		unsigned int size=(unsigned int)lua_tointeger(L,3);

		return new ork::CompiledResourceLoader::StaticResourceDescriptor(descriptor, &data, size);
	}

	// ork::CompiledResourceLoader::StaticResourceDescriptor::StaticResourceDescriptor(lua_Table * data, const TiXmlElement * descriptor, unsigned char * data, unsigned int size)
	static ork::CompiledResourceLoader::StaticResourceDescriptor* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::CompiledResourceLoader::StaticResourceDescriptor::StaticResourceDescriptor(lua_Table * data, const TiXmlElement * descriptor, unsigned char * data, unsigned int size) function, expected prototype:\nork::CompiledResourceLoader::StaticResourceDescriptor::StaticResourceDescriptor(lua_Table * data, const TiXmlElement * descriptor, unsigned char * data, unsigned int size)\nClass arguments details:\narg 2 ID = 89852901\n\n%s",luna_dumpStack(L).c_str());
		}

		const TiXmlElement* descriptor=(Luna< TiXmlBase >::checkSubType< TiXmlElement >(L,2));
		unsigned char data = (unsigned char)(lua_tointeger(L,3));
		unsigned int size=(unsigned int)lua_tointeger(L,4);

		return new wrapper_ork_CompiledResourceLoader_StaticResourceDescriptor(L,NULL, descriptor, &data, size);
	}

	// Overload binder for ork::CompiledResourceLoader::StaticResourceDescriptor::StaticResourceDescriptor
	static ork::CompiledResourceLoader::StaticResourceDescriptor* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function StaticResourceDescriptor, cannot match any of the overloads for function StaticResourceDescriptor:\n  StaticResourceDescriptor(const TiXmlElement *, unsigned char *, unsigned int)\n  StaticResourceDescriptor(lua_Table *, const TiXmlElement *, unsigned char *, unsigned int)\n");
		return NULL;
	}


	// Function binds:
	// void ork::CompiledResourceLoader::StaticResourceDescriptor::clearData()
	static int _bind_clearData(lua_State *L) {
		if (!_lg_typecheck_clearData(L)) {
			luaL_error(L, "luna typecheck failed in void ork::CompiledResourceLoader::StaticResourceDescriptor::clearData() function, expected prototype:\nvoid ork::CompiledResourceLoader::StaticResourceDescriptor::clearData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::CompiledResourceLoader::StaticResourceDescriptor* self=Luna< ork::Object >::checkSubType< ork::CompiledResourceLoader::StaticResourceDescriptor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::CompiledResourceLoader::StaticResourceDescriptor::clearData(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->clearData();

		return 0;
	}

	// const char * ork::CompiledResourceLoader::StaticResourceDescriptor::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * ork::CompiledResourceLoader::StaticResourceDescriptor::base_toString() function, expected prototype:\nconst char * ork::CompiledResourceLoader::StaticResourceDescriptor::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::CompiledResourceLoader::StaticResourceDescriptor* self=Luna< ork::Object >::checkSubType< ork::CompiledResourceLoader::StaticResourceDescriptor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * ork::CompiledResourceLoader::StaticResourceDescriptor::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->StaticResourceDescriptor::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// void ork::CompiledResourceLoader::StaticResourceDescriptor::base_clearData()
	static int _bind_base_clearData(lua_State *L) {
		if (!_lg_typecheck_base_clearData(L)) {
			luaL_error(L, "luna typecheck failed in void ork::CompiledResourceLoader::StaticResourceDescriptor::base_clearData() function, expected prototype:\nvoid ork::CompiledResourceLoader::StaticResourceDescriptor::base_clearData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::CompiledResourceLoader::StaticResourceDescriptor* self=Luna< ork::Object >::checkSubType< ork::CompiledResourceLoader::StaticResourceDescriptor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::CompiledResourceLoader::StaticResourceDescriptor::base_clearData(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->StaticResourceDescriptor::clearData();

		return 0;
	}


	// Operator binds:

};

ork::CompiledResourceLoader::StaticResourceDescriptor* LunaTraits< ork::CompiledResourceLoader::StaticResourceDescriptor >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ork_CompiledResourceLoader_StaticResourceDescriptor::_bind_ctor(L);
}

void LunaTraits< ork::CompiledResourceLoader::StaticResourceDescriptor >::_bind_dtor(ork::CompiledResourceLoader::StaticResourceDescriptor* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< ork::CompiledResourceLoader::StaticResourceDescriptor >::className[] = "CompiledResourceLoader_StaticResourceDescriptor";
const char LunaTraits< ork::CompiledResourceLoader::StaticResourceDescriptor >::fullName[] = "ork::CompiledResourceLoader::StaticResourceDescriptor";
const char LunaTraits< ork::CompiledResourceLoader::StaticResourceDescriptor >::moduleName[] = "ork";
const char* LunaTraits< ork::CompiledResourceLoader::StaticResourceDescriptor >::parents[] = {"ork.ResourceDescriptor", 0};
const int LunaTraits< ork::CompiledResourceLoader::StaticResourceDescriptor >::hash = 75736091;
const int LunaTraits< ork::CompiledResourceLoader::StaticResourceDescriptor >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< ork::CompiledResourceLoader::StaticResourceDescriptor >::methods[] = {
	{"clearData", &luna_wrapper_ork_CompiledResourceLoader_StaticResourceDescriptor::_bind_clearData},
	{"base_toString", &luna_wrapper_ork_CompiledResourceLoader_StaticResourceDescriptor::_bind_base_toString},
	{"base_clearData", &luna_wrapper_ork_CompiledResourceLoader_StaticResourceDescriptor::_bind_base_clearData},
	{"fromVoid", &luna_wrapper_ork_CompiledResourceLoader_StaticResourceDescriptor::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_CompiledResourceLoader_StaticResourceDescriptor::_bind_asVoid},
	{"getTable", &luna_wrapper_ork_CompiledResourceLoader_StaticResourceDescriptor::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< ork::CompiledResourceLoader::StaticResourceDescriptor >::converters[] = {
	{"ork::Object", &luna_wrapper_ork_CompiledResourceLoader_StaticResourceDescriptor::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< ork::CompiledResourceLoader::StaticResourceDescriptor >::enumValues[] = {
	{0,0}
};


