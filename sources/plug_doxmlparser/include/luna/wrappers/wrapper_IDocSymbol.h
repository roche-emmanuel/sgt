#ifndef _WRAPPERS_WRAPPER_IDOCSYMBOL_H_
#define _WRAPPERS_WRAPPER_IDOCSYMBOL_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <doxmlintf.h>

class wrapper_IDocSymbol : public IDocSymbol, public luna_wrapper_base {

public:
		

	~wrapper_IDocSymbol() {
		logDEBUG3("Calling delete function for wrapper IDocSymbol");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((IDocSymbol*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_IDocSymbol(lua_State* L, lua_Table* dum) 
		: IDocSymbol(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((IDocSymbol*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// IDoc::Kind IDoc::kind() const
	IDoc::Kind kind() const {
		THROW_IF(!_obj.pushFunction("kind"),"No implementation for abstract function IDoc::kind");
		_obj.pushArg((IDocSymbol*)this);
		return (IDoc::Kind)(_obj.callFunction<int>());
	};

	// IDocSymbol::Types IDocSymbol::type() const
	IDocSymbol::Types type() const {
		THROW_IF(!_obj.pushFunction("type"),"No implementation for abstract function IDocSymbol::type");
		_obj.pushArg((IDocSymbol*)this);
		return (IDocSymbol::Types)(_obj.callFunction<int>());
	};

	// const IString * IDocSymbol::typeString() const
	const IString * typeString() const {
		THROW_IF(!_obj.pushFunction("typeString"),"No implementation for abstract function IDocSymbol::typeString");
		_obj.pushArg((IDocSymbol*)this);
		return (_obj.callFunction<IString*>());
	};

	// char IDocSymbol::letter() const
	char letter() const {
		THROW_IF(!_obj.pushFunction("letter"),"No implementation for abstract function IDocSymbol::letter");
		_obj.pushArg((IDocSymbol*)this);
		return (char)(_obj.callFunction<int>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

