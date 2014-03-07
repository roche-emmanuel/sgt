#include <plug_common.h>

#include <luna/wrappers/wrapper_IDocFormula.h>

class luna_wrapper_IDocFormula {
public:
	typedef Luna< IDocFormula > luna_t;

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

		IDocFormula* self= (IDocFormula*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< IDocFormula >::push(L,self,false);
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
		//IDocFormula* ptr= dynamic_cast< IDocFormula* >(Luna< IDoc >::check(L,1));
		IDocFormula* ptr= luna_caster< IDoc, IDocFormula >::cast(Luna< IDoc >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< IDocFormula >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_text(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// IDocFormula::IDocFormula(lua_Table * data)
	static IDocFormula* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in IDocFormula::IDocFormula(lua_Table * data) function, expected prototype:\nIDocFormula::IDocFormula(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_IDocFormula(L,NULL);
	}


	// Function binds:
	// const IString * IDocFormula::id() const
	static int _bind_id(lua_State *L) {
		if (!_lg_typecheck_id(L)) {
			luaL_error(L, "luna typecheck failed in const IString * IDocFormula::id() const function, expected prototype:\nconst IString * IDocFormula::id() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDocFormula* self=Luna< IDoc >::checkSubType< IDocFormula >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const IString * IDocFormula::id() const. Got : '%s'\n%s",typeid(Luna< IDoc >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const IString * lret = self->id();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	// const IString * IDocFormula::text() const
	static int _bind_text(lua_State *L) {
		if (!_lg_typecheck_text(L)) {
			luaL_error(L, "luna typecheck failed in const IString * IDocFormula::text() const function, expected prototype:\nconst IString * IDocFormula::text() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDocFormula* self=Luna< IDoc >::checkSubType< IDocFormula >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const IString * IDocFormula::text() const. Got : '%s'\n%s",typeid(Luna< IDoc >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const IString * lret = self->text();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

IDocFormula* LunaTraits< IDocFormula >::_bind_ctor(lua_State *L) {
	return luna_wrapper_IDocFormula::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// const IString * IDocFormula::id() const
	// const IString * IDocFormula::text() const
	// IDoc::Kind IDoc::kind() const
}

void LunaTraits< IDocFormula >::_bind_dtor(IDocFormula* obj) {
	delete obj;
}

const char LunaTraits< IDocFormula >::className[] = "IDocFormula";
const char LunaTraits< IDocFormula >::fullName[] = "IDocFormula";
const char LunaTraits< IDocFormula >::moduleName[] = "doxmlparser";
const char* LunaTraits< IDocFormula >::parents[] = {"doxmlparser.IDoc", 0};
const int LunaTraits< IDocFormula >::hash = 2069120;
const int LunaTraits< IDocFormula >::uniqueIDs[] = {2243631,0};

luna_RegType LunaTraits< IDocFormula >::methods[] = {
	{"id", &luna_wrapper_IDocFormula::_bind_id},
	{"text", &luna_wrapper_IDocFormula::_bind_text},
	{"fromVoid", &luna_wrapper_IDocFormula::_bind_fromVoid},
	{"asVoid", &luna_wrapper_IDocFormula::_bind_asVoid},
	{"getTable", &luna_wrapper_IDocFormula::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< IDocFormula >::converters[] = {
	{"IDoc", &luna_wrapper_IDocFormula::_cast_from_IDoc},
	{0,0}
};

luna_RegEnumType LunaTraits< IDocFormula >::enumValues[] = {
	{0,0}
};


