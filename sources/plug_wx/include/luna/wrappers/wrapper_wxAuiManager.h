#ifndef _WRAPPERS_WRAPPER_WXAUIMANAGER_H_
#define _WRAPPERS_WRAPPER_WXAUIMANAGER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/aui/framemanager.h>

class wrapper_wxAuiManager : public wxAuiManager, public luna_wrapper_base {

public:
		

	~wrapper_wxAuiManager() {
		logDEBUG3("Calling delete function for wrapper wxAuiManager");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxAuiManager*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxAuiManager(lua_State* L, lua_Table* dum, wxWindow * managed_wnd = NULL, unsigned int flags = ::wxAUI_MGR_DEFAULT) 
		: wxAuiManager(managed_wnd, flags), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxAuiManager*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxAuiManager*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxAuiManager::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxAuiManager*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxAuiManager::CloneRefData(data);
	};

	// bool wxEvtHandler::TryBefore(wxEvent & event)
	bool TryBefore(wxEvent & event) {
		if(_obj.pushFunction("TryBefore")) {
			_obj.pushArg((wxAuiManager*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxAuiManager::TryBefore(event);
	};

	// bool wxEvtHandler::TryAfter(wxEvent & event)
	bool TryAfter(wxEvent & event) {
		if(_obj.pushFunction("TryAfter")) {
			_obj.pushArg((wxAuiManager*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxAuiManager::TryAfter(event);
	};

	// bool wxAuiManager::ProcessDockResult(wxAuiPaneInfo & target, const wxAuiPaneInfo & new_pos)
	bool ProcessDockResult(wxAuiPaneInfo & target, const wxAuiPaneInfo & new_pos) {
		if(_obj.pushFunction("ProcessDockResult")) {
			_obj.pushArg((wxAuiManager*)this);
			_obj.pushArg(&target);
			_obj.pushArg(&new_pos);
			return (_obj.callFunction<bool>());
		}

		return wxAuiManager::ProcessDockResult(target, new_pos);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxAuiManager*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxAuiManager::GetClassInfo();
	};

	// void wxEvtHandler::QueueEvent(wxEvent * event)
	void QueueEvent(wxEvent * event) {
		if(_obj.pushFunction("QueueEvent")) {
			_obj.pushArg((wxAuiManager*)this);
			_obj.pushArg(event);
			return (_obj.callFunction<void>());
		}

		return wxAuiManager::QueueEvent(event);
	};

	// void wxEvtHandler::AddPendingEvent(const wxEvent & event)
	void AddPendingEvent(const wxEvent & event) {
		if(_obj.pushFunction("AddPendingEvent")) {
			_obj.pushArg((wxAuiManager*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<void>());
		}

		return wxAuiManager::AddPendingEvent(event);
	};

	// bool wxEvtHandler::ProcessEvent(wxEvent & event)
	bool ProcessEvent(wxEvent & event) {
		if(_obj.pushFunction("ProcessEvent")) {
			_obj.pushArg((wxAuiManager*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxAuiManager::ProcessEvent(event);
	};

	// void wxEvtHandler::SetNextHandler(wxEvtHandler * handler)
	void SetNextHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetNextHandler")) {
			_obj.pushArg((wxAuiManager*)this);
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxAuiManager::SetNextHandler(handler);
	};

	// void wxEvtHandler::SetPreviousHandler(wxEvtHandler * handler)
	void SetPreviousHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetPreviousHandler")) {
			_obj.pushArg((wxAuiManager*)this);
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxAuiManager::SetPreviousHandler(handler);
	};

	// void wxAuiManager::HideHint()
	void HideHint() {
		if(_obj.pushFunction("HideHint")) {
			_obj.pushArg((wxAuiManager*)this);
			return (_obj.callFunction<void>());
		}

		return wxAuiManager::HideHint();
	};

	// void wxAuiManager::ShowHint(const wxRect & rect)
	void ShowHint(const wxRect & rect) {
		if(_obj.pushFunction("ShowHint")) {
			_obj.pushArg((wxAuiManager*)this);
			_obj.pushArg(&rect);
			return (_obj.callFunction<void>());
		}

		return wxAuiManager::ShowHint(rect);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

