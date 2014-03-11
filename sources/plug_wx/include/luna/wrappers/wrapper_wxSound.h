#ifndef _WRAPPERS_WRAPPER_WXSOUND_H_
#define _WRAPPERS_WRAPPER_WXSOUND_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/sound.h>

class wrapper_wxSound : public wxSound, public luna_wrapper_base {

public:
		

	~wrapper_wxSound() {
		logDEBUG3("Calling delete function for wrapper wxSound");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxSound*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxSound(lua_State* L, lua_Table* dum) 
		: wxSound(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxSound*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxSound(lua_State* L, lua_Table* dum, const wxString & fileName, bool isResource = false) 
		: wxSound(fileName, isResource), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxSound*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxSound(lua_State* L, lua_Table* dum, size_t size, const void * data) 
		: wxSound(size, data), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxSound*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxSound*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxSound::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxSound*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxSound::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxSound*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxSound::GetClassInfo();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

