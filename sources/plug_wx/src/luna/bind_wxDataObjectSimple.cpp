#include <plug_common.h>

#include <luna/wrappers/wrapper_wxDataObjectSimple.h>

class luna_wrapper_wxDataObjectSimple {
public:
	typedef Luna< wxDataObjectSimple > luna_t;

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

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxDataObjectSimple* self= (wxDataObjectSimple*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxDataObjectSimple >::push(L,self,false);
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

	// Derived class converters:
	static int _cast_from_wxDataObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		//wxDataObjectSimple* ptr= dynamic_cast< wxDataObjectSimple* >(Luna< wxDataObject >::check(L,1));
		wxDataObjectSimple* ptr= luna_caster< wxDataObject, wxDataObjectSimple >::cast(Luna< wxDataObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxDataObjectSimple >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,9988153) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetDataHere(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetDataSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFormat(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetData(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFormat(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,9988153) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetDataHere(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetDataSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetData(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxDataObjectSimple::wxDataObjectSimple(lua_Table * data, const wxDataFormat & format = wxFormatInvalid)
	static wxDataObjectSimple* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxDataObjectSimple::wxDataObjectSimple(lua_Table * data, const wxDataFormat & format = wxFormatInvalid) function, expected prototype:\nwxDataObjectSimple::wxDataObjectSimple(lua_Table * data, const wxDataFormat & format = wxFormatInvalid)\nClass arguments details:\narg 2 ID = 9988153\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxDataFormat* format_ptr=luatop>1 ? (Luna< wxDataFormat >::check(L,2)) : NULL;
		if( luatop>1 && !format_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg format in wxDataObjectSimple::wxDataObjectSimple function");
		}
		const wxDataFormat & format=luatop>1 ? *format_ptr : (const wxDataFormat&)wxFormatInvalid;

		return new wrapper_wxDataObjectSimple(L,NULL, format);
	}


	// Function binds:
	// bool wxDataObjectSimple::GetDataHere(void * buf) const
	static int _bind_GetDataHere(lua_State *L) {
		if (!_lg_typecheck_GetDataHere(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataObjectSimple::GetDataHere(void * buf) const function, expected prototype:\nbool wxDataObjectSimple::GetDataHere(void * buf) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		void* buf=(Luna< void >::check(L,2));

		wxDataObjectSimple* self=Luna< wxDataObject >::checkSubType< wxDataObjectSimple >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataObjectSimple::GetDataHere(void *) const. Got : '%s'\n%s",typeid(Luna< wxDataObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GetDataHere(buf);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// size_t wxDataObjectSimple::GetDataSize() const
	static int _bind_GetDataSize(lua_State *L) {
		if (!_lg_typecheck_GetDataSize(L)) {
			luaL_error(L, "luna typecheck failed in size_t wxDataObjectSimple::GetDataSize() const function, expected prototype:\nsize_t wxDataObjectSimple::GetDataSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataObjectSimple* self=Luna< wxDataObject >::checkSubType< wxDataObjectSimple >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call size_t wxDataObjectSimple::GetDataSize() const. Got : '%s'\n%s",typeid(Luna< wxDataObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		size_t lret = self->GetDataSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const wxDataFormat & wxDataObjectSimple::GetFormat() const
	static int _bind_GetFormat(lua_State *L) {
		if (!_lg_typecheck_GetFormat(L)) {
			luaL_error(L, "luna typecheck failed in const wxDataFormat & wxDataObjectSimple::GetFormat() const function, expected prototype:\nconst wxDataFormat & wxDataObjectSimple::GetFormat() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataObjectSimple* self=Luna< wxDataObject >::checkSubType< wxDataObjectSimple >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxDataFormat & wxDataObjectSimple::GetFormat() const. Got : '%s'\n%s",typeid(Luna< wxDataObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxDataFormat* lret = &self->GetFormat();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataFormat >::push(L,lret,false);

		return 1;
	}

	// bool wxDataObjectSimple::SetData(size_t len, const void * buf)
	static int _bind_SetData(lua_State *L) {
		if (!_lg_typecheck_SetData(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataObjectSimple::SetData(size_t len, const void * buf) function, expected prototype:\nbool wxDataObjectSimple::SetData(size_t len, const void * buf)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t len=(size_t)lua_tointeger(L,2);
		const void* buf=(Luna< void >::check(L,3));

		wxDataObjectSimple* self=Luna< wxDataObject >::checkSubType< wxDataObjectSimple >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataObjectSimple::SetData(size_t, const void *). Got : '%s'\n%s",typeid(Luna< wxDataObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetData(len, buf);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDataObjectSimple::SetFormat(const wxDataFormat & format)
	static int _bind_SetFormat(lua_State *L) {
		if (!_lg_typecheck_SetFormat(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataObjectSimple::SetFormat(const wxDataFormat & format) function, expected prototype:\nvoid wxDataObjectSimple::SetFormat(const wxDataFormat & format)\nClass arguments details:\narg 1 ID = 9988153\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataFormat* format_ptr=(Luna< wxDataFormat >::check(L,2));
		if( !format_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg format in wxDataObjectSimple::SetFormat function");
		}
		const wxDataFormat & format=*format_ptr;

		wxDataObjectSimple* self=Luna< wxDataObject >::checkSubType< wxDataObjectSimple >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataObjectSimple::SetFormat(const wxDataFormat &). Got : '%s'\n%s",typeid(Luna< wxDataObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetFormat(format);

		return 0;
	}

	// bool wxDataObjectSimple::base_GetDataHere(void * buf) const
	static int _bind_base_GetDataHere(lua_State *L) {
		if (!_lg_typecheck_base_GetDataHere(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataObjectSimple::base_GetDataHere(void * buf) const function, expected prototype:\nbool wxDataObjectSimple::base_GetDataHere(void * buf) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		void* buf=(Luna< void >::check(L,2));

		wxDataObjectSimple* self=Luna< wxDataObject >::checkSubType< wxDataObjectSimple >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataObjectSimple::base_GetDataHere(void *) const. Got : '%s'\n%s",typeid(Luna< wxDataObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataObjectSimple::GetDataHere(buf);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// size_t wxDataObjectSimple::base_GetDataSize() const
	static int _bind_base_GetDataSize(lua_State *L) {
		if (!_lg_typecheck_base_GetDataSize(L)) {
			luaL_error(L, "luna typecheck failed in size_t wxDataObjectSimple::base_GetDataSize() const function, expected prototype:\nsize_t wxDataObjectSimple::base_GetDataSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataObjectSimple* self=Luna< wxDataObject >::checkSubType< wxDataObjectSimple >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call size_t wxDataObjectSimple::base_GetDataSize() const. Got : '%s'\n%s",typeid(Luna< wxDataObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		size_t lret = self->wxDataObjectSimple::GetDataSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxDataObjectSimple::base_SetData(size_t len, const void * buf)
	static int _bind_base_SetData(lua_State *L) {
		if (!_lg_typecheck_base_SetData(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataObjectSimple::base_SetData(size_t len, const void * buf) function, expected prototype:\nbool wxDataObjectSimple::base_SetData(size_t len, const void * buf)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t len=(size_t)lua_tointeger(L,2);
		const void* buf=(Luna< void >::check(L,3));

		wxDataObjectSimple* self=Luna< wxDataObject >::checkSubType< wxDataObjectSimple >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataObjectSimple::base_SetData(size_t, const void *). Got : '%s'\n%s",typeid(Luna< wxDataObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataObjectSimple::SetData(len, buf);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxDataObjectSimple* LunaTraits< wxDataObjectSimple >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxDataObjectSimple::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void wxDataObject::GetAllFormats(wxDataFormat * formats, wxDataObject::Direction dir = wxDataObject::Get) const
	// bool wxDataObject::GetDataHere(const wxDataFormat & format, void * buf) const
	// size_t wxDataObject::GetDataSize(const wxDataFormat & format) const
	// size_t wxDataObject::GetFormatCount(wxDataObject::Direction dir = wxDataObject::Get) const
	// wxDataFormat wxDataObject::GetPreferredFormat(wxDataObject::Direction dir = wxDataObject::Get) const
}

void LunaTraits< wxDataObjectSimple >::_bind_dtor(wxDataObjectSimple* obj) {
	delete obj;
}

const char LunaTraits< wxDataObjectSimple >::className[] = "wxDataObjectSimple";
const char LunaTraits< wxDataObjectSimple >::fullName[] = "wxDataObjectSimple";
const char LunaTraits< wxDataObjectSimple >::moduleName[] = "wx";
const char* LunaTraits< wxDataObjectSimple >::parents[] = {"wx.wxDataObject", 0};
const int LunaTraits< wxDataObjectSimple >::hash = 89880179;
const int LunaTraits< wxDataObjectSimple >::uniqueIDs[] = {55398761,0};

luna_RegType LunaTraits< wxDataObjectSimple >::methods[] = {
	{"GetDataHere", &luna_wrapper_wxDataObjectSimple::_bind_GetDataHere},
	{"GetDataSize", &luna_wrapper_wxDataObjectSimple::_bind_GetDataSize},
	{"GetFormat", &luna_wrapper_wxDataObjectSimple::_bind_GetFormat},
	{"SetData", &luna_wrapper_wxDataObjectSimple::_bind_SetData},
	{"SetFormat", &luna_wrapper_wxDataObjectSimple::_bind_SetFormat},
	{"base_GetDataHere", &luna_wrapper_wxDataObjectSimple::_bind_base_GetDataHere},
	{"base_GetDataSize", &luna_wrapper_wxDataObjectSimple::_bind_base_GetDataSize},
	{"base_SetData", &luna_wrapper_wxDataObjectSimple::_bind_base_SetData},
	{"fromVoid", &luna_wrapper_wxDataObjectSimple::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxDataObjectSimple::_bind_asVoid},
	{"getTable", &luna_wrapper_wxDataObjectSimple::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxDataObjectSimple >::converters[] = {
	{"wxDataObject", &luna_wrapper_wxDataObjectSimple::_cast_from_wxDataObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxDataObjectSimple >::enumValues[] = {
	{0,0}
};


