#ifndef _WRAPPERS_WRAPPER_WXHTMLDCRENDERER_H_
#define _WRAPPERS_WRAPPER_WXHTMLDCRENDERER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/html/htmprint.h>

class wrapper_wxHtmlDCRenderer : public wxHtmlDCRenderer, public luna_wrapper_base {

public:
		

	~wrapper_wxHtmlDCRenderer() {
		logDEBUG3("Calling delete function for wrapper wxHtmlDCRenderer");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxHtmlDCRenderer*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxHtmlDCRenderer(lua_State* L, lua_Table* dum) 
		: wxHtmlDCRenderer(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxHtmlDCRenderer*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxHtmlDCRenderer*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxHtmlDCRenderer::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxHtmlDCRenderer*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxHtmlDCRenderer::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxHtmlDCRenderer*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxHtmlDCRenderer::GetClassInfo();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

