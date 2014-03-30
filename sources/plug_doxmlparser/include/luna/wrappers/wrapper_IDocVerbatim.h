#ifndef _WRAPPERS_WRAPPER_IDOCVERBATIM_H_
#define _WRAPPERS_WRAPPER_IDOCVERBATIM_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <doxmlintf.h>

class wrapper_IDocVerbatim : public IDocVerbatim, public luna_wrapper_base {

public:
		

	~wrapper_IDocVerbatim() {
		logDEBUG3("Calling delete function for wrapper IDocVerbatim");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((IDocVerbatim*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_IDocVerbatim(lua_State* L, lua_Table* dum) 
		: IDocVerbatim(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((IDocVerbatim*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// IDoc::Kind IDoc::kind() const
	IDoc::Kind kind() const {
		THROW_IF(!_obj.pushFunction("kind"),"No implementation for abstract function IDoc::kind");
		_obj.pushArg((IDocVerbatim*)this);
		return (IDoc::Kind)(_obj.callFunction<int>());
	};

	// const IString * IDocVerbatim::text() const
	const IString * text() const {
		THROW_IF(!_obj.pushFunction("text"),"No implementation for abstract function IDocVerbatim::text");
		_obj.pushArg((IDocVerbatim*)this);
		return (_obj.callFunction<IString*>());
	};

	// IDocVerbatim::Types IDocVerbatim::type() const
	IDocVerbatim::Types type() const {
		THROW_IF(!_obj.pushFunction("type"),"No implementation for abstract function IDocVerbatim::type");
		_obj.pushArg((IDocVerbatim*)this);
		return (IDocVerbatim::Types)(_obj.callFunction<int>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

