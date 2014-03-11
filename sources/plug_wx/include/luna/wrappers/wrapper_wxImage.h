#ifndef _WRAPPERS_WRAPPER_WXIMAGE_H_
#define _WRAPPERS_WRAPPER_WXIMAGE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/image.h>

class wrapper_wxImage : public wxImage, public luna_wrapper_base {

public:
		

	~wrapper_wxImage() {
		logDEBUG3("Calling delete function for wrapper wxImage");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxImage*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxImage(lua_State* L, lua_Table* dum) 
		: wxImage(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxImage*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxImage(lua_State* L, lua_Table* dum, int width, int height, bool clear = true) 
		: wxImage(width, height, clear), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxImage*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxImage(lua_State* L, lua_Table* dum, const wxSize & sz, bool clear = true) 
		: wxImage(sz, clear), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxImage*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxImage(lua_State* L, lua_Table* dum, int width, int height, unsigned char * data, bool static_data = false) 
		: wxImage(width, height, data, static_data), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxImage*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxImage(lua_State* L, lua_Table* dum, const wxSize & sz, unsigned char * data, bool static_data = false) 
		: wxImage(sz, data, static_data), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxImage*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxImage(lua_State* L, lua_Table* dum, int width, int height, unsigned char * data, unsigned char * alpha, bool static_data = false) 
		: wxImage(width, height, data, alpha, static_data), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxImage*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxImage(lua_State* L, lua_Table* dum, const wxSize & sz, unsigned char * data, unsigned char * alpha, bool static_data = false) 
		: wxImage(sz, data, alpha, static_data), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxImage*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxImage(lua_State* L, lua_Table* dum, const wxString & name, wxBitmapType type = ::wxBITMAP_TYPE_ANY, int index = -1) 
		: wxImage(name, type, index), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxImage*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxImage(lua_State* L, lua_Table* dum, const wxString & name, const wxString & mimetype, int index = -1) 
		: wxImage(name, mimetype, index), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxImage*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxImage(lua_State* L, lua_Table* dum, wxInputStream & stream, wxBitmapType type = ::wxBITMAP_TYPE_ANY, int index = -1) 
		: wxImage(stream, type, index), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxImage*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxImage(lua_State* L, lua_Table* dum, wxInputStream & stream, const wxString & mimetype, int index = -1) 
		: wxImage(stream, mimetype, index), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxImage*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxImage*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxImage::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxImage*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxImage::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxImage*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxImage::GetClassInfo();
	};

	// bool wxImage::LoadFile(wxInputStream & stream, wxBitmapType type = ::wxBITMAP_TYPE_ANY, int index = -1)
	bool LoadFile(wxInputStream & stream, wxBitmapType type = ::wxBITMAP_TYPE_ANY, int index = -1) {
		if(_obj.pushFunction("LoadFile")) {
			_obj.pushArg((wxImage*)this);
			_obj.pushArg(&stream);
			_obj.pushArg((int)type);
			_obj.pushArg(index);
			return (_obj.callFunction<bool>());
		}

		return wxImage::LoadFile(stream, type, index);
	};

	// bool wxImage::LoadFile(const wxString & name, wxBitmapType type = ::wxBITMAP_TYPE_ANY, int index = -1)
	bool LoadFile(const wxString & name, wxBitmapType type = ::wxBITMAP_TYPE_ANY, int index = -1) {
		if(_obj.pushFunction("LoadFile")) {
			_obj.pushArg((wxImage*)this);
			_obj.pushArg(name);
			_obj.pushArg((int)type);
			_obj.pushArg(index);
			return (_obj.callFunction<bool>());
		}

		return wxImage::LoadFile(name, type, index);
	};

	// bool wxImage::LoadFile(const wxString & name, const wxString & mimetype, int index = -1)
	bool LoadFile(const wxString & name, const wxString & mimetype, int index = -1) {
		if(_obj.pushFunction("LoadFile")) {
			_obj.pushArg((wxImage*)this);
			_obj.pushArg(name);
			_obj.pushArg(mimetype);
			_obj.pushArg(index);
			return (_obj.callFunction<bool>());
		}

		return wxImage::LoadFile(name, mimetype, index);
	};

	// bool wxImage::LoadFile(wxInputStream & stream, const wxString & mimetype, int index = -1)
	bool LoadFile(wxInputStream & stream, const wxString & mimetype, int index = -1) {
		if(_obj.pushFunction("LoadFile")) {
			_obj.pushArg((wxImage*)this);
			_obj.pushArg(&stream);
			_obj.pushArg(mimetype);
			_obj.pushArg(index);
			return (_obj.callFunction<bool>());
		}

		return wxImage::LoadFile(stream, mimetype, index);
	};

	// bool wxImage::SaveFile(wxOutputStream & stream, const wxString & mimetype) const
	bool SaveFile(wxOutputStream & stream, const wxString & mimetype) const {
		if(_obj.pushFunction("SaveFile")) {
			_obj.pushArg((wxImage*)this);
			_obj.pushArg(&stream);
			_obj.pushArg(mimetype);
			return (_obj.callFunction<bool>());
		}

		return wxImage::SaveFile(stream, mimetype);
	};

	// bool wxImage::SaveFile(const wxString & name, wxBitmapType type) const
	bool SaveFile(const wxString & name, wxBitmapType type) const {
		if(_obj.pushFunction("SaveFile")) {
			_obj.pushArg((wxImage*)this);
			_obj.pushArg(name);
			_obj.pushArg((int)type);
			return (_obj.callFunction<bool>());
		}

		return wxImage::SaveFile(name, type);
	};

	// bool wxImage::SaveFile(const wxString & name, const wxString & mimetype) const
	bool SaveFile(const wxString & name, const wxString & mimetype) const {
		if(_obj.pushFunction("SaveFile")) {
			_obj.pushArg((wxImage*)this);
			_obj.pushArg(name);
			_obj.pushArg(mimetype);
			return (_obj.callFunction<bool>());
		}

		return wxImage::SaveFile(name, mimetype);
	};

	// bool wxImage::SaveFile(const wxString & name) const
	bool SaveFile(const wxString & name) const {
		if(_obj.pushFunction("SaveFile")) {
			_obj.pushArg((wxImage*)this);
			_obj.pushArg(name);
			return (_obj.callFunction<bool>());
		}

		return wxImage::SaveFile(name);
	};

	// bool wxImage::SaveFile(wxOutputStream & stream, wxBitmapType type) const
	bool SaveFile(wxOutputStream & stream, wxBitmapType type) const {
		if(_obj.pushFunction("SaveFile")) {
			_obj.pushArg((wxImage*)this);
			_obj.pushArg(&stream);
			_obj.pushArg((int)type);
			return (_obj.callFunction<bool>());
		}

		return wxImage::SaveFile(stream, type);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

