#ifndef _WRAPPERS_WRAPPER_WXGRIDCELLBOOLEDITOR_H_
#define _WRAPPERS_WRAPPER_WXGRIDCELLBOOLEDITOR_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/grid.h>

class wrapper_wxGridCellBoolEditor : public wxGridCellBoolEditor, public luna_wrapper_base {

public:
		

	~wrapper_wxGridCellBoolEditor() {
		logDEBUG3("Calling delete function for wrapper wxGridCellBoolEditor");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxGridCellBoolEditor*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxGridCellBoolEditor(lua_State* L, lua_Table* dum) 
		: wxGridCellBoolEditor(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxGridCellBoolEditor*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// wxString wxGridCellEditor::GetValue() const
	wxString GetValue() const {
		THROW_IF(!_obj.pushFunction("GetValue"),"No implementation for abstract function wxGridCellEditor::GetValue");
		_obj.pushArg((wxGridCellBoolEditor*)this);
		return *(_obj.callFunction<wxString*>());
	};

	// void wxGridCellEditor::BeginEdit(int row, int col, wxGrid * grid)
	void BeginEdit(int row, int col, wxGrid * grid) {
		THROW_IF(!_obj.pushFunction("BeginEdit"),"No implementation for abstract function wxGridCellEditor::BeginEdit");
		_obj.pushArg((wxGridCellBoolEditor*)this);
		_obj.pushArg(row);
		_obj.pushArg(col);
		_obj.pushArg(grid);
		return (_obj.callFunction<void>());
	};

	// wxGridCellEditor * wxGridCellEditor::Clone() const
	wxGridCellEditor * Clone() const {
		THROW_IF(!_obj.pushFunction("Clone"),"No implementation for abstract function wxGridCellEditor::Clone");
		_obj.pushArg((wxGridCellBoolEditor*)this);
		return (_obj.callFunction<wxGridCellEditor*>());
	};

	// void wxGridCellEditor::Create(wxWindow * parent, int id, wxEvtHandler * evtHandler)
	void Create(wxWindow * parent, int id, wxEvtHandler * evtHandler) {
		THROW_IF(!_obj.pushFunction("Create"),"No implementation for abstract function wxGridCellEditor::Create");
		_obj.pushArg((wxGridCellBoolEditor*)this);
		_obj.pushArg(parent);
		_obj.pushArg(id);
		_obj.pushArg(evtHandler);
		return (_obj.callFunction<void>());
	};

	// void wxGridCellEditor::Destroy()
	void Destroy() {
		if(_obj.pushFunction("Destroy")) {
			_obj.pushArg((wxGridCellBoolEditor*)this);
			return (_obj.callFunction<void>());
		}

		return wxGridCellBoolEditor::Destroy();
	};

	// bool wxGridCellEditor::EndEdit(int row, int col, const wxGrid * grid, const wxString & oldval, wxString * newval)
	bool EndEdit(int row, int col, const wxGrid * grid, const wxString & oldval, wxString * newval) {
		THROW_IF(!_obj.pushFunction("EndEdit"),"No implementation for abstract function wxGridCellEditor::EndEdit");
		_obj.pushArg((wxGridCellBoolEditor*)this);
		_obj.pushArg(row);
		_obj.pushArg(col);
		_obj.pushArg(grid);
		_obj.pushArg(oldval);
		_obj.pushArg(newval);
		return (_obj.callFunction<bool>());
	};

	// void wxGridCellEditor::ApplyEdit(int row, int col, wxGrid * grid)
	void ApplyEdit(int row, int col, wxGrid * grid) {
		THROW_IF(!_obj.pushFunction("ApplyEdit"),"No implementation for abstract function wxGridCellEditor::ApplyEdit");
		_obj.pushArg((wxGridCellBoolEditor*)this);
		_obj.pushArg(row);
		_obj.pushArg(col);
		_obj.pushArg(grid);
		return (_obj.callFunction<void>());
	};

	// void wxGridCellEditor::HandleReturn(wxKeyEvent & event)
	void HandleReturn(wxKeyEvent & event) {
		if(_obj.pushFunction("HandleReturn")) {
			_obj.pushArg((wxGridCellBoolEditor*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<void>());
		}

		return wxGridCellBoolEditor::HandleReturn(event);
	};

	// void wxGridCellEditor::PaintBackground(const wxRect & rectCell, wxGridCellAttr * attr)
	void PaintBackground(const wxRect & rectCell, wxGridCellAttr * attr) {
		if(_obj.pushFunction("PaintBackground")) {
			_obj.pushArg((wxGridCellBoolEditor*)this);
			_obj.pushArg(&rectCell);
			_obj.pushArg(attr);
			return (_obj.callFunction<void>());
		}

		return wxGridCellBoolEditor::PaintBackground(rectCell, attr);
	};

	// void wxGridCellEditor::Reset()
	void Reset() {
		THROW_IF(!_obj.pushFunction("Reset"),"No implementation for abstract function wxGridCellEditor::Reset");
		_obj.pushArg((wxGridCellBoolEditor*)this);
		return (_obj.callFunction<void>());
	};

	// void wxGridCellEditor::SetSize(const wxRect & rect)
	void SetSize(const wxRect & rect) {
		if(_obj.pushFunction("SetSize")) {
			_obj.pushArg((wxGridCellBoolEditor*)this);
			_obj.pushArg(&rect);
			return (_obj.callFunction<void>());
		}

		return wxGridCellBoolEditor::SetSize(rect);
	};

	// void wxGridCellEditor::Show(bool show, wxGridCellAttr * attr = NULL)
	void Show(bool show, wxGridCellAttr * attr = NULL) {
		if(_obj.pushFunction("Show")) {
			_obj.pushArg((wxGridCellBoolEditor*)this);
			_obj.pushArg(show);
			_obj.pushArg(attr);
			return (_obj.callFunction<void>());
		}

		return wxGridCellBoolEditor::Show(show, attr);
	};

	// void wxGridCellEditor::StartingClick()
	void StartingClick() {
		if(_obj.pushFunction("StartingClick")) {
			_obj.pushArg((wxGridCellBoolEditor*)this);
			return (_obj.callFunction<void>());
		}

		return wxGridCellBoolEditor::StartingClick();
	};

	// void wxGridCellEditor::StartingKey(wxKeyEvent & event)
	void StartingKey(wxKeyEvent & event) {
		if(_obj.pushFunction("StartingKey")) {
			_obj.pushArg((wxGridCellBoolEditor*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<void>());
		}

		return wxGridCellBoolEditor::StartingKey(event);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

