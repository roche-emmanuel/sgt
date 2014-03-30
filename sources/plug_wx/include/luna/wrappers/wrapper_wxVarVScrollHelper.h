#ifndef _WRAPPERS_WRAPPER_WXVARVSCROLLHELPER_H_
#define _WRAPPERS_WRAPPER_WXVARVSCROLLHELPER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/vscroll.h>

class wrapper_wxVarVScrollHelper : public wxVarVScrollHelper, public luna_wrapper_base {

public:
		

	~wrapper_wxVarVScrollHelper() {
		logDEBUG3("Calling delete function for wrapper wxVarVScrollHelper");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxVarVScrollHelper*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxVarVScrollHelper(lua_State* L, lua_Table* dum, wxWindow * winToScroll) 
		: wxVarVScrollHelper(winToScroll), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxVarVScrollHelper*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void wxVarScrollHelperBase::OnGetUnitsSizeHint(size_t unitMin, size_t unitMax) const
	void OnGetUnitsSizeHint(size_t unitMin, size_t unitMax) const {
		if(_obj.pushFunction("OnGetUnitsSizeHint")) {
			_obj.pushArg((wxVarVScrollHelper*)this);
			_obj.pushArg(unitMin);
			_obj.pushArg(unitMax);
			return (_obj.callFunction<void>());
		}

		return wxVarVScrollHelper::OnGetUnitsSizeHint(unitMin, unitMax);
	};

	// int wxVarScrollHelperBase::EstimateTotalSize() const
	int EstimateTotalSize() const {
		if(_obj.pushFunction("EstimateTotalSize")) {
			_obj.pushArg((wxVarVScrollHelper*)this);
			return (_obj.callFunction<int>());
		}

		return wxVarVScrollHelper::EstimateTotalSize();
	};

	// int wxVarScrollHelperBase::OnGetUnitSize(size_t unit) const
	int OnGetUnitSize(size_t unit) const {
		THROW_IF(!_obj.pushFunction("OnGetUnitSize"),"No implementation for abstract function wxVarScrollHelperBase::OnGetUnitSize");
		_obj.pushArg((wxVarVScrollHelper*)this);
		_obj.pushArg(unit);
		return (_obj.callFunction<int>());
	};

	// void wxVarVScrollHelper::OnGetRowsHeightHint(size_t rowMin, size_t rowMax) const
	void OnGetRowsHeightHint(size_t rowMin, size_t rowMax) const {
		if(_obj.pushFunction("OnGetRowsHeightHint")) {
			_obj.pushArg((wxVarVScrollHelper*)this);
			_obj.pushArg(rowMin);
			_obj.pushArg(rowMax);
			return (_obj.callFunction<void>());
		}

		return wxVarVScrollHelper::OnGetRowsHeightHint(rowMin, rowMax);
	};

	// int wxVarVScrollHelper::EstimateTotalHeight() const
	int EstimateTotalHeight() const {
		if(_obj.pushFunction("EstimateTotalHeight")) {
			_obj.pushArg((wxVarVScrollHelper*)this);
			return (_obj.callFunction<int>());
		}

		return wxVarVScrollHelper::EstimateTotalHeight();
	};

	// int wxVarVScrollHelper::OnGetRowHeight(size_t row) const
	int OnGetRowHeight(size_t row) const {
		THROW_IF(!_obj.pushFunction("OnGetRowHeight"),"No implementation for abstract function wxVarVScrollHelper::OnGetRowHeight");
		_obj.pushArg((wxVarVScrollHelper*)this);
		_obj.pushArg(row);
		return (_obj.callFunction<int>());
	};

public:
	// Public virtual methods:
	// int wxVarScrollHelperBase::GetNonOrientationTargetSize() const
	int GetNonOrientationTargetSize() const {
		THROW_IF(!_obj.pushFunction("GetNonOrientationTargetSize"),"No implementation for abstract function wxVarScrollHelperBase::GetNonOrientationTargetSize");
		_obj.pushArg((wxVarVScrollHelper*)this);
		return (_obj.callFunction<int>());
	};

	// wxOrientation wxVarScrollHelperBase::GetOrientation() const
	wxOrientation GetOrientation() const {
		THROW_IF(!_obj.pushFunction("GetOrientation"),"No implementation for abstract function wxVarScrollHelperBase::GetOrientation");
		_obj.pushArg((wxVarVScrollHelper*)this);
		return (wxOrientation)(_obj.callFunction<int>());
	};

	// int wxVarScrollHelperBase::GetOrientationTargetSize() const
	int GetOrientationTargetSize() const {
		THROW_IF(!_obj.pushFunction("GetOrientationTargetSize"),"No implementation for abstract function wxVarScrollHelperBase::GetOrientationTargetSize");
		_obj.pushArg((wxVarVScrollHelper*)this);
		return (_obj.callFunction<int>());
	};

	// wxWindow * wxVarScrollHelperBase::GetTargetWindow() const
	wxWindow * GetTargetWindow() const {
		if(_obj.pushFunction("GetTargetWindow")) {
			_obj.pushArg((wxVarVScrollHelper*)this);
			return (_obj.callFunction<wxWindow*>());
		}

		return wxVarVScrollHelper::GetTargetWindow();
	};

	// void wxVarScrollHelperBase::RefreshAll()
	void RefreshAll() {
		if(_obj.pushFunction("RefreshAll")) {
			_obj.pushArg((wxVarVScrollHelper*)this);
			return (_obj.callFunction<void>());
		}

		return wxVarVScrollHelper::RefreshAll();
	};

	// void wxVarScrollHelperBase::SetTargetWindow(wxWindow * target)
	void SetTargetWindow(wxWindow * target) {
		if(_obj.pushFunction("SetTargetWindow")) {
			_obj.pushArg((wxVarVScrollHelper*)this);
			_obj.pushArg(target);
			return (_obj.callFunction<void>());
		}

		return wxVarVScrollHelper::SetTargetWindow(target);
	};

	// void wxVarScrollHelperBase::UpdateScrollbar()
	void UpdateScrollbar() {
		if(_obj.pushFunction("UpdateScrollbar")) {
			_obj.pushArg((wxVarVScrollHelper*)this);
			return (_obj.callFunction<void>());
		}

		return wxVarVScrollHelper::UpdateScrollbar();
	};

	// void wxVarVScrollHelper::RefreshRow(size_t row)
	void RefreshRow(size_t row) {
		if(_obj.pushFunction("RefreshRow")) {
			_obj.pushArg((wxVarVScrollHelper*)this);
			_obj.pushArg(row);
			return (_obj.callFunction<void>());
		}

		return wxVarVScrollHelper::RefreshRow(row);
	};

	// void wxVarVScrollHelper::RefreshRows(size_t from, size_t to)
	void RefreshRows(size_t from, size_t to) {
		if(_obj.pushFunction("RefreshRows")) {
			_obj.pushArg((wxVarVScrollHelper*)this);
			_obj.pushArg(from);
			_obj.pushArg(to);
			return (_obj.callFunction<void>());
		}

		return wxVarVScrollHelper::RefreshRows(from, to);
	};

	// bool wxVarVScrollHelper::ScrollRowPages(int pages)
	bool ScrollRowPages(int pages) {
		if(_obj.pushFunction("ScrollRowPages")) {
			_obj.pushArg((wxVarVScrollHelper*)this);
			_obj.pushArg(pages);
			return (_obj.callFunction<bool>());
		}

		return wxVarVScrollHelper::ScrollRowPages(pages);
	};

	// bool wxVarVScrollHelper::ScrollRows(int rows)
	bool ScrollRows(int rows) {
		if(_obj.pushFunction("ScrollRows")) {
			_obj.pushArg((wxVarVScrollHelper*)this);
			_obj.pushArg(rows);
			return (_obj.callFunction<bool>());
		}

		return wxVarVScrollHelper::ScrollRows(rows);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

