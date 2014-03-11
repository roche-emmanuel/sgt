#ifndef _WRAPPERS_WRAPPER_WXHEADERCOLUMN_H_
#define _WRAPPERS_WRAPPER_WXHEADERCOLUMN_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/headercol.h>

class wrapper_wxHeaderColumn : public wxHeaderColumn, public luna_wrapper_base {

public:
		

	~wrapper_wxHeaderColumn() {
		logDEBUG3("Calling delete function for wrapper wxHeaderColumn");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxHeaderColumn*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// wxString wxHeaderColumn::GetTitle() const
	wxString GetTitle() const {
		THROW_IF(!_obj.pushFunction("GetTitle"),"No implementation for abstract function wxHeaderColumn::GetTitle");
		_obj.pushArg((wxHeaderColumn*)this);
		return *(_obj.callFunction<wxString*>());
	};

	// wxBitmap wxHeaderColumn::GetBitmap() const
	wxBitmap GetBitmap() const {
		THROW_IF(!_obj.pushFunction("GetBitmap"),"No implementation for abstract function wxHeaderColumn::GetBitmap");
		_obj.pushArg((wxHeaderColumn*)this);
		return *(_obj.callFunction<wxBitmap*>());
	};

	// int wxHeaderColumn::GetWidth() const
	int GetWidth() const {
		THROW_IF(!_obj.pushFunction("GetWidth"),"No implementation for abstract function wxHeaderColumn::GetWidth");
		_obj.pushArg((wxHeaderColumn*)this);
		return (_obj.callFunction<int>());
	};

	// int wxHeaderColumn::GetMinWidth() const
	int GetMinWidth() const {
		THROW_IF(!_obj.pushFunction("GetMinWidth"),"No implementation for abstract function wxHeaderColumn::GetMinWidth");
		_obj.pushArg((wxHeaderColumn*)this);
		return (_obj.callFunction<int>());
	};

	// wxAlignment wxHeaderColumn::GetAlignment() const
	wxAlignment GetAlignment() const {
		THROW_IF(!_obj.pushFunction("GetAlignment"),"No implementation for abstract function wxHeaderColumn::GetAlignment");
		_obj.pushArg((wxHeaderColumn*)this);
		return (wxAlignment)(_obj.callFunction<int>());
	};

	// int wxHeaderColumn::GetFlags() const
	int GetFlags() const {
		THROW_IF(!_obj.pushFunction("GetFlags"),"No implementation for abstract function wxHeaderColumn::GetFlags");
		_obj.pushArg((wxHeaderColumn*)this);
		return (_obj.callFunction<int>());
	};

	// bool wxHeaderColumn::IsResizeable() const
	bool IsResizeable() const {
		if(_obj.pushFunction("IsResizeable")) {
			_obj.pushArg((wxHeaderColumn*)this);
			return (_obj.callFunction<bool>());
		}

		return wxHeaderColumn::IsResizeable();
	};

	// bool wxHeaderColumn::IsSortable() const
	bool IsSortable() const {
		if(_obj.pushFunction("IsSortable")) {
			_obj.pushArg((wxHeaderColumn*)this);
			return (_obj.callFunction<bool>());
		}

		return wxHeaderColumn::IsSortable();
	};

	// bool wxHeaderColumn::IsReorderable() const
	bool IsReorderable() const {
		if(_obj.pushFunction("IsReorderable")) {
			_obj.pushArg((wxHeaderColumn*)this);
			return (_obj.callFunction<bool>());
		}

		return wxHeaderColumn::IsReorderable();
	};

	// bool wxHeaderColumn::IsHidden() const
	bool IsHidden() const {
		if(_obj.pushFunction("IsHidden")) {
			_obj.pushArg((wxHeaderColumn*)this);
			return (_obj.callFunction<bool>());
		}

		return wxHeaderColumn::IsHidden();
	};

	// bool wxHeaderColumn::IsSortKey() const
	bool IsSortKey() const {
		THROW_IF(!_obj.pushFunction("IsSortKey"),"No implementation for abstract function wxHeaderColumn::IsSortKey");
		_obj.pushArg((wxHeaderColumn*)this);
		return (_obj.callFunction<bool>());
	};

	// bool wxHeaderColumn::IsSortOrderAscending() const
	bool IsSortOrderAscending() const {
		THROW_IF(!_obj.pushFunction("IsSortOrderAscending"),"No implementation for abstract function wxHeaderColumn::IsSortOrderAscending");
		_obj.pushArg((wxHeaderColumn*)this);
		return (_obj.callFunction<bool>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

