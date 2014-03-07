#include <plug_common.h>

#include <luna/wrappers/wrapper_IDocSymbol.h>

class luna_wrapper_IDocSymbol {
public:
	typedef Luna< IDocSymbol > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		IDoc* self=(Luna< IDoc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<IDoc,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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

		IDocSymbol* self= (IDocSymbol*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< IDocSymbol >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,2243631) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< IDoc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_IDoc(lua_State *L) {
		// all checked are already performed before reaching this point.
		//IDocSymbol* ptr= dynamic_cast< IDocSymbol* >(Luna< IDoc >::check(L,1));
		IDocSymbol* ptr= luna_caster< IDoc, IDocSymbol >::cast(Luna< IDoc >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< IDocSymbol >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_type(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_typeString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_letter(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// IDocSymbol::IDocSymbol(lua_Table * data)
	static IDocSymbol* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in IDocSymbol::IDocSymbol(lua_Table * data) function, expected prototype:\nIDocSymbol::IDocSymbol(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_IDocSymbol(L,NULL);
	}


	// Function binds:
	// IDocSymbol::Types IDocSymbol::type() const
	static int _bind_type(lua_State *L) {
		if (!_lg_typecheck_type(L)) {
			luaL_error(L, "luna typecheck failed in IDocSymbol::Types IDocSymbol::type() const function, expected prototype:\nIDocSymbol::Types IDocSymbol::type() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDocSymbol* self=Luna< IDoc >::checkSubType< IDocSymbol >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call IDocSymbol::Types IDocSymbol::type() const. Got : '%s'\n%s",typeid(Luna< IDoc >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IDocSymbol::Types lret = self->type();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const IString * IDocSymbol::typeString() const
	static int _bind_typeString(lua_State *L) {
		if (!_lg_typecheck_typeString(L)) {
			luaL_error(L, "luna typecheck failed in const IString * IDocSymbol::typeString() const function, expected prototype:\nconst IString * IDocSymbol::typeString() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDocSymbol* self=Luna< IDoc >::checkSubType< IDocSymbol >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const IString * IDocSymbol::typeString() const. Got : '%s'\n%s",typeid(Luna< IDoc >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const IString * lret = self->typeString();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	// char IDocSymbol::letter() const
	static int _bind_letter(lua_State *L) {
		if (!_lg_typecheck_letter(L)) {
			luaL_error(L, "luna typecheck failed in char IDocSymbol::letter() const function, expected prototype:\nchar IDocSymbol::letter() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDocSymbol* self=Luna< IDoc >::checkSubType< IDocSymbol >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call char IDocSymbol::letter() const. Got : '%s'\n%s",typeid(Luna< IDoc >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		char lret = self->letter();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

IDocSymbol* LunaTraits< IDocSymbol >::_bind_ctor(lua_State *L) {
	return luna_wrapper_IDocSymbol::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// IDocSymbol::Types IDocSymbol::type() const
	// const IString * IDocSymbol::typeString() const
	// char IDocSymbol::letter() const
	// IDoc::Kind IDoc::kind() const
}

void LunaTraits< IDocSymbol >::_bind_dtor(IDocSymbol* obj) {
	delete obj;
}

const char LunaTraits< IDocSymbol >::className[] = "IDocSymbol";
const char LunaTraits< IDocSymbol >::fullName[] = "IDocSymbol";
const char LunaTraits< IDocSymbol >::moduleName[] = "doxmlparser";
const char* LunaTraits< IDocSymbol >::parents[] = {"doxmlparser.IDoc", 0};
const int LunaTraits< IDocSymbol >::hash = 42611493;
const int LunaTraits< IDocSymbol >::uniqueIDs[] = {2243631,0};

luna_RegType LunaTraits< IDocSymbol >::methods[] = {
	{"type", &luna_wrapper_IDocSymbol::_bind_type},
	{"typeString", &luna_wrapper_IDocSymbol::_bind_typeString},
	{"letter", &luna_wrapper_IDocSymbol::_bind_letter},
	{"fromVoid", &luna_wrapper_IDocSymbol::_bind_fromVoid},
	{"asVoid", &luna_wrapper_IDocSymbol::_bind_asVoid},
	{"getTable", &luna_wrapper_IDocSymbol::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< IDocSymbol >::converters[] = {
	{"IDoc", &luna_wrapper_IDocSymbol::_cast_from_IDoc},
	{0,0}
};

luna_RegEnumType LunaTraits< IDocSymbol >::enumValues[] = {
	{"Invalid", IDocSymbol::Invalid},
	{"Umlaut", IDocSymbol::Umlaut},
	{"Acute", IDocSymbol::Acute},
	{"Grave", IDocSymbol::Grave},
	{"Circ", IDocSymbol::Circ},
	{"Tilde", IDocSymbol::Tilde},
	{"Szlig", IDocSymbol::Szlig},
	{"Cedil", IDocSymbol::Cedil},
	{"Ring", IDocSymbol::Ring},
	{"Nbsp", IDocSymbol::Nbsp},
	{"Copy", IDocSymbol::Copy},
	{0,0}
};


