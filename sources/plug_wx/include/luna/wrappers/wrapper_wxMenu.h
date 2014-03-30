#ifndef _WRAPPERS_WRAPPER_WXMENU_H_
#define _WRAPPERS_WRAPPER_WXMENU_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/menu.h>

class wrapper_wxMenu : public wxMenu, public luna_wrapper_base {

public:
		

	~wrapper_wxMenu() {
		logDEBUG3("Calling delete function for wrapper wxMenu");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxMenu*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxMenu(lua_State* L, lua_Table* dum) 
		: wxMenu(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxMenu*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxMenu(lua_State* L, lua_Table* dum, long style) 
		: wxMenu(style), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxMenu*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxMenu(lua_State* L, lua_Table* dum, const wxString & title, long style = 0) 
		: wxMenu(title, style), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxMenu*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxMenu*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxMenu::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxMenu*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxMenu::CloneRefData(data);
	};

	// bool wxEvtHandler::TryBefore(wxEvent & event)
	bool TryBefore(wxEvent & event) {
		if(_obj.pushFunction("TryBefore")) {
			_obj.pushArg((wxMenu*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxMenu::TryBefore(event);
	};

	// bool wxEvtHandler::TryAfter(wxEvent & event)
	bool TryAfter(wxEvent & event) {
		if(_obj.pushFunction("TryAfter")) {
			_obj.pushArg((wxMenu*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxMenu::TryAfter(event);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxMenu*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxMenu::GetClassInfo();
	};

	// void wxEvtHandler::QueueEvent(wxEvent * event)
	void QueueEvent(wxEvent * event) {
		if(_obj.pushFunction("QueueEvent")) {
			_obj.pushArg((wxMenu*)this);
			_obj.pushArg(event);
			return (_obj.callFunction<void>());
		}

		return wxMenu::QueueEvent(event);
	};

	// void wxEvtHandler::AddPendingEvent(const wxEvent & event)
	void AddPendingEvent(const wxEvent & event) {
		if(_obj.pushFunction("AddPendingEvent")) {
			_obj.pushArg((wxMenu*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<void>());
		}

		return wxMenu::AddPendingEvent(event);
	};

	// bool wxEvtHandler::ProcessEvent(wxEvent & event)
	bool ProcessEvent(wxEvent & event) {
		if(_obj.pushFunction("ProcessEvent")) {
			_obj.pushArg((wxMenu*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxMenu::ProcessEvent(event);
	};

	// void wxEvtHandler::SetNextHandler(wxEvtHandler * handler)
	void SetNextHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetNextHandler")) {
			_obj.pushArg((wxMenu*)this);
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxMenu::SetNextHandler(handler);
	};

	// void wxEvtHandler::SetPreviousHandler(wxEvtHandler * handler)
	void SetPreviousHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetPreviousHandler")) {
			_obj.pushArg((wxMenu*)this);
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxMenu::SetPreviousHandler(handler);
	};

	// void wxMenu::Break()
	void Break() {
		if(_obj.pushFunction("Break")) {
			_obj.pushArg((wxMenu*)this);
			return (_obj.callFunction<void>());
		}

		return wxMenu::Break();
	};

	// int wxMenu::FindItem(const wxString & itemString) const
	int FindItem(const wxString & itemString) const {
		if(_obj.pushFunction("FindItem")) {
			_obj.pushArg((wxMenu*)this);
			_obj.pushArg(itemString);
			return (_obj.callFunction<int>());
		}

		return wxMenu::FindItem(itemString);
	};

	// wxString wxMenu::GetHelpString(int id) const
	wxString GetHelpString(int id) const {
		if(_obj.pushFunction("GetHelpString")) {
			_obj.pushArg((wxMenu*)this);
			_obj.pushArg(id);
			return *(_obj.callFunction<wxString*>());
		}

		return wxMenu::GetHelpString(id);
	};

	// void wxMenu::SetHelpString(int id, const wxString & helpString)
	void SetHelpString(int id, const wxString & helpString) {
		if(_obj.pushFunction("SetHelpString")) {
			_obj.pushArg((wxMenu*)this);
			_obj.pushArg(id);
			_obj.pushArg(helpString);
			return (_obj.callFunction<void>());
		}

		return wxMenu::SetHelpString(id, helpString);
	};

	// void wxMenu::SetTitle(const wxString & title)
	void SetTitle(const wxString & title) {
		if(_obj.pushFunction("SetTitle")) {
			_obj.pushArg((wxMenu*)this);
			_obj.pushArg(title);
			return (_obj.callFunction<void>());
		}

		return wxMenu::SetTitle(title);
	};

	// void wxMenu::Attach(wxMenuBar * menubar)
	void Attach(wxMenuBar * menubar) {
		if(_obj.pushFunction("Attach")) {
			_obj.pushArg((wxMenu*)this);
			_obj.pushArg(menubar);
			return (_obj.callFunction<void>());
		}

		return wxMenu::Attach(menubar);
	};

	// void wxMenu::Detach()
	void Detach() {
		if(_obj.pushFunction("Detach")) {
			_obj.pushArg((wxMenu*)this);
			return (_obj.callFunction<void>());
		}

		return wxMenu::Detach();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

