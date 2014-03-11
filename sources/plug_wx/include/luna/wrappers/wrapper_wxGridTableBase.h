#ifndef _WRAPPERS_WRAPPER_WXGRIDTABLEBASE_H_
#define _WRAPPERS_WRAPPER_WXGRIDTABLEBASE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/grid.h>

class wrapper_wxGridTableBase : public wxGridTableBase, public luna_wrapper_base {

public:
		

	~wrapper_wxGridTableBase() {
		logDEBUG3("Calling delete function for wrapper wxGridTableBase");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxGridTableBase*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxGridTableBase(lua_State* L, lua_Table* dum) 
		: wxGridTableBase(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxGridTableBase*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxGridTableBase*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxGridTableBase::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxGridTableBase*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxGridTableBase::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxGridTableBase*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxGridTableBase::GetClassInfo();
	};

	// int wxGridTableBase::GetNumberRows()
	int GetNumberRows() {
		THROW_IF(!_obj.pushFunction("GetNumberRows"),"No implementation for abstract function wxGridTableBase::GetNumberRows");
		_obj.pushArg((wxGridTableBase*)this);
		return (_obj.callFunction<int>());
	};

	// int wxGridTableBase::GetNumberCols()
	int GetNumberCols() {
		THROW_IF(!_obj.pushFunction("GetNumberCols"),"No implementation for abstract function wxGridTableBase::GetNumberCols");
		_obj.pushArg((wxGridTableBase*)this);
		return (_obj.callFunction<int>());
	};

	// bool wxGridTableBase::IsEmptyCell(int row, int col)
	bool IsEmptyCell(int row, int col) {
		if(_obj.pushFunction("IsEmptyCell")) {
			_obj.pushArg((wxGridTableBase*)this);
			_obj.pushArg(row);
			_obj.pushArg(col);
			return (_obj.callFunction<bool>());
		}

		return wxGridTableBase::IsEmptyCell(row, col);
	};

	// wxString wxGridTableBase::GetValue(int row, int col)
	wxString GetValue(int row, int col) {
		THROW_IF(!_obj.pushFunction("GetValue"),"No implementation for abstract function wxGridTableBase::GetValue");
		_obj.pushArg((wxGridTableBase*)this);
		_obj.pushArg(row);
		_obj.pushArg(col);
		return *(_obj.callFunction<wxString*>());
	};

	// void wxGridTableBase::SetValue(int row, int col, const wxString & value)
	void SetValue(int row, int col, const wxString & value) {
		THROW_IF(!_obj.pushFunction("SetValue"),"No implementation for abstract function wxGridTableBase::SetValue");
		_obj.pushArg((wxGridTableBase*)this);
		_obj.pushArg(row);
		_obj.pushArg(col);
		_obj.pushArg(value);
		return (_obj.callFunction<void>());
	};

	// wxString wxGridTableBase::GetTypeName(int row, int col)
	wxString GetTypeName(int row, int col) {
		if(_obj.pushFunction("GetTypeName")) {
			_obj.pushArg((wxGridTableBase*)this);
			_obj.pushArg(row);
			_obj.pushArg(col);
			return *(_obj.callFunction<wxString*>());
		}

		return wxGridTableBase::GetTypeName(row, col);
	};

	// bool wxGridTableBase::CanGetValueAs(int row, int col, const wxString & typeName)
	bool CanGetValueAs(int row, int col, const wxString & typeName) {
		if(_obj.pushFunction("CanGetValueAs")) {
			_obj.pushArg((wxGridTableBase*)this);
			_obj.pushArg(row);
			_obj.pushArg(col);
			_obj.pushArg(typeName);
			return (_obj.callFunction<bool>());
		}

		return wxGridTableBase::CanGetValueAs(row, col, typeName);
	};

	// bool wxGridTableBase::CanSetValueAs(int row, int col, const wxString & typeName)
	bool CanSetValueAs(int row, int col, const wxString & typeName) {
		if(_obj.pushFunction("CanSetValueAs")) {
			_obj.pushArg((wxGridTableBase*)this);
			_obj.pushArg(row);
			_obj.pushArg(col);
			_obj.pushArg(typeName);
			return (_obj.callFunction<bool>());
		}

		return wxGridTableBase::CanSetValueAs(row, col, typeName);
	};

	// long wxGridTableBase::GetValueAsLong(int row, int col)
	long GetValueAsLong(int row, int col) {
		if(_obj.pushFunction("GetValueAsLong")) {
			_obj.pushArg((wxGridTableBase*)this);
			_obj.pushArg(row);
			_obj.pushArg(col);
			return (_obj.callFunction<long>());
		}

		return wxGridTableBase::GetValueAsLong(row, col);
	};

	// double wxGridTableBase::GetValueAsDouble(int row, int col)
	double GetValueAsDouble(int row, int col) {
		if(_obj.pushFunction("GetValueAsDouble")) {
			_obj.pushArg((wxGridTableBase*)this);
			_obj.pushArg(row);
			_obj.pushArg(col);
			return (_obj.callFunction<double>());
		}

		return wxGridTableBase::GetValueAsDouble(row, col);
	};

	// bool wxGridTableBase::GetValueAsBool(int row, int col)
	bool GetValueAsBool(int row, int col) {
		if(_obj.pushFunction("GetValueAsBool")) {
			_obj.pushArg((wxGridTableBase*)this);
			_obj.pushArg(row);
			_obj.pushArg(col);
			return (_obj.callFunction<bool>());
		}

		return wxGridTableBase::GetValueAsBool(row, col);
	};

	// void * wxGridTableBase::GetValueAsCustom(int row, int col, const wxString & typeName)
	void * GetValueAsCustom(int row, int col, const wxString & typeName) {
		if(_obj.pushFunction("GetValueAsCustom")) {
			_obj.pushArg((wxGridTableBase*)this);
			_obj.pushArg(row);
			_obj.pushArg(col);
			_obj.pushArg(typeName);
			return (_obj.callFunction<void*>());
		}

		return wxGridTableBase::GetValueAsCustom(row, col, typeName);
	};

	// void wxGridTableBase::SetValueAsLong(int row, int col, long value)
	void SetValueAsLong(int row, int col, long value) {
		if(_obj.pushFunction("SetValueAsLong")) {
			_obj.pushArg((wxGridTableBase*)this);
			_obj.pushArg(row);
			_obj.pushArg(col);
			_obj.pushArg(value);
			return (_obj.callFunction<void>());
		}

		return wxGridTableBase::SetValueAsLong(row, col, value);
	};

	// void wxGridTableBase::SetValueAsDouble(int row, int col, double value)
	void SetValueAsDouble(int row, int col, double value) {
		if(_obj.pushFunction("SetValueAsDouble")) {
			_obj.pushArg((wxGridTableBase*)this);
			_obj.pushArg(row);
			_obj.pushArg(col);
			_obj.pushArg(value);
			return (_obj.callFunction<void>());
		}

		return wxGridTableBase::SetValueAsDouble(row, col, value);
	};

	// void wxGridTableBase::SetValueAsBool(int row, int col, bool value)
	void SetValueAsBool(int row, int col, bool value) {
		if(_obj.pushFunction("SetValueAsBool")) {
			_obj.pushArg((wxGridTableBase*)this);
			_obj.pushArg(row);
			_obj.pushArg(col);
			_obj.pushArg(value);
			return (_obj.callFunction<void>());
		}

		return wxGridTableBase::SetValueAsBool(row, col, value);
	};

	// void wxGridTableBase::SetValueAsCustom(int row, int col, const wxString & typeName, void * value)
	void SetValueAsCustom(int row, int col, const wxString & typeName, void * value) {
		if(_obj.pushFunction("SetValueAsCustom")) {
			_obj.pushArg((wxGridTableBase*)this);
			_obj.pushArg(row);
			_obj.pushArg(col);
			_obj.pushArg(typeName);
			_obj.pushArg(value);
			return (_obj.callFunction<void>());
		}

		return wxGridTableBase::SetValueAsCustom(row, col, typeName, value);
	};

	// void wxGridTableBase::SetView(wxGrid * grid)
	void SetView(wxGrid * grid) {
		if(_obj.pushFunction("SetView")) {
			_obj.pushArg((wxGridTableBase*)this);
			_obj.pushArg(grid);
			return (_obj.callFunction<void>());
		}

		return wxGridTableBase::SetView(grid);
	};

	// wxGrid * wxGridTableBase::GetView() const
	wxGrid * GetView() const {
		if(_obj.pushFunction("GetView")) {
			_obj.pushArg((wxGridTableBase*)this);
			return (_obj.callFunction<wxGrid*>());
		}

		return wxGridTableBase::GetView();
	};

	// void wxGridTableBase::Clear()
	void Clear() {
		if(_obj.pushFunction("Clear")) {
			_obj.pushArg((wxGridTableBase*)this);
			return (_obj.callFunction<void>());
		}

		return wxGridTableBase::Clear();
	};

	// bool wxGridTableBase::InsertRows(size_t pos = 0, size_t numRows = 1)
	bool InsertRows(size_t pos = 0, size_t numRows = 1) {
		if(_obj.pushFunction("InsertRows")) {
			_obj.pushArg((wxGridTableBase*)this);
			_obj.pushArg(pos);
			_obj.pushArg(numRows);
			return (_obj.callFunction<bool>());
		}

		return wxGridTableBase::InsertRows(pos, numRows);
	};

	// bool wxGridTableBase::AppendRows(size_t numRows = 1)
	bool AppendRows(size_t numRows = 1) {
		if(_obj.pushFunction("AppendRows")) {
			_obj.pushArg((wxGridTableBase*)this);
			_obj.pushArg(numRows);
			return (_obj.callFunction<bool>());
		}

		return wxGridTableBase::AppendRows(numRows);
	};

	// bool wxGridTableBase::DeleteRows(size_t pos = 0, size_t numRows = 1)
	bool DeleteRows(size_t pos = 0, size_t numRows = 1) {
		if(_obj.pushFunction("DeleteRows")) {
			_obj.pushArg((wxGridTableBase*)this);
			_obj.pushArg(pos);
			_obj.pushArg(numRows);
			return (_obj.callFunction<bool>());
		}

		return wxGridTableBase::DeleteRows(pos, numRows);
	};

	// bool wxGridTableBase::InsertCols(size_t pos = 0, size_t numCols = 1)
	bool InsertCols(size_t pos = 0, size_t numCols = 1) {
		if(_obj.pushFunction("InsertCols")) {
			_obj.pushArg((wxGridTableBase*)this);
			_obj.pushArg(pos);
			_obj.pushArg(numCols);
			return (_obj.callFunction<bool>());
		}

		return wxGridTableBase::InsertCols(pos, numCols);
	};

	// bool wxGridTableBase::AppendCols(size_t numCols = 1)
	bool AppendCols(size_t numCols = 1) {
		if(_obj.pushFunction("AppendCols")) {
			_obj.pushArg((wxGridTableBase*)this);
			_obj.pushArg(numCols);
			return (_obj.callFunction<bool>());
		}

		return wxGridTableBase::AppendCols(numCols);
	};

	// bool wxGridTableBase::DeleteCols(size_t pos = 0, size_t numCols = 1)
	bool DeleteCols(size_t pos = 0, size_t numCols = 1) {
		if(_obj.pushFunction("DeleteCols")) {
			_obj.pushArg((wxGridTableBase*)this);
			_obj.pushArg(pos);
			_obj.pushArg(numCols);
			return (_obj.callFunction<bool>());
		}

		return wxGridTableBase::DeleteCols(pos, numCols);
	};

	// wxString wxGridTableBase::GetRowLabelValue(int row)
	wxString GetRowLabelValue(int row) {
		if(_obj.pushFunction("GetRowLabelValue")) {
			_obj.pushArg((wxGridTableBase*)this);
			_obj.pushArg(row);
			return *(_obj.callFunction<wxString*>());
		}

		return wxGridTableBase::GetRowLabelValue(row);
	};

	// wxString wxGridTableBase::GetColLabelValue(int col)
	wxString GetColLabelValue(int col) {
		if(_obj.pushFunction("GetColLabelValue")) {
			_obj.pushArg((wxGridTableBase*)this);
			_obj.pushArg(col);
			return *(_obj.callFunction<wxString*>());
		}

		return wxGridTableBase::GetColLabelValue(col);
	};

	// void wxGridTableBase::SetRowLabelValue(int row, const wxString & label)
	void SetRowLabelValue(int row, const wxString & label) {
		if(_obj.pushFunction("SetRowLabelValue")) {
			_obj.pushArg((wxGridTableBase*)this);
			_obj.pushArg(row);
			_obj.pushArg(label);
			return (_obj.callFunction<void>());
		}

		return wxGridTableBase::SetRowLabelValue(row, label);
	};

	// void wxGridTableBase::SetColLabelValue(int col, const wxString & label)
	void SetColLabelValue(int col, const wxString & label) {
		if(_obj.pushFunction("SetColLabelValue")) {
			_obj.pushArg((wxGridTableBase*)this);
			_obj.pushArg(col);
			_obj.pushArg(label);
			return (_obj.callFunction<void>());
		}

		return wxGridTableBase::SetColLabelValue(col, label);
	};

	// wxGridCellAttr * wxGridTableBase::GetAttr(int row, int col, wxGridCellAttr::wxAttrKind kind)
	wxGridCellAttr * GetAttr(int row, int col, wxGridCellAttr::wxAttrKind kind) {
		if(_obj.pushFunction("GetAttr")) {
			_obj.pushArg((wxGridTableBase*)this);
			_obj.pushArg(row);
			_obj.pushArg(col);
			_obj.pushArg((int)kind);
			return (_obj.callFunction<wxGridCellAttr*>());
		}

		return wxGridTableBase::GetAttr(row, col, kind);
	};

	// void wxGridTableBase::SetAttr(wxGridCellAttr * attr, int row, int col)
	void SetAttr(wxGridCellAttr * attr, int row, int col) {
		if(_obj.pushFunction("SetAttr")) {
			_obj.pushArg((wxGridTableBase*)this);
			_obj.pushArg(attr);
			_obj.pushArg(row);
			_obj.pushArg(col);
			return (_obj.callFunction<void>());
		}

		return wxGridTableBase::SetAttr(attr, row, col);
	};

	// void wxGridTableBase::SetRowAttr(wxGridCellAttr * attr, int row)
	void SetRowAttr(wxGridCellAttr * attr, int row) {
		if(_obj.pushFunction("SetRowAttr")) {
			_obj.pushArg((wxGridTableBase*)this);
			_obj.pushArg(attr);
			_obj.pushArg(row);
			return (_obj.callFunction<void>());
		}

		return wxGridTableBase::SetRowAttr(attr, row);
	};

	// void wxGridTableBase::SetColAttr(wxGridCellAttr * attr, int col)
	void SetColAttr(wxGridCellAttr * attr, int col) {
		if(_obj.pushFunction("SetColAttr")) {
			_obj.pushArg((wxGridTableBase*)this);
			_obj.pushArg(attr);
			_obj.pushArg(col);
			return (_obj.callFunction<void>());
		}

		return wxGridTableBase::SetColAttr(attr, col);
	};

	// bool wxGridTableBase::CanHaveAttributes()
	bool CanHaveAttributes() {
		if(_obj.pushFunction("CanHaveAttributes")) {
			_obj.pushArg((wxGridTableBase*)this);
			return (_obj.callFunction<bool>());
		}

		return wxGridTableBase::CanHaveAttributes();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

