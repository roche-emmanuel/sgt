#ifndef _WRAPPERS_WRAPPER_IDOCFORMULA_H_
#define _WRAPPERS_WRAPPER_IDOCFORMULA_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <doxmlintf.h>

class wrapper_IDocFormula : public IDocFormula, public luna_wrapper_base {

public:
		

	~wrapper_IDocFormula() {
		logDEBUG3("Calling delete function for wrapper IDocFormula");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((IDocFormula*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_IDocFormula(lua_State* L, lua_Table* dum) 
		: IDocFormula(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((IDocFormula*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// IDoc::Kind IDoc::kind() const
	IDoc::Kind kind() const {
		THROW_IF(!_obj.pushFunction("kind"),"No implementation for abstract function IDoc::kind");
		_obj.pushArg((IDocFormula*)this);
		return (IDoc::Kind)(_obj.callFunction<int>());
	};

	// const IString * IDocFormula::id() const
	const IString * id() const {
		THROW_IF(!_obj.pushFunction("id"),"No implementation for abstract function IDocFormula::id");
		_obj.pushArg((IDocFormula*)this);
		return (_obj.callFunction<IString*>());
	};

	// const IString * IDocFormula::text() const
	const IString * text() const {
		THROW_IF(!_obj.pushFunction("text"),"No implementation for abstract function IDocFormula::text");
		_obj.pushArg((IDocFormula*)this);
		return (_obj.callFunction<IString*>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

