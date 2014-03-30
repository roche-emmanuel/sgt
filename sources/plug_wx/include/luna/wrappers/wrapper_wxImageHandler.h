#ifndef _WRAPPERS_WRAPPER_WXIMAGEHANDLER_H_
#define _WRAPPERS_WRAPPER_WXIMAGEHANDLER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/image.h>

class wrapper_wxImageHandler : public wxImageHandler, public luna_wrapper_base {

public:
		

	~wrapper_wxImageHandler() {
		logDEBUG3("Calling delete function for wrapper wxImageHandler");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxImageHandler*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxImageHandler(lua_State* L, lua_Table* dum) 
		: wxImageHandler(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxImageHandler*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxImageHandler*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxImageHandler::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxImageHandler*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxImageHandler::CloneRefData(data);
	};

	// bool wxImageHandler::DoCanRead(wxInputStream & arg1)
	bool DoCanRead(wxInputStream & arg1) {
		THROW_IF(!_obj.pushFunction("DoCanRead"),"No implementation for abstract function wxImageHandler::DoCanRead");
		_obj.pushArg((wxImageHandler*)this);
		_obj.pushArg(&arg1);
		return (_obj.callFunction<bool>());
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxImageHandler*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxImageHandler::GetClassInfo();
	};

	// int wxImageHandler::GetImageCount(wxInputStream & stream)
	int GetImageCount(wxInputStream & stream) {
		THROW_IF(!_obj.pushFunction("GetImageCount"),"No implementation for abstract function wxImageHandler::GetImageCount");
		_obj.pushArg((wxImageHandler*)this);
		_obj.pushArg(&stream);
		return (_obj.callFunction<int>());
	};

	// bool wxImageHandler::LoadFile(wxImage * image, wxInputStream & stream, bool verbose = true, int index = -1)
	bool LoadFile(wxImage * image, wxInputStream & stream, bool verbose = true, int index = -1) {
		if(_obj.pushFunction("LoadFile")) {
			_obj.pushArg((wxImageHandler*)this);
			_obj.pushArg(image);
			_obj.pushArg(&stream);
			_obj.pushArg(verbose);
			_obj.pushArg(index);
			return (_obj.callFunction<bool>());
		}

		return wxImageHandler::LoadFile(image, stream, verbose, index);
	};

	// bool wxImageHandler::SaveFile(wxImage * image, wxOutputStream & stream, bool verbose = true)
	bool SaveFile(wxImage * image, wxOutputStream & stream, bool verbose = true) {
		if(_obj.pushFunction("SaveFile")) {
			_obj.pushArg((wxImageHandler*)this);
			_obj.pushArg(image);
			_obj.pushArg(&stream);
			_obj.pushArg(verbose);
			return (_obj.callFunction<bool>());
		}

		return wxImageHandler::SaveFile(image, stream, verbose);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

