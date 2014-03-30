#include <plug_common.h>

#include <luna/wrappers/wrapper_wxView.h>

class luna_wrapper_wxView {
public:
	typedef Luna< wxView > luna_t;

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

		wxView* self= (wxView*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxView >::push(L,self,false);
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
		//wxView* ptr= dynamic_cast< wxView* >(Luna< wxObject >::check(L,1));
		wxView* ptr= luna_caster< wxObject, wxView >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxView >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Activate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Close(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetDocument(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetDocumentManager(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFrame(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetViewName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_OnActivateView(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnChangeFilename(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_OnClose(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnClosingDocument(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_OnCreate(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnDraw(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnUpdate(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDocument(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFrame(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetViewName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
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

	inline static bool _lg_typecheck_base_Activate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Close(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_OnActivateView(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_OnChangeFilename(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_OnClose(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_OnClosingDocument(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_OnCreate(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_OnUpdate(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetDocument(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxView::wxView(lua_Table * data)
	static wxView* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxView::wxView(lua_Table * data) function, expected prototype:\nwxView::wxView(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxView(L,NULL);
	}


	// Function binds:
	// void wxView::Activate(bool activate)
	static int _bind_Activate(lua_State *L) {
		if (!_lg_typecheck_Activate(L)) {
			luaL_error(L, "luna typecheck failed in void wxView::Activate(bool activate) function, expected prototype:\nvoid wxView::Activate(bool activate)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool activate=(bool)(lua_toboolean(L,2)==1);

		wxView* self=Luna< wxObject >::checkSubType< wxView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxView::Activate(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Activate(activate);

		return 0;
	}

	// bool wxView::Close(bool deleteWindow = true)
	static int _bind_Close(lua_State *L) {
		if (!_lg_typecheck_Close(L)) {
			luaL_error(L, "luna typecheck failed in bool wxView::Close(bool deleteWindow = true) function, expected prototype:\nbool wxView::Close(bool deleteWindow = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool deleteWindow=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxView* self=Luna< wxObject >::checkSubType< wxView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxView::Close(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Close(deleteWindow);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxDocument * wxView::GetDocument() const
	static int _bind_GetDocument(lua_State *L) {
		if (!_lg_typecheck_GetDocument(L)) {
			luaL_error(L, "luna typecheck failed in wxDocument * wxView::GetDocument() const function, expected prototype:\nwxDocument * wxView::GetDocument() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxView* self=Luna< wxObject >::checkSubType< wxView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDocument * wxView::GetDocument() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDocument * lret = self->GetDocument();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDocument >::push(L,lret,false);

		return 1;
	}

	// wxDocManager * wxView::GetDocumentManager() const
	static int _bind_GetDocumentManager(lua_State *L) {
		if (!_lg_typecheck_GetDocumentManager(L)) {
			luaL_error(L, "luna typecheck failed in wxDocManager * wxView::GetDocumentManager() const function, expected prototype:\nwxDocManager * wxView::GetDocumentManager() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxView* self=Luna< wxObject >::checkSubType< wxView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDocManager * wxView::GetDocumentManager() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDocManager * lret = self->GetDocumentManager();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDocManager >::push(L,lret,false);

		return 1;
	}

	// wxWindow * wxView::GetFrame() const
	static int _bind_GetFrame(lua_State *L) {
		if (!_lg_typecheck_GetFrame(L)) {
			luaL_error(L, "luna typecheck failed in wxWindow * wxView::GetFrame() const function, expected prototype:\nwxWindow * wxView::GetFrame() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxView* self=Luna< wxObject >::checkSubType< wxView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxWindow * wxView::GetFrame() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxWindow * lret = self->GetFrame();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// wxString wxView::GetViewName() const
	static int _bind_GetViewName(lua_State *L) {
		if (!_lg_typecheck_GetViewName(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxView::GetViewName() const function, expected prototype:\nwxString wxView::GetViewName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxView* self=Luna< wxObject >::checkSubType< wxView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxView::GetViewName() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetViewName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxView::OnActivateView(bool activate, wxView * activeView, wxView * deactiveView)
	static int _bind_OnActivateView(lua_State *L) {
		if (!_lg_typecheck_OnActivateView(L)) {
			luaL_error(L, "luna typecheck failed in void wxView::OnActivateView(bool activate, wxView * activeView, wxView * deactiveView) function, expected prototype:\nvoid wxView::OnActivateView(bool activate, wxView * activeView, wxView * deactiveView)\nClass arguments details:\narg 2 ID = 56813631\narg 3 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		bool activate=(bool)(lua_toboolean(L,2)==1);
		wxView* activeView=(Luna< wxObject >::checkSubType< wxView >(L,3));
		wxView* deactiveView=(Luna< wxObject >::checkSubType< wxView >(L,4));

		wxView* self=Luna< wxObject >::checkSubType< wxView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxView::OnActivateView(bool, wxView *, wxView *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OnActivateView(activate, activeView, deactiveView);

		return 0;
	}

	// void wxView::OnChangeFilename()
	static int _bind_OnChangeFilename(lua_State *L) {
		if (!_lg_typecheck_OnChangeFilename(L)) {
			luaL_error(L, "luna typecheck failed in void wxView::OnChangeFilename() function, expected prototype:\nvoid wxView::OnChangeFilename()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxView* self=Luna< wxObject >::checkSubType< wxView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxView::OnChangeFilename(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OnChangeFilename();

		return 0;
	}

	// bool wxView::OnClose(bool deleteWindow)
	static int _bind_OnClose(lua_State *L) {
		if (!_lg_typecheck_OnClose(L)) {
			luaL_error(L, "luna typecheck failed in bool wxView::OnClose(bool deleteWindow) function, expected prototype:\nbool wxView::OnClose(bool deleteWindow)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool deleteWindow=(bool)(lua_toboolean(L,2)==1);

		wxView* self=Luna< wxObject >::checkSubType< wxView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxView::OnClose(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->OnClose(deleteWindow);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxView::OnClosingDocument()
	static int _bind_OnClosingDocument(lua_State *L) {
		if (!_lg_typecheck_OnClosingDocument(L)) {
			luaL_error(L, "luna typecheck failed in void wxView::OnClosingDocument() function, expected prototype:\nvoid wxView::OnClosingDocument()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxView* self=Luna< wxObject >::checkSubType< wxView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxView::OnClosingDocument(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OnClosingDocument();

		return 0;
	}

	// bool wxView::OnCreate(wxDocument * doc, long flags)
	static int _bind_OnCreate(lua_State *L) {
		if (!_lg_typecheck_OnCreate(L)) {
			luaL_error(L, "luna typecheck failed in bool wxView::OnCreate(wxDocument * doc, long flags) function, expected prototype:\nbool wxView::OnCreate(wxDocument * doc, long flags)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDocument* doc=(Luna< wxObject >::checkSubType< wxDocument >(L,2));
		long flags=(long)lua_tonumber(L,3);

		wxView* self=Luna< wxObject >::checkSubType< wxView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxView::OnCreate(wxDocument *, long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->OnCreate(doc, flags);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxView::OnDraw(wxDC * dc)
	static int _bind_OnDraw(lua_State *L) {
		if (!_lg_typecheck_OnDraw(L)) {
			luaL_error(L, "luna typecheck failed in void wxView::OnDraw(wxDC * dc) function, expected prototype:\nvoid wxView::OnDraw(wxDC * dc)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDC* dc=(Luna< wxObject >::checkSubType< wxDC >(L,2));

		wxView* self=Luna< wxObject >::checkSubType< wxView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxView::OnDraw(wxDC *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OnDraw(dc);

		return 0;
	}

	// void wxView::OnUpdate(wxView * sender, wxObject * hint = 0)
	static int _bind_OnUpdate(lua_State *L) {
		if (!_lg_typecheck_OnUpdate(L)) {
			luaL_error(L, "luna typecheck failed in void wxView::OnUpdate(wxView * sender, wxObject * hint = 0) function, expected prototype:\nvoid wxView::OnUpdate(wxView * sender, wxObject * hint = 0)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxView* sender=(Luna< wxObject >::checkSubType< wxView >(L,2));
		wxObject* hint=luatop>2 ? (Luna< wxObject >::check(L,3)) : (wxObject*)0;

		wxView* self=Luna< wxObject >::checkSubType< wxView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxView::OnUpdate(wxView *, wxObject *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OnUpdate(sender, hint);

		return 0;
	}

	// void wxView::SetDocument(wxDocument * doc)
	static int _bind_SetDocument(lua_State *L) {
		if (!_lg_typecheck_SetDocument(L)) {
			luaL_error(L, "luna typecheck failed in void wxView::SetDocument(wxDocument * doc) function, expected prototype:\nvoid wxView::SetDocument(wxDocument * doc)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDocument* doc=(Luna< wxObject >::checkSubType< wxDocument >(L,2));

		wxView* self=Luna< wxObject >::checkSubType< wxView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxView::SetDocument(wxDocument *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetDocument(doc);

		return 0;
	}

	// void wxView::SetFrame(wxWindow * frame)
	static int _bind_SetFrame(lua_State *L) {
		if (!_lg_typecheck_SetFrame(L)) {
			luaL_error(L, "luna typecheck failed in void wxView::SetFrame(wxWindow * frame) function, expected prototype:\nvoid wxView::SetFrame(wxWindow * frame)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* frame=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxView* self=Luna< wxObject >::checkSubType< wxView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxView::SetFrame(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetFrame(frame);

		return 0;
	}

	// void wxView::SetViewName(const wxString & name)
	static int _bind_SetViewName(lua_State *L) {
		if (!_lg_typecheck_SetViewName(L)) {
			luaL_error(L, "luna typecheck failed in void wxView::SetViewName(const wxString & name) function, expected prototype:\nvoid wxView::SetViewName(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxView* self=Luna< wxObject >::checkSubType< wxView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxView::SetViewName(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetViewName(name);

		return 0;
	}

	// wxClassInfo * wxView::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxView::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxView::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxView* self=Luna< wxObject >::checkSubType< wxView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxView::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxView::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// void wxView::base_QueueEvent(wxEvent * event)
	static int _bind_base_QueueEvent(lua_State *L) {
		if (!_lg_typecheck_base_QueueEvent(L)) {
			luaL_error(L, "luna typecheck failed in void wxView::base_QueueEvent(wxEvent * event) function, expected prototype:\nvoid wxView::base_QueueEvent(wxEvent * event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvent* event=(Luna< wxObject >::checkSubType< wxEvent >(L,2));

		wxView* self=Luna< wxObject >::checkSubType< wxView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxView::base_QueueEvent(wxEvent *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxView::QueueEvent(event);

		return 0;
	}

	// void wxView::base_AddPendingEvent(const wxEvent & event)
	static int _bind_base_AddPendingEvent(lua_State *L) {
		if (!_lg_typecheck_base_AddPendingEvent(L)) {
			luaL_error(L, "luna typecheck failed in void wxView::base_AddPendingEvent(const wxEvent & event) function, expected prototype:\nvoid wxView::base_AddPendingEvent(const wxEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxEvent* event_ptr=(Luna< wxObject >::checkSubType< wxEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxView::base_AddPendingEvent function");
		}
		const wxEvent & event=*event_ptr;

		wxView* self=Luna< wxObject >::checkSubType< wxView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxView::base_AddPendingEvent(const wxEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxView::AddPendingEvent(event);

		return 0;
	}

	// bool wxView::base_ProcessEvent(wxEvent & event)
	static int _bind_base_ProcessEvent(lua_State *L) {
		if (!_lg_typecheck_base_ProcessEvent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxView::base_ProcessEvent(wxEvent & event) function, expected prototype:\nbool wxView::base_ProcessEvent(wxEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvent* event_ptr=(Luna< wxObject >::checkSubType< wxEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxView::base_ProcessEvent function");
		}
		wxEvent & event=*event_ptr;

		wxView* self=Luna< wxObject >::checkSubType< wxView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxView::base_ProcessEvent(wxEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxView::ProcessEvent(event);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxView::base_SetNextHandler(wxEvtHandler * handler)
	static int _bind_base_SetNextHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetNextHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxView::base_SetNextHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxView::base_SetNextHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxView* self=Luna< wxObject >::checkSubType< wxView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxView::base_SetNextHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxView::SetNextHandler(handler);

		return 0;
	}

	// void wxView::base_SetPreviousHandler(wxEvtHandler * handler)
	static int _bind_base_SetPreviousHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetPreviousHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxView::base_SetPreviousHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxView::base_SetPreviousHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxView* self=Luna< wxObject >::checkSubType< wxView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxView::base_SetPreviousHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxView::SetPreviousHandler(handler);

		return 0;
	}

	// void wxView::base_Activate(bool activate)
	static int _bind_base_Activate(lua_State *L) {
		if (!_lg_typecheck_base_Activate(L)) {
			luaL_error(L, "luna typecheck failed in void wxView::base_Activate(bool activate) function, expected prototype:\nvoid wxView::base_Activate(bool activate)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool activate=(bool)(lua_toboolean(L,2)==1);

		wxView* self=Luna< wxObject >::checkSubType< wxView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxView::base_Activate(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxView::Activate(activate);

		return 0;
	}

	// bool wxView::base_Close(bool deleteWindow = true)
	static int _bind_base_Close(lua_State *L) {
		if (!_lg_typecheck_base_Close(L)) {
			luaL_error(L, "luna typecheck failed in bool wxView::base_Close(bool deleteWindow = true) function, expected prototype:\nbool wxView::base_Close(bool deleteWindow = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool deleteWindow=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxView* self=Luna< wxObject >::checkSubType< wxView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxView::base_Close(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxView::Close(deleteWindow);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxView::base_OnActivateView(bool activate, wxView * activeView, wxView * deactiveView)
	static int _bind_base_OnActivateView(lua_State *L) {
		if (!_lg_typecheck_base_OnActivateView(L)) {
			luaL_error(L, "luna typecheck failed in void wxView::base_OnActivateView(bool activate, wxView * activeView, wxView * deactiveView) function, expected prototype:\nvoid wxView::base_OnActivateView(bool activate, wxView * activeView, wxView * deactiveView)\nClass arguments details:\narg 2 ID = 56813631\narg 3 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		bool activate=(bool)(lua_toboolean(L,2)==1);
		wxView* activeView=(Luna< wxObject >::checkSubType< wxView >(L,3));
		wxView* deactiveView=(Luna< wxObject >::checkSubType< wxView >(L,4));

		wxView* self=Luna< wxObject >::checkSubType< wxView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxView::base_OnActivateView(bool, wxView *, wxView *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxView::OnActivateView(activate, activeView, deactiveView);

		return 0;
	}

	// void wxView::base_OnChangeFilename()
	static int _bind_base_OnChangeFilename(lua_State *L) {
		if (!_lg_typecheck_base_OnChangeFilename(L)) {
			luaL_error(L, "luna typecheck failed in void wxView::base_OnChangeFilename() function, expected prototype:\nvoid wxView::base_OnChangeFilename()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxView* self=Luna< wxObject >::checkSubType< wxView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxView::base_OnChangeFilename(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxView::OnChangeFilename();

		return 0;
	}

	// bool wxView::base_OnClose(bool deleteWindow)
	static int _bind_base_OnClose(lua_State *L) {
		if (!_lg_typecheck_base_OnClose(L)) {
			luaL_error(L, "luna typecheck failed in bool wxView::base_OnClose(bool deleteWindow) function, expected prototype:\nbool wxView::base_OnClose(bool deleteWindow)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool deleteWindow=(bool)(lua_toboolean(L,2)==1);

		wxView* self=Luna< wxObject >::checkSubType< wxView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxView::base_OnClose(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxView::OnClose(deleteWindow);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxView::base_OnClosingDocument()
	static int _bind_base_OnClosingDocument(lua_State *L) {
		if (!_lg_typecheck_base_OnClosingDocument(L)) {
			luaL_error(L, "luna typecheck failed in void wxView::base_OnClosingDocument() function, expected prototype:\nvoid wxView::base_OnClosingDocument()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxView* self=Luna< wxObject >::checkSubType< wxView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxView::base_OnClosingDocument(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxView::OnClosingDocument();

		return 0;
	}

	// bool wxView::base_OnCreate(wxDocument * doc, long flags)
	static int _bind_base_OnCreate(lua_State *L) {
		if (!_lg_typecheck_base_OnCreate(L)) {
			luaL_error(L, "luna typecheck failed in bool wxView::base_OnCreate(wxDocument * doc, long flags) function, expected prototype:\nbool wxView::base_OnCreate(wxDocument * doc, long flags)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDocument* doc=(Luna< wxObject >::checkSubType< wxDocument >(L,2));
		long flags=(long)lua_tonumber(L,3);

		wxView* self=Luna< wxObject >::checkSubType< wxView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxView::base_OnCreate(wxDocument *, long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxView::OnCreate(doc, flags);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxView::base_OnUpdate(wxView * sender, wxObject * hint = 0)
	static int _bind_base_OnUpdate(lua_State *L) {
		if (!_lg_typecheck_base_OnUpdate(L)) {
			luaL_error(L, "luna typecheck failed in void wxView::base_OnUpdate(wxView * sender, wxObject * hint = 0) function, expected prototype:\nvoid wxView::base_OnUpdate(wxView * sender, wxObject * hint = 0)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxView* sender=(Luna< wxObject >::checkSubType< wxView >(L,2));
		wxObject* hint=luatop>2 ? (Luna< wxObject >::check(L,3)) : (wxObject*)0;

		wxView* self=Luna< wxObject >::checkSubType< wxView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxView::base_OnUpdate(wxView *, wxObject *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxView::OnUpdate(sender, hint);

		return 0;
	}

	// void wxView::base_SetDocument(wxDocument * doc)
	static int _bind_base_SetDocument(lua_State *L) {
		if (!_lg_typecheck_base_SetDocument(L)) {
			luaL_error(L, "luna typecheck failed in void wxView::base_SetDocument(wxDocument * doc) function, expected prototype:\nvoid wxView::base_SetDocument(wxDocument * doc)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDocument* doc=(Luna< wxObject >::checkSubType< wxDocument >(L,2));

		wxView* self=Luna< wxObject >::checkSubType< wxView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxView::base_SetDocument(wxDocument *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxView::SetDocument(doc);

		return 0;
	}


	// Operator binds:

};

wxView* LunaTraits< wxView >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxView::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void wxView::OnDraw(wxDC * dc)
}

void LunaTraits< wxView >::_bind_dtor(wxView* obj) {
	delete obj;
}

const char LunaTraits< wxView >::className[] = "wxView";
const char LunaTraits< wxView >::fullName[] = "wxView";
const char LunaTraits< wxView >::moduleName[] = "wx";
const char* LunaTraits< wxView >::parents[] = {"wx.wxEvtHandler", 0};
const int LunaTraits< wxView >::hash = 20357491;
const int LunaTraits< wxView >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxView >::methods[] = {
	{"Activate", &luna_wrapper_wxView::_bind_Activate},
	{"Close", &luna_wrapper_wxView::_bind_Close},
	{"GetDocument", &luna_wrapper_wxView::_bind_GetDocument},
	{"GetDocumentManager", &luna_wrapper_wxView::_bind_GetDocumentManager},
	{"GetFrame", &luna_wrapper_wxView::_bind_GetFrame},
	{"GetViewName", &luna_wrapper_wxView::_bind_GetViewName},
	{"OnActivateView", &luna_wrapper_wxView::_bind_OnActivateView},
	{"OnChangeFilename", &luna_wrapper_wxView::_bind_OnChangeFilename},
	{"OnClose", &luna_wrapper_wxView::_bind_OnClose},
	{"OnClosingDocument", &luna_wrapper_wxView::_bind_OnClosingDocument},
	{"OnCreate", &luna_wrapper_wxView::_bind_OnCreate},
	{"OnDraw", &luna_wrapper_wxView::_bind_OnDraw},
	{"OnUpdate", &luna_wrapper_wxView::_bind_OnUpdate},
	{"SetDocument", &luna_wrapper_wxView::_bind_SetDocument},
	{"SetFrame", &luna_wrapper_wxView::_bind_SetFrame},
	{"SetViewName", &luna_wrapper_wxView::_bind_SetViewName},
	{"base_GetClassInfo", &luna_wrapper_wxView::_bind_base_GetClassInfo},
	{"base_QueueEvent", &luna_wrapper_wxView::_bind_base_QueueEvent},
	{"base_AddPendingEvent", &luna_wrapper_wxView::_bind_base_AddPendingEvent},
	{"base_ProcessEvent", &luna_wrapper_wxView::_bind_base_ProcessEvent},
	{"base_SetNextHandler", &luna_wrapper_wxView::_bind_base_SetNextHandler},
	{"base_SetPreviousHandler", &luna_wrapper_wxView::_bind_base_SetPreviousHandler},
	{"base_Activate", &luna_wrapper_wxView::_bind_base_Activate},
	{"base_Close", &luna_wrapper_wxView::_bind_base_Close},
	{"base_OnActivateView", &luna_wrapper_wxView::_bind_base_OnActivateView},
	{"base_OnChangeFilename", &luna_wrapper_wxView::_bind_base_OnChangeFilename},
	{"base_OnClose", &luna_wrapper_wxView::_bind_base_OnClose},
	{"base_OnClosingDocument", &luna_wrapper_wxView::_bind_base_OnClosingDocument},
	{"base_OnCreate", &luna_wrapper_wxView::_bind_base_OnCreate},
	{"base_OnUpdate", &luna_wrapper_wxView::_bind_base_OnUpdate},
	{"base_SetDocument", &luna_wrapper_wxView::_bind_base_SetDocument},
	{"fromVoid", &luna_wrapper_wxView::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxView::_bind_asVoid},
	{"getTable", &luna_wrapper_wxView::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxView >::converters[] = {
	{"wxObject", &luna_wrapper_wxView::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxView >::enumValues[] = {
	{0,0}
};


