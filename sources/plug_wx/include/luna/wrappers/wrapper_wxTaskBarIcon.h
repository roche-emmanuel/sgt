#ifndef _WRAPPERS_WRAPPER_WXTASKBARICON_H_
#define _WRAPPERS_WRAPPER_WXTASKBARICON_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/taskbar.h>

class wrapper_wxTaskBarIcon : public wxTaskBarIcon, public luna_wrapper_base {

public:
		

	~wrapper_wxTaskBarIcon() {
		logDEBUG3("Calling delete function for wrapper wxTaskBarIcon");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxTaskBarIcon*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxTaskBarIcon(lua_State* L, lua_Table* dum) 
		: wxTaskBarIcon(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxTaskBarIcon*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxTaskBarIcon*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxTaskBarIcon::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxTaskBarIcon*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxTaskBarIcon::CloneRefData(data);
	};

	// bool wxEvtHandler::TryBefore(wxEvent & event)
	bool TryBefore(wxEvent & event) {
		if(_obj.pushFunction("TryBefore")) {
			_obj.pushArg((wxTaskBarIcon*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxTaskBarIcon::TryBefore(event);
	};

	// bool wxEvtHandler::TryAfter(wxEvent & event)
	bool TryAfter(wxEvent & event) {
		if(_obj.pushFunction("TryAfter")) {
			_obj.pushArg((wxTaskBarIcon*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxTaskBarIcon::TryAfter(event);
	};

	// wxMenu * wxTaskBarIcon::CreatePopupMenu()
	wxMenu * CreatePopupMenu() {
		if(_obj.pushFunction("CreatePopupMenu")) {
			_obj.pushArg((wxTaskBarIcon*)this);
			return (_obj.callFunction<wxMenu*>());
		}

		return wxTaskBarIcon::CreatePopupMenu();
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxTaskBarIcon*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxTaskBarIcon::GetClassInfo();
	};

	// void wxEvtHandler::QueueEvent(wxEvent * event)
	void QueueEvent(wxEvent * event) {
		if(_obj.pushFunction("QueueEvent")) {
			_obj.pushArg((wxTaskBarIcon*)this);
			_obj.pushArg(event);
			return (_obj.callFunction<void>());
		}

		return wxTaskBarIcon::QueueEvent(event);
	};

	// void wxEvtHandler::AddPendingEvent(const wxEvent & event)
	void AddPendingEvent(const wxEvent & event) {
		if(_obj.pushFunction("AddPendingEvent")) {
			_obj.pushArg((wxTaskBarIcon*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<void>());
		}

		return wxTaskBarIcon::AddPendingEvent(event);
	};

	// bool wxEvtHandler::ProcessEvent(wxEvent & event)
	bool ProcessEvent(wxEvent & event) {
		if(_obj.pushFunction("ProcessEvent")) {
			_obj.pushArg((wxTaskBarIcon*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxTaskBarIcon::ProcessEvent(event);
	};

	// void wxEvtHandler::SetNextHandler(wxEvtHandler * handler)
	void SetNextHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetNextHandler")) {
			_obj.pushArg((wxTaskBarIcon*)this);
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxTaskBarIcon::SetNextHandler(handler);
	};

	// void wxEvtHandler::SetPreviousHandler(wxEvtHandler * handler)
	void SetPreviousHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetPreviousHandler")) {
			_obj.pushArg((wxTaskBarIcon*)this);
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxTaskBarIcon::SetPreviousHandler(handler);
	};

	// bool wxTaskBarIcon::PopupMenu(wxMenu * menu)
	bool PopupMenu(wxMenu * menu) {
		if(_obj.pushFunction("PopupMenu")) {
			_obj.pushArg((wxTaskBarIcon*)this);
			_obj.pushArg(menu);
			return (_obj.callFunction<bool>());
		}

		return wxTaskBarIcon::PopupMenu(menu);
	};

	// bool wxTaskBarIcon::RemoveIcon()
	bool RemoveIcon() {
		if(_obj.pushFunction("RemoveIcon")) {
			_obj.pushArg((wxTaskBarIcon*)this);
			return (_obj.callFunction<bool>());
		}

		return wxTaskBarIcon::RemoveIcon();
	};

	// bool wxTaskBarIcon::SetIcon(const wxIcon & icon, const wxString & tooltip = wxEmptyString)
	bool SetIcon(const wxIcon & icon, const wxString & tooltip = wxEmptyString) {
		if(_obj.pushFunction("SetIcon")) {
			_obj.pushArg((wxTaskBarIcon*)this);
			_obj.pushArg(&icon);
			_obj.pushArg(tooltip);
			return (_obj.callFunction<bool>());
		}

		return wxTaskBarIcon::SetIcon(icon, tooltip);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

