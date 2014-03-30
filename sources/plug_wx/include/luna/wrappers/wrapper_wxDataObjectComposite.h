#ifndef _WRAPPERS_WRAPPER_WXDATAOBJECTCOMPOSITE_H_
#define _WRAPPERS_WRAPPER_WXDATAOBJECTCOMPOSITE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/dataobj.h>

class wrapper_wxDataObjectComposite : public wxDataObjectComposite, public luna_wrapper_base {

public:
		

	~wrapper_wxDataObjectComposite() {
		logDEBUG3("Calling delete function for wrapper wxDataObjectComposite");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxDataObjectComposite*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxDataObjectComposite(lua_State* L, lua_Table* dum) 
		: wxDataObjectComposite(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxDataObjectComposite*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void wxDataObject::GetAllFormats(wxDataFormat * formats, wxDataObject::Direction dir = wxDataObject::Get) const
	void GetAllFormats(wxDataFormat * formats, wxDataObject::Direction dir = wxDataObject::Get) const {
		THROW_IF(!_obj.pushFunction("GetAllFormats"),"No implementation for abstract function wxDataObject::GetAllFormats");
		_obj.pushArg((wxDataObjectComposite*)this);
		_obj.pushArg(formats);
		_obj.pushArg((int)dir);
		return (_obj.callFunction<void>());
	};

	// bool wxDataObject::GetDataHere(const wxDataFormat & format, void * buf) const
	bool GetDataHere(const wxDataFormat & format, void * buf) const {
		THROW_IF(!_obj.pushFunction("GetDataHere"),"No implementation for abstract function wxDataObject::GetDataHere");
		_obj.pushArg((wxDataObjectComposite*)this);
		_obj.pushArg(&format);
		_obj.pushArg(buf);
		return (_obj.callFunction<bool>());
	};

	// size_t wxDataObject::GetDataSize(const wxDataFormat & format) const
	size_t GetDataSize(const wxDataFormat & format) const {
		THROW_IF(!_obj.pushFunction("GetDataSize"),"No implementation for abstract function wxDataObject::GetDataSize");
		_obj.pushArg((wxDataObjectComposite*)this);
		_obj.pushArg(&format);
		return (_obj.callFunction<size_t>());
	};

	// size_t wxDataObject::GetFormatCount(wxDataObject::Direction dir = wxDataObject::Get) const
	size_t GetFormatCount(wxDataObject::Direction dir = wxDataObject::Get) const {
		THROW_IF(!_obj.pushFunction("GetFormatCount"),"No implementation for abstract function wxDataObject::GetFormatCount");
		_obj.pushArg((wxDataObjectComposite*)this);
		_obj.pushArg((int)dir);
		return (_obj.callFunction<size_t>());
	};

	// wxDataFormat wxDataObject::GetPreferredFormat(wxDataObject::Direction dir = wxDataObject::Get) const
	wxDataFormat GetPreferredFormat(wxDataObject::Direction dir = wxDataObject::Get) const {
		THROW_IF(!_obj.pushFunction("GetPreferredFormat"),"No implementation for abstract function wxDataObject::GetPreferredFormat");
		_obj.pushArg((wxDataObjectComposite*)this);
		_obj.pushArg((int)dir);
		return *(_obj.callFunction<wxDataFormat*>());
	};

	// bool wxDataObject::SetData(const wxDataFormat & format, size_t len, const void * buf)
	bool SetData(const wxDataFormat & format, size_t len, const void * buf) {
		if(_obj.pushFunction("SetData")) {
			_obj.pushArg((wxDataObjectComposite*)this);
			_obj.pushArg(&format);
			_obj.pushArg(len);
			_obj.pushArg(buf);
			return (_obj.callFunction<bool>());
		}

		return wxDataObjectComposite::SetData(format, len, buf);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

