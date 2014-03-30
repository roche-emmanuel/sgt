#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_GraphicsThread.h>

class luna_wrapper_osg_GraphicsThread {
public:
	typedef Luna< osg::GraphicsThread > luna_t;

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

		osg::GraphicsThread* self= (osg::GraphicsThread*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::GraphicsThread >::push(L,self,false);
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
		//osg::GraphicsThread* ptr= dynamic_cast< osg::GraphicsThread* >(Luna< osg::Referenced >::check(L,1));
		osg::GraphicsThread* ptr= luna_caster< osg::Referenced, osg::GraphicsThread >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::GraphicsThread >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_Thread(lua_State *L) {
		// all checked are already performed before reaching this point.
		//osg::GraphicsThread* ptr= dynamic_cast< osg::GraphicsThread* >(Luna< OpenThreads::Thread >::check(L,1));
		osg::GraphicsThread* ptr= luna_caster< OpenThreads::Thread, osg::GraphicsThread >::cast(Luna< OpenThreads::Thread >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::GraphicsThread >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_run(lua_State *L) {
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

	inline static bool _lg_typecheck_base_cancel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_run(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::GraphicsThread::GraphicsThread()
	static osg::GraphicsThread* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::GraphicsThread::GraphicsThread() function, expected prototype:\nosg::GraphicsThread::GraphicsThread()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::GraphicsThread();
	}

	// osg::GraphicsThread::GraphicsThread(lua_Table * data)
	static osg::GraphicsThread* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::GraphicsThread::GraphicsThread(lua_Table * data) function, expected prototype:\nosg::GraphicsThread::GraphicsThread(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_GraphicsThread(L,NULL);
	}

	// Overload binder for osg::GraphicsThread::GraphicsThread
	static osg::GraphicsThread* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function GraphicsThread, cannot match any of the overloads for function GraphicsThread:\n  GraphicsThread()\n  GraphicsThread(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void osg::GraphicsThread::run()
	static int _bind_run(lua_State *L) {
		if (!_lg_typecheck_run(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GraphicsThread::run() function, expected prototype:\nvoid osg::GraphicsThread::run()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsThread* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsThread >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GraphicsThread::run(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->run();

		return 0;
	}

	// void osg::GraphicsThread::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GraphicsThread::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::GraphicsThread::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::GraphicsThread* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsThread >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GraphicsThread::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphicsThread::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::GraphicsThread::base_cancelCleanup()
	static int _bind_base_cancelCleanup(lua_State *L) {
		if (!_lg_typecheck_base_cancelCleanup(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GraphicsThread::base_cancelCleanup() function, expected prototype:\nvoid osg::GraphicsThread::base_cancelCleanup()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsThread* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsThread >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GraphicsThread::base_cancelCleanup(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphicsThread::cancelCleanup();

		return 0;
	}

	// int osg::GraphicsThread::base_cancel()
	static int _bind_base_cancel(lua_State *L) {
		if (!_lg_typecheck_base_cancel(L)) {
			luaL_error(L, "luna typecheck failed in int osg::GraphicsThread::base_cancel() function, expected prototype:\nint osg::GraphicsThread::base_cancel()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsThread* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsThread >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::GraphicsThread::base_cancel(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GraphicsThread::cancel();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::GraphicsThread::base_run()
	static int _bind_base_run(lua_State *L) {
		if (!_lg_typecheck_base_run(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GraphicsThread::base_run() function, expected prototype:\nvoid osg::GraphicsThread::base_run()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsThread* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsThread >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GraphicsThread::base_run(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphicsThread::run();

		return 0;
	}


	// Operator binds:

};

osg::GraphicsThread* LunaTraits< osg::GraphicsThread >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_GraphicsThread::_bind_ctor(L);
}

void LunaTraits< osg::GraphicsThread >::_bind_dtor(osg::GraphicsThread* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::GraphicsThread >::className[] = "GraphicsThread";
const char LunaTraits< osg::GraphicsThread >::fullName[] = "osg::GraphicsThread";
const char LunaTraits< osg::GraphicsThread >::moduleName[] = "osg";
const char* LunaTraits< osg::GraphicsThread >::parents[] = {"osg.OperationThread", 0};
const int LunaTraits< osg::GraphicsThread >::hash = 55022762;
const int LunaTraits< osg::GraphicsThread >::uniqueIDs[] = {50169651, 86558172,0};

luna_RegType LunaTraits< osg::GraphicsThread >::methods[] = {
	{"run", &luna_wrapper_osg_GraphicsThread::_bind_run},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_GraphicsThread::_bind_base_setThreadSafeRefUnref},
	{"base_cancelCleanup", &luna_wrapper_osg_GraphicsThread::_bind_base_cancelCleanup},
	{"base_cancel", &luna_wrapper_osg_GraphicsThread::_bind_base_cancel},
	{"base_run", &luna_wrapper_osg_GraphicsThread::_bind_base_run},
	{"fromVoid", &luna_wrapper_osg_GraphicsThread::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_GraphicsThread::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_GraphicsThread::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::GraphicsThread >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_GraphicsThread::_cast_from_Referenced},
	{"OpenThreads::Thread", &luna_wrapper_osg_GraphicsThread::_cast_from_Thread},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::GraphicsThread >::enumValues[] = {
	{0,0}
};


