#ifndef _WRAPPERS_WRAPPER_WXVARHSCROLLHELPER_H_
#define _WRAPPERS_WRAPPER_WXVARHSCROLLHELPER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/vscroll.h>

class wrapper_wxVarHScrollHelper : public wxVarHScrollHelper, public luna_wrapper_base {

public:
		

	~wrapper_wxVarHScrollHelper() {
		logDEBUG3("Calling delete function for wrapper wxVarHScrollHelper");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxVarHScrollHelper*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxVarHScrollHelper(lua_State* L, lua_Table* dum, wxWindow * winToScroll) 
		: wxVarHScrollHelper(winToScroll), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxVarHScrollHelper*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void wxVarScrollHelperBase::OnGetUnitsSizeHint(size_t unitMin, size_t unitMax) const
	void OnGetUnitsSizeHint(size_t unitMin, size_t unitMax) const {
		if(_obj.pushFunction("OnGetUnitsSizeHint")) {
			_obj.pushArg((wxVarHScrollHelper*)this);
			_obj.pushArg(unitMin);
			_obj.pushArg(unitMax);
			return (_obj.callFunction<void>());
		}

		return wxVarHScrollHelper::OnGetUnitsSizeHint(unitMin, unitMax);
	};

	// int wxVarScrollHelperBase::EstimateTotalSize() const
	int EstimateTotalSize() const {
		if(_obj.pushFunction("EstimateTotalSize")) {
			_obj.pushArg((wxVarHScrollHelper*)this);
			return (_obj.callFunction<int>());
		}

		return wxVarHScrollHelper::EstimateTotalSize();
	};

	// int wxVarScrollHelperBase::OnGetUnitSize(size_t unit) const
	int OnGetUnitSize(size_t unit) const {
		THROW_IF(!_obj.pushFunction("OnGetUnitSize"),"No implementation for abstract function wxVarScrollHelperBase::OnGetUnitSize");
		_obj.pushArg((wxVarHScrollHelper*)this);
		_obj.pushArg(unit);
		return (_obj.callFunction<int>());
	};

	// int wxVarHScrollHelper::EstimateTotalWidth() const
	int EstimateTotalWidth() const {
		if(_obj.pushFunction("EstimateTotalWidth")) {
			_obj.pushArg((wxVarHScrollHelper*)this);
			return (_obj.callFunction<int>());
		}

		return wxVarHScrollHelper::EstimateTotalWidth();
	};

	// void wxVarHScrollHelper::OnGetColumnsWidthHint(size_t columnMin, size_t columnMax) const
	void OnGetColumnsWidthHint(size_t columnMin, size_t columnMax) const {
		if(_obj.pushFunction("OnGetColumnsWidthHint")) {
			_obj.pushArg((wxVarHScrollHelper*)this);
			_obj.pushArg(columnMin);
			_obj.pushArg(columnMax);
			return (_obj.callFunction<void>());
		}

		return wxVarHScrollHelper::OnGetColumnsWidthHint(columnMin, columnMax);
	};

	// int wxVarHScrollHelper::OnGetColumnWidth(size_t column) const
	int OnGetColumnWidth(size_t column) const {
		THROW_IF(!_obj.pushFunction("OnGetColumnWidth"),"No implementation for abstract function wxVarHScrollHelper::OnGetColumnWidth");
		_obj.pushArg((wxVarHScrollHelper*)this);
		_obj.pushArg(column);
		return (_obj.callFunction<int>());
	};

public:
	// Public virtual methods:
	// int wxVarScrollHelperBase::GetNonOrientationTargetSize() const
	int GetNonOrientationTargetSize() const {
		THROW_IF(!_obj.pushFunction("GetNonOrientationTargetSize"),"No implementation for abstract function wxVarScrollHelperBase::GetNonOrientationTargetSize");
		_obj.pushArg((wxVarHScrollHelper*)this);
		return (_obj.callFunction<int>());
	};

	// wxOrientation wxVarScrollHelperBase::GetOrientation() const
	wxOrientation GetOrientation() const {
		THROW_IF(!_obj.pushFunction("GetOrientation"),"No implementation for abstract function wxVarScrollHelperBase::GetOrientation");
		_obj.pushArg((wxVarHScrollHelper*)this);
		return (wxOrientation)(_obj.callFunction<int>());
	};

	// int wxVarScrollHelperBase::GetOrientationTargetSize() const
	int GetOrientationTargetSize() const {
		THROW_IF(!_obj.pushFunction("GetOrientationTargetSize"),"No implementation for abstract function wxVarScrollHelperBase::GetOrientationTargetSize");
		_obj.pushArg((wxVarHScrollHelper*)this);
		return (_obj.callFunction<int>());
	};

	// wxWindow * wxVarScrollHelperBase::GetTargetWindow() const
	wxWindow * GetTargetWindow() const {
		if(_obj.pushFunction("GetTargetWindow")) {
			_obj.pushArg((wxVarHScrollHelper*)this);
			return (_obj.callFunction<wxWindow*>());
		}

		return wxVarHScrollHelper::GetTargetWindow();
	};

	// void wxVarScrollHelperBase::RefreshAll()
	void RefreshAll() {
		if(_obj.pushFunction("RefreshAll")) {
			_obj.pushArg((wxVarHScrollHelper*)this);
			return (_obj.callFunction<void>());
		}

		return wxVarHScrollHelper::RefreshAll();
	};

	// void wxVarScrollHelperBase::SetTargetWindow(wxWindow * target)
	void SetTargetWindow(wxWindow * target) {
		if(_obj.pushFunction("SetTargetWindow")) {
			_obj.pushArg((wxVarHScrollHelper*)this);
			_obj.pushArg(target);
			return (_obj.callFunction<void>());
		}

		return wxVarHScrollHelper::SetTargetWindow(target);
	};

	// void wxVarScrollHelperBase::UpdateScrollbar()
	void UpdateScrollbar() {
		if(_obj.pushFunction("UpdateScrollbar")) {
			_obj.pushArg((wxVarHScrollHelper*)this);
			return (_obj.callFunction<void>());
		}

		return wxVarHScrollHelper::UpdateScrollbar();
	};

	// void wxVarHScrollHelper::RefreshColumn(size_t column)
	void RefreshColumn(size_t column) {
		if(_obj.pushFunction("RefreshColumn")) {
			_obj.pushArg((wxVarHScrollHelper*)this);
			_obj.pushArg(column);
			return (_obj.callFunction<void>());
		}

		return wxVarHScrollHelper::RefreshColumn(column);
	};

	// void wxVarHScrollHelper::RefreshColumns(size_t from, size_t to)
	void RefreshColumns(size_t from, size_t to) {
		if(_obj.pushFunction("RefreshColumns")) {
			_obj.pushArg((wxVarHScrollHelper*)this);
			_obj.pushArg(from);
			_obj.pushArg(to);
			return (_obj.callFunction<void>());
		}

		return wxVarHScrollHelper::RefreshColumns(from, to);
	};

	// bool wxVarHScrollHelper::ScrollColumnPages(int pages)
	bool ScrollColumnPages(int pages) {
		if(_obj.pushFunction("ScrollColumnPages")) {
			_obj.pushArg((wxVarHScrollHelper*)this);
			_obj.pushArg(pages);
			return (_obj.callFunction<bool>());
		}

		return wxVarHScrollHelper::ScrollColumnPages(pages);
	};

	// bool wxVarHScrollHelper::ScrollColumns(int columns)
	bool ScrollColumns(int columns) {
		if(_obj.pushFunction("ScrollColumns")) {
			_obj.pushArg((wxVarHScrollHelper*)this);
			_obj.pushArg(columns);
			return (_obj.callFunction<bool>());
		}

		return wxVarHScrollHelper::ScrollColumns(columns);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

