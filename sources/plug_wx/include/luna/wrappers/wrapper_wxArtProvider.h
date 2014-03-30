#ifndef _WRAPPERS_WRAPPER_WXARTPROVIDER_H_
#define _WRAPPERS_WRAPPER_WXARTPROVIDER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/artprov.h>

class wrapper_wxArtProvider : public wxArtProvider, public luna_wrapper_base {

public:
		

	~wrapper_wxArtProvider() {
		logDEBUG3("Calling delete function for wrapper wxArtProvider");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxArtProvider*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxArtProvider*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxArtProvider::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxArtProvider*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxArtProvider::CloneRefData(data);
	};

	// wxBitmap wxArtProvider::CreateBitmap(const wxString & id, const wxString & client, const wxSize & size)
	wxBitmap CreateBitmap(const wxString & id, const wxString & client, const wxSize & size) {
		if(_obj.pushFunction("CreateBitmap")) {
			_obj.pushArg((wxArtProvider*)this);
			_obj.pushArg(id);
			_obj.pushArg(client);
			_obj.pushArg(&size);
			return *(_obj.callFunction<wxBitmap*>());
		}

		return wxArtProvider::CreateBitmap(id, client, size);
	};

	// wxIconBundle wxArtProvider::CreateIconBundle(const wxString & id, const wxString & client)
	wxIconBundle CreateIconBundle(const wxString & id, const wxString & client) {
		if(_obj.pushFunction("CreateIconBundle")) {
			_obj.pushArg((wxArtProvider*)this);
			_obj.pushArg(id);
			_obj.pushArg(client);
			return *(_obj.callFunction<wxIconBundle*>());
		}

		return wxArtProvider::CreateIconBundle(id, client);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxArtProvider*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxArtProvider::GetClassInfo();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

