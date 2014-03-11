#ifndef _WRAPPERS_WRAPPER_WXRICHTEXTSTYLEDEFINITION_H_
#define _WRAPPERS_WRAPPER_WXRICHTEXTSTYLEDEFINITION_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/richtext/richtextstyles.h>

class wrapper_wxRichTextStyleDefinition : public wxRichTextStyleDefinition, public luna_wrapper_base {

public:
		

	~wrapper_wxRichTextStyleDefinition() {
		logDEBUG3("Calling delete function for wrapper wxRichTextStyleDefinition");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxRichTextStyleDefinition*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxRichTextStyleDefinition*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxRichTextStyleDefinition::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxRichTextStyleDefinition*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxRichTextStyleDefinition::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxRichTextStyleDefinition*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxRichTextStyleDefinition::GetClassInfo();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

