#include <plug_common.h>

#include <luna/wrappers/wrapper_IInclude.h>

class luna_wrapper_IInclude {
public:
	typedef Luna< IInclude > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		IInclude* self=(Luna< IInclude >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<IInclude,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,52441879) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(IInclude*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		IInclude* rhs =(Luna< IInclude >::check(L,2));
		IInclude* self=(Luna< IInclude >::check(L,1));
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

		IInclude* self= (IInclude*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< IInclude >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,52441879) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< IInclude >::check(L,1));
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

		IInclude* self=(Luna< IInclude >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("IInclude");
		
		return luna_dynamicCast(L,converters,"IInclude",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_name(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_refId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isLocal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// IInclude::IInclude(lua_Table * data)
	static IInclude* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in IInclude::IInclude(lua_Table * data) function, expected prototype:\nIInclude::IInclude(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_IInclude(L,NULL);
	}


	// Function binds:
	// const IString * IInclude::name() const
	static int _bind_name(lua_State *L) {
		if (!_lg_typecheck_name(L)) {
			luaL_error(L, "luna typecheck failed in const IString * IInclude::name() const function, expected prototype:\nconst IString * IInclude::name() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IInclude* self=(Luna< IInclude >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const IString * IInclude::name() const. Got : '%s'\n%s",typeid(Luna< IInclude >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const IString * lret = self->name();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	// const IString * IInclude::refId() const
	static int _bind_refId(lua_State *L) {
		if (!_lg_typecheck_refId(L)) {
			luaL_error(L, "luna typecheck failed in const IString * IInclude::refId() const function, expected prototype:\nconst IString * IInclude::refId() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IInclude* self=(Luna< IInclude >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const IString * IInclude::refId() const. Got : '%s'\n%s",typeid(Luna< IInclude >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const IString * lret = self->refId();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	// bool IInclude::isLocal() const
	static int _bind_isLocal(lua_State *L) {
		if (!_lg_typecheck_isLocal(L)) {
			luaL_error(L, "luna typecheck failed in bool IInclude::isLocal() const function, expected prototype:\nbool IInclude::isLocal() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IInclude* self=(Luna< IInclude >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool IInclude::isLocal() const. Got : '%s'\n%s",typeid(Luna< IInclude >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isLocal();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

IInclude* LunaTraits< IInclude >::_bind_ctor(lua_State *L) {
	return luna_wrapper_IInclude::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// const IString * IInclude::name() const
	// const IString * IInclude::refId() const
	// bool IInclude::isLocal() const
}

void LunaTraits< IInclude >::_bind_dtor(IInclude* obj) {
	delete obj;
}

const char LunaTraits< IInclude >::className[] = "IInclude";
const char LunaTraits< IInclude >::fullName[] = "IInclude";
const char LunaTraits< IInclude >::moduleName[] = "doxmlparser";
const char* LunaTraits< IInclude >::parents[] = {0};
const int LunaTraits< IInclude >::hash = 52441879;
const int LunaTraits< IInclude >::uniqueIDs[] = {52441879,0};

luna_RegType LunaTraits< IInclude >::methods[] = {
	{"name", &luna_wrapper_IInclude::_bind_name},
	{"refId", &luna_wrapper_IInclude::_bind_refId},
	{"isLocal", &luna_wrapper_IInclude::_bind_isLocal},
	{"dynCast", &luna_wrapper_IInclude::_bind_dynCast},
	{"__eq", &luna_wrapper_IInclude::_bind___eq},
	{"fromVoid", &luna_wrapper_IInclude::_bind_fromVoid},
	{"asVoid", &luna_wrapper_IInclude::_bind_asVoid},
	{"getTable", &luna_wrapper_IInclude::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< IInclude >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< IInclude >::enumValues[] = {
	{0,0}
};


