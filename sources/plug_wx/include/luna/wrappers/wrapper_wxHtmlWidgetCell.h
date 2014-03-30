#ifndef _WRAPPERS_WRAPPER_WXHTMLWIDGETCELL_H_
#define _WRAPPERS_WRAPPER_WXHTMLWIDGETCELL_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/html/htmlcell.h>

class wrapper_wxHtmlWidgetCell : public wxHtmlWidgetCell, public luna_wrapper_base {

public:
		

	~wrapper_wxHtmlWidgetCell() {
		logDEBUG3("Calling delete function for wrapper wxHtmlWidgetCell");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxHtmlWidgetCell*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxHtmlWidgetCell(lua_State* L, lua_Table* dum, wxWindow * wnd, int w = 0) 
		: wxHtmlWidgetCell(wnd, w), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxHtmlWidgetCell*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxHtmlWidgetCell*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxHtmlWidgetCell::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxHtmlWidgetCell*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxHtmlWidgetCell::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxHtmlWidgetCell*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxHtmlWidgetCell::GetClassInfo();
	};

	// bool wxHtmlCell::AdjustPagebreak(int * pagebreak, wxArrayInt & known_pagebreaks) const
	bool AdjustPagebreak(int * pagebreak, wxArrayInt & known_pagebreaks) const {
		if(_obj.pushFunction("AdjustPagebreak")) {
			_obj.pushArg((wxHtmlWidgetCell*)this);
			_obj.pushArg(pagebreak);
			_obj.pushArg(&known_pagebreaks);
			return (_obj.callFunction<bool>());
		}

		return wxHtmlWidgetCell::AdjustPagebreak(pagebreak, known_pagebreaks);
	};

	// void wxHtmlCell::Draw(wxDC & dc, int x, int y, int view_y1, int view_y2, wxHtmlRenderingInfo & info)
	void Draw(wxDC & dc, int x, int y, int view_y1, int view_y2, wxHtmlRenderingInfo & info) {
		if(_obj.pushFunction("Draw")) {
			_obj.pushArg((wxHtmlWidgetCell*)this);
			_obj.pushArg(&dc);
			_obj.pushArg(x);
			_obj.pushArg(y);
			_obj.pushArg(view_y1);
			_obj.pushArg(view_y2);
			_obj.pushArg(&info);
			return (_obj.callFunction<void>());
		}

		return wxHtmlWidgetCell::Draw(dc, x, y, view_y1, view_y2, info);
	};

	// void wxHtmlCell::DrawInvisible(wxDC & dc, int x, int y, wxHtmlRenderingInfo & info)
	void DrawInvisible(wxDC & dc, int x, int y, wxHtmlRenderingInfo & info) {
		if(_obj.pushFunction("DrawInvisible")) {
			_obj.pushArg((wxHtmlWidgetCell*)this);
			_obj.pushArg(&dc);
			_obj.pushArg(x);
			_obj.pushArg(y);
			_obj.pushArg(&info);
			return (_obj.callFunction<void>());
		}

		return wxHtmlWidgetCell::DrawInvisible(dc, x, y, info);
	};

	// const wxHtmlCell * wxHtmlCell::Find(int condition, const void * param) const
	const wxHtmlCell * Find(int condition, const void * param) const {
		if(_obj.pushFunction("Find")) {
			_obj.pushArg((wxHtmlWidgetCell*)this);
			_obj.pushArg(condition);
			_obj.pushArg(param);
			return (_obj.callFunction<wxHtmlCell*>());
		}

		return wxHtmlWidgetCell::Find(condition, param);
	};

	// wxHtmlCell * wxHtmlCell::GetFirstChild() const
	wxHtmlCell * GetFirstChild() const {
		if(_obj.pushFunction("GetFirstChild")) {
			_obj.pushArg((wxHtmlWidgetCell*)this);
			return (_obj.callFunction<wxHtmlCell*>());
		}

		return wxHtmlWidgetCell::GetFirstChild();
	};

	// wxHtmlLinkInfo * wxHtmlCell::GetLink(int x = 0, int y = 0) const
	wxHtmlLinkInfo * GetLink(int x = 0, int y = 0) const {
		if(_obj.pushFunction("GetLink")) {
			_obj.pushArg((wxHtmlWidgetCell*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<wxHtmlLinkInfo*>());
		}

		return wxHtmlWidgetCell::GetLink(x, y);
	};

	// void wxHtmlCell::Layout(int w)
	void Layout(int w) {
		if(_obj.pushFunction("Layout")) {
			_obj.pushArg((wxHtmlWidgetCell*)this);
			_obj.pushArg(w);
			return (_obj.callFunction<void>());
		}

		return wxHtmlWidgetCell::Layout(w);
	};

	// void wxHtmlCell::SetPos(int x, int y)
	void SetPos(int x, int y) {
		if(_obj.pushFunction("SetPos")) {
			_obj.pushArg((wxHtmlWidgetCell*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<void>());
		}

		return wxHtmlWidgetCell::SetPos(x, y);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

