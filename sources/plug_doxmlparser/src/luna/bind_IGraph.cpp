#include <plug_common.h>

#include <luna/wrappers/wrapper_IGraph.h>

class luna_wrapper_IGraph {
public:
	typedef Luna< IGraph > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		IGraph* self=(Luna< IGraph >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<IGraph,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,58990855) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(IGraph*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		IGraph* rhs =(Luna< IGraph >::check(L,2));
		IGraph* self=(Luna< IGraph >::check(L,1));
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

		IGraph* self= (IGraph*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< IGraph >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,58990855) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< IGraph >::check(L,1));
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

		IGraph* self=(Luna< IGraph >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("IGraph");
		
		return luna_dynamicCast(L,converters,"IGraph",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_nodes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// IGraph::IGraph(lua_Table * data)
	static IGraph* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in IGraph::IGraph(lua_Table * data) function, expected prototype:\nIGraph::IGraph(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_IGraph(L,NULL);
	}


	// Function binds:
	// INodeIterator * IGraph::nodes() const
	static int _bind_nodes(lua_State *L) {
		if (!_lg_typecheck_nodes(L)) {
			luaL_error(L, "luna typecheck failed in INodeIterator * IGraph::nodes() const function, expected prototype:\nINodeIterator * IGraph::nodes() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IGraph* self=(Luna< IGraph >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call INodeIterator * IGraph::nodes() const. Got : '%s'\n%s",typeid(Luna< IGraph >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		INodeIterator * lret = self->nodes();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< INodeIterator >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

IGraph* LunaTraits< IGraph >::_bind_ctor(lua_State *L) {
	return luna_wrapper_IGraph::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// INodeIterator * IGraph::nodes() const
}

void LunaTraits< IGraph >::_bind_dtor(IGraph* obj) {
	delete obj;
}

const char LunaTraits< IGraph >::className[] = "IGraph";
const char LunaTraits< IGraph >::fullName[] = "IGraph";
const char LunaTraits< IGraph >::moduleName[] = "doxmlparser";
const char* LunaTraits< IGraph >::parents[] = {0};
const int LunaTraits< IGraph >::hash = 58990855;
const int LunaTraits< IGraph >::uniqueIDs[] = {58990855,0};

luna_RegType LunaTraits< IGraph >::methods[] = {
	{"nodes", &luna_wrapper_IGraph::_bind_nodes},
	{"dynCast", &luna_wrapper_IGraph::_bind_dynCast},
	{"__eq", &luna_wrapper_IGraph::_bind___eq},
	{"fromVoid", &luna_wrapper_IGraph::_bind_fromVoid},
	{"asVoid", &luna_wrapper_IGraph::_bind_asVoid},
	{"getTable", &luna_wrapper_IGraph::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< IGraph >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< IGraph >::enumValues[] = {
	{0,0}
};


