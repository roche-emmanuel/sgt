#ifndef _WRAPPERS_WRAPPER_WXHTMLCELL_H_
#define _WRAPPERS_WRAPPER_WXHTMLCELL_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/html/htmlcell.h>

class wrapper_wxHtmlCell : public wxHtmlCell, public luna_wrapper_base {

public:
		

	~wrapper_wxHtmlCell() {
		logDEBUG3("Calling delete function for wrapper wxHtmlCell");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxHtmlCell*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxHtmlCell(lua_State* L, lua_Table* dum) 
		: wxHtmlCell(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxHtmlCell*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxHtmlCell*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxHtmlCell::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxHtmlCell*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxHtmlCell::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxHtmlCell*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxHtmlCell::GetClassInfo();
	};

	// bool wxHtmlCell::AdjustPagebreak(int * pagebreak, wxArrayInt & known_pagebreaks) const
	bool AdjustPagebreak(int * pagebreak, wxArrayInt & known_pagebreaks) const {
		if(_obj.pushFunction("AdjustPagebreak")) {
			_obj.pushArg((wxHtmlCell*)this);
			_obj.pushArg(pagebreak);
			_obj.pushArg(&known_pagebreaks);
			return (_obj.callFunction<bool>());
		}

		return wxHtmlCell::AdjustPagebreak(pagebreak, known_pagebreaks);
	};

	// void wxHtmlCell::Draw(wxDC & dc, int x, int y, int view_y1, int view_y2, wxHtmlRenderingInfo & info)
	void Draw(wxDC & dc, int x, int y, int view_y1, int view_y2, wxHtmlRenderingInfo & info) {
		if(_obj.pushFunction("Draw")) {
			_obj.pushArg((wxHtmlCell*)this);
			_obj.pushArg(&dc);
			_obj.pushArg(x);
			_obj.pushArg(y);
			_obj.pushArg(view_y1);
			_obj.pushArg(view_y2);
			_obj.pushArg(&info);
			return (_obj.callFunction<void>());
		}

		return wxHtmlCell::Draw(dc, x, y, view_y1, view_y2, info);
	};

	// void wxHtmlCell::DrawInvisible(wxDC & dc, int x, int y, wxHtmlRenderingInfo & info)
	void DrawInvisible(wxDC & dc, int x, int y, wxHtmlRenderingInfo & info) {
		if(_obj.pushFunction("DrawInvisible")) {
			_obj.pushArg((wxHtmlCell*)this);
			_obj.pushArg(&dc);
			_obj.pushArg(x);
			_obj.pushArg(y);
			_obj.pushArg(&info);
			return (_obj.callFunction<void>());
		}

		return wxHtmlCell::DrawInvisible(dc, x, y, info);
	};

	// const wxHtmlCell * wxHtmlCell::Find(int condition, const void * param) const
	const wxHtmlCell * Find(int condition, const void * param) const {
		if(_obj.pushFunction("Find")) {
			_obj.pushArg((wxHtmlCell*)this);
			_obj.pushArg(condition);
			_obj.pushArg(param);
			return (_obj.callFunction<wxHtmlCell*>());
		}

		return wxHtmlCell::Find(condition, param);
	};

	// wxHtmlCell * wxHtmlCell::GetFirstChild() const
	wxHtmlCell * GetFirstChild() const {
		if(_obj.pushFunction("GetFirstChild")) {
			_obj.pushArg((wxHtmlCell*)this);
			return (_obj.callFunction<wxHtmlCell*>());
		}

		return wxHtmlCell::GetFirstChild();
	};

	// wxHtmlLinkInfo * wxHtmlCell::GetLink(int x = 0, int y = 0) const
	wxHtmlLinkInfo * GetLink(int x = 0, int y = 0) const {
		if(_obj.pushFunction("GetLink")) {
			_obj.pushArg((wxHtmlCell*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<wxHtmlLinkInfo*>());
		}

		return wxHtmlCell::GetLink(x, y);
	};

	// void wxHtmlCell::Layout(int w)
	void Layout(int w) {
		if(_obj.pushFunction("Layout")) {
			_obj.pushArg((wxHtmlCell*)this);
			_obj.pushArg(w);
			return (_obj.callFunction<void>());
		}

		return wxHtmlCell::Layout(w);
	};

	// void wxHtmlCell::SetPos(int x, int y)
	void SetPos(int x, int y) {
		if(_obj.pushFunction("SetPos")) {
			_obj.pushArg((wxHtmlCell*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<void>());
		}

		return wxHtmlCell::SetPos(x, y);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

