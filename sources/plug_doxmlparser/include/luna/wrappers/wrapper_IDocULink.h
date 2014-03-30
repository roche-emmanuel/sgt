#ifndef _WRAPPERS_WRAPPER_IDOCULINK_H_
#define _WRAPPERS_WRAPPER_IDOCULINK_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <doxmlintf.h>

class wrapper_IDocULink : public IDocULink, public luna_wrapper_base {

public:
		

	~wrapper_IDocULink() {
		logDEBUG3("Calling delete function for wrapper IDocULink");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((IDocULink*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_IDocULink(lua_State* L, lua_Table* dum) 
		: IDocULink(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((IDocULink*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// IDoc::Kind IDoc::kind() const
	IDoc::Kind kind() const {
		THROW_IF(!_obj.pushFunction("kind"),"No implementation for abstract function IDoc::kind");
		_obj.pushArg((IDocULink*)this);
		return (IDoc::Kind)(_obj.callFunction<int>());
	};

	// const IString * IDocULink::url() const
	const IString * url() const {
		THROW_IF(!_obj.pushFunction("url"),"No implementation for abstract function IDocULink::url");
		_obj.pushArg((IDocULink*)this);
		return (_obj.callFunction<IString*>());
	};

	// const IString * IDocULink::text() const
	const IString * text() const {
		THROW_IF(!_obj.pushFunction("text"),"No implementation for abstract function IDocULink::text");
		_obj.pushArg((IDocULink*)this);
		return (_obj.callFunction<IString*>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

