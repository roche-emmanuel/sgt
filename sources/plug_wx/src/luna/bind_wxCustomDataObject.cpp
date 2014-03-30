#include <plug_common.h>

#include <luna/wrappers/wrapper_wxCustomDataObject.h>

class luna_wrapper_wxCustomDataObject {
public:
	typedef Luna< wxCustomDataObject > luna_t;

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

		wxCustomDataObject* self= (wxCustomDataObject*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxCustomDataObject >::push(L,self,false);
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
		//wxCustomDataObject* ptr= dynamic_cast< wxCustomDataObject* >(Luna< wxDataObject >::check(L,1));
		wxCustomDataObject* ptr= luna_caster< wxDataObject, wxCustomDataObject >::cast(Luna< wxDataObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxCustomDataObject >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_Alloc(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Free(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetData(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_TakeData(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
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

	inline static bool _lg_typecheck_base_Alloc(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Free(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetSize(lua_State *L) {
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
	// wxCustomDataObject::wxCustomDataObject(lua_Table * data, const wxDataFormat & format = wxFormatInvalid)
	static wxCustomDataObject* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxCustomDataObject::wxCustomDataObject(lua_Table * data, const wxDataFormat & format = wxFormatInvalid) function, expected prototype:\nwxCustomDataObject::wxCustomDataObject(lua_Table * data, const wxDataFormat & format = wxFormatInvalid)\nClass arguments details:\narg 2 ID = 9988153\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxDataFormat* format_ptr=luatop>1 ? (Luna< wxDataFormat >::check(L,2)) : NULL;
		if( luatop>1 && !format_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg format in wxCustomDataObject::wxCustomDataObject function");
		}
		const wxDataFormat & format=luatop>1 ? *format_ptr : (const wxDataFormat&)wxFormatInvalid;

		return new wrapper_wxCustomDataObject(L,NULL, format);
	}


	// Function binds:
	// void * wxCustomDataObject::Alloc(size_t size)
	static int _bind_Alloc(lua_State *L) {
		if (!_lg_typecheck_Alloc(L)) {
			luaL_error(L, "luna typecheck failed in void * wxCustomDataObject::Alloc(size_t size) function, expected prototype:\nvoid * wxCustomDataObject::Alloc(size_t size)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t size=(size_t)lua_tointeger(L,2);

		wxCustomDataObject* self=Luna< wxDataObject >::checkSubType< wxCustomDataObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void * wxCustomDataObject::Alloc(size_t). Got : '%s'\n%s",typeid(Luna< wxDataObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		void * lret = self->Alloc(size);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// void wxCustomDataObject::Free()
	static int _bind_Free(lua_State *L) {
		if (!_lg_typecheck_Free(L)) {
			luaL_error(L, "luna typecheck failed in void wxCustomDataObject::Free() function, expected prototype:\nvoid wxCustomDataObject::Free()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxCustomDataObject* self=Luna< wxDataObject >::checkSubType< wxCustomDataObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxCustomDataObject::Free(). Got : '%s'\n%s",typeid(Luna< wxDataObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Free();

		return 0;
	}

	// void * wxCustomDataObject::GetData() const
	static int _bind_GetData(lua_State *L) {
		if (!_lg_typecheck_GetData(L)) {
			luaL_error(L, "luna typecheck failed in void * wxCustomDataObject::GetData() const function, expected prototype:\nvoid * wxCustomDataObject::GetData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxCustomDataObject* self=Luna< wxDataObject >::checkSubType< wxCustomDataObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void * wxCustomDataObject::GetData() const. Got : '%s'\n%s",typeid(Luna< wxDataObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		void * lret = self->GetData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// size_t wxCustomDataObject::GetSize() const
	static int _bind_GetSize(lua_State *L) {
		if (!_lg_typecheck_GetSize(L)) {
			luaL_error(L, "luna typecheck failed in size_t wxCustomDataObject::GetSize() const function, expected prototype:\nsize_t wxCustomDataObject::GetSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxCustomDataObject* self=Luna< wxDataObject >::checkSubType< wxCustomDataObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call size_t wxCustomDataObject::GetSize() const. Got : '%s'\n%s",typeid(Luna< wxDataObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		size_t lret = self->GetSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxCustomDataObject::SetData(size_t size, const void * data)
	static int _bind_SetData(lua_State *L) {
		if (!_lg_typecheck_SetData(L)) {
			luaL_error(L, "luna typecheck failed in bool wxCustomDataObject::SetData(size_t size, const void * data) function, expected prototype:\nbool wxCustomDataObject::SetData(size_t size, const void * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t size=(size_t)lua_tointeger(L,2);
		const void* data=(Luna< void >::check(L,3));

		wxCustomDataObject* self=Luna< wxDataObject >::checkSubType< wxCustomDataObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxCustomDataObject::SetData(size_t, const void *). Got : '%s'\n%s",typeid(Luna< wxDataObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetData(size, data);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxCustomDataObject::TakeData(size_t size, void * data)
	static int _bind_TakeData(lua_State *L) {
		if (!_lg_typecheck_TakeData(L)) {
			luaL_error(L, "luna typecheck failed in void wxCustomDataObject::TakeData(size_t size, void * data) function, expected prototype:\nvoid wxCustomDataObject::TakeData(size_t size, void * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t size=(size_t)lua_tointeger(L,2);
		void* data=(Luna< void >::check(L,3));

		wxCustomDataObject* self=Luna< wxDataObject >::checkSubType< wxCustomDataObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxCustomDataObject::TakeData(size_t, void *). Got : '%s'\n%s",typeid(Luna< wxDataObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TakeData(size, data);

		return 0;
	}

	// bool wxCustomDataObject::base_GetDataHere(void * buf) const
	static int _bind_base_GetDataHere(lua_State *L) {
		if (!_lg_typecheck_base_GetDataHere(L)) {
			luaL_error(L, "luna typecheck failed in bool wxCustomDataObject::base_GetDataHere(void * buf) const function, expected prototype:\nbool wxCustomDataObject::base_GetDataHere(void * buf) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		void* buf=(Luna< void >::check(L,2));

		wxCustomDataObject* self=Luna< wxDataObject >::checkSubType< wxCustomDataObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxCustomDataObject::base_GetDataHere(void *) const. Got : '%s'\n%s",typeid(Luna< wxDataObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxCustomDataObject::GetDataHere(buf);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// size_t wxCustomDataObject::base_GetDataSize() const
	static int _bind_base_GetDataSize(lua_State *L) {
		if (!_lg_typecheck_base_GetDataSize(L)) {
			luaL_error(L, "luna typecheck failed in size_t wxCustomDataObject::base_GetDataSize() const function, expected prototype:\nsize_t wxCustomDataObject::base_GetDataSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxCustomDataObject* self=Luna< wxDataObject >::checkSubType< wxCustomDataObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call size_t wxCustomDataObject::base_GetDataSize() const. Got : '%s'\n%s",typeid(Luna< wxDataObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		size_t lret = self->wxCustomDataObject::GetDataSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void * wxCustomDataObject::base_Alloc(size_t size)
	static int _bind_base_Alloc(lua_State *L) {
		if (!_lg_typecheck_base_Alloc(L)) {
			luaL_error(L, "luna typecheck failed in void * wxCustomDataObject::base_Alloc(size_t size) function, expected prototype:\nvoid * wxCustomDataObject::base_Alloc(size_t size)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t size=(size_t)lua_tointeger(L,2);

		wxCustomDataObject* self=Luna< wxDataObject >::checkSubType< wxCustomDataObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void * wxCustomDataObject::base_Alloc(size_t). Got : '%s'\n%s",typeid(Luna< wxDataObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		void * lret = self->wxCustomDataObject::Alloc(size);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// void wxCustomDataObject::base_Free()
	static int _bind_base_Free(lua_State *L) {
		if (!_lg_typecheck_base_Free(L)) {
			luaL_error(L, "luna typecheck failed in void wxCustomDataObject::base_Free() function, expected prototype:\nvoid wxCustomDataObject::base_Free()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxCustomDataObject* self=Luna< wxDataObject >::checkSubType< wxCustomDataObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxCustomDataObject::base_Free(). Got : '%s'\n%s",typeid(Luna< wxDataObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxCustomDataObject::Free();

		return 0;
	}

	// void * wxCustomDataObject::base_GetData() const
	static int _bind_base_GetData(lua_State *L) {
		if (!_lg_typecheck_base_GetData(L)) {
			luaL_error(L, "luna typecheck failed in void * wxCustomDataObject::base_GetData() const function, expected prototype:\nvoid * wxCustomDataObject::base_GetData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxCustomDataObject* self=Luna< wxDataObject >::checkSubType< wxCustomDataObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void * wxCustomDataObject::base_GetData() const. Got : '%s'\n%s",typeid(Luna< wxDataObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		void * lret = self->wxCustomDataObject::GetData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// size_t wxCustomDataObject::base_GetSize() const
	static int _bind_base_GetSize(lua_State *L) {
		if (!_lg_typecheck_base_GetSize(L)) {
			luaL_error(L, "luna typecheck failed in size_t wxCustomDataObject::base_GetSize() const function, expected prototype:\nsize_t wxCustomDataObject::base_GetSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxCustomDataObject* self=Luna< wxDataObject >::checkSubType< wxCustomDataObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call size_t wxCustomDataObject::base_GetSize() const. Got : '%s'\n%s",typeid(Luna< wxDataObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		size_t lret = self->wxCustomDataObject::GetSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxCustomDataObject::base_SetData(size_t size, const void * data)
	static int _bind_base_SetData(lua_State *L) {
		if (!_lg_typecheck_base_SetData(L)) {
			luaL_error(L, "luna typecheck failed in bool wxCustomDataObject::base_SetData(size_t size, const void * data) function, expected prototype:\nbool wxCustomDataObject::base_SetData(size_t size, const void * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t size=(size_t)lua_tointeger(L,2);
		const void* data=(Luna< void >::check(L,3));

		wxCustomDataObject* self=Luna< wxDataObject >::checkSubType< wxCustomDataObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxCustomDataObject::base_SetData(size_t, const void *). Got : '%s'\n%s",typeid(Luna< wxDataObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxCustomDataObject::SetData(size, data);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxCustomDataObject* LunaTraits< wxCustomDataObject >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxCustomDataObject::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void wxDataObject::GetAllFormats(wxDataFormat * formats, wxDataObject::Direction dir = wxDataObject::Get) const
	// bool wxDataObject::GetDataHere(const wxDataFormat & format, void * buf) const
	// size_t wxDataObject::GetDataSize(const wxDataFormat & format) const
	// size_t wxDataObject::GetFormatCount(wxDataObject::Direction dir = wxDataObject::Get) const
	// wxDataFormat wxDataObject::GetPreferredFormat(wxDataObject::Direction dir = wxDataObject::Get) const
}

void LunaTraits< wxCustomDataObject >::_bind_dtor(wxCustomDataObject* obj) {
	delete obj;
}

const char LunaTraits< wxCustomDataObject >::className[] = "wxCustomDataObject";
const char LunaTraits< wxCustomDataObject >::fullName[] = "wxCustomDataObject";
const char LunaTraits< wxCustomDataObject >::moduleName[] = "wx";
const char* LunaTraits< wxCustomDataObject >::parents[] = {"wx.wxDataObjectSimple", 0};
const int LunaTraits< wxCustomDataObject >::hash = 68945453;
const int LunaTraits< wxCustomDataObject >::uniqueIDs[] = {55398761,0};

luna_RegType LunaTraits< wxCustomDataObject >::methods[] = {
	{"Alloc", &luna_wrapper_wxCustomDataObject::_bind_Alloc},
	{"Free", &luna_wrapper_wxCustomDataObject::_bind_Free},
	{"GetData", &luna_wrapper_wxCustomDataObject::_bind_GetData},
	{"GetSize", &luna_wrapper_wxCustomDataObject::_bind_GetSize},
	{"SetData", &luna_wrapper_wxCustomDataObject::_bind_SetData},
	{"TakeData", &luna_wrapper_wxCustomDataObject::_bind_TakeData},
	{"base_GetDataHere", &luna_wrapper_wxCustomDataObject::_bind_base_GetDataHere},
	{"base_GetDataSize", &luna_wrapper_wxCustomDataObject::_bind_base_GetDataSize},
	{"base_Alloc", &luna_wrapper_wxCustomDataObject::_bind_base_Alloc},
	{"base_Free", &luna_wrapper_wxCustomDataObject::_bind_base_Free},
	{"base_GetData", &luna_wrapper_wxCustomDataObject::_bind_base_GetData},
	{"base_GetSize", &luna_wrapper_wxCustomDataObject::_bind_base_GetSize},
	{"base_SetData", &luna_wrapper_wxCustomDataObject::_bind_base_SetData},
	{"fromVoid", &luna_wrapper_wxCustomDataObject::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxCustomDataObject::_bind_asVoid},
	{"getTable", &luna_wrapper_wxCustomDataObject::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxCustomDataObject >::converters[] = {
	{"wxDataObject", &luna_wrapper_wxCustomDataObject::_cast_from_wxDataObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxCustomDataObject >::enumValues[] = {
	{0,0}
};


