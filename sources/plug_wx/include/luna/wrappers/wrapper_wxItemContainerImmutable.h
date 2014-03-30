#ifndef _WRAPPERS_WRAPPER_WXITEMCONTAINERIMMUTABLE_H_
#define _WRAPPERS_WRAPPER_WXITEMCONTAINERIMMUTABLE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/ctrlsub.h>

class wrapper_wxItemContainerImmutable : public wxItemContainerImmutable, public luna_wrapper_base {

public:
		

	~wrapper_wxItemContainerImmutable() {
		logDEBUG3("Calling delete function for wrapper wxItemContainerImmutable");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxItemContainerImmutable*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxItemContainerImmutable(lua_State* L, lua_Table* dum) 
		: wxItemContainerImmutable(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxItemContainerImmutable*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// unsigned int wxItemContainerImmutable::GetCount() const
	unsigned int GetCount() const {
		THROW_IF(!_obj.pushFunction("GetCount"),"No implementation for abstract function wxItemContainerImmutable::GetCount");
		_obj.pushArg((wxItemContainerImmutable*)this);
		return (_obj.callFunction<unsigned int>());
	};

	// wxString wxItemContainerImmutable::GetString(unsigned int n) const
	wxString GetString(unsigned int n) const {
		THROW_IF(!_obj.pushFunction("GetString"),"No implementation for abstract function wxItemContainerImmutable::GetString");
		_obj.pushArg((wxItemContainerImmutable*)this);
		_obj.pushArg(n);
		return *(_obj.callFunction<wxString*>());
	};

	// void wxItemContainerImmutable::SetString(unsigned int n, const wxString & string)
	void SetString(unsigned int n, const wxString & string) {
		THROW_IF(!_obj.pushFunction("SetString"),"No implementation for abstract function wxItemContainerImmutable::SetString");
		_obj.pushArg((wxItemContainerImmutable*)this);
		_obj.pushArg(n);
		_obj.pushArg(string);
		return (_obj.callFunction<void>());
	};

	// int wxItemContainerImmutable::FindString(const wxString & string, bool caseSensitive = false) const
	int FindString(const wxString & string, bool caseSensitive = false) const {
		if(_obj.pushFunction("FindString")) {
			_obj.pushArg((wxItemContainerImmutable*)this);
			_obj.pushArg(string);
			_obj.pushArg(caseSensitive);
			return (_obj.callFunction<int>());
		}

		return wxItemContainerImmutable::FindString(string, caseSensitive);
	};

	// void wxItemContainerImmutable::SetSelection(int n)
	void SetSelection(int n) {
		THROW_IF(!_obj.pushFunction("SetSelection"),"No implementation for abstract function wxItemContainerImmutable::SetSelection");
		_obj.pushArg((wxItemContainerImmutable*)this);
		_obj.pushArg(n);
		return (_obj.callFunction<void>());
	};

	// int wxItemContainerImmutable::GetSelection() const
	int GetSelection() const {
		THROW_IF(!_obj.pushFunction("GetSelection"),"No implementation for abstract function wxItemContainerImmutable::GetSelection");
		_obj.pushArg((wxItemContainerImmutable*)this);
		return (_obj.callFunction<int>());
	};

	// wxString wxItemContainerImmutable::GetStringSelection() const
	wxString GetStringSelection() const {
		if(_obj.pushFunction("GetStringSelection")) {
			_obj.pushArg((wxItemContainerImmutable*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxItemContainerImmutable::GetStringSelection();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

