#ifndef _WRAPPERS_WRAPPER_WXEVENTLOOPBASE_H_
#define _WRAPPERS_WRAPPER_WXEVENTLOOPBASE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/evtloop.h>

class wrapper_wxEventLoopBase : public wxEventLoopBase, public luna_wrapper_base {

public:
		

	~wrapper_wxEventLoopBase() {
		logDEBUG3("Calling delete function for wrapper wxEventLoopBase");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxEventLoopBase*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void wxEventLoopBase::OnExit()
	void OnExit() {
		if(_obj.pushFunction("OnExit")) {
			_obj.pushArg((wxEventLoopBase*)this);
			return (_obj.callFunction<void>());
		}

		return wxEventLoopBase::OnExit();
	};

public:
	// Public virtual methods:
	// int wxEventLoopBase::Run()
	int Run() {
		THROW_IF(!_obj.pushFunction("Run"),"No implementation for abstract function wxEventLoopBase::Run");
		_obj.pushArg((wxEventLoopBase*)this);
		return (_obj.callFunction<int>());
	};

	// bool wxEventLoopBase::IsOk() const
	bool IsOk() const {
		if(_obj.pushFunction("IsOk")) {
			_obj.pushArg((wxEventLoopBase*)this);
			return (_obj.callFunction<bool>());
		}

		return wxEventLoopBase::IsOk();
	};

	// void wxEventLoopBase::Exit(int rc = 0)
	void Exit(int rc = 0) {
		THROW_IF(!_obj.pushFunction("Exit"),"No implementation for abstract function wxEventLoopBase::Exit");
		_obj.pushArg((wxEventLoopBase*)this);
		_obj.pushArg(rc);
		return (_obj.callFunction<void>());
	};

	// bool wxEventLoopBase::Pending() const
	bool Pending() const {
		THROW_IF(!_obj.pushFunction("Pending"),"No implementation for abstract function wxEventLoopBase::Pending");
		_obj.pushArg((wxEventLoopBase*)this);
		return (_obj.callFunction<bool>());
	};

	// bool wxEventLoopBase::Dispatch()
	bool Dispatch() {
		THROW_IF(!_obj.pushFunction("Dispatch"),"No implementation for abstract function wxEventLoopBase::Dispatch");
		_obj.pushArg((wxEventLoopBase*)this);
		return (_obj.callFunction<bool>());
	};

	// int wxEventLoopBase::DispatchTimeout(unsigned long timeout)
	int DispatchTimeout(unsigned long timeout) {
		THROW_IF(!_obj.pushFunction("DispatchTimeout"),"No implementation for abstract function wxEventLoopBase::DispatchTimeout");
		_obj.pushArg((wxEventLoopBase*)this);
		_obj.pushArg(timeout);
		return (_obj.callFunction<int>());
	};

	// void wxEventLoopBase::WakeUp()
	void WakeUp() {
		THROW_IF(!_obj.pushFunction("WakeUp"),"No implementation for abstract function wxEventLoopBase::WakeUp");
		_obj.pushArg((wxEventLoopBase*)this);
		return (_obj.callFunction<void>());
	};

	// void wxEventLoopBase::WakeUpIdle()
	void WakeUpIdle() {
		if(_obj.pushFunction("WakeUpIdle")) {
			_obj.pushArg((wxEventLoopBase*)this);
			return (_obj.callFunction<void>());
		}

		return wxEventLoopBase::WakeUpIdle();
	};

	// bool wxEventLoopBase::ProcessIdle()
	bool ProcessIdle() {
		if(_obj.pushFunction("ProcessIdle")) {
			_obj.pushArg((wxEventLoopBase*)this);
			return (_obj.callFunction<bool>());
		}

		return wxEventLoopBase::ProcessIdle();
	};

	// bool wxEventLoopBase::IsYielding() const
	bool IsYielding() const {
		if(_obj.pushFunction("IsYielding")) {
			_obj.pushArg((wxEventLoopBase*)this);
			return (_obj.callFunction<bool>());
		}

		return wxEventLoopBase::IsYielding();
	};

	// bool wxEventLoopBase::IsEventAllowedInsideYield(wxEventCategory cat) const
	bool IsEventAllowedInsideYield(wxEventCategory cat) const {
		if(_obj.pushFunction("IsEventAllowedInsideYield")) {
			_obj.pushArg((wxEventLoopBase*)this);
			_obj.pushArg((int)cat);
			return (_obj.callFunction<bool>());
		}

		return wxEventLoopBase::IsEventAllowedInsideYield(cat);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

