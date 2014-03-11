#ifndef _WRAPPERS_WRAPPER_WXCOMMAND_H_
#define _WRAPPERS_WRAPPER_WXCOMMAND_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/cmdproc.h>

class wrapper_wxCommand : public wxCommand, public luna_wrapper_base {

public:
		

	~wrapper_wxCommand() {
		logDEBUG3("Calling delete function for wrapper wxCommand");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxCommand*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxCommand(lua_State* L, lua_Table* dum, bool canUndo = false, const wxString & name = wxEmptyString) 
		: wxCommand(canUndo, name), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxCommand*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxCommand*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxCommand::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxCommand*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxCommand::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxCommand*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxCommand::GetClassInfo();
	};

	// bool wxCommand::CanUndo() const
	bool CanUndo() const {
		if(_obj.pushFunction("CanUndo")) {
			_obj.pushArg((wxCommand*)this);
			return (_obj.callFunction<bool>());
		}

		return wxCommand::CanUndo();
	};

	// bool wxCommand::Do()
	bool Do() {
		THROW_IF(!_obj.pushFunction("Do"),"No implementation for abstract function wxCommand::Do");
		_obj.pushArg((wxCommand*)this);
		return (_obj.callFunction<bool>());
	};

	// wxString wxCommand::GetName() const
	wxString GetName() const {
		if(_obj.pushFunction("GetName")) {
			_obj.pushArg((wxCommand*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxCommand::GetName();
	};

	// bool wxCommand::Undo()
	bool Undo() {
		THROW_IF(!_obj.pushFunction("Undo"),"No implementation for abstract function wxCommand::Undo");
		_obj.pushArg((wxCommand*)this);
		return (_obj.callFunction<bool>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

