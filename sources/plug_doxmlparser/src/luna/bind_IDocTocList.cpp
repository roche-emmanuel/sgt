#include <plug_common.h>

#include <luna/wrappers/wrapper_IDocTocList.h>

class luna_wrapper_IDocTocList {
public:
	typedef Luna< IDocTocList > luna_t;

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

		IDocTocList* self= (IDocTocList*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< IDocTocList >::push(L,self,false);
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
		//IDocTocList* ptr= dynamic_cast< IDocTocList* >(Luna< IDoc >::check(L,1));
		IDocTocList* ptr= luna_caster< IDoc, IDocTocList >::cast(Luna< IDoc >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< IDocTocList >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_elements(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// IDocTocList::IDocTocList(lua_Table * data)
	static IDocTocList* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in IDocTocList::IDocTocList(lua_Table * data) function, expected prototype:\nIDocTocList::IDocTocList(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_IDocTocList(L,NULL);
	}


	// Function binds:
	// IDocIterator * IDocTocList::elements() const
	static int _bind_elements(lua_State *L) {
		if (!_lg_typecheck_elements(L)) {
			luaL_error(L, "luna typecheck failed in IDocIterator * IDocTocList::elements() const function, expected prototype:\nIDocIterator * IDocTocList::elements() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDocTocList* self=Luna< IDoc >::checkSubType< IDocTocList >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call IDocIterator * IDocTocList::elements() const. Got : '%s'\n%s",typeid(Luna< IDoc >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IDocIterator * lret = self->elements();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IDocIterator >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

IDocTocList* LunaTraits< IDocTocList >::_bind_ctor(lua_State *L) {
	return luna_wrapper_IDocTocList::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// IDocIterator * IDocTocList::elements() const
	// IDoc::Kind IDoc::kind() const
}

void LunaTraits< IDocTocList >::_bind_dtor(IDocTocList* obj) {
	delete obj;
}

const char LunaTraits< IDocTocList >::className[] = "IDocTocList";
const char LunaTraits< IDocTocList >::fullName[] = "IDocTocList";
const char LunaTraits< IDocTocList >::moduleName[] = "doxmlparser";
const char* LunaTraits< IDocTocList >::parents[] = {"doxmlparser.IDoc", 0};
const int LunaTraits< IDocTocList >::hash = 12272200;
const int LunaTraits< IDocTocList >::uniqueIDs[] = {2243631,0};

luna_RegType LunaTraits< IDocTocList >::methods[] = {
	{"elements", &luna_wrapper_IDocTocList::_bind_elements},
	{"fromVoid", &luna_wrapper_IDocTocList::_bind_fromVoid},
	{"asVoid", &luna_wrapper_IDocTocList::_bind_asVoid},
	{"getTable", &luna_wrapper_IDocTocList::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< IDocTocList >::converters[] = {
	{"IDoc", &luna_wrapper_IDocTocList::_cast_from_IDoc},
	{0,0}
};

luna_RegEnumType LunaTraits< IDocTocList >::enumValues[] = {
	{0,0}
};


