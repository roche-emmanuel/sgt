#ifndef _WRAPPERS_WRAPPER_WXXMLDOCUMENT_H_
#define _WRAPPERS_WRAPPER_WXXMLDOCUMENT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/xml/xml.h>

class wrapper_wxXmlDocument : public wxXmlDocument, public luna_wrapper_base {

public:
		

	~wrapper_wxXmlDocument() {
		logDEBUG3("Calling delete function for wrapper wxXmlDocument");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxXmlDocument*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxXmlDocument*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxXmlDocument::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxXmlDocument*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxXmlDocument::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxXmlDocument*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxXmlDocument::GetClassInfo();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

