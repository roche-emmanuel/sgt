#ifndef _WRAPPERS_WRAPPER_WXRICHTEXTPROPERTIES_H_
#define _WRAPPERS_WRAPPER_WXRICHTEXTPROPERTIES_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/richtext/richtextbuffer.h>

class wrapper_wxRichTextProperties : public wxRichTextProperties, public luna_wrapper_base {

public:
		

	~wrapper_wxRichTextProperties() {
		logDEBUG3("Calling delete function for wrapper wxRichTextProperties");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxRichTextProperties*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxRichTextProperties*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxRichTextProperties::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxRichTextProperties*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxRichTextProperties::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxRichTextProperties*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxRichTextProperties::GetClassInfo();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

