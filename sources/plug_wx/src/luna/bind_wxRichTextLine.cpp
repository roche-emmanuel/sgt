#include <plug_common.h>

#include <luna/wrappers/wrapper_wxRichTextLine.h>

class luna_wrapper_wxRichTextLine {
public:
	typedef Luna< wxRichTextLine > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxRichTextLine* self=(Luna< wxRichTextLine >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<wxRichTextLine,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,86518173) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxRichTextLine*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxRichTextLine* rhs =(Luna< wxRichTextLine >::check(L,2));
		wxRichTextLine* self=(Luna< wxRichTextLine >::check(L,1));
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

		wxRichTextLine* self= (wxRichTextLine*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxRichTextLine >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,86518173) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxRichTextLine >::check(L,1));
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

		wxRichTextLine* self=(Luna< wxRichTextLine >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxRichTextLine");
		
		return luna_dynamicCast(L,converters,"wxRichTextLine",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxRichTextLine* LunaTraits< wxRichTextLine >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxRichTextLine >::_bind_dtor(wxRichTextLine* obj) {
	delete obj;
}

const char LunaTraits< wxRichTextLine >::className[] = "wxRichTextLine";
const char LunaTraits< wxRichTextLine >::fullName[] = "wxRichTextLine";
const char LunaTraits< wxRichTextLine >::moduleName[] = "wx";
const char* LunaTraits< wxRichTextLine >::parents[] = {0};
const int LunaTraits< wxRichTextLine >::hash = 86518173;
const int LunaTraits< wxRichTextLine >::uniqueIDs[] = {86518173,0};

luna_RegType LunaTraits< wxRichTextLine >::methods[] = {
	{"dynCast", &luna_wrapper_wxRichTextLine::_bind_dynCast},
	{"__eq", &luna_wrapper_wxRichTextLine::_bind___eq},
	{"fromVoid", &luna_wrapper_wxRichTextLine::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxRichTextLine::_bind_asVoid},
	{"getTable", &luna_wrapper_wxRichTextLine::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxRichTextLine >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxRichTextLine >::enumValues[] = {
	{0,0}
};


