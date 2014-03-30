#ifndef _WRAPPERS_WRAPPER_WXBITMAPHANDLER_H_
#define _WRAPPERS_WRAPPER_WXBITMAPHANDLER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/bitmap.h>

class wrapper_wxBitmapHandler : public wxBitmapHandler, public luna_wrapper_base {

public:
		

	~wrapper_wxBitmapHandler() {
		logDEBUG3("Calling delete function for wrapper wxBitmapHandler");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxBitmapHandler*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxBitmapHandler(lua_State* L, lua_Table* dum) 
		: wxBitmapHandler(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxBitmapHandler*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxBitmapHandler*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxBitmapHandler::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxBitmapHandler*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxBitmapHandler::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxBitmapHandler*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxBitmapHandler::GetClassInfo();
	};

	// bool wxBitmapHandler::Create(wxBitmap * bitmap, const void * data, wxBitmapType type, int width, int height, int depth = 1)
	bool Create(wxBitmap * bitmap, const void * data, wxBitmapType type, int width, int height, int depth = 1) {
		if(_obj.pushFunction("Create")) {
			_obj.pushArg((wxBitmapHandler*)this);
			_obj.pushArg(bitmap);
			_obj.pushArg(data);
			_obj.pushArg((int)type);
			_obj.pushArg(width);
			_obj.pushArg(height);
			_obj.pushArg(depth);
			return (_obj.callFunction<bool>());
		}

		return wxBitmapHandler::Create(bitmap, data, type, width, height, depth);
	};

	// bool wxBitmapHandler::LoadFile(wxBitmap * bitmap, const wxString & name, wxBitmapType type, int desiredWidth, int desiredHeight)
	bool LoadFile(wxBitmap * bitmap, const wxString & name, wxBitmapType type, int desiredWidth, int desiredHeight) {
		if(_obj.pushFunction("LoadFile")) {
			_obj.pushArg((wxBitmapHandler*)this);
			_obj.pushArg(bitmap);
			_obj.pushArg(name);
			_obj.pushArg((int)type);
			_obj.pushArg(desiredWidth);
			_obj.pushArg(desiredHeight);
			return (_obj.callFunction<bool>());
		}

		return wxBitmapHandler::LoadFile(bitmap, name, type, desiredWidth, desiredHeight);
	};

	// bool wxBitmapHandler::SaveFile(const wxBitmap * bitmap, const wxString & name, wxBitmapType type, const wxPalette * palette = NULL) const
	bool SaveFile(const wxBitmap * bitmap, const wxString & name, wxBitmapType type, const wxPalette * palette = NULL) const {
		if(_obj.pushFunction("SaveFile")) {
			_obj.pushArg((wxBitmapHandler*)this);
			_obj.pushArg(bitmap);
			_obj.pushArg(name);
			_obj.pushArg((int)type);
			_obj.pushArg(palette);
			return (_obj.callFunction<bool>());
		}

		return wxBitmapHandler::SaveFile(bitmap, name, type, palette);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

