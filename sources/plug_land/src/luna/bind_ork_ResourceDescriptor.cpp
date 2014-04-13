#include <plug_common.h>

#include <luna/wrappers/wrapper_ork_ResourceDescriptor.h>

class luna_wrapper_ork_ResourceDescriptor {
public:
	typedef Luna< ork::ResourceDescriptor > luna_t;

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

		ork::ResourceDescriptor* self= (ork::ResourceDescriptor*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::ResourceDescriptor >::push(L,self,false);
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
		//ork::ResourceDescriptor* ptr= dynamic_cast< ork::ResourceDescriptor* >(Luna< ork::Object >::check(L,1));
		ork::ResourceDescriptor* ptr= luna_caster< ork::Object, ork::ResourceDescriptor >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< ork::ResourceDescriptor >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_getData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_clearData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDescriptor(lua_State *L) {
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
	// ork::ResourceDescriptor::ResourceDescriptor(const TiXmlElement * descriptor, unsigned char * data, unsigned int size)
	static ork::ResourceDescriptor* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::ResourceDescriptor::ResourceDescriptor(const TiXmlElement * descriptor, unsigned char * data, unsigned int size) function, expected prototype:\nork::ResourceDescriptor::ResourceDescriptor(const TiXmlElement * descriptor, unsigned char * data, unsigned int size)\nClass arguments details:\narg 1 ID = 89852901\n\n%s",luna_dumpStack(L).c_str());
		}

		const TiXmlElement* descriptor=(Luna< TiXmlBase >::checkSubType< TiXmlElement >(L,1));
		unsigned char data = (unsigned char)(lua_tointeger(L,2));
		unsigned int size=(unsigned int)lua_tointeger(L,3);

		return new ork::ResourceDescriptor(descriptor, &data, size);
	}

	// ork::ResourceDescriptor::ResourceDescriptor(lua_Table * data, const TiXmlElement * descriptor, unsigned char * data, unsigned int size)
	static ork::ResourceDescriptor* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::ResourceDescriptor::ResourceDescriptor(lua_Table * data, const TiXmlElement * descriptor, unsigned char * data, unsigned int size) function, expected prototype:\nork::ResourceDescriptor::ResourceDescriptor(lua_Table * data, const TiXmlElement * descriptor, unsigned char * data, unsigned int size)\nClass arguments details:\narg 2 ID = 89852901\n\n%s",luna_dumpStack(L).c_str());
		}

		const TiXmlElement* descriptor=(Luna< TiXmlBase >::checkSubType< TiXmlElement >(L,2));
		unsigned char data = (unsigned char)(lua_tointeger(L,3));
		unsigned int size=(unsigned int)lua_tointeger(L,4);

		return new wrapper_ork_ResourceDescriptor(L,NULL, descriptor, &data, size);
	}

	// Overload binder for ork::ResourceDescriptor::ResourceDescriptor
	static ork::ResourceDescriptor* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ResourceDescriptor, cannot match any of the overloads for function ResourceDescriptor:\n  ResourceDescriptor(const TiXmlElement *, unsigned char *, unsigned int)\n  ResourceDescriptor(lua_Table *, const TiXmlElement *, unsigned char *, unsigned int)\n");
		return NULL;
	}


	// Function binds:
	// unsigned char * ork::ResourceDescriptor::getData() const
	static int _bind_getData(lua_State *L) {
		if (!_lg_typecheck_getData(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char * ork::ResourceDescriptor::getData() const function, expected prototype:\nunsigned char * ork::ResourceDescriptor::getData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::ResourceDescriptor* self=Luna< ork::Object >::checkSubType< ork::ResourceDescriptor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char * ork::ResourceDescriptor::getData() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char * lret = self->getData();
		luaL_error(L,"Trying to convert pointer on unsigned char lret to lua. This usage should be clarifierd.");

		return 1;
	}

	// unsigned int ork::ResourceDescriptor::getSize() const
	static int _bind_getSize(lua_State *L) {
		if (!_lg_typecheck_getSize(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int ork::ResourceDescriptor::getSize() const function, expected prototype:\nunsigned int ork::ResourceDescriptor::getSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::ResourceDescriptor* self=Luna< ork::Object >::checkSubType< ork::ResourceDescriptor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int ork::ResourceDescriptor::getSize() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void ork::ResourceDescriptor::clearData()
	static int _bind_clearData(lua_State *L) {
		if (!_lg_typecheck_clearData(L)) {
			luaL_error(L, "luna typecheck failed in void ork::ResourceDescriptor::clearData() function, expected prototype:\nvoid ork::ResourceDescriptor::clearData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::ResourceDescriptor* self=Luna< ork::Object >::checkSubType< ork::ResourceDescriptor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::ResourceDescriptor::clearData(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->clearData();

		return 0;
	}

	// const TiXmlElement * ork::ResourceDescriptor::descriptor()
	static int _bind_getDescriptor(lua_State *L) {
		if (!_lg_typecheck_getDescriptor(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlElement * ork::ResourceDescriptor::descriptor() function, expected prototype:\nconst TiXmlElement * ork::ResourceDescriptor::descriptor()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::ResourceDescriptor* self=Luna< ork::Object >::checkSubType< ork::ResourceDescriptor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlElement * ork::ResourceDescriptor::descriptor(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlElement * lret = self->descriptor;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlElement >::push(L,lret,false);

		return 1;
	}

	// const char * ork::ResourceDescriptor::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * ork::ResourceDescriptor::base_toString() function, expected prototype:\nconst char * ork::ResourceDescriptor::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::ResourceDescriptor* self=Luna< ork::Object >::checkSubType< ork::ResourceDescriptor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * ork::ResourceDescriptor::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->ResourceDescriptor::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// void ork::ResourceDescriptor::base_clearData()
	static int _bind_base_clearData(lua_State *L) {
		if (!_lg_typecheck_base_clearData(L)) {
			luaL_error(L, "luna typecheck failed in void ork::ResourceDescriptor::base_clearData() function, expected prototype:\nvoid ork::ResourceDescriptor::base_clearData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::ResourceDescriptor* self=Luna< ork::Object >::checkSubType< ork::ResourceDescriptor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::ResourceDescriptor::base_clearData(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ResourceDescriptor::clearData();

		return 0;
	}


	// Operator binds:

};

ork::ResourceDescriptor* LunaTraits< ork::ResourceDescriptor >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ork_ResourceDescriptor::_bind_ctor(L);
}

void LunaTraits< ork::ResourceDescriptor >::_bind_dtor(ork::ResourceDescriptor* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< ork::ResourceDescriptor >::className[] = "ResourceDescriptor";
const char LunaTraits< ork::ResourceDescriptor >::fullName[] = "ork::ResourceDescriptor";
const char LunaTraits< ork::ResourceDescriptor >::moduleName[] = "ork";
const char* LunaTraits< ork::ResourceDescriptor >::parents[] = {"ork.Object", 0};
const int LunaTraits< ork::ResourceDescriptor >::hash = 81706796;
const int LunaTraits< ork::ResourceDescriptor >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< ork::ResourceDescriptor >::methods[] = {
	{"getData", &luna_wrapper_ork_ResourceDescriptor::_bind_getData},
	{"getSize", &luna_wrapper_ork_ResourceDescriptor::_bind_getSize},
	{"clearData", &luna_wrapper_ork_ResourceDescriptor::_bind_clearData},
	{"getDescriptor", &luna_wrapper_ork_ResourceDescriptor::_bind_getDescriptor},
	{"base_toString", &luna_wrapper_ork_ResourceDescriptor::_bind_base_toString},
	{"base_clearData", &luna_wrapper_ork_ResourceDescriptor::_bind_base_clearData},
	{"fromVoid", &luna_wrapper_ork_ResourceDescriptor::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_ResourceDescriptor::_bind_asVoid},
	{"getTable", &luna_wrapper_ork_ResourceDescriptor::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< ork::ResourceDescriptor >::converters[] = {
	{"ork::Object", &luna_wrapper_ork_ResourceDescriptor::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< ork::ResourceDescriptor >::enumValues[] = {
	{0,0}
};


