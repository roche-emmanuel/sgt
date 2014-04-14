#ifndef _WRAPPERS_WRAPPER_PROLAND_SCENEVISITOR_H_
#define _WRAPPERS_WRAPPER_PROLAND_SCENEVISITOR_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <proland/ui/SceneVisitor.h>

class wrapper_proland_SceneVisitor : public proland::SceneVisitor, public luna_wrapper_base {

public:
		

	~wrapper_proland_SceneVisitor() {
		logDEBUG3("Calling delete function for wrapper proland_SceneVisitor");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::SceneVisitor*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_SceneVisitor(lua_State* L, lua_Table* dum) 
		: proland::SceneVisitor(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::SceneVisitor*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((proland::SceneVisitor*)this);
			return (_obj.callFunction<void>());
		}

		return SceneVisitor::doRelease();
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((proland::SceneVisitor*)this);
			return (_obj.callFunction<const char*>());
		}

		return SceneVisitor::toString();
	};

	// ork::ptr< proland::SceneVisitor > proland::SceneVisitor::visitNode(ork::ptr< ork::SceneNode > node)
	ork::ptr< proland::SceneVisitor > visitNode(ork::ptr< ork::SceneNode > node) {
		if(_obj.pushFunction("visitNode")) {
			_obj.pushArg((proland::SceneVisitor*)this);
			_obj.pushArg((ork::SceneNode*)node.get());
			return _obj.callFunction< proland::SceneVisitor* >();
		}

		return SceneVisitor::visitNode(node);
	};

	// ork::ptr< proland::SceneVisitor > proland::SceneVisitor::visitNodeValue(ork::ptr< ork::Value > value)
	ork::ptr< proland::SceneVisitor > visitNodeValue(ork::ptr< ork::Value > value) {
		if(_obj.pushFunction("visitNodeValue")) {
			_obj.pushArg((proland::SceneVisitor*)this);
			_obj.pushArg((ork::Value*)value.get());
			return _obj.callFunction< proland::SceneVisitor* >();
		}

		return SceneVisitor::visitNodeValue(value);
	};

	// ork::ptr< proland::SceneVisitor > proland::SceneVisitor::visitProducer(ork::ptr< proland::TileProducer > producer)
	ork::ptr< proland::SceneVisitor > visitProducer(ork::ptr< proland::TileProducer > producer) {
		if(_obj.pushFunction("visitProducer")) {
			_obj.pushArg((proland::SceneVisitor*)this);
			_obj.pushArg((proland::TileProducer*)producer.get());
			return _obj.callFunction< proland::SceneVisitor* >();
		}

		return SceneVisitor::visitProducer(producer);
	};

	// ork::ptr< proland::SceneVisitor > proland::SceneVisitor::visitLayer(ork::ptr< proland::TileLayer > layer)
	ork::ptr< proland::SceneVisitor > visitLayer(ork::ptr< proland::TileLayer > layer) {
		if(_obj.pushFunction("visitLayer")) {
			_obj.pushArg((proland::SceneVisitor*)this);
			_obj.pushArg((proland::TileLayer*)layer.get());
			return _obj.callFunction< proland::SceneVisitor* >();
		}

		return SceneVisitor::visitLayer(layer);
	};

	// ork::ptr< proland::SceneVisitor > proland::SceneVisitor::visitNodeField(std::string & name, ork::ptr< ork::Object > field)
	ork::ptr< proland::SceneVisitor > visitNodeField(std::string & name, ork::ptr< ork::Object > field) {
		if(_obj.pushFunction("visitNodeField")) {
			_obj.pushArg((proland::SceneVisitor*)this);
			_obj.pushArg(name);
			_obj.pushArg((ork::Object*)field.get());
			return _obj.callFunction< proland::SceneVisitor* >();
		}

		return SceneVisitor::visitNodeField(name, field);
	};

	// ork::ptr< proland::SceneVisitor > proland::SceneVisitor::visitNodeMethod(std::string & name, ork::ptr< ork::Method > method)
	ork::ptr< proland::SceneVisitor > visitNodeMethod(std::string & name, ork::ptr< ork::Method > method) {
		if(_obj.pushFunction("visitNodeMethod")) {
			_obj.pushArg((proland::SceneVisitor*)this);
			_obj.pushArg(name);
			_obj.pushArg((ork::Method*)method.get());
			return _obj.callFunction< proland::SceneVisitor* >();
		}

		return SceneVisitor::visitNodeMethod(name, method);
	};

	// ork::ptr< proland::SceneVisitor > proland::SceneVisitor::visitCache(ork::ptr< proland::TileCache > cache)
	ork::ptr< proland::SceneVisitor > visitCache(ork::ptr< proland::TileCache > cache) {
		if(_obj.pushFunction("visitCache")) {
			_obj.pushArg((proland::SceneVisitor*)this);
			_obj.pushArg((proland::TileCache*)cache.get());
			return _obj.callFunction< proland::SceneVisitor* >();
		}

		return SceneVisitor::visitCache(cache);
	};

	// void proland::SceneVisitor::visitEnd()
	void visitEnd() {
		if(_obj.pushFunction("visitEnd")) {
			_obj.pushArg((proland::SceneVisitor*)this);
			return (_obj.callFunction<void>());
		}

		return SceneVisitor::visitEnd();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

