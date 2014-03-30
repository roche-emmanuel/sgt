#include <plug_common.h>

#include <luna/wrappers/wrapper_IParam.h>

class luna_wrapper_IParam {
public:
	typedef Luna< IParam > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		IParam* self=(Luna< IParam >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<IParam,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,66811974) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(IParam*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		IParam* rhs =(Luna< IParam >::check(L,2));
		IParam* self=(Luna< IParam >::check(L,1));
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

		IParam* self= (IParam*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< IParam >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,66811974) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< IParam >::check(L,1));
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

		IParam* self=(Luna< IParam >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("IParam");
		
		return luna_dynamicCast(L,converters,"IParam",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_type(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_declarationName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_definitionName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_attrib(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_arraySpecifier(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_defaultValue(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_briefDescription(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// IParam::IParam(lua_Table * data)
	static IParam* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in IParam::IParam(lua_Table * data) function, expected prototype:\nIParam::IParam(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_IParam(L,NULL);
	}


	// Function binds:
	// ILinkedTextIterator * IParam::type() const
	static int _bind_type(lua_State *L) {
		if (!_lg_typecheck_type(L)) {
			luaL_error(L, "luna typecheck failed in ILinkedTextIterator * IParam::type() const function, expected prototype:\nILinkedTextIterator * IParam::type() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IParam* self=(Luna< IParam >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ILinkedTextIterator * IParam::type() const. Got : '%s'\n%s",typeid(Luna< IParam >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ILinkedTextIterator * lret = self->type();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ILinkedTextIterator >::push(L,lret,false);

		return 1;
	}

	// const IString * IParam::declarationName() const
	static int _bind_declarationName(lua_State *L) {
		if (!_lg_typecheck_declarationName(L)) {
			luaL_error(L, "luna typecheck failed in const IString * IParam::declarationName() const function, expected prototype:\nconst IString * IParam::declarationName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IParam* self=(Luna< IParam >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const IString * IParam::declarationName() const. Got : '%s'\n%s",typeid(Luna< IParam >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const IString * lret = self->declarationName();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	// const IString * IParam::definitionName() const
	static int _bind_definitionName(lua_State *L) {
		if (!_lg_typecheck_definitionName(L)) {
			luaL_error(L, "luna typecheck failed in const IString * IParam::definitionName() const function, expected prototype:\nconst IString * IParam::definitionName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IParam* self=(Luna< IParam >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const IString * IParam::definitionName() const. Got : '%s'\n%s",typeid(Luna< IParam >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const IString * lret = self->definitionName();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	// const IString * IParam::attrib() const
	static int _bind_attrib(lua_State *L) {
		if (!_lg_typecheck_attrib(L)) {
			luaL_error(L, "luna typecheck failed in const IString * IParam::attrib() const function, expected prototype:\nconst IString * IParam::attrib() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IParam* self=(Luna< IParam >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const IString * IParam::attrib() const. Got : '%s'\n%s",typeid(Luna< IParam >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const IString * lret = self->attrib();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	// const IString * IParam::arraySpecifier() const
	static int _bind_arraySpecifier(lua_State *L) {
		if (!_lg_typecheck_arraySpecifier(L)) {
			luaL_error(L, "luna typecheck failed in const IString * IParam::arraySpecifier() const function, expected prototype:\nconst IString * IParam::arraySpecifier() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IParam* self=(Luna< IParam >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const IString * IParam::arraySpecifier() const. Got : '%s'\n%s",typeid(Luna< IParam >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const IString * lret = self->arraySpecifier();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	// ILinkedTextIterator * IParam::defaultValue() const
	static int _bind_defaultValue(lua_State *L) {
		if (!_lg_typecheck_defaultValue(L)) {
			luaL_error(L, "luna typecheck failed in ILinkedTextIterator * IParam::defaultValue() const function, expected prototype:\nILinkedTextIterator * IParam::defaultValue() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IParam* self=(Luna< IParam >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ILinkedTextIterator * IParam::defaultValue() const. Got : '%s'\n%s",typeid(Luna< IParam >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ILinkedTextIterator * lret = self->defaultValue();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ILinkedTextIterator >::push(L,lret,false);

		return 1;
	}

	// IDocRoot * IParam::briefDescription() const
	static int _bind_briefDescription(lua_State *L) {
		if (!_lg_typecheck_briefDescription(L)) {
			luaL_error(L, "luna typecheck failed in IDocRoot * IParam::briefDescription() const function, expected prototype:\nIDocRoot * IParam::briefDescription() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IParam* self=(Luna< IParam >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call IDocRoot * IParam::briefDescription() const. Got : '%s'\n%s",typeid(Luna< IParam >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IDocRoot * lret = self->briefDescription();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IDocRoot >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

IParam* LunaTraits< IParam >::_bind_ctor(lua_State *L) {
	return luna_wrapper_IParam::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// ILinkedTextIterator * IParam::type() const
	// const IString * IParam::declarationName() const
	// const IString * IParam::definitionName() const
	// const IString * IParam::attrib() const
	// const IString * IParam::arraySpecifier() const
	// ILinkedTextIterator * IParam::defaultValue() const
	// IDocRoot * IParam::briefDescription() const
}

void LunaTraits< IParam >::_bind_dtor(IParam* obj) {
	delete obj;
}

const char LunaTraits< IParam >::className[] = "IParam";
const char LunaTraits< IParam >::fullName[] = "IParam";
const char LunaTraits< IParam >::moduleName[] = "doxmlparser";
const char* LunaTraits< IParam >::parents[] = {0};
const int LunaTraits< IParam >::hash = 66811974;
const int LunaTraits< IParam >::uniqueIDs[] = {66811974,0};

luna_RegType LunaTraits< IParam >::methods[] = {
	{"type", &luna_wrapper_IParam::_bind_type},
	{"declarationName", &luna_wrapper_IParam::_bind_declarationName},
	{"definitionName", &luna_wrapper_IParam::_bind_definitionName},
	{"attrib", &luna_wrapper_IParam::_bind_attrib},
	{"arraySpecifier", &luna_wrapper_IParam::_bind_arraySpecifier},
	{"defaultValue", &luna_wrapper_IParam::_bind_defaultValue},
	{"briefDescription", &luna_wrapper_IParam::_bind_briefDescription},
	{"dynCast", &luna_wrapper_IParam::_bind_dynCast},
	{"__eq", &luna_wrapper_IParam::_bind___eq},
	{"fromVoid", &luna_wrapper_IParam::_bind_fromVoid},
	{"asVoid", &luna_wrapper_IParam::_bind_asVoid},
	{"getTable", &luna_wrapper_IParam::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< IParam >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< IParam >::enumValues[] = {
	{0,0}
};


