#ifndef _WRAPPERS_WRAPPER_WXGRIDCELLNUMBEREDITOR_H_
#define _WRAPPERS_WRAPPER_WXGRIDCELLNUMBEREDITOR_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/grid.h>

class wrapper_wxGridCellNumberEditor : public wxGridCellNumberEditor, public luna_wrapper_base {

public:
		

	~wrapper_wxGridCellNumberEditor() {
		logDEBUG3("Calling delete function for wrapper wxGridCellNumberEditor");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxGridCellNumberEditor*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxGridCellNumberEditor(lua_State* L, lua_Table* dum, int min = -1, int max = -1) 
		: wxGridCellNumberEditor(min, max), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxGridCellNumberEditor*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// wxString wxGridCellEditor::GetValue() const
	wxString GetValue() const {
		THROW_IF(!_obj.pushFunction("GetValue"),"No implementation for abstract function wxGridCellEditor::GetValue");
		_obj.pushArg((wxGridCellNumberEditor*)this);
		return *(_obj.callFunction<wxString*>());
	};

	// void wxGridCellEditor::BeginEdit(int row, int col, wxGrid * grid)
	void BeginEdit(int row, int col, wxGrid * grid) {
		THROW_IF(!_obj.pushFunction("BeginEdit"),"No implementation for abstract function wxGridCellEditor::BeginEdit");
		_obj.pushArg((wxGridCellNumberEditor*)this);
		_obj.pushArg(row);
		_obj.pushArg(col);
		_obj.pushArg(grid);
		return (_obj.callFunction<void>());
	};

	// wxGridCellEditor * wxGridCellEditor::Clone() const
	wxGridCellEditor * Clone() const {
		THROW_IF(!_obj.pushFunction("Clone"),"No implementation for abstract function wxGridCellEditor::Clone");
		_obj.pushArg((wxGridCellNumberEditor*)this);
		return (_obj.callFunction<wxGridCellEditor*>());
	};

	// void wxGridCellEditor::Create(wxWindow * parent, int id, wxEvtHandler * evtHandler)
	void Create(wxWindow * parent, int id, wxEvtHandler * evtHandler) {
		THROW_IF(!_obj.pushFunction("Create"),"No implementation for abstract function wxGridCellEditor::Create");
		_obj.pushArg((wxGridCellNumberEditor*)this);
		_obj.pushArg(parent);
		_obj.pushArg(id);
		_obj.pushArg(evtHandler);
		return (_obj.callFunction<void>());
	};

	// void wxGridCellEditor::Destroy()
	void Destroy() {
		if(_obj.pushFunction("Destroy")) {
			_obj.pushArg((wxGridCellNumberEditor*)this);
			return (_obj.callFunction<void>());
		}

		return wxGridCellNumberEditor::Destroy();
	};

	// bool wxGridCellEditor::EndEdit(int row, int col, const wxGrid * grid, const wxString & oldval, wxString * newval)
	bool EndEdit(int row, int col, const wxGrid * grid, const wxString & oldval, wxString * newval) {
		THROW_IF(!_obj.pushFunction("EndEdit"),"No implementation for abstract function wxGridCellEditor::EndEdit");
		_obj.pushArg((wxGridCellNumberEditor*)this);
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
		_obj.pushArg((wxGridCellNumberEditor*)this);
		_obj.pushArg(row);
		_obj.pushArg(col);
		_obj.pushArg(grid);
		return (_obj.callFunction<void>());
	};

	// void wxGridCellEditor::HandleReturn(wxKeyEvent & event)
	void HandleReturn(wxKeyEvent & event) {
		if(_obj.pushFunction("HandleReturn")) {
			_obj.pushArg((wxGridCellNumberEditor*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<void>());
		}

		return wxGridCellNumberEditor::HandleReturn(event);
	};

	// void wxGridCellEditor::PaintBackground(const wxRect & rectCell, wxGridCellAttr * attr)
	void PaintBackground(const wxRect & rectCell, wxGridCellAttr * attr) {
		if(_obj.pushFunction("PaintBackground")) {
			_obj.pushArg((wxGridCellNumberEditor*)this);
			_obj.pushArg(&rectCell);
			_obj.pushArg(attr);
			return (_obj.callFunction<void>());
		}

		return wxGridCellNumberEditor::PaintBackground(rectCell, attr);
	};

	// void wxGridCellEditor::Reset()
	void Reset() {
		THROW_IF(!_obj.pushFunction("Reset"),"No implementation for abstract function wxGridCellEditor::Reset");
		_obj.pushArg((wxGridCellNumberEditor*)this);
		return (_obj.callFunction<void>());
	};

	// void wxGridCellEditor::SetSize(const wxRect & rect)
	void SetSize(const wxRect & rect) {
		if(_obj.pushFunction("SetSize")) {
			_obj.pushArg((wxGridCellNumberEditor*)this);
			_obj.pushArg(&rect);
			return (_obj.callFunction<void>());
		}

		return wxGridCellNumberEditor::SetSize(rect);
	};

	// void wxGridCellEditor::Show(bool show, wxGridCellAttr * attr = NULL)
	void Show(bool show, wxGridCellAttr * attr = NULL) {
		if(_obj.pushFunction("Show")) {
			_obj.pushArg((wxGridCellNumberEditor*)this);
			_obj.pushArg(show);
			_obj.pushArg(attr);
			return (_obj.callFunction<void>());
		}

		return wxGridCellNumberEditor::Show(show, attr);
	};

	// void wxGridCellEditor::StartingClick()
	void StartingClick() {
		if(_obj.pushFunction("StartingClick")) {
			_obj.pushArg((wxGridCellNumberEditor*)this);
			return (_obj.callFunction<void>());
		}

		return wxGridCellNumberEditor::StartingClick();
	};

	// void wxGridCellEditor::StartingKey(wxKeyEvent & event)
	void StartingKey(wxKeyEvent & event) {
		if(_obj.pushFunction("StartingKey")) {
			_obj.pushArg((wxGridCellNumberEditor*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<void>());
		}

		return wxGridCellNumberEditor::StartingKey(event);
	};

	// void wxGridCellNumberEditor::SetParameters(const wxString & params)
	void SetParameters(const wxString & params) {
		if(_obj.pushFunction("SetParameters")) {
			_obj.pushArg((wxGridCellNumberEditor*)this);
			_obj.pushArg(params);
			return (_obj.callFunction<void>());
		}

		return wxGridCellNumberEditor::SetParameters(params);
	};


	// Protected non-virtual methods:
	// bool wxGridCellNumberEditor::HasRange() const
	bool public_HasRange() const {
		return wxGridCellNumberEditor::HasRange();
	};

	// wxString wxGridCellNumberEditor::GetString() const
	wxString public_GetString() const {
		return wxGridCellNumberEditor::GetString();
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_HasRange(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_GetString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Protected non-virtual function binds:
	// bool wxGridCellNumberEditor::public_HasRange() const
	static int _bind_public_HasRange(lua_State *L) {
		if (!_lg_typecheck_public_HasRange(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGridCellNumberEditor::public_HasRange() const function, expected prototype:\nbool wxGridCellNumberEditor::public_HasRange() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_wxGridCellNumberEditor* self=Luna< wxGridCellEditor >::checkSubType< wrapper_wxGridCellNumberEditor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGridCellNumberEditor::public_HasRange() const. Got : '%s'\n%s",typeid(Luna< wxGridCellEditor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->public_HasRange();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxGridCellNumberEditor::public_GetString() const
	static int _bind_public_GetString(lua_State *L) {
		if (!_lg_typecheck_public_GetString(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxGridCellNumberEditor::public_GetString() const function, expected prototype:\nwxString wxGridCellNumberEditor::public_GetString() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_wxGridCellNumberEditor* self=Luna< wxGridCellEditor >::checkSubType< wrapper_wxGridCellNumberEditor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxGridCellNumberEditor::public_GetString() const. Got : '%s'\n%s",typeid(Luna< wxGridCellEditor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->public_GetString();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"HasRange",_bind_public_HasRange},
		{"GetString",_bind_public_GetString},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

