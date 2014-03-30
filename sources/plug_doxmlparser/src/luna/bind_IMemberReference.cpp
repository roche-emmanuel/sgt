#include <plug_common.h>

#include <luna/wrappers/wrapper_IMemberReference.h>

class luna_wrapper_IMemberReference {
public:
	typedef Luna< IMemberReference > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		IMemberReference* self=(Luna< IMemberReference >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<IMemberReference,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,16821774) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(IMemberReference*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		IMemberReference* rhs =(Luna< IMemberReference >::check(L,2));
		IMemberReference* self=(Luna< IMemberReference >::check(L,1));
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

		IMemberReference* self= (IMemberReference*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< IMemberReference >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,16821774) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< IMemberReference >::check(L,1));
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

		IMemberReference* self=(Luna< IMemberReference >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("IMemberReference");
		
		return luna_dynamicCast(L,converters,"IMemberReference",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_member(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_name(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_scope(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_protection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_virtualness(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ambiguityScope(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// IMemberReference::IMemberReference(lua_Table * data)
	static IMemberReference* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in IMemberReference::IMemberReference(lua_Table * data) function, expected prototype:\nIMemberReference::IMemberReference(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_IMemberReference(L,NULL);
	}


	// Function binds:
	// IMember * IMemberReference::member() const
	static int _bind_member(lua_State *L) {
		if (!_lg_typecheck_member(L)) {
			luaL_error(L, "luna typecheck failed in IMember * IMemberReference::member() const function, expected prototype:\nIMember * IMemberReference::member() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IMemberReference* self=(Luna< IMemberReference >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call IMember * IMemberReference::member() const. Got : '%s'\n%s",typeid(Luna< IMemberReference >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IMember * lret = self->member();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IMember >::push(L,lret,false);

		return 1;
	}

	// const IString * IMemberReference::name() const
	static int _bind_name(lua_State *L) {
		if (!_lg_typecheck_name(L)) {
			luaL_error(L, "luna typecheck failed in const IString * IMemberReference::name() const function, expected prototype:\nconst IString * IMemberReference::name() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IMemberReference* self=(Luna< IMemberReference >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const IString * IMemberReference::name() const. Got : '%s'\n%s",typeid(Luna< IMemberReference >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const IString * lret = self->name();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	// const IString * IMemberReference::scope() const
	static int _bind_scope(lua_State *L) {
		if (!_lg_typecheck_scope(L)) {
			luaL_error(L, "luna typecheck failed in const IString * IMemberReference::scope() const function, expected prototype:\nconst IString * IMemberReference::scope() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IMemberReference* self=(Luna< IMemberReference >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const IString * IMemberReference::scope() const. Got : '%s'\n%s",typeid(Luna< IMemberReference >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const IString * lret = self->scope();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	// const IString * IMemberReference::protection() const
	static int _bind_protection(lua_State *L) {
		if (!_lg_typecheck_protection(L)) {
			luaL_error(L, "luna typecheck failed in const IString * IMemberReference::protection() const function, expected prototype:\nconst IString * IMemberReference::protection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IMemberReference* self=(Luna< IMemberReference >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const IString * IMemberReference::protection() const. Got : '%s'\n%s",typeid(Luna< IMemberReference >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const IString * lret = self->protection();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	// const IString * IMemberReference::virtualness() const
	static int _bind_virtualness(lua_State *L) {
		if (!_lg_typecheck_virtualness(L)) {
			luaL_error(L, "luna typecheck failed in const IString * IMemberReference::virtualness() const function, expected prototype:\nconst IString * IMemberReference::virtualness() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IMemberReference* self=(Luna< IMemberReference >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const IString * IMemberReference::virtualness() const. Got : '%s'\n%s",typeid(Luna< IMemberReference >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const IString * lret = self->virtualness();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	// const IString * IMemberReference::ambiguityScope() const
	static int _bind_ambiguityScope(lua_State *L) {
		if (!_lg_typecheck_ambiguityScope(L)) {
			luaL_error(L, "luna typecheck failed in const IString * IMemberReference::ambiguityScope() const function, expected prototype:\nconst IString * IMemberReference::ambiguityScope() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IMemberReference* self=(Luna< IMemberReference >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const IString * IMemberReference::ambiguityScope() const. Got : '%s'\n%s",typeid(Luna< IMemberReference >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const IString * lret = self->ambiguityScope();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

IMemberReference* LunaTraits< IMemberReference >::_bind_ctor(lua_State *L) {
	return luna_wrapper_IMemberReference::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// IMember * IMemberReference::member() const
	// const IString * IMemberReference::name() const
	// const IString * IMemberReference::scope() const
	// const IString * IMemberReference::protection() const
	// const IString * IMemberReference::virtualness() const
	// const IString * IMemberReference::ambiguityScope() const
}

void LunaTraits< IMemberReference >::_bind_dtor(IMemberReference* obj) {
	delete obj;
}

const char LunaTraits< IMemberReference >::className[] = "IMemberReference";
const char LunaTraits< IMemberReference >::fullName[] = "IMemberReference";
const char LunaTraits< IMemberReference >::moduleName[] = "doxmlparser";
const char* LunaTraits< IMemberReference >::parents[] = {0};
const int LunaTraits< IMemberReference >::hash = 16821774;
const int LunaTraits< IMemberReference >::uniqueIDs[] = {16821774,0};

luna_RegType LunaTraits< IMemberReference >::methods[] = {
	{"member", &luna_wrapper_IMemberReference::_bind_member},
	{"name", &luna_wrapper_IMemberReference::_bind_name},
	{"scope", &luna_wrapper_IMemberReference::_bind_scope},
	{"protection", &luna_wrapper_IMemberReference::_bind_protection},
	{"virtualness", &luna_wrapper_IMemberReference::_bind_virtualness},
	{"ambiguityScope", &luna_wrapper_IMemberReference::_bind_ambiguityScope},
	{"dynCast", &luna_wrapper_IMemberReference::_bind_dynCast},
	{"__eq", &luna_wrapper_IMemberReference::_bind___eq},
	{"fromVoid", &luna_wrapper_IMemberReference::_bind_fromVoid},
	{"asVoid", &luna_wrapper_IMemberReference::_bind_asVoid},
	{"getTable", &luna_wrapper_IMemberReference::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< IMemberReference >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< IMemberReference >::enumValues[] = {
	{0,0}
};


