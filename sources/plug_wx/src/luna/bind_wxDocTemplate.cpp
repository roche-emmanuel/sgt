#include <plug_common.h>

#include <luna/wrappers/wrapper_wxDocTemplate.h>

class luna_wrapper_wxDocTemplate {
public:
	typedef Luna< wxDocTemplate > luna_t;

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

		wxDocTemplate* self= (wxDocTemplate*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxDocTemplate >::push(L,self,false);
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
		//wxDocTemplate* ptr= dynamic_cast< wxDocTemplate* >(Luna< wxObject >::check(L,1));
		wxDocTemplate* ptr= luna_caster< wxObject, wxDocTemplate >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxDocTemplate >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<7 || luatop>10 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< wxObject >::checkSubType< wxDocManager >(L,1)) ) ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		if( lua_type(L,5)!=LUA_TSTRING ) return false;
		if( lua_type(L,6)!=LUA_TSTRING ) return false;
		if( lua_type(L,7)!=LUA_TSTRING ) return false;
		if( luatop>7 && (lua_isnil(L,8)==0 && !Luna<void>::has_uniqueid(L,8,96106697)) ) return false;
		if( luatop>7 && (lua_isnil(L,8)==0 && !(Luna< wxClassInfo >::check(L,8)) ) ) return false;
		if( luatop>8 && (lua_isnil(L,9)==0 && !Luna<void>::has_uniqueid(L,9,96106697)) ) return false;
		if( luatop>8 && (lua_isnil(L,9)==0 && !(Luna< wxClassInfo >::check(L,9)) ) ) return false;
		if( luatop>9 && lua_type(L,10)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<8 || luatop>11 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxDocManager >(L,2)) ) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		if( lua_type(L,5)!=LUA_TSTRING ) return false;
		if( lua_type(L,6)!=LUA_TSTRING ) return false;
		if( lua_type(L,7)!=LUA_TSTRING ) return false;
		if( lua_type(L,8)!=LUA_TSTRING ) return false;
		if( luatop>8 && (lua_isnil(L,9)==0 && !Luna<void>::has_uniqueid(L,9,96106697)) ) return false;
		if( luatop>8 && (lua_isnil(L,9)==0 && !(Luna< wxClassInfo >::check(L,9)) ) ) return false;
		if( luatop>9 && (lua_isnil(L,10)==0 && !Luna<void>::has_uniqueid(L,10,96106697)) ) return false;
		if( luatop>9 && (lua_isnil(L,10)==0 && !(Luna< wxClassInfo >::check(L,10)) ) ) return false;
		if( luatop>10 && lua_type(L,11)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_CreateDocument(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CreateView(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FileMatchesTemplate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetDefaultExtension(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetDescription(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetDirectory(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetDocClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetDocumentManager(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetDocumentName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFileFilter(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFlags(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetViewClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetViewName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_InitDocument(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsVisible(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetDefaultExtension(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDescription(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDirectory(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDocumentManager(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFileFilter(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFlags(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_CreateDocument(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_CreateView(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_FileMatchesTemplate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetDocumentName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetViewName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_InitDocument(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxDocTemplate::wxDocTemplate(wxDocManager * manager, const wxString & descr, const wxString & filter, const wxString & dir, const wxString & ext, const wxString & docTypeName, const wxString & viewTypeName, wxClassInfo * docClassInfo = 0, wxClassInfo * viewClassInfo = 0, long flags = ::wxTEMPLATE_VISIBLE)
	static wxDocTemplate* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxDocTemplate::wxDocTemplate(wxDocManager * manager, const wxString & descr, const wxString & filter, const wxString & dir, const wxString & ext, const wxString & docTypeName, const wxString & viewTypeName, wxClassInfo * docClassInfo = 0, wxClassInfo * viewClassInfo = 0, long flags = ::wxTEMPLATE_VISIBLE) function, expected prototype:\nwxDocTemplate::wxDocTemplate(wxDocManager * manager, const wxString & descr, const wxString & filter, const wxString & dir, const wxString & ext, const wxString & docTypeName, const wxString & viewTypeName, wxClassInfo * docClassInfo = 0, wxClassInfo * viewClassInfo = 0, long flags = ::wxTEMPLATE_VISIBLE)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\narg 3 ID = 88196105\narg 4 ID = 88196105\narg 5 ID = 88196105\narg 6 ID = 88196105\narg 7 ID = 88196105\narg 8 ID = 96106697\narg 9 ID = 96106697\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxDocManager* manager=(Luna< wxObject >::checkSubType< wxDocManager >(L,1));
		wxString descr(lua_tostring(L,2),lua_objlen(L,2));
		wxString filter(lua_tostring(L,3),lua_objlen(L,3));
		wxString dir(lua_tostring(L,4),lua_objlen(L,4));
		wxString ext(lua_tostring(L,5),lua_objlen(L,5));
		wxString docTypeName(lua_tostring(L,6),lua_objlen(L,6));
		wxString viewTypeName(lua_tostring(L,7),lua_objlen(L,7));
		wxClassInfo* docClassInfo=luatop>7 ? (Luna< wxClassInfo >::check(L,8)) : (wxClassInfo*)0;
		wxClassInfo* viewClassInfo=luatop>8 ? (Luna< wxClassInfo >::check(L,9)) : (wxClassInfo*)0;
		long flags=luatop>9 ? (long)lua_tonumber(L,10) : (long)::wxTEMPLATE_VISIBLE;

		return new wxDocTemplate(manager, descr, filter, dir, ext, docTypeName, viewTypeName, docClassInfo, viewClassInfo, flags);
	}

	// wxDocTemplate::wxDocTemplate(lua_Table * data, wxDocManager * manager, const wxString & descr, const wxString & filter, const wxString & dir, const wxString & ext, const wxString & docTypeName, const wxString & viewTypeName, wxClassInfo * docClassInfo = 0, wxClassInfo * viewClassInfo = 0, long flags = ::wxTEMPLATE_VISIBLE)
	static wxDocTemplate* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxDocTemplate::wxDocTemplate(lua_Table * data, wxDocManager * manager, const wxString & descr, const wxString & filter, const wxString & dir, const wxString & ext, const wxString & docTypeName, const wxString & viewTypeName, wxClassInfo * docClassInfo = 0, wxClassInfo * viewClassInfo = 0, long flags = ::wxTEMPLATE_VISIBLE) function, expected prototype:\nwxDocTemplate::wxDocTemplate(lua_Table * data, wxDocManager * manager, const wxString & descr, const wxString & filter, const wxString & dir, const wxString & ext, const wxString & docTypeName, const wxString & viewTypeName, wxClassInfo * docClassInfo = 0, wxClassInfo * viewClassInfo = 0, long flags = ::wxTEMPLATE_VISIBLE)\nClass arguments details:\narg 2 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 88196105\narg 5 ID = 88196105\narg 6 ID = 88196105\narg 7 ID = 88196105\narg 8 ID = 88196105\narg 9 ID = 96106697\narg 10 ID = 96106697\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxDocManager* manager=(Luna< wxObject >::checkSubType< wxDocManager >(L,2));
		wxString descr(lua_tostring(L,3),lua_objlen(L,3));
		wxString filter(lua_tostring(L,4),lua_objlen(L,4));
		wxString dir(lua_tostring(L,5),lua_objlen(L,5));
		wxString ext(lua_tostring(L,6),lua_objlen(L,6));
		wxString docTypeName(lua_tostring(L,7),lua_objlen(L,7));
		wxString viewTypeName(lua_tostring(L,8),lua_objlen(L,8));
		wxClassInfo* docClassInfo=luatop>8 ? (Luna< wxClassInfo >::check(L,9)) : (wxClassInfo*)0;
		wxClassInfo* viewClassInfo=luatop>9 ? (Luna< wxClassInfo >::check(L,10)) : (wxClassInfo*)0;
		long flags=luatop>10 ? (long)lua_tonumber(L,11) : (long)::wxTEMPLATE_VISIBLE;

		return new wrapper_wxDocTemplate(L,NULL, manager, descr, filter, dir, ext, docTypeName, viewTypeName, docClassInfo, viewClassInfo, flags);
	}

	// Overload binder for wxDocTemplate::wxDocTemplate
	static wxDocTemplate* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxDocTemplate, cannot match any of the overloads for function wxDocTemplate:\n  wxDocTemplate(wxDocManager *, const wxString &, const wxString &, const wxString &, const wxString &, const wxString &, const wxString &, wxClassInfo *, wxClassInfo *, long)\n  wxDocTemplate(lua_Table *, wxDocManager *, const wxString &, const wxString &, const wxString &, const wxString &, const wxString &, const wxString &, wxClassInfo *, wxClassInfo *, long)\n");
		return NULL;
	}


	// Function binds:
	// wxDocument * wxDocTemplate::CreateDocument(const wxString & path, long flags = 0)
	static int _bind_CreateDocument(lua_State *L) {
		if (!_lg_typecheck_CreateDocument(L)) {
			luaL_error(L, "luna typecheck failed in wxDocument * wxDocTemplate::CreateDocument(const wxString & path, long flags = 0) function, expected prototype:\nwxDocument * wxDocTemplate::CreateDocument(const wxString & path, long flags = 0)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString path(lua_tostring(L,2),lua_objlen(L,2));
		long flags=luatop>2 ? (long)lua_tonumber(L,3) : (long)0;

		wxDocTemplate* self=Luna< wxObject >::checkSubType< wxDocTemplate >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDocument * wxDocTemplate::CreateDocument(const wxString &, long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDocument * lret = self->CreateDocument(path, flags);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDocument >::push(L,lret,false);

		return 1;
	}

	// wxView * wxDocTemplate::CreateView(wxDocument * doc, long flags = 0)
	static int _bind_CreateView(lua_State *L) {
		if (!_lg_typecheck_CreateView(L)) {
			luaL_error(L, "luna typecheck failed in wxView * wxDocTemplate::CreateView(wxDocument * doc, long flags = 0) function, expected prototype:\nwxView * wxDocTemplate::CreateView(wxDocument * doc, long flags = 0)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxDocument* doc=(Luna< wxObject >::checkSubType< wxDocument >(L,2));
		long flags=luatop>2 ? (long)lua_tonumber(L,3) : (long)0;

		wxDocTemplate* self=Luna< wxObject >::checkSubType< wxDocTemplate >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxView * wxDocTemplate::CreateView(wxDocument *, long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxView * lret = self->CreateView(doc, flags);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxView >::push(L,lret,false);

		return 1;
	}

	// bool wxDocTemplate::FileMatchesTemplate(const wxString & path)
	static int _bind_FileMatchesTemplate(lua_State *L) {
		if (!_lg_typecheck_FileMatchesTemplate(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDocTemplate::FileMatchesTemplate(const wxString & path) function, expected prototype:\nbool wxDocTemplate::FileMatchesTemplate(const wxString & path)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString path(lua_tostring(L,2),lua_objlen(L,2));

		wxDocTemplate* self=Luna< wxObject >::checkSubType< wxDocTemplate >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDocTemplate::FileMatchesTemplate(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->FileMatchesTemplate(path);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxDocTemplate::GetDefaultExtension() const
	static int _bind_GetDefaultExtension(lua_State *L) {
		if (!_lg_typecheck_GetDefaultExtension(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxDocTemplate::GetDefaultExtension() const function, expected prototype:\nwxString wxDocTemplate::GetDefaultExtension() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDocTemplate* self=Luna< wxObject >::checkSubType< wxDocTemplate >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxDocTemplate::GetDefaultExtension() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetDefaultExtension();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxDocTemplate::GetDescription() const
	static int _bind_GetDescription(lua_State *L) {
		if (!_lg_typecheck_GetDescription(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxDocTemplate::GetDescription() const function, expected prototype:\nwxString wxDocTemplate::GetDescription() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDocTemplate* self=Luna< wxObject >::checkSubType< wxDocTemplate >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxDocTemplate::GetDescription() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetDescription();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxDocTemplate::GetDirectory() const
	static int _bind_GetDirectory(lua_State *L) {
		if (!_lg_typecheck_GetDirectory(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxDocTemplate::GetDirectory() const function, expected prototype:\nwxString wxDocTemplate::GetDirectory() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDocTemplate* self=Luna< wxObject >::checkSubType< wxDocTemplate >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxDocTemplate::GetDirectory() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetDirectory();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxClassInfo * wxDocTemplate::GetDocClassInfo() const
	static int _bind_GetDocClassInfo(lua_State *L) {
		if (!_lg_typecheck_GetDocClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxDocTemplate::GetDocClassInfo() const function, expected prototype:\nwxClassInfo * wxDocTemplate::GetDocClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDocTemplate* self=Luna< wxObject >::checkSubType< wxDocTemplate >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxDocTemplate::GetDocClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->GetDocClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxDocManager * wxDocTemplate::GetDocumentManager() const
	static int _bind_GetDocumentManager(lua_State *L) {
		if (!_lg_typecheck_GetDocumentManager(L)) {
			luaL_error(L, "luna typecheck failed in wxDocManager * wxDocTemplate::GetDocumentManager() const function, expected prototype:\nwxDocManager * wxDocTemplate::GetDocumentManager() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDocTemplate* self=Luna< wxObject >::checkSubType< wxDocTemplate >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDocManager * wxDocTemplate::GetDocumentManager() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDocManager * lret = self->GetDocumentManager();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDocManager >::push(L,lret,false);

		return 1;
	}

	// wxString wxDocTemplate::GetDocumentName() const
	static int _bind_GetDocumentName(lua_State *L) {
		if (!_lg_typecheck_GetDocumentName(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxDocTemplate::GetDocumentName() const function, expected prototype:\nwxString wxDocTemplate::GetDocumentName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDocTemplate* self=Luna< wxObject >::checkSubType< wxDocTemplate >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxDocTemplate::GetDocumentName() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetDocumentName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxDocTemplate::GetFileFilter() const
	static int _bind_GetFileFilter(lua_State *L) {
		if (!_lg_typecheck_GetFileFilter(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxDocTemplate::GetFileFilter() const function, expected prototype:\nwxString wxDocTemplate::GetFileFilter() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDocTemplate* self=Luna< wxObject >::checkSubType< wxDocTemplate >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxDocTemplate::GetFileFilter() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetFileFilter();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// long wxDocTemplate::GetFlags() const
	static int _bind_GetFlags(lua_State *L) {
		if (!_lg_typecheck_GetFlags(L)) {
			luaL_error(L, "luna typecheck failed in long wxDocTemplate::GetFlags() const function, expected prototype:\nlong wxDocTemplate::GetFlags() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDocTemplate* self=Luna< wxObject >::checkSubType< wxDocTemplate >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxDocTemplate::GetFlags() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->GetFlags();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxClassInfo * wxDocTemplate::GetViewClassInfo() const
	static int _bind_GetViewClassInfo(lua_State *L) {
		if (!_lg_typecheck_GetViewClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxDocTemplate::GetViewClassInfo() const function, expected prototype:\nwxClassInfo * wxDocTemplate::GetViewClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDocTemplate* self=Luna< wxObject >::checkSubType< wxDocTemplate >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxDocTemplate::GetViewClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->GetViewClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxString wxDocTemplate::GetViewName() const
	static int _bind_GetViewName(lua_State *L) {
		if (!_lg_typecheck_GetViewName(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxDocTemplate::GetViewName() const function, expected prototype:\nwxString wxDocTemplate::GetViewName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDocTemplate* self=Luna< wxObject >::checkSubType< wxDocTemplate >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxDocTemplate::GetViewName() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetViewName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool wxDocTemplate::InitDocument(wxDocument * doc, const wxString & path, long flags = 0)
	static int _bind_InitDocument(lua_State *L) {
		if (!_lg_typecheck_InitDocument(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDocTemplate::InitDocument(wxDocument * doc, const wxString & path, long flags = 0) function, expected prototype:\nbool wxDocTemplate::InitDocument(wxDocument * doc, const wxString & path, long flags = 0)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxDocument* doc=(Luna< wxObject >::checkSubType< wxDocument >(L,2));
		wxString path(lua_tostring(L,3),lua_objlen(L,3));
		long flags=luatop>3 ? (long)lua_tonumber(L,4) : (long)0;

		wxDocTemplate* self=Luna< wxObject >::checkSubType< wxDocTemplate >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDocTemplate::InitDocument(wxDocument *, const wxString &, long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->InitDocument(doc, path, flags);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDocTemplate::IsVisible() const
	static int _bind_IsVisible(lua_State *L) {
		if (!_lg_typecheck_IsVisible(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDocTemplate::IsVisible() const function, expected prototype:\nbool wxDocTemplate::IsVisible() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDocTemplate* self=Luna< wxObject >::checkSubType< wxDocTemplate >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDocTemplate::IsVisible() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsVisible();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDocTemplate::SetDefaultExtension(const wxString & ext)
	static int _bind_SetDefaultExtension(lua_State *L) {
		if (!_lg_typecheck_SetDefaultExtension(L)) {
			luaL_error(L, "luna typecheck failed in void wxDocTemplate::SetDefaultExtension(const wxString & ext) function, expected prototype:\nvoid wxDocTemplate::SetDefaultExtension(const wxString & ext)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString ext(lua_tostring(L,2),lua_objlen(L,2));

		wxDocTemplate* self=Luna< wxObject >::checkSubType< wxDocTemplate >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDocTemplate::SetDefaultExtension(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetDefaultExtension(ext);

		return 0;
	}

	// void wxDocTemplate::SetDescription(const wxString & descr)
	static int _bind_SetDescription(lua_State *L) {
		if (!_lg_typecheck_SetDescription(L)) {
			luaL_error(L, "luna typecheck failed in void wxDocTemplate::SetDescription(const wxString & descr) function, expected prototype:\nvoid wxDocTemplate::SetDescription(const wxString & descr)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString descr(lua_tostring(L,2),lua_objlen(L,2));

		wxDocTemplate* self=Luna< wxObject >::checkSubType< wxDocTemplate >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDocTemplate::SetDescription(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetDescription(descr);

		return 0;
	}

	// void wxDocTemplate::SetDirectory(const wxString & dir)
	static int _bind_SetDirectory(lua_State *L) {
		if (!_lg_typecheck_SetDirectory(L)) {
			luaL_error(L, "luna typecheck failed in void wxDocTemplate::SetDirectory(const wxString & dir) function, expected prototype:\nvoid wxDocTemplate::SetDirectory(const wxString & dir)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString dir(lua_tostring(L,2),lua_objlen(L,2));

		wxDocTemplate* self=Luna< wxObject >::checkSubType< wxDocTemplate >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDocTemplate::SetDirectory(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetDirectory(dir);

		return 0;
	}

	// void wxDocTemplate::SetDocumentManager(wxDocManager * manager)
	static int _bind_SetDocumentManager(lua_State *L) {
		if (!_lg_typecheck_SetDocumentManager(L)) {
			luaL_error(L, "luna typecheck failed in void wxDocTemplate::SetDocumentManager(wxDocManager * manager) function, expected prototype:\nvoid wxDocTemplate::SetDocumentManager(wxDocManager * manager)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDocManager* manager=(Luna< wxObject >::checkSubType< wxDocManager >(L,2));

		wxDocTemplate* self=Luna< wxObject >::checkSubType< wxDocTemplate >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDocTemplate::SetDocumentManager(wxDocManager *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetDocumentManager(manager);

		return 0;
	}

	// void wxDocTemplate::SetFileFilter(const wxString & filter)
	static int _bind_SetFileFilter(lua_State *L) {
		if (!_lg_typecheck_SetFileFilter(L)) {
			luaL_error(L, "luna typecheck failed in void wxDocTemplate::SetFileFilter(const wxString & filter) function, expected prototype:\nvoid wxDocTemplate::SetFileFilter(const wxString & filter)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString filter(lua_tostring(L,2),lua_objlen(L,2));

		wxDocTemplate* self=Luna< wxObject >::checkSubType< wxDocTemplate >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDocTemplate::SetFileFilter(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetFileFilter(filter);

		return 0;
	}

	// void wxDocTemplate::SetFlags(long flags)
	static int _bind_SetFlags(lua_State *L) {
		if (!_lg_typecheck_SetFlags(L)) {
			luaL_error(L, "luna typecheck failed in void wxDocTemplate::SetFlags(long flags) function, expected prototype:\nvoid wxDocTemplate::SetFlags(long flags)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long flags=(long)lua_tonumber(L,2);

		wxDocTemplate* self=Luna< wxObject >::checkSubType< wxDocTemplate >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDocTemplate::SetFlags(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetFlags(flags);

		return 0;
	}

	// wxClassInfo * wxDocTemplate::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxDocTemplate::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxDocTemplate::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDocTemplate* self=Luna< wxObject >::checkSubType< wxDocTemplate >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxDocTemplate::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxDocTemplate::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxDocument * wxDocTemplate::base_CreateDocument(const wxString & path, long flags = 0)
	static int _bind_base_CreateDocument(lua_State *L) {
		if (!_lg_typecheck_base_CreateDocument(L)) {
			luaL_error(L, "luna typecheck failed in wxDocument * wxDocTemplate::base_CreateDocument(const wxString & path, long flags = 0) function, expected prototype:\nwxDocument * wxDocTemplate::base_CreateDocument(const wxString & path, long flags = 0)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString path(lua_tostring(L,2),lua_objlen(L,2));
		long flags=luatop>2 ? (long)lua_tonumber(L,3) : (long)0;

		wxDocTemplate* self=Luna< wxObject >::checkSubType< wxDocTemplate >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDocument * wxDocTemplate::base_CreateDocument(const wxString &, long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDocument * lret = self->wxDocTemplate::CreateDocument(path, flags);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDocument >::push(L,lret,false);

		return 1;
	}

	// wxView * wxDocTemplate::base_CreateView(wxDocument * doc, long flags = 0)
	static int _bind_base_CreateView(lua_State *L) {
		if (!_lg_typecheck_base_CreateView(L)) {
			luaL_error(L, "luna typecheck failed in wxView * wxDocTemplate::base_CreateView(wxDocument * doc, long flags = 0) function, expected prototype:\nwxView * wxDocTemplate::base_CreateView(wxDocument * doc, long flags = 0)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxDocument* doc=(Luna< wxObject >::checkSubType< wxDocument >(L,2));
		long flags=luatop>2 ? (long)lua_tonumber(L,3) : (long)0;

		wxDocTemplate* self=Luna< wxObject >::checkSubType< wxDocTemplate >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxView * wxDocTemplate::base_CreateView(wxDocument *, long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxView * lret = self->wxDocTemplate::CreateView(doc, flags);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxView >::push(L,lret,false);

		return 1;
	}

	// bool wxDocTemplate::base_FileMatchesTemplate(const wxString & path)
	static int _bind_base_FileMatchesTemplate(lua_State *L) {
		if (!_lg_typecheck_base_FileMatchesTemplate(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDocTemplate::base_FileMatchesTemplate(const wxString & path) function, expected prototype:\nbool wxDocTemplate::base_FileMatchesTemplate(const wxString & path)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString path(lua_tostring(L,2),lua_objlen(L,2));

		wxDocTemplate* self=Luna< wxObject >::checkSubType< wxDocTemplate >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDocTemplate::base_FileMatchesTemplate(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDocTemplate::FileMatchesTemplate(path);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxDocTemplate::base_GetDocumentName() const
	static int _bind_base_GetDocumentName(lua_State *L) {
		if (!_lg_typecheck_base_GetDocumentName(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxDocTemplate::base_GetDocumentName() const function, expected prototype:\nwxString wxDocTemplate::base_GetDocumentName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDocTemplate* self=Luna< wxObject >::checkSubType< wxDocTemplate >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxDocTemplate::base_GetDocumentName() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxDocTemplate::GetDocumentName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxDocTemplate::base_GetViewName() const
	static int _bind_base_GetViewName(lua_State *L) {
		if (!_lg_typecheck_base_GetViewName(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxDocTemplate::base_GetViewName() const function, expected prototype:\nwxString wxDocTemplate::base_GetViewName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDocTemplate* self=Luna< wxObject >::checkSubType< wxDocTemplate >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxDocTemplate::base_GetViewName() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxDocTemplate::GetViewName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool wxDocTemplate::base_InitDocument(wxDocument * doc, const wxString & path, long flags = 0)
	static int _bind_base_InitDocument(lua_State *L) {
		if (!_lg_typecheck_base_InitDocument(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDocTemplate::base_InitDocument(wxDocument * doc, const wxString & path, long flags = 0) function, expected prototype:\nbool wxDocTemplate::base_InitDocument(wxDocument * doc, const wxString & path, long flags = 0)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxDocument* doc=(Luna< wxObject >::checkSubType< wxDocument >(L,2));
		wxString path(lua_tostring(L,3),lua_objlen(L,3));
		long flags=luatop>3 ? (long)lua_tonumber(L,4) : (long)0;

		wxDocTemplate* self=Luna< wxObject >::checkSubType< wxDocTemplate >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDocTemplate::base_InitDocument(wxDocument *, const wxString &, long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDocTemplate::InitDocument(doc, path, flags);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxDocTemplate* LunaTraits< wxDocTemplate >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxDocTemplate::_bind_ctor(L);
}

void LunaTraits< wxDocTemplate >::_bind_dtor(wxDocTemplate* obj) {
	delete obj;
}

const char LunaTraits< wxDocTemplate >::className[] = "wxDocTemplate";
const char LunaTraits< wxDocTemplate >::fullName[] = "wxDocTemplate";
const char LunaTraits< wxDocTemplate >::moduleName[] = "wx";
const char* LunaTraits< wxDocTemplate >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxDocTemplate >::hash = 29895188;
const int LunaTraits< wxDocTemplate >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxDocTemplate >::methods[] = {
	{"CreateDocument", &luna_wrapper_wxDocTemplate::_bind_CreateDocument},
	{"CreateView", &luna_wrapper_wxDocTemplate::_bind_CreateView},
	{"FileMatchesTemplate", &luna_wrapper_wxDocTemplate::_bind_FileMatchesTemplate},
	{"GetDefaultExtension", &luna_wrapper_wxDocTemplate::_bind_GetDefaultExtension},
	{"GetDescription", &luna_wrapper_wxDocTemplate::_bind_GetDescription},
	{"GetDirectory", &luna_wrapper_wxDocTemplate::_bind_GetDirectory},
	{"GetDocClassInfo", &luna_wrapper_wxDocTemplate::_bind_GetDocClassInfo},
	{"GetDocumentManager", &luna_wrapper_wxDocTemplate::_bind_GetDocumentManager},
	{"GetDocumentName", &luna_wrapper_wxDocTemplate::_bind_GetDocumentName},
	{"GetFileFilter", &luna_wrapper_wxDocTemplate::_bind_GetFileFilter},
	{"GetFlags", &luna_wrapper_wxDocTemplate::_bind_GetFlags},
	{"GetViewClassInfo", &luna_wrapper_wxDocTemplate::_bind_GetViewClassInfo},
	{"GetViewName", &luna_wrapper_wxDocTemplate::_bind_GetViewName},
	{"InitDocument", &luna_wrapper_wxDocTemplate::_bind_InitDocument},
	{"IsVisible", &luna_wrapper_wxDocTemplate::_bind_IsVisible},
	{"SetDefaultExtension", &luna_wrapper_wxDocTemplate::_bind_SetDefaultExtension},
	{"SetDescription", &luna_wrapper_wxDocTemplate::_bind_SetDescription},
	{"SetDirectory", &luna_wrapper_wxDocTemplate::_bind_SetDirectory},
	{"SetDocumentManager", &luna_wrapper_wxDocTemplate::_bind_SetDocumentManager},
	{"SetFileFilter", &luna_wrapper_wxDocTemplate::_bind_SetFileFilter},
	{"SetFlags", &luna_wrapper_wxDocTemplate::_bind_SetFlags},
	{"base_GetClassInfo", &luna_wrapper_wxDocTemplate::_bind_base_GetClassInfo},
	{"base_CreateDocument", &luna_wrapper_wxDocTemplate::_bind_base_CreateDocument},
	{"base_CreateView", &luna_wrapper_wxDocTemplate::_bind_base_CreateView},
	{"base_FileMatchesTemplate", &luna_wrapper_wxDocTemplate::_bind_base_FileMatchesTemplate},
	{"base_GetDocumentName", &luna_wrapper_wxDocTemplate::_bind_base_GetDocumentName},
	{"base_GetViewName", &luna_wrapper_wxDocTemplate::_bind_base_GetViewName},
	{"base_InitDocument", &luna_wrapper_wxDocTemplate::_bind_base_InitDocument},
	{"fromVoid", &luna_wrapper_wxDocTemplate::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxDocTemplate::_bind_asVoid},
	{"getTable", &luna_wrapper_wxDocTemplate::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxDocTemplate >::converters[] = {
	{"wxObject", &luna_wrapper_wxDocTemplate::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxDocTemplate >::enumValues[] = {
	{0,0}
};


