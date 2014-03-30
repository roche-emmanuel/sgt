#include <plug_common.h>

#include <luna/wrappers/wrapper_IDocEntry.h>

class luna_wrapper_IDocEntry {
public:
	typedef Luna< IDocEntry > luna_t;

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

		IDocEntry* self= (IDocEntry*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< IDocEntry >::push(L,self,false);
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
		//IDocEntry* ptr= dynamic_cast< IDocEntry* >(Luna< IDoc >::check(L,1));
		IDocEntry* ptr= luna_caster< IDoc, IDocEntry >::cast(Luna< IDoc >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< IDocEntry >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_contents(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// IDocEntry::IDocEntry(lua_Table * data)
	static IDocEntry* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in IDocEntry::IDocEntry(lua_Table * data) function, expected prototype:\nIDocEntry::IDocEntry(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_IDocEntry(L,NULL);
	}


	// Function binds:
	// IDocIterator * IDocEntry::contents() const
	static int _bind_contents(lua_State *L) {
		if (!_lg_typecheck_contents(L)) {
			luaL_error(L, "luna typecheck failed in IDocIterator * IDocEntry::contents() const function, expected prototype:\nIDocIterator * IDocEntry::contents() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDocEntry* self=Luna< IDoc >::checkSubType< IDocEntry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call IDocIterator * IDocEntry::contents() const. Got : '%s'\n%s",typeid(Luna< IDoc >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IDocIterator * lret = self->contents();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IDocIterator >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

IDocEntry* LunaTraits< IDocEntry >::_bind_ctor(lua_State *L) {
	return luna_wrapper_IDocEntry::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// IDocIterator * IDocEntry::contents() const
	// IDoc::Kind IDoc::kind() const
}

void LunaTraits< IDocEntry >::_bind_dtor(IDocEntry* obj) {
	delete obj;
}

const char LunaTraits< IDocEntry >::className[] = "IDocEntry";
const char LunaTraits< IDocEntry >::fullName[] = "IDocEntry";
const char LunaTraits< IDocEntry >::moduleName[] = "doxmlparser";
const char* LunaTraits< IDocEntry >::parents[] = {"doxmlparser.IDoc", 0};
const int LunaTraits< IDocEntry >::hash = 13931253;
const int LunaTraits< IDocEntry >::uniqueIDs[] = {2243631,0};

luna_RegType LunaTraits< IDocEntry >::methods[] = {
	{"contents", &luna_wrapper_IDocEntry::_bind_contents},
	{"fromVoid", &luna_wrapper_IDocEntry::_bind_fromVoid},
	{"asVoid", &luna_wrapper_IDocEntry::_bind_asVoid},
	{"getTable", &luna_wrapper_IDocEntry::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< IDocEntry >::converters[] = {
	{"IDoc", &luna_wrapper_IDocEntry::_cast_from_IDoc},
	{0,0}
};

luna_RegEnumType LunaTraits< IDocEntry >::enumValues[] = {
	{0,0}
};


