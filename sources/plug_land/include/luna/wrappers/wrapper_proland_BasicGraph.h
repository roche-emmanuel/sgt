#ifndef _WRAPPERS_WRAPPER_PROLAND_BASICGRAPH_H_
#define _WRAPPERS_WRAPPER_PROLAND_BASICGRAPH_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <W:/Cloud/Projects/sgt/sources/proland/sources/graph/proland/graph/BasicGraph.h>

class wrapper_proland_BasicGraph : public proland::BasicGraph, public luna_wrapper_base {

public:
		

	~wrapper_proland_BasicGraph() {
		logDEBUG3("Calling delete function for wrapper proland_BasicGraph");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::BasicGraph*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_BasicGraph(lua_State* L, lua_Table* dum) 
		: proland::BasicGraph(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::BasicGraph*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((proland::BasicGraph*)this);
			return (_obj.callFunction<void>());
		}

		return BasicGraph::doRelease();
	};

	// void proland::BasicGraph::removeNode(proland::NodeId id)
	void removeNode(proland::NodeId id) {
		if(_obj.pushFunction("removeNode")) {
			_obj.pushArg((proland::BasicGraph*)this);
			_obj.pushArg(&id);
			return (_obj.callFunction<void>());
		}

		return BasicGraph::removeNode(id);
	};

	// void proland::BasicGraph::removeCurve(proland::CurveId id)
	void removeCurve(proland::CurveId id) {
		if(_obj.pushFunction("removeCurve")) {
			_obj.pushArg((proland::BasicGraph*)this);
			_obj.pushArg(&id);
			return (_obj.callFunction<void>());
		}

		return BasicGraph::removeCurve(id);
	};

	// void proland::BasicGraph::removeArea(proland::AreaId id)
	void removeArea(proland::AreaId id) {
		if(_obj.pushFunction("removeArea")) {
			_obj.pushArg((proland::BasicGraph*)this);
			_obj.pushArg(&id);
			return (_obj.callFunction<void>());
		}

		return BasicGraph::removeArea(id);
	};

	// void proland::BasicGraph::clean()
	void clean() {
		if(_obj.pushFunction("clean")) {
			_obj.pushArg((proland::BasicGraph*)this);
			return (_obj.callFunction<void>());
		}

		return BasicGraph::clean();
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((proland::BasicGraph*)this);
			return (_obj.callFunction<const char*>());
		}

		return BasicGraph::toString();
	};

	// void proland::Graph::print(bool detailed = true)
	void print(bool detailed = true) {
		if(_obj.pushFunction("print")) {
			_obj.pushArg((proland::BasicGraph*)this);
			_obj.pushArg(detailed);
			return (_obj.callFunction<void>());
		}

		return BasicGraph::print(detailed);
	};

	// void proland::Graph::setParent(proland::Graph * p)
	void setParent(proland::Graph * p) {
		if(_obj.pushFunction("setParent")) {
			_obj.pushArg((proland::BasicGraph*)this);
			_obj.pushArg(p);
			return (_obj.callFunction<void>());
		}

		return BasicGraph::setParent(p);
	};

	// proland::Node * proland::Graph::findNode(ork::vec2d & pos) const
	proland::Node * findNode(ork::vec2d & pos) const {
		if(_obj.pushFunction("findNode")) {
			_obj.pushArg((proland::BasicGraph*)this);
			_obj.pushArg(&pos);
			return (_obj.callFunction<proland::Node*>());
		}

		return BasicGraph::findNode(pos);
	};

	// void proland::Graph::checkParams(int nodes, int curves, int areas, int curveExtremities, int curvePoints, int areaCurves, int subgraphs)
	void checkParams(int nodes, int curves, int areas, int curveExtremities, int curvePoints, int areaCurves, int subgraphs) {
		if(_obj.pushFunction("checkParams")) {
			_obj.pushArg((proland::BasicGraph*)this);
			_obj.pushArg(nodes);
			_obj.pushArg(curves);
			_obj.pushArg(areas);
			_obj.pushArg(curveExtremities);
			_obj.pushArg(curvePoints);
			_obj.pushArg(areaCurves);
			_obj.pushArg(subgraphs);
			return (_obj.callFunction<void>());
		}

		return BasicGraph::checkParams(nodes, curves, areas, curveExtremities, curvePoints, areaCurves, subgraphs);
	};

	// void proland::Graph::checkDefaultParams(int nodes, int curves, int areas, int curveExtremities, int curvePoints, int areaCurves, int subgraphs)
	void checkDefaultParams(int nodes, int curves, int areas, int curveExtremities, int curvePoints, int areaCurves, int subgraphs) {
		if(_obj.pushFunction("checkDefaultParams")) {
			_obj.pushArg((proland::BasicGraph*)this);
			_obj.pushArg(nodes);
			_obj.pushArg(curves);
			_obj.pushArg(areas);
			_obj.pushArg(curveExtremities);
			_obj.pushArg(curvePoints);
			_obj.pushArg(areaCurves);
			_obj.pushArg(subgraphs);
			return (_obj.callFunction<void>());
		}

		return BasicGraph::checkDefaultParams(nodes, curves, areas, curveExtremities, curvePoints, areaCurves, subgraphs);
	};

	// void proland::Graph::save(const string & file, bool saveAreas = true, bool isBinary = true, bool isIndexed = false)
	void save(const string & file, bool saveAreas = true, bool isBinary = true, bool isIndexed = false) {
		if(_obj.pushFunction("save")) {
			_obj.pushArg((proland::BasicGraph*)this);
			_obj.pushArg(file);
			_obj.pushArg(saveAreas);
			_obj.pushArg(isBinary);
			_obj.pushArg(isIndexed);
			return (_obj.callFunction<void>());
		}

		return BasicGraph::save(file, saveAreas, isBinary, isIndexed);
	};

	// void proland::Graph::save(proland::FileWriter * fileWriter, bool saveAreas = true)
	void save(proland::FileWriter * fileWriter, bool saveAreas = true) {
		if(_obj.pushFunction("save")) {
			_obj.pushArg((proland::BasicGraph*)this);
			_obj.pushArg(fileWriter);
			_obj.pushArg(saveAreas);
			return (_obj.callFunction<void>());
		}

		return BasicGraph::save(fileWriter, saveAreas);
	};

	// void proland::Graph::indexedSave(proland::FileWriter * fileWriter, bool saveAreas = true)
	void indexedSave(proland::FileWriter * fileWriter, bool saveAreas = true) {
		if(_obj.pushFunction("indexedSave")) {
			_obj.pushArg((proland::BasicGraph*)this);
			_obj.pushArg(fileWriter);
			_obj.pushArg(saveAreas);
			return (_obj.callFunction<void>());
		}

		return BasicGraph::indexedSave(fileWriter, saveAreas);
	};

	// proland::Graph * proland::Graph::clip(const ork::box2d & clip, proland::Margin * margin)
	proland::Graph * clip(const ork::box2d & clip, proland::Margin * margin) {
		if(_obj.pushFunction("clip")) {
			_obj.pushArg((proland::BasicGraph*)this);
			_obj.pushArg(&clip);
			_obj.pushArg(margin);
			return (_obj.callFunction<proland::Graph*>());
		}

		return BasicGraph::clip(clip, margin);
	};

	// proland::CurvePtr proland::Graph::addCurvePart(proland::CurvePart & cp, set< proland::CurveId > * addedCurves, bool setParent = true)
	proland::CurvePtr addCurvePart(proland::CurvePart & cp, set< proland::CurveId > * addedCurves, bool setParent = true) {
		if(_obj.pushFunction("addCurvePart")) {
			_obj.pushArg((proland::BasicGraph*)this);
			_obj.pushArg(&cp);
			_obj.pushArg(addedCurves);
			_obj.pushArg(setParent);
			return *(_obj.callFunction<proland::CurvePtr*>());
		}

		return BasicGraph::addCurvePart(cp, addedCurves, setParent);
	};

	// void proland::Graph::movePoint(proland::CurvePtr c, int i, const ork::vec2d & p)
	void movePoint(proland::CurvePtr c, int i, const ork::vec2d & p) {
		if(_obj.pushFunction("movePoint")) {
			_obj.pushArg((proland::BasicGraph*)this);
			_obj.pushArg(&c);
			_obj.pushArg(i);
			_obj.pushArg(&p);
			return (_obj.callFunction<void>());
		}

		return BasicGraph::movePoint(c, i, p);
	};

	// void proland::Graph::movePoint(proland::CurvePtr c, int i, const ork::vec2d & p, set< proland::CurveId > & changedCurves)
	void movePoint(proland::CurvePtr c, int i, const ork::vec2d & p, set< proland::CurveId > & changedCurves) {
		if(_obj.pushFunction("movePoint")) {
			_obj.pushArg((proland::BasicGraph*)this);
			_obj.pushArg(&c);
			_obj.pushArg(i);
			_obj.pushArg(&p);
			_obj.pushArg(&changedCurves);
			return (_obj.callFunction<void>());
		}

		return BasicGraph::movePoint(c, i, p, changedCurves);
	};

	// proland::NodePtr proland::Graph::addNode(proland::CurvePtr c, int i, proland::Graph::Changes & changed)
	proland::NodePtr addNode(proland::CurvePtr c, int i, proland::Graph::Changes & changed) {
		if(_obj.pushFunction("addNode")) {
			_obj.pushArg((proland::BasicGraph*)this);
			_obj.pushArg(&c);
			_obj.pushArg(i);
			_obj.pushArg(&changed);
			return *(_obj.callFunction<proland::NodePtr*>());
		}

		return BasicGraph::addNode(c, i, changed);
	};

	// proland::CurvePtr proland::Graph::addCurve(ork::vec2d start, ork::vec2d end, proland::Graph::Changes & changed)
	proland::CurvePtr addCurve(ork::vec2d start, ork::vec2d end, proland::Graph::Changes & changed) {
		if(_obj.pushFunction("addCurve")) {
			_obj.pushArg((proland::BasicGraph*)this);
			_obj.pushArg(&start);
			_obj.pushArg(&end);
			_obj.pushArg(&changed);
			return *(_obj.callFunction<proland::CurvePtr*>());
		}

		return BasicGraph::addCurve(start, end, changed);
	};

	// proland::CurvePtr proland::Graph::addCurve(proland::NodeId start, ork::vec2d end, proland::Graph::Changes & changed)
	proland::CurvePtr addCurve(proland::NodeId start, ork::vec2d end, proland::Graph::Changes & changed) {
		if(_obj.pushFunction("addCurve")) {
			_obj.pushArg((proland::BasicGraph*)this);
			_obj.pushArg(&start);
			_obj.pushArg(&end);
			_obj.pushArg(&changed);
			return *(_obj.callFunction<proland::CurvePtr*>());
		}

		return BasicGraph::addCurve(start, end, changed);
	};

	// proland::CurvePtr proland::Graph::addCurve(proland::NodeId start, proland::NodeId end, proland::Graph::Changes & changed)
	proland::CurvePtr addCurve(proland::NodeId start, proland::NodeId end, proland::Graph::Changes & changed) {
		if(_obj.pushFunction("addCurve")) {
			_obj.pushArg((proland::BasicGraph*)this);
			_obj.pushArg(&start);
			_obj.pushArg(&end);
			_obj.pushArg(&changed);
			return *(_obj.callFunction<proland::CurvePtr*>());
		}

		return BasicGraph::addCurve(start, end, changed);
	};

	// void proland::Graph::removeVertex(proland::CurvePtr & curve, int & selectedSegment, int & selectedPoint, proland::Graph::Changes & changed)
	void removeVertex(proland::CurvePtr & curve, int & selectedSegment, int & selectedPoint, proland::Graph::Changes & changed) {
		if(_obj.pushFunction("removeVertex")) {
			_obj.pushArg((proland::BasicGraph*)this);
			_obj.pushArg(&curve);
			_obj.pushArg(selectedSegment);
			_obj.pushArg(selectedPoint);
			_obj.pushArg(&changed);
			return (_obj.callFunction<void>());
		}

		return BasicGraph::removeVertex(curve, selectedSegment, selectedPoint, changed);
	};

	// proland::CurvePart * proland::Graph::createCurvePart(proland::CurvePtr p, int orientation, int start, int end)
	proland::CurvePart * createCurvePart(proland::CurvePtr p, int orientation, int start, int end) {
		if(_obj.pushFunction("createCurvePart")) {
			_obj.pushArg((proland::BasicGraph*)this);
			_obj.pushArg(&p);
			_obj.pushArg(orientation);
			_obj.pushArg(start);
			_obj.pushArg(end);
			return (_obj.callFunction<proland::CurvePart*>());
		}

		return BasicGraph::createCurvePart(p, orientation, start, end);
	};

	// proland::Graph * proland::Graph::createChild()
	proland::Graph * createChild() {
		if(_obj.pushFunction("createChild")) {
			_obj.pushArg((proland::BasicGraph*)this);
			return (_obj.callFunction<proland::Graph*>());
		}

		return BasicGraph::createChild();
	};

	// void proland::BasicGraph::clear()
	void clear() {
		if(_obj.pushFunction("clear")) {
			_obj.pushArg((proland::BasicGraph*)this);
			return (_obj.callFunction<void>());
		}

		return BasicGraph::clear();
	};

	// int proland::BasicGraph::getNodeCount() const
	int getNodeCount() const {
		if(_obj.pushFunction("getNodeCount")) {
			_obj.pushArg((proland::BasicGraph*)this);
			return (_obj.callFunction<int>());
		}

		return BasicGraph::getNodeCount();
	};

	// int proland::BasicGraph::getCurveCount() const
	int getCurveCount() const {
		if(_obj.pushFunction("getCurveCount")) {
			_obj.pushArg((proland::BasicGraph*)this);
			return (_obj.callFunction<int>());
		}

		return BasicGraph::getCurveCount();
	};

	// int proland::BasicGraph::getAreaCount() const
	int getAreaCount() const {
		if(_obj.pushFunction("getAreaCount")) {
			_obj.pushArg((proland::BasicGraph*)this);
			return (_obj.callFunction<int>());
		}

		return BasicGraph::getAreaCount();
	};

	// proland::NodePtr proland::BasicGraph::getNode(proland::NodeId id)
	proland::NodePtr getNode(proland::NodeId id) {
		if(_obj.pushFunction("getNode")) {
			_obj.pushArg((proland::BasicGraph*)this);
			_obj.pushArg(&id);
			return *(_obj.callFunction<proland::NodePtr*>());
		}

		return BasicGraph::getNode(id);
	};

	// proland::CurvePtr proland::BasicGraph::getCurve(proland::CurveId id)
	proland::CurvePtr getCurve(proland::CurveId id) {
		if(_obj.pushFunction("getCurve")) {
			_obj.pushArg((proland::BasicGraph*)this);
			_obj.pushArg(&id);
			return *(_obj.callFunction<proland::CurvePtr*>());
		}

		return BasicGraph::getCurve(id);
	};

	// proland::AreaPtr proland::BasicGraph::getArea(proland::AreaId id)
	proland::AreaPtr getArea(proland::AreaId id) {
		if(_obj.pushFunction("getArea")) {
			_obj.pushArg((proland::BasicGraph*)this);
			_obj.pushArg(&id);
			return *(_obj.callFunction<proland::AreaPtr*>());
		}

		return BasicGraph::getArea(id);
	};

	// proland::AreaPtr proland::BasicGraph::getChildArea(proland::AreaId parentId)
	proland::AreaPtr getChildArea(proland::AreaId parentId) {
		if(_obj.pushFunction("getChildArea")) {
			_obj.pushArg((proland::BasicGraph*)this);
			_obj.pushArg(&parentId);
			return *(_obj.callFunction<proland::AreaPtr*>());
		}

		return BasicGraph::getChildArea(parentId);
	};

	// void proland::BasicGraph::load(const string & file, bool loadSubgraphs = true)
	void load(const string & file, bool loadSubgraphs = true) {
		if(_obj.pushFunction("load")) {
			_obj.pushArg((proland::BasicGraph*)this);
			_obj.pushArg(file);
			_obj.pushArg(loadSubgraphs);
			return (_obj.callFunction<void>());
		}

		return BasicGraph::load(file, loadSubgraphs);
	};

	// void proland::BasicGraph::load(proland::FileReader * fileReader, bool loadSubgraphs = true)
	void load(proland::FileReader * fileReader, bool loadSubgraphs = true) {
		if(_obj.pushFunction("load")) {
			_obj.pushArg((proland::BasicGraph*)this);
			_obj.pushArg(fileReader);
			_obj.pushArg(loadSubgraphs);
			return (_obj.callFunction<void>());
		}

		return BasicGraph::load(fileReader, loadSubgraphs);
	};

	// void proland::BasicGraph::loadIndexed(proland::FileReader * fileReader, bool loadSubgraphs = true)
	void loadIndexed(proland::FileReader * fileReader, bool loadSubgraphs = true) {
		if(_obj.pushFunction("loadIndexed")) {
			_obj.pushArg((proland::BasicGraph*)this);
			_obj.pushArg(fileReader);
			_obj.pushArg(loadSubgraphs);
			return (_obj.callFunction<void>());
		}

		return BasicGraph::loadIndexed(fileReader, loadSubgraphs);
	};

	// proland::NodePtr proland::BasicGraph::newNode(const ork::vec2d & p)
	proland::NodePtr newNode(const ork::vec2d & p) {
		if(_obj.pushFunction("newNode")) {
			_obj.pushArg((proland::BasicGraph*)this);
			_obj.pushArg(&p);
			return *(_obj.callFunction<proland::NodePtr*>());
		}

		return BasicGraph::newNode(p);
	};

	// proland::CurvePtr proland::BasicGraph::newCurve(proland::CurvePtr parent, bool setParent)
	proland::CurvePtr newCurve(proland::CurvePtr parent, bool setParent) {
		if(_obj.pushFunction("newCurve")) {
			_obj.pushArg((proland::BasicGraph*)this);
			_obj.pushArg(&parent);
			_obj.pushArg(setParent);
			return *(_obj.callFunction<proland::CurvePtr*>());
		}

		return BasicGraph::newCurve(parent, setParent);
	};

	// proland::CurvePtr proland::BasicGraph::newCurve(proland::CurvePtr model, proland::NodePtr start, proland::NodePtr end)
	proland::CurvePtr newCurve(proland::CurvePtr model, proland::NodePtr start, proland::NodePtr end) {
		if(_obj.pushFunction("newCurve")) {
			_obj.pushArg((proland::BasicGraph*)this);
			_obj.pushArg(&model);
			_obj.pushArg(&start);
			_obj.pushArg(&end);
			return *(_obj.callFunction<proland::CurvePtr*>());
		}

		return BasicGraph::newCurve(model, start, end);
	};

	// proland::AreaPtr proland::BasicGraph::newArea(proland::AreaPtr parent, bool setParent)
	proland::AreaPtr newArea(proland::AreaPtr parent, bool setParent) {
		if(_obj.pushFunction("newArea")) {
			_obj.pushArg((proland::BasicGraph*)this);
			_obj.pushArg(&parent);
			_obj.pushArg(setParent);
			return *(_obj.callFunction<proland::AreaPtr*>());
		}

		return BasicGraph::newArea(parent, setParent);
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

		wrapper_proland_BasicGraph* self=Luna< ork::Object >::checkSubType< wrapper_proland_BasicGraph >(L,1);
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


};




#endif

