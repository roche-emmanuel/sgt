#include <plug_common.h>

class luna_wrapper_proland_NodeId {
public:
	typedef Luna< proland::NodeId > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,72107044) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(proland::NodeId*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		proland::NodeId* rhs =(Luna< proland::NodeId >::check(L,2));
		proland::NodeId* self=(Luna< proland::NodeId >::check(L,1));
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

		proland::NodeId* self= (proland::NodeId*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::NodeId >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,72107044) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< proland::NodeId >::check(L,1));
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

		proland::NodeId* self=(Luna< proland::NodeId >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("proland::NodeId");
		
		return luna_dynamicCast(L,converters,"proland::NodeId",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRef(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setId(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRef(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,1381405)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// unsigned int proland::NodeId::id()
	static int _bind_getId(lua_State *L) {
		if (!_lg_typecheck_getId(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int proland::NodeId::id() function, expected prototype:\nunsigned int proland::NodeId::id()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::NodeId* self=(Luna< proland::NodeId >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int proland::NodeId::id(). Got : '%s'\n%s",typeid(Luna< proland::NodeId >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->id;
		lua_pushnumber(L,lret);

		return 1;
	}

	// proland::Node * proland::NodeId::ref()
	static int _bind_getRef(lua_State *L) {
		if (!_lg_typecheck_getRef(L)) {
			luaL_error(L, "luna typecheck failed in proland::Node * proland::NodeId::ref() function, expected prototype:\nproland::Node * proland::NodeId::ref()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::NodeId* self=(Luna< proland::NodeId >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::Node * proland::NodeId::ref(). Got : '%s'\n%s",typeid(Luna< proland::NodeId >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::Node * lret = self->ref;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::Node >::push(L,lret,false);

		return 1;
	}

	// void proland::NodeId::id(unsigned int value)
	static int _bind_setId(lua_State *L) {
		if (!_lg_typecheck_setId(L)) {
			luaL_error(L, "luna typecheck failed in void proland::NodeId::id(unsigned int value) function, expected prototype:\nvoid proland::NodeId::id(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		proland::NodeId* self=(Luna< proland::NodeId >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::NodeId::id(unsigned int). Got : '%s'\n%s",typeid(Luna< proland::NodeId >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->id = value;

		return 0;
	}

	// void proland::NodeId::ref(proland::Node * value)
	static int _bind_setRef(lua_State *L) {
		if (!_lg_typecheck_setRef(L)) {
			luaL_error(L, "luna typecheck failed in void proland::NodeId::ref(proland::Node * value) function, expected prototype:\nvoid proland::NodeId::ref(proland::Node * value)\nClass arguments details:\narg 1 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::Node* value=(Luna< ork::Object >::checkSubType< proland::Node >(L,2));

		proland::NodeId* self=(Luna< proland::NodeId >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::NodeId::ref(proland::Node *). Got : '%s'\n%s",typeid(Luna< proland::NodeId >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ref = value;

		return 0;
	}


	// Operator binds:

};

proland::NodeId* LunaTraits< proland::NodeId >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< proland::NodeId >::_bind_dtor(proland::NodeId* obj) {
	delete obj;
}

const char LunaTraits< proland::NodeId >::className[] = "NodeId";
const char LunaTraits< proland::NodeId >::fullName[] = "proland::NodeId";
const char LunaTraits< proland::NodeId >::moduleName[] = "proland";
const char* LunaTraits< proland::NodeId >::parents[] = {0};
const int LunaTraits< proland::NodeId >::hash = 72107044;
const int LunaTraits< proland::NodeId >::uniqueIDs[] = {72107044,0};

luna_RegType LunaTraits< proland::NodeId >::methods[] = {
	{"getId", &luna_wrapper_proland_NodeId::_bind_getId},
	{"getRef", &luna_wrapper_proland_NodeId::_bind_getRef},
	{"setId", &luna_wrapper_proland_NodeId::_bind_setId},
	{"setRef", &luna_wrapper_proland_NodeId::_bind_setRef},
	{"dynCast", &luna_wrapper_proland_NodeId::_bind_dynCast},
	{"__eq", &luna_wrapper_proland_NodeId::_bind___eq},
	{"fromVoid", &luna_wrapper_proland_NodeId::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_NodeId::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< proland::NodeId >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< proland::NodeId >::enumValues[] = {
	{0,0}
};


