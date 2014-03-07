#ifndef _WRAPPERS_WRAPPER_IDOCEMAIL_H_
#define _WRAPPERS_WRAPPER_IDOCEMAIL_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <doxmlintf.h>

class wrapper_IDocEMail : public IDocEMail, public luna_wrapper_base {

public:
		

	~wrapper_IDocEMail() {
		logDEBUG3("Calling delete function for wrapper IDocEMail");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((IDocEMail*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_IDocEMail(lua_State* L, lua_Table* dum) 
		: IDocEMail(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((IDocEMail*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// IDoc::Kind IDoc::kind() const
	IDoc::Kind kind() const {
		THROW_IF(!_obj.pushFunction("kind"),"No implementation for abstract function IDoc::kind");
		_obj.pushArg((IDocEMail*)this);
		return (IDoc::Kind)(_obj.callFunction<int>());
	};

	// const IString * IDocEMail::address() const
	const IString * address() const {
		THROW_IF(!_obj.pushFunction("address"),"No implementation for abstract function IDocEMail::address");
		_obj.pushArg((IDocEMail*)this);
		return (_obj.callFunction<IString*>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

