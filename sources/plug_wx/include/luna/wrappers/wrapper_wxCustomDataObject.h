#ifndef _WRAPPERS_WRAPPER_WXCUSTOMDATAOBJECT_H_
#define _WRAPPERS_WRAPPER_WXCUSTOMDATAOBJECT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/dataobj.h>

class wrapper_wxCustomDataObject : public wxCustomDataObject, public luna_wrapper_base {

public:
		

	~wrapper_wxCustomDataObject() {
		logDEBUG3("Calling delete function for wrapper wxCustomDataObject");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxCustomDataObject*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxCustomDataObject(lua_State* L, lua_Table* dum, const wxDataFormat & format = wxFormatInvalid) 
		: wxCustomDataObject(format), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxCustomDataObject*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void wxDataObject::GetAllFormats(wxDataFormat * formats, wxDataObject::Direction dir = wxDataObject::Get) const
	void GetAllFormats(wxDataFormat * formats, wxDataObject::Direction dir = wxDataObject::Get) const {
		THROW_IF(!_obj.pushFunction("GetAllFormats"),"No implementation for abstract function wxDataObject::GetAllFormats");
		_obj.pushArg((wxCustomDataObject*)this);
		_obj.pushArg(formats);
		_obj.pushArg((int)dir);
		return (_obj.callFunction<void>());
	};

	// size_t wxDataObject::GetFormatCount(wxDataObject::Direction dir = wxDataObject::Get) const
	size_t GetFormatCount(wxDataObject::Direction dir = wxDataObject::Get) const {
		THROW_IF(!_obj.pushFunction("GetFormatCount"),"No implementation for abstract function wxDataObject::GetFormatCount");
		_obj.pushArg((wxCustomDataObject*)this);
		_obj.pushArg((int)dir);
		return (_obj.callFunction<size_t>());
	};

	// wxDataFormat wxDataObject::GetPreferredFormat(wxDataObject::Direction dir = wxDataObject::Get) const
	wxDataFormat GetPreferredFormat(wxDataObject::Direction dir = wxDataObject::Get) const {
		THROW_IF(!_obj.pushFunction("GetPreferredFormat"),"No implementation for abstract function wxDataObject::GetPreferredFormat");
		_obj.pushArg((wxCustomDataObject*)this);
		_obj.pushArg((int)dir);
		return *(_obj.callFunction<wxDataFormat*>());
	};

	// bool wxDataObjectSimple::GetDataHere(void * buf) const
	bool GetDataHere(void * buf) const {
		if(_obj.pushFunction("GetDataHere")) {
			_obj.pushArg((wxCustomDataObject*)this);
			_obj.pushArg(buf);
			return (_obj.callFunction<bool>());
		}

		return wxCustomDataObject::GetDataHere(buf);
	};

	// size_t wxDataObjectSimple::GetDataSize() const
	size_t GetDataSize() const {
		if(_obj.pushFunction("GetDataSize")) {
			_obj.pushArg((wxCustomDataObject*)this);
			return (_obj.callFunction<size_t>());
		}

		return wxCustomDataObject::GetDataSize();
	};

	// void * wxCustomDataObject::Alloc(size_t size)
	void * Alloc(size_t size) {
		if(_obj.pushFunction("Alloc")) {
			_obj.pushArg((wxCustomDataObject*)this);
			_obj.pushArg(size);
			return (_obj.callFunction<void*>());
		}

		return wxCustomDataObject::Alloc(size);
	};

	// void wxCustomDataObject::Free()
	void Free() {
		if(_obj.pushFunction("Free")) {
			_obj.pushArg((wxCustomDataObject*)this);
			return (_obj.callFunction<void>());
		}

		return wxCustomDataObject::Free();
	};

	// void * wxCustomDataObject::GetData() const
	void * GetData() const {
		if(_obj.pushFunction("GetData")) {
			_obj.pushArg((wxCustomDataObject*)this);
			return (_obj.callFunction<void*>());
		}

		return wxCustomDataObject::GetData();
	};

	// size_t wxCustomDataObject::GetSize() const
	size_t GetSize() const {
		if(_obj.pushFunction("GetSize")) {
			_obj.pushArg((wxCustomDataObject*)this);
			return (_obj.callFunction<size_t>());
		}

		return wxCustomDataObject::GetSize();
	};

	// bool wxCustomDataObject::SetData(size_t size, const void * data)
	bool SetData(size_t size, const void * data) {
		if(_obj.pushFunction("SetData")) {
			_obj.pushArg((wxCustomDataObject*)this);
			_obj.pushArg(size);
			_obj.pushArg(data);
			return (_obj.callFunction<bool>());
		}

		return wxCustomDataObject::SetData(size, data);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

