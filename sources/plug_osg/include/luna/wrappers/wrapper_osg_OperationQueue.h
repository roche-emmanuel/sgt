#ifndef _WRAPPERS_WRAPPER_OSG_OPERATIONQUEUE_H_
#define _WRAPPERS_WRAPPER_OSG_OPERATIONQUEUE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osg/OperationThread>

class wrapper_osg_OperationQueue : public osg::OperationQueue, public luna_wrapper_base {

public:
		

	~wrapper_osg_OperationQueue() {
		logDEBUG3("Calling delete function for wrapper osg_OperationQueue");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osg::OperationQueue*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_OperationQueue(lua_State* L, lua_Table* dum) 
		: osg::OperationQueue(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osg::OperationQueue*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void osg::Referenced::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg((osg::OperationQueue*)this);
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return OperationQueue::setThreadSafeRefUnref(threadSafe);
	};


	// Protected non-virtual methods:
	// void osg::OperationQueue::addOperationThread(osg::OperationThread * thread)
	void public_addOperationThread(osg::OperationThread * thread) {
		return osg::OperationQueue::addOperationThread(thread);
	};

	// void osg::OperationQueue::removeOperationThread(osg::OperationThread * thread)
	void public_removeOperationThread(osg::OperationThread * thread) {
		return osg::OperationQueue::removeOperationThread(thread);
	};

	// void osg::Referenced::signalObserversAndDelete(bool signalDelete, bool doDelete) const
	void public_signalObserversAndDelete(bool signalDelete, bool doDelete) const {
		return osg::Referenced::signalObserversAndDelete(signalDelete, doDelete);
	};

	// void osg::Referenced::deleteUsingDeleteHandler() const
	void public_deleteUsingDeleteHandler() const {
		return osg::Referenced::deleteUsingDeleteHandler();
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_addOperationThread(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_removeOperationThread(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_signalObserversAndDelete(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_deleteUsingDeleteHandler(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Protected non-virtual function binds:
	// void osg::OperationQueue::public_addOperationThread(osg::OperationThread * thread)
	static int _bind_public_addOperationThread(lua_State *L) {
		if (!_lg_typecheck_public_addOperationThread(L)) {
			luaL_error(L, "luna typecheck failed in void osg::OperationQueue::public_addOperationThread(osg::OperationThread * thread) function, expected prototype:\nvoid osg::OperationQueue::public_addOperationThread(osg::OperationThread * thread)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::OperationThread* thread=(Luna< osg::Referenced >::checkSubType< osg::OperationThread >(L,2));

		wrapper_osg_OperationQueue* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_OperationQueue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::OperationQueue::public_addOperationThread(osg::OperationThread *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_addOperationThread(thread);

		return 0;
	}

	// void osg::OperationQueue::public_removeOperationThread(osg::OperationThread * thread)
	static int _bind_public_removeOperationThread(lua_State *L) {
		if (!_lg_typecheck_public_removeOperationThread(L)) {
			luaL_error(L, "luna typecheck failed in void osg::OperationQueue::public_removeOperationThread(osg::OperationThread * thread) function, expected prototype:\nvoid osg::OperationQueue::public_removeOperationThread(osg::OperationThread * thread)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::OperationThread* thread=(Luna< osg::Referenced >::checkSubType< osg::OperationThread >(L,2));

		wrapper_osg_OperationQueue* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_OperationQueue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::OperationQueue::public_removeOperationThread(osg::OperationThread *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_removeOperationThread(thread);

		return 0;
	}

	// void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const
	static int _bind_public_signalObserversAndDelete(lua_State *L) {
		if (!_lg_typecheck_public_signalObserversAndDelete(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const function, expected prototype:\nvoid osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool signalDelete=(bool)(lua_toboolean(L,2)==1);
		bool doDelete=(bool)(lua_toboolean(L,3)==1);

		wrapper_osg_OperationQueue* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_OperationQueue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_signalObserversAndDelete(bool, bool) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_signalObserversAndDelete(signalDelete, doDelete);

		return 0;
	}

	// void osg::Referenced::public_deleteUsingDeleteHandler() const
	static int _bind_public_deleteUsingDeleteHandler(lua_State *L) {
		if (!_lg_typecheck_public_deleteUsingDeleteHandler(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Referenced::public_deleteUsingDeleteHandler() const function, expected prototype:\nvoid osg::Referenced::public_deleteUsingDeleteHandler() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_osg_OperationQueue* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_OperationQueue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"addOperationThread",_bind_public_addOperationThread},
		{"removeOperationThread",_bind_public_removeOperationThread},
		{"signalObserversAndDelete",_bind_public_signalObserversAndDelete},
		{"deleteUsingDeleteHandler",_bind_public_deleteUsingDeleteHandler},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

