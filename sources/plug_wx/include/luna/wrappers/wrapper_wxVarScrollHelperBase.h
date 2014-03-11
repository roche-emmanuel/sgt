#ifndef _WRAPPERS_WRAPPER_WXVARSCROLLHELPERBASE_H_
#define _WRAPPERS_WRAPPER_WXVARSCROLLHELPERBASE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/vscroll.h>

class wrapper_wxVarScrollHelperBase : public wxVarScrollHelperBase, public luna_wrapper_base {

public:
		

	~wrapper_wxVarScrollHelperBase() {
		logDEBUG3("Calling delete function for wrapper wxVarScrollHelperBase");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxVarScrollHelperBase*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxVarScrollHelperBase(lua_State* L, lua_Table* dum, wxWindow * winToScroll) 
		: wxVarScrollHelperBase(winToScroll), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxVarScrollHelperBase*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void wxVarScrollHelperBase::OnGetUnitsSizeHint(size_t unitMin, size_t unitMax) const
	void OnGetUnitsSizeHint(size_t unitMin, size_t unitMax) const {
		if(_obj.pushFunction("OnGetUnitsSizeHint")) {
			_obj.pushArg((wxVarScrollHelperBase*)this);
			_obj.pushArg(unitMin);
			_obj.pushArg(unitMax);
			return (_obj.callFunction<void>());
		}

		return wxVarScrollHelperBase::OnGetUnitsSizeHint(unitMin, unitMax);
	};

	// int wxVarScrollHelperBase::EstimateTotalSize() const
	int EstimateTotalSize() const {
		if(_obj.pushFunction("EstimateTotalSize")) {
			_obj.pushArg((wxVarScrollHelperBase*)this);
			return (_obj.callFunction<int>());
		}

		return wxVarScrollHelperBase::EstimateTotalSize();
	};

	// int wxVarScrollHelperBase::OnGetUnitSize(size_t unit) const
	int OnGetUnitSize(size_t unit) const {
		THROW_IF(!_obj.pushFunction("OnGetUnitSize"),"No implementation for abstract function wxVarScrollHelperBase::OnGetUnitSize");
		_obj.pushArg((wxVarScrollHelperBase*)this);
		_obj.pushArg(unit);
		return (_obj.callFunction<int>());
	};

public:
	// Public virtual methods:
	// int wxVarScrollHelperBase::GetNonOrientationTargetSize() const
	int GetNonOrientationTargetSize() const {
		THROW_IF(!_obj.pushFunction("GetNonOrientationTargetSize"),"No implementation for abstract function wxVarScrollHelperBase::GetNonOrientationTargetSize");
		_obj.pushArg((wxVarScrollHelperBase*)this);
		return (_obj.callFunction<int>());
	};

	// wxOrientation wxVarScrollHelperBase::GetOrientation() const
	wxOrientation GetOrientation() const {
		THROW_IF(!_obj.pushFunction("GetOrientation"),"No implementation for abstract function wxVarScrollHelperBase::GetOrientation");
		_obj.pushArg((wxVarScrollHelperBase*)this);
		return (wxOrientation)(_obj.callFunction<int>());
	};

	// int wxVarScrollHelperBase::GetOrientationTargetSize() const
	int GetOrientationTargetSize() const {
		THROW_IF(!_obj.pushFunction("GetOrientationTargetSize"),"No implementation for abstract function wxVarScrollHelperBase::GetOrientationTargetSize");
		_obj.pushArg((wxVarScrollHelperBase*)this);
		return (_obj.callFunction<int>());
	};

	// wxWindow * wxVarScrollHelperBase::GetTargetWindow() const
	wxWindow * GetTargetWindow() const {
		if(_obj.pushFunction("GetTargetWindow")) {
			_obj.pushArg((wxVarScrollHelperBase*)this);
			return (_obj.callFunction<wxWindow*>());
		}

		return wxVarScrollHelperBase::GetTargetWindow();
	};

	// void wxVarScrollHelperBase::RefreshAll()
	void RefreshAll() {
		if(_obj.pushFunction("RefreshAll")) {
			_obj.pushArg((wxVarScrollHelperBase*)this);
			return (_obj.callFunction<void>());
		}

		return wxVarScrollHelperBase::RefreshAll();
	};

	// void wxVarScrollHelperBase::SetTargetWindow(wxWindow * target)
	void SetTargetWindow(wxWindow * target) {
		if(_obj.pushFunction("SetTargetWindow")) {
			_obj.pushArg((wxVarScrollHelperBase*)this);
			_obj.pushArg(target);
			return (_obj.callFunction<void>());
		}

		return wxVarScrollHelperBase::SetTargetWindow(target);
	};

	// void wxVarScrollHelperBase::UpdateScrollbar()
	void UpdateScrollbar() {
		if(_obj.pushFunction("UpdateScrollbar")) {
			_obj.pushArg((wxVarScrollHelperBase*)this);
			return (_obj.callFunction<void>());
		}

		return wxVarScrollHelperBase::UpdateScrollbar();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

