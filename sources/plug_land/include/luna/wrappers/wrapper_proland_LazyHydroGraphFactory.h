#ifndef _WRAPPERS_WRAPPER_PROLAND_LAZYHYDROGRAPHFACTORY_H_
#define _WRAPPERS_WRAPPER_PROLAND_LAZYHYDROGRAPHFACTORY_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <W:/Cloud/Projects/sgt/sources/proland/sources/river/proland/rivers/graph/LazyHydroGraphFactory.h>

class wrapper_proland_LazyHydroGraphFactory : public proland::LazyHydroGraphFactory, public luna_wrapper_base {

public:
		

	~wrapper_proland_LazyHydroGraphFactory() {
		logDEBUG3("Calling delete function for wrapper proland_LazyHydroGraphFactory");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::LazyHydroGraphFactory*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_LazyHydroGraphFactory(lua_State* L, lua_Table* dum) 
		: proland::LazyHydroGraphFactory(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::LazyHydroGraphFactory*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((proland::LazyHydroGraphFactory*)this);
			return (_obj.callFunction<void>());
		}

		return LazyHydroGraphFactory::doRelease();
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((proland::LazyHydroGraphFactory*)this);
			return (_obj.callFunction<const char*>());
		}

		return LazyHydroGraphFactory::toString();
	};

	// void proland::GraphProducer::GraphFactory::swap(ork::ptr< proland::GraphProducer::GraphFactory > g)
	void swap(ork::ptr< proland::GraphProducer::GraphFactory > g) {
		if(_obj.pushFunction("swap")) {
			_obj.pushArg((proland::LazyHydroGraphFactory*)this);
			_obj.pushArg((proland::GraphProducer::GraphFactory*)g.get());
			return (_obj.callFunction<void>());
		}

		return LazyHydroGraphFactory::swap(g);
	};

	// proland::Graph * proland::LazyHydroGraphFactory::newGraph(int nodeCacheSize, int curveCacheSize, int areaCacheSize)
	proland::Graph * newGraph(int nodeCacheSize, int curveCacheSize, int areaCacheSize) {
		if(_obj.pushFunction("newGraph")) {
			_obj.pushArg((proland::LazyHydroGraphFactory*)this);
			_obj.pushArg(nodeCacheSize);
			_obj.pushArg(curveCacheSize);
			_obj.pushArg(areaCacheSize);
			return (_obj.callFunction<proland::Graph*>());
		}

		return LazyHydroGraphFactory::newGraph(nodeCacheSize, curveCacheSize, areaCacheSize);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

