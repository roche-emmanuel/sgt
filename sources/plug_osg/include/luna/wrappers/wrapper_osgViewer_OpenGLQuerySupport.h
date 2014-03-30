#ifndef _WRAPPERS_WRAPPER_OSGVIEWER_OPENGLQUERYSUPPORT_H_
#define _WRAPPERS_WRAPPER_OSGVIEWER_OPENGLQUERYSUPPORT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osgViewer/Renderer>

class wrapper_osgViewer_OpenGLQuerySupport : public osgViewer::OpenGLQuerySupport, public luna_wrapper_base {

public:
		

	~wrapper_osgViewer_OpenGLQuerySupport() {
		logDEBUG3("Calling delete function for wrapper osgViewer_OpenGLQuerySupport");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osgViewer::OpenGLQuerySupport*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgViewer_OpenGLQuerySupport(lua_State* L, lua_Table* dum) 
		: osgViewer::OpenGLQuerySupport(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgViewer::OpenGLQuerySupport*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void osg::Referenced::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg((osgViewer::OpenGLQuerySupport*)this);
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return OpenGLQuerySupport::setThreadSafeRefUnref(threadSafe);
	};

	// void osgViewer::OpenGLQuerySupport::checkQuery(osg::Stats * stats, osg::State * state, __int64 startTick)
	void checkQuery(osg::Stats * stats, osg::State * state, __int64 startTick) {
		THROW_IF(!_obj.pushFunction("checkQuery"),"No implementation for abstract function osgViewer::OpenGLQuerySupport::checkQuery");
		_obj.pushArg((osgViewer::OpenGLQuerySupport*)this);
		_obj.pushArg(stats);
		_obj.pushArg(state);
		_obj.pushArg(&startTick);
		return (_obj.callFunction<void>());
	};

	// void osgViewer::OpenGLQuerySupport::beginQuery(unsigned int frameNumber, osg::State * state)
	void beginQuery(unsigned int frameNumber, osg::State * state) {
		THROW_IF(!_obj.pushFunction("beginQuery"),"No implementation for abstract function osgViewer::OpenGLQuerySupport::beginQuery");
		_obj.pushArg((osgViewer::OpenGLQuerySupport*)this);
		_obj.pushArg(frameNumber);
		_obj.pushArg(state);
		return (_obj.callFunction<void>());
	};

	// void osgViewer::OpenGLQuerySupport::endQuery(osg::State * state)
	void endQuery(osg::State * state) {
		THROW_IF(!_obj.pushFunction("endQuery"),"No implementation for abstract function osgViewer::OpenGLQuerySupport::endQuery");
		_obj.pushArg((osgViewer::OpenGLQuerySupport*)this);
		_obj.pushArg(state);
		return (_obj.callFunction<void>());
	};

	// void osgViewer::OpenGLQuerySupport::initialize(osg::State * state, __int64 startTick)
	void initialize(osg::State * state, __int64 startTick) {
		if(_obj.pushFunction("initialize")) {
			_obj.pushArg((osgViewer::OpenGLQuerySupport*)this);
			_obj.pushArg(state);
			_obj.pushArg(&startTick);
			return (_obj.callFunction<void>());
		}

		return OpenGLQuerySupport::initialize(state, startTick);
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

		wrapper_osgViewer_OpenGLQuerySupport* self=Luna< osg::Referenced >::checkSubType< wrapper_osgViewer_OpenGLQuerySupport >(L,1);
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


		wrapper_osgViewer_OpenGLQuerySupport* self=Luna< osg::Referenced >::checkSubType< wrapper_osgViewer_OpenGLQuerySupport >(L,1);
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

