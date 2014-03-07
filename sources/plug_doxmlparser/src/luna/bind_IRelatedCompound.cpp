#include <plug_common.h>

#include <luna/wrappers/wrapper_IRelatedCompound.h>

class luna_wrapper_IRelatedCompound {
public:
	typedef Luna< IRelatedCompound > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		IRelatedCompound* self=(Luna< IRelatedCompound >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<IRelatedCompound,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,47694753) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(IRelatedCompound*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		IRelatedCompound* rhs =(Luna< IRelatedCompound >::check(L,2));
		IRelatedCompound* self=(Luna< IRelatedCompound >::check(L,1));
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

		IRelatedCompound* self= (IRelatedCompound*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< IRelatedCompound >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,47694753) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< IRelatedCompound >::check(L,1));
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

		IRelatedCompound* self=(Luna< IRelatedCompound >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("IRelatedCompound");
		
		return luna_dynamicCast(L,converters,"IRelatedCompound",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_compound(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_protection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_kind(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_name(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// IRelatedCompound::IRelatedCompound(lua_Table * data)
	static IRelatedCompound* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in IRelatedCompound::IRelatedCompound(lua_Table * data) function, expected prototype:\nIRelatedCompound::IRelatedCompound(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_IRelatedCompound(L,NULL);
	}


	// Function binds:
	// ICompound * IRelatedCompound::compound() const
	static int _bind_compound(lua_State *L) {
		if (!_lg_typecheck_compound(L)) {
			luaL_error(L, "luna typecheck failed in ICompound * IRelatedCompound::compound() const function, expected prototype:\nICompound * IRelatedCompound::compound() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IRelatedCompound* self=(Luna< IRelatedCompound >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ICompound * IRelatedCompound::compound() const. Got : '%s'\n%s",typeid(Luna< IRelatedCompound >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ICompound * lret = self->compound();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ICompound >::push(L,lret,false);

		return 1;
	}

	// IRelatedCompound::Protection IRelatedCompound::protection() const
	static int _bind_protection(lua_State *L) {
		if (!_lg_typecheck_protection(L)) {
			luaL_error(L, "luna typecheck failed in IRelatedCompound::Protection IRelatedCompound::protection() const function, expected prototype:\nIRelatedCompound::Protection IRelatedCompound::protection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IRelatedCompound* self=(Luna< IRelatedCompound >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call IRelatedCompound::Protection IRelatedCompound::protection() const. Got : '%s'\n%s",typeid(Luna< IRelatedCompound >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IRelatedCompound::Protection lret = self->protection();
		lua_pushnumber(L,lret);

		return 1;
	}

	// IRelatedCompound::Kind IRelatedCompound::kind() const
	static int _bind_kind(lua_State *L) {
		if (!_lg_typecheck_kind(L)) {
			luaL_error(L, "luna typecheck failed in IRelatedCompound::Kind IRelatedCompound::kind() const function, expected prototype:\nIRelatedCompound::Kind IRelatedCompound::kind() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IRelatedCompound* self=(Luna< IRelatedCompound >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call IRelatedCompound::Kind IRelatedCompound::kind() const. Got : '%s'\n%s",typeid(Luna< IRelatedCompound >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IRelatedCompound::Kind lret = self->kind();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const IString * IRelatedCompound::name() const
	static int _bind_name(lua_State *L) {
		if (!_lg_typecheck_name(L)) {
			luaL_error(L, "luna typecheck failed in const IString * IRelatedCompound::name() const function, expected prototype:\nconst IString * IRelatedCompound::name() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IRelatedCompound* self=(Luna< IRelatedCompound >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const IString * IRelatedCompound::name() const. Got : '%s'\n%s",typeid(Luna< IRelatedCompound >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const IString * lret = self->name();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

IRelatedCompound* LunaTraits< IRelatedCompound >::_bind_ctor(lua_State *L) {
	return luna_wrapper_IRelatedCompound::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// ICompound * IRelatedCompound::compound() const
	// IRelatedCompound::Protection IRelatedCompound::protection() const
	// IRelatedCompound::Kind IRelatedCompound::kind() const
	// const IString * IRelatedCompound::name() const
}

void LunaTraits< IRelatedCompound >::_bind_dtor(IRelatedCompound* obj) {
	delete obj;
}

const char LunaTraits< IRelatedCompound >::className[] = "IRelatedCompound";
const char LunaTraits< IRelatedCompound >::fullName[] = "IRelatedCompound";
const char LunaTraits< IRelatedCompound >::moduleName[] = "doxmlparser";
const char* LunaTraits< IRelatedCompound >::parents[] = {0};
const int LunaTraits< IRelatedCompound >::hash = 47694753;
const int LunaTraits< IRelatedCompound >::uniqueIDs[] = {47694753,0};

luna_RegType LunaTraits< IRelatedCompound >::methods[] = {
	{"compound", &luna_wrapper_IRelatedCompound::_bind_compound},
	{"protection", &luna_wrapper_IRelatedCompound::_bind_protection},
	{"kind", &luna_wrapper_IRelatedCompound::_bind_kind},
	{"name", &luna_wrapper_IRelatedCompound::_bind_name},
	{"dynCast", &luna_wrapper_IRelatedCompound::_bind_dynCast},
	{"__eq", &luna_wrapper_IRelatedCompound::_bind___eq},
	{"fromVoid", &luna_wrapper_IRelatedCompound::_bind_fromVoid},
	{"asVoid", &luna_wrapper_IRelatedCompound::_bind_asVoid},
	{"getTable", &luna_wrapper_IRelatedCompound::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< IRelatedCompound >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< IRelatedCompound >::enumValues[] = {
	{"Public", IRelatedCompound::Public},
	{"Protected", IRelatedCompound::Protected},
	{"Private", IRelatedCompound::Private},
	{"Normal", IRelatedCompound::Normal},
	{"Virtual", IRelatedCompound::Virtual},
	{0,0}
};


