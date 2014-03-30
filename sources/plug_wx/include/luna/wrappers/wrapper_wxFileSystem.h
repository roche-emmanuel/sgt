#ifndef _WRAPPERS_WRAPPER_WXFILESYSTEM_H_
#define _WRAPPERS_WRAPPER_WXFILESYSTEM_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/filesys.h>

class wrapper_wxFileSystem : public wxFileSystem, public luna_wrapper_base {

public:
		

	~wrapper_wxFileSystem() {
		logDEBUG3("Calling delete function for wrapper wxFileSystem");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxFileSystem*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxFileSystem(lua_State* L, lua_Table* dum) 
		: wxFileSystem(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxFileSystem*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxFileSystem*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxFileSystem::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxFileSystem*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxFileSystem::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxFileSystem*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxFileSystem::GetClassInfo();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

