#include <plug_common.h>

#include <luna/wrappers/wrapper_IDocParameter.h>

class luna_wrapper_IDocParameter {
public:
	typedef Luna< IDocParameter > luna_t;

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

		IDocParameter* self= (IDocParameter*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< IDocParameter >::push(L,self,false);
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
		//IDocParameter* ptr= dynamic_cast< IDocParameter* >(Luna< IDoc >::check(L,1));
		IDocParameter* ptr= luna_caster< IDoc, IDocParameter >::cast(Luna< IDoc >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< IDocParameter >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_name(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// IDocParameter::IDocParameter(lua_Table * data)
	static IDocParameter* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in IDocParameter::IDocParameter(lua_Table * data) function, expected prototype:\nIDocParameter::IDocParameter(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_IDocParameter(L,NULL);
	}


	// Function binds:
	// const IString * IDocParameter::name() const
	static int _bind_name(lua_State *L) {
		if (!_lg_typecheck_name(L)) {
			luaL_error(L, "luna typecheck failed in const IString * IDocParameter::name() const function, expected prototype:\nconst IString * IDocParameter::name() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDocParameter* self=Luna< IDoc >::checkSubType< IDocParameter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const IString * IDocParameter::name() const. Got : '%s'\n%s",typeid(Luna< IDoc >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const IString * lret = self->name();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

IDocParameter* LunaTraits< IDocParameter >::_bind_ctor(lua_State *L) {
	return luna_wrapper_IDocParameter::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// const IString * IDocParameter::name() const
	// IDoc::Kind IDoc::kind() const
}

void LunaTraits< IDocParameter >::_bind_dtor(IDocParameter* obj) {
	delete obj;
}

const char LunaTraits< IDocParameter >::className[] = "IDocParameter";
const char LunaTraits< IDocParameter >::fullName[] = "IDocParameter";
const char LunaTraits< IDocParameter >::moduleName[] = "doxmlparser";
const char* LunaTraits< IDocParameter >::parents[] = {"doxmlparser.IDoc", 0};
const int LunaTraits< IDocParameter >::hash = 70268808;
const int LunaTraits< IDocParameter >::uniqueIDs[] = {2243631,0};

luna_RegType LunaTraits< IDocParameter >::methods[] = {
	{"name", &luna_wrapper_IDocParameter::_bind_name},
	{"fromVoid", &luna_wrapper_IDocParameter::_bind_fromVoid},
	{"asVoid", &luna_wrapper_IDocParameter::_bind_asVoid},
	{"getTable", &luna_wrapper_IDocParameter::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< IDocParameter >::converters[] = {
	{"IDoc", &luna_wrapper_IDocParameter::_cast_from_IDoc},
	{0,0}
};

luna_RegEnumType LunaTraits< IDocParameter >::enumValues[] = {
	{0,0}
};


