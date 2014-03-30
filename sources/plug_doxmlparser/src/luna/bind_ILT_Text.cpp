#include <plug_common.h>

#include <luna/wrappers/wrapper_ILT_Text.h>

class luna_wrapper_ILT_Text {
public:
	typedef Luna< ILT_Text > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ILinkedText* self=(Luna< ILinkedText >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<ILinkedText,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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

		ILT_Text* self= (ILT_Text*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ILT_Text >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,94836970) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< ILinkedText >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_ILinkedText(lua_State *L) {
		// all checked are already performed before reaching this point.
		//ILT_Text* ptr= dynamic_cast< ILT_Text* >(Luna< ILinkedText >::check(L,1));
		ILT_Text* ptr= luna_caster< ILinkedText, ILT_Text >::cast(Luna< ILinkedText >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< ILT_Text >::push(L,ptr,false);
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// ILT_Text::ILT_Text(lua_Table * data)
	static ILT_Text* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in ILT_Text::ILT_Text(lua_Table * data) function, expected prototype:\nILT_Text::ILT_Text(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_ILT_Text(L,NULL);
	}


	// Function binds:
	// const IString * ILT_Text::text() const
	static int _bind_text(lua_State *L) {
		if (!_lg_typecheck_text(L)) {
			luaL_error(L, "luna typecheck failed in const IString * ILT_Text::text() const function, expected prototype:\nconst IString * ILT_Text::text() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ILT_Text* self=Luna< ILinkedText >::checkSubType< ILT_Text >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const IString * ILT_Text::text() const. Got : '%s'\n%s",typeid(Luna< ILinkedText >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const IString * lret = self->text();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

ILT_Text* LunaTraits< ILT_Text >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ILT_Text::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// const IString * ILT_Text::text() const
	// ILinkedText::Kind ILinkedText::kind() const
}

void LunaTraits< ILT_Text >::_bind_dtor(ILT_Text* obj) {
	delete obj;
}

const char LunaTraits< ILT_Text >::className[] = "ILT_Text";
const char LunaTraits< ILT_Text >::fullName[] = "ILT_Text";
const char LunaTraits< ILT_Text >::moduleName[] = "doxmlparser";
const char* LunaTraits< ILT_Text >::parents[] = {"doxmlparser.ILinkedText", 0};
const int LunaTraits< ILT_Text >::hash = 66171066;
const int LunaTraits< ILT_Text >::uniqueIDs[] = {94836970,0};

luna_RegType LunaTraits< ILT_Text >::methods[] = {
	{"text", &luna_wrapper_ILT_Text::_bind_text},
	{"fromVoid", &luna_wrapper_ILT_Text::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ILT_Text::_bind_asVoid},
	{"getTable", &luna_wrapper_ILT_Text::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< ILT_Text >::converters[] = {
	{"ILinkedText", &luna_wrapper_ILT_Text::_cast_from_ILinkedText},
	{0,0}
};

luna_RegEnumType LunaTraits< ILT_Text >::enumValues[] = {
	{0,0}
};


