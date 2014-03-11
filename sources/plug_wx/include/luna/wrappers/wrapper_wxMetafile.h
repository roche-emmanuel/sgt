#ifndef _WRAPPERS_WRAPPER_WXMETAFILE_H_
#define _WRAPPERS_WRAPPER_WXMETAFILE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/metafile.h>

class wrapper_wxMetafile : public wxMetafile, public luna_wrapper_base {

public:
		

	~wrapper_wxMetafile() {
		logDEBUG3("Calling delete function for wrapper wxMetafile");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxMetafile*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxMetafile(lua_State* L, lua_Table* dum, const wxString & filename = wxEmptyString) 
		: wxMetafile(filename), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxMetafile*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxMetafile*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxMetafile::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxMetafile*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxMetafile::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxMetafile*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxMetafile::GetClassInfo();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

