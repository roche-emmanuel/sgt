#include <plug_common.h>

#include <luna/wrappers/wrapper_ork_TaskGraph.h>

class luna_wrapper_ork_TaskGraph {
public:
	typedef Luna< ork::TaskGraph > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::Object* self=(Luna< ork::Object >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<ork::Object,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::TaskGraph* self= (ork::TaskGraph*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::TaskGraph >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1381405) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< ork::Object >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_Object(lua_State *L) {
		// all checked are already performed before reaching this point.
		//ork::TaskGraph* ptr= dynamic_cast< ork::TaskGraph* >(Luna< ork::Object >::check(L,1));
		ork::TaskGraph* ptr= luna_caster< ork::Object, ork::TaskGraph >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< ork::TaskGraph >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_TaskListener(lua_State *L) {
		// all checked are already performed before reaching this point.
		//ork::TaskGraph* ptr= dynamic_cast< ork::TaskGraph* >(Luna< ork::TaskListener >::check(L,1));
		ork::TaskGraph* ptr= luna_caster< ork::TaskListener, ork::TaskGraph >::cast(Luna< ork::TaskListener >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< ork::TaskGraph >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Task >(L,1) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Task >(L,2) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_init(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,86321452) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setIsDone(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPredecessorsCompletionDate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isEmpty(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAllTasks(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFirstTasks(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLastTasks(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDependencies(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Task >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getInverseDependencies(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Task >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addTask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Task >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeTask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Task >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addDependency(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Task >(L,2) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Task >(L,3) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeDependency(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Task >(L,2) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Task >(L,3) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeAndGetDependencies(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Task >(L,2) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,71786532) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_clearDependencies(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_taskStateChanged(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Task >(L,2) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_completionDateChanged(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Task >(L,2) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_toString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getContext(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getComplexity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_begin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_run(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_end(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_isDone(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_init(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,86321452) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setIsDone(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setPredecessorsCompletionDate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_taskStateChanged(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Task >(L,2) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_completionDateChanged(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Task >(L,2) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// ork::TaskGraph::TaskGraph()
	static ork::TaskGraph* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::TaskGraph::TaskGraph() function, expected prototype:\nork::TaskGraph::TaskGraph()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new ork::TaskGraph();
	}

	// ork::TaskGraph::TaskGraph(ork::ptr< ork::Task > arg1)
	static ork::TaskGraph* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::TaskGraph::TaskGraph(ork::ptr< ork::Task > arg1) function, expected prototype:\nork::TaskGraph::TaskGraph(ork::ptr< ork::Task > arg1)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Task > _arg1 = Luna< ork::Object >::checkSubType< ork::Task >(L,1);

		return new ork::TaskGraph(_arg1);
	}

	// ork::TaskGraph::TaskGraph(lua_Table * data)
	static ork::TaskGraph* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in ork::TaskGraph::TaskGraph(lua_Table * data) function, expected prototype:\nork::TaskGraph::TaskGraph(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_ork_TaskGraph(L,NULL);
	}

	// ork::TaskGraph::TaskGraph(lua_Table * data, ork::ptr< ork::Task > arg2)
	static ork::TaskGraph* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in ork::TaskGraph::TaskGraph(lua_Table * data, ork::ptr< ork::Task > arg2) function, expected prototype:\nork::TaskGraph::TaskGraph(lua_Table * data, ork::ptr< ork::Task > arg2)\nClass arguments details:\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Task > _arg2 = Luna< ork::Object >::checkSubType< ork::Task >(L,2);

		return new wrapper_ork_TaskGraph(L,NULL, _arg2);
	}

	// Overload binder for ork::TaskGraph::TaskGraph
	static ork::TaskGraph* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function TaskGraph, cannot match any of the overloads for function TaskGraph:\n  TaskGraph()\n  TaskGraph(ork::ptr< ork::Task >)\n  TaskGraph(lua_Table *)\n  TaskGraph(lua_Table *, ork::ptr< ork::Task >)\n");
		return NULL;
	}


	// Function binds:
	// void ork::TaskGraph::init(std::set< ork::Task * > & initialized)
	static int _bind_init(lua_State *L) {
		if (!_lg_typecheck_init(L)) {
			luaL_error(L, "luna typecheck failed in void ork::TaskGraph::init(std::set< ork::Task * > & initialized) function, expected prototype:\nvoid ork::TaskGraph::init(std::set< ork::Task * > & initialized)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		std::set< ork::Task * >* initialized_ptr=(Luna< std::set< ork::Task * > >::check(L,2));
		if( !initialized_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg initialized in ork::TaskGraph::init function");
		}
		std::set< ork::Task * > & initialized=*initialized_ptr;

		ork::TaskGraph* self=Luna< ork::Object >::checkSubType< ork::TaskGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::TaskGraph::init(std::set< ork::Task * > &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->init(initialized);

		return 0;
	}

	// void ork::TaskGraph::setIsDone(bool done, unsigned int t, ork::Task::reason r)
	static int _bind_setIsDone(lua_State *L) {
		if (!_lg_typecheck_setIsDone(L)) {
			luaL_error(L, "luna typecheck failed in void ork::TaskGraph::setIsDone(bool done, unsigned int t, ork::Task::reason r) function, expected prototype:\nvoid ork::TaskGraph::setIsDone(bool done, unsigned int t, ork::Task::reason r)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool done=(bool)(lua_toboolean(L,2)==1);
		unsigned int t=(unsigned int)lua_tointeger(L,3);
		ork::Task::reason r=(ork::Task::reason)lua_tointeger(L,4);

		ork::TaskGraph* self=Luna< ork::Object >::checkSubType< ork::TaskGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::TaskGraph::setIsDone(bool, unsigned int, ork::Task::reason). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setIsDone(done, t, r);

		return 0;
	}

	// void ork::TaskGraph::setPredecessorsCompletionDate(unsigned int t)
	static int _bind_setPredecessorsCompletionDate(lua_State *L) {
		if (!_lg_typecheck_setPredecessorsCompletionDate(L)) {
			luaL_error(L, "luna typecheck failed in void ork::TaskGraph::setPredecessorsCompletionDate(unsigned int t) function, expected prototype:\nvoid ork::TaskGraph::setPredecessorsCompletionDate(unsigned int t)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int t=(unsigned int)lua_tointeger(L,2);

		ork::TaskGraph* self=Luna< ork::Object >::checkSubType< ork::TaskGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::TaskGraph::setPredecessorsCompletionDate(unsigned int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setPredecessorsCompletionDate(t);

		return 0;
	}

	// bool ork::TaskGraph::isEmpty()
	static int _bind_isEmpty(lua_State *L) {
		if (!_lg_typecheck_isEmpty(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::TaskGraph::isEmpty() function, expected prototype:\nbool ork::TaskGraph::isEmpty()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::TaskGraph* self=Luna< ork::Object >::checkSubType< ork::TaskGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::TaskGraph::isEmpty(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isEmpty();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// ork::TaskGraph::TaskIterator ork::TaskGraph::getAllTasks()
	static int _bind_getAllTasks(lua_State *L) {
		if (!_lg_typecheck_getAllTasks(L)) {
			luaL_error(L, "luna typecheck failed in ork::TaskGraph::TaskIterator ork::TaskGraph::getAllTasks() function, expected prototype:\nork::TaskGraph::TaskIterator ork::TaskGraph::getAllTasks()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::TaskGraph* self=Luna< ork::Object >::checkSubType< ork::TaskGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::TaskGraph::TaskIterator ork::TaskGraph::getAllTasks(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::TaskGraph::TaskIterator stack_lret = self->getAllTasks();
		ork::TaskGraph::TaskIterator* lret = new ork::TaskGraph::TaskIterator(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::TaskGraph::TaskIterator >::push(L,lret,true);

		return 1;
	}

	// ork::TaskGraph::TaskIterator ork::TaskGraph::getFirstTasks()
	static int _bind_getFirstTasks(lua_State *L) {
		if (!_lg_typecheck_getFirstTasks(L)) {
			luaL_error(L, "luna typecheck failed in ork::TaskGraph::TaskIterator ork::TaskGraph::getFirstTasks() function, expected prototype:\nork::TaskGraph::TaskIterator ork::TaskGraph::getFirstTasks()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::TaskGraph* self=Luna< ork::Object >::checkSubType< ork::TaskGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::TaskGraph::TaskIterator ork::TaskGraph::getFirstTasks(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::TaskGraph::TaskIterator stack_lret = self->getFirstTasks();
		ork::TaskGraph::TaskIterator* lret = new ork::TaskGraph::TaskIterator(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::TaskGraph::TaskIterator >::push(L,lret,true);

		return 1;
	}

	// ork::TaskGraph::TaskIterator ork::TaskGraph::getLastTasks()
	static int _bind_getLastTasks(lua_State *L) {
		if (!_lg_typecheck_getLastTasks(L)) {
			luaL_error(L, "luna typecheck failed in ork::TaskGraph::TaskIterator ork::TaskGraph::getLastTasks() function, expected prototype:\nork::TaskGraph::TaskIterator ork::TaskGraph::getLastTasks()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::TaskGraph* self=Luna< ork::Object >::checkSubType< ork::TaskGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::TaskGraph::TaskIterator ork::TaskGraph::getLastTasks(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::TaskGraph::TaskIterator stack_lret = self->getLastTasks();
		ork::TaskGraph::TaskIterator* lret = new ork::TaskGraph::TaskIterator(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::TaskGraph::TaskIterator >::push(L,lret,true);

		return 1;
	}

	// ork::TaskGraph::TaskIterator ork::TaskGraph::getDependencies(ork::ptr< ork::Task > t)
	static int _bind_getDependencies(lua_State *L) {
		if (!_lg_typecheck_getDependencies(L)) {
			luaL_error(L, "luna typecheck failed in ork::TaskGraph::TaskIterator ork::TaskGraph::getDependencies(ork::ptr< ork::Task > t) function, expected prototype:\nork::TaskGraph::TaskIterator ork::TaskGraph::getDependencies(ork::ptr< ork::Task > t)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Task > t = Luna< ork::Object >::checkSubType< ork::Task >(L,2);

		ork::TaskGraph* self=Luna< ork::Object >::checkSubType< ork::TaskGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::TaskGraph::TaskIterator ork::TaskGraph::getDependencies(ork::ptr< ork::Task >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::TaskGraph::TaskIterator stack_lret = self->getDependencies(t);
		ork::TaskGraph::TaskIterator* lret = new ork::TaskGraph::TaskIterator(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::TaskGraph::TaskIterator >::push(L,lret,true);

		return 1;
	}

	// ork::TaskGraph::TaskIterator ork::TaskGraph::getInverseDependencies(ork::ptr< ork::Task > t)
	static int _bind_getInverseDependencies(lua_State *L) {
		if (!_lg_typecheck_getInverseDependencies(L)) {
			luaL_error(L, "luna typecheck failed in ork::TaskGraph::TaskIterator ork::TaskGraph::getInverseDependencies(ork::ptr< ork::Task > t) function, expected prototype:\nork::TaskGraph::TaskIterator ork::TaskGraph::getInverseDependencies(ork::ptr< ork::Task > t)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Task > t = Luna< ork::Object >::checkSubType< ork::Task >(L,2);

		ork::TaskGraph* self=Luna< ork::Object >::checkSubType< ork::TaskGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::TaskGraph::TaskIterator ork::TaskGraph::getInverseDependencies(ork::ptr< ork::Task >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::TaskGraph::TaskIterator stack_lret = self->getInverseDependencies(t);
		ork::TaskGraph::TaskIterator* lret = new ork::TaskGraph::TaskIterator(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::TaskGraph::TaskIterator >::push(L,lret,true);

		return 1;
	}

	// void ork::TaskGraph::addTask(ork::ptr< ork::Task > t)
	static int _bind_addTask(lua_State *L) {
		if (!_lg_typecheck_addTask(L)) {
			luaL_error(L, "luna typecheck failed in void ork::TaskGraph::addTask(ork::ptr< ork::Task > t) function, expected prototype:\nvoid ork::TaskGraph::addTask(ork::ptr< ork::Task > t)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Task > t = Luna< ork::Object >::checkSubType< ork::Task >(L,2);

		ork::TaskGraph* self=Luna< ork::Object >::checkSubType< ork::TaskGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::TaskGraph::addTask(ork::ptr< ork::Task >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addTask(t);

		return 0;
	}

	// void ork::TaskGraph::removeTask(ork::ptr< ork::Task > t)
	static int _bind_removeTask(lua_State *L) {
		if (!_lg_typecheck_removeTask(L)) {
			luaL_error(L, "luna typecheck failed in void ork::TaskGraph::removeTask(ork::ptr< ork::Task > t) function, expected prototype:\nvoid ork::TaskGraph::removeTask(ork::ptr< ork::Task > t)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Task > t = Luna< ork::Object >::checkSubType< ork::Task >(L,2);

		ork::TaskGraph* self=Luna< ork::Object >::checkSubType< ork::TaskGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::TaskGraph::removeTask(ork::ptr< ork::Task >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->removeTask(t);

		return 0;
	}

	// void ork::TaskGraph::addDependency(ork::ptr< ork::Task > src, ork::ptr< ork::Task > dst)
	static int _bind_addDependency(lua_State *L) {
		if (!_lg_typecheck_addDependency(L)) {
			luaL_error(L, "luna typecheck failed in void ork::TaskGraph::addDependency(ork::ptr< ork::Task > src, ork::ptr< ork::Task > dst) function, expected prototype:\nvoid ork::TaskGraph::addDependency(ork::ptr< ork::Task > src, ork::ptr< ork::Task > dst)\nClass arguments details:\narg 1 ID = [unknown]\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Task > src = Luna< ork::Object >::checkSubType< ork::Task >(L,2);
		ork::ptr< ork::Task > dst = Luna< ork::Object >::checkSubType< ork::Task >(L,3);

		ork::TaskGraph* self=Luna< ork::Object >::checkSubType< ork::TaskGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::TaskGraph::addDependency(ork::ptr< ork::Task >, ork::ptr< ork::Task >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addDependency(src, dst);

		return 0;
	}

	// void ork::TaskGraph::removeDependency(ork::ptr< ork::Task > src, ork::ptr< ork::Task > dst)
	static int _bind_removeDependency(lua_State *L) {
		if (!_lg_typecheck_removeDependency(L)) {
			luaL_error(L, "luna typecheck failed in void ork::TaskGraph::removeDependency(ork::ptr< ork::Task > src, ork::ptr< ork::Task > dst) function, expected prototype:\nvoid ork::TaskGraph::removeDependency(ork::ptr< ork::Task > src, ork::ptr< ork::Task > dst)\nClass arguments details:\narg 1 ID = [unknown]\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Task > src = Luna< ork::Object >::checkSubType< ork::Task >(L,2);
		ork::ptr< ork::Task > dst = Luna< ork::Object >::checkSubType< ork::Task >(L,3);

		ork::TaskGraph* self=Luna< ork::Object >::checkSubType< ork::TaskGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::TaskGraph::removeDependency(ork::ptr< ork::Task >, ork::ptr< ork::Task >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->removeDependency(src, dst);

		return 0;
	}

	// void ork::TaskGraph::removeAndGetDependencies(ork::ptr< ork::Task > src, std::set< ork::ptr< ork::Task > > & deletedDependencies)
	static int _bind_removeAndGetDependencies(lua_State *L) {
		if (!_lg_typecheck_removeAndGetDependencies(L)) {
			luaL_error(L, "luna typecheck failed in void ork::TaskGraph::removeAndGetDependencies(ork::ptr< ork::Task > src, std::set< ork::ptr< ork::Task > > & deletedDependencies) function, expected prototype:\nvoid ork::TaskGraph::removeAndGetDependencies(ork::ptr< ork::Task > src, std::set< ork::ptr< ork::Task > > & deletedDependencies)\nClass arguments details:\narg 1 ID = [unknown]\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Task > src = Luna< ork::Object >::checkSubType< ork::Task >(L,2);
		std::set< ork::ptr< ork::Task > >* deletedDependencies_ptr=(Luna< std::set< ork::ptr< ork::Task > > >::check(L,3));
		if( !deletedDependencies_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg deletedDependencies in ork::TaskGraph::removeAndGetDependencies function");
		}
		std::set< ork::ptr< ork::Task > > & deletedDependencies=*deletedDependencies_ptr;

		ork::TaskGraph* self=Luna< ork::Object >::checkSubType< ork::TaskGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::TaskGraph::removeAndGetDependencies(ork::ptr< ork::Task >, std::set< ork::ptr< ork::Task > > &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->removeAndGetDependencies(src, deletedDependencies);

		return 0;
	}

	// void ork::TaskGraph::clearDependencies()
	static int _bind_clearDependencies(lua_State *L) {
		if (!_lg_typecheck_clearDependencies(L)) {
			luaL_error(L, "luna typecheck failed in void ork::TaskGraph::clearDependencies() function, expected prototype:\nvoid ork::TaskGraph::clearDependencies()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::TaskGraph* self=Luna< ork::Object >::checkSubType< ork::TaskGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::TaskGraph::clearDependencies(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->clearDependencies();

		return 0;
	}

	// void ork::TaskGraph::taskStateChanged(ork::ptr< ork::Task > t, bool done, ork::Task::reason r)
	static int _bind_taskStateChanged(lua_State *L) {
		if (!_lg_typecheck_taskStateChanged(L)) {
			luaL_error(L, "luna typecheck failed in void ork::TaskGraph::taskStateChanged(ork::ptr< ork::Task > t, bool done, ork::Task::reason r) function, expected prototype:\nvoid ork::TaskGraph::taskStateChanged(ork::ptr< ork::Task > t, bool done, ork::Task::reason r)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Task > t = Luna< ork::Object >::checkSubType< ork::Task >(L,2);
		bool done=(bool)(lua_toboolean(L,3)==1);
		ork::Task::reason r=(ork::Task::reason)lua_tointeger(L,4);

		ork::TaskGraph* self=Luna< ork::Object >::checkSubType< ork::TaskGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::TaskGraph::taskStateChanged(ork::ptr< ork::Task >, bool, ork::Task::reason). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->taskStateChanged(t, done, r);

		return 0;
	}

	// void ork::TaskGraph::completionDateChanged(ork::ptr< ork::Task > t, unsigned int date)
	static int _bind_completionDateChanged(lua_State *L) {
		if (!_lg_typecheck_completionDateChanged(L)) {
			luaL_error(L, "luna typecheck failed in void ork::TaskGraph::completionDateChanged(ork::ptr< ork::Task > t, unsigned int date) function, expected prototype:\nvoid ork::TaskGraph::completionDateChanged(ork::ptr< ork::Task > t, unsigned int date)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Task > t = Luna< ork::Object >::checkSubType< ork::Task >(L,2);
		unsigned int date=(unsigned int)lua_tointeger(L,3);

		ork::TaskGraph* self=Luna< ork::Object >::checkSubType< ork::TaskGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::TaskGraph::completionDateChanged(ork::ptr< ork::Task >, unsigned int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->completionDateChanged(t, date);

		return 0;
	}

	// const char * ork::TaskGraph::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * ork::TaskGraph::base_toString() function, expected prototype:\nconst char * ork::TaskGraph::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::TaskGraph* self=Luna< ork::Object >::checkSubType< ork::TaskGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * ork::TaskGraph::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->TaskGraph::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// void * ork::TaskGraph::base_getContext() const
	static int _bind_base_getContext(lua_State *L) {
		if (!_lg_typecheck_base_getContext(L)) {
			luaL_error(L, "luna typecheck failed in void * ork::TaskGraph::base_getContext() const function, expected prototype:\nvoid * ork::TaskGraph::base_getContext() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::TaskGraph* self=Luna< ork::Object >::checkSubType< ork::TaskGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void * ork::TaskGraph::base_getContext() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		void * lret = self->TaskGraph::getContext();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// int ork::TaskGraph::base_getComplexity() const
	static int _bind_base_getComplexity(lua_State *L) {
		if (!_lg_typecheck_base_getComplexity(L)) {
			luaL_error(L, "luna typecheck failed in int ork::TaskGraph::base_getComplexity() const function, expected prototype:\nint ork::TaskGraph::base_getComplexity() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::TaskGraph* self=Luna< ork::Object >::checkSubType< ork::TaskGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int ork::TaskGraph::base_getComplexity() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->TaskGraph::getComplexity();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void ork::TaskGraph::base_begin()
	static int _bind_base_begin(lua_State *L) {
		if (!_lg_typecheck_base_begin(L)) {
			luaL_error(L, "luna typecheck failed in void ork::TaskGraph::base_begin() function, expected prototype:\nvoid ork::TaskGraph::base_begin()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::TaskGraph* self=Luna< ork::Object >::checkSubType< ork::TaskGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::TaskGraph::base_begin(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TaskGraph::begin();

		return 0;
	}

	// bool ork::TaskGraph::base_run()
	static int _bind_base_run(lua_State *L) {
		if (!_lg_typecheck_base_run(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::TaskGraph::base_run() function, expected prototype:\nbool ork::TaskGraph::base_run()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::TaskGraph* self=Luna< ork::Object >::checkSubType< ork::TaskGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::TaskGraph::base_run(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TaskGraph::run();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void ork::TaskGraph::base_end()
	static int _bind_base_end(lua_State *L) {
		if (!_lg_typecheck_base_end(L)) {
			luaL_error(L, "luna typecheck failed in void ork::TaskGraph::base_end() function, expected prototype:\nvoid ork::TaskGraph::base_end()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::TaskGraph* self=Luna< ork::Object >::checkSubType< ork::TaskGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::TaskGraph::base_end(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TaskGraph::end();

		return 0;
	}

	// bool ork::TaskGraph::base_isDone()
	static int _bind_base_isDone(lua_State *L) {
		if (!_lg_typecheck_base_isDone(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::TaskGraph::base_isDone() function, expected prototype:\nbool ork::TaskGraph::base_isDone()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::TaskGraph* self=Luna< ork::Object >::checkSubType< ork::TaskGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::TaskGraph::base_isDone(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TaskGraph::isDone();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void ork::TaskGraph::base_init(std::set< ork::Task * > & initialized)
	static int _bind_base_init(lua_State *L) {
		if (!_lg_typecheck_base_init(L)) {
			luaL_error(L, "luna typecheck failed in void ork::TaskGraph::base_init(std::set< ork::Task * > & initialized) function, expected prototype:\nvoid ork::TaskGraph::base_init(std::set< ork::Task * > & initialized)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		std::set< ork::Task * >* initialized_ptr=(Luna< std::set< ork::Task * > >::check(L,2));
		if( !initialized_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg initialized in ork::TaskGraph::base_init function");
		}
		std::set< ork::Task * > & initialized=*initialized_ptr;

		ork::TaskGraph* self=Luna< ork::Object >::checkSubType< ork::TaskGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::TaskGraph::base_init(std::set< ork::Task * > &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TaskGraph::init(initialized);

		return 0;
	}

	// void ork::TaskGraph::base_setIsDone(bool done, unsigned int t, ork::Task::reason r)
	static int _bind_base_setIsDone(lua_State *L) {
		if (!_lg_typecheck_base_setIsDone(L)) {
			luaL_error(L, "luna typecheck failed in void ork::TaskGraph::base_setIsDone(bool done, unsigned int t, ork::Task::reason r) function, expected prototype:\nvoid ork::TaskGraph::base_setIsDone(bool done, unsigned int t, ork::Task::reason r)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool done=(bool)(lua_toboolean(L,2)==1);
		unsigned int t=(unsigned int)lua_tointeger(L,3);
		ork::Task::reason r=(ork::Task::reason)lua_tointeger(L,4);

		ork::TaskGraph* self=Luna< ork::Object >::checkSubType< ork::TaskGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::TaskGraph::base_setIsDone(bool, unsigned int, ork::Task::reason). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TaskGraph::setIsDone(done, t, r);

		return 0;
	}

	// void ork::TaskGraph::base_setPredecessorsCompletionDate(unsigned int t)
	static int _bind_base_setPredecessorsCompletionDate(lua_State *L) {
		if (!_lg_typecheck_base_setPredecessorsCompletionDate(L)) {
			luaL_error(L, "luna typecheck failed in void ork::TaskGraph::base_setPredecessorsCompletionDate(unsigned int t) function, expected prototype:\nvoid ork::TaskGraph::base_setPredecessorsCompletionDate(unsigned int t)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int t=(unsigned int)lua_tointeger(L,2);

		ork::TaskGraph* self=Luna< ork::Object >::checkSubType< ork::TaskGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::TaskGraph::base_setPredecessorsCompletionDate(unsigned int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TaskGraph::setPredecessorsCompletionDate(t);

		return 0;
	}

	// void ork::TaskGraph::base_taskStateChanged(ork::ptr< ork::Task > t, bool done, ork::Task::reason r)
	static int _bind_base_taskStateChanged(lua_State *L) {
		if (!_lg_typecheck_base_taskStateChanged(L)) {
			luaL_error(L, "luna typecheck failed in void ork::TaskGraph::base_taskStateChanged(ork::ptr< ork::Task > t, bool done, ork::Task::reason r) function, expected prototype:\nvoid ork::TaskGraph::base_taskStateChanged(ork::ptr< ork::Task > t, bool done, ork::Task::reason r)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Task > t = Luna< ork::Object >::checkSubType< ork::Task >(L,2);
		bool done=(bool)(lua_toboolean(L,3)==1);
		ork::Task::reason r=(ork::Task::reason)lua_tointeger(L,4);

		ork::TaskGraph* self=Luna< ork::Object >::checkSubType< ork::TaskGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::TaskGraph::base_taskStateChanged(ork::ptr< ork::Task >, bool, ork::Task::reason). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TaskGraph::taskStateChanged(t, done, r);

		return 0;
	}

	// void ork::TaskGraph::base_completionDateChanged(ork::ptr< ork::Task > t, unsigned int date)
	static int _bind_base_completionDateChanged(lua_State *L) {
		if (!_lg_typecheck_base_completionDateChanged(L)) {
			luaL_error(L, "luna typecheck failed in void ork::TaskGraph::base_completionDateChanged(ork::ptr< ork::Task > t, unsigned int date) function, expected prototype:\nvoid ork::TaskGraph::base_completionDateChanged(ork::ptr< ork::Task > t, unsigned int date)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Task > t = Luna< ork::Object >::checkSubType< ork::Task >(L,2);
		unsigned int date=(unsigned int)lua_tointeger(L,3);

		ork::TaskGraph* self=Luna< ork::Object >::checkSubType< ork::TaskGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::TaskGraph::base_completionDateChanged(ork::ptr< ork::Task >, unsigned int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TaskGraph::completionDateChanged(t, date);

		return 0;
	}


	// Operator binds:

	inline static bool _lg_typecheck_baseCast_ork_TaskListener(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	static int _bind_baseCast_ork_TaskListener(lua_State *L) {
		if (!_lg_typecheck_baseCast_ork_TaskListener(L)) {
			luaL_error(L, "luna typecheck failed in baseCast_ork_TaskListener function, expected prototype:\nbaseCast(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::Object* self=(Luna< ork::Object >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call baseCast(...)");
		}
		
		ork::TaskListener* res = luna_caster<ork::Object,ork::TaskListener>::cast(self); // dynamic_cast<ork::TaskListener*>(self);
		if(!res)
			return 0;
			
		Luna< ork::TaskListener >::push(L,res,false);
		return 1;

	}

};

ork::TaskGraph* LunaTraits< ork::TaskGraph >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ork_TaskGraph::_bind_ctor(L);
}

void LunaTraits< ork::TaskGraph >::_bind_dtor(ork::TaskGraph* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< ork::TaskGraph >::className[] = "TaskGraph";
const char LunaTraits< ork::TaskGraph >::fullName[] = "ork::TaskGraph";
const char LunaTraits< ork::TaskGraph >::moduleName[] = "ork";
const char* LunaTraits< ork::TaskGraph >::parents[] = {"ork.Task", "ork.TaskListener", 0};
const int LunaTraits< ork::TaskGraph >::hash = 29010956;
const int LunaTraits< ork::TaskGraph >::uniqueIDs[] = {1381405, 59816505,0};

luna_RegType LunaTraits< ork::TaskGraph >::methods[] = {
	{"init", &luna_wrapper_ork_TaskGraph::_bind_init},
	{"setIsDone", &luna_wrapper_ork_TaskGraph::_bind_setIsDone},
	{"setPredecessorsCompletionDate", &luna_wrapper_ork_TaskGraph::_bind_setPredecessorsCompletionDate},
	{"isEmpty", &luna_wrapper_ork_TaskGraph::_bind_isEmpty},
	{"getAllTasks", &luna_wrapper_ork_TaskGraph::_bind_getAllTasks},
	{"getFirstTasks", &luna_wrapper_ork_TaskGraph::_bind_getFirstTasks},
	{"getLastTasks", &luna_wrapper_ork_TaskGraph::_bind_getLastTasks},
	{"getDependencies", &luna_wrapper_ork_TaskGraph::_bind_getDependencies},
	{"getInverseDependencies", &luna_wrapper_ork_TaskGraph::_bind_getInverseDependencies},
	{"addTask", &luna_wrapper_ork_TaskGraph::_bind_addTask},
	{"removeTask", &luna_wrapper_ork_TaskGraph::_bind_removeTask},
	{"addDependency", &luna_wrapper_ork_TaskGraph::_bind_addDependency},
	{"removeDependency", &luna_wrapper_ork_TaskGraph::_bind_removeDependency},
	{"removeAndGetDependencies", &luna_wrapper_ork_TaskGraph::_bind_removeAndGetDependencies},
	{"clearDependencies", &luna_wrapper_ork_TaskGraph::_bind_clearDependencies},
	{"taskStateChanged", &luna_wrapper_ork_TaskGraph::_bind_taskStateChanged},
	{"completionDateChanged", &luna_wrapper_ork_TaskGraph::_bind_completionDateChanged},
	{"base_toString", &luna_wrapper_ork_TaskGraph::_bind_base_toString},
	{"base_getContext", &luna_wrapper_ork_TaskGraph::_bind_base_getContext},
	{"base_getComplexity", &luna_wrapper_ork_TaskGraph::_bind_base_getComplexity},
	{"base_begin", &luna_wrapper_ork_TaskGraph::_bind_base_begin},
	{"base_run", &luna_wrapper_ork_TaskGraph::_bind_base_run},
	{"base_end", &luna_wrapper_ork_TaskGraph::_bind_base_end},
	{"base_isDone", &luna_wrapper_ork_TaskGraph::_bind_base_isDone},
	{"base_init", &luna_wrapper_ork_TaskGraph::_bind_base_init},
	{"base_setIsDone", &luna_wrapper_ork_TaskGraph::_bind_base_setIsDone},
	{"base_setPredecessorsCompletionDate", &luna_wrapper_ork_TaskGraph::_bind_base_setPredecessorsCompletionDate},
	{"base_taskStateChanged", &luna_wrapper_ork_TaskGraph::_bind_base_taskStateChanged},
	{"base_completionDateChanged", &luna_wrapper_ork_TaskGraph::_bind_base_completionDateChanged},
	{"fromVoid", &luna_wrapper_ork_TaskGraph::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_TaskGraph::_bind_asVoid},
	{"getTable", &luna_wrapper_ork_TaskGraph::_bind_getTable},
	{"asTaskListener", &luna_wrapper_ork_TaskGraph::_bind_baseCast_ork_TaskListener},
	{0,0}
};

luna_ConverterType LunaTraits< ork::TaskGraph >::converters[] = {
	{"ork::Object", &luna_wrapper_ork_TaskGraph::_cast_from_Object},
	{"ork::TaskListener", &luna_wrapper_ork_TaskGraph::_cast_from_TaskListener},
	{0,0}
};

luna_RegEnumType LunaTraits< ork::TaskGraph >::enumValues[] = {
	{0,0}
};


