#include <plug_common.h>

#include <luna/wrappers/wrapper_IDocHighlight.h>

class luna_wrapper_IDocHighlight {
public:
	typedef Luna< IDocHighlight > luna_t;

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

		IDocHighlight* self= (IDocHighlight*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< IDocHighlight >::push(L,self,false);
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
		//IDocHighlight* ptr= dynamic_cast< IDocHighlight* >(Luna< IDoc >::check(L,1));
		IDocHighlight* ptr= luna_caster< IDoc, IDocHighlight >::cast(Luna< IDoc >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< IDocHighlight >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_highlightKind(lua_State *L) {
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
	// IDocHighlight::IDocHighlight(lua_Table * data)
	static IDocHighlight* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in IDocHighlight::IDocHighlight(lua_Table * data) function, expected prototype:\nIDocHighlight::IDocHighlight(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_IDocHighlight(L,NULL);
	}


	// Function binds:
	// IDocHighlight::HighlightKind IDocHighlight::highlightKind() const
	static int _bind_highlightKind(lua_State *L) {
		if (!_lg_typecheck_highlightKind(L)) {
			luaL_error(L, "luna typecheck failed in IDocHighlight::HighlightKind IDocHighlight::highlightKind() const function, expected prototype:\nIDocHighlight::HighlightKind IDocHighlight::highlightKind() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDocHighlight* self=Luna< IDoc >::checkSubType< IDocHighlight >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call IDocHighlight::HighlightKind IDocHighlight::highlightKind() const. Got : '%s'\n%s",typeid(Luna< IDoc >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IDocHighlight::HighlightKind lret = self->highlightKind();
		lua_pushnumber(L,lret);

		return 1;
	}

	// IDocIterator * IDocHighlight::codeElements() const
	static int _bind_codeElements(lua_State *L) {
		if (!_lg_typecheck_codeElements(L)) {
			luaL_error(L, "luna typecheck failed in IDocIterator * IDocHighlight::codeElements() const function, expected prototype:\nIDocIterator * IDocHighlight::codeElements() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDocHighlight* self=Luna< IDoc >::checkSubType< IDocHighlight >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call IDocIterator * IDocHighlight::codeElements() const. Got : '%s'\n%s",typeid(Luna< IDoc >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IDocIterator * lret = self->codeElements();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IDocIterator >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

IDocHighlight* LunaTraits< IDocHighlight >::_bind_ctor(lua_State *L) {
	return luna_wrapper_IDocHighlight::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// IDocHighlight::HighlightKind IDocHighlight::highlightKind() const
	// IDocIterator * IDocHighlight::codeElements() const
	// IDoc::Kind IDoc::kind() const
}

void LunaTraits< IDocHighlight >::_bind_dtor(IDocHighlight* obj) {
	delete obj;
}

const char LunaTraits< IDocHighlight >::className[] = "IDocHighlight";
const char LunaTraits< IDocHighlight >::fullName[] = "IDocHighlight";
const char LunaTraits< IDocHighlight >::moduleName[] = "doxmlparser";
const char* LunaTraits< IDocHighlight >::parents[] = {"doxmlparser.IDoc", 0};
const int LunaTraits< IDocHighlight >::hash = 80596603;
const int LunaTraits< IDocHighlight >::uniqueIDs[] = {2243631,0};

luna_RegType LunaTraits< IDocHighlight >::methods[] = {
	{"highlightKind", &luna_wrapper_IDocHighlight::_bind_highlightKind},
	{"codeElements", &luna_wrapper_IDocHighlight::_bind_codeElements},
	{"fromVoid", &luna_wrapper_IDocHighlight::_bind_fromVoid},
	{"asVoid", &luna_wrapper_IDocHighlight::_bind_asVoid},
	{"getTable", &luna_wrapper_IDocHighlight::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< IDocHighlight >::converters[] = {
	{"IDoc", &luna_wrapper_IDocHighlight::_cast_from_IDoc},
	{0,0}
};

luna_RegEnumType LunaTraits< IDocHighlight >::enumValues[] = {
	{"Invalid", IDocHighlight::Invalid},
	{"Comment", IDocHighlight::Comment},
	{"Keyword", IDocHighlight::Keyword},
	{"KeywordType", IDocHighlight::KeywordType},
	{"KeywordFlow", IDocHighlight::KeywordFlow},
	{"CharLiteral", IDocHighlight::CharLiteral},
	{"StringLiteral", IDocHighlight::StringLiteral},
	{"Preprocessor", IDocHighlight::Preprocessor},
	{0,0}
};


