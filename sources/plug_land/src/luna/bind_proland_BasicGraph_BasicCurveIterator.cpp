#include <plug_common.h>

class luna_wrapper_proland_BasicGraph_BasicCurveIterator {
public:
	typedef Luna< proland::BasicGraph::BasicCurveIterator > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,38054140) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(proland::BasicGraph::BasicCurveIterator*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		proland::BasicGraph::BasicCurveIterator* rhs =(Luna< proland::BasicGraph::BasicCurveIterator >::check(L,2));
		proland::BasicGraph::BasicCurveIterator* self=(Luna< proland::BasicGraph::BasicCurveIterator >::check(L,1));
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

		proland::BasicGraph::BasicCurveIterator* self= (proland::BasicGraph::BasicCurveIterator*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::BasicGraph::BasicCurveIterator >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,38054140) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< proland::BasicGraph::BasicCurveIterator >::check(L,1));
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

		proland::BasicGraph::BasicCurveIterator* self=(Luna< proland::BasicGraph::BasicCurveIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("proland::BasicGraph::BasicCurveIterator");
		
		return luna_dynamicCast(L,converters,"proland::BasicGraph::BasicCurveIterator",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

proland::BasicGraph::BasicCurveIterator* LunaTraits< proland::BasicGraph::BasicCurveIterator >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< proland::BasicGraph::BasicCurveIterator >::_bind_dtor(proland::BasicGraph::BasicCurveIterator* obj) {
	delete obj;
}

const char LunaTraits< proland::BasicGraph::BasicCurveIterator >::className[] = "BasicGraph_BasicCurveIterator";
const char LunaTraits< proland::BasicGraph::BasicCurveIterator >::fullName[] = "proland::BasicGraph::BasicCurveIterator";
const char LunaTraits< proland::BasicGraph::BasicCurveIterator >::moduleName[] = "proland";
const char* LunaTraits< proland::BasicGraph::BasicCurveIterator >::parents[] = {0};
const int LunaTraits< proland::BasicGraph::BasicCurveIterator >::hash = 38054140;
const int LunaTraits< proland::BasicGraph::BasicCurveIterator >::uniqueIDs[] = {38054140,0};

luna_RegType LunaTraits< proland::BasicGraph::BasicCurveIterator >::methods[] = {
	{"dynCast", &luna_wrapper_proland_BasicGraph_BasicCurveIterator::_bind_dynCast},
	{"__eq", &luna_wrapper_proland_BasicGraph_BasicCurveIterator::_bind___eq},
	{"fromVoid", &luna_wrapper_proland_BasicGraph_BasicCurveIterator::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_BasicGraph_BasicCurveIterator::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< proland::BasicGraph::BasicCurveIterator >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< proland::BasicGraph::BasicCurveIterator >::enumValues[] = {
	{0,0}
};


