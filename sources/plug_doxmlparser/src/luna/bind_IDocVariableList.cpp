#include <plug_common.h>

#include <luna/wrappers/wrapper_IDocVariableList.h>

class luna_wrapper_IDocVariableList {
public:
	typedef Luna< IDocVariableList > luna_t;

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

		IDocVariableList* self= (IDocVariableList*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< IDocVariableList >::push(L,self,false);
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
		//IDocVariableList* ptr= dynamic_cast< IDocVariableList* >(Luna< IDoc >::check(L,1));
		IDocVariableList* ptr= luna_caster< IDoc, IDocVariableList >::cast(Luna< IDoc >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< IDocVariableList >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_entries(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// IDocVariableList::IDocVariableList(lua_Table * data)
	static IDocVariableList* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in IDocVariableList::IDocVariableList(lua_Table * data) function, expected prototype:\nIDocVariableList::IDocVariableList(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_IDocVariableList(L,NULL);
	}


	// Function binds:
	// IDocIterator * IDocVariableList::entries() const
	static int _bind_entries(lua_State *L) {
		if (!_lg_typecheck_entries(L)) {
			luaL_error(L, "luna typecheck failed in IDocIterator * IDocVariableList::entries() const function, expected prototype:\nIDocIterator * IDocVariableList::entries() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDocVariableList* self=Luna< IDoc >::checkSubType< IDocVariableList >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call IDocIterator * IDocVariableList::entries() const. Got : '%s'\n%s",typeid(Luna< IDoc >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IDocIterator * lret = self->entries();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IDocIterator >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

IDocVariableList* LunaTraits< IDocVariableList >::_bind_ctor(lua_State *L) {
	return luna_wrapper_IDocVariableList::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// IDocIterator * IDocVariableList::entries() const
	// IDoc::Kind IDoc::kind() const
}

void LunaTraits< IDocVariableList >::_bind_dtor(IDocVariableList* obj) {
	delete obj;
}

const char LunaTraits< IDocVariableList >::className[] = "IDocVariableList";
const char LunaTraits< IDocVariableList >::fullName[] = "IDocVariableList";
const char LunaTraits< IDocVariableList >::moduleName[] = "doxmlparser";
const char* LunaTraits< IDocVariableList >::parents[] = {"doxmlparser.IDoc", 0};
const int LunaTraits< IDocVariableList >::hash = 66824839;
const int LunaTraits< IDocVariableList >::uniqueIDs[] = {2243631,0};

luna_RegType LunaTraits< IDocVariableList >::methods[] = {
	{"entries", &luna_wrapper_IDocVariableList::_bind_entries},
	{"fromVoid", &luna_wrapper_IDocVariableList::_bind_fromVoid},
	{"asVoid", &luna_wrapper_IDocVariableList::_bind_asVoid},
	{"getTable", &luna_wrapper_IDocVariableList::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< IDocVariableList >::converters[] = {
	{"IDoc", &luna_wrapper_IDocVariableList::_cast_from_IDoc},
	{0,0}
};

luna_RegEnumType LunaTraits< IDocVariableList >::enumValues[] = {
	{0,0}
};


