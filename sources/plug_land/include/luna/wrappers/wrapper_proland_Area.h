#ifndef _WRAPPERS_WRAPPER_PROLAND_AREA_H_
#define _WRAPPERS_WRAPPER_PROLAND_AREA_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <W:/Cloud/Projects/sgt/sources/proland/sources/graph/proland/graph/Area.h>

class wrapper_proland_Area : public proland::Area, public luna_wrapper_base {

public:
		

	~wrapper_proland_Area() {
		logDEBUG3("Calling delete function for wrapper proland_Area");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::Area*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_Area(lua_State* L, lua_Table* dum, proland::Graph * owner) 
		: proland::Area(owner), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::Area*)this);
			_obj.callFunction<void>();
		}
	};

private:
	// Private virtual methods:
	// void proland::Area::setParentId(proland::AreaId id)
	void setParentId(proland::AreaId id) {
		THROW_IF(!_obj.pushFunction("setParentId"),"No implementation for abstract function proland::Area::setParentId");
		_obj.pushArg((proland::Area*)this);
		_obj.pushArg(&id);
		return (_obj.callFunction<void>());
	};

	// void proland::Area::switchCurves(int curve1, int curve2)
	void switchCurves(int curve1, int curve2) {
		THROW_IF(!_obj.pushFunction("switchCurves"),"No implementation for abstract function proland::Area::switchCurves");
		_obj.pushArg((proland::Area*)this);
		_obj.pushArg(curve1);
		_obj.pushArg(curve2);
		return (_obj.callFunction<void>());
	};

	// void proland::Area::removeCurve(int index)
	void removeCurve(int index) {
		THROW_IF(!_obj.pushFunction("removeCurve"),"No implementation for abstract function proland::Area::removeCurve");
		_obj.pushArg((proland::Area*)this);
		_obj.pushArg(index);
		return (_obj.callFunction<void>());
	};

protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((proland::Area*)this);
			return (_obj.callFunction<void>());
		}

		return Area::doRelease();
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((proland::Area*)this);
			return (_obj.callFunction<const char*>());
		}

		return Area::toString();
	};

	// proland::AreaId proland::Area::getId() const
	proland::AreaId getId() const {
		if(_obj.pushFunction("getId")) {
			_obj.pushArg((proland::Area*)this);
			return *(_obj.callFunction<proland::AreaId*>());
		}

		return Area::getId();
	};

	// proland::AreaPtr proland::Area::getParent() const
	proland::AreaPtr getParent() const {
		if(_obj.pushFunction("getParent")) {
			_obj.pushArg((proland::Area*)this);
			return *(_obj.callFunction<proland::AreaPtr*>());
		}

		return Area::getParent();
	};

	// proland::AreaId proland::Area::getParentId() const
	proland::AreaId getParentId() const {
		if(_obj.pushFunction("getParentId")) {
			_obj.pushArg((proland::Area*)this);
			return *(_obj.callFunction<proland::AreaId*>());
		}

		return Area::getParentId();
	};

	// int proland::Area::getCurveCount() const
	int getCurveCount() const {
		if(_obj.pushFunction("getCurveCount")) {
			_obj.pushArg((proland::Area*)this);
			return (_obj.callFunction<int>());
		}

		return Area::getCurveCount();
	};

	// proland::CurvePtr proland::Area::getCurve(int i) const
	proland::CurvePtr getCurve(int i) const {
		if(_obj.pushFunction("getCurve")) {
			_obj.pushArg((proland::Area*)this);
			_obj.pushArg(i);
			return *(_obj.callFunction<proland::CurvePtr*>());
		}

		return Area::getCurve(i);
	};

	// proland::CurvePtr proland::Area::getCurve(int i, int & orientation) const
	proland::CurvePtr getCurve(int i, int & orientation) const {
		if(_obj.pushFunction("getCurve")) {
			_obj.pushArg((proland::Area*)this);
			_obj.pushArg(i);
			_obj.pushArg(orientation);
			return *(_obj.callFunction<proland::CurvePtr*>());
		}

		return Area::getCurve(i, orientation);
	};

	// void proland::Area::setOrientation(int i, int orientation)
	void setOrientation(int i, int orientation) {
		if(_obj.pushFunction("setOrientation")) {
			_obj.pushArg((proland::Area*)this);
			_obj.pushArg(i);
			_obj.pushArg(orientation);
			return (_obj.callFunction<void>());
		}

		return Area::setOrientation(i, orientation);
	};

	// void proland::Area::invertCurve(proland::CurveId cid)
	void invertCurve(proland::CurveId cid) {
		if(_obj.pushFunction("invertCurve")) {
			_obj.pushArg((proland::Area*)this);
			_obj.pushArg(&cid);
			return (_obj.callFunction<void>());
		}

		return Area::invertCurve(cid);
	};

	// void proland::Area::setParent(proland::AreaPtr a)
	void setParent(proland::AreaPtr a) {
		if(_obj.pushFunction("setParent")) {
			_obj.pushArg((proland::Area*)this);
			_obj.pushArg(&a);
			return (_obj.callFunction<void>());
		}

		return Area::setParent(a);
	};

	// void proland::Area::addCurve(proland::CurveId id, int orientation)
	void addCurve(proland::CurveId id, int orientation) {
		if(_obj.pushFunction("addCurve")) {
			_obj.pushArg((proland::Area*)this);
			_obj.pushArg(&id);
			_obj.pushArg(orientation);
			return (_obj.callFunction<void>());
		}

		return Area::addCurve(id, orientation);
	};

	// void proland::Area::setSubgraph(proland::Graph * g)
	void setSubgraph(proland::Graph * g) {
		if(_obj.pushFunction("setSubgraph")) {
			_obj.pushArg((proland::Area*)this);
			_obj.pushArg(g);
			return (_obj.callFunction<void>());
		}

		return Area::setSubgraph(g);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

