#ifndef _WRAPPERS_WRAPPER_WXDATAVIEWINDEXLISTMODEL_H_
#define _WRAPPERS_WRAPPER_WXDATAVIEWINDEXLISTMODEL_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/dataview.h>

class wrapper_wxDataViewIndexListModel : public wxDataViewIndexListModel, public luna_wrapper_base {

public:
		

	~wrapper_wxDataViewIndexListModel() {
		logDEBUG3("Calling delete function for wrapper wxDataViewIndexListModel");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxDataViewIndexListModel*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxDataViewIndexListModel(lua_State* L, lua_Table* dum, unsigned int initial_size = 0) 
		: wxDataViewIndexListModel(initial_size), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxDataViewIndexListModel*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// bool wxDataViewModel::Cleared()
	bool Cleared() {
		if(_obj.pushFunction("Cleared")) {
			_obj.pushArg((wxDataViewIndexListModel*)this);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewIndexListModel::Cleared();
	};

	// int wxDataViewModel::Compare(const wxDataViewItem & item1, const wxDataViewItem & item2, unsigned int column, bool ascending) const
	int Compare(const wxDataViewItem & item1, const wxDataViewItem & item2, unsigned int column, bool ascending) const {
		if(_obj.pushFunction("Compare")) {
			_obj.pushArg((wxDataViewIndexListModel*)this);
			_obj.pushArg(&item1);
			_obj.pushArg(&item2);
			_obj.pushArg(column);
			_obj.pushArg(ascending);
			return (_obj.callFunction<int>());
		}

		return wxDataViewIndexListModel::Compare(item1, item2, column, ascending);
	};

	// bool wxDataViewModel::GetAttr(const wxDataViewItem & item, unsigned int col, wxDataViewItemAttr & attr) const
	bool GetAttr(const wxDataViewItem & item, unsigned int col, wxDataViewItemAttr & attr) const {
		if(_obj.pushFunction("GetAttr")) {
			_obj.pushArg((wxDataViewIndexListModel*)this);
			_obj.pushArg(&item);
			_obj.pushArg(col);
			_obj.pushArg(&attr);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewIndexListModel::GetAttr(item, col, attr);
	};

	// bool wxDataViewModel::IsEnabled(const wxDataViewItem & item, unsigned int col) const
	bool IsEnabled(const wxDataViewItem & item, unsigned int col) const {
		if(_obj.pushFunction("IsEnabled")) {
			_obj.pushArg((wxDataViewIndexListModel*)this);
			_obj.pushArg(&item);
			_obj.pushArg(col);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewIndexListModel::IsEnabled(item, col);
	};

	// unsigned int wxDataViewModel::GetChildren(const wxDataViewItem & item, wxDataViewItemArray & children) const
	unsigned int GetChildren(const wxDataViewItem & item, wxDataViewItemArray & children) const {
		THROW_IF(!_obj.pushFunction("GetChildren"),"No implementation for abstract function wxDataViewModel::GetChildren");
		_obj.pushArg((wxDataViewIndexListModel*)this);
		_obj.pushArg(&item);
		_obj.pushArg(&children);
		return (_obj.callFunction<unsigned int>());
	};

	// unsigned int wxDataViewModel::GetColumnCount() const
	unsigned int GetColumnCount() const {
		THROW_IF(!_obj.pushFunction("GetColumnCount"),"No implementation for abstract function wxDataViewModel::GetColumnCount");
		_obj.pushArg((wxDataViewIndexListModel*)this);
		return (_obj.callFunction<unsigned int>());
	};

	// wxString wxDataViewModel::GetColumnType(unsigned int col) const
	wxString GetColumnType(unsigned int col) const {
		THROW_IF(!_obj.pushFunction("GetColumnType"),"No implementation for abstract function wxDataViewModel::GetColumnType");
		_obj.pushArg((wxDataViewIndexListModel*)this);
		_obj.pushArg(col);
		return *(_obj.callFunction<wxString*>());
	};

	// wxDataViewItem wxDataViewModel::GetParent(const wxDataViewItem & item) const
	wxDataViewItem GetParent(const wxDataViewItem & item) const {
		THROW_IF(!_obj.pushFunction("GetParent"),"No implementation for abstract function wxDataViewModel::GetParent");
		_obj.pushArg((wxDataViewIndexListModel*)this);
		_obj.pushArg(&item);
		return *(_obj.callFunction<wxDataViewItem*>());
	};

	// bool wxDataViewModel::HasContainerColumns(const wxDataViewItem & item) const
	bool HasContainerColumns(const wxDataViewItem & item) const {
		if(_obj.pushFunction("HasContainerColumns")) {
			_obj.pushArg((wxDataViewIndexListModel*)this);
			_obj.pushArg(&item);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewIndexListModel::HasContainerColumns(item);
	};

	// bool wxDataViewModel::HasDefaultCompare() const
	bool HasDefaultCompare() const {
		if(_obj.pushFunction("HasDefaultCompare")) {
			_obj.pushArg((wxDataViewIndexListModel*)this);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewIndexListModel::HasDefaultCompare();
	};

	// bool wxDataViewModel::IsContainer(const wxDataViewItem & item) const
	bool IsContainer(const wxDataViewItem & item) const {
		THROW_IF(!_obj.pushFunction("IsContainer"),"No implementation for abstract function wxDataViewModel::IsContainer");
		_obj.pushArg((wxDataViewIndexListModel*)this);
		_obj.pushArg(&item);
		return (_obj.callFunction<bool>());
	};

	// void wxDataViewModel::Resort()
	void Resort() {
		if(_obj.pushFunction("Resort")) {
			_obj.pushArg((wxDataViewIndexListModel*)this);
			return (_obj.callFunction<void>());
		}

		return wxDataViewIndexListModel::Resort();
	};

	// bool wxDataViewModel::ValueChanged(const wxDataViewItem & item, unsigned int col)
	bool ValueChanged(const wxDataViewItem & item, unsigned int col) {
		if(_obj.pushFunction("ValueChanged")) {
			_obj.pushArg((wxDataViewIndexListModel*)this);
			_obj.pushArg(&item);
			_obj.pushArg(col);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewIndexListModel::ValueChanged(item, col);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


public:
// void wxDataViewModel::GetValue(wxVariant & variant, const wxDataViewItem & item, unsigned int col) const
void GetValue(wxVariant &, const wxDataViewItem &, unsigned int) const {
	THROW_IF(true,"The function call void wxDataViewModel::GetValue(wxVariant &, const wxDataViewItem &, unsigned int) const is not implemented in wrapper.");
};

public:
// bool wxDataViewModel::SetValue(const wxVariant & variant, const wxDataViewItem & item, unsigned int col)
bool SetValue(const wxVariant &, const wxDataViewItem &, unsigned int) {
	THROW_IF(true,"The function call bool wxDataViewModel::SetValue(const wxVariant &, const wxDataViewItem &, unsigned int) is not implemented in wrapper.");
	return bool();
};

public:
// void wxDataViewListModel::GetValueByRow(wxVariant & variant, unsigned int row, unsigned int col) const
void GetValueByRow(wxVariant &, unsigned int, unsigned int) const {
	THROW_IF(true,"The function call void wxDataViewListModel::GetValueByRow(wxVariant &, unsigned int, unsigned int) const is not implemented in wrapper.");
};

public:
// bool wxDataViewListModel::SetValueByRow(const wxVariant & variant, unsigned int row, unsigned int col)
bool SetValueByRow(const wxVariant &, unsigned int, unsigned int) {
	THROW_IF(true,"The function call bool wxDataViewListModel::SetValueByRow(const wxVariant &, unsigned int, unsigned int) is not implemented in wrapper.");
	return bool();
};

};




#endif

