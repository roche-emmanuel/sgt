#include <plug_common.h>

#include <luna/wrappers/wrapper_IDocVariableListEntry.h>

class luna_wrapper_IDocVariableListEntry {
public:
	typedef Luna< IDocVariableListEntry > luna_t;

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

		IDocVariableListEntry* self= (IDocVariableListEntry*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< IDocVariableListEntry >::push(L,self,false);
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
		//IDocVariableListEntry* ptr= dynamic_cast< IDocVariableListEntry* >(Luna< IDoc >::check(L,1));
		IDocVariableListEntry* ptr= luna_caster< IDoc, IDocVariableListEntry >::cast(Luna< IDoc >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< IDocVariableListEntry >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_term(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_description(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// IDocVariableListEntry::IDocVariableListEntry(lua_Table * data)
	static IDocVariableListEntry* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in IDocVariableListEntry::IDocVariableListEntry(lua_Table * data) function, expected prototype:\nIDocVariableListEntry::IDocVariableListEntry(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_IDocVariableListEntry(L,NULL);
	}


	// Function binds:
	// ILinkedTextIterator * IDocVariableListEntry::term() const
	static int _bind_term(lua_State *L) {
		if (!_lg_typecheck_term(L)) {
			luaL_error(L, "luna typecheck failed in ILinkedTextIterator * IDocVariableListEntry::term() const function, expected prototype:\nILinkedTextIterator * IDocVariableListEntry::term() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDocVariableListEntry* self=Luna< IDoc >::checkSubType< IDocVariableListEntry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ILinkedTextIterator * IDocVariableListEntry::term() const. Got : '%s'\n%s",typeid(Luna< IDoc >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ILinkedTextIterator * lret = self->term();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ILinkedTextIterator >::push(L,lret,false);

		return 1;
	}

	// IDocPara * IDocVariableListEntry::description() const
	static int _bind_description(lua_State *L) {
		if (!_lg_typecheck_description(L)) {
			luaL_error(L, "luna typecheck failed in IDocPara * IDocVariableListEntry::description() const function, expected prototype:\nIDocPara * IDocVariableListEntry::description() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDocVariableListEntry* self=Luna< IDoc >::checkSubType< IDocVariableListEntry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call IDocPara * IDocVariableListEntry::description() const. Got : '%s'\n%s",typeid(Luna< IDoc >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IDocPara * lret = self->description();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IDocPara >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

IDocVariableListEntry* LunaTraits< IDocVariableListEntry >::_bind_ctor(lua_State *L) {
	return luna_wrapper_IDocVariableListEntry::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// ILinkedTextIterator * IDocVariableListEntry::term() const
	// IDocPara * IDocVariableListEntry::description() const
	// IDoc::Kind IDoc::kind() const
}

void LunaTraits< IDocVariableListEntry >::_bind_dtor(IDocVariableListEntry* obj) {
	delete obj;
}

const char LunaTraits< IDocVariableListEntry >::className[] = "IDocVariableListEntry";
const char LunaTraits< IDocVariableListEntry >::fullName[] = "IDocVariableListEntry";
const char LunaTraits< IDocVariableListEntry >::moduleName[] = "doxmlparser";
const char* LunaTraits< IDocVariableListEntry >::parents[] = {"doxmlparser.IDoc", 0};
const int LunaTraits< IDocVariableListEntry >::hash = 47496018;
const int LunaTraits< IDocVariableListEntry >::uniqueIDs[] = {2243631,0};

luna_RegType LunaTraits< IDocVariableListEntry >::methods[] = {
	{"term", &luna_wrapper_IDocVariableListEntry::_bind_term},
	{"description", &luna_wrapper_IDocVariableListEntry::_bind_description},
	{"fromVoid", &luna_wrapper_IDocVariableListEntry::_bind_fromVoid},
	{"asVoid", &luna_wrapper_IDocVariableListEntry::_bind_asVoid},
	{"getTable", &luna_wrapper_IDocVariableListEntry::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< IDocVariableListEntry >::converters[] = {
	{"IDoc", &luna_wrapper_IDocVariableListEntry::_cast_from_IDoc},
	{0,0}
};

luna_RegEnumType LunaTraits< IDocVariableListEntry >::enumValues[] = {
	{0,0}
};


