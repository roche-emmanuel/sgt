#ifndef _WRAPPERS_WRAPPER_OSG_GRAPHICSTHREAD_H_
#define _WRAPPERS_WRAPPER_OSG_GRAPHICSTHREAD_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osg/GraphicsThread>

class wrapper_osg_GraphicsThread : public osg::GraphicsThread, public luna_wrapper_base {

public:
		

	~wrapper_osg_GraphicsThread() {
		logDEBUG3("Calling delete function for wrapper osg_GraphicsThread");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osg::GraphicsThread*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_GraphicsThread(lua_State* L, lua_Table* dum) 
		: osg::GraphicsThread(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osg::GraphicsThread*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void osg::Referenced::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg((osg::GraphicsThread*)this);
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return GraphicsThread::setThreadSafeRefUnref(threadSafe);
	};

	// void OpenThreads::Thread::cancelCleanup()
	void cancelCleanup() {
		if(_obj.pushFunction("cancelCleanup")) {
			_obj.pushArg((osg::GraphicsThread*)this);
			return (_obj.callFunction<void>());
		}

		return GraphicsThread::cancelCleanup();
	};

	// int osg::OperationThread::cancel()
	int cancel() {
		if(_obj.pushFunction("cancel")) {
			_obj.pushArg((osg::GraphicsThread*)this);
			return (_obj.callFunction<int>());
		}

		return GraphicsThread::cancel();
	};

	// void osg::GraphicsThread::run()
	void run() {
		if(_obj.pushFunction("run")) {
			_obj.pushArg((osg::GraphicsThread*)this);
			return (_obj.callFunction<void>());
		}

		return GraphicsThread::run();
	};


	// Protected non-virtual methods:
	// void osg::Referenced::signalObserversAndDelete(bool signalDelete, bool doDelete) const
	void public_signalObserversAndDelete(bool signalDelete, bool doDelete) const {
		return osg::Referenced::signalObserversAndDelete(signalDelete, doDelete);
	};

	// void osg::Referenced::deleteUsingDeleteHandler() const
	void public_deleteUsingDeleteHandler() const {
		return osg::Referenced::deleteUsingDeleteHandler();
	};


	// Protected non-virtual checkers:
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
	// void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const
	static int _bind_public_signalObserversAndDelete(lua_State *L) {
		if (!_lg_typecheck_public_signalObserversAndDelete(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const function, expected prototype:\nvoid osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool signalDelete=(bool)(lua_toboolean(L,2)==1);
		bool doDelete=(bool)(lua_toboolean(L,3)==1);

		wrapper_osg_GraphicsThread* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_GraphicsThread >(L,1);
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


		wrapper_osg_GraphicsThread* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_GraphicsThread >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
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

