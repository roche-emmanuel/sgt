#ifndef _WRAPPERS_WRAPPER_PROLAND_LAZYNODE_H_
#define _WRAPPERS_WRAPPER_PROLAND_LAZYNODE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <W:/Cloud/Projects/sgt/sources/proland/sources/graph/proland/graph/LazyNode.h>

class wrapper_proland_LazyNode : public proland::LazyNode, public luna_wrapper_base {

public:
		

	~wrapper_proland_LazyNode() {
		logDEBUG3("Calling delete function for wrapper proland_LazyNode");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::LazyNode*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_LazyNode(lua_State* L, lua_Table* dum, proland::Graph * owner, proland::NodeId id, double x, double y) 
		: proland::LazyNode(owner, id, x, y), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::LazyNode*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void proland::LazyNode::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((proland::LazyNode*)this);
			return (_obj.callFunction<void>());
		}

		return LazyNode::doRelease();
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((proland::LazyNode*)this);
			return (_obj.callFunction<const char*>());
		}

		return LazyNode::toString();
	};

	// int proland::Node::getCurveCount() const
	int getCurveCount() const {
		if(_obj.pushFunction("getCurveCount")) {
			_obj.pushArg((proland::LazyNode*)this);
			return (_obj.callFunction<int>());
		}

		return LazyNode::getCurveCount();
	};

	// proland::CurvePtr proland::Node::getCurve(int i) const
	proland::CurvePtr getCurve(int i) const {
		if(_obj.pushFunction("getCurve")) {
			_obj.pushArg((proland::LazyNode*)this);
			_obj.pushArg(i);
			return *(_obj.callFunction<proland::CurvePtr*>());
		}

		return LazyNode::getCurve(i);
	};

	// proland::NodeId proland::LazyNode::getId() const
	proland::NodeId getId() const {
		if(_obj.pushFunction("getId")) {
			_obj.pushArg((proland::LazyNode*)this);
			return *(_obj.callFunction<proland::NodeId*>());
		}

		return LazyNode::getId();
	};

	// void proland::LazyNode::addCurve(proland::CurveId c)
	void addCurve(proland::CurveId c) {
		if(_obj.pushFunction("addCurve")) {
			_obj.pushArg((proland::LazyNode*)this);
			_obj.pushArg(&c);
			return (_obj.callFunction<void>());
		}

		return LazyNode::addCurve(c);
	};

	// void proland::LazyNode::removeCurve(proland::CurveId c)
	void removeCurve(proland::CurveId c) {
		if(_obj.pushFunction("removeCurve")) {
			_obj.pushArg((proland::LazyNode*)this);
			_obj.pushArg(&c);
			return (_obj.callFunction<void>());
		}

		return LazyNode::removeCurve(c);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

