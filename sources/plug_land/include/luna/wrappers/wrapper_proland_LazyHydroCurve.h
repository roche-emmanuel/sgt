#ifndef _WRAPPERS_WRAPPER_PROLAND_LAZYHYDROCURVE_H_
#define _WRAPPERS_WRAPPER_PROLAND_LAZYHYDROCURVE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <W:/Cloud/Projects/sgt/sources/proland/sources/river/proland/rivers/graph/LazyHydroCurve.h>

class wrapper_proland_LazyHydroCurve : public proland::LazyHydroCurve, public luna_wrapper_base {

public:
		

	~wrapper_proland_LazyHydroCurve() {
		logDEBUG3("Calling delete function for wrapper proland_LazyHydroCurve");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::LazyHydroCurve*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_LazyHydroCurve(lua_State* L, lua_Table* dum, proland::Graph * owner, proland::CurveId id) 
		: proland::LazyHydroCurve(owner, id), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::LazyHydroCurve*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_proland_LazyHydroCurve(lua_State* L, lua_Table* dum, proland::Graph * owner, proland::CurveId id, proland::NodeId s, proland::NodeId e) 
		: proland::LazyHydroCurve(owner, id, s, e), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::LazyHydroCurve*)this);
			_obj.callFunction<void>();
		}
	};

private:
	// Private virtual methods:
	// void proland::LazyHydroCurve::removeArea(proland::AreaId a)
	void removeArea(proland::AreaId a) {
		THROW_IF(!_obj.pushFunction("removeArea"),"No implementation for abstract function proland::LazyHydroCurve::removeArea");
		_obj.pushArg((proland::LazyHydroCurve*)this);
		_obj.pushArg(&a);
		return (_obj.callFunction<void>());
	};

	// void proland::LazyHydroCurve::setParentId(proland::CurveId id)
	void setParentId(proland::CurveId id) {
		THROW_IF(!_obj.pushFunction("setParentId"),"No implementation for abstract function proland::LazyHydroCurve::setParentId");
		_obj.pushArg((proland::LazyHydroCurve*)this);
		_obj.pushArg(&id);
		return (_obj.callFunction<void>());
	};

protected:
	// Protected virtual methods:
	// void proland::LazyHydroCurve::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((proland::LazyHydroCurve*)this);
			return (_obj.callFunction<void>());
		}

		return LazyHydroCurve::doRelease();
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((proland::LazyHydroCurve*)this);
			return (_obj.callFunction<const char*>());
		}

		return LazyHydroCurve::toString();
	};

	// proland::CurveId proland::Curve::getParentId() const
	proland::CurveId getParentId() const {
		if(_obj.pushFunction("getParentId")) {
			_obj.pushArg((proland::LazyHydroCurve*)this);
			return *(_obj.callFunction<proland::CurveId*>());
		}

		return LazyHydroCurve::getParentId();
	};

	// proland::CurveId proland::Curve::getAncestorId() const
	proland::CurveId getAncestorId() const {
		if(_obj.pushFunction("getAncestorId")) {
			_obj.pushArg((proland::LazyHydroCurve*)this);
			return *(_obj.callFunction<proland::CurveId*>());
		}

		return LazyHydroCurve::getAncestorId();
	};

	// void proland::Curve::flatten(float squareFlatness)
	void flatten(float squareFlatness) {
		if(_obj.pushFunction("flatten")) {
			_obj.pushArg((proland::LazyHydroCurve*)this);
			_obj.pushArg(squareFlatness);
			return (_obj.callFunction<void>());
		}

		return LazyHydroCurve::flatten(squareFlatness);
	};

	// void proland::HydroCurve::print() const
	void print() const {
		if(_obj.pushFunction("print")) {
			_obj.pushArg((proland::LazyHydroCurve*)this);
			return (_obj.callFunction<void>());
		}

		return LazyHydroCurve::print();
	};

	// proland::CurveId proland::LazyHydroCurve::getId() const
	proland::CurveId getId() const {
		if(_obj.pushFunction("getId")) {
			_obj.pushArg((proland::LazyHydroCurve*)this);
			return *(_obj.callFunction<proland::CurveId*>());
		}

		return LazyHydroCurve::getId();
	};

	// proland::CurvePtr proland::LazyHydroCurve::getParent() const
	proland::CurvePtr getParent() const {
		if(_obj.pushFunction("getParent")) {
			_obj.pushArg((proland::LazyHydroCurve*)this);
			return *(_obj.callFunction<proland::CurvePtr*>());
		}

		return LazyHydroCurve::getParent();
	};

	// proland::NodePtr proland::LazyHydroCurve::getStart() const
	proland::NodePtr getStart() const {
		if(_obj.pushFunction("getStart")) {
			_obj.pushArg((proland::LazyHydroCurve*)this);
			return *(_obj.callFunction<proland::NodePtr*>());
		}

		return LazyHydroCurve::getStart();
	};

	// proland::NodePtr proland::LazyHydroCurve::getEnd() const
	proland::NodePtr getEnd() const {
		if(_obj.pushFunction("getEnd")) {
			_obj.pushArg((proland::LazyHydroCurve*)this);
			return *(_obj.callFunction<proland::NodePtr*>());
		}

		return LazyHydroCurve::getEnd();
	};

	// void proland::LazyHydroCurve::addVertex(proland::NodeId id, bool isEnd = 1)
	void addVertex(proland::NodeId id, bool isEnd = 1) {
		if(_obj.pushFunction("addVertex")) {
			_obj.pushArg((proland::LazyHydroCurve*)this);
			_obj.pushArg(&id);
			_obj.pushArg(isEnd);
			return (_obj.callFunction<void>());
		}

		return LazyHydroCurve::addVertex(id, isEnd);
	};

	// void proland::LazyHydroCurve::loadVertex(proland::NodeId id, bool isEnd = 1)
	void loadVertex(proland::NodeId id, bool isEnd = 1) {
		if(_obj.pushFunction("loadVertex")) {
			_obj.pushArg((proland::LazyHydroCurve*)this);
			_obj.pushArg(&id);
			_obj.pushArg(isEnd);
			return (_obj.callFunction<void>());
		}

		return LazyHydroCurve::loadVertex(id, isEnd);
	};

	// void proland::LazyHydroCurve::addVertex(float x, float y, float s, bool isControl)
	void addVertex(float x, float y, float s, bool isControl) {
		if(_obj.pushFunction("addVertex")) {
			_obj.pushArg((proland::LazyHydroCurve*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			_obj.pushArg(s);
			_obj.pushArg(isControl);
			return (_obj.callFunction<void>());
		}

		return LazyHydroCurve::addVertex(x, y, s, isControl);
	};

	// void proland::LazyHydroCurve::addVertex(ork::vec2d pt, int rank, bool isControl)
	void addVertex(ork::vec2d pt, int rank, bool isControl) {
		if(_obj.pushFunction("addVertex")) {
			_obj.pushArg((proland::LazyHydroCurve*)this);
			_obj.pushArg(&pt);
			_obj.pushArg(rank);
			_obj.pushArg(isControl);
			return (_obj.callFunction<void>());
		}

		return LazyHydroCurve::addVertex(pt, rank, isControl);
	};

	// void proland::LazyHydroCurve::addVertex(const ork::vec2d & p, float s, float l, bool isControl)
	void addVertex(const ork::vec2d & p, float s, float l, bool isControl) {
		if(_obj.pushFunction("addVertex")) {
			_obj.pushArg((proland::LazyHydroCurve*)this);
			_obj.pushArg(&p);
			_obj.pushArg(s);
			_obj.pushArg(l);
			_obj.pushArg(isControl);
			return (_obj.callFunction<void>());
		}

		return LazyHydroCurve::addVertex(p, s, l, isControl);
	};

	// void proland::LazyHydroCurve::addVertex(const proland::Vertex & pt)
	void addVertex(const proland::Vertex & pt) {
		if(_obj.pushFunction("addVertex")) {
			_obj.pushArg((proland::LazyHydroCurve*)this);
			_obj.pushArg(&pt);
			return (_obj.callFunction<void>());
		}

		return LazyHydroCurve::addVertex(pt);
	};

	// void proland::LazyHydroCurve::addVertices(const vector< ork::vec2d > & v)
	void addVertices(const vector< ork::vec2d > & v) {
		if(_obj.pushFunction("addVertices")) {
			_obj.pushArg((proland::LazyHydroCurve*)this);
			_obj.pushArg(&v);
			return (_obj.callFunction<void>());
		}

		return LazyHydroCurve::addVertices(v);
	};

	// void proland::LazyHydroCurve::removeVertex(int i)
	void removeVertex(int i) {
		if(_obj.pushFunction("removeVertex")) {
			_obj.pushArg((proland::LazyHydroCurve*)this);
			_obj.pushArg(i);
			return (_obj.callFunction<void>());
		}

		return LazyHydroCurve::removeVertex(i);
	};

	// void proland::LazyHydroCurve::setIsControl(int i, bool c)
	void setIsControl(int i, bool c) {
		if(_obj.pushFunction("setIsControl")) {
			_obj.pushArg((proland::LazyHydroCurve*)this);
			_obj.pushArg(i);
			_obj.pushArg(c);
			return (_obj.callFunction<void>());
		}

		return LazyHydroCurve::setIsControl(i, c);
	};

	// void proland::LazyHydroCurve::setS(int i, float s)
	void setS(int i, float s) {
		if(_obj.pushFunction("setS")) {
			_obj.pushArg((proland::LazyHydroCurve*)this);
			_obj.pushArg(i);
			_obj.pushArg(s);
			return (_obj.callFunction<void>());
		}

		return LazyHydroCurve::setS(i, s);
	};

	// void proland::LazyHydroCurve::setXY(int i, const ork::vec2d & p)
	void setXY(int i, const ork::vec2d & p) {
		if(_obj.pushFunction("setXY")) {
			_obj.pushArg((proland::LazyHydroCurve*)this);
			_obj.pushArg(i);
			_obj.pushArg(&p);
			return (_obj.callFunction<void>());
		}

		return LazyHydroCurve::setXY(i, p);
	};

	// void proland::LazyHydroCurve::setWidth(float width)
	void setWidth(float width) {
		if(_obj.pushFunction("setWidth")) {
			_obj.pushArg((proland::LazyHydroCurve*)this);
			_obj.pushArg(width);
			return (_obj.callFunction<void>());
		}

		return LazyHydroCurve::setWidth(width);
	};

	// void proland::LazyHydroCurve::setType(int type)
	void setType(int type) {
		if(_obj.pushFunction("setType")) {
			_obj.pushArg((proland::LazyHydroCurve*)this);
			_obj.pushArg(type);
			return (_obj.callFunction<void>());
		}

		return LazyHydroCurve::setType(type);
	};

	// void proland::LazyHydroCurve::clear()
	void clear() {
		if(_obj.pushFunction("clear")) {
			_obj.pushArg((proland::LazyHydroCurve*)this);
			return (_obj.callFunction<void>());
		}

		return LazyHydroCurve::clear();
	};

	// void proland::LazyHydroCurve::invert()
	void invert() {
		if(_obj.pushFunction("invert")) {
			_obj.pushArg((proland::LazyHydroCurve*)this);
			return (_obj.callFunction<void>());
		}

		return LazyHydroCurve::invert();
	};

	// void proland::LazyHydroCurve::addArea(proland::AreaId a)
	void addArea(proland::AreaId a) {
		if(_obj.pushFunction("addArea")) {
			_obj.pushArg((proland::LazyHydroCurve*)this);
			_obj.pushArg(&a);
			return (_obj.callFunction<void>());
		}

		return LazyHydroCurve::addArea(a);
	};


	// Protected non-virtual methods:
	// void proland::Curve::setParentId(proland::CurveId id)
	void public_setParentId(proland::CurveId id) {
		return proland::Curve::setParentId(id);
	};

	// void proland::Curve::resetBounds() const
	void public_resetBounds() const {
		return proland::Curve::resetBounds();
	};

	// void proland::Curve::removeArea(proland::AreaId a)
	void public_removeArea(proland::AreaId a) {
		return proland::Curve::removeArea(a);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_setParentId(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,58015782) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_resetBounds(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_removeArea(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2724636) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void proland::Curve::public_setParentId(proland::CurveId id)
	static int _bind_public_setParentId(lua_State *L) {
		if (!_lg_typecheck_public_setParentId(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Curve::public_setParentId(proland::CurveId id) function, expected prototype:\nvoid proland::Curve::public_setParentId(proland::CurveId id)\nClass arguments details:\narg 1 ID = 58015782\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurveId* id_ptr=(Luna< proland::CurveId >::check(L,2));
		if( !id_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg id in proland::Curve::public_setParentId function");
		}
		proland::CurveId id=*id_ptr;

		wrapper_proland_LazyHydroCurve* self=Luna< ork::Object >::checkSubType< wrapper_proland_LazyHydroCurve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Curve::public_setParentId(proland::CurveId). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_setParentId(id);

		return 0;
	}

	// void proland::Curve::public_resetBounds() const
	static int _bind_public_resetBounds(lua_State *L) {
		if (!_lg_typecheck_public_resetBounds(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Curve::public_resetBounds() const function, expected prototype:\nvoid proland::Curve::public_resetBounds() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_proland_LazyHydroCurve* self=Luna< ork::Object >::checkSubType< wrapper_proland_LazyHydroCurve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Curve::public_resetBounds() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_resetBounds();

		return 0;
	}

	// void proland::Curve::public_removeArea(proland::AreaId a)
	static int _bind_public_removeArea(lua_State *L) {
		if (!_lg_typecheck_public_removeArea(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Curve::public_removeArea(proland::AreaId a) function, expected prototype:\nvoid proland::Curve::public_removeArea(proland::AreaId a)\nClass arguments details:\narg 1 ID = 2724636\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::AreaId* a_ptr=(Luna< proland::AreaId >::check(L,2));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in proland::Curve::public_removeArea function");
		}
		proland::AreaId a=*a_ptr;

		wrapper_proland_LazyHydroCurve* self=Luna< ork::Object >::checkSubType< wrapper_proland_LazyHydroCurve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Curve::public_removeArea(proland::AreaId). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_removeArea(a);

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"setParentId",_bind_public_setParentId},
		{"resetBounds",_bind_public_resetBounds},
		{"removeArea",_bind_public_removeArea},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

