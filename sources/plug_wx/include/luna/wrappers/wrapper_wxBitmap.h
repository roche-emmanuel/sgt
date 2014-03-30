#ifndef _WRAPPERS_WRAPPER_WXBITMAP_H_
#define _WRAPPERS_WRAPPER_WXBITMAP_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/bitmap.h>

class wrapper_wxBitmap : public wxBitmap, public luna_wrapper_base {

public:
		

	~wrapper_wxBitmap() {
		logDEBUG3("Calling delete function for wrapper wxBitmap");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxBitmap*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxBitmap(lua_State* L, lua_Table* dum) 
		: wxBitmap(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxBitmap*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxBitmap(lua_State* L, lua_Table* dum, const wxBitmap & bitmap) 
		: wxBitmap(bitmap), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxBitmap*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxBitmap(lua_State* L, lua_Table* dum, int width, int height, int depth = (-1)) 
		: wxBitmap(width, height, depth), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxBitmap*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxBitmap(lua_State* L, lua_Table* dum, const wxSize & sz, int depth = (-1)) 
		: wxBitmap(sz, depth), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxBitmap*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxBitmap(lua_State* L, lua_Table* dum, const wxString & name, wxBitmapType type = wxBITMAP_DEFAULT_TYPE) 
		: wxBitmap(name, type), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxBitmap*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxBitmap(lua_State* L, lua_Table* dum, const wxImage & img, int depth = (-1)) 
		: wxBitmap(img, depth), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxBitmap*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxBitmap*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxBitmap::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxBitmap*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxBitmap::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxBitmap*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxBitmap::GetClassInfo();
	};

	// wxImage wxBitmap::ConvertToImage() const
	wxImage ConvertToImage() const {
		if(_obj.pushFunction("ConvertToImage")) {
			_obj.pushArg((wxBitmap*)this);
			return *(_obj.callFunction<wxImage*>());
		}

		return wxBitmap::ConvertToImage();
	};

	// bool wxBitmap::CopyFromIcon(const wxIcon & icon)
	bool CopyFromIcon(const wxIcon & icon) {
		if(_obj.pushFunction("CopyFromIcon")) {
			_obj.pushArg((wxBitmap*)this);
			_obj.pushArg(&icon);
			return (_obj.callFunction<bool>());
		}

		return wxBitmap::CopyFromIcon(icon);
	};

	// bool wxBitmap::Create(int width, int height, int depth = (-1))
	bool Create(int width, int height, int depth = (-1)) {
		if(_obj.pushFunction("Create")) {
			_obj.pushArg((wxBitmap*)this);
			_obj.pushArg(width);
			_obj.pushArg(height);
			_obj.pushArg(depth);
			return (_obj.callFunction<bool>());
		}

		return wxBitmap::Create(width, height, depth);
	};

	// bool wxBitmap::Create(const wxSize & sz, int depth = (-1))
	bool Create(const wxSize & sz, int depth = (-1)) {
		if(_obj.pushFunction("Create")) {
			_obj.pushArg((wxBitmap*)this);
			_obj.pushArg(&sz);
			_obj.pushArg(depth);
			return (_obj.callFunction<bool>());
		}

		return wxBitmap::Create(sz, depth);
	};

	// int wxBitmap::GetDepth() const
	int GetDepth() const {
		if(_obj.pushFunction("GetDepth")) {
			_obj.pushArg((wxBitmap*)this);
			return (_obj.callFunction<int>());
		}

		return wxBitmap::GetDepth();
	};

	// int wxBitmap::GetHeight() const
	int GetHeight() const {
		if(_obj.pushFunction("GetHeight")) {
			_obj.pushArg((wxBitmap*)this);
			return (_obj.callFunction<int>());
		}

		return wxBitmap::GetHeight();
	};

	// wxMask * wxBitmap::GetMask() const
	wxMask * GetMask() const {
		if(_obj.pushFunction("GetMask")) {
			_obj.pushArg((wxBitmap*)this);
			return (_obj.callFunction<wxMask*>());
		}

		return wxBitmap::GetMask();
	};

	// wxPalette * wxBitmap::GetPalette() const
	wxPalette * GetPalette() const {
		if(_obj.pushFunction("GetPalette")) {
			_obj.pushArg((wxBitmap*)this);
			return (_obj.callFunction<wxPalette*>());
		}

		return wxBitmap::GetPalette();
	};

	// wxBitmap wxBitmap::GetSubBitmap(const wxRect & rect) const
	wxBitmap GetSubBitmap(const wxRect & rect) const {
		if(_obj.pushFunction("GetSubBitmap")) {
			_obj.pushArg((wxBitmap*)this);
			_obj.pushArg(&rect);
			return *(_obj.callFunction<wxBitmap*>());
		}

		return wxBitmap::GetSubBitmap(rect);
	};

	// int wxBitmap::GetWidth() const
	int GetWidth() const {
		if(_obj.pushFunction("GetWidth")) {
			_obj.pushArg((wxBitmap*)this);
			return (_obj.callFunction<int>());
		}

		return wxBitmap::GetWidth();
	};

	// bool wxBitmap::IsOk() const
	bool IsOk() const {
		if(_obj.pushFunction("IsOk")) {
			_obj.pushArg((wxBitmap*)this);
			return (_obj.callFunction<bool>());
		}

		return wxBitmap::IsOk();
	};

	// bool wxBitmap::LoadFile(const wxString & name, wxBitmapType type = wxBITMAP_DEFAULT_TYPE)
	bool LoadFile(const wxString & name, wxBitmapType type = wxBITMAP_DEFAULT_TYPE) {
		if(_obj.pushFunction("LoadFile")) {
			_obj.pushArg((wxBitmap*)this);
			_obj.pushArg(name);
			_obj.pushArg((int)type);
			return (_obj.callFunction<bool>());
		}

		return wxBitmap::LoadFile(name, type);
	};

	// bool wxBitmap::SaveFile(const wxString & name, wxBitmapType type, const wxPalette * palette = NULL) const
	bool SaveFile(const wxString & name, wxBitmapType type, const wxPalette * palette = NULL) const {
		if(_obj.pushFunction("SaveFile")) {
			_obj.pushArg((wxBitmap*)this);
			_obj.pushArg(name);
			_obj.pushArg((int)type);
			_obj.pushArg(palette);
			return (_obj.callFunction<bool>());
		}

		return wxBitmap::SaveFile(name, type, palette);
	};

	// void wxBitmap::SetDepth(int depth)
	void SetDepth(int depth) {
		if(_obj.pushFunction("SetDepth")) {
			_obj.pushArg((wxBitmap*)this);
			_obj.pushArg(depth);
			return (_obj.callFunction<void>());
		}

		return wxBitmap::SetDepth(depth);
	};

	// void wxBitmap::SetHeight(int height)
	void SetHeight(int height) {
		if(_obj.pushFunction("SetHeight")) {
			_obj.pushArg((wxBitmap*)this);
			_obj.pushArg(height);
			return (_obj.callFunction<void>());
		}

		return wxBitmap::SetHeight(height);
	};

	// void wxBitmap::SetMask(wxMask * mask)
	void SetMask(wxMask * mask) {
		if(_obj.pushFunction("SetMask")) {
			_obj.pushArg((wxBitmap*)this);
			_obj.pushArg(mask);
			return (_obj.callFunction<void>());
		}

		return wxBitmap::SetMask(mask);
	};

	// void wxBitmap::SetPalette(const wxPalette & palette)
	void SetPalette(const wxPalette & palette) {
		if(_obj.pushFunction("SetPalette")) {
			_obj.pushArg((wxBitmap*)this);
			_obj.pushArg(&palette);
			return (_obj.callFunction<void>());
		}

		return wxBitmap::SetPalette(palette);
	};

	// void wxBitmap::SetWidth(int width)
	void SetWidth(int width) {
		if(_obj.pushFunction("SetWidth")) {
			_obj.pushArg((wxBitmap*)this);
			_obj.pushArg(width);
			return (_obj.callFunction<void>());
		}

		return wxBitmap::SetWidth(width);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

