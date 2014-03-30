#include <plug_common.h>

#include <luna/wrappers/wrapper_wxMemoryFSHandler.h>

class luna_wrapper_wxMemoryFSHandler {
public:
	typedef Luna< wxMemoryFSHandler > luna_t;

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

		wxMemoryFSHandler* self= (wxMemoryFSHandler*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxMemoryFSHandler >::push(L,self,false);
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
		//wxMemoryFSHandler* ptr= dynamic_cast< wxMemoryFSHandler* >(Luna< wxObject >::check(L,1));
		wxMemoryFSHandler* ptr= luna_caster< wxObject, wxMemoryFSHandler >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxMemoryFSHandler >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_AddFile_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxImage >(L,2))) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddFile_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxBitmap >(L,2))) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddFileWithMimeType_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddFileWithMimeType_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RemoveFile(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_FindFirst(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_FindNext(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxMemoryFSHandler::wxMemoryFSHandler(lua_Table * data)
	static wxMemoryFSHandler* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxMemoryFSHandler::wxMemoryFSHandler(lua_Table * data) function, expected prototype:\nwxMemoryFSHandler::wxMemoryFSHandler(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxMemoryFSHandler(L,NULL);
	}


	// Function binds:
	// static void wxMemoryFSHandler::AddFile(const wxString & filename, wxImage & image, wxBitmapType type)
	static int _bind_AddFile_overload_1(lua_State *L) {
		if (!_lg_typecheck_AddFile_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in static void wxMemoryFSHandler::AddFile(const wxString & filename, wxImage & image, wxBitmapType type) function, expected prototype:\nstatic void wxMemoryFSHandler::AddFile(const wxString & filename, wxImage & image, wxBitmapType type)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString filename(lua_tostring(L,1),lua_objlen(L,1));
		wxImage* image_ptr=(Luna< wxObject >::checkSubType< wxImage >(L,2));
		if( !image_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg image in wxMemoryFSHandler::AddFile function");
		}
		wxImage & image=*image_ptr;
		wxBitmapType type=(wxBitmapType)lua_tointeger(L,3);

		wxMemoryFSHandler::AddFile(filename, image, type);

		return 0;
	}

	// static void wxMemoryFSHandler::AddFile(const wxString & filename, const wxBitmap & bitmap, wxBitmapType type)
	static int _bind_AddFile_overload_2(lua_State *L) {
		if (!_lg_typecheck_AddFile_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in static void wxMemoryFSHandler::AddFile(const wxString & filename, const wxBitmap & bitmap, wxBitmapType type) function, expected prototype:\nstatic void wxMemoryFSHandler::AddFile(const wxString & filename, const wxBitmap & bitmap, wxBitmapType type)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString filename(lua_tostring(L,1),lua_objlen(L,1));
		const wxBitmap* bitmap_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,2));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxMemoryFSHandler::AddFile function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;
		wxBitmapType type=(wxBitmapType)lua_tointeger(L,3);

		wxMemoryFSHandler::AddFile(filename, bitmap, type);

		return 0;
	}

	// Overload binder for wxMemoryFSHandler::AddFile
	static int _bind_AddFile(lua_State *L) {
		if (_lg_typecheck_AddFile_overload_1(L)) return _bind_AddFile_overload_1(L);
		if (_lg_typecheck_AddFile_overload_2(L)) return _bind_AddFile_overload_2(L);

		luaL_error(L, "error in function AddFile, cannot match any of the overloads for function AddFile:\n  AddFile(const wxString &, wxImage &, wxBitmapType)\n  AddFile(const wxString &, const wxBitmap &, wxBitmapType)\n");
		return 0;
	}

	// static void wxMemoryFSHandler::AddFileWithMimeType(const wxString & filename, const wxString & textdata, const wxString & mimetype)
	static int _bind_AddFileWithMimeType_overload_1(lua_State *L) {
		if (!_lg_typecheck_AddFileWithMimeType_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in static void wxMemoryFSHandler::AddFileWithMimeType(const wxString & filename, const wxString & textdata, const wxString & mimetype) function, expected prototype:\nstatic void wxMemoryFSHandler::AddFileWithMimeType(const wxString & filename, const wxString & textdata, const wxString & mimetype)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\narg 3 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString filename(lua_tostring(L,1),lua_objlen(L,1));
		wxString textdata(lua_tostring(L,2),lua_objlen(L,2));
		wxString mimetype(lua_tostring(L,3),lua_objlen(L,3));

		wxMemoryFSHandler::AddFileWithMimeType(filename, textdata, mimetype);

		return 0;
	}

	// static void wxMemoryFSHandler::AddFileWithMimeType(const wxString & filename, const void * binarydata, size_t size, const wxString & mimetype)
	static int _bind_AddFileWithMimeType_overload_2(lua_State *L) {
		if (!_lg_typecheck_AddFileWithMimeType_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in static void wxMemoryFSHandler::AddFileWithMimeType(const wxString & filename, const void * binarydata, size_t size, const wxString & mimetype) function, expected prototype:\nstatic void wxMemoryFSHandler::AddFileWithMimeType(const wxString & filename, const void * binarydata, size_t size, const wxString & mimetype)\nClass arguments details:\narg 1 ID = 88196105\narg 4 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString filename(lua_tostring(L,1),lua_objlen(L,1));
		const void* binarydata=(Luna< void >::check(L,2));
		size_t size=(size_t)lua_tointeger(L,3);
		wxString mimetype(lua_tostring(L,4),lua_objlen(L,4));

		wxMemoryFSHandler::AddFileWithMimeType(filename, binarydata, size, mimetype);

		return 0;
	}

	// Overload binder for wxMemoryFSHandler::AddFileWithMimeType
	static int _bind_AddFileWithMimeType(lua_State *L) {
		if (_lg_typecheck_AddFileWithMimeType_overload_1(L)) return _bind_AddFileWithMimeType_overload_1(L);
		if (_lg_typecheck_AddFileWithMimeType_overload_2(L)) return _bind_AddFileWithMimeType_overload_2(L);

		luaL_error(L, "error in function AddFileWithMimeType, cannot match any of the overloads for function AddFileWithMimeType:\n  AddFileWithMimeType(const wxString &, const wxString &, const wxString &)\n  AddFileWithMimeType(const wxString &, const void *, size_t, const wxString &)\n");
		return 0;
	}

	// static void wxMemoryFSHandler::RemoveFile(const wxString & filename)
	static int _bind_RemoveFile(lua_State *L) {
		if (!_lg_typecheck_RemoveFile(L)) {
			luaL_error(L, "luna typecheck failed in static void wxMemoryFSHandler::RemoveFile(const wxString & filename) function, expected prototype:\nstatic void wxMemoryFSHandler::RemoveFile(const wxString & filename)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString filename(lua_tostring(L,1),lua_objlen(L,1));

		wxMemoryFSHandler::RemoveFile(filename);

		return 0;
	}

	// wxClassInfo * wxMemoryFSHandler::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxMemoryFSHandler::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxMemoryFSHandler::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMemoryFSHandler* self=Luna< wxObject >::checkSubType< wxMemoryFSHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxMemoryFSHandler::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxMemoryFSHandler::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxString wxMemoryFSHandler::base_FindFirst(const wxString & wildcard, int flags = 0)
	static int _bind_base_FindFirst(lua_State *L) {
		if (!_lg_typecheck_base_FindFirst(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxMemoryFSHandler::base_FindFirst(const wxString & wildcard, int flags = 0) function, expected prototype:\nwxString wxMemoryFSHandler::base_FindFirst(const wxString & wildcard, int flags = 0)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString wildcard(lua_tostring(L,2),lua_objlen(L,2));
		int flags=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;

		wxMemoryFSHandler* self=Luna< wxObject >::checkSubType< wxMemoryFSHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxMemoryFSHandler::base_FindFirst(const wxString &, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxMemoryFSHandler::FindFirst(wildcard, flags);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxMemoryFSHandler::base_FindNext()
	static int _bind_base_FindNext(lua_State *L) {
		if (!_lg_typecheck_base_FindNext(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxMemoryFSHandler::base_FindNext() function, expected prototype:\nwxString wxMemoryFSHandler::base_FindNext()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMemoryFSHandler* self=Luna< wxObject >::checkSubType< wxMemoryFSHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxMemoryFSHandler::base_FindNext(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxMemoryFSHandler::FindNext();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}


	// Operator binds:

};

wxMemoryFSHandler* LunaTraits< wxMemoryFSHandler >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxMemoryFSHandler::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// bool wxFileSystemHandler::CanOpen(const wxString & location)
	// wxFSFile * wxFileSystemHandler::OpenFile(wxFileSystem & fs, const wxString & location)
}

void LunaTraits< wxMemoryFSHandler >::_bind_dtor(wxMemoryFSHandler* obj) {
	delete obj;
}

const char LunaTraits< wxMemoryFSHandler >::className[] = "wxMemoryFSHandler";
const char LunaTraits< wxMemoryFSHandler >::fullName[] = "wxMemoryFSHandler";
const char LunaTraits< wxMemoryFSHandler >::moduleName[] = "wx";
const char* LunaTraits< wxMemoryFSHandler >::parents[] = {"wx.wxFileSystemHandler", 0};
const int LunaTraits< wxMemoryFSHandler >::hash = 93447661;
const int LunaTraits< wxMemoryFSHandler >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxMemoryFSHandler >::methods[] = {
	{"AddFile", &luna_wrapper_wxMemoryFSHandler::_bind_AddFile},
	{"AddFileWithMimeType", &luna_wrapper_wxMemoryFSHandler::_bind_AddFileWithMimeType},
	{"RemoveFile", &luna_wrapper_wxMemoryFSHandler::_bind_RemoveFile},
	{"base_GetClassInfo", &luna_wrapper_wxMemoryFSHandler::_bind_base_GetClassInfo},
	{"base_FindFirst", &luna_wrapper_wxMemoryFSHandler::_bind_base_FindFirst},
	{"base_FindNext", &luna_wrapper_wxMemoryFSHandler::_bind_base_FindNext},
	{"fromVoid", &luna_wrapper_wxMemoryFSHandler::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxMemoryFSHandler::_bind_asVoid},
	{"getTable", &luna_wrapper_wxMemoryFSHandler::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxMemoryFSHandler >::converters[] = {
	{"wxObject", &luna_wrapper_wxMemoryFSHandler::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxMemoryFSHandler >::enumValues[] = {
	{0,0}
};


