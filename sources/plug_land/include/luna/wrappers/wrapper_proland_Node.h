#ifndef _WRAPPERS_WRAPPER_PROLAND_NODE_H_
#define _WRAPPERS_WRAPPER_PROLAND_NODE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <W:/Cloud/Projects/sgt/sources/proland/sources/graph/proland/graph/Node.h>

class wrapper_proland_Node : public proland::Node, public luna_wrapper_base {

public:
		

	~wrapper_proland_Node() {
		logDEBUG3("Calling delete function for wrapper proland_Node");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::Node*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_Node(lua_State* L, lua_Table* dum, proland::Graph * owner, double x, double y) 
		: proland::Node(owner, x, y), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::Node*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((proland::Node*)this);
			return (_obj.callFunction<void>());
		}

		return Node::doRelease();
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((proland::Node*)this);
			return (_obj.callFunction<const char*>());
		}

		return Node::toString();
	};

	// proland::NodeId proland::Node::getId() const
	proland::NodeId getId() const {
		if(_obj.pushFunction("getId")) {
			_obj.pushArg((proland::Node*)this);
			return *(_obj.callFunction<proland::NodeId*>());
		}

		return Node::getId();
	};

	// int proland::Node::getCurveCount() const
	int getCurveCount() const {
		if(_obj.pushFunction("getCurveCount")) {
			_obj.pushArg((proland::Node*)this);
			return (_obj.callFunction<int>());
		}

		return Node::getCurveCount();
	};

	// proland::CurvePtr proland::Node::getCurve(int i) const
	proland::CurvePtr getCurve(int i) const {
		if(_obj.pushFunction("getCurve")) {
			_obj.pushArg((proland::Node*)this);
			_obj.pushArg(i);
			return *(_obj.callFunction<proland::CurvePtr*>());
		}

		return Node::getCurve(i);
	};

	// void proland::Node::addCurve(proland::CurveId c)
	void addCurve(proland::CurveId c) {
		if(_obj.pushFunction("addCurve")) {
			_obj.pushArg((proland::Node*)this);
			_obj.pushArg(&c);
			return (_obj.callFunction<void>());
		}

		return Node::addCurve(c);
	};

	// void proland::Node::removeCurve(proland::CurveId c)
	void removeCurve(proland::CurveId c) {
		if(_obj.pushFunction("removeCurve")) {
			_obj.pushArg((proland::Node*)this);
			_obj.pushArg(&c);
			return (_obj.callFunction<void>());
		}

		return Node::removeCurve(c);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

