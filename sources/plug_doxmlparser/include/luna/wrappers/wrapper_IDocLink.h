#ifndef _WRAPPERS_WRAPPER_IDOCLINK_H_
#define _WRAPPERS_WRAPPER_IDOCLINK_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <doxmlintf.h>

class wrapper_IDocLink : public IDocLink, public luna_wrapper_base {

public:
		

	~wrapper_IDocLink() {
		logDEBUG3("Calling delete function for wrapper IDocLink");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((IDocLink*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_IDocLink(lua_State* L, lua_Table* dum) 
		: IDocLink(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((IDocLink*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// IDoc::Kind IDoc::kind() const
	IDoc::Kind kind() const {
		THROW_IF(!_obj.pushFunction("kind"),"No implementation for abstract function IDoc::kind");
		_obj.pushArg((IDocLink*)this);
		return (IDoc::Kind)(_obj.callFunction<int>());
	};

	// const IString * IDocLink::refId() const
	const IString * refId() const {
		THROW_IF(!_obj.pushFunction("refId"),"No implementation for abstract function IDocLink::refId");
		_obj.pushArg((IDocLink*)this);
		return (_obj.callFunction<IString*>());
	};

	// const IString * IDocLink::text() const
	const IString * text() const {
		THROW_IF(!_obj.pushFunction("text"),"No implementation for abstract function IDocLink::text");
		_obj.pushArg((IDocLink*)this);
		return (_obj.callFunction<IString*>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

