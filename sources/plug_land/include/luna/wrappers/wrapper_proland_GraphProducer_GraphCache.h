#ifndef _WRAPPERS_WRAPPER_PROLAND_GRAPHPRODUCER_GRAPHCACHE_H_
#define _WRAPPERS_WRAPPER_PROLAND_GRAPHPRODUCER_GRAPHCACHE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <W:/Cloud/Projects/sgt/sources/proland/sources/graph/proland/graph/producer/GraphProducer.h>

class wrapper_proland_GraphProducer_GraphCache : public proland::GraphProducer::GraphCache, public luna_wrapper_base {

public:
		

	~wrapper_proland_GraphProducer_GraphCache() {
		logDEBUG3("Calling delete function for wrapper proland_GraphProducer_GraphCache");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::GraphProducer::GraphCache*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_GraphProducer_GraphCache(lua_State* L, lua_Table* dum, proland::GraphPtr root, string graphName, ork::ptr< ork::ResourceManager > manager, bool loadSubgraphs = false) 
		: proland::GraphProducer::GraphCache(root, graphName, manager, loadSubgraphs), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::GraphProducer::GraphCache*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void proland::GraphProducer::GraphCache::swap(ork::ptr< proland::GraphProducer::GraphCache > p)
	void swap(ork::ptr< proland::GraphProducer::GraphCache > p) {
		if(_obj.pushFunction("swap")) {
			_obj.pushArg((proland::GraphProducer::GraphCache*)this);
			_obj.pushArg((proland::GraphProducer::GraphCache*)p.get());
			return (_obj.callFunction<void>());
		}

		return GraphCache::swap(p);
	};

public:
	// Public virtual methods:

	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

