#ifndef _WRAPPERS_WRAPPER_WXMENUITEM_H_
#define _WRAPPERS_WRAPPER_WXMENUITEM_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/menuitem.h>

class wrapper_wxMenuItem : public wxMenuItem, public luna_wrapper_base {

public:
		

	~wrapper_wxMenuItem() {
		logDEBUG3("Calling delete function for wrapper wxMenuItem");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxMenuItem*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxMenuItem(lua_State* L, lua_Table* dum, wxMenu * parentMenu = NULL, int id = ::wxID_SEPARATOR, const wxString & text = wxEmptyString, const wxString & helpString = wxEmptyString, wxItemKind kind = ::wxITEM_NORMAL, wxMenu * subMenu = NULL) 
		: wxMenuItem(parentMenu, id, text, helpString, kind, subMenu), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxMenuItem*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxMenuItem*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxMenuItem::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxMenuItem*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxMenuItem::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxMenuItem*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxMenuItem::GetClassInfo();
	};

	// void wxMenuItem::Check(bool check = true)
	void Check(bool check = true) {
		if(_obj.pushFunction("Check")) {
			_obj.pushArg((wxMenuItem*)this);
			_obj.pushArg(check);
			return (_obj.callFunction<void>());
		}

		return wxMenuItem::Check(check);
	};

	// void wxMenuItem::Enable(bool enable = true)
	void Enable(bool enable = true) {
		if(_obj.pushFunction("Enable")) {
			_obj.pushArg((wxMenuItem*)this);
			_obj.pushArg(enable);
			return (_obj.callFunction<void>());
		}

		return wxMenuItem::Enable(enable);
	};

	// const wxBitmap & wxMenuItem::GetBitmap() const
	const wxBitmap & GetBitmap() const {
		if(_obj.pushFunction("GetBitmap")) {
			_obj.pushArg((wxMenuItem*)this);
			return *(_obj.callFunction<wxBitmap*>());
		}

		return wxMenuItem::GetBitmap();
	};

	// wxString wxMenuItem::GetItemLabel() const
	wxString GetItemLabel() const {
		if(_obj.pushFunction("GetItemLabel")) {
			_obj.pushArg((wxMenuItem*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxMenuItem::GetItemLabel();
	};

	// wxString wxMenuItem::GetItemLabelText() const
	wxString GetItemLabelText() const {
		if(_obj.pushFunction("GetItemLabelText")) {
			_obj.pushArg((wxMenuItem*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxMenuItem::GetItemLabelText();
	};

	// bool wxMenuItem::IsChecked() const
	bool IsChecked() const {
		if(_obj.pushFunction("IsChecked")) {
			_obj.pushArg((wxMenuItem*)this);
			return (_obj.callFunction<bool>());
		}

		return wxMenuItem::IsChecked();
	};

	// bool wxMenuItem::IsEnabled() const
	bool IsEnabled() const {
		if(_obj.pushFunction("IsEnabled")) {
			_obj.pushArg((wxMenuItem*)this);
			return (_obj.callFunction<bool>());
		}

		return wxMenuItem::IsEnabled();
	};

	// void wxMenuItem::SetBitmap(const wxBitmap & bmp, bool checked = true)
	void SetBitmap(const wxBitmap & bmp, bool checked = true) {
		if(_obj.pushFunction("SetBitmap")) {
			_obj.pushArg((wxMenuItem*)this);
			_obj.pushArg(&bmp);
			_obj.pushArg(checked);
			return (_obj.callFunction<void>());
		}

		return wxMenuItem::SetBitmap(bmp, checked);
	};

	// void wxMenuItem::SetItemLabel(const wxString & label)
	void SetItemLabel(const wxString & label) {
		if(_obj.pushFunction("SetItemLabel")) {
			_obj.pushArg((wxMenuItem*)this);
			_obj.pushArg(label);
			return (_obj.callFunction<void>());
		}

		return wxMenuItem::SetItemLabel(label);
	};

	// void wxMenuItem::SetText(const wxString & text)
	void SetText(const wxString & text) {
		if(_obj.pushFunction("SetText")) {
			_obj.pushArg((wxMenuItem*)this);
			_obj.pushArg(text);
			return (_obj.callFunction<void>());
		}

		return wxMenuItem::SetText(text);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

