#include <plug_common.h>

#include <luna/wrappers/wrapper_IDocText.h>

class luna_wrapper_IDocText {
public:
	typedef Luna< IDocText > luna_t;

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

		IDocText* self= (IDocText*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< IDocText >::push(L,self,false);
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
		//IDocText* ptr= dynamic_cast< IDocText* >(Luna< IDoc >::check(L,1));
		IDocText* ptr= luna_caster< IDoc, IDocText >::cast(Luna< IDoc >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< IDocText >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_text(lua_State *L) {
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
	// IDocText::IDocText(lua_Table * data)
	static IDocText* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in IDocText::IDocText(lua_Table * data) function, expected prototype:\nIDocText::IDocText(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_IDocText(L,NULL);
	}


	// Function binds:
	// const IString * IDocText::text() const
	static int _bind_text(lua_State *L) {
		if (!_lg_typecheck_text(L)) {
			luaL_error(L, "luna typecheck failed in const IString * IDocText::text() const function, expected prototype:\nconst IString * IDocText::text() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDocText* self=Luna< IDoc >::checkSubType< IDocText >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const IString * IDocText::text() const. Got : '%s'\n%s",typeid(Luna< IDoc >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const IString * lret = self->text();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	// int IDocText::markup() const
	static int _bind_markup(lua_State *L) {
		if (!_lg_typecheck_markup(L)) {
			luaL_error(L, "luna typecheck failed in int IDocText::markup() const function, expected prototype:\nint IDocText::markup() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDocText* self=Luna< IDoc >::checkSubType< IDocText >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int IDocText::markup() const. Got : '%s'\n%s",typeid(Luna< IDoc >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->markup();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int IDocText::headingLevel() const
	static int _bind_headingLevel(lua_State *L) {
		if (!_lg_typecheck_headingLevel(L)) {
			luaL_error(L, "luna typecheck failed in int IDocText::headingLevel() const function, expected prototype:\nint IDocText::headingLevel() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDocText* self=Luna< IDoc >::checkSubType< IDocText >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int IDocText::headingLevel() const. Got : '%s'\n%s",typeid(Luna< IDoc >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->headingLevel();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

IDocText* LunaTraits< IDocText >::_bind_ctor(lua_State *L) {
	return luna_wrapper_IDocText::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// const IString * IDocText::text() const
	// int IDocText::markup() const
	// int IDocText::headingLevel() const
	// IDoc::Kind IDoc::kind() const
}

void LunaTraits< IDocText >::_bind_dtor(IDocText* obj) {
	delete obj;
}

const char LunaTraits< IDocText >::className[] = "IDocText";
const char LunaTraits< IDocText >::fullName[] = "IDocText";
const char LunaTraits< IDocText >::moduleName[] = "doxmlparser";
const char* LunaTraits< IDocText >::parents[] = {"doxmlparser.IDocMarkup", 0};
const int LunaTraits< IDocText >::hash = 42823221;
const int LunaTraits< IDocText >::uniqueIDs[] = {2243631,0};

luna_RegType LunaTraits< IDocText >::methods[] = {
	{"text", &luna_wrapper_IDocText::_bind_text},
	{"markup", &luna_wrapper_IDocText::_bind_markup},
	{"headingLevel", &luna_wrapper_IDocText::_bind_headingLevel},
	{"fromVoid", &luna_wrapper_IDocText::_bind_fromVoid},
	{"asVoid", &luna_wrapper_IDocText::_bind_asVoid},
	{"getTable", &luna_wrapper_IDocText::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< IDocText >::converters[] = {
	{"IDoc", &luna_wrapper_IDocText::_cast_from_IDoc},
	{0,0}
};

luna_RegEnumType LunaTraits< IDocText >::enumValues[] = {
	{0,0}
};


