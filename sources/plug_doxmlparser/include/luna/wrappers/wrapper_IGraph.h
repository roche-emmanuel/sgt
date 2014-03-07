#ifndef _WRAPPERS_WRAPPER_IGRAPH_H_
#define _WRAPPERS_WRAPPER_IGRAPH_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <doxmlintf.h>

class wrapper_IGraph : public IGraph, public luna_wrapper_base {

public:
		

	~wrapper_IGraph() {
		logDEBUG3("Calling delete function for wrapper IGraph");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((IGraph*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_IGraph(lua_State* L, lua_Table* dum) 
		: IGraph(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((IGraph*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// INodeIterator * IGraph::nodes() const
	INodeIterator * nodes() const {
		THROW_IF(!_obj.pushFunction("nodes"),"No implementation for abstract function IGraph::nodes");
		_obj.pushArg((IGraph*)this);
		return (_obj.callFunction<INodeIterator*>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

