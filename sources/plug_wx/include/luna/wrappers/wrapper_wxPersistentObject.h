#ifndef _WRAPPERS_WRAPPER_WXPERSISTENTOBJECT_H_
#define _WRAPPERS_WRAPPER_WXPERSISTENTOBJECT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/persist.h>

class wrapper_wxPersistentObject : public wxPersistentObject, public luna_wrapper_base {

public:
		

	~wrapper_wxPersistentObject() {
		logDEBUG3("Calling delete function for wrapper wxPersistentObject");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxPersistentObject*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxPersistentObject(lua_State* L, lua_Table* dum, void * obj) 
		: wxPersistentObject(obj), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxPersistentObject*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void wxPersistentObject::Save() const
	void Save() const {
		THROW_IF(!_obj.pushFunction("Save"),"No implementation for abstract function wxPersistentObject::Save");
		_obj.pushArg((wxPersistentObject*)this);
		return (_obj.callFunction<void>());
	};

	// bool wxPersistentObject::Restore()
	bool Restore() {
		THROW_IF(!_obj.pushFunction("Restore"),"No implementation for abstract function wxPersistentObject::Restore");
		_obj.pushArg((wxPersistentObject*)this);
		return (_obj.callFunction<bool>());
	};

	// wxString wxPersistentObject::GetKind() const
	wxString GetKind() const {
		THROW_IF(!_obj.pushFunction("GetKind"),"No implementation for abstract function wxPersistentObject::GetKind");
		_obj.pushArg((wxPersistentObject*)this);
		return *(_obj.callFunction<wxString*>());
	};

	// wxString wxPersistentObject::GetName() const
	wxString GetName() const {
		THROW_IF(!_obj.pushFunction("GetName"),"No implementation for abstract function wxPersistentObject::GetName");
		_obj.pushArg((wxPersistentObject*)this);
		return *(_obj.callFunction<wxString*>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

