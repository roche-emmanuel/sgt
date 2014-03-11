#ifndef _WRAPPERS_WRAPPER_WXSIZERITEM_H_
#define _WRAPPERS_WRAPPER_WXSIZERITEM_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/sizer.h>

class wrapper_wxSizerItem : public wxSizerItem, public luna_wrapper_base {

public:
		

	~wrapper_wxSizerItem() {
		logDEBUG3("Calling delete function for wrapper wxSizerItem");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxSizerItem*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxSizerItem(lua_State* L, lua_Table* dum, int width, int height, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL) 
		: wxSizerItem(width, height, proportion, flag, border, userData), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxSizerItem*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxSizerItem(lua_State* L, lua_Table* dum, wxWindow * window, const wxSizerFlags & flags) 
		: wxSizerItem(window, flags), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxSizerItem*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxSizerItem(lua_State* L, lua_Table* dum, wxWindow * window, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL) 
		: wxSizerItem(window, proportion, flag, border, userData), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxSizerItem*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxSizerItem(lua_State* L, lua_Table* dum, wxSizer * sizer, const wxSizerFlags & flags) 
		: wxSizerItem(sizer, flags), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxSizerItem*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxSizerItem(lua_State* L, lua_Table* dum, wxSizer * sizer, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL) 
		: wxSizerItem(sizer, proportion, flag, border, userData), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxSizerItem*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxSizerItem*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxSizerItem::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxSizerItem*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxSizerItem::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxSizerItem*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxSizerItem::GetClassInfo();
	};

	// wxSize wxSizerItem::CalcMin()
	wxSize CalcMin() {
		if(_obj.pushFunction("CalcMin")) {
			_obj.pushArg((wxSizerItem*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxSizerItem::CalcMin();
	};

	// void wxSizerItem::DeleteWindows()
	void DeleteWindows() {
		if(_obj.pushFunction("DeleteWindows")) {
			_obj.pushArg((wxSizerItem*)this);
			return (_obj.callFunction<void>());
		}

		return wxSizerItem::DeleteWindows();
	};

	// wxRect wxSizerItem::GetRect()
	wxRect GetRect() {
		if(_obj.pushFunction("GetRect")) {
			_obj.pushArg((wxSizerItem*)this);
			return *(_obj.callFunction<wxRect*>());
		}

		return wxSizerItem::GetRect();
	};

	// wxSize wxSizerItem::GetSize() const
	wxSize GetSize() const {
		if(_obj.pushFunction("GetSize")) {
			_obj.pushArg((wxSizerItem*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxSizerItem::GetSize();
	};

	// void wxSizerItem::SetDimension(const wxPoint & pos, const wxSize & size)
	void SetDimension(const wxPoint & pos, const wxSize & size) {
		if(_obj.pushFunction("SetDimension")) {
			_obj.pushArg((wxSizerItem*)this);
			_obj.pushArg(&pos);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxSizerItem::SetDimension(pos, size);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

