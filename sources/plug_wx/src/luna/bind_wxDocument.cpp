#include <plug_common.h>

#include <luna/wrappers/wrapper_wxDocument.h>

class luna_wrapper_wxDocument {
public:
	typedef Luna< wxDocument > luna_t;

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

		wxDocument* self= (wxDocument*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxDocument >::push(L,self,false);
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
		//wxDocument* ptr= dynamic_cast< wxDocument* >(Luna< wxObject >::check(L,1));
		wxDocument* ptr= luna_caster< wxObject, wxDocument >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxDocument >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( luatop>0 && (lua_isnil(L,1)==0 && !(Luna< wxObject >::checkSubType< wxDocument >(L,1)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxDocument >(L,2)) ) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_AddView(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AlreadySaved(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Close(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_DeleteAllViews(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_DeleteContents(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCommandProcessor(lua_State *L) {
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

	inline static bool _lg_typecheck_GetDocumentSaved(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetDocumentTemplate(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetDocumentWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFilename(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFirstView(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTitle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetUserReadableName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetViews_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetViews_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsChildDocument(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsModified(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Modify(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnChangedViewList(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_OnCloseDocument(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_OnCreate(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnCreateCommandProcessor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_OnNewDocument(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_OnOpenDocument(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnSaveDocument(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnSaveModified(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_RemoveView(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Save(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SaveAs(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Revert(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetCommandProcessor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDocumentName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDocumentTemplate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDocumentSaved(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFilename(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnChangeFilename(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetTitle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_UpdateAllViews(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
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

	inline static bool _lg_typecheck_base_AddView(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Close(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_DeleteAllViews(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_DeleteContents(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetCommandProcessor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetDocumentManager(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetDocumentTemplate(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetDocumentWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetUserReadableName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_IsModified(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Modify(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_OnChangedViewList(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_OnCloseDocument(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_OnCreate(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_OnCreateCommandProcessor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_OnNewDocument(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_OnOpenDocument(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_OnSaveDocument(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_OnSaveModified(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_RemoveView(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Save(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SaveAs(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Revert(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetCommandProcessor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetDocumentTemplate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_OnChangeFilename(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_UpdateAllViews(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxDocument::wxDocument(wxDocument * parent = NULL)
	static wxDocument* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxDocument::wxDocument(wxDocument * parent = NULL) function, expected prototype:\nwxDocument::wxDocument(wxDocument * parent = NULL)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxDocument* parent=luatop>0 ? (Luna< wxObject >::checkSubType< wxDocument >(L,1)) : (wxDocument*)NULL;

		return new wxDocument(parent);
	}

	// wxDocument::wxDocument(lua_Table * data, wxDocument * parent = NULL)
	static wxDocument* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxDocument::wxDocument(lua_Table * data, wxDocument * parent = NULL) function, expected prototype:\nwxDocument::wxDocument(lua_Table * data, wxDocument * parent = NULL)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxDocument* parent=luatop>1 ? (Luna< wxObject >::checkSubType< wxDocument >(L,2)) : (wxDocument*)NULL;

		return new wrapper_wxDocument(L,NULL, parent);
	}

	// Overload binder for wxDocument::wxDocument
	static wxDocument* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxDocument, cannot match any of the overloads for function wxDocument:\n  wxDocument(wxDocument *)\n  wxDocument(lua_Table *, wxDocument *)\n");
		return NULL;
	}


	// Function binds:
	// bool wxDocument::AddView(wxView * view)
	static int _bind_AddView(lua_State *L) {
		if (!_lg_typecheck_AddView(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDocument::AddView(wxView * view) function, expected prototype:\nbool wxDocument::AddView(wxView * view)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxView* view=(Luna< wxObject >::checkSubType< wxView >(L,2));

		wxDocument* self=Luna< wxObject >::checkSubType< wxDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDocument::AddView(wxView *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->AddView(view);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDocument::AlreadySaved() const
	static int _bind_AlreadySaved(lua_State *L) {
		if (!_lg_typecheck_AlreadySaved(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDocument::AlreadySaved() const function, expected prototype:\nbool wxDocument::AlreadySaved() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDocument* self=Luna< wxObject >::checkSubType< wxDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDocument::AlreadySaved() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->AlreadySaved();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDocument::Close()
	static int _bind_Close(lua_State *L) {
		if (!_lg_typecheck_Close(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDocument::Close() function, expected prototype:\nbool wxDocument::Close()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDocument* self=Luna< wxObject >::checkSubType< wxDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDocument::Close(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Close();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDocument::DeleteAllViews()
	static int _bind_DeleteAllViews(lua_State *L) {
		if (!_lg_typecheck_DeleteAllViews(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDocument::DeleteAllViews() function, expected prototype:\nbool wxDocument::DeleteAllViews()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDocument* self=Luna< wxObject >::checkSubType< wxDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDocument::DeleteAllViews(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->DeleteAllViews();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDocument::DeleteContents()
	static int _bind_DeleteContents(lua_State *L) {
		if (!_lg_typecheck_DeleteContents(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDocument::DeleteContents() function, expected prototype:\nbool wxDocument::DeleteContents()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDocument* self=Luna< wxObject >::checkSubType< wxDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDocument::DeleteContents(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->DeleteContents();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxCommandProcessor * wxDocument::GetCommandProcessor() const
	static int _bind_GetCommandProcessor(lua_State *L) {
		if (!_lg_typecheck_GetCommandProcessor(L)) {
			luaL_error(L, "luna typecheck failed in wxCommandProcessor * wxDocument::GetCommandProcessor() const function, expected prototype:\nwxCommandProcessor * wxDocument::GetCommandProcessor() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDocument* self=Luna< wxObject >::checkSubType< wxDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxCommandProcessor * wxDocument::GetCommandProcessor() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxCommandProcessor * lret = self->GetCommandProcessor();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxCommandProcessor >::push(L,lret,false);

		return 1;
	}

	// wxDocManager * wxDocument::GetDocumentManager() const
	static int _bind_GetDocumentManager(lua_State *L) {
		if (!_lg_typecheck_GetDocumentManager(L)) {
			luaL_error(L, "luna typecheck failed in wxDocManager * wxDocument::GetDocumentManager() const function, expected prototype:\nwxDocManager * wxDocument::GetDocumentManager() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDocument* self=Luna< wxObject >::checkSubType< wxDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDocManager * wxDocument::GetDocumentManager() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDocManager * lret = self->GetDocumentManager();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDocManager >::push(L,lret,false);

		return 1;
	}

	// wxString wxDocument::GetDocumentName() const
	static int _bind_GetDocumentName(lua_State *L) {
		if (!_lg_typecheck_GetDocumentName(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxDocument::GetDocumentName() const function, expected prototype:\nwxString wxDocument::GetDocumentName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDocument* self=Luna< wxObject >::checkSubType< wxDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxDocument::GetDocumentName() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetDocumentName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool wxDocument::GetDocumentSaved() const
	static int _bind_GetDocumentSaved(lua_State *L) {
		if (!_lg_typecheck_GetDocumentSaved(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDocument::GetDocumentSaved() const function, expected prototype:\nbool wxDocument::GetDocumentSaved() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDocument* self=Luna< wxObject >::checkSubType< wxDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDocument::GetDocumentSaved() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GetDocumentSaved();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxDocTemplate * wxDocument::GetDocumentTemplate() const
	static int _bind_GetDocumentTemplate(lua_State *L) {
		if (!_lg_typecheck_GetDocumentTemplate(L)) {
			luaL_error(L, "luna typecheck failed in wxDocTemplate * wxDocument::GetDocumentTemplate() const function, expected prototype:\nwxDocTemplate * wxDocument::GetDocumentTemplate() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDocument* self=Luna< wxObject >::checkSubType< wxDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDocTemplate * wxDocument::GetDocumentTemplate() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDocTemplate * lret = self->GetDocumentTemplate();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDocTemplate >::push(L,lret,false);

		return 1;
	}

	// wxWindow * wxDocument::GetDocumentWindow() const
	static int _bind_GetDocumentWindow(lua_State *L) {
		if (!_lg_typecheck_GetDocumentWindow(L)) {
			luaL_error(L, "luna typecheck failed in wxWindow * wxDocument::GetDocumentWindow() const function, expected prototype:\nwxWindow * wxDocument::GetDocumentWindow() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDocument* self=Luna< wxObject >::checkSubType< wxDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxWindow * wxDocument::GetDocumentWindow() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxWindow * lret = self->GetDocumentWindow();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// wxString wxDocument::GetFilename() const
	static int _bind_GetFilename(lua_State *L) {
		if (!_lg_typecheck_GetFilename(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxDocument::GetFilename() const function, expected prototype:\nwxString wxDocument::GetFilename() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDocument* self=Luna< wxObject >::checkSubType< wxDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxDocument::GetFilename() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetFilename();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxView * wxDocument::GetFirstView() const
	static int _bind_GetFirstView(lua_State *L) {
		if (!_lg_typecheck_GetFirstView(L)) {
			luaL_error(L, "luna typecheck failed in wxView * wxDocument::GetFirstView() const function, expected prototype:\nwxView * wxDocument::GetFirstView() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDocument* self=Luna< wxObject >::checkSubType< wxDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxView * wxDocument::GetFirstView() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxView * lret = self->GetFirstView();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxView >::push(L,lret,false);

		return 1;
	}

	// wxString wxDocument::GetTitle() const
	static int _bind_GetTitle(lua_State *L) {
		if (!_lg_typecheck_GetTitle(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxDocument::GetTitle() const function, expected prototype:\nwxString wxDocument::GetTitle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDocument* self=Luna< wxObject >::checkSubType< wxDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxDocument::GetTitle() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetTitle();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxDocument::GetUserReadableName() const
	static int _bind_GetUserReadableName(lua_State *L) {
		if (!_lg_typecheck_GetUserReadableName(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxDocument::GetUserReadableName() const function, expected prototype:\nwxString wxDocument::GetUserReadableName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDocument* self=Luna< wxObject >::checkSubType< wxDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxDocument::GetUserReadableName() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetUserReadableName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxList & wxDocument::GetViews()
	static int _bind_GetViews_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetViews_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxList & wxDocument::GetViews() function, expected prototype:\nwxList & wxDocument::GetViews()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDocument* self=Luna< wxObject >::checkSubType< wxDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxList & wxDocument::GetViews(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxList* lret = &self->GetViews();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxList >::push(L,lret,false);

		return 1;
	}

	// const wxList & wxDocument::GetViews() const
	static int _bind_GetViews_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetViews_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const wxList & wxDocument::GetViews() const function, expected prototype:\nconst wxList & wxDocument::GetViews() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDocument* self=Luna< wxObject >::checkSubType< wxDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxList & wxDocument::GetViews() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxList* lret = &self->GetViews();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxList >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxDocument::GetViews
	static int _bind_GetViews(lua_State *L) {
		if (_lg_typecheck_GetViews_overload_1(L)) return _bind_GetViews_overload_1(L);
		if (_lg_typecheck_GetViews_overload_2(L)) return _bind_GetViews_overload_2(L);

		luaL_error(L, "error in function GetViews, cannot match any of the overloads for function GetViews:\n  GetViews()\n  GetViews()\n");
		return 0;
	}

	// bool wxDocument::IsChildDocument() const
	static int _bind_IsChildDocument(lua_State *L) {
		if (!_lg_typecheck_IsChildDocument(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDocument::IsChildDocument() const function, expected prototype:\nbool wxDocument::IsChildDocument() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDocument* self=Luna< wxObject >::checkSubType< wxDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDocument::IsChildDocument() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsChildDocument();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDocument::IsModified() const
	static int _bind_IsModified(lua_State *L) {
		if (!_lg_typecheck_IsModified(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDocument::IsModified() const function, expected prototype:\nbool wxDocument::IsModified() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDocument* self=Luna< wxObject >::checkSubType< wxDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDocument::IsModified() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsModified();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDocument::Modify(bool modify)
	static int _bind_Modify(lua_State *L) {
		if (!_lg_typecheck_Modify(L)) {
			luaL_error(L, "luna typecheck failed in void wxDocument::Modify(bool modify) function, expected prototype:\nvoid wxDocument::Modify(bool modify)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool modify=(bool)(lua_toboolean(L,2)==1);

		wxDocument* self=Luna< wxObject >::checkSubType< wxDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDocument::Modify(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Modify(modify);

		return 0;
	}

	// void wxDocument::OnChangedViewList()
	static int _bind_OnChangedViewList(lua_State *L) {
		if (!_lg_typecheck_OnChangedViewList(L)) {
			luaL_error(L, "luna typecheck failed in void wxDocument::OnChangedViewList() function, expected prototype:\nvoid wxDocument::OnChangedViewList()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDocument* self=Luna< wxObject >::checkSubType< wxDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDocument::OnChangedViewList(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OnChangedViewList();

		return 0;
	}

	// bool wxDocument::OnCloseDocument()
	static int _bind_OnCloseDocument(lua_State *L) {
		if (!_lg_typecheck_OnCloseDocument(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDocument::OnCloseDocument() function, expected prototype:\nbool wxDocument::OnCloseDocument()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDocument* self=Luna< wxObject >::checkSubType< wxDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDocument::OnCloseDocument(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->OnCloseDocument();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDocument::OnCreate(const wxString & path, long flags)
	static int _bind_OnCreate(lua_State *L) {
		if (!_lg_typecheck_OnCreate(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDocument::OnCreate(const wxString & path, long flags) function, expected prototype:\nbool wxDocument::OnCreate(const wxString & path, long flags)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString path(lua_tostring(L,2),lua_objlen(L,2));
		long flags=(long)lua_tonumber(L,3);

		wxDocument* self=Luna< wxObject >::checkSubType< wxDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDocument::OnCreate(const wxString &, long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->OnCreate(path, flags);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxCommandProcessor * wxDocument::OnCreateCommandProcessor()
	static int _bind_OnCreateCommandProcessor(lua_State *L) {
		if (!_lg_typecheck_OnCreateCommandProcessor(L)) {
			luaL_error(L, "luna typecheck failed in wxCommandProcessor * wxDocument::OnCreateCommandProcessor() function, expected prototype:\nwxCommandProcessor * wxDocument::OnCreateCommandProcessor()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDocument* self=Luna< wxObject >::checkSubType< wxDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxCommandProcessor * wxDocument::OnCreateCommandProcessor(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxCommandProcessor * lret = self->OnCreateCommandProcessor();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxCommandProcessor >::push(L,lret,false);

		return 1;
	}

	// bool wxDocument::OnNewDocument()
	static int _bind_OnNewDocument(lua_State *L) {
		if (!_lg_typecheck_OnNewDocument(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDocument::OnNewDocument() function, expected prototype:\nbool wxDocument::OnNewDocument()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDocument* self=Luna< wxObject >::checkSubType< wxDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDocument::OnNewDocument(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->OnNewDocument();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDocument::OnOpenDocument(const wxString & filename)
	static int _bind_OnOpenDocument(lua_State *L) {
		if (!_lg_typecheck_OnOpenDocument(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDocument::OnOpenDocument(const wxString & filename) function, expected prototype:\nbool wxDocument::OnOpenDocument(const wxString & filename)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString filename(lua_tostring(L,2),lua_objlen(L,2));

		wxDocument* self=Luna< wxObject >::checkSubType< wxDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDocument::OnOpenDocument(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->OnOpenDocument(filename);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDocument::OnSaveDocument(const wxString & filename)
	static int _bind_OnSaveDocument(lua_State *L) {
		if (!_lg_typecheck_OnSaveDocument(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDocument::OnSaveDocument(const wxString & filename) function, expected prototype:\nbool wxDocument::OnSaveDocument(const wxString & filename)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString filename(lua_tostring(L,2),lua_objlen(L,2));

		wxDocument* self=Luna< wxObject >::checkSubType< wxDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDocument::OnSaveDocument(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->OnSaveDocument(filename);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDocument::OnSaveModified()
	static int _bind_OnSaveModified(lua_State *L) {
		if (!_lg_typecheck_OnSaveModified(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDocument::OnSaveModified() function, expected prototype:\nbool wxDocument::OnSaveModified()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDocument* self=Luna< wxObject >::checkSubType< wxDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDocument::OnSaveModified(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->OnSaveModified();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDocument::RemoveView(wxView * view)
	static int _bind_RemoveView(lua_State *L) {
		if (!_lg_typecheck_RemoveView(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDocument::RemoveView(wxView * view) function, expected prototype:\nbool wxDocument::RemoveView(wxView * view)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxView* view=(Luna< wxObject >::checkSubType< wxView >(L,2));

		wxDocument* self=Luna< wxObject >::checkSubType< wxDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDocument::RemoveView(wxView *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->RemoveView(view);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDocument::Save()
	static int _bind_Save(lua_State *L) {
		if (!_lg_typecheck_Save(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDocument::Save() function, expected prototype:\nbool wxDocument::Save()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDocument* self=Luna< wxObject >::checkSubType< wxDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDocument::Save(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Save();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDocument::SaveAs()
	static int _bind_SaveAs(lua_State *L) {
		if (!_lg_typecheck_SaveAs(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDocument::SaveAs() function, expected prototype:\nbool wxDocument::SaveAs()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDocument* self=Luna< wxObject >::checkSubType< wxDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDocument::SaveAs(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SaveAs();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDocument::Revert()
	static int _bind_Revert(lua_State *L) {
		if (!_lg_typecheck_Revert(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDocument::Revert() function, expected prototype:\nbool wxDocument::Revert()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDocument* self=Luna< wxObject >::checkSubType< wxDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDocument::Revert(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Revert();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDocument::SetCommandProcessor(wxCommandProcessor * processor)
	static int _bind_SetCommandProcessor(lua_State *L) {
		if (!_lg_typecheck_SetCommandProcessor(L)) {
			luaL_error(L, "luna typecheck failed in void wxDocument::SetCommandProcessor(wxCommandProcessor * processor) function, expected prototype:\nvoid wxDocument::SetCommandProcessor(wxCommandProcessor * processor)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxCommandProcessor* processor=(Luna< wxObject >::checkSubType< wxCommandProcessor >(L,2));

		wxDocument* self=Luna< wxObject >::checkSubType< wxDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDocument::SetCommandProcessor(wxCommandProcessor *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetCommandProcessor(processor);

		return 0;
	}

	// void wxDocument::SetDocumentName(const wxString & name)
	static int _bind_SetDocumentName(lua_State *L) {
		if (!_lg_typecheck_SetDocumentName(L)) {
			luaL_error(L, "luna typecheck failed in void wxDocument::SetDocumentName(const wxString & name) function, expected prototype:\nvoid wxDocument::SetDocumentName(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxDocument* self=Luna< wxObject >::checkSubType< wxDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDocument::SetDocumentName(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetDocumentName(name);

		return 0;
	}

	// void wxDocument::SetDocumentTemplate(wxDocTemplate * templ)
	static int _bind_SetDocumentTemplate(lua_State *L) {
		if (!_lg_typecheck_SetDocumentTemplate(L)) {
			luaL_error(L, "luna typecheck failed in void wxDocument::SetDocumentTemplate(wxDocTemplate * templ) function, expected prototype:\nvoid wxDocument::SetDocumentTemplate(wxDocTemplate * templ)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDocTemplate* templ=(Luna< wxObject >::checkSubType< wxDocTemplate >(L,2));

		wxDocument* self=Luna< wxObject >::checkSubType< wxDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDocument::SetDocumentTemplate(wxDocTemplate *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetDocumentTemplate(templ);

		return 0;
	}

	// void wxDocument::SetDocumentSaved(bool saved = true)
	static int _bind_SetDocumentSaved(lua_State *L) {
		if (!_lg_typecheck_SetDocumentSaved(L)) {
			luaL_error(L, "luna typecheck failed in void wxDocument::SetDocumentSaved(bool saved = true) function, expected prototype:\nvoid wxDocument::SetDocumentSaved(bool saved = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool saved=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxDocument* self=Luna< wxObject >::checkSubType< wxDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDocument::SetDocumentSaved(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetDocumentSaved(saved);

		return 0;
	}

	// void wxDocument::SetFilename(const wxString & filename, bool notifyViews = false)
	static int _bind_SetFilename(lua_State *L) {
		if (!_lg_typecheck_SetFilename(L)) {
			luaL_error(L, "luna typecheck failed in void wxDocument::SetFilename(const wxString & filename, bool notifyViews = false) function, expected prototype:\nvoid wxDocument::SetFilename(const wxString & filename, bool notifyViews = false)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString filename(lua_tostring(L,2),lua_objlen(L,2));
		bool notifyViews=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)false;

		wxDocument* self=Luna< wxObject >::checkSubType< wxDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDocument::SetFilename(const wxString &, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetFilename(filename, notifyViews);

		return 0;
	}

	// void wxDocument::OnChangeFilename(bool notifyViews)
	static int _bind_OnChangeFilename(lua_State *L) {
		if (!_lg_typecheck_OnChangeFilename(L)) {
			luaL_error(L, "luna typecheck failed in void wxDocument::OnChangeFilename(bool notifyViews) function, expected prototype:\nvoid wxDocument::OnChangeFilename(bool notifyViews)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool notifyViews=(bool)(lua_toboolean(L,2)==1);

		wxDocument* self=Luna< wxObject >::checkSubType< wxDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDocument::OnChangeFilename(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OnChangeFilename(notifyViews);

		return 0;
	}

	// void wxDocument::SetTitle(const wxString & title)
	static int _bind_SetTitle(lua_State *L) {
		if (!_lg_typecheck_SetTitle(L)) {
			luaL_error(L, "luna typecheck failed in void wxDocument::SetTitle(const wxString & title) function, expected prototype:\nvoid wxDocument::SetTitle(const wxString & title)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString title(lua_tostring(L,2),lua_objlen(L,2));

		wxDocument* self=Luna< wxObject >::checkSubType< wxDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDocument::SetTitle(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetTitle(title);

		return 0;
	}

	// void wxDocument::UpdateAllViews(wxView * sender = NULL, wxObject * hint = NULL)
	static int _bind_UpdateAllViews(lua_State *L) {
		if (!_lg_typecheck_UpdateAllViews(L)) {
			luaL_error(L, "luna typecheck failed in void wxDocument::UpdateAllViews(wxView * sender = NULL, wxObject * hint = NULL) function, expected prototype:\nvoid wxDocument::UpdateAllViews(wxView * sender = NULL, wxObject * hint = NULL)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxView* sender=luatop>1 ? (Luna< wxObject >::checkSubType< wxView >(L,2)) : (wxView*)NULL;
		wxObject* hint=luatop>2 ? (Luna< wxObject >::check(L,3)) : (wxObject*)NULL;

		wxDocument* self=Luna< wxObject >::checkSubType< wxDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDocument::UpdateAllViews(wxView *, wxObject *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->UpdateAllViews(sender, hint);

		return 0;
	}

	// wxClassInfo * wxDocument::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxDocument::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxDocument::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDocument* self=Luna< wxObject >::checkSubType< wxDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxDocument::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxDocument::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// void wxDocument::base_QueueEvent(wxEvent * event)
	static int _bind_base_QueueEvent(lua_State *L) {
		if (!_lg_typecheck_base_QueueEvent(L)) {
			luaL_error(L, "luna typecheck failed in void wxDocument::base_QueueEvent(wxEvent * event) function, expected prototype:\nvoid wxDocument::base_QueueEvent(wxEvent * event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvent* event=(Luna< wxObject >::checkSubType< wxEvent >(L,2));

		wxDocument* self=Luna< wxObject >::checkSubType< wxDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDocument::base_QueueEvent(wxEvent *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDocument::QueueEvent(event);

		return 0;
	}

	// void wxDocument::base_AddPendingEvent(const wxEvent & event)
	static int _bind_base_AddPendingEvent(lua_State *L) {
		if (!_lg_typecheck_base_AddPendingEvent(L)) {
			luaL_error(L, "luna typecheck failed in void wxDocument::base_AddPendingEvent(const wxEvent & event) function, expected prototype:\nvoid wxDocument::base_AddPendingEvent(const wxEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxEvent* event_ptr=(Luna< wxObject >::checkSubType< wxEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxDocument::base_AddPendingEvent function");
		}
		const wxEvent & event=*event_ptr;

		wxDocument* self=Luna< wxObject >::checkSubType< wxDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDocument::base_AddPendingEvent(const wxEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDocument::AddPendingEvent(event);

		return 0;
	}

	// bool wxDocument::base_ProcessEvent(wxEvent & event)
	static int _bind_base_ProcessEvent(lua_State *L) {
		if (!_lg_typecheck_base_ProcessEvent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDocument::base_ProcessEvent(wxEvent & event) function, expected prototype:\nbool wxDocument::base_ProcessEvent(wxEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvent* event_ptr=(Luna< wxObject >::checkSubType< wxEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxDocument::base_ProcessEvent function");
		}
		wxEvent & event=*event_ptr;

		wxDocument* self=Luna< wxObject >::checkSubType< wxDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDocument::base_ProcessEvent(wxEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDocument::ProcessEvent(event);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDocument::base_SetNextHandler(wxEvtHandler * handler)
	static int _bind_base_SetNextHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetNextHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxDocument::base_SetNextHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxDocument::base_SetNextHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxDocument* self=Luna< wxObject >::checkSubType< wxDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDocument::base_SetNextHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDocument::SetNextHandler(handler);

		return 0;
	}

	// void wxDocument::base_SetPreviousHandler(wxEvtHandler * handler)
	static int _bind_base_SetPreviousHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetPreviousHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxDocument::base_SetPreviousHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxDocument::base_SetPreviousHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxDocument* self=Luna< wxObject >::checkSubType< wxDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDocument::base_SetPreviousHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDocument::SetPreviousHandler(handler);

		return 0;
	}

	// bool wxDocument::base_AddView(wxView * view)
	static int _bind_base_AddView(lua_State *L) {
		if (!_lg_typecheck_base_AddView(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDocument::base_AddView(wxView * view) function, expected prototype:\nbool wxDocument::base_AddView(wxView * view)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxView* view=(Luna< wxObject >::checkSubType< wxView >(L,2));

		wxDocument* self=Luna< wxObject >::checkSubType< wxDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDocument::base_AddView(wxView *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDocument::AddView(view);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDocument::base_Close()
	static int _bind_base_Close(lua_State *L) {
		if (!_lg_typecheck_base_Close(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDocument::base_Close() function, expected prototype:\nbool wxDocument::base_Close()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDocument* self=Luna< wxObject >::checkSubType< wxDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDocument::base_Close(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDocument::Close();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDocument::base_DeleteAllViews()
	static int _bind_base_DeleteAllViews(lua_State *L) {
		if (!_lg_typecheck_base_DeleteAllViews(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDocument::base_DeleteAllViews() function, expected prototype:\nbool wxDocument::base_DeleteAllViews()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDocument* self=Luna< wxObject >::checkSubType< wxDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDocument::base_DeleteAllViews(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDocument::DeleteAllViews();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDocument::base_DeleteContents()
	static int _bind_base_DeleteContents(lua_State *L) {
		if (!_lg_typecheck_base_DeleteContents(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDocument::base_DeleteContents() function, expected prototype:\nbool wxDocument::base_DeleteContents()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDocument* self=Luna< wxObject >::checkSubType< wxDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDocument::base_DeleteContents(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDocument::DeleteContents();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxCommandProcessor * wxDocument::base_GetCommandProcessor() const
	static int _bind_base_GetCommandProcessor(lua_State *L) {
		if (!_lg_typecheck_base_GetCommandProcessor(L)) {
			luaL_error(L, "luna typecheck failed in wxCommandProcessor * wxDocument::base_GetCommandProcessor() const function, expected prototype:\nwxCommandProcessor * wxDocument::base_GetCommandProcessor() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDocument* self=Luna< wxObject >::checkSubType< wxDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxCommandProcessor * wxDocument::base_GetCommandProcessor() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxCommandProcessor * lret = self->wxDocument::GetCommandProcessor();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxCommandProcessor >::push(L,lret,false);

		return 1;
	}

	// wxDocManager * wxDocument::base_GetDocumentManager() const
	static int _bind_base_GetDocumentManager(lua_State *L) {
		if (!_lg_typecheck_base_GetDocumentManager(L)) {
			luaL_error(L, "luna typecheck failed in wxDocManager * wxDocument::base_GetDocumentManager() const function, expected prototype:\nwxDocManager * wxDocument::base_GetDocumentManager() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDocument* self=Luna< wxObject >::checkSubType< wxDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDocManager * wxDocument::base_GetDocumentManager() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDocManager * lret = self->wxDocument::GetDocumentManager();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDocManager >::push(L,lret,false);

		return 1;
	}

	// wxDocTemplate * wxDocument::base_GetDocumentTemplate() const
	static int _bind_base_GetDocumentTemplate(lua_State *L) {
		if (!_lg_typecheck_base_GetDocumentTemplate(L)) {
			luaL_error(L, "luna typecheck failed in wxDocTemplate * wxDocument::base_GetDocumentTemplate() const function, expected prototype:\nwxDocTemplate * wxDocument::base_GetDocumentTemplate() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDocument* self=Luna< wxObject >::checkSubType< wxDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDocTemplate * wxDocument::base_GetDocumentTemplate() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDocTemplate * lret = self->wxDocument::GetDocumentTemplate();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDocTemplate >::push(L,lret,false);

		return 1;
	}

	// wxWindow * wxDocument::base_GetDocumentWindow() const
	static int _bind_base_GetDocumentWindow(lua_State *L) {
		if (!_lg_typecheck_base_GetDocumentWindow(L)) {
			luaL_error(L, "luna typecheck failed in wxWindow * wxDocument::base_GetDocumentWindow() const function, expected prototype:\nwxWindow * wxDocument::base_GetDocumentWindow() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDocument* self=Luna< wxObject >::checkSubType< wxDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxWindow * wxDocument::base_GetDocumentWindow() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxWindow * lret = self->wxDocument::GetDocumentWindow();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// wxString wxDocument::base_GetUserReadableName() const
	static int _bind_base_GetUserReadableName(lua_State *L) {
		if (!_lg_typecheck_base_GetUserReadableName(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxDocument::base_GetUserReadableName() const function, expected prototype:\nwxString wxDocument::base_GetUserReadableName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDocument* self=Luna< wxObject >::checkSubType< wxDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxDocument::base_GetUserReadableName() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxDocument::GetUserReadableName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool wxDocument::base_IsModified() const
	static int _bind_base_IsModified(lua_State *L) {
		if (!_lg_typecheck_base_IsModified(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDocument::base_IsModified() const function, expected prototype:\nbool wxDocument::base_IsModified() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDocument* self=Luna< wxObject >::checkSubType< wxDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDocument::base_IsModified() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDocument::IsModified();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDocument::base_Modify(bool modify)
	static int _bind_base_Modify(lua_State *L) {
		if (!_lg_typecheck_base_Modify(L)) {
			luaL_error(L, "luna typecheck failed in void wxDocument::base_Modify(bool modify) function, expected prototype:\nvoid wxDocument::base_Modify(bool modify)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool modify=(bool)(lua_toboolean(L,2)==1);

		wxDocument* self=Luna< wxObject >::checkSubType< wxDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDocument::base_Modify(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDocument::Modify(modify);

		return 0;
	}

	// void wxDocument::base_OnChangedViewList()
	static int _bind_base_OnChangedViewList(lua_State *L) {
		if (!_lg_typecheck_base_OnChangedViewList(L)) {
			luaL_error(L, "luna typecheck failed in void wxDocument::base_OnChangedViewList() function, expected prototype:\nvoid wxDocument::base_OnChangedViewList()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDocument* self=Luna< wxObject >::checkSubType< wxDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDocument::base_OnChangedViewList(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDocument::OnChangedViewList();

		return 0;
	}

	// bool wxDocument::base_OnCloseDocument()
	static int _bind_base_OnCloseDocument(lua_State *L) {
		if (!_lg_typecheck_base_OnCloseDocument(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDocument::base_OnCloseDocument() function, expected prototype:\nbool wxDocument::base_OnCloseDocument()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDocument* self=Luna< wxObject >::checkSubType< wxDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDocument::base_OnCloseDocument(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDocument::OnCloseDocument();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDocument::base_OnCreate(const wxString & path, long flags)
	static int _bind_base_OnCreate(lua_State *L) {
		if (!_lg_typecheck_base_OnCreate(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDocument::base_OnCreate(const wxString & path, long flags) function, expected prototype:\nbool wxDocument::base_OnCreate(const wxString & path, long flags)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString path(lua_tostring(L,2),lua_objlen(L,2));
		long flags=(long)lua_tonumber(L,3);

		wxDocument* self=Luna< wxObject >::checkSubType< wxDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDocument::base_OnCreate(const wxString &, long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDocument::OnCreate(path, flags);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxCommandProcessor * wxDocument::base_OnCreateCommandProcessor()
	static int _bind_base_OnCreateCommandProcessor(lua_State *L) {
		if (!_lg_typecheck_base_OnCreateCommandProcessor(L)) {
			luaL_error(L, "luna typecheck failed in wxCommandProcessor * wxDocument::base_OnCreateCommandProcessor() function, expected prototype:\nwxCommandProcessor * wxDocument::base_OnCreateCommandProcessor()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDocument* self=Luna< wxObject >::checkSubType< wxDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxCommandProcessor * wxDocument::base_OnCreateCommandProcessor(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxCommandProcessor * lret = self->wxDocument::OnCreateCommandProcessor();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxCommandProcessor >::push(L,lret,false);

		return 1;
	}

	// bool wxDocument::base_OnNewDocument()
	static int _bind_base_OnNewDocument(lua_State *L) {
		if (!_lg_typecheck_base_OnNewDocument(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDocument::base_OnNewDocument() function, expected prototype:\nbool wxDocument::base_OnNewDocument()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDocument* self=Luna< wxObject >::checkSubType< wxDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDocument::base_OnNewDocument(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDocument::OnNewDocument();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDocument::base_OnOpenDocument(const wxString & filename)
	static int _bind_base_OnOpenDocument(lua_State *L) {
		if (!_lg_typecheck_base_OnOpenDocument(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDocument::base_OnOpenDocument(const wxString & filename) function, expected prototype:\nbool wxDocument::base_OnOpenDocument(const wxString & filename)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString filename(lua_tostring(L,2),lua_objlen(L,2));

		wxDocument* self=Luna< wxObject >::checkSubType< wxDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDocument::base_OnOpenDocument(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDocument::OnOpenDocument(filename);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDocument::base_OnSaveDocument(const wxString & filename)
	static int _bind_base_OnSaveDocument(lua_State *L) {
		if (!_lg_typecheck_base_OnSaveDocument(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDocument::base_OnSaveDocument(const wxString & filename) function, expected prototype:\nbool wxDocument::base_OnSaveDocument(const wxString & filename)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString filename(lua_tostring(L,2),lua_objlen(L,2));

		wxDocument* self=Luna< wxObject >::checkSubType< wxDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDocument::base_OnSaveDocument(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDocument::OnSaveDocument(filename);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDocument::base_OnSaveModified()
	static int _bind_base_OnSaveModified(lua_State *L) {
		if (!_lg_typecheck_base_OnSaveModified(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDocument::base_OnSaveModified() function, expected prototype:\nbool wxDocument::base_OnSaveModified()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDocument* self=Luna< wxObject >::checkSubType< wxDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDocument::base_OnSaveModified(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDocument::OnSaveModified();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDocument::base_RemoveView(wxView * view)
	static int _bind_base_RemoveView(lua_State *L) {
		if (!_lg_typecheck_base_RemoveView(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDocument::base_RemoveView(wxView * view) function, expected prototype:\nbool wxDocument::base_RemoveView(wxView * view)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxView* view=(Luna< wxObject >::checkSubType< wxView >(L,2));

		wxDocument* self=Luna< wxObject >::checkSubType< wxDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDocument::base_RemoveView(wxView *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDocument::RemoveView(view);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDocument::base_Save()
	static int _bind_base_Save(lua_State *L) {
		if (!_lg_typecheck_base_Save(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDocument::base_Save() function, expected prototype:\nbool wxDocument::base_Save()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDocument* self=Luna< wxObject >::checkSubType< wxDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDocument::base_Save(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDocument::Save();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDocument::base_SaveAs()
	static int _bind_base_SaveAs(lua_State *L) {
		if (!_lg_typecheck_base_SaveAs(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDocument::base_SaveAs() function, expected prototype:\nbool wxDocument::base_SaveAs()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDocument* self=Luna< wxObject >::checkSubType< wxDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDocument::base_SaveAs(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDocument::SaveAs();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDocument::base_Revert()
	static int _bind_base_Revert(lua_State *L) {
		if (!_lg_typecheck_base_Revert(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDocument::base_Revert() function, expected prototype:\nbool wxDocument::base_Revert()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDocument* self=Luna< wxObject >::checkSubType< wxDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDocument::base_Revert(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDocument::Revert();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDocument::base_SetCommandProcessor(wxCommandProcessor * processor)
	static int _bind_base_SetCommandProcessor(lua_State *L) {
		if (!_lg_typecheck_base_SetCommandProcessor(L)) {
			luaL_error(L, "luna typecheck failed in void wxDocument::base_SetCommandProcessor(wxCommandProcessor * processor) function, expected prototype:\nvoid wxDocument::base_SetCommandProcessor(wxCommandProcessor * processor)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxCommandProcessor* processor=(Luna< wxObject >::checkSubType< wxCommandProcessor >(L,2));

		wxDocument* self=Luna< wxObject >::checkSubType< wxDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDocument::base_SetCommandProcessor(wxCommandProcessor *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDocument::SetCommandProcessor(processor);

		return 0;
	}

	// void wxDocument::base_SetDocumentTemplate(wxDocTemplate * templ)
	static int _bind_base_SetDocumentTemplate(lua_State *L) {
		if (!_lg_typecheck_base_SetDocumentTemplate(L)) {
			luaL_error(L, "luna typecheck failed in void wxDocument::base_SetDocumentTemplate(wxDocTemplate * templ) function, expected prototype:\nvoid wxDocument::base_SetDocumentTemplate(wxDocTemplate * templ)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDocTemplate* templ=(Luna< wxObject >::checkSubType< wxDocTemplate >(L,2));

		wxDocument* self=Luna< wxObject >::checkSubType< wxDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDocument::base_SetDocumentTemplate(wxDocTemplate *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDocument::SetDocumentTemplate(templ);

		return 0;
	}

	// void wxDocument::base_OnChangeFilename(bool notifyViews)
	static int _bind_base_OnChangeFilename(lua_State *L) {
		if (!_lg_typecheck_base_OnChangeFilename(L)) {
			luaL_error(L, "luna typecheck failed in void wxDocument::base_OnChangeFilename(bool notifyViews) function, expected prototype:\nvoid wxDocument::base_OnChangeFilename(bool notifyViews)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool notifyViews=(bool)(lua_toboolean(L,2)==1);

		wxDocument* self=Luna< wxObject >::checkSubType< wxDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDocument::base_OnChangeFilename(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDocument::OnChangeFilename(notifyViews);

		return 0;
	}

	// void wxDocument::base_UpdateAllViews(wxView * sender = NULL, wxObject * hint = NULL)
	static int _bind_base_UpdateAllViews(lua_State *L) {
		if (!_lg_typecheck_base_UpdateAllViews(L)) {
			luaL_error(L, "luna typecheck failed in void wxDocument::base_UpdateAllViews(wxView * sender = NULL, wxObject * hint = NULL) function, expected prototype:\nvoid wxDocument::base_UpdateAllViews(wxView * sender = NULL, wxObject * hint = NULL)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxView* sender=luatop>1 ? (Luna< wxObject >::checkSubType< wxView >(L,2)) : (wxView*)NULL;
		wxObject* hint=luatop>2 ? (Luna< wxObject >::check(L,3)) : (wxObject*)NULL;

		wxDocument* self=Luna< wxObject >::checkSubType< wxDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDocument::base_UpdateAllViews(wxView *, wxObject *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDocument::UpdateAllViews(sender, hint);

		return 0;
	}


	// Operator binds:

};

wxDocument* LunaTraits< wxDocument >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxDocument::_bind_ctor(L);
}

void LunaTraits< wxDocument >::_bind_dtor(wxDocument* obj) {
	delete obj;
}

const char LunaTraits< wxDocument >::className[] = "wxDocument";
const char LunaTraits< wxDocument >::fullName[] = "wxDocument";
const char LunaTraits< wxDocument >::moduleName[] = "wx";
const char* LunaTraits< wxDocument >::parents[] = {"wx.wxEvtHandler", 0};
const int LunaTraits< wxDocument >::hash = 11369723;
const int LunaTraits< wxDocument >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxDocument >::methods[] = {
	{"AddView", &luna_wrapper_wxDocument::_bind_AddView},
	{"AlreadySaved", &luna_wrapper_wxDocument::_bind_AlreadySaved},
	{"Close", &luna_wrapper_wxDocument::_bind_Close},
	{"DeleteAllViews", &luna_wrapper_wxDocument::_bind_DeleteAllViews},
	{"DeleteContents", &luna_wrapper_wxDocument::_bind_DeleteContents},
	{"GetCommandProcessor", &luna_wrapper_wxDocument::_bind_GetCommandProcessor},
	{"GetDocumentManager", &luna_wrapper_wxDocument::_bind_GetDocumentManager},
	{"GetDocumentName", &luna_wrapper_wxDocument::_bind_GetDocumentName},
	{"GetDocumentSaved", &luna_wrapper_wxDocument::_bind_GetDocumentSaved},
	{"GetDocumentTemplate", &luna_wrapper_wxDocument::_bind_GetDocumentTemplate},
	{"GetDocumentWindow", &luna_wrapper_wxDocument::_bind_GetDocumentWindow},
	{"GetFilename", &luna_wrapper_wxDocument::_bind_GetFilename},
	{"GetFirstView", &luna_wrapper_wxDocument::_bind_GetFirstView},
	{"GetTitle", &luna_wrapper_wxDocument::_bind_GetTitle},
	{"GetUserReadableName", &luna_wrapper_wxDocument::_bind_GetUserReadableName},
	{"GetViews", &luna_wrapper_wxDocument::_bind_GetViews},
	{"IsChildDocument", &luna_wrapper_wxDocument::_bind_IsChildDocument},
	{"IsModified", &luna_wrapper_wxDocument::_bind_IsModified},
	{"Modify", &luna_wrapper_wxDocument::_bind_Modify},
	{"OnChangedViewList", &luna_wrapper_wxDocument::_bind_OnChangedViewList},
	{"OnCloseDocument", &luna_wrapper_wxDocument::_bind_OnCloseDocument},
	{"OnCreate", &luna_wrapper_wxDocument::_bind_OnCreate},
	{"OnCreateCommandProcessor", &luna_wrapper_wxDocument::_bind_OnCreateCommandProcessor},
	{"OnNewDocument", &luna_wrapper_wxDocument::_bind_OnNewDocument},
	{"OnOpenDocument", &luna_wrapper_wxDocument::_bind_OnOpenDocument},
	{"OnSaveDocument", &luna_wrapper_wxDocument::_bind_OnSaveDocument},
	{"OnSaveModified", &luna_wrapper_wxDocument::_bind_OnSaveModified},
	{"RemoveView", &luna_wrapper_wxDocument::_bind_RemoveView},
	{"Save", &luna_wrapper_wxDocument::_bind_Save},
	{"SaveAs", &luna_wrapper_wxDocument::_bind_SaveAs},
	{"Revert", &luna_wrapper_wxDocument::_bind_Revert},
	{"SetCommandProcessor", &luna_wrapper_wxDocument::_bind_SetCommandProcessor},
	{"SetDocumentName", &luna_wrapper_wxDocument::_bind_SetDocumentName},
	{"SetDocumentTemplate", &luna_wrapper_wxDocument::_bind_SetDocumentTemplate},
	{"SetDocumentSaved", &luna_wrapper_wxDocument::_bind_SetDocumentSaved},
	{"SetFilename", &luna_wrapper_wxDocument::_bind_SetFilename},
	{"OnChangeFilename", &luna_wrapper_wxDocument::_bind_OnChangeFilename},
	{"SetTitle", &luna_wrapper_wxDocument::_bind_SetTitle},
	{"UpdateAllViews", &luna_wrapper_wxDocument::_bind_UpdateAllViews},
	{"base_GetClassInfo", &luna_wrapper_wxDocument::_bind_base_GetClassInfo},
	{"base_QueueEvent", &luna_wrapper_wxDocument::_bind_base_QueueEvent},
	{"base_AddPendingEvent", &luna_wrapper_wxDocument::_bind_base_AddPendingEvent},
	{"base_ProcessEvent", &luna_wrapper_wxDocument::_bind_base_ProcessEvent},
	{"base_SetNextHandler", &luna_wrapper_wxDocument::_bind_base_SetNextHandler},
	{"base_SetPreviousHandler", &luna_wrapper_wxDocument::_bind_base_SetPreviousHandler},
	{"base_AddView", &luna_wrapper_wxDocument::_bind_base_AddView},
	{"base_Close", &luna_wrapper_wxDocument::_bind_base_Close},
	{"base_DeleteAllViews", &luna_wrapper_wxDocument::_bind_base_DeleteAllViews},
	{"base_DeleteContents", &luna_wrapper_wxDocument::_bind_base_DeleteContents},
	{"base_GetCommandProcessor", &luna_wrapper_wxDocument::_bind_base_GetCommandProcessor},
	{"base_GetDocumentManager", &luna_wrapper_wxDocument::_bind_base_GetDocumentManager},
	{"base_GetDocumentTemplate", &luna_wrapper_wxDocument::_bind_base_GetDocumentTemplate},
	{"base_GetDocumentWindow", &luna_wrapper_wxDocument::_bind_base_GetDocumentWindow},
	{"base_GetUserReadableName", &luna_wrapper_wxDocument::_bind_base_GetUserReadableName},
	{"base_IsModified", &luna_wrapper_wxDocument::_bind_base_IsModified},
	{"base_Modify", &luna_wrapper_wxDocument::_bind_base_Modify},
	{"base_OnChangedViewList", &luna_wrapper_wxDocument::_bind_base_OnChangedViewList},
	{"base_OnCloseDocument", &luna_wrapper_wxDocument::_bind_base_OnCloseDocument},
	{"base_OnCreate", &luna_wrapper_wxDocument::_bind_base_OnCreate},
	{"base_OnCreateCommandProcessor", &luna_wrapper_wxDocument::_bind_base_OnCreateCommandProcessor},
	{"base_OnNewDocument", &luna_wrapper_wxDocument::_bind_base_OnNewDocument},
	{"base_OnOpenDocument", &luna_wrapper_wxDocument::_bind_base_OnOpenDocument},
	{"base_OnSaveDocument", &luna_wrapper_wxDocument::_bind_base_OnSaveDocument},
	{"base_OnSaveModified", &luna_wrapper_wxDocument::_bind_base_OnSaveModified},
	{"base_RemoveView", &luna_wrapper_wxDocument::_bind_base_RemoveView},
	{"base_Save", &luna_wrapper_wxDocument::_bind_base_Save},
	{"base_SaveAs", &luna_wrapper_wxDocument::_bind_base_SaveAs},
	{"base_Revert", &luna_wrapper_wxDocument::_bind_base_Revert},
	{"base_SetCommandProcessor", &luna_wrapper_wxDocument::_bind_base_SetCommandProcessor},
	{"base_SetDocumentTemplate", &luna_wrapper_wxDocument::_bind_base_SetDocumentTemplate},
	{"base_OnChangeFilename", &luna_wrapper_wxDocument::_bind_base_OnChangeFilename},
	{"base_UpdateAllViews", &luna_wrapper_wxDocument::_bind_base_UpdateAllViews},
	{"fromVoid", &luna_wrapper_wxDocument::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxDocument::_bind_asVoid},
	{"getTable", &luna_wrapper_wxDocument::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxDocument >::converters[] = {
	{"wxObject", &luna_wrapper_wxDocument::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxDocument >::enumValues[] = {
	{0,0}
};


