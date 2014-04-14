#include <plug_common.h>

#include <luna/wrappers/wrapper_ork_Task.h>

class luna_wrapper_ork_Task {
public:
	typedef Luna< ork::Task > luna_t;

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

		ork::Task* self= (ork::Task*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::Task >::push(L,self,false);
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
		//ork::Task* ptr= dynamic_cast< ork::Task* >(Luna< ork::Object >::check(L,1));
		ork::Task* ptr= luna_caster< ork::Object, ork::Task >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< ork::Task >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( lua_isboolean(L,2)==0 ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getContext(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isGpuTask(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDeadline(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDeadline(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getComplexity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_init(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,86321452) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_begin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_run(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_end(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isDone(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setIsDone(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCompletionDate(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPredecessorsCompletionDate(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPredecessorsCompletionDate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getExpectedDuration(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setActualDuration(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addListener(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,59816505)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeListener(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,59816505)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_logStatistics(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

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

	inline static bool _lg_typecheck_base_init(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,86321452) ) return false;
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

	inline static bool _lg_typecheck_base_setIsDone(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setPredecessorsCompletionDate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// ork::Task::Task(const char * type, bool gpuTask, unsigned int deadline)
	static ork::Task* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::Task::Task(const char * type, bool gpuTask, unsigned int deadline) function, expected prototype:\nork::Task::Task(const char * type, bool gpuTask, unsigned int deadline)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * type=(const char *)lua_tostring(L,1);
		bool gpuTask=(bool)(lua_toboolean(L,2)==1);
		unsigned int deadline=(unsigned int)lua_tointeger(L,3);

		return new ork::Task(type, gpuTask, deadline);
	}

	// ork::Task::Task(lua_Table * data, const char * type, bool gpuTask, unsigned int deadline)
	static ork::Task* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::Task::Task(lua_Table * data, const char * type, bool gpuTask, unsigned int deadline) function, expected prototype:\nork::Task::Task(lua_Table * data, const char * type, bool gpuTask, unsigned int deadline)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * type=(const char *)lua_tostring(L,2);
		bool gpuTask=(bool)(lua_toboolean(L,3)==1);
		unsigned int deadline=(unsigned int)lua_tointeger(L,4);

		return new wrapper_ork_Task(L,NULL, type, gpuTask, deadline);
	}

	// Overload binder for ork::Task::Task
	static ork::Task* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Task, cannot match any of the overloads for function Task:\n  Task(const char *, bool, unsigned int)\n  Task(lua_Table *, const char *, bool, unsigned int)\n");
		return NULL;
	}


	// Function binds:
	// void * ork::Task::getContext() const
	static int _bind_getContext(lua_State *L) {
		if (!_lg_typecheck_getContext(L)) {
			luaL_error(L, "luna typecheck failed in void * ork::Task::getContext() const function, expected prototype:\nvoid * ork::Task::getContext() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Task* self=Luna< ork::Object >::checkSubType< ork::Task >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void * ork::Task::getContext() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		void * lret = self->getContext();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// bool ork::Task::isGpuTask() const
	static int _bind_isGpuTask(lua_State *L) {
		if (!_lg_typecheck_isGpuTask(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::Task::isGpuTask() const function, expected prototype:\nbool ork::Task::isGpuTask() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Task* self=Luna< ork::Object >::checkSubType< ork::Task >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::Task::isGpuTask() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isGpuTask();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int ork::Task::getDeadline() const
	static int _bind_getDeadline(lua_State *L) {
		if (!_lg_typecheck_getDeadline(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int ork::Task::getDeadline() const function, expected prototype:\nunsigned int ork::Task::getDeadline() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Task* self=Luna< ork::Object >::checkSubType< ork::Task >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int ork::Task::getDeadline() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getDeadline();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void ork::Task::setDeadline(unsigned int deadline)
	static int _bind_setDeadline(lua_State *L) {
		if (!_lg_typecheck_setDeadline(L)) {
			luaL_error(L, "luna typecheck failed in void ork::Task::setDeadline(unsigned int deadline) function, expected prototype:\nvoid ork::Task::setDeadline(unsigned int deadline)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int deadline=(unsigned int)lua_tointeger(L,2);

		ork::Task* self=Luna< ork::Object >::checkSubType< ork::Task >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::Task::setDeadline(unsigned int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDeadline(deadline);

		return 0;
	}

	// int ork::Task::getComplexity() const
	static int _bind_getComplexity(lua_State *L) {
		if (!_lg_typecheck_getComplexity(L)) {
			luaL_error(L, "luna typecheck failed in int ork::Task::getComplexity() const function, expected prototype:\nint ork::Task::getComplexity() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Task* self=Luna< ork::Object >::checkSubType< ork::Task >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int ork::Task::getComplexity() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getComplexity();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void ork::Task::init(std::set< ork::Task * > & initialized)
	static int _bind_init(lua_State *L) {
		if (!_lg_typecheck_init(L)) {
			luaL_error(L, "luna typecheck failed in void ork::Task::init(std::set< ork::Task * > & initialized) function, expected prototype:\nvoid ork::Task::init(std::set< ork::Task * > & initialized)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		std::set< ork::Task * >* initialized_ptr=(Luna< std::set< ork::Task * > >::check(L,2));
		if( !initialized_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg initialized in ork::Task::init function");
		}
		std::set< ork::Task * > & initialized=*initialized_ptr;

		ork::Task* self=Luna< ork::Object >::checkSubType< ork::Task >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::Task::init(std::set< ork::Task * > &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->init(initialized);

		return 0;
	}

	// void ork::Task::begin()
	static int _bind_begin(lua_State *L) {
		if (!_lg_typecheck_begin(L)) {
			luaL_error(L, "luna typecheck failed in void ork::Task::begin() function, expected prototype:\nvoid ork::Task::begin()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Task* self=Luna< ork::Object >::checkSubType< ork::Task >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::Task::begin(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->begin();

		return 0;
	}

	// bool ork::Task::run()
	static int _bind_run(lua_State *L) {
		if (!_lg_typecheck_run(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::Task::run() function, expected prototype:\nbool ork::Task::run()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Task* self=Luna< ork::Object >::checkSubType< ork::Task >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::Task::run(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->run();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void ork::Task::end()
	static int _bind_end(lua_State *L) {
		if (!_lg_typecheck_end(L)) {
			luaL_error(L, "luna typecheck failed in void ork::Task::end() function, expected prototype:\nvoid ork::Task::end()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Task* self=Luna< ork::Object >::checkSubType< ork::Task >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::Task::end(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->end();

		return 0;
	}

	// bool ork::Task::isDone()
	static int _bind_isDone(lua_State *L) {
		if (!_lg_typecheck_isDone(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::Task::isDone() function, expected prototype:\nbool ork::Task::isDone()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Task* self=Luna< ork::Object >::checkSubType< ork::Task >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::Task::isDone(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isDone();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void ork::Task::setIsDone(bool done, unsigned int t, ork::Task::reason r = ork::Task::DATA_NEEDED)
	static int _bind_setIsDone(lua_State *L) {
		if (!_lg_typecheck_setIsDone(L)) {
			luaL_error(L, "luna typecheck failed in void ork::Task::setIsDone(bool done, unsigned int t, ork::Task::reason r = ork::Task::DATA_NEEDED) function, expected prototype:\nvoid ork::Task::setIsDone(bool done, unsigned int t, ork::Task::reason r = ork::Task::DATA_NEEDED)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool done=(bool)(lua_toboolean(L,2)==1);
		unsigned int t=(unsigned int)lua_tointeger(L,3);
		ork::Task::reason r=luatop>3 ? (ork::Task::reason)lua_tointeger(L,4) : (ork::Task::reason)ork::Task::DATA_NEEDED;

		ork::Task* self=Luna< ork::Object >::checkSubType< ork::Task >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::Task::setIsDone(bool, unsigned int, ork::Task::reason). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setIsDone(done, t, r);

		return 0;
	}

	// unsigned int ork::Task::getCompletionDate()
	static int _bind_getCompletionDate(lua_State *L) {
		if (!_lg_typecheck_getCompletionDate(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int ork::Task::getCompletionDate() function, expected prototype:\nunsigned int ork::Task::getCompletionDate()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Task* self=Luna< ork::Object >::checkSubType< ork::Task >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int ork::Task::getCompletionDate(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getCompletionDate();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int ork::Task::getPredecessorsCompletionDate()
	static int _bind_getPredecessorsCompletionDate(lua_State *L) {
		if (!_lg_typecheck_getPredecessorsCompletionDate(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int ork::Task::getPredecessorsCompletionDate() function, expected prototype:\nunsigned int ork::Task::getPredecessorsCompletionDate()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Task* self=Luna< ork::Object >::checkSubType< ork::Task >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int ork::Task::getPredecessorsCompletionDate(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getPredecessorsCompletionDate();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void ork::Task::setPredecessorsCompletionDate(unsigned int t)
	static int _bind_setPredecessorsCompletionDate(lua_State *L) {
		if (!_lg_typecheck_setPredecessorsCompletionDate(L)) {
			luaL_error(L, "luna typecheck failed in void ork::Task::setPredecessorsCompletionDate(unsigned int t) function, expected prototype:\nvoid ork::Task::setPredecessorsCompletionDate(unsigned int t)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int t=(unsigned int)lua_tointeger(L,2);

		ork::Task* self=Luna< ork::Object >::checkSubType< ork::Task >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::Task::setPredecessorsCompletionDate(unsigned int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setPredecessorsCompletionDate(t);

		return 0;
	}

	// float ork::Task::getExpectedDuration()
	static int _bind_getExpectedDuration(lua_State *L) {
		if (!_lg_typecheck_getExpectedDuration(L)) {
			luaL_error(L, "luna typecheck failed in float ork::Task::getExpectedDuration() function, expected prototype:\nfloat ork::Task::getExpectedDuration()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Task* self=Luna< ork::Object >::checkSubType< ork::Task >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float ork::Task::getExpectedDuration(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getExpectedDuration();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void ork::Task::setActualDuration(float duration)
	static int _bind_setActualDuration(lua_State *L) {
		if (!_lg_typecheck_setActualDuration(L)) {
			luaL_error(L, "luna typecheck failed in void ork::Task::setActualDuration(float duration) function, expected prototype:\nvoid ork::Task::setActualDuration(float duration)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float duration=(float)lua_tonumber(L,2);

		ork::Task* self=Luna< ork::Object >::checkSubType< ork::Task >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::Task::setActualDuration(float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setActualDuration(duration);

		return 0;
	}

	// void ork::Task::addListener(ork::TaskListener * l)
	static int _bind_addListener(lua_State *L) {
		if (!_lg_typecheck_addListener(L)) {
			luaL_error(L, "luna typecheck failed in void ork::Task::addListener(ork::TaskListener * l) function, expected prototype:\nvoid ork::Task::addListener(ork::TaskListener * l)\nClass arguments details:\narg 1 ID = 59816505\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::TaskListener* l=(Luna< ork::TaskListener >::check(L,2));

		ork::Task* self=Luna< ork::Object >::checkSubType< ork::Task >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::Task::addListener(ork::TaskListener *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addListener(l);

		return 0;
	}

	// void ork::Task::removeListener(ork::TaskListener * l)
	static int _bind_removeListener(lua_State *L) {
		if (!_lg_typecheck_removeListener(L)) {
			luaL_error(L, "luna typecheck failed in void ork::Task::removeListener(ork::TaskListener * l) function, expected prototype:\nvoid ork::Task::removeListener(ork::TaskListener * l)\nClass arguments details:\narg 1 ID = 59816505\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::TaskListener* l=(Luna< ork::TaskListener >::check(L,2));

		ork::Task* self=Luna< ork::Object >::checkSubType< ork::Task >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::Task::removeListener(ork::TaskListener *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->removeListener(l);

		return 0;
	}

	// static void ork::Task::logStatistics()
	static int _bind_logStatistics(lua_State *L) {
		if (!_lg_typecheck_logStatistics(L)) {
			luaL_error(L, "luna typecheck failed in static void ork::Task::logStatistics() function, expected prototype:\nstatic void ork::Task::logStatistics()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Task::logStatistics();

		return 0;
	}

	// const char * ork::Task::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * ork::Task::base_toString() function, expected prototype:\nconst char * ork::Task::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Task* self=Luna< ork::Object >::checkSubType< ork::Task >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * ork::Task::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Task::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// void * ork::Task::base_getContext() const
	static int _bind_base_getContext(lua_State *L) {
		if (!_lg_typecheck_base_getContext(L)) {
			luaL_error(L, "luna typecheck failed in void * ork::Task::base_getContext() const function, expected prototype:\nvoid * ork::Task::base_getContext() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Task* self=Luna< ork::Object >::checkSubType< ork::Task >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void * ork::Task::base_getContext() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		void * lret = self->Task::getContext();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// int ork::Task::base_getComplexity() const
	static int _bind_base_getComplexity(lua_State *L) {
		if (!_lg_typecheck_base_getComplexity(L)) {
			luaL_error(L, "luna typecheck failed in int ork::Task::base_getComplexity() const function, expected prototype:\nint ork::Task::base_getComplexity() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Task* self=Luna< ork::Object >::checkSubType< ork::Task >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int ork::Task::base_getComplexity() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->Task::getComplexity();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void ork::Task::base_init(std::set< ork::Task * > & initialized)
	static int _bind_base_init(lua_State *L) {
		if (!_lg_typecheck_base_init(L)) {
			luaL_error(L, "luna typecheck failed in void ork::Task::base_init(std::set< ork::Task * > & initialized) function, expected prototype:\nvoid ork::Task::base_init(std::set< ork::Task * > & initialized)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		std::set< ork::Task * >* initialized_ptr=(Luna< std::set< ork::Task * > >::check(L,2));
		if( !initialized_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg initialized in ork::Task::base_init function");
		}
		std::set< ork::Task * > & initialized=*initialized_ptr;

		ork::Task* self=Luna< ork::Object >::checkSubType< ork::Task >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::Task::base_init(std::set< ork::Task * > &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Task::init(initialized);

		return 0;
	}

	// void ork::Task::base_begin()
	static int _bind_base_begin(lua_State *L) {
		if (!_lg_typecheck_base_begin(L)) {
			luaL_error(L, "luna typecheck failed in void ork::Task::base_begin() function, expected prototype:\nvoid ork::Task::base_begin()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Task* self=Luna< ork::Object >::checkSubType< ork::Task >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::Task::base_begin(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Task::begin();

		return 0;
	}

	// bool ork::Task::base_run()
	static int _bind_base_run(lua_State *L) {
		if (!_lg_typecheck_base_run(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::Task::base_run() function, expected prototype:\nbool ork::Task::base_run()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Task* self=Luna< ork::Object >::checkSubType< ork::Task >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::Task::base_run(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Task::run();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void ork::Task::base_end()
	static int _bind_base_end(lua_State *L) {
		if (!_lg_typecheck_base_end(L)) {
			luaL_error(L, "luna typecheck failed in void ork::Task::base_end() function, expected prototype:\nvoid ork::Task::base_end()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Task* self=Luna< ork::Object >::checkSubType< ork::Task >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::Task::base_end(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Task::end();

		return 0;
	}

	// bool ork::Task::base_isDone()
	static int _bind_base_isDone(lua_State *L) {
		if (!_lg_typecheck_base_isDone(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::Task::base_isDone() function, expected prototype:\nbool ork::Task::base_isDone()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Task* self=Luna< ork::Object >::checkSubType< ork::Task >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::Task::base_isDone(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Task::isDone();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void ork::Task::base_setIsDone(bool done, unsigned int t, ork::Task::reason r = ork::Task::DATA_NEEDED)
	static int _bind_base_setIsDone(lua_State *L) {
		if (!_lg_typecheck_base_setIsDone(L)) {
			luaL_error(L, "luna typecheck failed in void ork::Task::base_setIsDone(bool done, unsigned int t, ork::Task::reason r = ork::Task::DATA_NEEDED) function, expected prototype:\nvoid ork::Task::base_setIsDone(bool done, unsigned int t, ork::Task::reason r = ork::Task::DATA_NEEDED)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool done=(bool)(lua_toboolean(L,2)==1);
		unsigned int t=(unsigned int)lua_tointeger(L,3);
		ork::Task::reason r=luatop>3 ? (ork::Task::reason)lua_tointeger(L,4) : (ork::Task::reason)ork::Task::DATA_NEEDED;

		ork::Task* self=Luna< ork::Object >::checkSubType< ork::Task >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::Task::base_setIsDone(bool, unsigned int, ork::Task::reason). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Task::setIsDone(done, t, r);

		return 0;
	}

	// void ork::Task::base_setPredecessorsCompletionDate(unsigned int t)
	static int _bind_base_setPredecessorsCompletionDate(lua_State *L) {
		if (!_lg_typecheck_base_setPredecessorsCompletionDate(L)) {
			luaL_error(L, "luna typecheck failed in void ork::Task::base_setPredecessorsCompletionDate(unsigned int t) function, expected prototype:\nvoid ork::Task::base_setPredecessorsCompletionDate(unsigned int t)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int t=(unsigned int)lua_tointeger(L,2);

		ork::Task* self=Luna< ork::Object >::checkSubType< ork::Task >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::Task::base_setPredecessorsCompletionDate(unsigned int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Task::setPredecessorsCompletionDate(t);

		return 0;
	}


	// Operator binds:

};

ork::Task* LunaTraits< ork::Task >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ork_Task::_bind_ctor(L);
}

void LunaTraits< ork::Task >::_bind_dtor(ork::Task* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< ork::Task >::className[] = "Task";
const char LunaTraits< ork::Task >::fullName[] = "ork::Task";
const char LunaTraits< ork::Task >::moduleName[] = "ork";
const char* LunaTraits< ork::Task >::parents[] = {"ork.Object", 0};
const int LunaTraits< ork::Task >::hash = 17735563;
const int LunaTraits< ork::Task >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< ork::Task >::methods[] = {
	{"getContext", &luna_wrapper_ork_Task::_bind_getContext},
	{"isGpuTask", &luna_wrapper_ork_Task::_bind_isGpuTask},
	{"getDeadline", &luna_wrapper_ork_Task::_bind_getDeadline},
	{"setDeadline", &luna_wrapper_ork_Task::_bind_setDeadline},
	{"getComplexity", &luna_wrapper_ork_Task::_bind_getComplexity},
	{"init", &luna_wrapper_ork_Task::_bind_init},
	{"begin", &luna_wrapper_ork_Task::_bind_begin},
	{"run", &luna_wrapper_ork_Task::_bind_run},
	{"end", &luna_wrapper_ork_Task::_bind_end},
	{"isDone", &luna_wrapper_ork_Task::_bind_isDone},
	{"setIsDone", &luna_wrapper_ork_Task::_bind_setIsDone},
	{"getCompletionDate", &luna_wrapper_ork_Task::_bind_getCompletionDate},
	{"getPredecessorsCompletionDate", &luna_wrapper_ork_Task::_bind_getPredecessorsCompletionDate},
	{"setPredecessorsCompletionDate", &luna_wrapper_ork_Task::_bind_setPredecessorsCompletionDate},
	{"getExpectedDuration", &luna_wrapper_ork_Task::_bind_getExpectedDuration},
	{"setActualDuration", &luna_wrapper_ork_Task::_bind_setActualDuration},
	{"addListener", &luna_wrapper_ork_Task::_bind_addListener},
	{"removeListener", &luna_wrapper_ork_Task::_bind_removeListener},
	{"logStatistics", &luna_wrapper_ork_Task::_bind_logStatistics},
	{"base_toString", &luna_wrapper_ork_Task::_bind_base_toString},
	{"base_getContext", &luna_wrapper_ork_Task::_bind_base_getContext},
	{"base_getComplexity", &luna_wrapper_ork_Task::_bind_base_getComplexity},
	{"base_init", &luna_wrapper_ork_Task::_bind_base_init},
	{"base_begin", &luna_wrapper_ork_Task::_bind_base_begin},
	{"base_run", &luna_wrapper_ork_Task::_bind_base_run},
	{"base_end", &luna_wrapper_ork_Task::_bind_base_end},
	{"base_isDone", &luna_wrapper_ork_Task::_bind_base_isDone},
	{"base_setIsDone", &luna_wrapper_ork_Task::_bind_base_setIsDone},
	{"base_setPredecessorsCompletionDate", &luna_wrapper_ork_Task::_bind_base_setPredecessorsCompletionDate},
	{"fromVoid", &luna_wrapper_ork_Task::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_Task::_bind_asVoid},
	{"getTable", &luna_wrapper_ork_Task::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< ork::Task >::converters[] = {
	{"ork::Object", &luna_wrapper_ork_Task::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< ork::Task >::enumValues[] = {
	{"DEPENDENCY_CHANGED", ork::Task::DEPENDENCY_CHANGED},
	{"DATA_CHANGED", ork::Task::DATA_CHANGED},
	{"DATA_NEEDED", ork::Task::DATA_NEEDED},
	{0,0}
};


