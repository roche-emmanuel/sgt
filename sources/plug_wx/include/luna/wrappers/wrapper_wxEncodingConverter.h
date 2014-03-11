#ifndef _WRAPPERS_WRAPPER_WXENCODINGCONVERTER_H_
#define _WRAPPERS_WRAPPER_WXENCODINGCONVERTER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/encconv.h>

class wrapper_wxEncodingConverter : public wxEncodingConverter, public luna_wrapper_base {

public:
		

	~wrapper_wxEncodingConverter() {
		logDEBUG3("Calling delete function for wrapper wxEncodingConverter");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxEncodingConverter*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxEncodingConverter(lua_State* L, lua_Table* dum) 
		: wxEncodingConverter(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxEncodingConverter*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxEncodingConverter*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxEncodingConverter::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxEncodingConverter*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxEncodingConverter::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxEncodingConverter*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxEncodingConverter::GetClassInfo();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

