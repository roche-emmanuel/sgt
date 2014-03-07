#include <plug_common.h>

#include <luna/wrappers/wrapper_IDoc.h>

class luna_wrapper_IDoc {
public:
	typedef Luna< IDoc > luna_t;

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

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,2243631) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(IDoc*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		IDoc* rhs =(Luna< IDoc >::check(L,2));
		IDoc* self=(Luna< IDoc >::check(L,1));
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

		IDoc* self= (IDoc*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< IDoc >::push(L,self,false);
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

		IDoc* self=(Luna< IDoc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("IDoc");
		
		return luna_dynamicCast(L,converters,"IDoc",name);
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
	// IDoc::IDoc(lua_Table * data)
	static IDoc* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in IDoc::IDoc(lua_Table * data) function, expected prototype:\nIDoc::IDoc(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_IDoc(L,NULL);
	}


	// Function binds:
	// IDoc::Kind IDoc::kind() const
	static int _bind_kind(lua_State *L) {
		if (!_lg_typecheck_kind(L)) {
			luaL_error(L, "luna typecheck failed in IDoc::Kind IDoc::kind() const function, expected prototype:\nIDoc::Kind IDoc::kind() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDoc* self=(Luna< IDoc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call IDoc::Kind IDoc::kind() const. Got : '%s'\n%s",typeid(Luna< IDoc >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IDoc::Kind lret = self->kind();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

IDoc* LunaTraits< IDoc >::_bind_ctor(lua_State *L) {
	return luna_wrapper_IDoc::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// IDoc::Kind IDoc::kind() const
}

void LunaTraits< IDoc >::_bind_dtor(IDoc* obj) {
	delete obj;
}

const char LunaTraits< IDoc >::className[] = "IDoc";
const char LunaTraits< IDoc >::fullName[] = "IDoc";
const char LunaTraits< IDoc >::moduleName[] = "doxmlparser";
const char* LunaTraits< IDoc >::parents[] = {0};
const int LunaTraits< IDoc >::hash = 2243631;
const int LunaTraits< IDoc >::uniqueIDs[] = {2243631,0};

luna_RegType LunaTraits< IDoc >::methods[] = {
	{"kind", &luna_wrapper_IDoc::_bind_kind},
	{"dynCast", &luna_wrapper_IDoc::_bind_dynCast},
	{"__eq", &luna_wrapper_IDoc::_bind___eq},
	{"fromVoid", &luna_wrapper_IDoc::_bind_fromVoid},
	{"asVoid", &luna_wrapper_IDoc::_bind_asVoid},
	{"getTable", &luna_wrapper_IDoc::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< IDoc >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< IDoc >::enumValues[] = {
	{"Invalid", IDoc::Invalid},
	{"Para", IDoc::Para},
	{"Text", IDoc::Text},
	{"MarkupModifier", IDoc::MarkupModifier},
	{"ItemizedList", IDoc::ItemizedList},
	{"OrderedList", IDoc::OrderedList},
	{"ListItem", IDoc::ListItem},
	{"ParameterList", IDoc::ParameterList},
	{"Parameter", IDoc::Parameter},
	{"SimpleSect", IDoc::SimpleSect},
	{"Title", IDoc::Title},
	{"Ref", IDoc::Ref},
	{"VariableList", IDoc::VariableList},
	{"VariableListEntry", IDoc::VariableListEntry},
	{"HRuler", IDoc::HRuler},
	{"LineBreak", IDoc::LineBreak},
	{"ULink", IDoc::ULink},
	{"EMail", IDoc::EMail},
	{"Link", IDoc::Link},
	{"ProgramListing", IDoc::ProgramListing},
	{"CodeLine", IDoc::CodeLine},
	{"Highlight", IDoc::Highlight},
	{"Formula", IDoc::Formula},
	{"Image", IDoc::Image},
	{"DotFile", IDoc::DotFile},
	{"IndexEntry", IDoc::IndexEntry},
	{"Table", IDoc::Table},
	{"Row", IDoc::Row},
	{"Entry", IDoc::Entry},
	{"Section", IDoc::Section},
	{"Verbatim", IDoc::Verbatim},
	{"Copy", IDoc::Copy},
	{"TocList", IDoc::TocList},
	{"TocItem", IDoc::TocItem},
	{"Anchor", IDoc::Anchor},
	{"Symbol", IDoc::Symbol},
	{"Internal", IDoc::Internal},
	{"Root", IDoc::Root},
	{"ParameterItem", IDoc::ParameterItem},
	{0,0}
};


