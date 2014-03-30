#include <plug_common.h>

#include <luna/wrappers/wrapper_IDocEMail.h>

class luna_wrapper_IDocEMail {
public:
	typedef Luna< IDocEMail > luna_t;

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

		IDocEMail* self= (IDocEMail*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< IDocEMail >::push(L,self,false);
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
		//IDocEMail* ptr= dynamic_cast< IDocEMail* >(Luna< IDoc >::check(L,1));
		IDocEMail* ptr= luna_caster< IDoc, IDocEMail >::cast(Luna< IDoc >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< IDocEMail >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_address(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// IDocEMail::IDocEMail(lua_Table * data)
	static IDocEMail* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in IDocEMail::IDocEMail(lua_Table * data) function, expected prototype:\nIDocEMail::IDocEMail(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_IDocEMail(L,NULL);
	}


	// Function binds:
	// const IString * IDocEMail::address() const
	static int _bind_address(lua_State *L) {
		if (!_lg_typecheck_address(L)) {
			luaL_error(L, "luna typecheck failed in const IString * IDocEMail::address() const function, expected prototype:\nconst IString * IDocEMail::address() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDocEMail* self=Luna< IDoc >::checkSubType< IDocEMail >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const IString * IDocEMail::address() const. Got : '%s'\n%s",typeid(Luna< IDoc >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const IString * lret = self->address();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

IDocEMail* LunaTraits< IDocEMail >::_bind_ctor(lua_State *L) {
	return luna_wrapper_IDocEMail::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// const IString * IDocEMail::address() const
	// IDoc::Kind IDoc::kind() const
}

void LunaTraits< IDocEMail >::_bind_dtor(IDocEMail* obj) {
	delete obj;
}

const char LunaTraits< IDocEMail >::className[] = "IDocEMail";
const char LunaTraits< IDocEMail >::fullName[] = "IDocEMail";
const char LunaTraits< IDocEMail >::moduleName[] = "doxmlparser";
const char* LunaTraits< IDocEMail >::parents[] = {"doxmlparser.IDoc", 0};
const int LunaTraits< IDocEMail >::hash = 12929599;
const int LunaTraits< IDocEMail >::uniqueIDs[] = {2243631,0};

luna_RegType LunaTraits< IDocEMail >::methods[] = {
	{"address", &luna_wrapper_IDocEMail::_bind_address},
	{"fromVoid", &luna_wrapper_IDocEMail::_bind_fromVoid},
	{"asVoid", &luna_wrapper_IDocEMail::_bind_asVoid},
	{"getTable", &luna_wrapper_IDocEMail::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< IDocEMail >::converters[] = {
	{"IDoc", &luna_wrapper_IDocEMail::_cast_from_IDoc},
	{0,0}
};

luna_RegEnumType LunaTraits< IDocEMail >::enumValues[] = {
	{0,0}
};


