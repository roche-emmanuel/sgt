#ifndef _WRAPPERS_WRAPPER_WXFILTERCLASSFACTORY_H_
#define _WRAPPERS_WRAPPER_WXFILTERCLASSFACTORY_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/stream.h>

class wrapper_wxFilterClassFactory : public wxFilterClassFactory, public luna_wrapper_base {

public:
		

	~wrapper_wxFilterClassFactory() {
		logDEBUG3("Calling delete function for wrapper wxFilterClassFactory");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxFilterClassFactory*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxFilterClassFactory*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxFilterClassFactory::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxFilterClassFactory*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxFilterClassFactory::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxFilterClassFactory*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxFilterClassFactory::GetClassInfo();
	};

	// wxFilterInputStream * wxFilterClassFactory::NewStream(wxInputStream & stream) const
	wxFilterInputStream * NewStream(wxInputStream & stream) const {
		THROW_IF(!_obj.pushFunction("NewStream"),"No implementation for abstract function wxFilterClassFactory::NewStream");
		_obj.pushArg((wxFilterClassFactory*)this);
		_obj.pushArg(&stream);
		return (_obj.callFunction<wxFilterInputStream*>());
	};

	// wxFilterOutputStream * wxFilterClassFactory::NewStream(wxOutputStream & stream) const
	wxFilterOutputStream * NewStream(wxOutputStream & stream) const {
		THROW_IF(!_obj.pushFunction("NewStream"),"No implementation for abstract function wxFilterClassFactory::NewStream");
		_obj.pushArg((wxFilterClassFactory*)this);
		_obj.pushArg(&stream);
		return (_obj.callFunction<wxFilterOutputStream*>());
	};

	// wxFilterInputStream * wxFilterClassFactory::NewStream(wxInputStream * stream) const
	wxFilterInputStream * NewStream(wxInputStream * stream) const {
		THROW_IF(!_obj.pushFunction("NewStream"),"No implementation for abstract function wxFilterClassFactory::NewStream");
		_obj.pushArg((wxFilterClassFactory*)this);
		_obj.pushArg(stream);
		return (_obj.callFunction<wxFilterInputStream*>());
	};

	// wxFilterOutputStream * wxFilterClassFactory::NewStream(wxOutputStream * stream) const
	wxFilterOutputStream * NewStream(wxOutputStream * stream) const {
		THROW_IF(!_obj.pushFunction("NewStream"),"No implementation for abstract function wxFilterClassFactory::NewStream");
		_obj.pushArg((wxFilterClassFactory*)this);
		_obj.pushArg(stream);
		return (_obj.callFunction<wxFilterOutputStream*>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


public:
// const wxChar *const * wxFilterClassFactory::GetProtocols(wxStreamProtocolType type = ::wxSTREAM_PROTOCOL) const
const wxChar *const * GetProtocols(wxStreamProtocolType) const {
	THROW_IF(true,"The function call const wxChar *const * wxFilterClassFactory::GetProtocols(wxStreamProtocolType) const is not implemented in wrapper.");
	return NULL;
};

};




#endif

