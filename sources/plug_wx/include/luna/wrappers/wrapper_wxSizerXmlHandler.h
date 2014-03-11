#ifndef _WRAPPERS_WRAPPER_WXSIZERXMLHANDLER_H_
#define _WRAPPERS_WRAPPER_WXSIZERXMLHANDLER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/xrc/xh_sizer.h>

class wrapper_wxSizerXmlHandler : public wxSizerXmlHandler, public luna_wrapper_base {

public:
		

	~wrapper_wxSizerXmlHandler() {
		logDEBUG3("Calling delete function for wrapper wxSizerXmlHandler");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxSizerXmlHandler*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxSizerXmlHandler(lua_State* L, lua_Table* dum) 
		: wxSizerXmlHandler(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxSizerXmlHandler*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxSizerXmlHandler*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxSizerXmlHandler::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxSizerXmlHandler*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxSizerXmlHandler::CloneRefData(data);
	};

	// wxSizer * wxSizerXmlHandler::DoCreateSizer(const wxString & name)
	wxSizer * DoCreateSizer(const wxString & name) {
		if(_obj.pushFunction("DoCreateSizer")) {
			_obj.pushArg((wxSizerXmlHandler*)this);
			_obj.pushArg(name);
			return (_obj.callFunction<wxSizer*>());
		}

		return wxSizerXmlHandler::DoCreateSizer(name);
	};

	// bool wxSizerXmlHandler::IsSizerNode(wxXmlNode * node) const
	bool IsSizerNode(wxXmlNode * node) const {
		if(_obj.pushFunction("IsSizerNode")) {
			_obj.pushArg((wxSizerXmlHandler*)this);
			_obj.pushArg(node);
			return (_obj.callFunction<bool>());
		}

		return wxSizerXmlHandler::IsSizerNode(node);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxSizerXmlHandler*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxSizerXmlHandler::GetClassInfo();
	};

	// wxObject * wxSizerXmlHandler::DoCreateResource()
	wxObject * DoCreateResource() {
		if(_obj.pushFunction("DoCreateResource")) {
			_obj.pushArg((wxSizerXmlHandler*)this);
			return (_obj.callFunction<wxObject*>());
		}

		return wxSizerXmlHandler::DoCreateResource();
	};

	// bool wxSizerXmlHandler::CanHandle(wxXmlNode * node)
	bool CanHandle(wxXmlNode * node) {
		if(_obj.pushFunction("CanHandle")) {
			_obj.pushArg((wxSizerXmlHandler*)this);
			_obj.pushArg(node);
			return (_obj.callFunction<bool>());
		}

		return wxSizerXmlHandler::CanHandle(node);
	};


	// Protected non-virtual methods:
	// void wxXmlResourceHandler::AddStyle(const wxString & name, int value)
	void public_AddStyle(const wxString & name, int value) {
		return wxXmlResourceHandler::AddStyle(name, value);
	};

	// void wxXmlResourceHandler::AddWindowStyles()
	void public_AddWindowStyles() {
		return wxXmlResourceHandler::AddWindowStyles();
	};

	// void wxXmlResourceHandler::CreateChildren(wxObject * parent, bool this_hnd_only = false)
	void public_CreateChildren(wxObject * parent, bool this_hnd_only = false) {
		return wxXmlResourceHandler::CreateChildren(parent, this_hnd_only);
	};

	// void wxXmlResourceHandler::CreateChildrenPrivately(wxObject * parent, wxXmlNode * rootnode = NULL)
	void public_CreateChildrenPrivately(wxObject * parent, wxXmlNode * rootnode = NULL) {
		return wxXmlResourceHandler::CreateChildrenPrivately(parent, rootnode);
	};

	// wxObject * wxXmlResourceHandler::CreateResFromNode(wxXmlNode * node, wxObject * parent, wxObject * instance = NULL)
	wxObject * public_CreateResFromNode(wxXmlNode * node, wxObject * parent, wxObject * instance = NULL) {
		return wxXmlResourceHandler::CreateResFromNode(node, parent, instance);
	};

	// wxAnimation wxXmlResourceHandler::GetAnimation(const wxString & param = "animation")
	wxAnimation public_GetAnimation(const wxString & param = "animation") {
		return wxXmlResourceHandler::GetAnimation(param);
	};

	// wxBitmap wxXmlResourceHandler::GetBitmap(const wxString & param = "bitmap", const wxString & defaultArtClient = wxART_OTHER, wxSize size = wxDefaultSize)
	wxBitmap public_GetBitmap(const wxString & param = "bitmap", const wxString & defaultArtClient = wxART_OTHER, wxSize size = wxDefaultSize) {
		return wxXmlResourceHandler::GetBitmap(param, defaultArtClient, size);
	};

	// bool wxXmlResourceHandler::GetBool(const wxString & param, bool defaultv = false)
	bool public_GetBool(const wxString & param, bool defaultv = false) {
		return wxXmlResourceHandler::GetBool(param, defaultv);
	};

	// wxColour wxXmlResourceHandler::GetColour(const wxString & param, const wxColour & defaultColour = wxNullColour)
	wxColour public_GetColour(const wxString & param, const wxColour & defaultColour = wxNullColour) {
		return wxXmlResourceHandler::GetColour(param, defaultColour);
	};

	// wxFileSystem & wxXmlResourceHandler::GetCurFileSystem()
	wxFileSystem & public_GetCurFileSystem() {
		return wxXmlResourceHandler::GetCurFileSystem();
	};

	// int wxXmlResourceHandler::GetDimension(const wxString & param, int defaultv = 0, wxWindow * windowToUse = 0)
	int public_GetDimension(const wxString & param, int defaultv = 0, wxWindow * windowToUse = 0) {
		return wxXmlResourceHandler::GetDimension(param, defaultv, windowToUse);
	};

	// wxDirection wxXmlResourceHandler::GetDirection(const wxString & param, wxDirection dir = ::wxLEFT)
	wxDirection public_GetDirection(const wxString & param, wxDirection dir = ::wxLEFT) {
		return wxXmlResourceHandler::GetDirection(param, dir);
	};

	// wxFont wxXmlResourceHandler::GetFont(const wxString & param = "font")
	wxFont public_GetFont(const wxString & param = "font") {
		return wxXmlResourceHandler::GetFont(param);
	};

	// int wxXmlResourceHandler::GetID()
	int public_GetID() {
		return wxXmlResourceHandler::GetID();
	};

	// wxIcon wxXmlResourceHandler::GetIcon(const wxString & param = "icon", const wxString & defaultArtClient = wxART_OTHER, wxSize size = wxDefaultSize)
	wxIcon public_GetIcon(const wxString & param = "icon", const wxString & defaultArtClient = wxART_OTHER, wxSize size = wxDefaultSize) {
		return wxXmlResourceHandler::GetIcon(param, defaultArtClient, size);
	};

	// wxIconBundle wxXmlResourceHandler::GetIconBundle(const wxString & param, const wxString & defaultArtClient = wxART_OTHER)
	wxIconBundle public_GetIconBundle(const wxString & param, const wxString & defaultArtClient = wxART_OTHER) {
		return wxXmlResourceHandler::GetIconBundle(param, defaultArtClient);
	};

	// wxImageList * wxXmlResourceHandler::GetImageList(const wxString & param = wxT ("imagelist"))
	wxImageList * public_GetImageList(const wxString & param = wxT ("imagelist")) {
		return wxXmlResourceHandler::GetImageList(param);
	};

	// long wxXmlResourceHandler::GetLong(const wxString & param, long defaultv = 0)
	long public_GetLong(const wxString & param, long defaultv = 0) {
		return wxXmlResourceHandler::GetLong(param, defaultv);
	};

	// wxString wxXmlResourceHandler::GetName()
	wxString public_GetName() {
		return wxXmlResourceHandler::GetName();
	};

	// wxString wxXmlResourceHandler::GetNodeContent(wxXmlNode * node)
	wxString public_GetNodeContent(wxXmlNode * node) {
		return wxXmlResourceHandler::GetNodeContent(node);
	};

	// wxXmlNode * wxXmlResourceHandler::GetParamNode(const wxString & param)
	wxXmlNode * public_GetParamNode(const wxString & param) {
		return wxXmlResourceHandler::GetParamNode(param);
	};

	// wxString wxXmlResourceHandler::GetParamValue(const wxString & param)
	wxString public_GetParamValue(const wxString & param) {
		return wxXmlResourceHandler::GetParamValue(param);
	};

	// wxPoint wxXmlResourceHandler::GetPosition(const wxString & param = "pos")
	wxPoint public_GetPosition(const wxString & param = "pos") {
		return wxXmlResourceHandler::GetPosition(param);
	};

	// wxSize wxXmlResourceHandler::GetSize(const wxString & param = "size", wxWindow * windowToUse = 0)
	wxSize public_GetSize(const wxString & param = "size", wxWindow * windowToUse = 0) {
		return wxXmlResourceHandler::GetSize(param, windowToUse);
	};

	// int wxXmlResourceHandler::GetStyle(const wxString & param = "style", int defaults = 0)
	int public_GetStyle(const wxString & param = "style", int defaults = 0) {
		return wxXmlResourceHandler::GetStyle(param, defaults);
	};

	// wxString wxXmlResourceHandler::GetText(const wxString & param, bool translate = true)
	wxString public_GetText(const wxString & param, bool translate = true) {
		return wxXmlResourceHandler::GetText(param, translate);
	};

	// bool wxXmlResourceHandler::HasParam(const wxString & param)
	bool public_HasParam(const wxString & param) {
		return wxXmlResourceHandler::HasParam(param);
	};

	// bool wxXmlResourceHandler::IsOfClass(wxXmlNode * node, const wxString & classname)
	bool public_IsOfClass(wxXmlNode * node, const wxString & classname) {
		return wxXmlResourceHandler::IsOfClass(node, classname);
	};

	// void wxXmlResourceHandler::SetupWindow(wxWindow * wnd)
	void public_SetupWindow(wxWindow * wnd) {
		return wxXmlResourceHandler::SetupWindow(wnd);
	};

	// void wxXmlResourceHandler::ReportError(wxXmlNode * context, const wxString & message)
	void public_ReportError(wxXmlNode * context, const wxString & message) {
		return wxXmlResourceHandler::ReportError(context, message);
	};

	// void wxXmlResourceHandler::ReportParamError(const wxString & param, const wxString & message)
	void public_ReportParamError(const wxString & param, const wxString & message) {
		return wxXmlResourceHandler::ReportParamError(param, message);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_AddStyle(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_AddWindowStyles(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_CreateChildren(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_CreateChildrenPrivately(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,64848530)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_CreateResFromNode(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,64848530)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_GetAnimation(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_GetBitmap(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>4 ) return false;

		if( luatop>1 && lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,20268751) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_GetBool(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_GetColour(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_GetCurFileSystem(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_GetDimension(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_GetDirection(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_GetFont(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_GetID(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_GetIcon(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>4 ) return false;

		if( luatop>1 && lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,20268751) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_GetIconBundle(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_GetImageList(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_GetLong(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_GetName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_GetNodeContent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,64848530)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_GetParamNode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_GetParamValue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_GetPosition(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_GetSize(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_GetStyle(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_GetText(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_HasParam(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_IsOfClass(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,64848530)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_SetupWindow(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_ReportError(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,64848530)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_ReportParamError(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void wxXmlResourceHandler::public_AddStyle(const wxString & name, int value)
	static int _bind_public_AddStyle(lua_State *L) {
		if (!_lg_typecheck_public_AddStyle(L)) {
			luaL_error(L, "luna typecheck failed in void wxXmlResourceHandler::public_AddStyle(const wxString & name, int value) function, expected prototype:\nvoid wxXmlResourceHandler::public_AddStyle(const wxString & name, int value)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));
		int value=(int)lua_tointeger(L,3);

		wrapper_wxSizerXmlHandler* self=Luna< wxObject >::checkSubType< wrapper_wxSizerXmlHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxXmlResourceHandler::public_AddStyle(const wxString &, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_AddStyle(name, value);

		return 0;
	}

	// void wxXmlResourceHandler::public_AddWindowStyles()
	static int _bind_public_AddWindowStyles(lua_State *L) {
		if (!_lg_typecheck_public_AddWindowStyles(L)) {
			luaL_error(L, "luna typecheck failed in void wxXmlResourceHandler::public_AddWindowStyles() function, expected prototype:\nvoid wxXmlResourceHandler::public_AddWindowStyles()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_wxSizerXmlHandler* self=Luna< wxObject >::checkSubType< wrapper_wxSizerXmlHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxXmlResourceHandler::public_AddWindowStyles(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_AddWindowStyles();

		return 0;
	}

	// void wxXmlResourceHandler::public_CreateChildren(wxObject * parent, bool this_hnd_only = false)
	static int _bind_public_CreateChildren(lua_State *L) {
		if (!_lg_typecheck_public_CreateChildren(L)) {
			luaL_error(L, "luna typecheck failed in void wxXmlResourceHandler::public_CreateChildren(wxObject * parent, bool this_hnd_only = false) function, expected prototype:\nvoid wxXmlResourceHandler::public_CreateChildren(wxObject * parent, bool this_hnd_only = false)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxObject* parent=(Luna< wxObject >::check(L,2));
		bool this_hnd_only=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)false;

		wrapper_wxSizerXmlHandler* self=Luna< wxObject >::checkSubType< wrapper_wxSizerXmlHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxXmlResourceHandler::public_CreateChildren(wxObject *, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_CreateChildren(parent, this_hnd_only);

		return 0;
	}

	// void wxXmlResourceHandler::public_CreateChildrenPrivately(wxObject * parent, wxXmlNode * rootnode = NULL)
	static int _bind_public_CreateChildrenPrivately(lua_State *L) {
		if (!_lg_typecheck_public_CreateChildrenPrivately(L)) {
			luaL_error(L, "luna typecheck failed in void wxXmlResourceHandler::public_CreateChildrenPrivately(wxObject * parent, wxXmlNode * rootnode = NULL) function, expected prototype:\nvoid wxXmlResourceHandler::public_CreateChildrenPrivately(wxObject * parent, wxXmlNode * rootnode = NULL)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 64848530\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxObject* parent=(Luna< wxObject >::check(L,2));
		wxXmlNode* rootnode=luatop>2 ? (Luna< wxXmlNode >::check(L,3)) : (wxXmlNode*)NULL;

		wrapper_wxSizerXmlHandler* self=Luna< wxObject >::checkSubType< wrapper_wxSizerXmlHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxXmlResourceHandler::public_CreateChildrenPrivately(wxObject *, wxXmlNode *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_CreateChildrenPrivately(parent, rootnode);

		return 0;
	}

	// wxObject * wxXmlResourceHandler::public_CreateResFromNode(wxXmlNode * node, wxObject * parent, wxObject * instance = NULL)
	static int _bind_public_CreateResFromNode(lua_State *L) {
		if (!_lg_typecheck_public_CreateResFromNode(L)) {
			luaL_error(L, "luna typecheck failed in wxObject * wxXmlResourceHandler::public_CreateResFromNode(wxXmlNode * node, wxObject * parent, wxObject * instance = NULL) function, expected prototype:\nwxObject * wxXmlResourceHandler::public_CreateResFromNode(wxXmlNode * node, wxObject * parent, wxObject * instance = NULL)\nClass arguments details:\narg 1 ID = 64848530\narg 2 ID = 56813631\narg 3 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxXmlNode* node=(Luna< wxXmlNode >::check(L,2));
		wxObject* parent=(Luna< wxObject >::check(L,3));
		wxObject* instance=luatop>3 ? (Luna< wxObject >::check(L,4)) : (wxObject*)NULL;

		wrapper_wxSizerXmlHandler* self=Luna< wxObject >::checkSubType< wrapper_wxSizerXmlHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxObject * wxXmlResourceHandler::public_CreateResFromNode(wxXmlNode *, wxObject *, wxObject *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxObject * lret = self->public_CreateResFromNode(node, parent, instance);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxObject >::push(L,lret,false);

		return 1;
	}

	// wxAnimation wxXmlResourceHandler::public_GetAnimation(const wxString & param = "animation")
	static int _bind_public_GetAnimation(lua_State *L) {
		if (!_lg_typecheck_public_GetAnimation(L)) {
			luaL_error(L, "luna typecheck failed in wxAnimation wxXmlResourceHandler::public_GetAnimation(const wxString & param = \"animation\") function, expected prototype:\nwxAnimation wxXmlResourceHandler::public_GetAnimation(const wxString & param = \"animation\")\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString param(lua_tostring(L,2),lua_objlen(L,2));

		wrapper_wxSizerXmlHandler* self=Luna< wxObject >::checkSubType< wrapper_wxSizerXmlHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxAnimation wxXmlResourceHandler::public_GetAnimation(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxAnimation stack_lret = self->public_GetAnimation(param);
		wxAnimation* lret = new wxAnimation(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAnimation >::push(L,lret,true);

		return 1;
	}

	// wxBitmap wxXmlResourceHandler::public_GetBitmap(const wxString & param = "bitmap", const wxString & defaultArtClient = wxART_OTHER, wxSize size = wxDefaultSize)
	static int _bind_public_GetBitmap(lua_State *L) {
		if (!_lg_typecheck_public_GetBitmap(L)) {
			luaL_error(L, "luna typecheck failed in wxBitmap wxXmlResourceHandler::public_GetBitmap(const wxString & param = \"bitmap\", const wxString & defaultArtClient = wxART_OTHER, wxSize size = wxDefaultSize) function, expected prototype:\nwxBitmap wxXmlResourceHandler::public_GetBitmap(const wxString & param = \"bitmap\", const wxString & defaultArtClient = wxART_OTHER, wxSize size = wxDefaultSize)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\narg 3 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString param(lua_tostring(L,2),lua_objlen(L,2));
		wxString defaultArtClient(lua_tostring(L,3),lua_objlen(L,3));
		wxSize* size_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxXmlResourceHandler::public_GetBitmap function");
		}
		wxSize size=luatop>3 ? *size_ptr : (wxSize)wxDefaultSize;

		wrapper_wxSizerXmlHandler* self=Luna< wxObject >::checkSubType< wrapper_wxSizerXmlHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxBitmap wxXmlResourceHandler::public_GetBitmap(const wxString &, const wxString &, wxSize). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxBitmap stack_lret = self->public_GetBitmap(param, defaultArtClient, size);
		wxBitmap* lret = new wxBitmap(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxBitmap >::push(L,lret,true);

		return 1;
	}

	// bool wxXmlResourceHandler::public_GetBool(const wxString & param, bool defaultv = false)
	static int _bind_public_GetBool(lua_State *L) {
		if (!_lg_typecheck_public_GetBool(L)) {
			luaL_error(L, "luna typecheck failed in bool wxXmlResourceHandler::public_GetBool(const wxString & param, bool defaultv = false) function, expected prototype:\nbool wxXmlResourceHandler::public_GetBool(const wxString & param, bool defaultv = false)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString param(lua_tostring(L,2),lua_objlen(L,2));
		bool defaultv=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)false;

		wrapper_wxSizerXmlHandler* self=Luna< wxObject >::checkSubType< wrapper_wxSizerXmlHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxXmlResourceHandler::public_GetBool(const wxString &, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->public_GetBool(param, defaultv);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxColour wxXmlResourceHandler::public_GetColour(const wxString & param, const wxColour & defaultColour = wxNullColour)
	static int _bind_public_GetColour(lua_State *L) {
		if (!_lg_typecheck_public_GetColour(L)) {
			luaL_error(L, "luna typecheck failed in wxColour wxXmlResourceHandler::public_GetColour(const wxString & param, const wxColour & defaultColour = wxNullColour) function, expected prototype:\nwxColour wxXmlResourceHandler::public_GetColour(const wxString & param, const wxColour & defaultColour = wxNullColour)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString param(lua_tostring(L,2),lua_objlen(L,2));
		const wxColour* defaultColour_ptr=luatop>2 ? (Luna< wxObject >::checkSubType< wxColour >(L,3)) : NULL;
		if( luatop>2 && !defaultColour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg defaultColour in wxXmlResourceHandler::public_GetColour function");
		}
		const wxColour & defaultColour=luatop>2 ? *defaultColour_ptr : (const wxColour&)wxNullColour;

		wrapper_wxSizerXmlHandler* self=Luna< wxObject >::checkSubType< wrapper_wxSizerXmlHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxColour wxXmlResourceHandler::public_GetColour(const wxString &, const wxColour &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxColour stack_lret = self->public_GetColour(param, defaultColour);
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// wxFileSystem & wxXmlResourceHandler::public_GetCurFileSystem()
	static int _bind_public_GetCurFileSystem(lua_State *L) {
		if (!_lg_typecheck_public_GetCurFileSystem(L)) {
			luaL_error(L, "luna typecheck failed in wxFileSystem & wxXmlResourceHandler::public_GetCurFileSystem() function, expected prototype:\nwxFileSystem & wxXmlResourceHandler::public_GetCurFileSystem()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_wxSizerXmlHandler* self=Luna< wxObject >::checkSubType< wrapper_wxSizerXmlHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxFileSystem & wxXmlResourceHandler::public_GetCurFileSystem(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxFileSystem* lret = &self->public_GetCurFileSystem();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFileSystem >::push(L,lret,false);

		return 1;
	}

	// int wxXmlResourceHandler::public_GetDimension(const wxString & param, int defaultv = 0, wxWindow * windowToUse = 0)
	static int _bind_public_GetDimension(lua_State *L) {
		if (!_lg_typecheck_public_GetDimension(L)) {
			luaL_error(L, "luna typecheck failed in int wxXmlResourceHandler::public_GetDimension(const wxString & param, int defaultv = 0, wxWindow * windowToUse = 0) function, expected prototype:\nint wxXmlResourceHandler::public_GetDimension(const wxString & param, int defaultv = 0, wxWindow * windowToUse = 0)\nClass arguments details:\narg 1 ID = 88196105\narg 3 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString param(lua_tostring(L,2),lua_objlen(L,2));
		int defaultv=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;
		wxWindow* windowToUse=luatop>3 ? (Luna< wxObject >::checkSubType< wxWindow >(L,4)) : (wxWindow*)0;

		wrapper_wxSizerXmlHandler* self=Luna< wxObject >::checkSubType< wrapper_wxSizerXmlHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxXmlResourceHandler::public_GetDimension(const wxString &, int, wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->public_GetDimension(param, defaultv, windowToUse);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxDirection wxXmlResourceHandler::public_GetDirection(const wxString & param, wxDirection dir = ::wxLEFT)
	static int _bind_public_GetDirection(lua_State *L) {
		if (!_lg_typecheck_public_GetDirection(L)) {
			luaL_error(L, "luna typecheck failed in wxDirection wxXmlResourceHandler::public_GetDirection(const wxString & param, wxDirection dir = ::wxLEFT) function, expected prototype:\nwxDirection wxXmlResourceHandler::public_GetDirection(const wxString & param, wxDirection dir = ::wxLEFT)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString param(lua_tostring(L,2),lua_objlen(L,2));
		wxDirection dir=luatop>2 ? (wxDirection)lua_tointeger(L,3) : (wxDirection)::wxLEFT;

		wrapper_wxSizerXmlHandler* self=Luna< wxObject >::checkSubType< wrapper_wxSizerXmlHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDirection wxXmlResourceHandler::public_GetDirection(const wxString &, wxDirection). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDirection lret = self->public_GetDirection(param, dir);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxFont wxXmlResourceHandler::public_GetFont(const wxString & param = "font")
	static int _bind_public_GetFont(lua_State *L) {
		if (!_lg_typecheck_public_GetFont(L)) {
			luaL_error(L, "luna typecheck failed in wxFont wxXmlResourceHandler::public_GetFont(const wxString & param = \"font\") function, expected prototype:\nwxFont wxXmlResourceHandler::public_GetFont(const wxString & param = \"font\")\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString param(lua_tostring(L,2),lua_objlen(L,2));

		wrapper_wxSizerXmlHandler* self=Luna< wxObject >::checkSubType< wrapper_wxSizerXmlHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxFont wxXmlResourceHandler::public_GetFont(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxFont stack_lret = self->public_GetFont(param);
		wxFont* lret = new wxFont(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFont >::push(L,lret,true);

		return 1;
	}

	// int wxXmlResourceHandler::public_GetID()
	static int _bind_public_GetID(lua_State *L) {
		if (!_lg_typecheck_public_GetID(L)) {
			luaL_error(L, "luna typecheck failed in int wxXmlResourceHandler::public_GetID() function, expected prototype:\nint wxXmlResourceHandler::public_GetID()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_wxSizerXmlHandler* self=Luna< wxObject >::checkSubType< wrapper_wxSizerXmlHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxXmlResourceHandler::public_GetID(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->public_GetID();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxIcon wxXmlResourceHandler::public_GetIcon(const wxString & param = "icon", const wxString & defaultArtClient = wxART_OTHER, wxSize size = wxDefaultSize)
	static int _bind_public_GetIcon(lua_State *L) {
		if (!_lg_typecheck_public_GetIcon(L)) {
			luaL_error(L, "luna typecheck failed in wxIcon wxXmlResourceHandler::public_GetIcon(const wxString & param = \"icon\", const wxString & defaultArtClient = wxART_OTHER, wxSize size = wxDefaultSize) function, expected prototype:\nwxIcon wxXmlResourceHandler::public_GetIcon(const wxString & param = \"icon\", const wxString & defaultArtClient = wxART_OTHER, wxSize size = wxDefaultSize)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\narg 3 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString param(lua_tostring(L,2),lua_objlen(L,2));
		wxString defaultArtClient(lua_tostring(L,3),lua_objlen(L,3));
		wxSize* size_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxXmlResourceHandler::public_GetIcon function");
		}
		wxSize size=luatop>3 ? *size_ptr : (wxSize)wxDefaultSize;

		wrapper_wxSizerXmlHandler* self=Luna< wxObject >::checkSubType< wrapper_wxSizerXmlHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxIcon wxXmlResourceHandler::public_GetIcon(const wxString &, const wxString &, wxSize). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxIcon stack_lret = self->public_GetIcon(param, defaultArtClient, size);
		wxIcon* lret = new wxIcon(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxIcon >::push(L,lret,true);

		return 1;
	}

	// wxIconBundle wxXmlResourceHandler::public_GetIconBundle(const wxString & param, const wxString & defaultArtClient = wxART_OTHER)
	static int _bind_public_GetIconBundle(lua_State *L) {
		if (!_lg_typecheck_public_GetIconBundle(L)) {
			luaL_error(L, "luna typecheck failed in wxIconBundle wxXmlResourceHandler::public_GetIconBundle(const wxString & param, const wxString & defaultArtClient = wxART_OTHER) function, expected prototype:\nwxIconBundle wxXmlResourceHandler::public_GetIconBundle(const wxString & param, const wxString & defaultArtClient = wxART_OTHER)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString param(lua_tostring(L,2),lua_objlen(L,2));
		wxString defaultArtClient(lua_tostring(L,3),lua_objlen(L,3));

		wrapper_wxSizerXmlHandler* self=Luna< wxObject >::checkSubType< wrapper_wxSizerXmlHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxIconBundle wxXmlResourceHandler::public_GetIconBundle(const wxString &, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxIconBundle stack_lret = self->public_GetIconBundle(param, defaultArtClient);
		wxIconBundle* lret = new wxIconBundle(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxIconBundle >::push(L,lret,true);

		return 1;
	}

	// wxImageList * wxXmlResourceHandler::public_GetImageList(const wxString & param = wxT ("imagelist"))
	static int _bind_public_GetImageList(lua_State *L) {
		if (!_lg_typecheck_public_GetImageList(L)) {
			luaL_error(L, "luna typecheck failed in wxImageList * wxXmlResourceHandler::public_GetImageList(const wxString & param = wxT (\"imagelist\")) function, expected prototype:\nwxImageList * wxXmlResourceHandler::public_GetImageList(const wxString & param = wxT (\"imagelist\"))\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString param(lua_tostring(L,2),lua_objlen(L,2));

		wrapper_wxSizerXmlHandler* self=Luna< wxObject >::checkSubType< wrapper_wxSizerXmlHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxImageList * wxXmlResourceHandler::public_GetImageList(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxImageList * lret = self->public_GetImageList(param);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxImageList >::push(L,lret,false);

		return 1;
	}

	// long wxXmlResourceHandler::public_GetLong(const wxString & param, long defaultv = 0)
	static int _bind_public_GetLong(lua_State *L) {
		if (!_lg_typecheck_public_GetLong(L)) {
			luaL_error(L, "luna typecheck failed in long wxXmlResourceHandler::public_GetLong(const wxString & param, long defaultv = 0) function, expected prototype:\nlong wxXmlResourceHandler::public_GetLong(const wxString & param, long defaultv = 0)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString param(lua_tostring(L,2),lua_objlen(L,2));
		long defaultv=luatop>2 ? (long)lua_tonumber(L,3) : (long)0;

		wrapper_wxSizerXmlHandler* self=Luna< wxObject >::checkSubType< wrapper_wxSizerXmlHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxXmlResourceHandler::public_GetLong(const wxString &, long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->public_GetLong(param, defaultv);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxXmlResourceHandler::public_GetName()
	static int _bind_public_GetName(lua_State *L) {
		if (!_lg_typecheck_public_GetName(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxXmlResourceHandler::public_GetName() function, expected prototype:\nwxString wxXmlResourceHandler::public_GetName()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_wxSizerXmlHandler* self=Luna< wxObject >::checkSubType< wrapper_wxSizerXmlHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxXmlResourceHandler::public_GetName(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->public_GetName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxXmlResourceHandler::public_GetNodeContent(wxXmlNode * node)
	static int _bind_public_GetNodeContent(lua_State *L) {
		if (!_lg_typecheck_public_GetNodeContent(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxXmlResourceHandler::public_GetNodeContent(wxXmlNode * node) function, expected prototype:\nwxString wxXmlResourceHandler::public_GetNodeContent(wxXmlNode * node)\nClass arguments details:\narg 1 ID = 64848530\n\n%s",luna_dumpStack(L).c_str());
		}

		wxXmlNode* node=(Luna< wxXmlNode >::check(L,2));

		wrapper_wxSizerXmlHandler* self=Luna< wxObject >::checkSubType< wrapper_wxSizerXmlHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxXmlResourceHandler::public_GetNodeContent(wxXmlNode *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->public_GetNodeContent(node);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxXmlNode * wxXmlResourceHandler::public_GetParamNode(const wxString & param)
	static int _bind_public_GetParamNode(lua_State *L) {
		if (!_lg_typecheck_public_GetParamNode(L)) {
			luaL_error(L, "luna typecheck failed in wxXmlNode * wxXmlResourceHandler::public_GetParamNode(const wxString & param) function, expected prototype:\nwxXmlNode * wxXmlResourceHandler::public_GetParamNode(const wxString & param)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString param(lua_tostring(L,2),lua_objlen(L,2));

		wrapper_wxSizerXmlHandler* self=Luna< wxObject >::checkSubType< wrapper_wxSizerXmlHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxXmlNode * wxXmlResourceHandler::public_GetParamNode(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxXmlNode * lret = self->public_GetParamNode(param);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxXmlNode >::push(L,lret,false);

		return 1;
	}

	// wxString wxXmlResourceHandler::public_GetParamValue(const wxString & param)
	static int _bind_public_GetParamValue(lua_State *L) {
		if (!_lg_typecheck_public_GetParamValue(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxXmlResourceHandler::public_GetParamValue(const wxString & param) function, expected prototype:\nwxString wxXmlResourceHandler::public_GetParamValue(const wxString & param)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString param(lua_tostring(L,2),lua_objlen(L,2));

		wrapper_wxSizerXmlHandler* self=Luna< wxObject >::checkSubType< wrapper_wxSizerXmlHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxXmlResourceHandler::public_GetParamValue(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->public_GetParamValue(param);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxPoint wxXmlResourceHandler::public_GetPosition(const wxString & param = "pos")
	static int _bind_public_GetPosition(lua_State *L) {
		if (!_lg_typecheck_public_GetPosition(L)) {
			luaL_error(L, "luna typecheck failed in wxPoint wxXmlResourceHandler::public_GetPosition(const wxString & param = \"pos\") function, expected prototype:\nwxPoint wxXmlResourceHandler::public_GetPosition(const wxString & param = \"pos\")\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString param(lua_tostring(L,2),lua_objlen(L,2));

		wrapper_wxSizerXmlHandler* self=Luna< wxObject >::checkSubType< wrapper_wxSizerXmlHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPoint wxXmlResourceHandler::public_GetPosition(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPoint stack_lret = self->public_GetPosition(param);
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// wxSize wxXmlResourceHandler::public_GetSize(const wxString & param = "size", wxWindow * windowToUse = 0)
	static int _bind_public_GetSize(lua_State *L) {
		if (!_lg_typecheck_public_GetSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxXmlResourceHandler::public_GetSize(const wxString & param = \"size\", wxWindow * windowToUse = 0) function, expected prototype:\nwxSize wxXmlResourceHandler::public_GetSize(const wxString & param = \"size\", wxWindow * windowToUse = 0)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString param(lua_tostring(L,2),lua_objlen(L,2));
		wxWindow* windowToUse=luatop>2 ? (Luna< wxObject >::checkSubType< wxWindow >(L,3)) : (wxWindow*)0;

		wrapper_wxSizerXmlHandler* self=Luna< wxObject >::checkSubType< wrapper_wxSizerXmlHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxXmlResourceHandler::public_GetSize(const wxString &, wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->public_GetSize(param, windowToUse);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// int wxXmlResourceHandler::public_GetStyle(const wxString & param = "style", int defaults = 0)
	static int _bind_public_GetStyle(lua_State *L) {
		if (!_lg_typecheck_public_GetStyle(L)) {
			luaL_error(L, "luna typecheck failed in int wxXmlResourceHandler::public_GetStyle(const wxString & param = \"style\", int defaults = 0) function, expected prototype:\nint wxXmlResourceHandler::public_GetStyle(const wxString & param = \"style\", int defaults = 0)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString param(lua_tostring(L,2),lua_objlen(L,2));
		int defaults=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;

		wrapper_wxSizerXmlHandler* self=Luna< wxObject >::checkSubType< wrapper_wxSizerXmlHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxXmlResourceHandler::public_GetStyle(const wxString &, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->public_GetStyle(param, defaults);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxXmlResourceHandler::public_GetText(const wxString & param, bool translate = true)
	static int _bind_public_GetText(lua_State *L) {
		if (!_lg_typecheck_public_GetText(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxXmlResourceHandler::public_GetText(const wxString & param, bool translate = true) function, expected prototype:\nwxString wxXmlResourceHandler::public_GetText(const wxString & param, bool translate = true)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString param(lua_tostring(L,2),lua_objlen(L,2));
		bool translate=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		wrapper_wxSizerXmlHandler* self=Luna< wxObject >::checkSubType< wrapper_wxSizerXmlHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxXmlResourceHandler::public_GetText(const wxString &, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->public_GetText(param, translate);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool wxXmlResourceHandler::public_HasParam(const wxString & param)
	static int _bind_public_HasParam(lua_State *L) {
		if (!_lg_typecheck_public_HasParam(L)) {
			luaL_error(L, "luna typecheck failed in bool wxXmlResourceHandler::public_HasParam(const wxString & param) function, expected prototype:\nbool wxXmlResourceHandler::public_HasParam(const wxString & param)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString param(lua_tostring(L,2),lua_objlen(L,2));

		wrapper_wxSizerXmlHandler* self=Luna< wxObject >::checkSubType< wrapper_wxSizerXmlHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxXmlResourceHandler::public_HasParam(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->public_HasParam(param);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxXmlResourceHandler::public_IsOfClass(wxXmlNode * node, const wxString & classname)
	static int _bind_public_IsOfClass(lua_State *L) {
		if (!_lg_typecheck_public_IsOfClass(L)) {
			luaL_error(L, "luna typecheck failed in bool wxXmlResourceHandler::public_IsOfClass(wxXmlNode * node, const wxString & classname) function, expected prototype:\nbool wxXmlResourceHandler::public_IsOfClass(wxXmlNode * node, const wxString & classname)\nClass arguments details:\narg 1 ID = 64848530\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxXmlNode* node=(Luna< wxXmlNode >::check(L,2));
		wxString classname(lua_tostring(L,3),lua_objlen(L,3));

		wrapper_wxSizerXmlHandler* self=Luna< wxObject >::checkSubType< wrapper_wxSizerXmlHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxXmlResourceHandler::public_IsOfClass(wxXmlNode *, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->public_IsOfClass(node, classname);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxXmlResourceHandler::public_SetupWindow(wxWindow * wnd)
	static int _bind_public_SetupWindow(lua_State *L) {
		if (!_lg_typecheck_public_SetupWindow(L)) {
			luaL_error(L, "luna typecheck failed in void wxXmlResourceHandler::public_SetupWindow(wxWindow * wnd) function, expected prototype:\nvoid wxXmlResourceHandler::public_SetupWindow(wxWindow * wnd)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* wnd=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wrapper_wxSizerXmlHandler* self=Luna< wxObject >::checkSubType< wrapper_wxSizerXmlHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxXmlResourceHandler::public_SetupWindow(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_SetupWindow(wnd);

		return 0;
	}

	// void wxXmlResourceHandler::public_ReportError(wxXmlNode * context, const wxString & message)
	static int _bind_public_ReportError(lua_State *L) {
		if (!_lg_typecheck_public_ReportError(L)) {
			luaL_error(L, "luna typecheck failed in void wxXmlResourceHandler::public_ReportError(wxXmlNode * context, const wxString & message) function, expected prototype:\nvoid wxXmlResourceHandler::public_ReportError(wxXmlNode * context, const wxString & message)\nClass arguments details:\narg 1 ID = 64848530\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxXmlNode* context=(Luna< wxXmlNode >::check(L,2));
		wxString message(lua_tostring(L,3),lua_objlen(L,3));

		wrapper_wxSizerXmlHandler* self=Luna< wxObject >::checkSubType< wrapper_wxSizerXmlHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxXmlResourceHandler::public_ReportError(wxXmlNode *, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_ReportError(context, message);

		return 0;
	}

	// void wxXmlResourceHandler::public_ReportParamError(const wxString & param, const wxString & message)
	static int _bind_public_ReportParamError(lua_State *L) {
		if (!_lg_typecheck_public_ReportParamError(L)) {
			luaL_error(L, "luna typecheck failed in void wxXmlResourceHandler::public_ReportParamError(const wxString & param, const wxString & message) function, expected prototype:\nvoid wxXmlResourceHandler::public_ReportParamError(const wxString & param, const wxString & message)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString param(lua_tostring(L,2),lua_objlen(L,2));
		wxString message(lua_tostring(L,3),lua_objlen(L,3));

		wrapper_wxSizerXmlHandler* self=Luna< wxObject >::checkSubType< wrapper_wxSizerXmlHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxXmlResourceHandler::public_ReportParamError(const wxString &, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_ReportParamError(param, message);

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"AddStyle",_bind_public_AddStyle},
		{"AddWindowStyles",_bind_public_AddWindowStyles},
		{"CreateChildren",_bind_public_CreateChildren},
		{"CreateChildrenPrivately",_bind_public_CreateChildrenPrivately},
		{"CreateResFromNode",_bind_public_CreateResFromNode},
		{"GetAnimation",_bind_public_GetAnimation},
		{"GetBitmap",_bind_public_GetBitmap},
		{"GetBool",_bind_public_GetBool},
		{"GetColour",_bind_public_GetColour},
		{"GetCurFileSystem",_bind_public_GetCurFileSystem},
		{"GetDimension",_bind_public_GetDimension},
		{"GetDirection",_bind_public_GetDirection},
		{"GetFont",_bind_public_GetFont},
		{"GetID",_bind_public_GetID},
		{"GetIcon",_bind_public_GetIcon},
		{"GetIconBundle",_bind_public_GetIconBundle},
		{"GetImageList",_bind_public_GetImageList},
		{"GetLong",_bind_public_GetLong},
		{"GetName",_bind_public_GetName},
		{"GetNodeContent",_bind_public_GetNodeContent},
		{"GetParamNode",_bind_public_GetParamNode},
		{"GetParamValue",_bind_public_GetParamValue},
		{"GetPosition",_bind_public_GetPosition},
		{"GetSize",_bind_public_GetSize},
		{"GetStyle",_bind_public_GetStyle},
		{"GetText",_bind_public_GetText},
		{"HasParam",_bind_public_HasParam},
		{"IsOfClass",_bind_public_IsOfClass},
		{"SetupWindow",_bind_public_SetupWindow},
		{"ReportError",_bind_public_ReportError},
		{"ReportParamError",_bind_public_ReportParamError},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

