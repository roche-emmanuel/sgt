#include <plug_common.h>

#include <luna/wrappers/wrapper_IDocMarkupModifier.h>

class luna_wrapper_IDocMarkupModifier {
public:
	typedef Luna< IDocMarkupModifier > luna_t;

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

		IDocMarkupModifier* self= (IDocMarkupModifier*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< IDocMarkupModifier >::push(L,self,false);
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
		//IDocMarkupModifier* ptr= dynamic_cast< IDocMarkupModifier* >(Luna< IDoc >::check(L,1));
		IDocMarkupModifier* ptr= luna_caster< IDoc, IDocMarkupModifier >::cast(Luna< IDoc >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< IDocMarkupModifier >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_enabled(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_markup(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_headingLevel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// IDocMarkupModifier::IDocMarkupModifier(lua_Table * data)
	static IDocMarkupModifier* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in IDocMarkupModifier::IDocMarkupModifier(lua_Table * data) function, expected prototype:\nIDocMarkupModifier::IDocMarkupModifier(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_IDocMarkupModifier(L,NULL);
	}


	// Function binds:
	// bool IDocMarkupModifier::enabled() const
	static int _bind_enabled(lua_State *L) {
		if (!_lg_typecheck_enabled(L)) {
			luaL_error(L, "luna typecheck failed in bool IDocMarkupModifier::enabled() const function, expected prototype:\nbool IDocMarkupModifier::enabled() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDocMarkupModifier* self=Luna< IDoc >::checkSubType< IDocMarkupModifier >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool IDocMarkupModifier::enabled() const. Got : '%s'\n%s",typeid(Luna< IDoc >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->enabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int IDocMarkupModifier::markup() const
	static int _bind_markup(lua_State *L) {
		if (!_lg_typecheck_markup(L)) {
			luaL_error(L, "luna typecheck failed in int IDocMarkupModifier::markup() const function, expected prototype:\nint IDocMarkupModifier::markup() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDocMarkupModifier* self=Luna< IDoc >::checkSubType< IDocMarkupModifier >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int IDocMarkupModifier::markup() const. Got : '%s'\n%s",typeid(Luna< IDoc >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->markup();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int IDocMarkupModifier::headingLevel() const
	static int _bind_headingLevel(lua_State *L) {
		if (!_lg_typecheck_headingLevel(L)) {
			luaL_error(L, "luna typecheck failed in int IDocMarkupModifier::headingLevel() const function, expected prototype:\nint IDocMarkupModifier::headingLevel() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDocMarkupModifier* self=Luna< IDoc >::checkSubType< IDocMarkupModifier >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int IDocMarkupModifier::headingLevel() const. Got : '%s'\n%s",typeid(Luna< IDoc >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->headingLevel();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

IDocMarkupModifier* LunaTraits< IDocMarkupModifier >::_bind_ctor(lua_State *L) {
	return luna_wrapper_IDocMarkupModifier::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// bool IDocMarkupModifier::enabled() const
	// int IDocMarkupModifier::markup() const
	// int IDocMarkupModifier::headingLevel() const
	// IDoc::Kind IDoc::kind() const
}

void LunaTraits< IDocMarkupModifier >::_bind_dtor(IDocMarkupModifier* obj) {
	delete obj;
}

const char LunaTraits< IDocMarkupModifier >::className[] = "IDocMarkupModifier";
const char LunaTraits< IDocMarkupModifier >::fullName[] = "IDocMarkupModifier";
const char LunaTraits< IDocMarkupModifier >::moduleName[] = "doxmlparser";
const char* LunaTraits< IDocMarkupModifier >::parents[] = {"doxmlparser.IDoc", 0};
const int LunaTraits< IDocMarkupModifier >::hash = 61076921;
const int LunaTraits< IDocMarkupModifier >::uniqueIDs[] = {2243631,0};

luna_RegType LunaTraits< IDocMarkupModifier >::methods[] = {
	{"enabled", &luna_wrapper_IDocMarkupModifier::_bind_enabled},
	{"markup", &luna_wrapper_IDocMarkupModifier::_bind_markup},
	{"headingLevel", &luna_wrapper_IDocMarkupModifier::_bind_headingLevel},
	{"fromVoid", &luna_wrapper_IDocMarkupModifier::_bind_fromVoid},
	{"asVoid", &luna_wrapper_IDocMarkupModifier::_bind_asVoid},
	{"getTable", &luna_wrapper_IDocMarkupModifier::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< IDocMarkupModifier >::converters[] = {
	{"IDoc", &luna_wrapper_IDocMarkupModifier::_cast_from_IDoc},
	{0,0}
};

luna_RegEnumType LunaTraits< IDocMarkupModifier >::enumValues[] = {
	{0,0}
};


