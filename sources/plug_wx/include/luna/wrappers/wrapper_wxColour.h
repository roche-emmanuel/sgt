#ifndef _WRAPPERS_WRAPPER_WXCOLOUR_H_
#define _WRAPPERS_WRAPPER_WXCOLOUR_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/colour.h>

class wrapper_wxColour : public wxColour, public luna_wrapper_base {

public:
		

	~wrapper_wxColour() {
		logDEBUG3("Calling delete function for wrapper wxColour");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxColour*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxColour(lua_State* L, lua_Table* dum) 
		: wxColour(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxColour*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxColour(lua_State* L, lua_Table* dum, unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha = wxALPHA_OPAQUE) 
		: wxColour(red, green, blue, alpha), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxColour*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxColour(lua_State* L, lua_Table* dum, const wxString & colourName) 
		: wxColour(colourName), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxColour*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxColour(lua_State* L, lua_Table* dum, unsigned long colRGB) 
		: wxColour(colRGB), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxColour*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxColour(lua_State* L, lua_Table* dum, const wxColour & colour) 
		: wxColour(colour), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxColour*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxColour*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxColour::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxColour*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxColour::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxColour*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxColour::GetClassInfo();
	};

	// unsigned char wxColour::Alpha() const
	unsigned char Alpha() const {
		if(_obj.pushFunction("Alpha")) {
			_obj.pushArg((wxColour*)this);
			return (_obj.callFunction<unsigned char>());
		}

		return wxColour::Alpha();
	};

	// unsigned char wxColour::Blue() const
	unsigned char Blue() const {
		if(_obj.pushFunction("Blue")) {
			_obj.pushArg((wxColour*)this);
			return (_obj.callFunction<unsigned char>());
		}

		return wxColour::Blue();
	};

	// wxString wxColour::GetAsString(long flags = ::wxC2S_NAME | ::wxC2S_CSS_SYNTAX) const
	wxString GetAsString(long flags = ::wxC2S_NAME | ::wxC2S_CSS_SYNTAX) const {
		if(_obj.pushFunction("GetAsString")) {
			_obj.pushArg((wxColour*)this);
			_obj.pushArg(flags);
			return *(_obj.callFunction<wxString*>());
		}

		return wxColour::GetAsString(flags);
	};

	// unsigned char wxColour::Green() const
	unsigned char Green() const {
		if(_obj.pushFunction("Green")) {
			_obj.pushArg((wxColour*)this);
			return (_obj.callFunction<unsigned char>());
		}

		return wxColour::Green();
	};

	// bool wxColour::IsOk() const
	bool IsOk() const {
		if(_obj.pushFunction("IsOk")) {
			_obj.pushArg((wxColour*)this);
			return (_obj.callFunction<bool>());
		}

		return wxColour::IsOk();
	};

	// unsigned char wxColour::Red() const
	unsigned char Red() const {
		if(_obj.pushFunction("Red")) {
			_obj.pushArg((wxColour*)this);
			return (_obj.callFunction<unsigned char>());
		}

		return wxColour::Red();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

