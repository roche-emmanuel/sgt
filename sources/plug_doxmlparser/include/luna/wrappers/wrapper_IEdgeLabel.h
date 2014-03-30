#ifndef _WRAPPERS_WRAPPER_IEDGELABEL_H_
#define _WRAPPERS_WRAPPER_IEDGELABEL_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <doxmlintf.h>

class wrapper_IEdgeLabel : public IEdgeLabel, public luna_wrapper_base {

public:
		

	~wrapper_IEdgeLabel() {
		logDEBUG3("Calling delete function for wrapper IEdgeLabel");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((IEdgeLabel*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_IEdgeLabel(lua_State* L, lua_Table* dum) 
		: IEdgeLabel(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((IEdgeLabel*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// const IString * IEdgeLabel::label() const
	const IString * label() const {
		THROW_IF(!_obj.pushFunction("label"),"No implementation for abstract function IEdgeLabel::label");
		_obj.pushArg((IEdgeLabel*)this);
		return (_obj.callFunction<IString*>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

