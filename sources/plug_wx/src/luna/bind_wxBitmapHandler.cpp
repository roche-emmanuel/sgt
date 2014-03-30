#include <plug_common.h>

#include <luna/wrappers/wrapper_wxBitmapHandler.h>

class luna_wrapper_wxBitmapHandler {
public:
	typedef Luna< wxBitmapHandler > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxObject* self=(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<wxObject,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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

		wxBitmapHandler* self= (wxBitmapHandler*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxBitmapHandler >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		//wxBitmapHandler* ptr= dynamic_cast< wxBitmapHandler* >(Luna< wxObject >::check(L,1));
		wxBitmapHandler* ptr= luna_caster< wxObject, wxBitmapHandler >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxBitmapHandler >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<6 || luatop>7 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetExtension(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_LoadFile(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SaveFile(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetExtension(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<6 || luatop>7 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_LoadFile(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SaveFile(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,56813631)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxBitmapHandler::wxBitmapHandler()
	static wxBitmapHandler* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxBitmapHandler::wxBitmapHandler() function, expected prototype:\nwxBitmapHandler::wxBitmapHandler()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxBitmapHandler();
	}

	// wxBitmapHandler::wxBitmapHandler(lua_Table * data)
	static wxBitmapHandler* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxBitmapHandler::wxBitmapHandler(lua_Table * data) function, expected prototype:\nwxBitmapHandler::wxBitmapHandler(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxBitmapHandler(L,NULL);
	}

	// Overload binder for wxBitmapHandler::wxBitmapHandler
	static wxBitmapHandler* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxBitmapHandler, cannot match any of the overloads for function wxBitmapHandler:\n  wxBitmapHandler()\n  wxBitmapHandler(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// bool wxBitmapHandler::Create(wxBitmap * bitmap, const void * data, wxBitmapType type, int width, int height, int depth = 1)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luaL_error(L, "luna typecheck failed in bool wxBitmapHandler::Create(wxBitmap * bitmap, const void * data, wxBitmapType type, int width, int height, int depth = 1) function, expected prototype:\nbool wxBitmapHandler::Create(wxBitmap * bitmap, const void * data, wxBitmapType type, int width, int height, int depth = 1)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxBitmap* bitmap=(Luna< wxObject >::checkSubType< wxBitmap >(L,2));
		const void* data=(Luna< void >::check(L,3));
		wxBitmapType type=(wxBitmapType)lua_tointeger(L,4);
		int width=(int)lua_tointeger(L,5);
		int height=(int)lua_tointeger(L,6);
		int depth=luatop>6 ? (int)lua_tointeger(L,7) : (int)1;

		wxBitmapHandler* self=Luna< wxObject >::checkSubType< wxBitmapHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxBitmapHandler::Create(wxBitmap *, const void *, wxBitmapType, int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Create(bitmap, data, type, width, height, depth);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const wxString & wxBitmapHandler::GetExtension() const
	static int _bind_GetExtension(lua_State *L) {
		if (!_lg_typecheck_GetExtension(L)) {
			luaL_error(L, "luna typecheck failed in const wxString & wxBitmapHandler::GetExtension() const function, expected prototype:\nconst wxString & wxBitmapHandler::GetExtension() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBitmapHandler* self=Luna< wxObject >::checkSubType< wxBitmapHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxString & wxBitmapHandler::GetExtension() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxString & lret = self->GetExtension();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// const wxString & wxBitmapHandler::GetName() const
	static int _bind_GetName(lua_State *L) {
		if (!_lg_typecheck_GetName(L)) {
			luaL_error(L, "luna typecheck failed in const wxString & wxBitmapHandler::GetName() const function, expected prototype:\nconst wxString & wxBitmapHandler::GetName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBitmapHandler* self=Luna< wxObject >::checkSubType< wxBitmapHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxString & wxBitmapHandler::GetName() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxString & lret = self->GetName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxBitmapType wxBitmapHandler::GetType() const
	static int _bind_GetType(lua_State *L) {
		if (!_lg_typecheck_GetType(L)) {
			luaL_error(L, "luna typecheck failed in wxBitmapType wxBitmapHandler::GetType() const function, expected prototype:\nwxBitmapType wxBitmapHandler::GetType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBitmapHandler* self=Luna< wxObject >::checkSubType< wxBitmapHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxBitmapType wxBitmapHandler::GetType() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxBitmapType lret = self->GetType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxBitmapHandler::LoadFile(wxBitmap * bitmap, const wxString & name, wxBitmapType type, int desiredWidth, int desiredHeight)
	static int _bind_LoadFile(lua_State *L) {
		if (!_lg_typecheck_LoadFile(L)) {
			luaL_error(L, "luna typecheck failed in bool wxBitmapHandler::LoadFile(wxBitmap * bitmap, const wxString & name, wxBitmapType type, int desiredWidth, int desiredHeight) function, expected prototype:\nbool wxBitmapHandler::LoadFile(wxBitmap * bitmap, const wxString & name, wxBitmapType type, int desiredWidth, int desiredHeight)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxBitmap* bitmap=(Luna< wxObject >::checkSubType< wxBitmap >(L,2));
		wxString name(lua_tostring(L,3),lua_objlen(L,3));
		wxBitmapType type=(wxBitmapType)lua_tointeger(L,4);
		int desiredWidth=(int)lua_tointeger(L,5);
		int desiredHeight=(int)lua_tointeger(L,6);

		wxBitmapHandler* self=Luna< wxObject >::checkSubType< wxBitmapHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxBitmapHandler::LoadFile(wxBitmap *, const wxString &, wxBitmapType, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->LoadFile(bitmap, name, type, desiredWidth, desiredHeight);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxBitmapHandler::SaveFile(const wxBitmap * bitmap, const wxString & name, wxBitmapType type, const wxPalette * palette = NULL) const
	static int _bind_SaveFile(lua_State *L) {
		if (!_lg_typecheck_SaveFile(L)) {
			luaL_error(L, "luna typecheck failed in bool wxBitmapHandler::SaveFile(const wxBitmap * bitmap, const wxString & name, wxBitmapType type, const wxPalette * palette = NULL) const function, expected prototype:\nbool wxBitmapHandler::SaveFile(const wxBitmap * bitmap, const wxString & name, wxBitmapType type, const wxPalette * palette = NULL) const\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\narg 4 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxBitmap* bitmap=(Luna< wxObject >::checkSubType< wxBitmap >(L,2));
		wxString name(lua_tostring(L,3),lua_objlen(L,3));
		wxBitmapType type=(wxBitmapType)lua_tointeger(L,4);
		const wxPalette* palette=luatop>4 ? (Luna< wxObject >::checkSubType< wxPalette >(L,5)) : (const wxPalette*)NULL;

		wxBitmapHandler* self=Luna< wxObject >::checkSubType< wxBitmapHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxBitmapHandler::SaveFile(const wxBitmap *, const wxString &, wxBitmapType, const wxPalette *) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SaveFile(bitmap, name, type, palette);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxBitmapHandler::SetExtension(const wxString & extension)
	static int _bind_SetExtension(lua_State *L) {
		if (!_lg_typecheck_SetExtension(L)) {
			luaL_error(L, "luna typecheck failed in void wxBitmapHandler::SetExtension(const wxString & extension) function, expected prototype:\nvoid wxBitmapHandler::SetExtension(const wxString & extension)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString extension(lua_tostring(L,2),lua_objlen(L,2));

		wxBitmapHandler* self=Luna< wxObject >::checkSubType< wxBitmapHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxBitmapHandler::SetExtension(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetExtension(extension);

		return 0;
	}

	// void wxBitmapHandler::SetName(const wxString & name)
	static int _bind_SetName(lua_State *L) {
		if (!_lg_typecheck_SetName(L)) {
			luaL_error(L, "luna typecheck failed in void wxBitmapHandler::SetName(const wxString & name) function, expected prototype:\nvoid wxBitmapHandler::SetName(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxBitmapHandler* self=Luna< wxObject >::checkSubType< wxBitmapHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxBitmapHandler::SetName(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetName(name);

		return 0;
	}

	// void wxBitmapHandler::SetType(wxBitmapType type)
	static int _bind_SetType(lua_State *L) {
		if (!_lg_typecheck_SetType(L)) {
			luaL_error(L, "luna typecheck failed in void wxBitmapHandler::SetType(wxBitmapType type) function, expected prototype:\nvoid wxBitmapHandler::SetType(wxBitmapType type)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxBitmapType type=(wxBitmapType)lua_tointeger(L,2);

		wxBitmapHandler* self=Luna< wxObject >::checkSubType< wxBitmapHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxBitmapHandler::SetType(wxBitmapType). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetType(type);

		return 0;
	}

	// wxClassInfo * wxBitmapHandler::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxBitmapHandler::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxBitmapHandler::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBitmapHandler* self=Luna< wxObject >::checkSubType< wxBitmapHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxBitmapHandler::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxBitmapHandler::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// bool wxBitmapHandler::base_Create(wxBitmap * bitmap, const void * data, wxBitmapType type, int width, int height, int depth = 1)
	static int _bind_base_Create(lua_State *L) {
		if (!_lg_typecheck_base_Create(L)) {
			luaL_error(L, "luna typecheck failed in bool wxBitmapHandler::base_Create(wxBitmap * bitmap, const void * data, wxBitmapType type, int width, int height, int depth = 1) function, expected prototype:\nbool wxBitmapHandler::base_Create(wxBitmap * bitmap, const void * data, wxBitmapType type, int width, int height, int depth = 1)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxBitmap* bitmap=(Luna< wxObject >::checkSubType< wxBitmap >(L,2));
		const void* data=(Luna< void >::check(L,3));
		wxBitmapType type=(wxBitmapType)lua_tointeger(L,4);
		int width=(int)lua_tointeger(L,5);
		int height=(int)lua_tointeger(L,6);
		int depth=luatop>6 ? (int)lua_tointeger(L,7) : (int)1;

		wxBitmapHandler* self=Luna< wxObject >::checkSubType< wxBitmapHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxBitmapHandler::base_Create(wxBitmap *, const void *, wxBitmapType, int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxBitmapHandler::Create(bitmap, data, type, width, height, depth);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxBitmapHandler::base_LoadFile(wxBitmap * bitmap, const wxString & name, wxBitmapType type, int desiredWidth, int desiredHeight)
	static int _bind_base_LoadFile(lua_State *L) {
		if (!_lg_typecheck_base_LoadFile(L)) {
			luaL_error(L, "luna typecheck failed in bool wxBitmapHandler::base_LoadFile(wxBitmap * bitmap, const wxString & name, wxBitmapType type, int desiredWidth, int desiredHeight) function, expected prototype:\nbool wxBitmapHandler::base_LoadFile(wxBitmap * bitmap, const wxString & name, wxBitmapType type, int desiredWidth, int desiredHeight)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxBitmap* bitmap=(Luna< wxObject >::checkSubType< wxBitmap >(L,2));
		wxString name(lua_tostring(L,3),lua_objlen(L,3));
		wxBitmapType type=(wxBitmapType)lua_tointeger(L,4);
		int desiredWidth=(int)lua_tointeger(L,5);
		int desiredHeight=(int)lua_tointeger(L,6);

		wxBitmapHandler* self=Luna< wxObject >::checkSubType< wxBitmapHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxBitmapHandler::base_LoadFile(wxBitmap *, const wxString &, wxBitmapType, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxBitmapHandler::LoadFile(bitmap, name, type, desiredWidth, desiredHeight);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxBitmapHandler::base_SaveFile(const wxBitmap * bitmap, const wxString & name, wxBitmapType type, const wxPalette * palette = NULL) const
	static int _bind_base_SaveFile(lua_State *L) {
		if (!_lg_typecheck_base_SaveFile(L)) {
			luaL_error(L, "luna typecheck failed in bool wxBitmapHandler::base_SaveFile(const wxBitmap * bitmap, const wxString & name, wxBitmapType type, const wxPalette * palette = NULL) const function, expected prototype:\nbool wxBitmapHandler::base_SaveFile(const wxBitmap * bitmap, const wxString & name, wxBitmapType type, const wxPalette * palette = NULL) const\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\narg 4 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxBitmap* bitmap=(Luna< wxObject >::checkSubType< wxBitmap >(L,2));
		wxString name(lua_tostring(L,3),lua_objlen(L,3));
		wxBitmapType type=(wxBitmapType)lua_tointeger(L,4);
		const wxPalette* palette=luatop>4 ? (Luna< wxObject >::checkSubType< wxPalette >(L,5)) : (const wxPalette*)NULL;

		wxBitmapHandler* self=Luna< wxObject >::checkSubType< wxBitmapHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxBitmapHandler::base_SaveFile(const wxBitmap *, const wxString &, wxBitmapType, const wxPalette *) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxBitmapHandler::SaveFile(bitmap, name, type, palette);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxBitmapHandler* LunaTraits< wxBitmapHandler >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxBitmapHandler::_bind_ctor(L);
}

void LunaTraits< wxBitmapHandler >::_bind_dtor(wxBitmapHandler* obj) {
	delete obj;
}

const char LunaTraits< wxBitmapHandler >::className[] = "wxBitmapHandler";
const char LunaTraits< wxBitmapHandler >::fullName[] = "wxBitmapHandler";
const char LunaTraits< wxBitmapHandler >::moduleName[] = "wx";
const char* LunaTraits< wxBitmapHandler >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxBitmapHandler >::hash = 31141608;
const int LunaTraits< wxBitmapHandler >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxBitmapHandler >::methods[] = {
	{"Create", &luna_wrapper_wxBitmapHandler::_bind_Create},
	{"GetExtension", &luna_wrapper_wxBitmapHandler::_bind_GetExtension},
	{"GetName", &luna_wrapper_wxBitmapHandler::_bind_GetName},
	{"GetType", &luna_wrapper_wxBitmapHandler::_bind_GetType},
	{"LoadFile", &luna_wrapper_wxBitmapHandler::_bind_LoadFile},
	{"SaveFile", &luna_wrapper_wxBitmapHandler::_bind_SaveFile},
	{"SetExtension", &luna_wrapper_wxBitmapHandler::_bind_SetExtension},
	{"SetName", &luna_wrapper_wxBitmapHandler::_bind_SetName},
	{"SetType", &luna_wrapper_wxBitmapHandler::_bind_SetType},
	{"base_GetClassInfo", &luna_wrapper_wxBitmapHandler::_bind_base_GetClassInfo},
	{"base_Create", &luna_wrapper_wxBitmapHandler::_bind_base_Create},
	{"base_LoadFile", &luna_wrapper_wxBitmapHandler::_bind_base_LoadFile},
	{"base_SaveFile", &luna_wrapper_wxBitmapHandler::_bind_base_SaveFile},
	{"fromVoid", &luna_wrapper_wxBitmapHandler::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxBitmapHandler::_bind_asVoid},
	{"getTable", &luna_wrapper_wxBitmapHandler::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxBitmapHandler >::converters[] = {
	{"wxObject", &luna_wrapper_wxBitmapHandler::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxBitmapHandler >::enumValues[] = {
	{0,0}
};


