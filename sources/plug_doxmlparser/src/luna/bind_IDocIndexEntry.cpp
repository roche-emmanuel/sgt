#include <plug_common.h>

#include <luna/wrappers/wrapper_IDocIndexEntry.h>

class luna_wrapper_IDocIndexEntry {
public:
	typedef Luna< IDocIndexEntry > luna_t;

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

		IDocIndexEntry* self= (IDocIndexEntry*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< IDocIndexEntry >::push(L,self,false);
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
		//IDocIndexEntry* ptr= dynamic_cast< IDocIndexEntry* >(Luna< IDoc >::check(L,1));
		IDocIndexEntry* ptr= luna_caster< IDoc, IDocIndexEntry >::cast(Luna< IDoc >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< IDocIndexEntry >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_primary(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_secondary(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// IDocIndexEntry::IDocIndexEntry(lua_Table * data)
	static IDocIndexEntry* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in IDocIndexEntry::IDocIndexEntry(lua_Table * data) function, expected prototype:\nIDocIndexEntry::IDocIndexEntry(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_IDocIndexEntry(L,NULL);
	}


	// Function binds:
	// const IString * IDocIndexEntry::primary() const
	static int _bind_primary(lua_State *L) {
		if (!_lg_typecheck_primary(L)) {
			luaL_error(L, "luna typecheck failed in const IString * IDocIndexEntry::primary() const function, expected prototype:\nconst IString * IDocIndexEntry::primary() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDocIndexEntry* self=Luna< IDoc >::checkSubType< IDocIndexEntry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const IString * IDocIndexEntry::primary() const. Got : '%s'\n%s",typeid(Luna< IDoc >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const IString * lret = self->primary();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	// const IString * IDocIndexEntry::secondary() const
	static int _bind_secondary(lua_State *L) {
		if (!_lg_typecheck_secondary(L)) {
			luaL_error(L, "luna typecheck failed in const IString * IDocIndexEntry::secondary() const function, expected prototype:\nconst IString * IDocIndexEntry::secondary() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDocIndexEntry* self=Luna< IDoc >::checkSubType< IDocIndexEntry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const IString * IDocIndexEntry::secondary() const. Got : '%s'\n%s",typeid(Luna< IDoc >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const IString * lret = self->secondary();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

IDocIndexEntry* LunaTraits< IDocIndexEntry >::_bind_ctor(lua_State *L) {
	return luna_wrapper_IDocIndexEntry::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// const IString * IDocIndexEntry::primary() const
	// const IString * IDocIndexEntry::secondary() const
	// IDoc::Kind IDoc::kind() const
}

void LunaTraits< IDocIndexEntry >::_bind_dtor(IDocIndexEntry* obj) {
	delete obj;
}

const char LunaTraits< IDocIndexEntry >::className[] = "IDocIndexEntry";
const char LunaTraits< IDocIndexEntry >::fullName[] = "IDocIndexEntry";
const char LunaTraits< IDocIndexEntry >::moduleName[] = "doxmlparser";
const char* LunaTraits< IDocIndexEntry >::parents[] = {"doxmlparser.IDoc", 0};
const int LunaTraits< IDocIndexEntry >::hash = 82665800;
const int LunaTraits< IDocIndexEntry >::uniqueIDs[] = {2243631,0};

luna_RegType LunaTraits< IDocIndexEntry >::methods[] = {
	{"primary", &luna_wrapper_IDocIndexEntry::_bind_primary},
	{"secondary", &luna_wrapper_IDocIndexEntry::_bind_secondary},
	{"fromVoid", &luna_wrapper_IDocIndexEntry::_bind_fromVoid},
	{"asVoid", &luna_wrapper_IDocIndexEntry::_bind_asVoid},
	{"getTable", &luna_wrapper_IDocIndexEntry::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< IDocIndexEntry >::converters[] = {
	{"IDoc", &luna_wrapper_IDocIndexEntry::_cast_from_IDoc},
	{0,0}
};

luna_RegEnumType LunaTraits< IDocIndexEntry >::enumValues[] = {
	{0,0}
};


