#ifndef _WRAPPERS_WRAPPER_WXIMAGELIST_H_
#define _WRAPPERS_WRAPPER_WXIMAGELIST_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/imaglist.h>

class wrapper_wxImageList : public wxImageList, public luna_wrapper_base {

public:
		

	~wrapper_wxImageList() {
		logDEBUG3("Calling delete function for wrapper wxImageList");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxImageList*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxImageList(lua_State* L, lua_Table* dum) 
		: wxImageList(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxImageList*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxImageList(lua_State* L, lua_Table* dum, int width, int height, bool mask = true, int initialCount = 1) 
		: wxImageList(width, height, mask, initialCount), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxImageList*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxImageList*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxImageList::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxImageList*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxImageList::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxImageList*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxImageList::GetClassInfo();
	};

	// bool wxImageList::Draw(int index, wxDC & dc, int x, int y, int flags = 0x0001, bool solidBackground = false)
	bool Draw(int index, wxDC & dc, int x, int y, int flags = 0x0001, bool solidBackground = false) {
		if(_obj.pushFunction("Draw")) {
			_obj.pushArg((wxImageList*)this);
			_obj.pushArg(index);
			_obj.pushArg(&dc);
			_obj.pushArg(x);
			_obj.pushArg(y);
			_obj.pushArg(flags);
			_obj.pushArg(solidBackground);
			return (_obj.callFunction<bool>());
		}

		return wxImageList::Draw(index, dc, x, y, flags, solidBackground);
	};

	// int wxImageList::GetImageCount() const
	int GetImageCount() const {
		if(_obj.pushFunction("GetImageCount")) {
			_obj.pushArg((wxImageList*)this);
			return (_obj.callFunction<int>());
		}

		return wxImageList::GetImageCount();
	};

	// bool wxImageList::GetSize(int index, int & width, int & height) const
	bool GetSize(int index, int & width, int & height) const {
		if(_obj.pushFunction("GetSize")) {
			_obj.pushArg((wxImageList*)this);
			_obj.pushArg(index);
			_obj.pushArg(width);
			_obj.pushArg(height);
			return (_obj.callFunction<bool>());
		}

		return wxImageList::GetSize(index, width, height);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

