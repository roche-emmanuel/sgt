#ifndef _WRAPPERS_WRAPPER_WXXMLATTRIBUTE_H_
#define _WRAPPERS_WRAPPER_WXXMLATTRIBUTE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/xml/xml.h>

class wrapper_wxXmlAttribute : public wxXmlAttribute, public luna_wrapper_base {

public:
		

	~wrapper_wxXmlAttribute() {
		logDEBUG3("Calling delete function for wrapper wxXmlAttribute");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxXmlAttribute*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxXmlAttribute(lua_State* L, lua_Table* dum) 
		: wxXmlAttribute(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxXmlAttribute*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxXmlAttribute(lua_State* L, lua_Table* dum, const wxString & name, const wxString & value, wxXmlAttribute * next = NULL) 
		: wxXmlAttribute(name, value, next), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxXmlAttribute*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:

	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

