#ifndef _WRAPPERS_WRAPPER_WXPALETTE_H_
#define _WRAPPERS_WRAPPER_WXPALETTE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/palette.h>

class wrapper_wxPalette : public wxPalette, public luna_wrapper_base {

public:
		

	~wrapper_wxPalette() {
		logDEBUG3("Calling delete function for wrapper wxPalette");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxPalette*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxPalette(lua_State* L, lua_Table* dum) 
		: wxPalette(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxPalette*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxPalette(lua_State* L, lua_Table* dum, const wxPalette & palette) 
		: wxPalette(palette), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxPalette*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxPalette(lua_State* L, lua_Table* dum, int n, unsigned char * red, unsigned char * green, unsigned char * blue) 
		: wxPalette(n, red, green, blue), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxPalette*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxPalette*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxPalette::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxPalette*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxPalette::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxPalette*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxPalette::GetClassInfo();
	};

	// int wxPalette::GetColoursCount() const
	int GetColoursCount() const {
		if(_obj.pushFunction("GetColoursCount")) {
			_obj.pushArg((wxPalette*)this);
			return (_obj.callFunction<int>());
		}

		return wxPalette::GetColoursCount();
	};

	// bool wxPalette::IsOk() const
	bool IsOk() const {
		if(_obj.pushFunction("IsOk")) {
			_obj.pushArg((wxPalette*)this);
			return (_obj.callFunction<bool>());
		}

		return wxPalette::IsOk();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

