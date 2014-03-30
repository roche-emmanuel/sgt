#ifndef _WRAPPERS_WRAPPER_WXCOMBOPOPUP_H_
#define _WRAPPERS_WRAPPER_WXCOMBOPOPUP_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/combo.h>

class wrapper_wxComboPopup : public wxComboPopup, public luna_wrapper_base {

public:
		

	~wrapper_wxComboPopup() {
		logDEBUG3("Calling delete function for wrapper wxComboPopup");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxComboPopup*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxComboPopup(lua_State* L, lua_Table* dum) 
		: wxComboPopup(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxComboPopup*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// bool wxComboPopup::Create(wxWindow * parent)
	bool Create(wxWindow * parent) {
		THROW_IF(!_obj.pushFunction("Create"),"No implementation for abstract function wxComboPopup::Create");
		_obj.pushArg((wxComboPopup*)this);
		_obj.pushArg(parent);
		return (_obj.callFunction<bool>());
	};

	// void wxComboPopup::DestroyPopup()
	void DestroyPopup() {
		if(_obj.pushFunction("DestroyPopup")) {
			_obj.pushArg((wxComboPopup*)this);
			return (_obj.callFunction<void>());
		}

		return wxComboPopup::DestroyPopup();
	};

	// bool wxComboPopup::FindItem(const wxString & item, wxString * trueItem = NULL)
	bool FindItem(const wxString & item, wxString * trueItem = NULL) {
		if(_obj.pushFunction("FindItem")) {
			_obj.pushArg((wxComboPopup*)this);
			_obj.pushArg(item);
			_obj.pushArg(trueItem);
			return (_obj.callFunction<bool>());
		}

		return wxComboPopup::FindItem(item, trueItem);
	};

	// wxSize wxComboPopup::GetAdjustedSize(int minWidth, int prefHeight, int maxHeight)
	wxSize GetAdjustedSize(int minWidth, int prefHeight, int maxHeight) {
		if(_obj.pushFunction("GetAdjustedSize")) {
			_obj.pushArg((wxComboPopup*)this);
			_obj.pushArg(minWidth);
			_obj.pushArg(prefHeight);
			_obj.pushArg(maxHeight);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxComboPopup::GetAdjustedSize(minWidth, prefHeight, maxHeight);
	};

	// wxWindow * wxComboPopup::GetControl()
	wxWindow * GetControl() {
		THROW_IF(!_obj.pushFunction("GetControl"),"No implementation for abstract function wxComboPopup::GetControl");
		_obj.pushArg((wxComboPopup*)this);
		return (_obj.callFunction<wxWindow*>());
	};

	// wxString wxComboPopup::GetStringValue() const
	wxString GetStringValue() const {
		THROW_IF(!_obj.pushFunction("GetStringValue"),"No implementation for abstract function wxComboPopup::GetStringValue");
		_obj.pushArg((wxComboPopup*)this);
		return *(_obj.callFunction<wxString*>());
	};

	// void wxComboPopup::Init()
	void Init() {
		if(_obj.pushFunction("Init")) {
			_obj.pushArg((wxComboPopup*)this);
			return (_obj.callFunction<void>());
		}

		return wxComboPopup::Init();
	};

	// bool wxComboPopup::LazyCreate()
	bool LazyCreate() {
		if(_obj.pushFunction("LazyCreate")) {
			_obj.pushArg((wxComboPopup*)this);
			return (_obj.callFunction<bool>());
		}

		return wxComboPopup::LazyCreate();
	};

	// void wxComboPopup::OnComboDoubleClick()
	void OnComboDoubleClick() {
		if(_obj.pushFunction("OnComboDoubleClick")) {
			_obj.pushArg((wxComboPopup*)this);
			return (_obj.callFunction<void>());
		}

		return wxComboPopup::OnComboDoubleClick();
	};

	// void wxComboPopup::OnComboKeyEvent(wxKeyEvent & event)
	void OnComboKeyEvent(wxKeyEvent & event) {
		if(_obj.pushFunction("OnComboKeyEvent")) {
			_obj.pushArg((wxComboPopup*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<void>());
		}

		return wxComboPopup::OnComboKeyEvent(event);
	};

	// void wxComboPopup::OnDismiss()
	void OnDismiss() {
		if(_obj.pushFunction("OnDismiss")) {
			_obj.pushArg((wxComboPopup*)this);
			return (_obj.callFunction<void>());
		}

		return wxComboPopup::OnDismiss();
	};

	// void wxComboPopup::OnPopup()
	void OnPopup() {
		if(_obj.pushFunction("OnPopup")) {
			_obj.pushArg((wxComboPopup*)this);
			return (_obj.callFunction<void>());
		}

		return wxComboPopup::OnPopup();
	};

	// void wxComboPopup::PaintComboControl(wxDC & dc, const wxRect & rect)
	void PaintComboControl(wxDC & dc, const wxRect & rect) {
		if(_obj.pushFunction("PaintComboControl")) {
			_obj.pushArg((wxComboPopup*)this);
			_obj.pushArg(&dc);
			_obj.pushArg(&rect);
			return (_obj.callFunction<void>());
		}

		return wxComboPopup::PaintComboControl(dc, rect);
	};

	// void wxComboPopup::SetStringValue(const wxString & value)
	void SetStringValue(const wxString & value) {
		if(_obj.pushFunction("SetStringValue")) {
			_obj.pushArg((wxComboPopup*)this);
			_obj.pushArg(value);
			return (_obj.callFunction<void>());
		}

		return wxComboPopup::SetStringValue(value);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

