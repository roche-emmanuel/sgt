#ifndef _WRAPPERS_WRAPPER_WXRICHTEXTSTDRENDERER_H_
#define _WRAPPERS_WRAPPER_WXRICHTEXTSTDRENDERER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/richtext/richtextbuffer.h>

class wrapper_wxRichTextStdRenderer : public wxRichTextStdRenderer, public luna_wrapper_base {

public:
		

	~wrapper_wxRichTextStdRenderer() {
		logDEBUG3("Calling delete function for wrapper wxRichTextStdRenderer");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxRichTextStdRenderer*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxRichTextStdRenderer*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxRichTextStdRenderer::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxRichTextStdRenderer*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxRichTextStdRenderer::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxRichTextStdRenderer*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxRichTextStdRenderer::GetClassInfo();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

