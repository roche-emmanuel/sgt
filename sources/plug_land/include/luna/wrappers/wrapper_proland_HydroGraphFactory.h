#ifndef _WRAPPERS_WRAPPER_PROLAND_HYDROGRAPHFACTORY_H_
#define _WRAPPERS_WRAPPER_PROLAND_HYDROGRAPHFACTORY_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <W:/Cloud/Projects/sgt/sources/proland/sources/river/proland/rivers/graph/HydroGraphFactory.h>

class wrapper_proland_HydroGraphFactory : public proland::HydroGraphFactory, public luna_wrapper_base {

public:
		

	~wrapper_proland_HydroGraphFactory() {
		logDEBUG3("Calling delete function for wrapper proland_HydroGraphFactory");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::HydroGraphFactory*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_HydroGraphFactory(lua_State* L, lua_Table* dum) 
		: proland::HydroGraphFactory(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::HydroGraphFactory*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((proland::HydroGraphFactory*)this);
			return (_obj.callFunction<void>());
		}

		return HydroGraphFactory::doRelease();
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((proland::HydroGraphFactory*)this);
			return (_obj.callFunction<const char*>());
		}

		return HydroGraphFactory::toString();
	};

	// void proland::GraphProducer::GraphFactory::swap(ork::ptr< proland::GraphProducer::GraphFactory > g)
	void swap(ork::ptr< proland::GraphProducer::GraphFactory > g) {
		if(_obj.pushFunction("swap")) {
			_obj.pushArg((proland::HydroGraphFactory*)this);
			_obj.pushArg((proland::GraphProducer::GraphFactory*)g.get());
			return (_obj.callFunction<void>());
		}

		return HydroGraphFactory::swap(g);
	};

	// proland::Graph * proland::HydroGraphFactory::newGraph(int nodeCacheSize, int curveCacheSize, int areaCacheSize)
	proland::Graph * newGraph(int nodeCacheSize, int curveCacheSize, int areaCacheSize) {
		if(_obj.pushFunction("newGraph")) {
			_obj.pushArg((proland::HydroGraphFactory*)this);
			_obj.pushArg(nodeCacheSize);
			_obj.pushArg(curveCacheSize);
			_obj.pushArg(areaCacheSize);
			return (_obj.callFunction<proland::Graph*>());
		}

		return HydroGraphFactory::newGraph(nodeCacheSize, curveCacheSize, areaCacheSize);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

