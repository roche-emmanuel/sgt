#include <plug_common.h>

#include <luna/wrappers/wrapper_wxDataObject.h>

class luna_wrapper_wxDataObject {
public:
	typedef Luna< wxDataObject > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxDataObject* self=(Luna< wxDataObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<wxDataObject,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,55398761) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxDataObject*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxDataObject* rhs =(Luna< wxDataObject >::check(L,2));
		wxDataObject* self=(Luna< wxDataObject >::check(L,1));
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

		wxDataObject* self= (wxDataObject*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxDataObject >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,55398761) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxDataObject >::check(L,1));
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

		wxDataObject* self=(Luna< wxDataObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxDataObject");
		
		return luna_dynamicCast(L,converters,"wxDataObject",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetAllFormats(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,9988153)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetDataHere(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,9988153) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetDataSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,9988153) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetFormatCount(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetPreferredFormat(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetData(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,9988153) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsSupported(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,9988153) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetData(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,9988153) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxDataObject::wxDataObject(lua_Table * data)
	static wxDataObject* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxDataObject::wxDataObject(lua_Table * data) function, expected prototype:\nwxDataObject::wxDataObject(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxDataObject(L,NULL);
	}


	// Function binds:
	// void wxDataObject::GetAllFormats(wxDataFormat * formats, wxDataObject::Direction dir = wxDataObject::Get) const
	static int _bind_GetAllFormats(lua_State *L) {
		if (!_lg_typecheck_GetAllFormats(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataObject::GetAllFormats(wxDataFormat * formats, wxDataObject::Direction dir = wxDataObject::Get) const function, expected prototype:\nvoid wxDataObject::GetAllFormats(wxDataFormat * formats, wxDataObject::Direction dir = wxDataObject::Get) const\nClass arguments details:\narg 1 ID = 9988153\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxDataFormat* formats=(Luna< wxDataFormat >::check(L,2));
		wxDataObject::Direction dir=luatop>2 ? (wxDataObject::Direction)lua_tointeger(L,3) : (wxDataObject::Direction)wxDataObject::Get;

		wxDataObject* self=(Luna< wxDataObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataObject::GetAllFormats(wxDataFormat *, wxDataObject::Direction) const. Got : '%s'\n%s",typeid(Luna< wxDataObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GetAllFormats(formats, dir);

		return 0;
	}

	// bool wxDataObject::GetDataHere(const wxDataFormat & format, void * buf) const
	static int _bind_GetDataHere(lua_State *L) {
		if (!_lg_typecheck_GetDataHere(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataObject::GetDataHere(const wxDataFormat & format, void * buf) const function, expected prototype:\nbool wxDataObject::GetDataHere(const wxDataFormat & format, void * buf) const\nClass arguments details:\narg 1 ID = 9988153\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataFormat* format_ptr=(Luna< wxDataFormat >::check(L,2));
		if( !format_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg format in wxDataObject::GetDataHere function");
		}
		const wxDataFormat & format=*format_ptr;
		void* buf=(Luna< void >::check(L,3));

		wxDataObject* self=(Luna< wxDataObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataObject::GetDataHere(const wxDataFormat &, void *) const. Got : '%s'\n%s",typeid(Luna< wxDataObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GetDataHere(format, buf);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// size_t wxDataObject::GetDataSize(const wxDataFormat & format) const
	static int _bind_GetDataSize(lua_State *L) {
		if (!_lg_typecheck_GetDataSize(L)) {
			luaL_error(L, "luna typecheck failed in size_t wxDataObject::GetDataSize(const wxDataFormat & format) const function, expected prototype:\nsize_t wxDataObject::GetDataSize(const wxDataFormat & format) const\nClass arguments details:\narg 1 ID = 9988153\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataFormat* format_ptr=(Luna< wxDataFormat >::check(L,2));
		if( !format_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg format in wxDataObject::GetDataSize function");
		}
		const wxDataFormat & format=*format_ptr;

		wxDataObject* self=(Luna< wxDataObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call size_t wxDataObject::GetDataSize(const wxDataFormat &) const. Got : '%s'\n%s",typeid(Luna< wxDataObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		size_t lret = self->GetDataSize(format);
		lua_pushnumber(L,lret);

		return 1;
	}

	// size_t wxDataObject::GetFormatCount(wxDataObject::Direction dir = wxDataObject::Get) const
	static int _bind_GetFormatCount(lua_State *L) {
		if (!_lg_typecheck_GetFormatCount(L)) {
			luaL_error(L, "luna typecheck failed in size_t wxDataObject::GetFormatCount(wxDataObject::Direction dir = wxDataObject::Get) const function, expected prototype:\nsize_t wxDataObject::GetFormatCount(wxDataObject::Direction dir = wxDataObject::Get) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxDataObject::Direction dir=luatop>1 ? (wxDataObject::Direction)lua_tointeger(L,2) : (wxDataObject::Direction)wxDataObject::Get;

		wxDataObject* self=(Luna< wxDataObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call size_t wxDataObject::GetFormatCount(wxDataObject::Direction) const. Got : '%s'\n%s",typeid(Luna< wxDataObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		size_t lret = self->GetFormatCount(dir);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxDataFormat wxDataObject::GetPreferredFormat(wxDataObject::Direction dir = wxDataObject::Get) const
	static int _bind_GetPreferredFormat(lua_State *L) {
		if (!_lg_typecheck_GetPreferredFormat(L)) {
			luaL_error(L, "luna typecheck failed in wxDataFormat wxDataObject::GetPreferredFormat(wxDataObject::Direction dir = wxDataObject::Get) const function, expected prototype:\nwxDataFormat wxDataObject::GetPreferredFormat(wxDataObject::Direction dir = wxDataObject::Get) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxDataObject::Direction dir=luatop>1 ? (wxDataObject::Direction)lua_tointeger(L,2) : (wxDataObject::Direction)wxDataObject::Get;

		wxDataObject* self=(Luna< wxDataObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDataFormat wxDataObject::GetPreferredFormat(wxDataObject::Direction) const. Got : '%s'\n%s",typeid(Luna< wxDataObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDataFormat stack_lret = self->GetPreferredFormat(dir);
		wxDataFormat* lret = new wxDataFormat(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataFormat >::push(L,lret,true);

		return 1;
	}

	// bool wxDataObject::SetData(const wxDataFormat & format, size_t len, const void * buf)
	static int _bind_SetData(lua_State *L) {
		if (!_lg_typecheck_SetData(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataObject::SetData(const wxDataFormat & format, size_t len, const void * buf) function, expected prototype:\nbool wxDataObject::SetData(const wxDataFormat & format, size_t len, const void * buf)\nClass arguments details:\narg 1 ID = 9988153\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataFormat* format_ptr=(Luna< wxDataFormat >::check(L,2));
		if( !format_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg format in wxDataObject::SetData function");
		}
		const wxDataFormat & format=*format_ptr;
		size_t len=(size_t)lua_tointeger(L,3);
		const void* buf=(Luna< void >::check(L,4));

		wxDataObject* self=(Luna< wxDataObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataObject::SetData(const wxDataFormat &, size_t, const void *). Got : '%s'\n%s",typeid(Luna< wxDataObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetData(format, len, buf);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataObject::IsSupported(const wxDataFormat & format, wxDataObject::Direction dir = wxDataObject::Get) const
	static int _bind_IsSupported(lua_State *L) {
		if (!_lg_typecheck_IsSupported(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataObject::IsSupported(const wxDataFormat & format, wxDataObject::Direction dir = wxDataObject::Get) const function, expected prototype:\nbool wxDataObject::IsSupported(const wxDataFormat & format, wxDataObject::Direction dir = wxDataObject::Get) const\nClass arguments details:\narg 1 ID = 9988153\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxDataFormat* format_ptr=(Luna< wxDataFormat >::check(L,2));
		if( !format_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg format in wxDataObject::IsSupported function");
		}
		const wxDataFormat & format=*format_ptr;
		wxDataObject::Direction dir=luatop>2 ? (wxDataObject::Direction)lua_tointeger(L,3) : (wxDataObject::Direction)wxDataObject::Get;

		wxDataObject* self=(Luna< wxDataObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataObject::IsSupported(const wxDataFormat &, wxDataObject::Direction) const. Got : '%s'\n%s",typeid(Luna< wxDataObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsSupported(format, dir);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataObject::base_SetData(const wxDataFormat & format, size_t len, const void * buf)
	static int _bind_base_SetData(lua_State *L) {
		if (!_lg_typecheck_base_SetData(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataObject::base_SetData(const wxDataFormat & format, size_t len, const void * buf) function, expected prototype:\nbool wxDataObject::base_SetData(const wxDataFormat & format, size_t len, const void * buf)\nClass arguments details:\narg 1 ID = 9988153\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataFormat* format_ptr=(Luna< wxDataFormat >::check(L,2));
		if( !format_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg format in wxDataObject::base_SetData function");
		}
		const wxDataFormat & format=*format_ptr;
		size_t len=(size_t)lua_tointeger(L,3);
		const void* buf=(Luna< void >::check(L,4));

		wxDataObject* self=(Luna< wxDataObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataObject::base_SetData(const wxDataFormat &, size_t, const void *). Got : '%s'\n%s",typeid(Luna< wxDataObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataObject::SetData(format, len, buf);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxDataObject* LunaTraits< wxDataObject >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxDataObject::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void wxDataObject::GetAllFormats(wxDataFormat * formats, wxDataObject::Direction dir = wxDataObject::Get) const
	// bool wxDataObject::GetDataHere(const wxDataFormat & format, void * buf) const
	// size_t wxDataObject::GetDataSize(const wxDataFormat & format) const
	// size_t wxDataObject::GetFormatCount(wxDataObject::Direction dir = wxDataObject::Get) const
	// wxDataFormat wxDataObject::GetPreferredFormat(wxDataObject::Direction dir = wxDataObject::Get) const
}

void LunaTraits< wxDataObject >::_bind_dtor(wxDataObject* obj) {
	delete obj;
}

const char LunaTraits< wxDataObject >::className[] = "wxDataObject";
const char LunaTraits< wxDataObject >::fullName[] = "wxDataObject";
const char LunaTraits< wxDataObject >::moduleName[] = "wx";
const char* LunaTraits< wxDataObject >::parents[] = {0};
const int LunaTraits< wxDataObject >::hash = 55398761;
const int LunaTraits< wxDataObject >::uniqueIDs[] = {55398761,0};

luna_RegType LunaTraits< wxDataObject >::methods[] = {
	{"GetAllFormats", &luna_wrapper_wxDataObject::_bind_GetAllFormats},
	{"GetDataHere", &luna_wrapper_wxDataObject::_bind_GetDataHere},
	{"GetDataSize", &luna_wrapper_wxDataObject::_bind_GetDataSize},
	{"GetFormatCount", &luna_wrapper_wxDataObject::_bind_GetFormatCount},
	{"GetPreferredFormat", &luna_wrapper_wxDataObject::_bind_GetPreferredFormat},
	{"SetData", &luna_wrapper_wxDataObject::_bind_SetData},
	{"IsSupported", &luna_wrapper_wxDataObject::_bind_IsSupported},
	{"base_SetData", &luna_wrapper_wxDataObject::_bind_base_SetData},
	{"dynCast", &luna_wrapper_wxDataObject::_bind_dynCast},
	{"__eq", &luna_wrapper_wxDataObject::_bind___eq},
	{"fromVoid", &luna_wrapper_wxDataObject::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxDataObject::_bind_asVoid},
	{"getTable", &luna_wrapper_wxDataObject::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxDataObject >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxDataObject >::enumValues[] = {
	{"Get", wxDataObject::Get},
	{"Set", wxDataObject::Set},
	{"Both", wxDataObject::Both},
	{0,0}
};


