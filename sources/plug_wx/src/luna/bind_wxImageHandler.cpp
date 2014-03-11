#include <plug_common.h>

#include <luna/wrappers/wrapper_wxImageHandler.h>

class luna_wrapper_wxImageHandler {
public:
	typedef Luna< wxImageHandler > luna_t;

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

		wxImageHandler* self= (wxImageHandler*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxImageHandler >::push(L,self,false);
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
		//wxImageHandler* ptr= dynamic_cast< wxImageHandler* >(Luna< wxObject >::check(L,1));
		wxImageHandler* ptr= luna_caster< wxObject, wxImageHandler >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxImageHandler >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_CanRead_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxInputStream >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CanRead_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetExtension(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetAltExtensions(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetImageCount(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetMimeType(lua_State *L) {
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
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SaveFile(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetExtension(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetAltExtensions(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,59507769) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMimeType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_LoadFile(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SaveFile(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxImageHandler::wxImageHandler(lua_Table * data)
	static wxImageHandler* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxImageHandler::wxImageHandler(lua_Table * data) function, expected prototype:\nwxImageHandler::wxImageHandler(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxImageHandler(L,NULL);
	}


	// Function binds:
	// bool wxImageHandler::CanRead(wxInputStream & stream)
	static int _bind_CanRead_overload_1(lua_State *L) {
		if (!_lg_typecheck_CanRead_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool wxImageHandler::CanRead(wxInputStream & stream) function, expected prototype:\nbool wxImageHandler::CanRead(wxInputStream & stream)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxInputStream* stream_ptr=(Luna< wxObject >::checkSubType< wxInputStream >(L,2));
		if( !stream_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg stream in wxImageHandler::CanRead function");
		}
		wxInputStream & stream=*stream_ptr;

		wxImageHandler* self=Luna< wxObject >::checkSubType< wxImageHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxImageHandler::CanRead(wxInputStream &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->CanRead(stream);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxImageHandler::CanRead(const wxString & filename)
	static int _bind_CanRead_overload_2(lua_State *L) {
		if (!_lg_typecheck_CanRead_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool wxImageHandler::CanRead(const wxString & filename) function, expected prototype:\nbool wxImageHandler::CanRead(const wxString & filename)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString filename(lua_tostring(L,2),lua_objlen(L,2));

		wxImageHandler* self=Luna< wxObject >::checkSubType< wxImageHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxImageHandler::CanRead(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->CanRead(filename);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxImageHandler::CanRead
	static int _bind_CanRead(lua_State *L) {
		if (_lg_typecheck_CanRead_overload_1(L)) return _bind_CanRead_overload_1(L);
		if (_lg_typecheck_CanRead_overload_2(L)) return _bind_CanRead_overload_2(L);

		luaL_error(L, "error in function CanRead, cannot match any of the overloads for function CanRead:\n  CanRead(wxInputStream &)\n  CanRead(const wxString &)\n");
		return 0;
	}

	// const wxString & wxImageHandler::GetExtension() const
	static int _bind_GetExtension(lua_State *L) {
		if (!_lg_typecheck_GetExtension(L)) {
			luaL_error(L, "luna typecheck failed in const wxString & wxImageHandler::GetExtension() const function, expected prototype:\nconst wxString & wxImageHandler::GetExtension() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxImageHandler* self=Luna< wxObject >::checkSubType< wxImageHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxString & wxImageHandler::GetExtension() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxString & lret = self->GetExtension();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// const wxArrayString & wxImageHandler::GetAltExtensions() const
	static int _bind_GetAltExtensions(lua_State *L) {
		if (!_lg_typecheck_GetAltExtensions(L)) {
			luaL_error(L, "luna typecheck failed in const wxArrayString & wxImageHandler::GetAltExtensions() const function, expected prototype:\nconst wxArrayString & wxImageHandler::GetAltExtensions() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxImageHandler* self=Luna< wxObject >::checkSubType< wxImageHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxArrayString & wxImageHandler::GetAltExtensions() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxArrayString* lret = &self->GetAltExtensions();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxArrayString >::push(L,lret,false);

		return 1;
	}

	// int wxImageHandler::GetImageCount(wxInputStream & stream)
	static int _bind_GetImageCount(lua_State *L) {
		if (!_lg_typecheck_GetImageCount(L)) {
			luaL_error(L, "luna typecheck failed in int wxImageHandler::GetImageCount(wxInputStream & stream) function, expected prototype:\nint wxImageHandler::GetImageCount(wxInputStream & stream)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxInputStream* stream_ptr=(Luna< wxObject >::checkSubType< wxInputStream >(L,2));
		if( !stream_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg stream in wxImageHandler::GetImageCount function");
		}
		wxInputStream & stream=*stream_ptr;

		wxImageHandler* self=Luna< wxObject >::checkSubType< wxImageHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxImageHandler::GetImageCount(wxInputStream &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetImageCount(stream);
		lua_pushnumber(L,lret);

		return 1;
	}

	// const wxString & wxImageHandler::GetMimeType() const
	static int _bind_GetMimeType(lua_State *L) {
		if (!_lg_typecheck_GetMimeType(L)) {
			luaL_error(L, "luna typecheck failed in const wxString & wxImageHandler::GetMimeType() const function, expected prototype:\nconst wxString & wxImageHandler::GetMimeType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxImageHandler* self=Luna< wxObject >::checkSubType< wxImageHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxString & wxImageHandler::GetMimeType() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxString & lret = self->GetMimeType();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// const wxString & wxImageHandler::GetName() const
	static int _bind_GetName(lua_State *L) {
		if (!_lg_typecheck_GetName(L)) {
			luaL_error(L, "luna typecheck failed in const wxString & wxImageHandler::GetName() const function, expected prototype:\nconst wxString & wxImageHandler::GetName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxImageHandler* self=Luna< wxObject >::checkSubType< wxImageHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxString & wxImageHandler::GetName() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxString & lret = self->GetName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxBitmapType wxImageHandler::GetType() const
	static int _bind_GetType(lua_State *L) {
		if (!_lg_typecheck_GetType(L)) {
			luaL_error(L, "luna typecheck failed in wxBitmapType wxImageHandler::GetType() const function, expected prototype:\nwxBitmapType wxImageHandler::GetType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxImageHandler* self=Luna< wxObject >::checkSubType< wxImageHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxBitmapType wxImageHandler::GetType() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxBitmapType lret = self->GetType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxImageHandler::LoadFile(wxImage * image, wxInputStream & stream, bool verbose = true, int index = -1)
	static int _bind_LoadFile(lua_State *L) {
		if (!_lg_typecheck_LoadFile(L)) {
			luaL_error(L, "luna typecheck failed in bool wxImageHandler::LoadFile(wxImage * image, wxInputStream & stream, bool verbose = true, int index = -1) function, expected prototype:\nbool wxImageHandler::LoadFile(wxImage * image, wxInputStream & stream, bool verbose = true, int index = -1)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxImage* image=(Luna< wxObject >::checkSubType< wxImage >(L,2));
		wxInputStream* stream_ptr=(Luna< wxObject >::checkSubType< wxInputStream >(L,3));
		if( !stream_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg stream in wxImageHandler::LoadFile function");
		}
		wxInputStream & stream=*stream_ptr;
		bool verbose=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)true;
		int index=luatop>4 ? (int)lua_tointeger(L,5) : (int)-1;

		wxImageHandler* self=Luna< wxObject >::checkSubType< wxImageHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxImageHandler::LoadFile(wxImage *, wxInputStream &, bool, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->LoadFile(image, stream, verbose, index);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxImageHandler::SaveFile(wxImage * image, wxOutputStream & stream, bool verbose = true)
	static int _bind_SaveFile(lua_State *L) {
		if (!_lg_typecheck_SaveFile(L)) {
			luaL_error(L, "luna typecheck failed in bool wxImageHandler::SaveFile(wxImage * image, wxOutputStream & stream, bool verbose = true) function, expected prototype:\nbool wxImageHandler::SaveFile(wxImage * image, wxOutputStream & stream, bool verbose = true)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxImage* image=(Luna< wxObject >::checkSubType< wxImage >(L,2));
		wxOutputStream* stream_ptr=(Luna< wxObject >::checkSubType< wxOutputStream >(L,3));
		if( !stream_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg stream in wxImageHandler::SaveFile function");
		}
		wxOutputStream & stream=*stream_ptr;
		bool verbose=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)true;

		wxImageHandler* self=Luna< wxObject >::checkSubType< wxImageHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxImageHandler::SaveFile(wxImage *, wxOutputStream &, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SaveFile(image, stream, verbose);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxImageHandler::SetExtension(const wxString & extension)
	static int _bind_SetExtension(lua_State *L) {
		if (!_lg_typecheck_SetExtension(L)) {
			luaL_error(L, "luna typecheck failed in void wxImageHandler::SetExtension(const wxString & extension) function, expected prototype:\nvoid wxImageHandler::SetExtension(const wxString & extension)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString extension(lua_tostring(L,2),lua_objlen(L,2));

		wxImageHandler* self=Luna< wxObject >::checkSubType< wxImageHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxImageHandler::SetExtension(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetExtension(extension);

		return 0;
	}

	// void wxImageHandler::SetAltExtensions(const wxArrayString & extensions)
	static int _bind_SetAltExtensions(lua_State *L) {
		if (!_lg_typecheck_SetAltExtensions(L)) {
			luaL_error(L, "luna typecheck failed in void wxImageHandler::SetAltExtensions(const wxArrayString & extensions) function, expected prototype:\nvoid wxImageHandler::SetAltExtensions(const wxArrayString & extensions)\nClass arguments details:\narg 1 ID = 59507769\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxArrayString* extensions_ptr=(Luna< wxArrayString >::check(L,2));
		if( !extensions_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg extensions in wxImageHandler::SetAltExtensions function");
		}
		const wxArrayString & extensions=*extensions_ptr;

		wxImageHandler* self=Luna< wxObject >::checkSubType< wxImageHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxImageHandler::SetAltExtensions(const wxArrayString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetAltExtensions(extensions);

		return 0;
	}

	// void wxImageHandler::SetMimeType(const wxString & mimetype)
	static int _bind_SetMimeType(lua_State *L) {
		if (!_lg_typecheck_SetMimeType(L)) {
			luaL_error(L, "luna typecheck failed in void wxImageHandler::SetMimeType(const wxString & mimetype) function, expected prototype:\nvoid wxImageHandler::SetMimeType(const wxString & mimetype)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString mimetype(lua_tostring(L,2),lua_objlen(L,2));

		wxImageHandler* self=Luna< wxObject >::checkSubType< wxImageHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxImageHandler::SetMimeType(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetMimeType(mimetype);

		return 0;
	}

	// void wxImageHandler::SetName(const wxString & name)
	static int _bind_SetName(lua_State *L) {
		if (!_lg_typecheck_SetName(L)) {
			luaL_error(L, "luna typecheck failed in void wxImageHandler::SetName(const wxString & name) function, expected prototype:\nvoid wxImageHandler::SetName(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxImageHandler* self=Luna< wxObject >::checkSubType< wxImageHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxImageHandler::SetName(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetName(name);

		return 0;
	}

	// wxClassInfo * wxImageHandler::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxImageHandler::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxImageHandler::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxImageHandler* self=Luna< wxObject >::checkSubType< wxImageHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxImageHandler::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxImageHandler::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// bool wxImageHandler::base_LoadFile(wxImage * image, wxInputStream & stream, bool verbose = true, int index = -1)
	static int _bind_base_LoadFile(lua_State *L) {
		if (!_lg_typecheck_base_LoadFile(L)) {
			luaL_error(L, "luna typecheck failed in bool wxImageHandler::base_LoadFile(wxImage * image, wxInputStream & stream, bool verbose = true, int index = -1) function, expected prototype:\nbool wxImageHandler::base_LoadFile(wxImage * image, wxInputStream & stream, bool verbose = true, int index = -1)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxImage* image=(Luna< wxObject >::checkSubType< wxImage >(L,2));
		wxInputStream* stream_ptr=(Luna< wxObject >::checkSubType< wxInputStream >(L,3));
		if( !stream_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg stream in wxImageHandler::base_LoadFile function");
		}
		wxInputStream & stream=*stream_ptr;
		bool verbose=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)true;
		int index=luatop>4 ? (int)lua_tointeger(L,5) : (int)-1;

		wxImageHandler* self=Luna< wxObject >::checkSubType< wxImageHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxImageHandler::base_LoadFile(wxImage *, wxInputStream &, bool, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxImageHandler::LoadFile(image, stream, verbose, index);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxImageHandler::base_SaveFile(wxImage * image, wxOutputStream & stream, bool verbose = true)
	static int _bind_base_SaveFile(lua_State *L) {
		if (!_lg_typecheck_base_SaveFile(L)) {
			luaL_error(L, "luna typecheck failed in bool wxImageHandler::base_SaveFile(wxImage * image, wxOutputStream & stream, bool verbose = true) function, expected prototype:\nbool wxImageHandler::base_SaveFile(wxImage * image, wxOutputStream & stream, bool verbose = true)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxImage* image=(Luna< wxObject >::checkSubType< wxImage >(L,2));
		wxOutputStream* stream_ptr=(Luna< wxObject >::checkSubType< wxOutputStream >(L,3));
		if( !stream_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg stream in wxImageHandler::base_SaveFile function");
		}
		wxOutputStream & stream=*stream_ptr;
		bool verbose=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)true;

		wxImageHandler* self=Luna< wxObject >::checkSubType< wxImageHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxImageHandler::base_SaveFile(wxImage *, wxOutputStream &, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxImageHandler::SaveFile(image, stream, verbose);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxImageHandler* LunaTraits< wxImageHandler >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxImageHandler::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// bool wxImageHandler::DoCanRead(wxInputStream & arg1)
	// int wxImageHandler::GetImageCount(wxInputStream & stream)
}

void LunaTraits< wxImageHandler >::_bind_dtor(wxImageHandler* obj) {
	delete obj;
}

const char LunaTraits< wxImageHandler >::className[] = "wxImageHandler";
const char LunaTraits< wxImageHandler >::fullName[] = "wxImageHandler";
const char LunaTraits< wxImageHandler >::moduleName[] = "wx";
const char* LunaTraits< wxImageHandler >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxImageHandler >::hash = 66052187;
const int LunaTraits< wxImageHandler >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxImageHandler >::methods[] = {
	{"CanRead", &luna_wrapper_wxImageHandler::_bind_CanRead},
	{"GetExtension", &luna_wrapper_wxImageHandler::_bind_GetExtension},
	{"GetAltExtensions", &luna_wrapper_wxImageHandler::_bind_GetAltExtensions},
	{"GetImageCount", &luna_wrapper_wxImageHandler::_bind_GetImageCount},
	{"GetMimeType", &luna_wrapper_wxImageHandler::_bind_GetMimeType},
	{"GetName", &luna_wrapper_wxImageHandler::_bind_GetName},
	{"GetType", &luna_wrapper_wxImageHandler::_bind_GetType},
	{"LoadFile", &luna_wrapper_wxImageHandler::_bind_LoadFile},
	{"SaveFile", &luna_wrapper_wxImageHandler::_bind_SaveFile},
	{"SetExtension", &luna_wrapper_wxImageHandler::_bind_SetExtension},
	{"SetAltExtensions", &luna_wrapper_wxImageHandler::_bind_SetAltExtensions},
	{"SetMimeType", &luna_wrapper_wxImageHandler::_bind_SetMimeType},
	{"SetName", &luna_wrapper_wxImageHandler::_bind_SetName},
	{"base_GetClassInfo", &luna_wrapper_wxImageHandler::_bind_base_GetClassInfo},
	{"base_LoadFile", &luna_wrapper_wxImageHandler::_bind_base_LoadFile},
	{"base_SaveFile", &luna_wrapper_wxImageHandler::_bind_base_SaveFile},
	{"fromVoid", &luna_wrapper_wxImageHandler::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxImageHandler::_bind_asVoid},
	{"getTable", &luna_wrapper_wxImageHandler::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxImageHandler >::converters[] = {
	{"wxObject", &luna_wrapper_wxImageHandler::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxImageHandler >::enumValues[] = {
	{0,0}
};


