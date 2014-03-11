#ifndef _WRAPPERS_WRAPPER_WXCONNECTIONBASE_H_
#define _WRAPPERS_WRAPPER_WXCONNECTIONBASE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/ipcbase.h>

class wrapper_wxConnectionBase : public wxConnectionBase, public luna_wrapper_base {

public:
		

	~wrapper_wxConnectionBase() {
		logDEBUG3("Calling delete function for wrapper wxConnectionBase");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxConnectionBase*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxConnectionBase*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxConnectionBase::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxConnectionBase*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxConnectionBase::CloneRefData(data);
	};

	// bool wxConnectionBase::DoExecute(const void * arg1, size_t arg2, wxIPCFormat arg3)
	bool DoExecute(const void * arg1, size_t arg2, wxIPCFormat arg3) {
		THROW_IF(!_obj.pushFunction("DoExecute"),"No implementation for abstract function wxConnectionBase::DoExecute");
		_obj.pushArg((wxConnectionBase*)this);
		_obj.pushArg(arg1);
		_obj.pushArg(arg2);
		_obj.pushArg((int)arg3);
		return (_obj.callFunction<bool>());
	};

	// bool wxConnectionBase::DoPoke(const wxString & arg1, const void * arg2, size_t arg3, wxIPCFormat arg4)
	bool DoPoke(const wxString & arg1, const void * arg2, size_t arg3, wxIPCFormat arg4) {
		THROW_IF(!_obj.pushFunction("DoPoke"),"No implementation for abstract function wxConnectionBase::DoPoke");
		_obj.pushArg((wxConnectionBase*)this);
		_obj.pushArg(arg1);
		_obj.pushArg(arg2);
		_obj.pushArg(arg3);
		_obj.pushArg((int)arg4);
		return (_obj.callFunction<bool>());
	};

	// bool wxConnectionBase::DoAdvise(const wxString & arg1, const void * arg2, size_t arg3, wxIPCFormat arg4)
	bool DoAdvise(const wxString & arg1, const void * arg2, size_t arg3, wxIPCFormat arg4) {
		THROW_IF(!_obj.pushFunction("DoAdvise"),"No implementation for abstract function wxConnectionBase::DoAdvise");
		_obj.pushArg((wxConnectionBase*)this);
		_obj.pushArg(arg1);
		_obj.pushArg(arg2);
		_obj.pushArg(arg3);
		_obj.pushArg((int)arg4);
		return (_obj.callFunction<bool>());
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxConnectionBase*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxConnectionBase::GetClassInfo();
	};

	// const void * wxConnectionBase::Request(const wxString & arg1, size_t * arg2, wxIPCFormat arg3)
	const void * Request(const wxString & arg1, size_t * arg2, wxIPCFormat arg3) {
		THROW_IF(!_obj.pushFunction("Request"),"No implementation for abstract function wxConnectionBase::Request");
		_obj.pushArg((wxConnectionBase*)this);
		_obj.pushArg(arg1);
		_obj.pushArg(arg2);
		_obj.pushArg((int)arg3);
		return (_obj.callFunction<void*>());
	};

	// bool wxConnectionBase::StartAdvise(const wxString & arg1)
	bool StartAdvise(const wxString & arg1) {
		THROW_IF(!_obj.pushFunction("StartAdvise"),"No implementation for abstract function wxConnectionBase::StartAdvise");
		_obj.pushArg((wxConnectionBase*)this);
		_obj.pushArg(arg1);
		return (_obj.callFunction<bool>());
	};

	// bool wxConnectionBase::StopAdvise(const wxString & arg1)
	bool StopAdvise(const wxString & arg1) {
		THROW_IF(!_obj.pushFunction("StopAdvise"),"No implementation for abstract function wxConnectionBase::StopAdvise");
		_obj.pushArg((wxConnectionBase*)this);
		_obj.pushArg(arg1);
		return (_obj.callFunction<bool>());
	};

	// bool wxConnectionBase::Disconnect()
	bool Disconnect() {
		THROW_IF(!_obj.pushFunction("Disconnect"),"No implementation for abstract function wxConnectionBase::Disconnect");
		_obj.pushArg((wxConnectionBase*)this);
		return (_obj.callFunction<bool>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

