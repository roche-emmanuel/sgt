#include <plug_common.h>

#include <luna/wrappers/wrapper_ILinkedText.h>

class luna_wrapper_ILinkedText {
public:
	typedef Luna< ILinkedText > luna_t;

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

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,94836970) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ILinkedText*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ILinkedText* rhs =(Luna< ILinkedText >::check(L,2));
		ILinkedText* self=(Luna< ILinkedText >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
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

		ILinkedText* self= (ILinkedText*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ILinkedText >::push(L,self,false);
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

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ILinkedText* self=(Luna< ILinkedText >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ILinkedText");
		
		return luna_dynamicCast(L,converters,"ILinkedText",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_kind(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// ILinkedText::ILinkedText(lua_Table * data)
	static ILinkedText* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in ILinkedText::ILinkedText(lua_Table * data) function, expected prototype:\nILinkedText::ILinkedText(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_ILinkedText(L,NULL);
	}


	// Function binds:
	// ILinkedText::Kind ILinkedText::kind() const
	static int _bind_kind(lua_State *L) {
		if (!_lg_typecheck_kind(L)) {
			luaL_error(L, "luna typecheck failed in ILinkedText::Kind ILinkedText::kind() const function, expected prototype:\nILinkedText::Kind ILinkedText::kind() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ILinkedText* self=(Luna< ILinkedText >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ILinkedText::Kind ILinkedText::kind() const. Got : '%s'\n%s",typeid(Luna< ILinkedText >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ILinkedText::Kind lret = self->kind();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

ILinkedText* LunaTraits< ILinkedText >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ILinkedText::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// ILinkedText::Kind ILinkedText::kind() const
}

void LunaTraits< ILinkedText >::_bind_dtor(ILinkedText* obj) {
	delete obj;
}

const char LunaTraits< ILinkedText >::className[] = "ILinkedText";
const char LunaTraits< ILinkedText >::fullName[] = "ILinkedText";
const char LunaTraits< ILinkedText >::moduleName[] = "doxmlparser";
const char* LunaTraits< ILinkedText >::parents[] = {0};
const int LunaTraits< ILinkedText >::hash = 94836970;
const int LunaTraits< ILinkedText >::uniqueIDs[] = {94836970,0};

luna_RegType LunaTraits< ILinkedText >::methods[] = {
	{"kind", &luna_wrapper_ILinkedText::_bind_kind},
	{"dynCast", &luna_wrapper_ILinkedText::_bind_dynCast},
	{"__eq", &luna_wrapper_ILinkedText::_bind___eq},
	{"fromVoid", &luna_wrapper_ILinkedText::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ILinkedText::_bind_asVoid},
	{"getTable", &luna_wrapper_ILinkedText::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< ILinkedText >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ILinkedText >::enumValues[] = {
	{"Kind_Text", ILinkedText::Kind_Text},
	{"Kind_Ref", ILinkedText::Kind_Ref},
	{0,0}
};


