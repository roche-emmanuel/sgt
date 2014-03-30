#ifndef _WRAPPERS_WRAPPER_WXHTMLWINPARSER_H_
#define _WRAPPERS_WRAPPER_WXHTMLWINPARSER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/html/winpars.h>

class wrapper_wxHtmlWinParser : public wxHtmlWinParser, public luna_wrapper_base {

public:
		

	~wrapper_wxHtmlWinParser() {
		logDEBUG3("Calling delete function for wrapper wxHtmlWinParser");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxHtmlWinParser*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void wxHtmlParser::AddText(const wxString & arg1)
	void AddText(const wxString & arg1) {
		THROW_IF(!_obj.pushFunction("AddText"),"No implementation for abstract function wxHtmlParser::AddText");
		_obj.pushArg((wxHtmlWinParser*)this);
		_obj.pushArg(arg1);
		return (_obj.callFunction<void>());
	};

	// void wxHtmlParser::AddTag(const wxHtmlTag & tag)
	void AddTag(const wxHtmlTag & tag) {
		if(_obj.pushFunction("AddTag")) {
			_obj.pushArg((wxHtmlWinParser*)this);
			_obj.pushArg(&tag);
			return (_obj.callFunction<void>());
		}

		return wxHtmlWinParser::AddTag(tag);
	};

public:
	// Public virtual methods:
	// void wxHtmlParser::AddTagHandler(wxHtmlTagHandler * handler)
	void AddTagHandler(wxHtmlTagHandler * handler) {
		if(_obj.pushFunction("AddTagHandler")) {
			_obj.pushArg((wxHtmlWinParser*)this);
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxHtmlWinParser::AddTagHandler(handler);
	};

	// void wxHtmlParser::DoneParser()
	void DoneParser() {
		if(_obj.pushFunction("DoneParser")) {
			_obj.pushArg((wxHtmlWinParser*)this);
			return (_obj.callFunction<void>());
		}

		return wxHtmlWinParser::DoneParser();
	};

	// wxObject * wxHtmlParser::GetProduct()
	wxObject * GetProduct() {
		THROW_IF(!_obj.pushFunction("GetProduct"),"No implementation for abstract function wxHtmlParser::GetProduct");
		_obj.pushArg((wxHtmlWinParser*)this);
		return (_obj.callFunction<wxObject*>());
	};

	// void wxHtmlParser::InitParser(const wxString & source)
	void InitParser(const wxString & source) {
		if(_obj.pushFunction("InitParser")) {
			_obj.pushArg((wxHtmlWinParser*)this);
			_obj.pushArg(source);
			return (_obj.callFunction<void>());
		}

		return wxHtmlWinParser::InitParser(source);
	};

	// void wxHtmlParser::StopParsing()
	void StopParsing() {
		if(_obj.pushFunction("StopParsing")) {
			_obj.pushArg((wxHtmlWinParser*)this);
			return (_obj.callFunction<void>());
		}

		return wxHtmlWinParser::StopParsing();
	};

	// wxFont * wxHtmlWinParser::CreateCurrentFont()
	wxFont * CreateCurrentFont() {
		if(_obj.pushFunction("CreateCurrentFont")) {
			_obj.pushArg((wxHtmlWinParser*)this);
			return (_obj.callFunction<wxFont*>());
		}

		return wxHtmlWinParser::CreateCurrentFont();
	};

	// void wxHtmlWinParser::SetDC(wxDC * dc, double pixel_scale = 1.0e+0)
	void SetDC(wxDC * dc, double pixel_scale = 1.0e+0) {
		if(_obj.pushFunction("SetDC")) {
			_obj.pushArg((wxHtmlWinParser*)this);
			_obj.pushArg(dc);
			_obj.pushArg(pixel_scale);
			return (_obj.callFunction<void>());
		}

		return wxHtmlWinParser::SetDC(dc, pixel_scale);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

