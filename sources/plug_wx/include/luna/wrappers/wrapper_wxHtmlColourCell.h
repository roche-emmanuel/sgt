#ifndef _WRAPPERS_WRAPPER_WXHTMLCOLOURCELL_H_
#define _WRAPPERS_WRAPPER_WXHTMLCOLOURCELL_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/html/htmlcell.h>

class wrapper_wxHtmlColourCell : public wxHtmlColourCell, public luna_wrapper_base {

public:
		

	~wrapper_wxHtmlColourCell() {
		logDEBUG3("Calling delete function for wrapper wxHtmlColourCell");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxHtmlColourCell*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxHtmlColourCell(lua_State* L, lua_Table* dum, const wxColour & clr, int flags = wxHTML_CLR_FOREGROUND) 
		: wxHtmlColourCell(clr, flags), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxHtmlColourCell*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxHtmlColourCell*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxHtmlColourCell::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxHtmlColourCell*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxHtmlColourCell::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxHtmlColourCell*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxHtmlColourCell::GetClassInfo();
	};

	// bool wxHtmlCell::AdjustPagebreak(int * pagebreak, wxArrayInt & known_pagebreaks) const
	bool AdjustPagebreak(int * pagebreak, wxArrayInt & known_pagebreaks) const {
		if(_obj.pushFunction("AdjustPagebreak")) {
			_obj.pushArg((wxHtmlColourCell*)this);
			_obj.pushArg(pagebreak);
			_obj.pushArg(&known_pagebreaks);
			return (_obj.callFunction<bool>());
		}

		return wxHtmlColourCell::AdjustPagebreak(pagebreak, known_pagebreaks);
	};

	// void wxHtmlCell::Draw(wxDC & dc, int x, int y, int view_y1, int view_y2, wxHtmlRenderingInfo & info)
	void Draw(wxDC & dc, int x, int y, int view_y1, int view_y2, wxHtmlRenderingInfo & info) {
		if(_obj.pushFunction("Draw")) {
			_obj.pushArg((wxHtmlColourCell*)this);
			_obj.pushArg(&dc);
			_obj.pushArg(x);
			_obj.pushArg(y);
			_obj.pushArg(view_y1);
			_obj.pushArg(view_y2);
			_obj.pushArg(&info);
			return (_obj.callFunction<void>());
		}

		return wxHtmlColourCell::Draw(dc, x, y, view_y1, view_y2, info);
	};

	// void wxHtmlCell::DrawInvisible(wxDC & dc, int x, int y, wxHtmlRenderingInfo & info)
	void DrawInvisible(wxDC & dc, int x, int y, wxHtmlRenderingInfo & info) {
		if(_obj.pushFunction("DrawInvisible")) {
			_obj.pushArg((wxHtmlColourCell*)this);
			_obj.pushArg(&dc);
			_obj.pushArg(x);
			_obj.pushArg(y);
			_obj.pushArg(&info);
			return (_obj.callFunction<void>());
		}

		return wxHtmlColourCell::DrawInvisible(dc, x, y, info);
	};

	// const wxHtmlCell * wxHtmlCell::Find(int condition, const void * param) const
	const wxHtmlCell * Find(int condition, const void * param) const {
		if(_obj.pushFunction("Find")) {
			_obj.pushArg((wxHtmlColourCell*)this);
			_obj.pushArg(condition);
			_obj.pushArg(param);
			return (_obj.callFunction<wxHtmlCell*>());
		}

		return wxHtmlColourCell::Find(condition, param);
	};

	// wxHtmlCell * wxHtmlCell::GetFirstChild() const
	wxHtmlCell * GetFirstChild() const {
		if(_obj.pushFunction("GetFirstChild")) {
			_obj.pushArg((wxHtmlColourCell*)this);
			return (_obj.callFunction<wxHtmlCell*>());
		}

		return wxHtmlColourCell::GetFirstChild();
	};

	// wxHtmlLinkInfo * wxHtmlCell::GetLink(int x = 0, int y = 0) const
	wxHtmlLinkInfo * GetLink(int x = 0, int y = 0) const {
		if(_obj.pushFunction("GetLink")) {
			_obj.pushArg((wxHtmlColourCell*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<wxHtmlLinkInfo*>());
		}

		return wxHtmlColourCell::GetLink(x, y);
	};

	// void wxHtmlCell::Layout(int w)
	void Layout(int w) {
		if(_obj.pushFunction("Layout")) {
			_obj.pushArg((wxHtmlColourCell*)this);
			_obj.pushArg(w);
			return (_obj.callFunction<void>());
		}

		return wxHtmlColourCell::Layout(w);
	};

	// void wxHtmlCell::SetPos(int x, int y)
	void SetPos(int x, int y) {
		if(_obj.pushFunction("SetPos")) {
			_obj.pushArg((wxHtmlColourCell*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<void>());
		}

		return wxHtmlColourCell::SetPos(x, y);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

