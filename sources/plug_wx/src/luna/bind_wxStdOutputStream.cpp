#include <plug_common.h>

#include <luna/wrappers/wrapper_wxStdOutputStream.h>

class luna_wrapper_wxStdOutputStream {
public:
	typedef Luna< wxStdOutputStream > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxStdOutputStream* self=(Luna< wxStdOutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<wxStdOutputStream,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,63608358) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxStdOutputStream*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxStdOutputStream* rhs =(Luna< wxStdOutputStream >::check(L,2));
		wxStdOutputStream* self=(Luna< wxStdOutputStream >::check(L,1));
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

		wxStdOutputStream* self= (wxStdOutputStream*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxStdOutputStream >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,63608358) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxStdOutputStream >::check(L,1));
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

		wxStdOutputStream* self=(Luna< wxStdOutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxStdOutputStream");
		
		return luna_dynamicCast(L,converters,"wxStdOutputStream",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxOutputStream >(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxOutputStream >(L,2))) ) return false;
		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxStdOutputStream::wxStdOutputStream(wxOutputStream & stream)
	static wxStdOutputStream* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxStdOutputStream::wxStdOutputStream(wxOutputStream & stream) function, expected prototype:\nwxStdOutputStream::wxStdOutputStream(wxOutputStream & stream)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxOutputStream* stream_ptr=(Luna< wxObject >::checkSubType< wxOutputStream >(L,1));
		if( !stream_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg stream in wxStdOutputStream::wxStdOutputStream function");
		}
		wxOutputStream & stream=*stream_ptr;

		return new wxStdOutputStream(stream);
	}

	// wxStdOutputStream::wxStdOutputStream(lua_Table * data, wxOutputStream & stream)
	static wxStdOutputStream* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxStdOutputStream::wxStdOutputStream(lua_Table * data, wxOutputStream & stream) function, expected prototype:\nwxStdOutputStream::wxStdOutputStream(lua_Table * data, wxOutputStream & stream)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxOutputStream* stream_ptr=(Luna< wxObject >::checkSubType< wxOutputStream >(L,2));
		if( !stream_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg stream in wxStdOutputStream::wxStdOutputStream function");
		}
		wxOutputStream & stream=*stream_ptr;

		return new wrapper_wxStdOutputStream(L,NULL, stream);
	}

	// Overload binder for wxStdOutputStream::wxStdOutputStream
	static wxStdOutputStream* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxStdOutputStream, cannot match any of the overloads for function wxStdOutputStream:\n  wxStdOutputStream(wxOutputStream &)\n  wxStdOutputStream(lua_Table *, wxOutputStream &)\n");
		return NULL;
	}


	// Function binds:

	// Operator binds:

};

wxStdOutputStream* LunaTraits< wxStdOutputStream >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxStdOutputStream::_bind_ctor(L);
}

void LunaTraits< wxStdOutputStream >::_bind_dtor(wxStdOutputStream* obj) {
	delete obj;
}

const char LunaTraits< wxStdOutputStream >::className[] = "wxStdOutputStream";
const char LunaTraits< wxStdOutputStream >::fullName[] = "wxStdOutputStream";
const char LunaTraits< wxStdOutputStream >::moduleName[] = "wx";
const char* LunaTraits< wxStdOutputStream >::parents[] = {0};
const int LunaTraits< wxStdOutputStream >::hash = 63608358;
const int LunaTraits< wxStdOutputStream >::uniqueIDs[] = {63608358,0};

luna_RegType LunaTraits< wxStdOutputStream >::methods[] = {
	{"dynCast", &luna_wrapper_wxStdOutputStream::_bind_dynCast},
	{"__eq", &luna_wrapper_wxStdOutputStream::_bind___eq},
	{"fromVoid", &luna_wrapper_wxStdOutputStream::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxStdOutputStream::_bind_asVoid},
	{"getTable", &luna_wrapper_wxStdOutputStream::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxStdOutputStream >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxStdOutputStream >::enumValues[] = {
	{0,0}
};


