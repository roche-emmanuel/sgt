#ifndef _WRAPPERS_WRAPPER_WXPERSISTENCEMANAGER_H_
#define _WRAPPERS_WRAPPER_WXPERSISTENCEMANAGER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/persist.h>

class wrapper_wxPersistenceManager : public wxPersistenceManager, public luna_wrapper_base {

public:
		

	~wrapper_wxPersistenceManager() {
		logDEBUG3("Calling delete function for wrapper wxPersistenceManager");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxPersistenceManager*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxPersistenceManager(lua_State* L, lua_Table* dum) 
		: wxPersistenceManager(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxPersistenceManager*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxConfigBase * wxPersistenceManager::GetConfig() const
	wxConfigBase * GetConfig() const {
		if(_obj.pushFunction("GetConfig")) {
			_obj.pushArg((wxPersistenceManager*)this);
			return (_obj.callFunction<wxConfigBase*>());
		}

		return wxPersistenceManager::GetConfig();
	};

	// wxString wxPersistenceManager::GetKey(const wxPersistentObject & who, const wxString & name) const
	wxString GetKey(const wxPersistentObject & who, const wxString & name) const {
		if(_obj.pushFunction("GetKey")) {
			_obj.pushArg((wxPersistenceManager*)this);
			_obj.pushArg(&who);
			_obj.pushArg(name);
			return *(_obj.callFunction<wxString*>());
		}

		return wxPersistenceManager::GetKey(who, name);
	};

public:
	// Public virtual methods:

	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

