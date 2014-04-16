#ifndef _WRAPPERS_WRAPPER_PROLAND_LAZYAREA_H_
#define _WRAPPERS_WRAPPER_PROLAND_LAZYAREA_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <W:/Cloud/Projects/sgt/sources/proland/sources/graph/proland/graph/LazyArea.h>

class wrapper_proland_LazyArea : public proland::LazyArea, public luna_wrapper_base {

public:
		

	~wrapper_proland_LazyArea() {
		logDEBUG3("Calling delete function for wrapper proland_LazyArea");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::LazyArea*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_LazyArea(lua_State* L, lua_Table* dum, proland::Graph * owner, proland::AreaId id) 
		: proland::LazyArea(owner, id), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::LazyArea*)this);
			_obj.callFunction<void>();
		}
	};

private:
	// Private virtual methods:
	// void proland::LazyArea::setParentId(proland::AreaId id)
	void setParentId(proland::AreaId id) {
		THROW_IF(!_obj.pushFunction("setParentId"),"No implementation for abstract function proland::LazyArea::setParentId");
		_obj.pushArg((proland::LazyArea*)this);
		_obj.pushArg(&id);
		return (_obj.callFunction<void>());
	};

	// void proland::LazyArea::switchCurves(int curve1, int curve2)
	void switchCurves(int curve1, int curve2) {
		THROW_IF(!_obj.pushFunction("switchCurves"),"No implementation for abstract function proland::LazyArea::switchCurves");
		_obj.pushArg((proland::LazyArea*)this);
		_obj.pushArg(curve1);
		_obj.pushArg(curve2);
		return (_obj.callFunction<void>());
	};

	// void proland::LazyArea::removeCurve(int index)
	void removeCurve(int index) {
		THROW_IF(!_obj.pushFunction("removeCurve"),"No implementation for abstract function proland::LazyArea::removeCurve");
		_obj.pushArg((proland::LazyArea*)this);
		_obj.pushArg(index);
		return (_obj.callFunction<void>());
	};

protected:
	// Protected virtual methods:
	// void proland::LazyArea::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((proland::LazyArea*)this);
			return (_obj.callFunction<void>());
		}

		return LazyArea::doRelease();
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((proland::LazyArea*)this);
			return (_obj.callFunction<const char*>());
		}

		return LazyArea::toString();
	};

	// proland::AreaId proland::Area::getParentId() const
	proland::AreaId getParentId() const {
		if(_obj.pushFunction("getParentId")) {
			_obj.pushArg((proland::LazyArea*)this);
			return *(_obj.callFunction<proland::AreaId*>());
		}

		return LazyArea::getParentId();
	};

	// void proland::Area::setParent(proland::AreaPtr a)
	void setParent(proland::AreaPtr a) {
		if(_obj.pushFunction("setParent")) {
			_obj.pushArg((proland::LazyArea*)this);
			_obj.pushArg(&a);
			return (_obj.callFunction<void>());
		}

		return LazyArea::setParent(a);
	};

	// void proland::Area::setSubgraph(proland::Graph * g)
	void setSubgraph(proland::Graph * g) {
		if(_obj.pushFunction("setSubgraph")) {
			_obj.pushArg((proland::LazyArea*)this);
			_obj.pushArg(g);
			return (_obj.callFunction<void>());
		}

		return LazyArea::setSubgraph(g);
	};

	// proland::AreaId proland::LazyArea::getId() const
	proland::AreaId getId() const {
		if(_obj.pushFunction("getId")) {
			_obj.pushArg((proland::LazyArea*)this);
			return *(_obj.callFunction<proland::AreaId*>());
		}

		return LazyArea::getId();
	};

	// proland::AreaPtr proland::LazyArea::getParent() const
	proland::AreaPtr getParent() const {
		if(_obj.pushFunction("getParent")) {
			_obj.pushArg((proland::LazyArea*)this);
			return *(_obj.callFunction<proland::AreaPtr*>());
		}

		return LazyArea::getParent();
	};

	// proland::CurvePtr proland::LazyArea::getCurve(int i) const
	proland::CurvePtr getCurve(int i) const {
		if(_obj.pushFunction("getCurve")) {
			_obj.pushArg((proland::LazyArea*)this);
			_obj.pushArg(i);
			return *(_obj.callFunction<proland::CurvePtr*>());
		}

		return LazyArea::getCurve(i);
	};

	// proland::CurvePtr proland::LazyArea::getCurve(int i, int & orientation) const
	proland::CurvePtr getCurve(int i, int & orientation) const {
		if(_obj.pushFunction("getCurve")) {
			_obj.pushArg((proland::LazyArea*)this);
			_obj.pushArg(i);
			_obj.pushArg(orientation);
			return *(_obj.callFunction<proland::CurvePtr*>());
		}

		return LazyArea::getCurve(i, orientation);
	};

	// int proland::LazyArea::getCurveCount() const
	int getCurveCount() const {
		if(_obj.pushFunction("getCurveCount")) {
			_obj.pushArg((proland::LazyArea*)this);
			return (_obj.callFunction<int>());
		}

		return LazyArea::getCurveCount();
	};

	// void proland::LazyArea::setOrientation(int i, int orientation)
	void setOrientation(int i, int orientation) {
		if(_obj.pushFunction("setOrientation")) {
			_obj.pushArg((proland::LazyArea*)this);
			_obj.pushArg(i);
			_obj.pushArg(orientation);
			return (_obj.callFunction<void>());
		}

		return LazyArea::setOrientation(i, orientation);
	};

	// void proland::LazyArea::invertCurve(proland::CurveId cid)
	void invertCurve(proland::CurveId cid) {
		if(_obj.pushFunction("invertCurve")) {
			_obj.pushArg((proland::LazyArea*)this);
			_obj.pushArg(&cid);
			return (_obj.callFunction<void>());
		}

		return LazyArea::invertCurve(cid);
	};

	// void proland::LazyArea::addCurve(proland::CurveId id, int orientation)
	void addCurve(proland::CurveId id, int orientation) {
		if(_obj.pushFunction("addCurve")) {
			_obj.pushArg((proland::LazyArea*)this);
			_obj.pushArg(&id);
			_obj.pushArg(orientation);
			return (_obj.callFunction<void>());
		}

		return LazyArea::addCurve(id, orientation);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

