#ifndef _WRAPPERS_WRAPPER_WXFILEDATAOBJECT_H_
#define _WRAPPERS_WRAPPER_WXFILEDATAOBJECT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/dataobj.h>

class wrapper_wxFileDataObject : public wxFileDataObject, public luna_wrapper_base {

public:
		

	~wrapper_wxFileDataObject() {
		logDEBUG3("Calling delete function for wrapper wxFileDataObject");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxFileDataObject*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxFileDataObject(lua_State* L, lua_Table* dum) 
		: wxFileDataObject(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxFileDataObject*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void wxDataObject::GetAllFormats(wxDataFormat * formats, wxDataObject::Direction dir = wxDataObject::Get) const
	void GetAllFormats(wxDataFormat * formats, wxDataObject::Direction dir = wxDataObject::Get) const {
		THROW_IF(!_obj.pushFunction("GetAllFormats"),"No implementation for abstract function wxDataObject::GetAllFormats");
		_obj.pushArg((wxFileDataObject*)this);
		_obj.pushArg(formats);
		_obj.pushArg((int)dir);
		return (_obj.callFunction<void>());
	};

	// size_t wxDataObject::GetFormatCount(wxDataObject::Direction dir = wxDataObject::Get) const
	size_t GetFormatCount(wxDataObject::Direction dir = wxDataObject::Get) const {
		THROW_IF(!_obj.pushFunction("GetFormatCount"),"No implementation for abstract function wxDataObject::GetFormatCount");
		_obj.pushArg((wxFileDataObject*)this);
		_obj.pushArg((int)dir);
		return (_obj.callFunction<size_t>());
	};

	// wxDataFormat wxDataObject::GetPreferredFormat(wxDataObject::Direction dir = wxDataObject::Get) const
	wxDataFormat GetPreferredFormat(wxDataObject::Direction dir = wxDataObject::Get) const {
		THROW_IF(!_obj.pushFunction("GetPreferredFormat"),"No implementation for abstract function wxDataObject::GetPreferredFormat");
		_obj.pushArg((wxFileDataObject*)this);
		_obj.pushArg((int)dir);
		return *(_obj.callFunction<wxDataFormat*>());
	};

	// bool wxDataObjectSimple::GetDataHere(void * buf) const
	bool GetDataHere(void * buf) const {
		if(_obj.pushFunction("GetDataHere")) {
			_obj.pushArg((wxFileDataObject*)this);
			_obj.pushArg(buf);
			return (_obj.callFunction<bool>());
		}

		return wxFileDataObject::GetDataHere(buf);
	};

	// size_t wxDataObjectSimple::GetDataSize() const
	size_t GetDataSize() const {
		if(_obj.pushFunction("GetDataSize")) {
			_obj.pushArg((wxFileDataObject*)this);
			return (_obj.callFunction<size_t>());
		}

		return wxFileDataObject::GetDataSize();
	};

	// bool wxDataObjectSimple::SetData(size_t len, const void * buf)
	bool SetData(size_t len, const void * buf) {
		if(_obj.pushFunction("SetData")) {
			_obj.pushArg((wxFileDataObject*)this);
			_obj.pushArg(len);
			_obj.pushArg(buf);
			return (_obj.callFunction<bool>());
		}

		return wxFileDataObject::SetData(len, buf);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

