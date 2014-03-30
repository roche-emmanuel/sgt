#ifndef _WRAPPERS_WRAPPER_WXHTMLCONTAINERCELL_H_
#define _WRAPPERS_WRAPPER_WXHTMLCONTAINERCELL_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/html/htmlcell.h>

class wrapper_wxHtmlContainerCell : public wxHtmlContainerCell, public luna_wrapper_base {

public:
		

	~wrapper_wxHtmlContainerCell() {
		logDEBUG3("Calling delete function for wrapper wxHtmlContainerCell");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxHtmlContainerCell*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxHtmlContainerCell(lua_State* L, lua_Table* dum, wxHtmlContainerCell * parent) 
		: wxHtmlContainerCell(parent), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxHtmlContainerCell*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxHtmlContainerCell*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxHtmlContainerCell::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxHtmlContainerCell*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxHtmlContainerCell::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxHtmlContainerCell*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxHtmlContainerCell::GetClassInfo();
	};

	// bool wxHtmlCell::AdjustPagebreak(int * pagebreak, wxArrayInt & known_pagebreaks) const
	bool AdjustPagebreak(int * pagebreak, wxArrayInt & known_pagebreaks) const {
		if(_obj.pushFunction("AdjustPagebreak")) {
			_obj.pushArg((wxHtmlContainerCell*)this);
			_obj.pushArg(pagebreak);
			_obj.pushArg(&known_pagebreaks);
			return (_obj.callFunction<bool>());
		}

		return wxHtmlContainerCell::AdjustPagebreak(pagebreak, known_pagebreaks);
	};

	// void wxHtmlCell::Draw(wxDC & dc, int x, int y, int view_y1, int view_y2, wxHtmlRenderingInfo & info)
	void Draw(wxDC & dc, int x, int y, int view_y1, int view_y2, wxHtmlRenderingInfo & info) {
		if(_obj.pushFunction("Draw")) {
			_obj.pushArg((wxHtmlContainerCell*)this);
			_obj.pushArg(&dc);
			_obj.pushArg(x);
			_obj.pushArg(y);
			_obj.pushArg(view_y1);
			_obj.pushArg(view_y2);
			_obj.pushArg(&info);
			return (_obj.callFunction<void>());
		}

		return wxHtmlContainerCell::Draw(dc, x, y, view_y1, view_y2, info);
	};

	// void wxHtmlCell::DrawInvisible(wxDC & dc, int x, int y, wxHtmlRenderingInfo & info)
	void DrawInvisible(wxDC & dc, int x, int y, wxHtmlRenderingInfo & info) {
		if(_obj.pushFunction("DrawInvisible")) {
			_obj.pushArg((wxHtmlContainerCell*)this);
			_obj.pushArg(&dc);
			_obj.pushArg(x);
			_obj.pushArg(y);
			_obj.pushArg(&info);
			return (_obj.callFunction<void>());
		}

		return wxHtmlContainerCell::DrawInvisible(dc, x, y, info);
	};

	// const wxHtmlCell * wxHtmlCell::Find(int condition, const void * param) const
	const wxHtmlCell * Find(int condition, const void * param) const {
		if(_obj.pushFunction("Find")) {
			_obj.pushArg((wxHtmlContainerCell*)this);
			_obj.pushArg(condition);
			_obj.pushArg(param);
			return (_obj.callFunction<wxHtmlCell*>());
		}

		return wxHtmlContainerCell::Find(condition, param);
	};

	// wxHtmlCell * wxHtmlCell::GetFirstChild() const
	wxHtmlCell * GetFirstChild() const {
		if(_obj.pushFunction("GetFirstChild")) {
			_obj.pushArg((wxHtmlContainerCell*)this);
			return (_obj.callFunction<wxHtmlCell*>());
		}

		return wxHtmlContainerCell::GetFirstChild();
	};

	// wxHtmlLinkInfo * wxHtmlCell::GetLink(int x = 0, int y = 0) const
	wxHtmlLinkInfo * GetLink(int x = 0, int y = 0) const {
		if(_obj.pushFunction("GetLink")) {
			_obj.pushArg((wxHtmlContainerCell*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<wxHtmlLinkInfo*>());
		}

		return wxHtmlContainerCell::GetLink(x, y);
	};

	// void wxHtmlCell::Layout(int w)
	void Layout(int w) {
		if(_obj.pushFunction("Layout")) {
			_obj.pushArg((wxHtmlContainerCell*)this);
			_obj.pushArg(w);
			return (_obj.callFunction<void>());
		}

		return wxHtmlContainerCell::Layout(w);
	};

	// void wxHtmlCell::SetPos(int x, int y)
	void SetPos(int x, int y) {
		if(_obj.pushFunction("SetPos")) {
			_obj.pushArg((wxHtmlContainerCell*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<void>());
		}

		return wxHtmlContainerCell::SetPos(x, y);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

