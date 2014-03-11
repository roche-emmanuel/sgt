#include <plug_common.h>

#include <luna/wrappers/wrapper_wxBitmapDataObject.h>

class luna_wrapper_wxBitmapDataObject {
public:
	typedef Luna< wxBitmapDataObject > luna_t;

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

		wxBitmapDataObject* self= (wxBitmapDataObject*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxBitmapDataObject >::push(L,self,false);
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
		//wxBitmapDataObject* ptr= dynamic_cast< wxBitmapDataObject* >(Luna< wxDataObject >::check(L,1));
		wxBitmapDataObject* ptr= luna_caster< wxDataObject, wxBitmapDataObject >::cast(Luna< wxDataObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxBitmapDataObject >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetBitmap(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetBitmap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
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

	inline static bool _lg_typecheck_base_GetBitmap(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetBitmap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxBitmapDataObject::wxBitmapDataObject(lua_Table * data, const wxBitmap & bitmap = wxNullBitmap)
	static wxBitmapDataObject* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxBitmapDataObject::wxBitmapDataObject(lua_Table * data, const wxBitmap & bitmap = wxNullBitmap) function, expected prototype:\nwxBitmapDataObject::wxBitmapDataObject(lua_Table * data, const wxBitmap & bitmap = wxNullBitmap)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxBitmap* bitmap_ptr=luatop>1 ? (Luna< wxObject >::checkSubType< wxBitmap >(L,2)) : NULL;
		if( luatop>1 && !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxBitmapDataObject::wxBitmapDataObject function");
		}
		const wxBitmap & bitmap=luatop>1 ? *bitmap_ptr : (const wxBitmap&)wxNullBitmap;

		return new wrapper_wxBitmapDataObject(L,NULL, bitmap);
	}


	// Function binds:
	// wxBitmap wxBitmapDataObject::GetBitmap() const
	static int _bind_GetBitmap(lua_State *L) {
		if (!_lg_typecheck_GetBitmap(L)) {
			luaL_error(L, "luna typecheck failed in wxBitmap wxBitmapDataObject::GetBitmap() const function, expected prototype:\nwxBitmap wxBitmapDataObject::GetBitmap() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBitmapDataObject* self=Luna< wxDataObject >::checkSubType< wxBitmapDataObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxBitmap wxBitmapDataObject::GetBitmap() const. Got : '%s'\n%s",typeid(Luna< wxDataObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxBitmap stack_lret = self->GetBitmap();
		wxBitmap* lret = new wxBitmap(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxBitmap >::push(L,lret,true);

		return 1;
	}

	// void wxBitmapDataObject::SetBitmap(const wxBitmap & bitmap)
	static int _bind_SetBitmap(lua_State *L) {
		if (!_lg_typecheck_SetBitmap(L)) {
			luaL_error(L, "luna typecheck failed in void wxBitmapDataObject::SetBitmap(const wxBitmap & bitmap) function, expected prototype:\nvoid wxBitmapDataObject::SetBitmap(const wxBitmap & bitmap)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxBitmap* bitmap_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,2));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxBitmapDataObject::SetBitmap function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;

		wxBitmapDataObject* self=Luna< wxDataObject >::checkSubType< wxBitmapDataObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxBitmapDataObject::SetBitmap(const wxBitmap &). Got : '%s'\n%s",typeid(Luna< wxDataObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetBitmap(bitmap);

		return 0;
	}

	// bool wxBitmapDataObject::base_GetDataHere(void * buf) const
	static int _bind_base_GetDataHere(lua_State *L) {
		if (!_lg_typecheck_base_GetDataHere(L)) {
			luaL_error(L, "luna typecheck failed in bool wxBitmapDataObject::base_GetDataHere(void * buf) const function, expected prototype:\nbool wxBitmapDataObject::base_GetDataHere(void * buf) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		void* buf=(Luna< void >::check(L,2));

		wxBitmapDataObject* self=Luna< wxDataObject >::checkSubType< wxBitmapDataObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxBitmapDataObject::base_GetDataHere(void *) const. Got : '%s'\n%s",typeid(Luna< wxDataObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxBitmapDataObject::GetDataHere(buf);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// size_t wxBitmapDataObject::base_GetDataSize() const
	static int _bind_base_GetDataSize(lua_State *L) {
		if (!_lg_typecheck_base_GetDataSize(L)) {
			luaL_error(L, "luna typecheck failed in size_t wxBitmapDataObject::base_GetDataSize() const function, expected prototype:\nsize_t wxBitmapDataObject::base_GetDataSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBitmapDataObject* self=Luna< wxDataObject >::checkSubType< wxBitmapDataObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call size_t wxBitmapDataObject::base_GetDataSize() const. Got : '%s'\n%s",typeid(Luna< wxDataObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		size_t lret = self->wxBitmapDataObject::GetDataSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxBitmapDataObject::base_SetData(size_t len, const void * buf)
	static int _bind_base_SetData(lua_State *L) {
		if (!_lg_typecheck_base_SetData(L)) {
			luaL_error(L, "luna typecheck failed in bool wxBitmapDataObject::base_SetData(size_t len, const void * buf) function, expected prototype:\nbool wxBitmapDataObject::base_SetData(size_t len, const void * buf)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t len=(size_t)lua_tointeger(L,2);
		const void* buf=(Luna< void >::check(L,3));

		wxBitmapDataObject* self=Luna< wxDataObject >::checkSubType< wxBitmapDataObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxBitmapDataObject::base_SetData(size_t, const void *). Got : '%s'\n%s",typeid(Luna< wxDataObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxBitmapDataObject::SetData(len, buf);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxBitmap wxBitmapDataObject::base_GetBitmap() const
	static int _bind_base_GetBitmap(lua_State *L) {
		if (!_lg_typecheck_base_GetBitmap(L)) {
			luaL_error(L, "luna typecheck failed in wxBitmap wxBitmapDataObject::base_GetBitmap() const function, expected prototype:\nwxBitmap wxBitmapDataObject::base_GetBitmap() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBitmapDataObject* self=Luna< wxDataObject >::checkSubType< wxBitmapDataObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxBitmap wxBitmapDataObject::base_GetBitmap() const. Got : '%s'\n%s",typeid(Luna< wxDataObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxBitmap stack_lret = self->wxBitmapDataObject::GetBitmap();
		wxBitmap* lret = new wxBitmap(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxBitmap >::push(L,lret,true);

		return 1;
	}

	// void wxBitmapDataObject::base_SetBitmap(const wxBitmap & bitmap)
	static int _bind_base_SetBitmap(lua_State *L) {
		if (!_lg_typecheck_base_SetBitmap(L)) {
			luaL_error(L, "luna typecheck failed in void wxBitmapDataObject::base_SetBitmap(const wxBitmap & bitmap) function, expected prototype:\nvoid wxBitmapDataObject::base_SetBitmap(const wxBitmap & bitmap)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxBitmap* bitmap_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,2));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxBitmapDataObject::base_SetBitmap function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;

		wxBitmapDataObject* self=Luna< wxDataObject >::checkSubType< wxBitmapDataObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxBitmapDataObject::base_SetBitmap(const wxBitmap &). Got : '%s'\n%s",typeid(Luna< wxDataObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxBitmapDataObject::SetBitmap(bitmap);

		return 0;
	}


	// Operator binds:

};

wxBitmapDataObject* LunaTraits< wxBitmapDataObject >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxBitmapDataObject::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void wxDataObject::GetAllFormats(wxDataFormat * formats, wxDataObject::Direction dir = wxDataObject::Get) const
	// bool wxDataObject::GetDataHere(const wxDataFormat & format, void * buf) const
	// size_t wxDataObject::GetDataSize(const wxDataFormat & format) const
	// size_t wxDataObject::GetFormatCount(wxDataObject::Direction dir = wxDataObject::Get) const
	// wxDataFormat wxDataObject::GetPreferredFormat(wxDataObject::Direction dir = wxDataObject::Get) const
}

void LunaTraits< wxBitmapDataObject >::_bind_dtor(wxBitmapDataObject* obj) {
	delete obj;
}

const char LunaTraits< wxBitmapDataObject >::className[] = "wxBitmapDataObject";
const char LunaTraits< wxBitmapDataObject >::fullName[] = "wxBitmapDataObject";
const char LunaTraits< wxBitmapDataObject >::moduleName[] = "wx";
const char* LunaTraits< wxBitmapDataObject >::parents[] = {"wx.wxDataObjectSimple", 0};
const int LunaTraits< wxBitmapDataObject >::hash = 45771097;
const int LunaTraits< wxBitmapDataObject >::uniqueIDs[] = {55398761,0};

luna_RegType LunaTraits< wxBitmapDataObject >::methods[] = {
	{"GetBitmap", &luna_wrapper_wxBitmapDataObject::_bind_GetBitmap},
	{"SetBitmap", &luna_wrapper_wxBitmapDataObject::_bind_SetBitmap},
	{"base_GetDataHere", &luna_wrapper_wxBitmapDataObject::_bind_base_GetDataHere},
	{"base_GetDataSize", &luna_wrapper_wxBitmapDataObject::_bind_base_GetDataSize},
	{"base_SetData", &luna_wrapper_wxBitmapDataObject::_bind_base_SetData},
	{"base_GetBitmap", &luna_wrapper_wxBitmapDataObject::_bind_base_GetBitmap},
	{"base_SetBitmap", &luna_wrapper_wxBitmapDataObject::_bind_base_SetBitmap},
	{"fromVoid", &luna_wrapper_wxBitmapDataObject::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxBitmapDataObject::_bind_asVoid},
	{"getTable", &luna_wrapper_wxBitmapDataObject::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxBitmapDataObject >::converters[] = {
	{"wxDataObject", &luna_wrapper_wxBitmapDataObject::_cast_from_wxDataObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxBitmapDataObject >::enumValues[] = {
	{0,0}
};


