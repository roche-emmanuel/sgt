#ifndef _WRAPPERS_WRAPPER_WXDIRTRAVERSER_H_
#define _WRAPPERS_WRAPPER_WXDIRTRAVERSER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/dir.h>

class wrapper_wxDirTraverser : public wxDirTraverser, public luna_wrapper_base {

public:
		

	~wrapper_wxDirTraverser() {
		logDEBUG3("Calling delete function for wrapper wxDirTraverser");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxDirTraverser*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// wxDirTraverseResult wxDirTraverser::OnDir(const wxString & dirname)
	wxDirTraverseResult OnDir(const wxString & dirname) {
		THROW_IF(!_obj.pushFunction("OnDir"),"No implementation for abstract function wxDirTraverser::OnDir");
		_obj.pushArg((wxDirTraverser*)this);
		_obj.pushArg(dirname);
		return (wxDirTraverseResult)(_obj.callFunction<int>());
	};

	// wxDirTraverseResult wxDirTraverser::OnFile(const wxString & filename)
	wxDirTraverseResult OnFile(const wxString & filename) {
		THROW_IF(!_obj.pushFunction("OnFile"),"No implementation for abstract function wxDirTraverser::OnFile");
		_obj.pushArg((wxDirTraverser*)this);
		_obj.pushArg(filename);
		return (wxDirTraverseResult)(_obj.callFunction<int>());
	};

	// wxDirTraverseResult wxDirTraverser::OnOpenError(const wxString & openerrorname)
	wxDirTraverseResult OnOpenError(const wxString & openerrorname) {
		if(_obj.pushFunction("OnOpenError")) {
			_obj.pushArg((wxDirTraverser*)this);
			_obj.pushArg(openerrorname);
			return (wxDirTraverseResult)(_obj.callFunction<int>());
		}

		return wxDirTraverser::OnOpenError(openerrorname);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

