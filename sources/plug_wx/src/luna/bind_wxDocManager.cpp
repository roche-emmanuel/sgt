#include <plug_common.h>

#include <luna/wrappers/wrapper_wxDocManager.h>

class luna_wrapper_wxDocManager {
public:
	typedef Luna< wxDocManager > luna_t;

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

		wxDocManager* self= (wxDocManager*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxDocManager >::push(L,self,false);
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
		//wxDocManager* ptr= dynamic_cast< wxDocManager* >(Luna< wxObject >::check(L,1));
		wxDocManager* ptr= luna_caster< wxObject, wxDocManager >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxDocManager >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>2 ) return false;

		if( luatop>0 && lua_type(L,1)!=LUA_TNUMBER ) return false;
		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_ActivateView(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddDocument(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddFileToHistory(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AssociateTemplate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FindTemplate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,96106697)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CloseDocument(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CloseDocuments(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CreateDocument(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CreateNewDocument(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CreateView(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DisassociateTemplate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FileHistoryAddFilesToMenu_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_FileHistoryAddFilesToMenu_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxMenu >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FileHistoryLoad(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FileHistoryRemoveMenu(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FileHistorySave(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FileHistoryUseMenu(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FindTemplateForPath(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetCurrentDocument(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCurrentView(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetDocuments(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFileHistory(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetHistoryFilesCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLastDirectory(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMaxDocsOpen(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTemplates(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Initialize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_MakeNewDocumentName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_OnCreateFileHistory(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_OnFileClose(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnFileCloseAll(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnFileNew(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnFileOpen(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnFileRevert(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnFileSave(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnFileSaveAs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RemoveDocument(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetLastDirectory(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMaxDocsOpen(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_QueueEvent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_AddPendingEvent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_ProcessEvent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetNextHandler(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetPreviousHandler(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_ActivateView(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_AddFileToHistory(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
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

	inline static bool _lg_typecheck_base_FileHistoryAddFilesToMenu_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_FileHistoryAddFilesToMenu_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxMenu >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_FileHistoryLoad(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_FileHistoryRemoveMenu(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_FileHistorySave(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_FileHistoryUseMenu(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_FindTemplateForPath(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetCurrentView(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetFileHistory(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetHistoryFilesCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Initialize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_MakeNewDocumentName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_OnCreateFileHistory(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxDocManager::wxDocManager(long flags = 0, bool initialize = true)
	static wxDocManager* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxDocManager::wxDocManager(long flags = 0, bool initialize = true) function, expected prototype:\nwxDocManager::wxDocManager(long flags = 0, bool initialize = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		long flags=luatop>0 ? (long)lua_tonumber(L,1) : (long)0;
		bool initialize=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		return new wxDocManager(flags, initialize);
	}

	// wxDocManager::wxDocManager(lua_Table * data, long flags = 0, bool initialize = true)
	static wxDocManager* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxDocManager::wxDocManager(lua_Table * data, long flags = 0, bool initialize = true) function, expected prototype:\nwxDocManager::wxDocManager(lua_Table * data, long flags = 0, bool initialize = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		long flags=luatop>1 ? (long)lua_tonumber(L,2) : (long)0;
		bool initialize=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		return new wrapper_wxDocManager(L,NULL, flags, initialize);
	}

	// Overload binder for wxDocManager::wxDocManager
	static wxDocManager* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxDocManager, cannot match any of the overloads for function wxDocManager:\n  wxDocManager(long, bool)\n  wxDocManager(lua_Table *, long, bool)\n");
		return NULL;
	}


	// Function binds:
	// void wxDocManager::ActivateView(wxView * doc, bool activate = true)
	static int _bind_ActivateView(lua_State *L) {
		if (!_lg_typecheck_ActivateView(L)) {
			luaL_error(L, "luna typecheck failed in void wxDocManager::ActivateView(wxView * doc, bool activate = true) function, expected prototype:\nvoid wxDocManager::ActivateView(wxView * doc, bool activate = true)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxView* doc=(Luna< wxObject >::checkSubType< wxView >(L,2));
		bool activate=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		wxDocManager* self=Luna< wxObject >::checkSubType< wxDocManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDocManager::ActivateView(wxView *, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ActivateView(doc, activate);

		return 0;
	}

	// void wxDocManager::AddDocument(wxDocument * doc)
	static int _bind_AddDocument(lua_State *L) {
		if (!_lg_typecheck_AddDocument(L)) {
			luaL_error(L, "luna typecheck failed in void wxDocManager::AddDocument(wxDocument * doc) function, expected prototype:\nvoid wxDocManager::AddDocument(wxDocument * doc)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDocument* doc=(Luna< wxObject >::checkSubType< wxDocument >(L,2));

		wxDocManager* self=Luna< wxObject >::checkSubType< wxDocManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDocManager::AddDocument(wxDocument *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AddDocument(doc);

		return 0;
	}

	// void wxDocManager::AddFileToHistory(const wxString & filename)
	static int _bind_AddFileToHistory(lua_State *L) {
		if (!_lg_typecheck_AddFileToHistory(L)) {
			luaL_error(L, "luna typecheck failed in void wxDocManager::AddFileToHistory(const wxString & filename) function, expected prototype:\nvoid wxDocManager::AddFileToHistory(const wxString & filename)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString filename(lua_tostring(L,2),lua_objlen(L,2));

		wxDocManager* self=Luna< wxObject >::checkSubType< wxDocManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDocManager::AddFileToHistory(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AddFileToHistory(filename);

		return 0;
	}

	// void wxDocManager::AssociateTemplate(wxDocTemplate * temp)
	static int _bind_AssociateTemplate(lua_State *L) {
		if (!_lg_typecheck_AssociateTemplate(L)) {
			luaL_error(L, "luna typecheck failed in void wxDocManager::AssociateTemplate(wxDocTemplate * temp) function, expected prototype:\nvoid wxDocManager::AssociateTemplate(wxDocTemplate * temp)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDocTemplate* temp=(Luna< wxObject >::checkSubType< wxDocTemplate >(L,2));

		wxDocManager* self=Luna< wxObject >::checkSubType< wxDocManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDocManager::AssociateTemplate(wxDocTemplate *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AssociateTemplate(temp);

		return 0;
	}

	// wxDocTemplate * wxDocManager::FindTemplate(const wxClassInfo * classinfo)
	static int _bind_FindTemplate(lua_State *L) {
		if (!_lg_typecheck_FindTemplate(L)) {
			luaL_error(L, "luna typecheck failed in wxDocTemplate * wxDocManager::FindTemplate(const wxClassInfo * classinfo) function, expected prototype:\nwxDocTemplate * wxDocManager::FindTemplate(const wxClassInfo * classinfo)\nClass arguments details:\narg 1 ID = 96106697\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxClassInfo* classinfo=(Luna< wxClassInfo >::check(L,2));

		wxDocManager* self=Luna< wxObject >::checkSubType< wxDocManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDocTemplate * wxDocManager::FindTemplate(const wxClassInfo *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDocTemplate * lret = self->FindTemplate(classinfo);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDocTemplate >::push(L,lret,false);

		return 1;
	}

	// bool wxDocManager::CloseDocument(wxDocument * doc, bool force = false)
	static int _bind_CloseDocument(lua_State *L) {
		if (!_lg_typecheck_CloseDocument(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDocManager::CloseDocument(wxDocument * doc, bool force = false) function, expected prototype:\nbool wxDocManager::CloseDocument(wxDocument * doc, bool force = false)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxDocument* doc=(Luna< wxObject >::checkSubType< wxDocument >(L,2));
		bool force=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)false;

		wxDocManager* self=Luna< wxObject >::checkSubType< wxDocManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDocManager::CloseDocument(wxDocument *, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->CloseDocument(doc, force);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDocManager::CloseDocuments(bool force = true)
	static int _bind_CloseDocuments(lua_State *L) {
		if (!_lg_typecheck_CloseDocuments(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDocManager::CloseDocuments(bool force = true) function, expected prototype:\nbool wxDocManager::CloseDocuments(bool force = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool force=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxDocManager* self=Luna< wxObject >::checkSubType< wxDocManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDocManager::CloseDocuments(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->CloseDocuments(force);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxDocument * wxDocManager::CreateDocument(const wxString & path, long flags = 0)
	static int _bind_CreateDocument(lua_State *L) {
		if (!_lg_typecheck_CreateDocument(L)) {
			luaL_error(L, "luna typecheck failed in wxDocument * wxDocManager::CreateDocument(const wxString & path, long flags = 0) function, expected prototype:\nwxDocument * wxDocManager::CreateDocument(const wxString & path, long flags = 0)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString path(lua_tostring(L,2),lua_objlen(L,2));
		long flags=luatop>2 ? (long)lua_tonumber(L,3) : (long)0;

		wxDocManager* self=Luna< wxObject >::checkSubType< wxDocManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDocument * wxDocManager::CreateDocument(const wxString &, long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDocument * lret = self->CreateDocument(path, flags);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDocument >::push(L,lret,false);

		return 1;
	}

	// wxDocument * wxDocManager::CreateNewDocument()
	static int _bind_CreateNewDocument(lua_State *L) {
		if (!_lg_typecheck_CreateNewDocument(L)) {
			luaL_error(L, "luna typecheck failed in wxDocument * wxDocManager::CreateNewDocument() function, expected prototype:\nwxDocument * wxDocManager::CreateNewDocument()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDocManager* self=Luna< wxObject >::checkSubType< wxDocManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDocument * wxDocManager::CreateNewDocument(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDocument * lret = self->CreateNewDocument();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDocument >::push(L,lret,false);

		return 1;
	}

	// wxView * wxDocManager::CreateView(wxDocument * doc, long flags = 0)
	static int _bind_CreateView(lua_State *L) {
		if (!_lg_typecheck_CreateView(L)) {
			luaL_error(L, "luna typecheck failed in wxView * wxDocManager::CreateView(wxDocument * doc, long flags = 0) function, expected prototype:\nwxView * wxDocManager::CreateView(wxDocument * doc, long flags = 0)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxDocument* doc=(Luna< wxObject >::checkSubType< wxDocument >(L,2));
		long flags=luatop>2 ? (long)lua_tonumber(L,3) : (long)0;

		wxDocManager* self=Luna< wxObject >::checkSubType< wxDocManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxView * wxDocManager::CreateView(wxDocument *, long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxView * lret = self->CreateView(doc, flags);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxView >::push(L,lret,false);

		return 1;
	}

	// void wxDocManager::DisassociateTemplate(wxDocTemplate * temp)
	static int _bind_DisassociateTemplate(lua_State *L) {
		if (!_lg_typecheck_DisassociateTemplate(L)) {
			luaL_error(L, "luna typecheck failed in void wxDocManager::DisassociateTemplate(wxDocTemplate * temp) function, expected prototype:\nvoid wxDocManager::DisassociateTemplate(wxDocTemplate * temp)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDocTemplate* temp=(Luna< wxObject >::checkSubType< wxDocTemplate >(L,2));

		wxDocManager* self=Luna< wxObject >::checkSubType< wxDocManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDocManager::DisassociateTemplate(wxDocTemplate *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DisassociateTemplate(temp);

		return 0;
	}

	// void wxDocManager::FileHistoryAddFilesToMenu()
	static int _bind_FileHistoryAddFilesToMenu_overload_1(lua_State *L) {
		if (!_lg_typecheck_FileHistoryAddFilesToMenu_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxDocManager::FileHistoryAddFilesToMenu() function, expected prototype:\nvoid wxDocManager::FileHistoryAddFilesToMenu()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDocManager* self=Luna< wxObject >::checkSubType< wxDocManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDocManager::FileHistoryAddFilesToMenu(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->FileHistoryAddFilesToMenu();

		return 0;
	}

	// void wxDocManager::FileHistoryAddFilesToMenu(wxMenu * menu)
	static int _bind_FileHistoryAddFilesToMenu_overload_2(lua_State *L) {
		if (!_lg_typecheck_FileHistoryAddFilesToMenu_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxDocManager::FileHistoryAddFilesToMenu(wxMenu * menu) function, expected prototype:\nvoid wxDocManager::FileHistoryAddFilesToMenu(wxMenu * menu)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxMenu* menu=(Luna< wxObject >::checkSubType< wxMenu >(L,2));

		wxDocManager* self=Luna< wxObject >::checkSubType< wxDocManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDocManager::FileHistoryAddFilesToMenu(wxMenu *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->FileHistoryAddFilesToMenu(menu);

		return 0;
	}

	// Overload binder for wxDocManager::FileHistoryAddFilesToMenu
	static int _bind_FileHistoryAddFilesToMenu(lua_State *L) {
		if (_lg_typecheck_FileHistoryAddFilesToMenu_overload_1(L)) return _bind_FileHistoryAddFilesToMenu_overload_1(L);
		if (_lg_typecheck_FileHistoryAddFilesToMenu_overload_2(L)) return _bind_FileHistoryAddFilesToMenu_overload_2(L);

		luaL_error(L, "error in function FileHistoryAddFilesToMenu, cannot match any of the overloads for function FileHistoryAddFilesToMenu:\n  FileHistoryAddFilesToMenu()\n  FileHistoryAddFilesToMenu(wxMenu *)\n");
		return 0;
	}

	// void wxDocManager::FileHistoryLoad(const wxConfigBase & config)
	static int _bind_FileHistoryLoad(lua_State *L) {
		if (!_lg_typecheck_FileHistoryLoad(L)) {
			luaL_error(L, "luna typecheck failed in void wxDocManager::FileHistoryLoad(const wxConfigBase & config) function, expected prototype:\nvoid wxDocManager::FileHistoryLoad(const wxConfigBase & config)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxConfigBase* config_ptr=(Luna< wxObject >::checkSubType< wxConfigBase >(L,2));
		if( !config_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg config in wxDocManager::FileHistoryLoad function");
		}
		const wxConfigBase & config=*config_ptr;

		wxDocManager* self=Luna< wxObject >::checkSubType< wxDocManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDocManager::FileHistoryLoad(const wxConfigBase &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->FileHistoryLoad(config);

		return 0;
	}

	// void wxDocManager::FileHistoryRemoveMenu(wxMenu * menu)
	static int _bind_FileHistoryRemoveMenu(lua_State *L) {
		if (!_lg_typecheck_FileHistoryRemoveMenu(L)) {
			luaL_error(L, "luna typecheck failed in void wxDocManager::FileHistoryRemoveMenu(wxMenu * menu) function, expected prototype:\nvoid wxDocManager::FileHistoryRemoveMenu(wxMenu * menu)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxMenu* menu=(Luna< wxObject >::checkSubType< wxMenu >(L,2));

		wxDocManager* self=Luna< wxObject >::checkSubType< wxDocManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDocManager::FileHistoryRemoveMenu(wxMenu *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->FileHistoryRemoveMenu(menu);

		return 0;
	}

	// void wxDocManager::FileHistorySave(wxConfigBase & resourceFile)
	static int _bind_FileHistorySave(lua_State *L) {
		if (!_lg_typecheck_FileHistorySave(L)) {
			luaL_error(L, "luna typecheck failed in void wxDocManager::FileHistorySave(wxConfigBase & resourceFile) function, expected prototype:\nvoid wxDocManager::FileHistorySave(wxConfigBase & resourceFile)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxConfigBase* resourceFile_ptr=(Luna< wxObject >::checkSubType< wxConfigBase >(L,2));
		if( !resourceFile_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg resourceFile in wxDocManager::FileHistorySave function");
		}
		wxConfigBase & resourceFile=*resourceFile_ptr;

		wxDocManager* self=Luna< wxObject >::checkSubType< wxDocManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDocManager::FileHistorySave(wxConfigBase &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->FileHistorySave(resourceFile);

		return 0;
	}

	// void wxDocManager::FileHistoryUseMenu(wxMenu * menu)
	static int _bind_FileHistoryUseMenu(lua_State *L) {
		if (!_lg_typecheck_FileHistoryUseMenu(L)) {
			luaL_error(L, "luna typecheck failed in void wxDocManager::FileHistoryUseMenu(wxMenu * menu) function, expected prototype:\nvoid wxDocManager::FileHistoryUseMenu(wxMenu * menu)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxMenu* menu=(Luna< wxObject >::checkSubType< wxMenu >(L,2));

		wxDocManager* self=Luna< wxObject >::checkSubType< wxDocManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDocManager::FileHistoryUseMenu(wxMenu *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->FileHistoryUseMenu(menu);

		return 0;
	}

	// wxDocTemplate * wxDocManager::FindTemplateForPath(const wxString & path)
	static int _bind_FindTemplateForPath(lua_State *L) {
		if (!_lg_typecheck_FindTemplateForPath(L)) {
			luaL_error(L, "luna typecheck failed in wxDocTemplate * wxDocManager::FindTemplateForPath(const wxString & path) function, expected prototype:\nwxDocTemplate * wxDocManager::FindTemplateForPath(const wxString & path)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString path(lua_tostring(L,2),lua_objlen(L,2));

		wxDocManager* self=Luna< wxObject >::checkSubType< wxDocManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDocTemplate * wxDocManager::FindTemplateForPath(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDocTemplate * lret = self->FindTemplateForPath(path);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDocTemplate >::push(L,lret,false);

		return 1;
	}

	// wxDocument * wxDocManager::GetCurrentDocument() const
	static int _bind_GetCurrentDocument(lua_State *L) {
		if (!_lg_typecheck_GetCurrentDocument(L)) {
			luaL_error(L, "luna typecheck failed in wxDocument * wxDocManager::GetCurrentDocument() const function, expected prototype:\nwxDocument * wxDocManager::GetCurrentDocument() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDocManager* self=Luna< wxObject >::checkSubType< wxDocManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDocument * wxDocManager::GetCurrentDocument() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDocument * lret = self->GetCurrentDocument();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDocument >::push(L,lret,false);

		return 1;
	}

	// wxView * wxDocManager::GetCurrentView() const
	static int _bind_GetCurrentView(lua_State *L) {
		if (!_lg_typecheck_GetCurrentView(L)) {
			luaL_error(L, "luna typecheck failed in wxView * wxDocManager::GetCurrentView() const function, expected prototype:\nwxView * wxDocManager::GetCurrentView() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDocManager* self=Luna< wxObject >::checkSubType< wxDocManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxView * wxDocManager::GetCurrentView() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxView * lret = self->GetCurrentView();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxView >::push(L,lret,false);

		return 1;
	}

	// wxList & wxDocManager::GetDocuments()
	static int _bind_GetDocuments(lua_State *L) {
		if (!_lg_typecheck_GetDocuments(L)) {
			luaL_error(L, "luna typecheck failed in wxList & wxDocManager::GetDocuments() function, expected prototype:\nwxList & wxDocManager::GetDocuments()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDocManager* self=Luna< wxObject >::checkSubType< wxDocManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxList & wxDocManager::GetDocuments(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxList* lret = &self->GetDocuments();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxList >::push(L,lret,false);

		return 1;
	}

	// wxFileHistory * wxDocManager::GetFileHistory() const
	static int _bind_GetFileHistory(lua_State *L) {
		if (!_lg_typecheck_GetFileHistory(L)) {
			luaL_error(L, "luna typecheck failed in wxFileHistory * wxDocManager::GetFileHistory() const function, expected prototype:\nwxFileHistory * wxDocManager::GetFileHistory() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDocManager* self=Luna< wxObject >::checkSubType< wxDocManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxFileHistory * wxDocManager::GetFileHistory() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxFileHistory * lret = self->GetFileHistory();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFileHistory >::push(L,lret,false);

		return 1;
	}

	// size_t wxDocManager::GetHistoryFilesCount() const
	static int _bind_GetHistoryFilesCount(lua_State *L) {
		if (!_lg_typecheck_GetHistoryFilesCount(L)) {
			luaL_error(L, "luna typecheck failed in size_t wxDocManager::GetHistoryFilesCount() const function, expected prototype:\nsize_t wxDocManager::GetHistoryFilesCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDocManager* self=Luna< wxObject >::checkSubType< wxDocManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call size_t wxDocManager::GetHistoryFilesCount() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		size_t lret = self->GetHistoryFilesCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxDocManager::GetLastDirectory() const
	static int _bind_GetLastDirectory(lua_State *L) {
		if (!_lg_typecheck_GetLastDirectory(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxDocManager::GetLastDirectory() const function, expected prototype:\nwxString wxDocManager::GetLastDirectory() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDocManager* self=Luna< wxObject >::checkSubType< wxDocManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxDocManager::GetLastDirectory() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetLastDirectory();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// int wxDocManager::GetMaxDocsOpen() const
	static int _bind_GetMaxDocsOpen(lua_State *L) {
		if (!_lg_typecheck_GetMaxDocsOpen(L)) {
			luaL_error(L, "luna typecheck failed in int wxDocManager::GetMaxDocsOpen() const function, expected prototype:\nint wxDocManager::GetMaxDocsOpen() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDocManager* self=Luna< wxObject >::checkSubType< wxDocManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxDocManager::GetMaxDocsOpen() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetMaxDocsOpen();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxList & wxDocManager::GetTemplates()
	static int _bind_GetTemplates(lua_State *L) {
		if (!_lg_typecheck_GetTemplates(L)) {
			luaL_error(L, "luna typecheck failed in wxList & wxDocManager::GetTemplates() function, expected prototype:\nwxList & wxDocManager::GetTemplates()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDocManager* self=Luna< wxObject >::checkSubType< wxDocManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxList & wxDocManager::GetTemplates(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxList* lret = &self->GetTemplates();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxList >::push(L,lret,false);

		return 1;
	}

	// bool wxDocManager::Initialize()
	static int _bind_Initialize(lua_State *L) {
		if (!_lg_typecheck_Initialize(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDocManager::Initialize() function, expected prototype:\nbool wxDocManager::Initialize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDocManager* self=Luna< wxObject >::checkSubType< wxDocManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDocManager::Initialize(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Initialize();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxDocManager::MakeNewDocumentName()
	static int _bind_MakeNewDocumentName(lua_State *L) {
		if (!_lg_typecheck_MakeNewDocumentName(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxDocManager::MakeNewDocumentName() function, expected prototype:\nwxString wxDocManager::MakeNewDocumentName()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDocManager* self=Luna< wxObject >::checkSubType< wxDocManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxDocManager::MakeNewDocumentName(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->MakeNewDocumentName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxFileHistory * wxDocManager::OnCreateFileHistory()
	static int _bind_OnCreateFileHistory(lua_State *L) {
		if (!_lg_typecheck_OnCreateFileHistory(L)) {
			luaL_error(L, "luna typecheck failed in wxFileHistory * wxDocManager::OnCreateFileHistory() function, expected prototype:\nwxFileHistory * wxDocManager::OnCreateFileHistory()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDocManager* self=Luna< wxObject >::checkSubType< wxDocManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxFileHistory * wxDocManager::OnCreateFileHistory(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxFileHistory * lret = self->OnCreateFileHistory();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFileHistory >::push(L,lret,false);

		return 1;
	}

	// void wxDocManager::OnFileClose(wxCommandEvent & event)
	static int _bind_OnFileClose(lua_State *L) {
		if (!_lg_typecheck_OnFileClose(L)) {
			luaL_error(L, "luna typecheck failed in void wxDocManager::OnFileClose(wxCommandEvent & event) function, expected prototype:\nvoid wxDocManager::OnFileClose(wxCommandEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxCommandEvent* event_ptr=(Luna< wxObject >::checkSubType< wxCommandEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxDocManager::OnFileClose function");
		}
		wxCommandEvent & event=*event_ptr;

		wxDocManager* self=Luna< wxObject >::checkSubType< wxDocManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDocManager::OnFileClose(wxCommandEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OnFileClose(event);

		return 0;
	}

	// void wxDocManager::OnFileCloseAll(wxCommandEvent & event)
	static int _bind_OnFileCloseAll(lua_State *L) {
		if (!_lg_typecheck_OnFileCloseAll(L)) {
			luaL_error(L, "luna typecheck failed in void wxDocManager::OnFileCloseAll(wxCommandEvent & event) function, expected prototype:\nvoid wxDocManager::OnFileCloseAll(wxCommandEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxCommandEvent* event_ptr=(Luna< wxObject >::checkSubType< wxCommandEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxDocManager::OnFileCloseAll function");
		}
		wxCommandEvent & event=*event_ptr;

		wxDocManager* self=Luna< wxObject >::checkSubType< wxDocManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDocManager::OnFileCloseAll(wxCommandEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OnFileCloseAll(event);

		return 0;
	}

	// void wxDocManager::OnFileNew(wxCommandEvent & event)
	static int _bind_OnFileNew(lua_State *L) {
		if (!_lg_typecheck_OnFileNew(L)) {
			luaL_error(L, "luna typecheck failed in void wxDocManager::OnFileNew(wxCommandEvent & event) function, expected prototype:\nvoid wxDocManager::OnFileNew(wxCommandEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxCommandEvent* event_ptr=(Luna< wxObject >::checkSubType< wxCommandEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxDocManager::OnFileNew function");
		}
		wxCommandEvent & event=*event_ptr;

		wxDocManager* self=Luna< wxObject >::checkSubType< wxDocManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDocManager::OnFileNew(wxCommandEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OnFileNew(event);

		return 0;
	}

	// void wxDocManager::OnFileOpen(wxCommandEvent & event)
	static int _bind_OnFileOpen(lua_State *L) {
		if (!_lg_typecheck_OnFileOpen(L)) {
			luaL_error(L, "luna typecheck failed in void wxDocManager::OnFileOpen(wxCommandEvent & event) function, expected prototype:\nvoid wxDocManager::OnFileOpen(wxCommandEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxCommandEvent* event_ptr=(Luna< wxObject >::checkSubType< wxCommandEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxDocManager::OnFileOpen function");
		}
		wxCommandEvent & event=*event_ptr;

		wxDocManager* self=Luna< wxObject >::checkSubType< wxDocManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDocManager::OnFileOpen(wxCommandEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OnFileOpen(event);

		return 0;
	}

	// void wxDocManager::OnFileRevert(wxCommandEvent & event)
	static int _bind_OnFileRevert(lua_State *L) {
		if (!_lg_typecheck_OnFileRevert(L)) {
			luaL_error(L, "luna typecheck failed in void wxDocManager::OnFileRevert(wxCommandEvent & event) function, expected prototype:\nvoid wxDocManager::OnFileRevert(wxCommandEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxCommandEvent* event_ptr=(Luna< wxObject >::checkSubType< wxCommandEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxDocManager::OnFileRevert function");
		}
		wxCommandEvent & event=*event_ptr;

		wxDocManager* self=Luna< wxObject >::checkSubType< wxDocManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDocManager::OnFileRevert(wxCommandEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OnFileRevert(event);

		return 0;
	}

	// void wxDocManager::OnFileSave(wxCommandEvent & event)
	static int _bind_OnFileSave(lua_State *L) {
		if (!_lg_typecheck_OnFileSave(L)) {
			luaL_error(L, "luna typecheck failed in void wxDocManager::OnFileSave(wxCommandEvent & event) function, expected prototype:\nvoid wxDocManager::OnFileSave(wxCommandEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxCommandEvent* event_ptr=(Luna< wxObject >::checkSubType< wxCommandEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxDocManager::OnFileSave function");
		}
		wxCommandEvent & event=*event_ptr;

		wxDocManager* self=Luna< wxObject >::checkSubType< wxDocManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDocManager::OnFileSave(wxCommandEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OnFileSave(event);

		return 0;
	}

	// void wxDocManager::OnFileSaveAs(wxCommandEvent & event)
	static int _bind_OnFileSaveAs(lua_State *L) {
		if (!_lg_typecheck_OnFileSaveAs(L)) {
			luaL_error(L, "luna typecheck failed in void wxDocManager::OnFileSaveAs(wxCommandEvent & event) function, expected prototype:\nvoid wxDocManager::OnFileSaveAs(wxCommandEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxCommandEvent* event_ptr=(Luna< wxObject >::checkSubType< wxCommandEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxDocManager::OnFileSaveAs function");
		}
		wxCommandEvent & event=*event_ptr;

		wxDocManager* self=Luna< wxObject >::checkSubType< wxDocManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDocManager::OnFileSaveAs(wxCommandEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OnFileSaveAs(event);

		return 0;
	}

	// void wxDocManager::RemoveDocument(wxDocument * doc)
	static int _bind_RemoveDocument(lua_State *L) {
		if (!_lg_typecheck_RemoveDocument(L)) {
			luaL_error(L, "luna typecheck failed in void wxDocManager::RemoveDocument(wxDocument * doc) function, expected prototype:\nvoid wxDocManager::RemoveDocument(wxDocument * doc)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDocument* doc=(Luna< wxObject >::checkSubType< wxDocument >(L,2));

		wxDocManager* self=Luna< wxObject >::checkSubType< wxDocManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDocManager::RemoveDocument(wxDocument *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RemoveDocument(doc);

		return 0;
	}

	// void wxDocManager::SetLastDirectory(const wxString & dir)
	static int _bind_SetLastDirectory(lua_State *L) {
		if (!_lg_typecheck_SetLastDirectory(L)) {
			luaL_error(L, "luna typecheck failed in void wxDocManager::SetLastDirectory(const wxString & dir) function, expected prototype:\nvoid wxDocManager::SetLastDirectory(const wxString & dir)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString dir(lua_tostring(L,2),lua_objlen(L,2));

		wxDocManager* self=Luna< wxObject >::checkSubType< wxDocManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDocManager::SetLastDirectory(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetLastDirectory(dir);

		return 0;
	}

	// void wxDocManager::SetMaxDocsOpen(int n)
	static int _bind_SetMaxDocsOpen(lua_State *L) {
		if (!_lg_typecheck_SetMaxDocsOpen(L)) {
			luaL_error(L, "luna typecheck failed in void wxDocManager::SetMaxDocsOpen(int n) function, expected prototype:\nvoid wxDocManager::SetMaxDocsOpen(int n)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int n=(int)lua_tointeger(L,2);

		wxDocManager* self=Luna< wxObject >::checkSubType< wxDocManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDocManager::SetMaxDocsOpen(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetMaxDocsOpen(n);

		return 0;
	}

	// wxClassInfo * wxDocManager::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxDocManager::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxDocManager::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDocManager* self=Luna< wxObject >::checkSubType< wxDocManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxDocManager::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxDocManager::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// void wxDocManager::base_QueueEvent(wxEvent * event)
	static int _bind_base_QueueEvent(lua_State *L) {
		if (!_lg_typecheck_base_QueueEvent(L)) {
			luaL_error(L, "luna typecheck failed in void wxDocManager::base_QueueEvent(wxEvent * event) function, expected prototype:\nvoid wxDocManager::base_QueueEvent(wxEvent * event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvent* event=(Luna< wxObject >::checkSubType< wxEvent >(L,2));

		wxDocManager* self=Luna< wxObject >::checkSubType< wxDocManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDocManager::base_QueueEvent(wxEvent *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDocManager::QueueEvent(event);

		return 0;
	}

	// void wxDocManager::base_AddPendingEvent(const wxEvent & event)
	static int _bind_base_AddPendingEvent(lua_State *L) {
		if (!_lg_typecheck_base_AddPendingEvent(L)) {
			luaL_error(L, "luna typecheck failed in void wxDocManager::base_AddPendingEvent(const wxEvent & event) function, expected prototype:\nvoid wxDocManager::base_AddPendingEvent(const wxEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxEvent* event_ptr=(Luna< wxObject >::checkSubType< wxEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxDocManager::base_AddPendingEvent function");
		}
		const wxEvent & event=*event_ptr;

		wxDocManager* self=Luna< wxObject >::checkSubType< wxDocManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDocManager::base_AddPendingEvent(const wxEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDocManager::AddPendingEvent(event);

		return 0;
	}

	// bool wxDocManager::base_ProcessEvent(wxEvent & event)
	static int _bind_base_ProcessEvent(lua_State *L) {
		if (!_lg_typecheck_base_ProcessEvent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDocManager::base_ProcessEvent(wxEvent & event) function, expected prototype:\nbool wxDocManager::base_ProcessEvent(wxEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvent* event_ptr=(Luna< wxObject >::checkSubType< wxEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxDocManager::base_ProcessEvent function");
		}
		wxEvent & event=*event_ptr;

		wxDocManager* self=Luna< wxObject >::checkSubType< wxDocManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDocManager::base_ProcessEvent(wxEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDocManager::ProcessEvent(event);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDocManager::base_SetNextHandler(wxEvtHandler * handler)
	static int _bind_base_SetNextHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetNextHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxDocManager::base_SetNextHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxDocManager::base_SetNextHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxDocManager* self=Luna< wxObject >::checkSubType< wxDocManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDocManager::base_SetNextHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDocManager::SetNextHandler(handler);

		return 0;
	}

	// void wxDocManager::base_SetPreviousHandler(wxEvtHandler * handler)
	static int _bind_base_SetPreviousHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetPreviousHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxDocManager::base_SetPreviousHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxDocManager::base_SetPreviousHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxDocManager* self=Luna< wxObject >::checkSubType< wxDocManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDocManager::base_SetPreviousHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDocManager::SetPreviousHandler(handler);

		return 0;
	}

	// void wxDocManager::base_ActivateView(wxView * doc, bool activate = true)
	static int _bind_base_ActivateView(lua_State *L) {
		if (!_lg_typecheck_base_ActivateView(L)) {
			luaL_error(L, "luna typecheck failed in void wxDocManager::base_ActivateView(wxView * doc, bool activate = true) function, expected prototype:\nvoid wxDocManager::base_ActivateView(wxView * doc, bool activate = true)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxView* doc=(Luna< wxObject >::checkSubType< wxView >(L,2));
		bool activate=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		wxDocManager* self=Luna< wxObject >::checkSubType< wxDocManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDocManager::base_ActivateView(wxView *, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDocManager::ActivateView(doc, activate);

		return 0;
	}

	// void wxDocManager::base_AddFileToHistory(const wxString & filename)
	static int _bind_base_AddFileToHistory(lua_State *L) {
		if (!_lg_typecheck_base_AddFileToHistory(L)) {
			luaL_error(L, "luna typecheck failed in void wxDocManager::base_AddFileToHistory(const wxString & filename) function, expected prototype:\nvoid wxDocManager::base_AddFileToHistory(const wxString & filename)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString filename(lua_tostring(L,2),lua_objlen(L,2));

		wxDocManager* self=Luna< wxObject >::checkSubType< wxDocManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDocManager::base_AddFileToHistory(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDocManager::AddFileToHistory(filename);

		return 0;
	}

	// wxDocument * wxDocManager::base_CreateDocument(const wxString & path, long flags = 0)
	static int _bind_base_CreateDocument(lua_State *L) {
		if (!_lg_typecheck_base_CreateDocument(L)) {
			luaL_error(L, "luna typecheck failed in wxDocument * wxDocManager::base_CreateDocument(const wxString & path, long flags = 0) function, expected prototype:\nwxDocument * wxDocManager::base_CreateDocument(const wxString & path, long flags = 0)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString path(lua_tostring(L,2),lua_objlen(L,2));
		long flags=luatop>2 ? (long)lua_tonumber(L,3) : (long)0;

		wxDocManager* self=Luna< wxObject >::checkSubType< wxDocManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDocument * wxDocManager::base_CreateDocument(const wxString &, long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDocument * lret = self->wxDocManager::CreateDocument(path, flags);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDocument >::push(L,lret,false);

		return 1;
	}

	// wxView * wxDocManager::base_CreateView(wxDocument * doc, long flags = 0)
	static int _bind_base_CreateView(lua_State *L) {
		if (!_lg_typecheck_base_CreateView(L)) {
			luaL_error(L, "luna typecheck failed in wxView * wxDocManager::base_CreateView(wxDocument * doc, long flags = 0) function, expected prototype:\nwxView * wxDocManager::base_CreateView(wxDocument * doc, long flags = 0)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxDocument* doc=(Luna< wxObject >::checkSubType< wxDocument >(L,2));
		long flags=luatop>2 ? (long)lua_tonumber(L,3) : (long)0;

		wxDocManager* self=Luna< wxObject >::checkSubType< wxDocManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxView * wxDocManager::base_CreateView(wxDocument *, long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxView * lret = self->wxDocManager::CreateView(doc, flags);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxView >::push(L,lret,false);

		return 1;
	}

	// void wxDocManager::base_FileHistoryAddFilesToMenu()
	static int _bind_base_FileHistoryAddFilesToMenu_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_FileHistoryAddFilesToMenu_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxDocManager::base_FileHistoryAddFilesToMenu() function, expected prototype:\nvoid wxDocManager::base_FileHistoryAddFilesToMenu()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDocManager* self=Luna< wxObject >::checkSubType< wxDocManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDocManager::base_FileHistoryAddFilesToMenu(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDocManager::FileHistoryAddFilesToMenu();

		return 0;
	}

	// void wxDocManager::base_FileHistoryAddFilesToMenu(wxMenu * menu)
	static int _bind_base_FileHistoryAddFilesToMenu_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_FileHistoryAddFilesToMenu_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxDocManager::base_FileHistoryAddFilesToMenu(wxMenu * menu) function, expected prototype:\nvoid wxDocManager::base_FileHistoryAddFilesToMenu(wxMenu * menu)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxMenu* menu=(Luna< wxObject >::checkSubType< wxMenu >(L,2));

		wxDocManager* self=Luna< wxObject >::checkSubType< wxDocManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDocManager::base_FileHistoryAddFilesToMenu(wxMenu *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDocManager::FileHistoryAddFilesToMenu(menu);

		return 0;
	}

	// Overload binder for wxDocManager::base_FileHistoryAddFilesToMenu
	static int _bind_base_FileHistoryAddFilesToMenu(lua_State *L) {
		if (_lg_typecheck_base_FileHistoryAddFilesToMenu_overload_1(L)) return _bind_base_FileHistoryAddFilesToMenu_overload_1(L);
		if (_lg_typecheck_base_FileHistoryAddFilesToMenu_overload_2(L)) return _bind_base_FileHistoryAddFilesToMenu_overload_2(L);

		luaL_error(L, "error in function base_FileHistoryAddFilesToMenu, cannot match any of the overloads for function base_FileHistoryAddFilesToMenu:\n  base_FileHistoryAddFilesToMenu()\n  base_FileHistoryAddFilesToMenu(wxMenu *)\n");
		return 0;
	}

	// void wxDocManager::base_FileHistoryLoad(const wxConfigBase & config)
	static int _bind_base_FileHistoryLoad(lua_State *L) {
		if (!_lg_typecheck_base_FileHistoryLoad(L)) {
			luaL_error(L, "luna typecheck failed in void wxDocManager::base_FileHistoryLoad(const wxConfigBase & config) function, expected prototype:\nvoid wxDocManager::base_FileHistoryLoad(const wxConfigBase & config)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxConfigBase* config_ptr=(Luna< wxObject >::checkSubType< wxConfigBase >(L,2));
		if( !config_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg config in wxDocManager::base_FileHistoryLoad function");
		}
		const wxConfigBase & config=*config_ptr;

		wxDocManager* self=Luna< wxObject >::checkSubType< wxDocManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDocManager::base_FileHistoryLoad(const wxConfigBase &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDocManager::FileHistoryLoad(config);

		return 0;
	}

	// void wxDocManager::base_FileHistoryRemoveMenu(wxMenu * menu)
	static int _bind_base_FileHistoryRemoveMenu(lua_State *L) {
		if (!_lg_typecheck_base_FileHistoryRemoveMenu(L)) {
			luaL_error(L, "luna typecheck failed in void wxDocManager::base_FileHistoryRemoveMenu(wxMenu * menu) function, expected prototype:\nvoid wxDocManager::base_FileHistoryRemoveMenu(wxMenu * menu)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxMenu* menu=(Luna< wxObject >::checkSubType< wxMenu >(L,2));

		wxDocManager* self=Luna< wxObject >::checkSubType< wxDocManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDocManager::base_FileHistoryRemoveMenu(wxMenu *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDocManager::FileHistoryRemoveMenu(menu);

		return 0;
	}

	// void wxDocManager::base_FileHistorySave(wxConfigBase & resourceFile)
	static int _bind_base_FileHistorySave(lua_State *L) {
		if (!_lg_typecheck_base_FileHistorySave(L)) {
			luaL_error(L, "luna typecheck failed in void wxDocManager::base_FileHistorySave(wxConfigBase & resourceFile) function, expected prototype:\nvoid wxDocManager::base_FileHistorySave(wxConfigBase & resourceFile)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxConfigBase* resourceFile_ptr=(Luna< wxObject >::checkSubType< wxConfigBase >(L,2));
		if( !resourceFile_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg resourceFile in wxDocManager::base_FileHistorySave function");
		}
		wxConfigBase & resourceFile=*resourceFile_ptr;

		wxDocManager* self=Luna< wxObject >::checkSubType< wxDocManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDocManager::base_FileHistorySave(wxConfigBase &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDocManager::FileHistorySave(resourceFile);

		return 0;
	}

	// void wxDocManager::base_FileHistoryUseMenu(wxMenu * menu)
	static int _bind_base_FileHistoryUseMenu(lua_State *L) {
		if (!_lg_typecheck_base_FileHistoryUseMenu(L)) {
			luaL_error(L, "luna typecheck failed in void wxDocManager::base_FileHistoryUseMenu(wxMenu * menu) function, expected prototype:\nvoid wxDocManager::base_FileHistoryUseMenu(wxMenu * menu)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxMenu* menu=(Luna< wxObject >::checkSubType< wxMenu >(L,2));

		wxDocManager* self=Luna< wxObject >::checkSubType< wxDocManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDocManager::base_FileHistoryUseMenu(wxMenu *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDocManager::FileHistoryUseMenu(menu);

		return 0;
	}

	// wxDocTemplate * wxDocManager::base_FindTemplateForPath(const wxString & path)
	static int _bind_base_FindTemplateForPath(lua_State *L) {
		if (!_lg_typecheck_base_FindTemplateForPath(L)) {
			luaL_error(L, "luna typecheck failed in wxDocTemplate * wxDocManager::base_FindTemplateForPath(const wxString & path) function, expected prototype:\nwxDocTemplate * wxDocManager::base_FindTemplateForPath(const wxString & path)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString path(lua_tostring(L,2),lua_objlen(L,2));

		wxDocManager* self=Luna< wxObject >::checkSubType< wxDocManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDocTemplate * wxDocManager::base_FindTemplateForPath(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDocTemplate * lret = self->wxDocManager::FindTemplateForPath(path);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDocTemplate >::push(L,lret,false);

		return 1;
	}

	// wxView * wxDocManager::base_GetCurrentView() const
	static int _bind_base_GetCurrentView(lua_State *L) {
		if (!_lg_typecheck_base_GetCurrentView(L)) {
			luaL_error(L, "luna typecheck failed in wxView * wxDocManager::base_GetCurrentView() const function, expected prototype:\nwxView * wxDocManager::base_GetCurrentView() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDocManager* self=Luna< wxObject >::checkSubType< wxDocManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxView * wxDocManager::base_GetCurrentView() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxView * lret = self->wxDocManager::GetCurrentView();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxView >::push(L,lret,false);

		return 1;
	}

	// wxFileHistory * wxDocManager::base_GetFileHistory() const
	static int _bind_base_GetFileHistory(lua_State *L) {
		if (!_lg_typecheck_base_GetFileHistory(L)) {
			luaL_error(L, "luna typecheck failed in wxFileHistory * wxDocManager::base_GetFileHistory() const function, expected prototype:\nwxFileHistory * wxDocManager::base_GetFileHistory() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDocManager* self=Luna< wxObject >::checkSubType< wxDocManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxFileHistory * wxDocManager::base_GetFileHistory() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxFileHistory * lret = self->wxDocManager::GetFileHistory();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFileHistory >::push(L,lret,false);

		return 1;
	}

	// size_t wxDocManager::base_GetHistoryFilesCount() const
	static int _bind_base_GetHistoryFilesCount(lua_State *L) {
		if (!_lg_typecheck_base_GetHistoryFilesCount(L)) {
			luaL_error(L, "luna typecheck failed in size_t wxDocManager::base_GetHistoryFilesCount() const function, expected prototype:\nsize_t wxDocManager::base_GetHistoryFilesCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDocManager* self=Luna< wxObject >::checkSubType< wxDocManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call size_t wxDocManager::base_GetHistoryFilesCount() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		size_t lret = self->wxDocManager::GetHistoryFilesCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxDocManager::base_Initialize()
	static int _bind_base_Initialize(lua_State *L) {
		if (!_lg_typecheck_base_Initialize(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDocManager::base_Initialize() function, expected prototype:\nbool wxDocManager::base_Initialize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDocManager* self=Luna< wxObject >::checkSubType< wxDocManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDocManager::base_Initialize(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDocManager::Initialize();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxDocManager::base_MakeNewDocumentName()
	static int _bind_base_MakeNewDocumentName(lua_State *L) {
		if (!_lg_typecheck_base_MakeNewDocumentName(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxDocManager::base_MakeNewDocumentName() function, expected prototype:\nwxString wxDocManager::base_MakeNewDocumentName()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDocManager* self=Luna< wxObject >::checkSubType< wxDocManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxDocManager::base_MakeNewDocumentName(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxDocManager::MakeNewDocumentName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxFileHistory * wxDocManager::base_OnCreateFileHistory()
	static int _bind_base_OnCreateFileHistory(lua_State *L) {
		if (!_lg_typecheck_base_OnCreateFileHistory(L)) {
			luaL_error(L, "luna typecheck failed in wxFileHistory * wxDocManager::base_OnCreateFileHistory() function, expected prototype:\nwxFileHistory * wxDocManager::base_OnCreateFileHistory()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDocManager* self=Luna< wxObject >::checkSubType< wxDocManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxFileHistory * wxDocManager::base_OnCreateFileHistory(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxFileHistory * lret = self->wxDocManager::OnCreateFileHistory();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFileHistory >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxDocManager* LunaTraits< wxDocManager >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxDocManager::_bind_ctor(L);
}

void LunaTraits< wxDocManager >::_bind_dtor(wxDocManager* obj) {
	delete obj;
}

const char LunaTraits< wxDocManager >::className[] = "wxDocManager";
const char LunaTraits< wxDocManager >::fullName[] = "wxDocManager";
const char LunaTraits< wxDocManager >::moduleName[] = "wx";
const char* LunaTraits< wxDocManager >::parents[] = {"wx.wxEvtHandler", 0};
const int LunaTraits< wxDocManager >::hash = 90523669;
const int LunaTraits< wxDocManager >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxDocManager >::methods[] = {
	{"ActivateView", &luna_wrapper_wxDocManager::_bind_ActivateView},
	{"AddDocument", &luna_wrapper_wxDocManager::_bind_AddDocument},
	{"AddFileToHistory", &luna_wrapper_wxDocManager::_bind_AddFileToHistory},
	{"AssociateTemplate", &luna_wrapper_wxDocManager::_bind_AssociateTemplate},
	{"FindTemplate", &luna_wrapper_wxDocManager::_bind_FindTemplate},
	{"CloseDocument", &luna_wrapper_wxDocManager::_bind_CloseDocument},
	{"CloseDocuments", &luna_wrapper_wxDocManager::_bind_CloseDocuments},
	{"CreateDocument", &luna_wrapper_wxDocManager::_bind_CreateDocument},
	{"CreateNewDocument", &luna_wrapper_wxDocManager::_bind_CreateNewDocument},
	{"CreateView", &luna_wrapper_wxDocManager::_bind_CreateView},
	{"DisassociateTemplate", &luna_wrapper_wxDocManager::_bind_DisassociateTemplate},
	{"FileHistoryAddFilesToMenu", &luna_wrapper_wxDocManager::_bind_FileHistoryAddFilesToMenu},
	{"FileHistoryLoad", &luna_wrapper_wxDocManager::_bind_FileHistoryLoad},
	{"FileHistoryRemoveMenu", &luna_wrapper_wxDocManager::_bind_FileHistoryRemoveMenu},
	{"FileHistorySave", &luna_wrapper_wxDocManager::_bind_FileHistorySave},
	{"FileHistoryUseMenu", &luna_wrapper_wxDocManager::_bind_FileHistoryUseMenu},
	{"FindTemplateForPath", &luna_wrapper_wxDocManager::_bind_FindTemplateForPath},
	{"GetCurrentDocument", &luna_wrapper_wxDocManager::_bind_GetCurrentDocument},
	{"GetCurrentView", &luna_wrapper_wxDocManager::_bind_GetCurrentView},
	{"GetDocuments", &luna_wrapper_wxDocManager::_bind_GetDocuments},
	{"GetFileHistory", &luna_wrapper_wxDocManager::_bind_GetFileHistory},
	{"GetHistoryFilesCount", &luna_wrapper_wxDocManager::_bind_GetHistoryFilesCount},
	{"GetLastDirectory", &luna_wrapper_wxDocManager::_bind_GetLastDirectory},
	{"GetMaxDocsOpen", &luna_wrapper_wxDocManager::_bind_GetMaxDocsOpen},
	{"GetTemplates", &luna_wrapper_wxDocManager::_bind_GetTemplates},
	{"Initialize", &luna_wrapper_wxDocManager::_bind_Initialize},
	{"MakeNewDocumentName", &luna_wrapper_wxDocManager::_bind_MakeNewDocumentName},
	{"OnCreateFileHistory", &luna_wrapper_wxDocManager::_bind_OnCreateFileHistory},
	{"OnFileClose", &luna_wrapper_wxDocManager::_bind_OnFileClose},
	{"OnFileCloseAll", &luna_wrapper_wxDocManager::_bind_OnFileCloseAll},
	{"OnFileNew", &luna_wrapper_wxDocManager::_bind_OnFileNew},
	{"OnFileOpen", &luna_wrapper_wxDocManager::_bind_OnFileOpen},
	{"OnFileRevert", &luna_wrapper_wxDocManager::_bind_OnFileRevert},
	{"OnFileSave", &luna_wrapper_wxDocManager::_bind_OnFileSave},
	{"OnFileSaveAs", &luna_wrapper_wxDocManager::_bind_OnFileSaveAs},
	{"RemoveDocument", &luna_wrapper_wxDocManager::_bind_RemoveDocument},
	{"SetLastDirectory", &luna_wrapper_wxDocManager::_bind_SetLastDirectory},
	{"SetMaxDocsOpen", &luna_wrapper_wxDocManager::_bind_SetMaxDocsOpen},
	{"base_GetClassInfo", &luna_wrapper_wxDocManager::_bind_base_GetClassInfo},
	{"base_QueueEvent", &luna_wrapper_wxDocManager::_bind_base_QueueEvent},
	{"base_AddPendingEvent", &luna_wrapper_wxDocManager::_bind_base_AddPendingEvent},
	{"base_ProcessEvent", &luna_wrapper_wxDocManager::_bind_base_ProcessEvent},
	{"base_SetNextHandler", &luna_wrapper_wxDocManager::_bind_base_SetNextHandler},
	{"base_SetPreviousHandler", &luna_wrapper_wxDocManager::_bind_base_SetPreviousHandler},
	{"base_ActivateView", &luna_wrapper_wxDocManager::_bind_base_ActivateView},
	{"base_AddFileToHistory", &luna_wrapper_wxDocManager::_bind_base_AddFileToHistory},
	{"base_CreateDocument", &luna_wrapper_wxDocManager::_bind_base_CreateDocument},
	{"base_CreateView", &luna_wrapper_wxDocManager::_bind_base_CreateView},
	{"base_FileHistoryAddFilesToMenu", &luna_wrapper_wxDocManager::_bind_base_FileHistoryAddFilesToMenu},
	{"base_FileHistoryLoad", &luna_wrapper_wxDocManager::_bind_base_FileHistoryLoad},
	{"base_FileHistoryRemoveMenu", &luna_wrapper_wxDocManager::_bind_base_FileHistoryRemoveMenu},
	{"base_FileHistorySave", &luna_wrapper_wxDocManager::_bind_base_FileHistorySave},
	{"base_FileHistoryUseMenu", &luna_wrapper_wxDocManager::_bind_base_FileHistoryUseMenu},
	{"base_FindTemplateForPath", &luna_wrapper_wxDocManager::_bind_base_FindTemplateForPath},
	{"base_GetCurrentView", &luna_wrapper_wxDocManager::_bind_base_GetCurrentView},
	{"base_GetFileHistory", &luna_wrapper_wxDocManager::_bind_base_GetFileHistory},
	{"base_GetHistoryFilesCount", &luna_wrapper_wxDocManager::_bind_base_GetHistoryFilesCount},
	{"base_Initialize", &luna_wrapper_wxDocManager::_bind_base_Initialize},
	{"base_MakeNewDocumentName", &luna_wrapper_wxDocManager::_bind_base_MakeNewDocumentName},
	{"base_OnCreateFileHistory", &luna_wrapper_wxDocManager::_bind_base_OnCreateFileHistory},
	{"fromVoid", &luna_wrapper_wxDocManager::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxDocManager::_bind_asVoid},
	{"getTable", &luna_wrapper_wxDocManager::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxDocManager >::converters[] = {
	{"wxObject", &luna_wrapper_wxDocManager::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxDocManager >::enumValues[] = {
	{0,0}
};


