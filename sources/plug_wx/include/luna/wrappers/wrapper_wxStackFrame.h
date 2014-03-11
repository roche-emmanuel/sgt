#ifndef _WRAPPERS_WRAPPER_WXSTACKFRAME_H_
#define _WRAPPERS_WRAPPER_WXSTACKFRAME_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/stackwalk.h>

class wrapper_wxStackFrame : public wxStackFrame, public luna_wrapper_base {

public:
		

	~wrapper_wxStackFrame() {
		logDEBUG3("Calling delete function for wrapper wxStackFrame");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxStackFrame*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// bool wxStackFrame::GetParam(size_t n, wxString * type, wxString * name, wxString * value) const
	bool GetParam(size_t n, wxString * type, wxString * name, wxString * value) const {
		if(_obj.pushFunction("GetParam")) {
			_obj.pushArg((wxStackFrame*)this);
			_obj.pushArg(n);
			_obj.pushArg(type);
			_obj.pushArg(name);
			_obj.pushArg(value);
			return (_obj.callFunction<bool>());
		}

		return wxStackFrame::GetParam(n, type, name, value);
	};

	// size_t wxStackFrame::GetParamCount() const
	size_t GetParamCount() const {
		if(_obj.pushFunction("GetParamCount")) {
			_obj.pushArg((wxStackFrame*)this);
			return (_obj.callFunction<size_t>());
		}

		return wxStackFrame::GetParamCount();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

