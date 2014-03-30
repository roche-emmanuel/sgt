#ifndef _WRAPPERS_WRAPPER_WXACCELERATORTABLE_H_
#define _WRAPPERS_WRAPPER_WXACCELERATORTABLE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/accel.h>

class wrapper_wxAcceleratorTable : public wxAcceleratorTable, public luna_wrapper_base {

public:
		

	~wrapper_wxAcceleratorTable() {
		logDEBUG3("Calling delete function for wrapper wxAcceleratorTable");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxAcceleratorTable*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxAcceleratorTable(lua_State* L, lua_Table* dum) 
		: wxAcceleratorTable(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxAcceleratorTable*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxAcceleratorTable(lua_State* L, lua_Table* dum, const wxString & resource) 
		: wxAcceleratorTable(resource), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxAcceleratorTable*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxAcceleratorTable*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxAcceleratorTable::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxAcceleratorTable*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxAcceleratorTable::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxAcceleratorTable*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxAcceleratorTable::GetClassInfo();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

