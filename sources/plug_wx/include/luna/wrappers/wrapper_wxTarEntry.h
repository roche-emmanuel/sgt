#ifndef _WRAPPERS_WRAPPER_WXTARENTRY_H_
#define _WRAPPERS_WRAPPER_WXTARENTRY_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/tarstrm.h>

class wrapper_wxTarEntry : public wxTarEntry, public luna_wrapper_base {

public:
		

	~wrapper_wxTarEntry() {
		logDEBUG3("Calling delete function for wrapper wxTarEntry");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxTarEntry*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxTarEntry(lua_State* L, lua_Table* dum, const wxString & name = wxEmptyString, const wxDateTime & dt = wxDateTime::Now (), long long size = wxInvalidOffset) 
		: wxTarEntry(name, dt, size), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxTarEntry*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxTarEntry(lua_State* L, lua_Table* dum, const wxTarEntry & entry) 
		: wxTarEntry(entry), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxTarEntry*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void wxTarEntry::SetSize(long long size)
	void SetSize(long long size) {
		if(_obj.pushFunction("SetSize")) {
			_obj.pushArg((wxTarEntry*)this);
			_obj.pushArg(size);
			return (_obj.callFunction<void>());
		}

		return wxTarEntry::SetSize(size);
	};

	// long long wxTarEntry::GetSize() const
	long long GetSize() const {
		if(_obj.pushFunction("GetSize")) {
			_obj.pushArg((wxTarEntry*)this);
			return (_obj.callFunction<long long>());
		}

		return wxTarEntry::GetSize();
	};

	// wxString wxTarEntry::GetInternalName() const
	wxString GetInternalName() const {
		if(_obj.pushFunction("GetInternalName")) {
			_obj.pushArg((wxTarEntry*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxTarEntry::GetInternalName();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

