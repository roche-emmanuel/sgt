#ifndef _WRAPPERS_WRAPPER_WXFSFILE_H_
#define _WRAPPERS_WRAPPER_WXFSFILE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/filesys.h>

class wrapper_wxFSFile : public wxFSFile, public luna_wrapper_base {

public:
		

	~wrapper_wxFSFile() {
		logDEBUG3("Calling delete function for wrapper wxFSFile");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxFSFile*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxFSFile(lua_State* L, lua_Table* dum, wxInputStream * stream, const wxString & location, const wxString & mimetype, const wxString & anchor, wxDateTime modif) 
		: wxFSFile(stream, location, mimetype, anchor, modif), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxFSFile*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxFSFile*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxFSFile::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxFSFile*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxFSFile::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxFSFile*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxFSFile::GetClassInfo();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

