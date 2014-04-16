#ifndef _WRAPPERS_WRAPPER_PROLAND_GRAPH_H_
#define _WRAPPERS_WRAPPER_PROLAND_GRAPH_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <W:/Cloud/Projects/sgt/sources/proland/sources/graph/proland/graph/Graph.h>

class wrapper_proland_Graph : public proland::Graph, public luna_wrapper_base {

public:
		

	~wrapper_proland_Graph() {
		logDEBUG3("Calling delete function for wrapper proland_Graph");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::Graph*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_Graph(lua_State* L, lua_Table* dum) 
		: proland::Graph(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::Graph*)this);
			_obj.callFunction<void>();
		}
	};

private:
	// Private virtual methods:
	// void proland::Graph::clean()
	void clean() {
		THROW_IF(!_obj.pushFunction("clean"),"No implementation for abstract function proland::Graph::clean");
		_obj.pushArg((proland::Graph*)this);
		return (_obj.callFunction<void>());
	};

protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((proland::Graph*)this);
			return (_obj.callFunction<void>());
		}

		return Graph::doRelease();
	};

	// void proland::Graph::removeNode(proland::NodeId id)
	void removeNode(proland::NodeId id) {
		THROW_IF(!_obj.pushFunction("removeNode"),"No implementation for abstract function proland::Graph::removeNode");
		_obj.pushArg((proland::Graph*)this);
		_obj.pushArg(&id);
		return (_obj.callFunction<void>());
	};

	// void proland::Graph::removeCurve(proland::CurveId id)
	void removeCurve(proland::CurveId id) {
		THROW_IF(!_obj.pushFunction("removeCurve"),"No implementation for abstract function proland::Graph::removeCurve");
		_obj.pushArg((proland::Graph*)this);
		_obj.pushArg(&id);
		return (_obj.callFunction<void>());
	};

	// void proland::Graph::removeArea(proland::AreaId id)
	void removeArea(proland::AreaId id) {
		THROW_IF(!_obj.pushFunction("removeArea"),"No implementation for abstract function proland::Graph::removeArea");
		_obj.pushArg((proland::Graph*)this);
		_obj.pushArg(&id);
		return (_obj.callFunction<void>());
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((proland::Graph*)this);
			return (_obj.callFunction<const char*>());
		}

		return Graph::toString();
	};

	// void proland::Graph::print(bool detailed = true)
	void print(bool detailed = true) {
		if(_obj.pushFunction("print")) {
			_obj.pushArg((proland::Graph*)this);
			_obj.pushArg(detailed);
			return (_obj.callFunction<void>());
		}

		return Graph::print(detailed);
	};

	// void proland::Graph::clear()
	void clear() {
		THROW_IF(!_obj.pushFunction("clear"),"No implementation for abstract function proland::Graph::clear");
		_obj.pushArg((proland::Graph*)this);
		return (_obj.callFunction<void>());
	};

	// void proland::Graph::setParent(proland::Graph * p)
	void setParent(proland::Graph * p) {
		if(_obj.pushFunction("setParent")) {
			_obj.pushArg((proland::Graph*)this);
			_obj.pushArg(p);
			return (_obj.callFunction<void>());
		}

		return Graph::setParent(p);
	};

	// int proland::Graph::getNodeCount() const
	int getNodeCount() const {
		THROW_IF(!_obj.pushFunction("getNodeCount"),"No implementation for abstract function proland::Graph::getNodeCount");
		_obj.pushArg((proland::Graph*)this);
		return (_obj.callFunction<int>());
	};

	// int proland::Graph::getCurveCount() const
	int getCurveCount() const {
		THROW_IF(!_obj.pushFunction("getCurveCount"),"No implementation for abstract function proland::Graph::getCurveCount");
		_obj.pushArg((proland::Graph*)this);
		return (_obj.callFunction<int>());
	};

	// int proland::Graph::getAreaCount() const
	int getAreaCount() const {
		THROW_IF(!_obj.pushFunction("getAreaCount"),"No implementation for abstract function proland::Graph::getAreaCount");
		_obj.pushArg((proland::Graph*)this);
		return (_obj.callFunction<int>());
	};

	// proland::Node * proland::Graph::findNode(ork::vec2d & pos) const
	proland::Node * findNode(ork::vec2d & pos) const {
		if(_obj.pushFunction("findNode")) {
			_obj.pushArg((proland::Graph*)this);
			_obj.pushArg(&pos);
			return (_obj.callFunction<proland::Node*>());
		}

		return Graph::findNode(pos);
	};

	// proland::NodePtr proland::Graph::getNode(proland::NodeId id)
	proland::NodePtr getNode(proland::NodeId id) {
		THROW_IF(!_obj.pushFunction("getNode"),"No implementation for abstract function proland::Graph::getNode");
		_obj.pushArg((proland::Graph*)this);
		_obj.pushArg(&id);
		return *(_obj.callFunction<proland::NodePtr*>());
	};

	// proland::CurvePtr proland::Graph::getCurve(proland::CurveId id)
	proland::CurvePtr getCurve(proland::CurveId id) {
		THROW_IF(!_obj.pushFunction("getCurve"),"No implementation for abstract function proland::Graph::getCurve");
		_obj.pushArg((proland::Graph*)this);
		_obj.pushArg(&id);
		return *(_obj.callFunction<proland::CurvePtr*>());
	};

	// proland::AreaPtr proland::Graph::getArea(proland::AreaId id)
	proland::AreaPtr getArea(proland::AreaId id) {
		THROW_IF(!_obj.pushFunction("getArea"),"No implementation for abstract function proland::Graph::getArea");
		_obj.pushArg((proland::Graph*)this);
		_obj.pushArg(&id);
		return *(_obj.callFunction<proland::AreaPtr*>());
	};

	// proland::AreaPtr proland::Graph::getChildArea(proland::AreaId parentId)
	proland::AreaPtr getChildArea(proland::AreaId parentId) {
		THROW_IF(!_obj.pushFunction("getChildArea"),"No implementation for abstract function proland::Graph::getChildArea");
		_obj.pushArg((proland::Graph*)this);
		_obj.pushArg(&parentId);
		return *(_obj.callFunction<proland::AreaPtr*>());
	};

	// void proland::Graph::load(const string & file, bool loadSubgraphs = true)
	void load(const string & file, bool loadSubgraphs = true) {
		THROW_IF(!_obj.pushFunction("load"),"No implementation for abstract function proland::Graph::load");
		_obj.pushArg((proland::Graph*)this);
		_obj.pushArg(file);
		_obj.pushArg(loadSubgraphs);
		return (_obj.callFunction<void>());
	};

	// void proland::Graph::load(proland::FileReader * fileReader, bool loadSubgraphs = true)
	void load(proland::FileReader * fileReader, bool loadSubgraphs = true) {
		THROW_IF(!_obj.pushFunction("load"),"No implementation for abstract function proland::Graph::load");
		_obj.pushArg((proland::Graph*)this);
		_obj.pushArg(fileReader);
		_obj.pushArg(loadSubgraphs);
		return (_obj.callFunction<void>());
	};

	// void proland::Graph::checkParams(int nodes, int curves, int areas, int curveExtremities, int curvePoints, int areaCurves, int subgraphs)
	void checkParams(int nodes, int curves, int areas, int curveExtremities, int curvePoints, int areaCurves, int subgraphs) {
		if(_obj.pushFunction("checkParams")) {
			_obj.pushArg((proland::Graph*)this);
			_obj.pushArg(nodes);
			_obj.pushArg(curves);
			_obj.pushArg(areas);
			_obj.pushArg(curveExtremities);
			_obj.pushArg(curvePoints);
			_obj.pushArg(areaCurves);
			_obj.pushArg(subgraphs);
			return (_obj.callFunction<void>());
		}

		return Graph::checkParams(nodes, curves, areas, curveExtremities, curvePoints, areaCurves, subgraphs);
	};

	// void proland::Graph::checkDefaultParams(int nodes, int curves, int areas, int curveExtremities, int curvePoints, int areaCurves, int subgraphs)
	void checkDefaultParams(int nodes, int curves, int areas, int curveExtremities, int curvePoints, int areaCurves, int subgraphs) {
		if(_obj.pushFunction("checkDefaultParams")) {
			_obj.pushArg((proland::Graph*)this);
			_obj.pushArg(nodes);
			_obj.pushArg(curves);
			_obj.pushArg(areas);
			_obj.pushArg(curveExtremities);
			_obj.pushArg(curvePoints);
			_obj.pushArg(areaCurves);
			_obj.pushArg(subgraphs);
			return (_obj.callFunction<void>());
		}

		return Graph::checkDefaultParams(nodes, curves, areas, curveExtremities, curvePoints, areaCurves, subgraphs);
	};

	// void proland::Graph::save(const string & file, bool saveAreas = true, bool isBinary = true, bool isIndexed = false)
	void save(const string & file, bool saveAreas = true, bool isBinary = true, bool isIndexed = false) {
		if(_obj.pushFunction("save")) {
			_obj.pushArg((proland::Graph*)this);
			_obj.pushArg(file);
			_obj.pushArg(saveAreas);
			_obj.pushArg(isBinary);
			_obj.pushArg(isIndexed);
			return (_obj.callFunction<void>());
		}

		return Graph::save(file, saveAreas, isBinary, isIndexed);
	};

	// void proland::Graph::save(proland::FileWriter * fileWriter, bool saveAreas = true)
	void save(proland::FileWriter * fileWriter, bool saveAreas = true) {
		if(_obj.pushFunction("save")) {
			_obj.pushArg((proland::Graph*)this);
			_obj.pushArg(fileWriter);
			_obj.pushArg(saveAreas);
			return (_obj.callFunction<void>());
		}

		return Graph::save(fileWriter, saveAreas);
	};

	// void proland::Graph::indexedSave(proland::FileWriter * fileWriter, bool saveAreas = true)
	void indexedSave(proland::FileWriter * fileWriter, bool saveAreas = true) {
		if(_obj.pushFunction("indexedSave")) {
			_obj.pushArg((proland::Graph*)this);
			_obj.pushArg(fileWriter);
			_obj.pushArg(saveAreas);
			return (_obj.callFunction<void>());
		}

		return Graph::indexedSave(fileWriter, saveAreas);
	};

	// proland::Graph * proland::Graph::clip(const ork::box2d & clip, proland::Margin * margin)
	proland::Graph * clip(const ork::box2d & clip, proland::Margin * margin) {
		if(_obj.pushFunction("clip")) {
			_obj.pushArg((proland::Graph*)this);
			_obj.pushArg(&clip);
			_obj.pushArg(margin);
			return (_obj.callFunction<proland::Graph*>());
		}

		return Graph::clip(clip, margin);
	};

	// proland::CurvePtr proland::Graph::addCurvePart(proland::CurvePart & cp, set< proland::CurveId > * addedCurves, bool setParent = true)
	proland::CurvePtr addCurvePart(proland::CurvePart & cp, set< proland::CurveId > * addedCurves, bool setParent = true) {
		if(_obj.pushFunction("addCurvePart")) {
			_obj.pushArg((proland::Graph*)this);
			_obj.pushArg(&cp);
			_obj.pushArg(addedCurves);
			_obj.pushArg(setParent);
			return *(_obj.callFunction<proland::CurvePtr*>());
		}

		return Graph::addCurvePart(cp, addedCurves, setParent);
	};

	// void proland::Graph::movePoint(proland::CurvePtr c, int i, const ork::vec2d & p)
	void movePoint(proland::CurvePtr c, int i, const ork::vec2d & p) {
		if(_obj.pushFunction("movePoint")) {
			_obj.pushArg((proland::Graph*)this);
			_obj.pushArg(&c);
			_obj.pushArg(i);
			_obj.pushArg(&p);
			return (_obj.callFunction<void>());
		}

		return Graph::movePoint(c, i, p);
	};

	// void proland::Graph::movePoint(proland::CurvePtr c, int i, const ork::vec2d & p, set< proland::CurveId > & changedCurves)
	void movePoint(proland::CurvePtr c, int i, const ork::vec2d & p, set< proland::CurveId > & changedCurves) {
		if(_obj.pushFunction("movePoint")) {
			_obj.pushArg((proland::Graph*)this);
			_obj.pushArg(&c);
			_obj.pushArg(i);
			_obj.pushArg(&p);
			_obj.pushArg(&changedCurves);
			return (_obj.callFunction<void>());
		}

		return Graph::movePoint(c, i, p, changedCurves);
	};

	// proland::NodePtr proland::Graph::addNode(proland::CurvePtr c, int i, proland::Graph::Changes & changed)
	proland::NodePtr addNode(proland::CurvePtr c, int i, proland::Graph::Changes & changed) {
		if(_obj.pushFunction("addNode")) {
			_obj.pushArg((proland::Graph*)this);
			_obj.pushArg(&c);
			_obj.pushArg(i);
			_obj.pushArg(&changed);
			return *(_obj.callFunction<proland::NodePtr*>());
		}

		return Graph::addNode(c, i, changed);
	};

	// proland::CurvePtr proland::Graph::removeNode(proland::CurvePtr first, proland::CurvePtr second, const ork::vec2d & p, proland::Graph::Changes & changed, int & selectedPoint)
	proland::CurvePtr removeNode(proland::CurvePtr first, proland::CurvePtr second, const ork::vec2d & p, proland::Graph::Changes & changed, int & selectedPoint) {
		if(_obj.pushFunction("removeNode")) {
			_obj.pushArg((proland::Graph*)this);
			_obj.pushArg(&first);
			_obj.pushArg(&second);
			_obj.pushArg(&p);
			_obj.pushArg(&changed);
			_obj.pushArg(selectedPoint);
			return *(_obj.callFunction<proland::CurvePtr*>());
		}

		return Graph::removeNode(first, second, p, changed, selectedPoint);
	};

	// proland::CurvePtr proland::Graph::addCurve(ork::vec2d start, ork::vec2d end, proland::Graph::Changes & changed)
	proland::CurvePtr addCurve(ork::vec2d start, ork::vec2d end, proland::Graph::Changes & changed) {
		if(_obj.pushFunction("addCurve")) {
			_obj.pushArg((proland::Graph*)this);
			_obj.pushArg(&start);
			_obj.pushArg(&end);
			_obj.pushArg(&changed);
			return *(_obj.callFunction<proland::CurvePtr*>());
		}

		return Graph::addCurve(start, end, changed);
	};

	// proland::CurvePtr proland::Graph::addCurve(proland::NodeId start, ork::vec2d end, proland::Graph::Changes & changed)
	proland::CurvePtr addCurve(proland::NodeId start, ork::vec2d end, proland::Graph::Changes & changed) {
		if(_obj.pushFunction("addCurve")) {
			_obj.pushArg((proland::Graph*)this);
			_obj.pushArg(&start);
			_obj.pushArg(&end);
			_obj.pushArg(&changed);
			return *(_obj.callFunction<proland::CurvePtr*>());
		}

		return Graph::addCurve(start, end, changed);
	};

	// proland::CurvePtr proland::Graph::addCurve(proland::NodeId start, proland::NodeId end, proland::Graph::Changes & changed)
	proland::CurvePtr addCurve(proland::NodeId start, proland::NodeId end, proland::Graph::Changes & changed) {
		if(_obj.pushFunction("addCurve")) {
			_obj.pushArg((proland::Graph*)this);
			_obj.pushArg(&start);
			_obj.pushArg(&end);
			_obj.pushArg(&changed);
			return *(_obj.callFunction<proland::CurvePtr*>());
		}

		return Graph::addCurve(start, end, changed);
	};

	// void proland::Graph::removeVertex(proland::CurvePtr & curve, int & selectedSegment, int & selectedPoint, proland::Graph::Changes & changed)
	void removeVertex(proland::CurvePtr & curve, int & selectedSegment, int & selectedPoint, proland::Graph::Changes & changed) {
		if(_obj.pushFunction("removeVertex")) {
			_obj.pushArg((proland::Graph*)this);
			_obj.pushArg(&curve);
			_obj.pushArg(selectedSegment);
			_obj.pushArg(selectedPoint);
			_obj.pushArg(&changed);
			return (_obj.callFunction<void>());
		}

		return Graph::removeVertex(curve, selectedSegment, selectedPoint, changed);
	};

	// void proland::Graph::removeCurve(proland::CurveId id, proland::Graph::Changes & changed)
	void removeCurve(proland::CurveId id, proland::Graph::Changes & changed) {
		if(_obj.pushFunction("removeCurve")) {
			_obj.pushArg((proland::Graph*)this);
			_obj.pushArg(&id);
			_obj.pushArg(&changed);
			return (_obj.callFunction<void>());
		}

		return Graph::removeCurve(id, changed);
	};

	// proland::NodePtr proland::Graph::newNode(const ork::vec2d & p)
	proland::NodePtr newNode(const ork::vec2d & p) {
		THROW_IF(!_obj.pushFunction("newNode"),"No implementation for abstract function proland::Graph::newNode");
		_obj.pushArg((proland::Graph*)this);
		_obj.pushArg(&p);
		return *(_obj.callFunction<proland::NodePtr*>());
	};

	// proland::CurvePtr proland::Graph::newCurve(proland::CurvePtr parent, bool setParent)
	proland::CurvePtr newCurve(proland::CurvePtr parent, bool setParent) {
		THROW_IF(!_obj.pushFunction("newCurve"),"No implementation for abstract function proland::Graph::newCurve");
		_obj.pushArg((proland::Graph*)this);
		_obj.pushArg(&parent);
		_obj.pushArg(setParent);
		return *(_obj.callFunction<proland::CurvePtr*>());
	};

	// proland::CurvePtr proland::Graph::newCurve(proland::CurvePtr model, proland::NodePtr start, proland::NodePtr end)
	proland::CurvePtr newCurve(proland::CurvePtr model, proland::NodePtr start, proland::NodePtr end) {
		THROW_IF(!_obj.pushFunction("newCurve"),"No implementation for abstract function proland::Graph::newCurve");
		_obj.pushArg((proland::Graph*)this);
		_obj.pushArg(&model);
		_obj.pushArg(&start);
		_obj.pushArg(&end);
		return *(_obj.callFunction<proland::CurvePtr*>());
	};

	// proland::AreaPtr proland::Graph::newArea(proland::AreaPtr parent, bool setParent)
	proland::AreaPtr newArea(proland::AreaPtr parent, bool setParent) {
		THROW_IF(!_obj.pushFunction("newArea"),"No implementation for abstract function proland::Graph::newArea");
		_obj.pushArg((proland::Graph*)this);
		_obj.pushArg(&parent);
		_obj.pushArg(setParent);
		return *(_obj.callFunction<proland::AreaPtr*>());
	};

	// proland::CurvePart * proland::Graph::createCurvePart(proland::CurvePtr p, int orientation, int start, int end)
	proland::CurvePart * createCurvePart(proland::CurvePtr p, int orientation, int start, int end) {
		if(_obj.pushFunction("createCurvePart")) {
			_obj.pushArg((proland::Graph*)this);
			_obj.pushArg(&p);
			_obj.pushArg(orientation);
			_obj.pushArg(start);
			_obj.pushArg(end);
			return (_obj.callFunction<proland::CurvePart*>());
		}

		return Graph::createCurvePart(p, orientation, start, end);
	};

	// proland::Graph * proland::Graph::createChild()
	proland::Graph * createChild() {
		if(_obj.pushFunction("createChild")) {
			_obj.pushArg((proland::Graph*)this);
			return (_obj.callFunction<proland::Graph*>());
		}

		return Graph::createChild();
	};


	// Protected non-virtual methods:
	// void proland::Graph::mergeNodes(proland::NodeId ida, proland::NodeId idb)
	void public_mergeNodes(proland::NodeId ida, proland::NodeId idb) {
		return proland::Graph::mergeNodes(ida, idb);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_mergeNodes(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,72107044) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,72107044) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void proland::Graph::public_mergeNodes(proland::NodeId ida, proland::NodeId idb)
	static int _bind_public_mergeNodes(lua_State *L) {
		if (!_lg_typecheck_public_mergeNodes(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Graph::public_mergeNodes(proland::NodeId ida, proland::NodeId idb) function, expected prototype:\nvoid proland::Graph::public_mergeNodes(proland::NodeId ida, proland::NodeId idb)\nClass arguments details:\narg 1 ID = 72107044\narg 2 ID = 72107044\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::NodeId* ida_ptr=(Luna< proland::NodeId >::check(L,2));
		if( !ida_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ida in proland::Graph::public_mergeNodes function");
		}
		proland::NodeId ida=*ida_ptr;
		proland::NodeId* idb_ptr=(Luna< proland::NodeId >::check(L,3));
		if( !idb_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg idb in proland::Graph::public_mergeNodes function");
		}
		proland::NodeId idb=*idb_ptr;

		wrapper_proland_Graph* self=Luna< ork::Object >::checkSubType< wrapper_proland_Graph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Graph::public_mergeNodes(proland::NodeId, proland::NodeId). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_mergeNodes(ida, idb);

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"mergeNodes",_bind_public_mergeNodes},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


public:
// ork::ptr< proland::Graph::CurveIterator > proland::Graph::getChildCurves(proland::CurveId parentId)
ork::ptr< proland::Graph::CurveIterator > getChildCurves(proland::CurveId) {
	THROW_IF(true,"The function call ork::ptr< proland::Graph::CurveIterator > proland::Graph::getChildCurves(proland::CurveId) is not implemented in wrapper.");
	return ork::ptr< proland::Graph::CurveIterator >();
};

public:
// ork::ptr< proland::Graph::NodeIterator > proland::Graph::getNodes()
ork::ptr< proland::Graph::NodeIterator > getNodes() {
	THROW_IF(true,"The function call ork::ptr< proland::Graph::NodeIterator > proland::Graph::getNodes() is not implemented in wrapper.");
	return ork::ptr< proland::Graph::NodeIterator >();
};

public:
// ork::ptr< proland::Graph::CurveIterator > proland::Graph::getCurves()
ork::ptr< proland::Graph::CurveIterator > getCurves() {
	THROW_IF(true,"The function call ork::ptr< proland::Graph::CurveIterator > proland::Graph::getCurves() is not implemented in wrapper.");
	return ork::ptr< proland::Graph::CurveIterator >();
};

public:
// ork::ptr< proland::Graph::AreaIterator > proland::Graph::getAreas()
ork::ptr< proland::Graph::AreaIterator > getAreas() {
	THROW_IF(true,"The function call ork::ptr< proland::Graph::AreaIterator > proland::Graph::getAreas() is not implemented in wrapper.");
	return ork::ptr< proland::Graph::AreaIterator >();
};

};




#endif

