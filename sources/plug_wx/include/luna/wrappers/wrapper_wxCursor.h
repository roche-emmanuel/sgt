#ifndef _WRAPPERS_WRAPPER_WXCURSOR_H_
#define _WRAPPERS_WRAPPER_WXCURSOR_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/cursor.h>

class wrapper_wxCursor : public wxCursor, public luna_wrapper_base {

public:
		

	~wrapper_wxCursor() {
		logDEBUG3("Calling delete function for wrapper wxCursor");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxCursor*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxCursor(lua_State* L, lua_Table* dum) 
		: wxCursor(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxCursor*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxCursor(lua_State* L, lua_Table* dum, const wxString & cursorName, wxBitmapType type = wxCURSOR_DEFAULT_TYPE, int hotSpotX = 0, int hotSpotY = 0) 
		: wxCursor(cursorName, type, hotSpotX, hotSpotY), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxCursor*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxCursor(lua_State* L, lua_Table* dum, wxStockCursor cursorId) 
		: wxCursor(cursorId), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxCursor*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxCursor(lua_State* L, lua_Table* dum, const wxImage & image) 
		: wxCursor(image), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxCursor*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxCursor(lua_State* L, lua_Table* dum, const wxCursor & cursor) 
		: wxCursor(cursor), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxCursor*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxCursor*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxCursor::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxCursor*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxCursor::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxCursor*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxCursor::GetClassInfo();
	};

	// bool wxCursor::IsOk() const
	bool IsOk() const {
		if(_obj.pushFunction("IsOk")) {
			_obj.pushArg((wxCursor*)this);
			return (_obj.callFunction<bool>());
		}

		return wxCursor::IsOk();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

