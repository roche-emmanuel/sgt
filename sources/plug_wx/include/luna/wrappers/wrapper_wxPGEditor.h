#ifndef _WRAPPERS_WRAPPER_WXPGEDITOR_H_
#define _WRAPPERS_WRAPPER_WXPGEDITOR_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/propgrid/editors.h>

class wrapper_wxPGEditor : public wxPGEditor, public luna_wrapper_base {

public:
		

	~wrapper_wxPGEditor() {
		logDEBUG3("Calling delete function for wrapper wxPGEditor");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxPGEditor*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxPGEditor(lua_State* L, lua_Table* dum) 
		: wxPGEditor(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxPGEditor*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxPGEditor*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxPGEditor::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxPGEditor*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxPGEditor::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxPGEditor*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxPGEditor::GetClassInfo();
	};

	// wxString wxPGEditor::GetName() const
	wxString GetName() const {
		if(_obj.pushFunction("GetName")) {
			_obj.pushArg((wxPGEditor*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxPGEditor::GetName();
	};

	// void wxPGEditor::UpdateControl(wxPGProperty * property, wxWindow * ctrl) const
	void UpdateControl(wxPGProperty * property, wxWindow * ctrl) const {
		THROW_IF(!_obj.pushFunction("UpdateControl"),"No implementation for abstract function wxPGEditor::UpdateControl");
		_obj.pushArg((wxPGEditor*)this);
		_obj.pushArg(property);
		_obj.pushArg(ctrl);
		return (_obj.callFunction<void>());
	};

	// void wxPGEditor::DrawValue(wxDC & dc, const wxRect & rect, wxPGProperty * property, const wxString & text) const
	void DrawValue(wxDC & dc, const wxRect & rect, wxPGProperty * property, const wxString & text) const {
		if(_obj.pushFunction("DrawValue")) {
			_obj.pushArg((wxPGEditor*)this);
			_obj.pushArg(&dc);
			_obj.pushArg(&rect);
			_obj.pushArg(property);
			_obj.pushArg(text);
			return (_obj.callFunction<void>());
		}

		return wxPGEditor::DrawValue(dc, rect, property, text);
	};

	// bool wxPGEditor::OnEvent(wxPropertyGrid * propgrid, wxPGProperty * property, wxWindow * wnd_primary, wxEvent & event) const
	bool OnEvent(wxPropertyGrid * propgrid, wxPGProperty * property, wxWindow * wnd_primary, wxEvent & event) const {
		THROW_IF(!_obj.pushFunction("OnEvent"),"No implementation for abstract function wxPGEditor::OnEvent");
		_obj.pushArg((wxPGEditor*)this);
		_obj.pushArg(propgrid);
		_obj.pushArg(property);
		_obj.pushArg(wnd_primary);
		_obj.pushArg(&event);
		return (_obj.callFunction<bool>());
	};

	// void wxPGEditor::SetValueToUnspecified(wxPGProperty * property, wxWindow * ctrl) const
	void SetValueToUnspecified(wxPGProperty * property, wxWindow * ctrl) const {
		THROW_IF(!_obj.pushFunction("SetValueToUnspecified"),"No implementation for abstract function wxPGEditor::SetValueToUnspecified");
		_obj.pushArg((wxPGEditor*)this);
		_obj.pushArg(property);
		_obj.pushArg(ctrl);
		return (_obj.callFunction<void>());
	};

	// void wxPGEditor::SetControlAppearance(wxPropertyGrid * pg, wxPGProperty * property, wxWindow * ctrl, const wxPGCell & appearance, const wxPGCell & oldAppearance, bool unspecified) const
	void SetControlAppearance(wxPropertyGrid * pg, wxPGProperty * property, wxWindow * ctrl, const wxPGCell & appearance, const wxPGCell & oldAppearance, bool unspecified) const {
		if(_obj.pushFunction("SetControlAppearance")) {
			_obj.pushArg((wxPGEditor*)this);
			_obj.pushArg(pg);
			_obj.pushArg(property);
			_obj.pushArg(ctrl);
			_obj.pushArg(&appearance);
			_obj.pushArg(&oldAppearance);
			_obj.pushArg(unspecified);
			return (_obj.callFunction<void>());
		}

		return wxPGEditor::SetControlAppearance(pg, property, ctrl, appearance, oldAppearance, unspecified);
	};

	// void wxPGEditor::SetControlStringValue(wxPGProperty * property, wxWindow * ctrl, const wxString & txt) const
	void SetControlStringValue(wxPGProperty * property, wxWindow * ctrl, const wxString & txt) const {
		if(_obj.pushFunction("SetControlStringValue")) {
			_obj.pushArg((wxPGEditor*)this);
			_obj.pushArg(property);
			_obj.pushArg(ctrl);
			_obj.pushArg(txt);
			return (_obj.callFunction<void>());
		}

		return wxPGEditor::SetControlStringValue(property, ctrl, txt);
	};

	// void wxPGEditor::SetControlIntValue(wxPGProperty * property, wxWindow * ctrl, int value) const
	void SetControlIntValue(wxPGProperty * property, wxWindow * ctrl, int value) const {
		if(_obj.pushFunction("SetControlIntValue")) {
			_obj.pushArg((wxPGEditor*)this);
			_obj.pushArg(property);
			_obj.pushArg(ctrl);
			_obj.pushArg(value);
			return (_obj.callFunction<void>());
		}

		return wxPGEditor::SetControlIntValue(property, ctrl, value);
	};

	// int wxPGEditor::InsertItem(wxWindow * ctrl, const wxString & label, int index) const
	int InsertItem(wxWindow * ctrl, const wxString & label, int index) const {
		if(_obj.pushFunction("InsertItem")) {
			_obj.pushArg((wxPGEditor*)this);
			_obj.pushArg(ctrl);
			_obj.pushArg(label);
			_obj.pushArg(index);
			return (_obj.callFunction<int>());
		}

		return wxPGEditor::InsertItem(ctrl, label, index);
	};

	// void wxPGEditor::DeleteItem(wxWindow * ctrl, int index) const
	void DeleteItem(wxWindow * ctrl, int index) const {
		if(_obj.pushFunction("DeleteItem")) {
			_obj.pushArg((wxPGEditor*)this);
			_obj.pushArg(ctrl);
			_obj.pushArg(index);
			return (_obj.callFunction<void>());
		}

		return wxPGEditor::DeleteItem(ctrl, index);
	};

	// void wxPGEditor::OnFocus(wxPGProperty * property, wxWindow * wnd) const
	void OnFocus(wxPGProperty * property, wxWindow * wnd) const {
		if(_obj.pushFunction("OnFocus")) {
			_obj.pushArg((wxPGEditor*)this);
			_obj.pushArg(property);
			_obj.pushArg(wnd);
			return (_obj.callFunction<void>());
		}

		return wxPGEditor::OnFocus(property, wnd);
	};

	// bool wxPGEditor::CanContainCustomImage() const
	bool CanContainCustomImage() const {
		if(_obj.pushFunction("CanContainCustomImage")) {
			_obj.pushArg((wxPGEditor*)this);
			return (_obj.callFunction<bool>());
		}

		return wxPGEditor::CanContainCustomImage();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


public:
// wxPGWindowList wxPGEditor::CreateControls(wxPropertyGrid * propgrid, wxPGProperty * property, const wxPoint & pos, const wxSize & size) const
wxPGWindowList CreateControls(wxPropertyGrid *, wxPGProperty *, const wxPoint &, const wxSize &) const {
	THROW_IF(true,"The function call wxPGWindowList wxPGEditor::CreateControls(wxPropertyGrid *, wxPGProperty *, const wxPoint &, const wxSize &) const is not implemented in wrapper.");
	return wxPGWindowList();
};

};




#endif

