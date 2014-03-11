#ifndef _WRAPPERS_WRAPPER_WXITEMCONTAINER_H_
#define _WRAPPERS_WRAPPER_WXITEMCONTAINER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/ctrlsub.h>

class wrapper_wxItemContainer : public wxItemContainer, public luna_wrapper_base {

public:
		

	~wrapper_wxItemContainer() {
		logDEBUG3("Calling delete function for wrapper wxItemContainer");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxItemContainer*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void wxItemContainer::DoSetItemClientData(unsigned int arg1, void * arg2)
	void DoSetItemClientData(unsigned int arg1, void * arg2) {
		THROW_IF(!_obj.pushFunction("DoSetItemClientData"),"No implementation for abstract function wxItemContainer::DoSetItemClientData");
		_obj.pushArg((wxItemContainer*)this);
		_obj.pushArg(arg1);
		_obj.pushArg(arg2);
		return (_obj.callFunction<void>());
	};

	// void * wxItemContainer::DoGetItemClientData(unsigned int arg1) const
	void * DoGetItemClientData(unsigned int arg1) const {
		THROW_IF(!_obj.pushFunction("DoGetItemClientData"),"No implementation for abstract function wxItemContainer::DoGetItemClientData");
		_obj.pushArg((wxItemContainer*)this);
		_obj.pushArg(arg1);
		return (_obj.callFunction<void*>());
	};

	// void wxItemContainer::DoClear()
	void DoClear() {
		THROW_IF(!_obj.pushFunction("DoClear"),"No implementation for abstract function wxItemContainer::DoClear");
		_obj.pushArg((wxItemContainer*)this);
		return (_obj.callFunction<void>());
	};

	// void wxItemContainer::DoDeleteOneItem(unsigned int arg1)
	void DoDeleteOneItem(unsigned int arg1) {
		THROW_IF(!_obj.pushFunction("DoDeleteOneItem"),"No implementation for abstract function wxItemContainer::DoDeleteOneItem");
		_obj.pushArg((wxItemContainer*)this);
		_obj.pushArg(arg1);
		return (_obj.callFunction<void>());
	};

public:
	// Public virtual methods:
	// unsigned int wxItemContainerImmutable::GetCount() const
	unsigned int GetCount() const {
		THROW_IF(!_obj.pushFunction("GetCount"),"No implementation for abstract function wxItemContainerImmutable::GetCount");
		_obj.pushArg((wxItemContainer*)this);
		return (_obj.callFunction<unsigned int>());
	};

	// wxString wxItemContainerImmutable::GetString(unsigned int n) const
	wxString GetString(unsigned int n) const {
		THROW_IF(!_obj.pushFunction("GetString"),"No implementation for abstract function wxItemContainerImmutable::GetString");
		_obj.pushArg((wxItemContainer*)this);
		_obj.pushArg(n);
		return *(_obj.callFunction<wxString*>());
	};

	// void wxItemContainerImmutable::SetString(unsigned int n, const wxString & string)
	void SetString(unsigned int n, const wxString & string) {
		THROW_IF(!_obj.pushFunction("SetString"),"No implementation for abstract function wxItemContainerImmutable::SetString");
		_obj.pushArg((wxItemContainer*)this);
		_obj.pushArg(n);
		_obj.pushArg(string);
		return (_obj.callFunction<void>());
	};

	// int wxItemContainerImmutable::FindString(const wxString & string, bool caseSensitive = false) const
	int FindString(const wxString & string, bool caseSensitive = false) const {
		if(_obj.pushFunction("FindString")) {
			_obj.pushArg((wxItemContainer*)this);
			_obj.pushArg(string);
			_obj.pushArg(caseSensitive);
			return (_obj.callFunction<int>());
		}

		return wxItemContainer::FindString(string, caseSensitive);
	};

	// void wxItemContainerImmutable::SetSelection(int n)
	void SetSelection(int n) {
		THROW_IF(!_obj.pushFunction("SetSelection"),"No implementation for abstract function wxItemContainerImmutable::SetSelection");
		_obj.pushArg((wxItemContainer*)this);
		_obj.pushArg(n);
		return (_obj.callFunction<void>());
	};

	// int wxItemContainerImmutable::GetSelection() const
	int GetSelection() const {
		THROW_IF(!_obj.pushFunction("GetSelection"),"No implementation for abstract function wxItemContainerImmutable::GetSelection");
		_obj.pushArg((wxItemContainer*)this);
		return (_obj.callFunction<int>());
	};

	// wxString wxItemContainerImmutable::GetStringSelection() const
	wxString GetStringSelection() const {
		if(_obj.pushFunction("GetStringSelection")) {
			_obj.pushArg((wxItemContainer*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxItemContainer::GetStringSelection();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


protected:
// int wxItemContainer::DoInsertItems(const wxArrayStringsAdapter & arg1, unsigned int arg2, void ** arg3, wxClientDataType arg4)
int DoInsertItems(const wxArrayStringsAdapter &, unsigned int, void **, wxClientDataType) {
	THROW_IF(true,"The function call int wxItemContainer::DoInsertItems(const wxArrayStringsAdapter &, unsigned int, void **, wxClientDataType) is not implemented in wrapper.");
	return (int)0;
};

};




#endif

