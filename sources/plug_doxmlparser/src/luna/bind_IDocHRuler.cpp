#include <plug_common.h>

#include <luna/wrappers/wrapper_IDocHRuler.h>

class luna_wrapper_IDocHRuler {
public:
	typedef Luna< IDocHRuler > luna_t;

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

		IDocHRuler* self= (IDocHRuler*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< IDocHRuler >::push(L,self,false);
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
		//IDocHRuler* ptr= dynamic_cast< IDocHRuler* >(Luna< IDoc >::check(L,1));
		IDocHRuler* ptr= luna_caster< IDoc, IDocHRuler >::cast(Luna< IDoc >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< IDocHRuler >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// IDocHRuler::IDocHRuler(lua_Table * data)
	static IDocHRuler* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in IDocHRuler::IDocHRuler(lua_Table * data) function, expected prototype:\nIDocHRuler::IDocHRuler(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_IDocHRuler(L,NULL);
	}


	// Function binds:

	// Operator binds:

};

IDocHRuler* LunaTraits< IDocHRuler >::_bind_ctor(lua_State *L) {
	return luna_wrapper_IDocHRuler::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// IDoc::Kind IDoc::kind() const
}

void LunaTraits< IDocHRuler >::_bind_dtor(IDocHRuler* obj) {
	delete obj;
}

const char LunaTraits< IDocHRuler >::className[] = "IDocHRuler";
const char LunaTraits< IDocHRuler >::fullName[] = "IDocHRuler";
const char LunaTraits< IDocHRuler >::moduleName[] = "doxmlparser";
const char* LunaTraits< IDocHRuler >::parents[] = {"doxmlparser.IDoc", 0};
const int LunaTraits< IDocHRuler >::hash = 91921187;
const int LunaTraits< IDocHRuler >::uniqueIDs[] = {2243631,0};

luna_RegType LunaTraits< IDocHRuler >::methods[] = {
	{"fromVoid", &luna_wrapper_IDocHRuler::_bind_fromVoid},
	{"asVoid", &luna_wrapper_IDocHRuler::_bind_asVoid},
	{"getTable", &luna_wrapper_IDocHRuler::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< IDocHRuler >::converters[] = {
	{"IDoc", &luna_wrapper_IDocHRuler::_cast_from_IDoc},
	{0,0}
};

luna_RegEnumType LunaTraits< IDocHRuler >::enumValues[] = {
	{0,0}
};


