#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_OperationThread.h>

class luna_wrapper_osg_OperationThread {
public:
	typedef Luna< osg::OperationThread > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<osg::Referenced,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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

		osg::OperationThread* self= (osg::OperationThread*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::OperationThread >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		//osg::OperationThread* ptr= dynamic_cast< osg::OperationThread* >(Luna< osg::Referenced >::check(L,1));
		osg::OperationThread* ptr= luna_caster< osg::Referenced, osg::OperationThread >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::OperationThread >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_Thread(lua_State *L) {
		// all checked are already performed before reaching this point.
		//osg::OperationThread* ptr= dynamic_cast< osg::OperationThread* >(Luna< OpenThreads::Thread >::check(L,1));
		osg::OperationThread* ptr= luna_caster< OpenThreads::Thread, osg::OperationThread >::cast(Luna< OpenThreads::Thread >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::OperationThread >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setParent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getParent_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getParent_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setOperationQueue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getOperationQueue_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOperationQueue_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_add(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_remove_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Operation >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_remove_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeAllOperations(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCurrentOperation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_run(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDone(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDone(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_cancel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_cancelCleanup(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_run(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_cancel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::OperationThread::OperationThread()
	static osg::OperationThread* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::OperationThread::OperationThread() function, expected prototype:\nosg::OperationThread::OperationThread()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::OperationThread();
	}

	// osg::OperationThread::OperationThread(lua_Table * data)
	static osg::OperationThread* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::OperationThread::OperationThread(lua_Table * data) function, expected prototype:\nosg::OperationThread::OperationThread(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_OperationThread(L,NULL);
	}

	// Overload binder for osg::OperationThread::OperationThread
	static osg::OperationThread* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function OperationThread, cannot match any of the overloads for function OperationThread:\n  OperationThread()\n  OperationThread(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void osg::OperationThread::setParent(osg::Object * parent)
	static int _bind_setParent(lua_State *L) {
		if (!_lg_typecheck_setParent(L)) {
			luaL_error(L, "luna typecheck failed in void osg::OperationThread::setParent(osg::Object * parent) function, expected prototype:\nvoid osg::OperationThread::setParent(osg::Object * parent)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Object* parent=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::OperationThread* self=Luna< osg::Referenced >::checkSubType< osg::OperationThread >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::OperationThread::setParent(osg::Object *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setParent(parent);

		return 0;
	}

	// osg::Object * osg::OperationThread::getParent()
	static int _bind_getParent_overload_1(lua_State *L) {
		if (!_lg_typecheck_getParent_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::OperationThread::getParent() function, expected prototype:\nosg::Object * osg::OperationThread::getParent()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::OperationThread* self=Luna< osg::Referenced >::checkSubType< osg::OperationThread >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::OperationThread::getParent(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->getParent();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// const osg::Object * osg::OperationThread::getParent() const
	static int _bind_getParent_overload_2(lua_State *L) {
		if (!_lg_typecheck_getParent_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Object * osg::OperationThread::getParent() const function, expected prototype:\nconst osg::Object * osg::OperationThread::getParent() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::OperationThread* self=Luna< osg::Referenced >::checkSubType< osg::OperationThread >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Object * osg::OperationThread::getParent() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Object * lret = self->getParent();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::OperationThread::getParent
	static int _bind_getParent(lua_State *L) {
		if (_lg_typecheck_getParent_overload_1(L)) return _bind_getParent_overload_1(L);
		if (_lg_typecheck_getParent_overload_2(L)) return _bind_getParent_overload_2(L);

		luaL_error(L, "error in function getParent, cannot match any of the overloads for function getParent:\n  getParent()\n  getParent()\n");
		return 0;
	}

	// void osg::OperationThread::setOperationQueue(osg::OperationQueue * opq)
	static int _bind_setOperationQueue(lua_State *L) {
		if (!_lg_typecheck_setOperationQueue(L)) {
			luaL_error(L, "luna typecheck failed in void osg::OperationThread::setOperationQueue(osg::OperationQueue * opq) function, expected prototype:\nvoid osg::OperationThread::setOperationQueue(osg::OperationQueue * opq)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::OperationQueue* opq=(Luna< osg::Referenced >::checkSubType< osg::OperationQueue >(L,2));

		osg::OperationThread* self=Luna< osg::Referenced >::checkSubType< osg::OperationThread >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::OperationThread::setOperationQueue(osg::OperationQueue *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setOperationQueue(opq);

		return 0;
	}

	// osg::OperationQueue * osg::OperationThread::getOperationQueue()
	static int _bind_getOperationQueue_overload_1(lua_State *L) {
		if (!_lg_typecheck_getOperationQueue_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::OperationQueue * osg::OperationThread::getOperationQueue() function, expected prototype:\nosg::OperationQueue * osg::OperationThread::getOperationQueue()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::OperationThread* self=Luna< osg::Referenced >::checkSubType< osg::OperationThread >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::OperationQueue * osg::OperationThread::getOperationQueue(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::OperationQueue * lret = self->getOperationQueue();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::OperationQueue >::push(L,lret,false);

		return 1;
	}

	// const osg::OperationQueue * osg::OperationThread::getOperationQueue() const
	static int _bind_getOperationQueue_overload_2(lua_State *L) {
		if (!_lg_typecheck_getOperationQueue_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::OperationQueue * osg::OperationThread::getOperationQueue() const function, expected prototype:\nconst osg::OperationQueue * osg::OperationThread::getOperationQueue() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::OperationThread* self=Luna< osg::Referenced >::checkSubType< osg::OperationThread >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::OperationQueue * osg::OperationThread::getOperationQueue() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::OperationQueue * lret = self->getOperationQueue();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::OperationQueue >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::OperationThread::getOperationQueue
	static int _bind_getOperationQueue(lua_State *L) {
		if (_lg_typecheck_getOperationQueue_overload_1(L)) return _bind_getOperationQueue_overload_1(L);
		if (_lg_typecheck_getOperationQueue_overload_2(L)) return _bind_getOperationQueue_overload_2(L);

		luaL_error(L, "error in function getOperationQueue, cannot match any of the overloads for function getOperationQueue:\n  getOperationQueue()\n  getOperationQueue()\n");
		return 0;
	}

	// void osg::OperationThread::add(osg::Operation * operation)
	static int _bind_add(lua_State *L) {
		if (!_lg_typecheck_add(L)) {
			luaL_error(L, "luna typecheck failed in void osg::OperationThread::add(osg::Operation * operation) function, expected prototype:\nvoid osg::OperationThread::add(osg::Operation * operation)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Operation* operation=(Luna< osg::Referenced >::checkSubType< osg::Operation >(L,2));

		osg::OperationThread* self=Luna< osg::Referenced >::checkSubType< osg::OperationThread >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::OperationThread::add(osg::Operation *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->add(operation);

		return 0;
	}

	// void osg::OperationThread::remove(osg::Operation * operation)
	static int _bind_remove_overload_1(lua_State *L) {
		if (!_lg_typecheck_remove_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::OperationThread::remove(osg::Operation * operation) function, expected prototype:\nvoid osg::OperationThread::remove(osg::Operation * operation)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Operation* operation=(Luna< osg::Referenced >::checkSubType< osg::Operation >(L,2));

		osg::OperationThread* self=Luna< osg::Referenced >::checkSubType< osg::OperationThread >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::OperationThread::remove(osg::Operation *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->remove(operation);

		return 0;
	}

	// void osg::OperationThread::remove(const std::string & name)
	static int _bind_remove_overload_2(lua_State *L) {
		if (!_lg_typecheck_remove_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::OperationThread::remove(const std::string & name) function, expected prototype:\nvoid osg::OperationThread::remove(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::OperationThread* self=Luna< osg::Referenced >::checkSubType< osg::OperationThread >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::OperationThread::remove(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->remove(name);

		return 0;
	}

	// Overload binder for osg::OperationThread::remove
	static int _bind_remove(lua_State *L) {
		if (_lg_typecheck_remove_overload_1(L)) return _bind_remove_overload_1(L);
		if (_lg_typecheck_remove_overload_2(L)) return _bind_remove_overload_2(L);

		luaL_error(L, "error in function remove, cannot match any of the overloads for function remove:\n  remove(osg::Operation *)\n  remove(const std::string &)\n");
		return 0;
	}

	// void osg::OperationThread::removeAllOperations()
	static int _bind_removeAllOperations(lua_State *L) {
		if (!_lg_typecheck_removeAllOperations(L)) {
			luaL_error(L, "luna typecheck failed in void osg::OperationThread::removeAllOperations() function, expected prototype:\nvoid osg::OperationThread::removeAllOperations()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::OperationThread* self=Luna< osg::Referenced >::checkSubType< osg::OperationThread >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::OperationThread::removeAllOperations(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->removeAllOperations();

		return 0;
	}

	// osg::ref_ptr< osg::Operation > osg::OperationThread::getCurrentOperation()
	static int _bind_getCurrentOperation(lua_State *L) {
		if (!_lg_typecheck_getCurrentOperation(L)) {
			luaL_error(L, "luna typecheck failed in osg::ref_ptr< osg::Operation > osg::OperationThread::getCurrentOperation() function, expected prototype:\nosg::ref_ptr< osg::Operation > osg::OperationThread::getCurrentOperation()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::OperationThread* self=Luna< osg::Referenced >::checkSubType< osg::OperationThread >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::ref_ptr< osg::Operation > osg::OperationThread::getCurrentOperation(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::ref_ptr< osg::Operation > lret = self->getCurrentOperation();
		Luna< osg::Operation >::push(L,lret.get(),false);

		return 1;
	}

	// void osg::OperationThread::run()
	static int _bind_run(lua_State *L) {
		if (!_lg_typecheck_run(L)) {
			luaL_error(L, "luna typecheck failed in void osg::OperationThread::run() function, expected prototype:\nvoid osg::OperationThread::run()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::OperationThread* self=Luna< osg::Referenced >::checkSubType< osg::OperationThread >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::OperationThread::run(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->run();

		return 0;
	}

	// void osg::OperationThread::setDone(bool done)
	static int _bind_setDone(lua_State *L) {
		if (!_lg_typecheck_setDone(L)) {
			luaL_error(L, "luna typecheck failed in void osg::OperationThread::setDone(bool done) function, expected prototype:\nvoid osg::OperationThread::setDone(bool done)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool done=(bool)(lua_toboolean(L,2)==1);

		osg::OperationThread* self=Luna< osg::Referenced >::checkSubType< osg::OperationThread >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::OperationThread::setDone(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDone(done);

		return 0;
	}

	// bool osg::OperationThread::getDone() const
	static int _bind_getDone(lua_State *L) {
		if (!_lg_typecheck_getDone(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::OperationThread::getDone() const function, expected prototype:\nbool osg::OperationThread::getDone() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::OperationThread* self=Luna< osg::Referenced >::checkSubType< osg::OperationThread >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::OperationThread::getDone() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getDone();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int osg::OperationThread::cancel()
	static int _bind_cancel(lua_State *L) {
		if (!_lg_typecheck_cancel(L)) {
			luaL_error(L, "luna typecheck failed in int osg::OperationThread::cancel() function, expected prototype:\nint osg::OperationThread::cancel()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::OperationThread* self=Luna< osg::Referenced >::checkSubType< osg::OperationThread >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::OperationThread::cancel(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->cancel();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::OperationThread::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::OperationThread::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::OperationThread::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::OperationThread* self=Luna< osg::Referenced >::checkSubType< osg::OperationThread >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::OperationThread::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OperationThread::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::OperationThread::base_cancelCleanup()
	static int _bind_base_cancelCleanup(lua_State *L) {
		if (!_lg_typecheck_base_cancelCleanup(L)) {
			luaL_error(L, "luna typecheck failed in void osg::OperationThread::base_cancelCleanup() function, expected prototype:\nvoid osg::OperationThread::base_cancelCleanup()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::OperationThread* self=Luna< osg::Referenced >::checkSubType< osg::OperationThread >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::OperationThread::base_cancelCleanup(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OperationThread::cancelCleanup();

		return 0;
	}

	// void osg::OperationThread::base_run()
	static int _bind_base_run(lua_State *L) {
		if (!_lg_typecheck_base_run(L)) {
			luaL_error(L, "luna typecheck failed in void osg::OperationThread::base_run() function, expected prototype:\nvoid osg::OperationThread::base_run()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::OperationThread* self=Luna< osg::Referenced >::checkSubType< osg::OperationThread >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::OperationThread::base_run(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OperationThread::run();

		return 0;
	}

	// int osg::OperationThread::base_cancel()
	static int _bind_base_cancel(lua_State *L) {
		if (!_lg_typecheck_base_cancel(L)) {
			luaL_error(L, "luna typecheck failed in int osg::OperationThread::base_cancel() function, expected prototype:\nint osg::OperationThread::base_cancel()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::OperationThread* self=Luna< osg::Referenced >::checkSubType< osg::OperationThread >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::OperationThread::base_cancel(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->OperationThread::cancel();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

	inline static bool _lg_typecheck_baseCast_OpenThreads_Thread(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	static int _bind_baseCast_OpenThreads_Thread(lua_State *L) {
		if (!_lg_typecheck_baseCast_OpenThreads_Thread(L)) {
			luaL_error(L, "luna typecheck failed in baseCast_OpenThreads_Thread function, expected prototype:\nbaseCast(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call baseCast(...)");
		}
		
		OpenThreads::Thread* res = luna_caster<osg::Referenced,OpenThreads::Thread>::cast(self); // dynamic_cast<OpenThreads::Thread*>(self);
		if(!res)
			return 0;
			
		Luna< OpenThreads::Thread >::push(L,res,false);
		return 1;

	}

};

osg::OperationThread* LunaTraits< osg::OperationThread >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_OperationThread::_bind_ctor(L);
}

void LunaTraits< osg::OperationThread >::_bind_dtor(osg::OperationThread* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::OperationThread >::className[] = "OperationThread";
const char LunaTraits< osg::OperationThread >::fullName[] = "osg::OperationThread";
const char LunaTraits< osg::OperationThread >::moduleName[] = "osg";
const char* LunaTraits< osg::OperationThread >::parents[] = {"osg.Referenced", "OpenThreads.Thread", 0};
const int LunaTraits< osg::OperationThread >::hash = 36998034;
const int LunaTraits< osg::OperationThread >::uniqueIDs[] = {50169651, 86558172,0};

luna_RegType LunaTraits< osg::OperationThread >::methods[] = {
	{"setParent", &luna_wrapper_osg_OperationThread::_bind_setParent},
	{"getParent", &luna_wrapper_osg_OperationThread::_bind_getParent},
	{"setOperationQueue", &luna_wrapper_osg_OperationThread::_bind_setOperationQueue},
	{"getOperationQueue", &luna_wrapper_osg_OperationThread::_bind_getOperationQueue},
	{"add", &luna_wrapper_osg_OperationThread::_bind_add},
	{"remove", &luna_wrapper_osg_OperationThread::_bind_remove},
	{"removeAllOperations", &luna_wrapper_osg_OperationThread::_bind_removeAllOperations},
	{"getCurrentOperation", &luna_wrapper_osg_OperationThread::_bind_getCurrentOperation},
	{"run", &luna_wrapper_osg_OperationThread::_bind_run},
	{"setDone", &luna_wrapper_osg_OperationThread::_bind_setDone},
	{"getDone", &luna_wrapper_osg_OperationThread::_bind_getDone},
	{"cancel", &luna_wrapper_osg_OperationThread::_bind_cancel},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_OperationThread::_bind_base_setThreadSafeRefUnref},
	{"base_cancelCleanup", &luna_wrapper_osg_OperationThread::_bind_base_cancelCleanup},
	{"base_run", &luna_wrapper_osg_OperationThread::_bind_base_run},
	{"base_cancel", &luna_wrapper_osg_OperationThread::_bind_base_cancel},
	{"fromVoid", &luna_wrapper_osg_OperationThread::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_OperationThread::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_OperationThread::_bind_getTable},
	{"asThread", &luna_wrapper_osg_OperationThread::_bind_baseCast_OpenThreads_Thread},
	{0,0}
};

luna_ConverterType LunaTraits< osg::OperationThread >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_OperationThread::_cast_from_Referenced},
	{"OpenThreads::Thread", &luna_wrapper_osg_OperationThread::_cast_from_Thread},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::OperationThread >::enumValues[] = {
	{0,0}
};


