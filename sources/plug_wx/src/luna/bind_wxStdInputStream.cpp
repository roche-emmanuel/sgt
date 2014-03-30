#include <plug_common.h>

#include <luna/wrappers/wrapper_wxStdInputStream.h>

class luna_wrapper_wxStdInputStream {
public:
	typedef Luna< wxStdInputStream > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxStdInputStream* self=(Luna< wxStdInputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<wxStdInputStream,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,37809017) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxStdInputStream*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxStdInputStream* rhs =(Luna< wxStdInputStream >::check(L,2));
		wxStdInputStream* self=(Luna< wxStdInputStream >::check(L,1));
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

		wxStdInputStream* self= (wxStdInputStream*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxStdInputStream >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,37809017) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxStdInputStream >::check(L,1));
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

		wxStdInputStream* self=(Luna< wxStdInputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxStdInputStream");
		
		return luna_dynamicCast(L,converters,"wxStdInputStream",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxInputStream >(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxInputStream >(L,2))) ) return false;
		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxStdInputStream::wxStdInputStream(wxInputStream & stream)
	static wxStdInputStream* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxStdInputStream::wxStdInputStream(wxInputStream & stream) function, expected prototype:\nwxStdInputStream::wxStdInputStream(wxInputStream & stream)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxInputStream* stream_ptr=(Luna< wxObject >::checkSubType< wxInputStream >(L,1));
		if( !stream_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg stream in wxStdInputStream::wxStdInputStream function");
		}
		wxInputStream & stream=*stream_ptr;

		return new wxStdInputStream(stream);
	}

	// wxStdInputStream::wxStdInputStream(lua_Table * data, wxInputStream & stream)
	static wxStdInputStream* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxStdInputStream::wxStdInputStream(lua_Table * data, wxInputStream & stream) function, expected prototype:\nwxStdInputStream::wxStdInputStream(lua_Table * data, wxInputStream & stream)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxInputStream* stream_ptr=(Luna< wxObject >::checkSubType< wxInputStream >(L,2));
		if( !stream_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg stream in wxStdInputStream::wxStdInputStream function");
		}
		wxInputStream & stream=*stream_ptr;

		return new wrapper_wxStdInputStream(L,NULL, stream);
	}

	// Overload binder for wxStdInputStream::wxStdInputStream
	static wxStdInputStream* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxStdInputStream, cannot match any of the overloads for function wxStdInputStream:\n  wxStdInputStream(wxInputStream &)\n  wxStdInputStream(lua_Table *, wxInputStream &)\n");
		return NULL;
	}


	// Function binds:

	// Operator binds:

};

wxStdInputStream* LunaTraits< wxStdInputStream >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxStdInputStream::_bind_ctor(L);
}

void LunaTraits< wxStdInputStream >::_bind_dtor(wxStdInputStream* obj) {
	delete obj;
}

const char LunaTraits< wxStdInputStream >::className[] = "wxStdInputStream";
const char LunaTraits< wxStdInputStream >::fullName[] = "wxStdInputStream";
const char LunaTraits< wxStdInputStream >::moduleName[] = "wx";
const char* LunaTraits< wxStdInputStream >::parents[] = {0};
const int LunaTraits< wxStdInputStream >::hash = 37809017;
const int LunaTraits< wxStdInputStream >::uniqueIDs[] = {37809017,0};

luna_RegType LunaTraits< wxStdInputStream >::methods[] = {
	{"dynCast", &luna_wrapper_wxStdInputStream::_bind_dynCast},
	{"__eq", &luna_wrapper_wxStdInputStream::_bind___eq},
	{"fromVoid", &luna_wrapper_wxStdInputStream::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxStdInputStream::_bind_asVoid},
	{"getTable", &luna_wrapper_wxStdInputStream::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxStdInputStream >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxStdInputStream >::enumValues[] = {
	{0,0}
};


