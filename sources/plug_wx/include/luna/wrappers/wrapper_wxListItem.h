#ifndef _WRAPPERS_WRAPPER_WXLISTITEM_H_
#define _WRAPPERS_WRAPPER_WXLISTITEM_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/listctrl.h>

class wrapper_wxListItem : public wxListItem, public luna_wrapper_base {

public:
		

	~wrapper_wxListItem() {
		logDEBUG3("Calling delete function for wrapper wxListItem");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxListItem*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxListItem(lua_State* L, lua_Table* dum) 
		: wxListItem(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxListItem*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxListItem*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxListItem::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxListItem*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxListItem::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxListItem*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxListItem::GetClassInfo();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

