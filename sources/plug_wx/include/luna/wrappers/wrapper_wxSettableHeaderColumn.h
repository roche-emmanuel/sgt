#ifndef _WRAPPERS_WRAPPER_WXSETTABLEHEADERCOLUMN_H_
#define _WRAPPERS_WRAPPER_WXSETTABLEHEADERCOLUMN_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/headercol.h>

class wrapper_wxSettableHeaderColumn : public wxSettableHeaderColumn, public luna_wrapper_base {

public:
		

	~wrapper_wxSettableHeaderColumn() {
		logDEBUG3("Calling delete function for wrapper wxSettableHeaderColumn");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxSettableHeaderColumn*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// wxString wxHeaderColumn::GetTitle() const
	wxString GetTitle() const {
		THROW_IF(!_obj.pushFunction("GetTitle"),"No implementation for abstract function wxHeaderColumn::GetTitle");
		_obj.pushArg((wxSettableHeaderColumn*)this);
		return *(_obj.callFunction<wxString*>());
	};

	// wxBitmap wxHeaderColumn::GetBitmap() const
	wxBitmap GetBitmap() const {
		THROW_IF(!_obj.pushFunction("GetBitmap"),"No implementation for abstract function wxHeaderColumn::GetBitmap");
		_obj.pushArg((wxSettableHeaderColumn*)this);
		return *(_obj.callFunction<wxBitmap*>());
	};

	// int wxHeaderColumn::GetWidth() const
	int GetWidth() const {
		THROW_IF(!_obj.pushFunction("GetWidth"),"No implementation for abstract function wxHeaderColumn::GetWidth");
		_obj.pushArg((wxSettableHeaderColumn*)this);
		return (_obj.callFunction<int>());
	};

	// int wxHeaderColumn::GetMinWidth() const
	int GetMinWidth() const {
		THROW_IF(!_obj.pushFunction("GetMinWidth"),"No implementation for abstract function wxHeaderColumn::GetMinWidth");
		_obj.pushArg((wxSettableHeaderColumn*)this);
		return (_obj.callFunction<int>());
	};

	// wxAlignment wxHeaderColumn::GetAlignment() const
	wxAlignment GetAlignment() const {
		THROW_IF(!_obj.pushFunction("GetAlignment"),"No implementation for abstract function wxHeaderColumn::GetAlignment");
		_obj.pushArg((wxSettableHeaderColumn*)this);
		return (wxAlignment)(_obj.callFunction<int>());
	};

	// int wxHeaderColumn::GetFlags() const
	int GetFlags() const {
		THROW_IF(!_obj.pushFunction("GetFlags"),"No implementation for abstract function wxHeaderColumn::GetFlags");
		_obj.pushArg((wxSettableHeaderColumn*)this);
		return (_obj.callFunction<int>());
	};

	// bool wxHeaderColumn::IsResizeable() const
	bool IsResizeable() const {
		if(_obj.pushFunction("IsResizeable")) {
			_obj.pushArg((wxSettableHeaderColumn*)this);
			return (_obj.callFunction<bool>());
		}

		return wxSettableHeaderColumn::IsResizeable();
	};

	// bool wxHeaderColumn::IsSortable() const
	bool IsSortable() const {
		if(_obj.pushFunction("IsSortable")) {
			_obj.pushArg((wxSettableHeaderColumn*)this);
			return (_obj.callFunction<bool>());
		}

		return wxSettableHeaderColumn::IsSortable();
	};

	// bool wxHeaderColumn::IsReorderable() const
	bool IsReorderable() const {
		if(_obj.pushFunction("IsReorderable")) {
			_obj.pushArg((wxSettableHeaderColumn*)this);
			return (_obj.callFunction<bool>());
		}

		return wxSettableHeaderColumn::IsReorderable();
	};

	// bool wxHeaderColumn::IsHidden() const
	bool IsHidden() const {
		if(_obj.pushFunction("IsHidden")) {
			_obj.pushArg((wxSettableHeaderColumn*)this);
			return (_obj.callFunction<bool>());
		}

		return wxSettableHeaderColumn::IsHidden();
	};

	// bool wxHeaderColumn::IsSortKey() const
	bool IsSortKey() const {
		THROW_IF(!_obj.pushFunction("IsSortKey"),"No implementation for abstract function wxHeaderColumn::IsSortKey");
		_obj.pushArg((wxSettableHeaderColumn*)this);
		return (_obj.callFunction<bool>());
	};

	// bool wxHeaderColumn::IsSortOrderAscending() const
	bool IsSortOrderAscending() const {
		THROW_IF(!_obj.pushFunction("IsSortOrderAscending"),"No implementation for abstract function wxHeaderColumn::IsSortOrderAscending");
		_obj.pushArg((wxSettableHeaderColumn*)this);
		return (_obj.callFunction<bool>());
	};

	// void wxSettableHeaderColumn::SetTitle(const wxString & title)
	void SetTitle(const wxString & title) {
		THROW_IF(!_obj.pushFunction("SetTitle"),"No implementation for abstract function wxSettableHeaderColumn::SetTitle");
		_obj.pushArg((wxSettableHeaderColumn*)this);
		_obj.pushArg(title);
		return (_obj.callFunction<void>());
	};

	// void wxSettableHeaderColumn::SetBitmap(const wxBitmap & bitmap)
	void SetBitmap(const wxBitmap & bitmap) {
		THROW_IF(!_obj.pushFunction("SetBitmap"),"No implementation for abstract function wxSettableHeaderColumn::SetBitmap");
		_obj.pushArg((wxSettableHeaderColumn*)this);
		_obj.pushArg(&bitmap);
		return (_obj.callFunction<void>());
	};

	// void wxSettableHeaderColumn::SetWidth(int width)
	void SetWidth(int width) {
		THROW_IF(!_obj.pushFunction("SetWidth"),"No implementation for abstract function wxSettableHeaderColumn::SetWidth");
		_obj.pushArg((wxSettableHeaderColumn*)this);
		_obj.pushArg(width);
		return (_obj.callFunction<void>());
	};

	// void wxSettableHeaderColumn::SetMinWidth(int minWidth)
	void SetMinWidth(int minWidth) {
		THROW_IF(!_obj.pushFunction("SetMinWidth"),"No implementation for abstract function wxSettableHeaderColumn::SetMinWidth");
		_obj.pushArg((wxSettableHeaderColumn*)this);
		_obj.pushArg(minWidth);
		return (_obj.callFunction<void>());
	};

	// void wxSettableHeaderColumn::SetAlignment(wxAlignment align)
	void SetAlignment(wxAlignment align) {
		THROW_IF(!_obj.pushFunction("SetAlignment"),"No implementation for abstract function wxSettableHeaderColumn::SetAlignment");
		_obj.pushArg((wxSettableHeaderColumn*)this);
		_obj.pushArg((int)align);
		return (_obj.callFunction<void>());
	};

	// void wxSettableHeaderColumn::SetFlags(int flags)
	void SetFlags(int flags) {
		THROW_IF(!_obj.pushFunction("SetFlags"),"No implementation for abstract function wxSettableHeaderColumn::SetFlags");
		_obj.pushArg((wxSettableHeaderColumn*)this);
		_obj.pushArg(flags);
		return (_obj.callFunction<void>());
	};

	// void wxSettableHeaderColumn::SetResizeable(bool resizable)
	void SetResizeable(bool resizable) {
		if(_obj.pushFunction("SetResizeable")) {
			_obj.pushArg((wxSettableHeaderColumn*)this);
			_obj.pushArg(resizable);
			return (_obj.callFunction<void>());
		}

		return wxSettableHeaderColumn::SetResizeable(resizable);
	};

	// void wxSettableHeaderColumn::SetSortable(bool sortable)
	void SetSortable(bool sortable) {
		if(_obj.pushFunction("SetSortable")) {
			_obj.pushArg((wxSettableHeaderColumn*)this);
			_obj.pushArg(sortable);
			return (_obj.callFunction<void>());
		}

		return wxSettableHeaderColumn::SetSortable(sortable);
	};

	// void wxSettableHeaderColumn::SetReorderable(bool reorderable)
	void SetReorderable(bool reorderable) {
		if(_obj.pushFunction("SetReorderable")) {
			_obj.pushArg((wxSettableHeaderColumn*)this);
			_obj.pushArg(reorderable);
			return (_obj.callFunction<void>());
		}

		return wxSettableHeaderColumn::SetReorderable(reorderable);
	};

	// void wxSettableHeaderColumn::SetHidden(bool hidden)
	void SetHidden(bool hidden) {
		if(_obj.pushFunction("SetHidden")) {
			_obj.pushArg((wxSettableHeaderColumn*)this);
			_obj.pushArg(hidden);
			return (_obj.callFunction<void>());
		}

		return wxSettableHeaderColumn::SetHidden(hidden);
	};

	// void wxSettableHeaderColumn::SetSortOrder(bool ascending)
	void SetSortOrder(bool ascending) {
		THROW_IF(!_obj.pushFunction("SetSortOrder"),"No implementation for abstract function wxSettableHeaderColumn::SetSortOrder");
		_obj.pushArg((wxSettableHeaderColumn*)this);
		_obj.pushArg(ascending);
		return (_obj.callFunction<void>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

