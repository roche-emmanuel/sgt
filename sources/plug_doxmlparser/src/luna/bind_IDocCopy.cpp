#include <plug_common.h>

#include <luna/wrappers/wrapper_IDocCopy.h>

class luna_wrapper_IDocCopy {
public:
	typedef Luna< IDocCopy > luna_t;

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

		IDocCopy* self= (IDocCopy*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< IDocCopy >::push(L,self,false);
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
		//IDocCopy* ptr= dynamic_cast< IDocCopy* >(Luna< IDoc >::check(L,1));
		IDocCopy* ptr= luna_caster< IDoc, IDocCopy >::cast(Luna< IDoc >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< IDocCopy >::push(L,ptr,false);
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
	// IDocCopy::IDocCopy(lua_Table * data)
	static IDocCopy* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in IDocCopy::IDocCopy(lua_Table * data) function, expected prototype:\nIDocCopy::IDocCopy(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_IDocCopy(L,NULL);
	}


	// Function binds:
	// IDocIterator * IDocCopy::contents() const
	static int _bind_contents(lua_State *L) {
		if (!_lg_typecheck_contents(L)) {
			luaL_error(L, "luna typecheck failed in IDocIterator * IDocCopy::contents() const function, expected prototype:\nIDocIterator * IDocCopy::contents() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDocCopy* self=Luna< IDoc >::checkSubType< IDocCopy >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call IDocIterator * IDocCopy::contents() const. Got : '%s'\n%s",typeid(Luna< IDoc >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IDocIterator * lret = self->contents();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IDocIterator >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

IDocCopy* LunaTraits< IDocCopy >::_bind_ctor(lua_State *L) {
	return luna_wrapper_IDocCopy::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// IDocIterator * IDocCopy::contents() const
	// IDoc::Kind IDoc::kind() const
}

void LunaTraits< IDocCopy >::_bind_dtor(IDocCopy* obj) {
	delete obj;
}

const char LunaTraits< IDocCopy >::className[] = "IDocCopy";
const char LunaTraits< IDocCopy >::fullName[] = "IDocCopy";
const char LunaTraits< IDocCopy >::moduleName[] = "doxmlparser";
const char* LunaTraits< IDocCopy >::parents[] = {"doxmlparser.IDoc", 0};
const int LunaTraits< IDocCopy >::hash = 42326141;
const int LunaTraits< IDocCopy >::uniqueIDs[] = {2243631,0};

luna_RegType LunaTraits< IDocCopy >::methods[] = {
	{"contents", &luna_wrapper_IDocCopy::_bind_contents},
	{"fromVoid", &luna_wrapper_IDocCopy::_bind_fromVoid},
	{"asVoid", &luna_wrapper_IDocCopy::_bind_asVoid},
	{"getTable", &luna_wrapper_IDocCopy::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< IDocCopy >::converters[] = {
	{"IDoc", &luna_wrapper_IDocCopy::_cast_from_IDoc},
	{0,0}
};

luna_RegEnumType LunaTraits< IDocCopy >::enumValues[] = {
	{0,0}
};


