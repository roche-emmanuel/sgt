#ifndef _WRAPPERS_WRAPPER_PROLAND_BASICGRAPH_BASICCURVEITERATOR_H_
#define _WRAPPERS_WRAPPER_PROLAND_BASICGRAPH_BASICCURVEITERATOR_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <W:/Cloud/Projects/sgt/sources/proland/sources/graph/proland/graph/BasicGraph.h>

class wrapper_proland_BasicGraph_BasicCurveIterator : public proland::BasicGraph::BasicCurveIterator, public luna_wrapper_base {

public:
		

	~wrapper_proland_BasicGraph_BasicCurveIterator() {
		logDEBUG3("Calling delete function for wrapper proland_BasicGraph_BasicCurveIterator");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::BasicGraph::BasicCurveIterator*)this); // No this argument or the object will be referenced again!
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

