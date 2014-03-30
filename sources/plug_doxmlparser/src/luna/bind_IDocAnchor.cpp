#include <plug_common.h>

#include <luna/wrappers/wrapper_IDocAnchor.h>

class luna_wrapper_IDocAnchor {
public:
	typedef Luna< IDocAnchor > luna_t;

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

		IDocAnchor* self= (IDocAnchor*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< IDocAnchor >::push(L,self,false);
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
		//IDocAnchor* ptr= dynamic_cast< IDocAnchor* >(Luna< IDoc >::check(L,1));
		IDocAnchor* ptr= luna_caster< IDoc, IDocAnchor >::cast(Luna< IDoc >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< IDocAnchor >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_id(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// IDocAnchor::IDocAnchor(lua_Table * data)
	static IDocAnchor* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in IDocAnchor::IDocAnchor(lua_Table * data) function, expected prototype:\nIDocAnchor::IDocAnchor(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_IDocAnchor(L,NULL);
	}


	// Function binds:
	// const IString * IDocAnchor::id() const
	static int _bind_id(lua_State *L) {
		if (!_lg_typecheck_id(L)) {
			luaL_error(L, "luna typecheck failed in const IString * IDocAnchor::id() const function, expected prototype:\nconst IString * IDocAnchor::id() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDocAnchor* self=Luna< IDoc >::checkSubType< IDocAnchor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const IString * IDocAnchor::id() const. Got : '%s'\n%s",typeid(Luna< IDoc >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const IString * lret = self->id();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

IDocAnchor* LunaTraits< IDocAnchor >::_bind_ctor(lua_State *L) {
	return luna_wrapper_IDocAnchor::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// const IString * IDocAnchor::id() const
	// IDoc::Kind IDoc::kind() const
}

void LunaTraits< IDocAnchor >::_bind_dtor(IDocAnchor* obj) {
	delete obj;
}

const char LunaTraits< IDocAnchor >::className[] = "IDocAnchor";
const char LunaTraits< IDocAnchor >::fullName[] = "IDocAnchor";
const char LunaTraits< IDocAnchor >::moduleName[] = "doxmlparser";
const char* LunaTraits< IDocAnchor >::parents[] = {"doxmlparser.IDoc", 0};
const int LunaTraits< IDocAnchor >::hash = 16835956;
const int LunaTraits< IDocAnchor >::uniqueIDs[] = {2243631,0};

luna_RegType LunaTraits< IDocAnchor >::methods[] = {
	{"id", &luna_wrapper_IDocAnchor::_bind_id},
	{"fromVoid", &luna_wrapper_IDocAnchor::_bind_fromVoid},
	{"asVoid", &luna_wrapper_IDocAnchor::_bind_asVoid},
	{"getTable", &luna_wrapper_IDocAnchor::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< IDocAnchor >::converters[] = {
	{"IDoc", &luna_wrapper_IDocAnchor::_cast_from_IDoc},
	{0,0}
};

luna_RegEnumType LunaTraits< IDocAnchor >::enumValues[] = {
	{0,0}
};


