#include <plug_common.h>

class luna_wrapper_ork_ResourceFactory {
public:
	typedef Luna< ork::ResourceFactory > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,21152746) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ork::ResourceFactory*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::ResourceFactory* rhs =(Luna< ork::ResourceFactory >::check(L,2));
		ork::ResourceFactory* self=(Luna< ork::ResourceFactory >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
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

		ork::ResourceFactory* self= (ork::ResourceFactory*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::ResourceFactory >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,21152746) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< ork::ResourceFactory >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::ResourceFactory* self=(Luna< ork::ResourceFactory >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ork::ResourceFactory");
		
		return luna_dynamicCast(L,converters,"ork::ResourceFactory",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getInstance(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::ResourceManager >(L,2) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,4,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::ResourceDescriptor >(L,4) ) return false;
		if( luatop>4 && (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,89852901)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// static ork::ResourceFactory * ork::ResourceFactory::getInstance()
	static int _bind_getInstance(lua_State *L) {
		if (!_lg_typecheck_getInstance(L)) {
			luaL_error(L, "luna typecheck failed in static ork::ResourceFactory * ork::ResourceFactory::getInstance() function, expected prototype:\nstatic ork::ResourceFactory * ork::ResourceFactory::getInstance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::ResourceFactory * lret = ork::ResourceFactory::getInstance();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::ResourceFactory >::push(L,lret,false);

		return 1;
	}

	// ork::ptr< ork::Object > ork::ResourceFactory::create(ork::ptr< ork::ResourceManager > manager, const std::string & name, ork::ptr< ork::ResourceDescriptor > desc, const TiXmlElement * e = NULL)
	static int _bind_create(lua_State *L) {
		if (!_lg_typecheck_create(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Object > ork::ResourceFactory::create(ork::ptr< ork::ResourceManager > manager, const std::string & name, ork::ptr< ork::ResourceDescriptor > desc, const TiXmlElement * e = NULL) function, expected prototype:\nork::ptr< ork::Object > ork::ResourceFactory::create(ork::ptr< ork::ResourceManager > manager, const std::string & name, ork::ptr< ork::ResourceDescriptor > desc, const TiXmlElement * e = NULL)\nClass arguments details:\narg 1 ID = [unknown]\narg 3 ID = [unknown]\narg 4 ID = 89852901\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		ork::ptr< ork::ResourceManager > manager = Luna< ork::Object >::checkSubType< ork::ResourceManager >(L,2);
		std::string name(lua_tostring(L,3),lua_objlen(L,3));
		ork::ptr< ork::ResourceDescriptor > desc = Luna< ork::Object >::checkSubType< ork::ResourceDescriptor >(L,4);
		const TiXmlElement* e=luatop>4 ? (Luna< TiXmlBase >::checkSubType< TiXmlElement >(L,5)) : (const TiXmlElement*)NULL;

		ork::ResourceFactory* self=(Luna< ork::ResourceFactory >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Object > ork::ResourceFactory::create(ork::ptr< ork::ResourceManager >, const std::string &, ork::ptr< ork::ResourceDescriptor >, const TiXmlElement *). Got : '%s'\n%s",typeid(Luna< ork::ResourceFactory >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Object > lret = self->create(manager, name, desc, e);
		Luna< ork::Object >::push(L,lret.get(),false);

		return 1;
	}


	// Operator binds:

};

ork::ResourceFactory* LunaTraits< ork::ResourceFactory >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< ork::ResourceFactory >::_bind_dtor(ork::ResourceFactory* obj) {
	delete obj;
}

const char LunaTraits< ork::ResourceFactory >::className[] = "ResourceFactory";
const char LunaTraits< ork::ResourceFactory >::fullName[] = "ork::ResourceFactory";
const char LunaTraits< ork::ResourceFactory >::moduleName[] = "ork";
const char* LunaTraits< ork::ResourceFactory >::parents[] = {0};
const int LunaTraits< ork::ResourceFactory >::hash = 21152746;
const int LunaTraits< ork::ResourceFactory >::uniqueIDs[] = {21152746,0};

luna_RegType LunaTraits< ork::ResourceFactory >::methods[] = {
	{"getInstance", &luna_wrapper_ork_ResourceFactory::_bind_getInstance},
	{"create", &luna_wrapper_ork_ResourceFactory::_bind_create},
	{"dynCast", &luna_wrapper_ork_ResourceFactory::_bind_dynCast},
	{"__eq", &luna_wrapper_ork_ResourceFactory::_bind___eq},
	{"fromVoid", &luna_wrapper_ork_ResourceFactory::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_ResourceFactory::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< ork::ResourceFactory >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ork::ResourceFactory >::enumValues[] = {
	{0,0}
};


