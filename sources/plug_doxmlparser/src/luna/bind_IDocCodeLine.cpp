#include <plug_common.h>

#include <luna/wrappers/wrapper_IDocCodeLine.h>

class luna_wrapper_IDocCodeLine {
public:
	typedef Luna< IDocCodeLine > luna_t;

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

		IDocCodeLine* self= (IDocCodeLine*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< IDocCodeLine >::push(L,self,false);
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
		//IDocCodeLine* ptr= dynamic_cast< IDocCodeLine* >(Luna< IDoc >::check(L,1));
		IDocCodeLine* ptr= luna_caster< IDoc, IDocCodeLine >::cast(Luna< IDoc >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< IDocCodeLine >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_lineNumber(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_refId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_codeElements(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// IDocCodeLine::IDocCodeLine(lua_Table * data)
	static IDocCodeLine* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in IDocCodeLine::IDocCodeLine(lua_Table * data) function, expected prototype:\nIDocCodeLine::IDocCodeLine(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_IDocCodeLine(L,NULL);
	}


	// Function binds:
	// int IDocCodeLine::lineNumber() const
	static int _bind_lineNumber(lua_State *L) {
		if (!_lg_typecheck_lineNumber(L)) {
			luaL_error(L, "luna typecheck failed in int IDocCodeLine::lineNumber() const function, expected prototype:\nint IDocCodeLine::lineNumber() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDocCodeLine* self=Luna< IDoc >::checkSubType< IDocCodeLine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int IDocCodeLine::lineNumber() const. Got : '%s'\n%s",typeid(Luna< IDoc >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->lineNumber();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const IString * IDocCodeLine::refId() const
	static int _bind_refId(lua_State *L) {
		if (!_lg_typecheck_refId(L)) {
			luaL_error(L, "luna typecheck failed in const IString * IDocCodeLine::refId() const function, expected prototype:\nconst IString * IDocCodeLine::refId() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDocCodeLine* self=Luna< IDoc >::checkSubType< IDocCodeLine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const IString * IDocCodeLine::refId() const. Got : '%s'\n%s",typeid(Luna< IDoc >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const IString * lret = self->refId();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	// IDocIterator * IDocCodeLine::codeElements() const
	static int _bind_codeElements(lua_State *L) {
		if (!_lg_typecheck_codeElements(L)) {
			luaL_error(L, "luna typecheck failed in IDocIterator * IDocCodeLine::codeElements() const function, expected prototype:\nIDocIterator * IDocCodeLine::codeElements() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDocCodeLine* self=Luna< IDoc >::checkSubType< IDocCodeLine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call IDocIterator * IDocCodeLine::codeElements() const. Got : '%s'\n%s",typeid(Luna< IDoc >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IDocIterator * lret = self->codeElements();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IDocIterator >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

IDocCodeLine* LunaTraits< IDocCodeLine >::_bind_ctor(lua_State *L) {
	return luna_wrapper_IDocCodeLine::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// int IDocCodeLine::lineNumber() const
	// const IString * IDocCodeLine::refId() const
	// IDocIterator * IDocCodeLine::codeElements() const
	// IDoc::Kind IDoc::kind() const
}

void LunaTraits< IDocCodeLine >::_bind_dtor(IDocCodeLine* obj) {
	delete obj;
}

const char LunaTraits< IDocCodeLine >::className[] = "IDocCodeLine";
const char LunaTraits< IDocCodeLine >::fullName[] = "IDocCodeLine";
const char LunaTraits< IDocCodeLine >::moduleName[] = "doxmlparser";
const char* LunaTraits< IDocCodeLine >::parents[] = {"doxmlparser.IDoc", 0};
const int LunaTraits< IDocCodeLine >::hash = 16888445;
const int LunaTraits< IDocCodeLine >::uniqueIDs[] = {2243631,0};

luna_RegType LunaTraits< IDocCodeLine >::methods[] = {
	{"lineNumber", &luna_wrapper_IDocCodeLine::_bind_lineNumber},
	{"refId", &luna_wrapper_IDocCodeLine::_bind_refId},
	{"codeElements", &luna_wrapper_IDocCodeLine::_bind_codeElements},
	{"fromVoid", &luna_wrapper_IDocCodeLine::_bind_fromVoid},
	{"asVoid", &luna_wrapper_IDocCodeLine::_bind_asVoid},
	{"getTable", &luna_wrapper_IDocCodeLine::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< IDocCodeLine >::converters[] = {
	{"IDoc", &luna_wrapper_IDocCodeLine::_cast_from_IDoc},
	{0,0}
};

luna_RegEnumType LunaTraits< IDocCodeLine >::enumValues[] = {
	{0,0}
};


