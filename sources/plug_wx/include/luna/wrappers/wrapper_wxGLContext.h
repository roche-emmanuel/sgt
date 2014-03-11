#ifndef _WRAPPERS_WRAPPER_WXGLCONTEXT_H_
#define _WRAPPERS_WRAPPER_WXGLCONTEXT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/glcanvas.h>

class wrapper_wxGLContext : public wxGLContext, public luna_wrapper_base {

public:
		

	~wrapper_wxGLContext() {
		logDEBUG3("Calling delete function for wrapper wxGLContext");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxGLContext*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxGLContext(lua_State* L, lua_Table* dum, wxGLCanvas * win, const wxGLContext * other = NULL) 
		: wxGLContext(win, other), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxGLContext*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxGLContext*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxGLContext::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxGLContext*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxGLContext::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxGLContext*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxGLContext::GetClassInfo();
	};

	// bool wxGLContext::SetCurrent(const wxGLCanvas & win) const
	bool SetCurrent(const wxGLCanvas & win) const {
		if(_obj.pushFunction("SetCurrent")) {
			_obj.pushArg((wxGLContext*)this);
			_obj.pushArg(&win);
			return (_obj.callFunction<bool>());
		}

		return wxGLContext::SetCurrent(win);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

