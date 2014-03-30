#ifndef _WRAPPERS_WRAPPER_OSGVIEWER_SCENE_H_
#define _WRAPPERS_WRAPPER_OSGVIEWER_SCENE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osgViewer/Scene>

class wrapper_osgViewer_Scene : public osgViewer::Scene, public luna_wrapper_base {

public:
		

	~wrapper_osgViewer_Scene() {
		logDEBUG3("Calling delete function for wrapper osgViewer_Scene");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osgViewer::Scene*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgViewer_Scene(lua_State* L, lua_Table* dum) 
		: osgViewer::Scene(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgViewer::Scene*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void osg::Referenced::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg((osgViewer::Scene*)this);
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return Scene::setThreadSafeRefUnref(threadSafe);
	};

	// const char * osgViewer::Scene::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			_obj.pushArg((osgViewer::Scene*)this);
			return (_obj.callFunction<const char*>());
		}

		return Scene::className();
	};


	// Protected non-virtual methods:
	// static osgViewer::Scene * osgViewer::Scene::getOrCreateScene(osg::Node * node)
	static osgViewer::Scene * public_getOrCreateScene(osg::Node * node) {
		return osgViewer::Scene::getOrCreateScene(node);
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
	inline static bool _lg_typecheck_public_getOrCreateScene(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
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
	// static osgViewer::Scene * osgViewer::Scene::public_getOrCreateScene(osg::Node * node)
	static int _bind_public_getOrCreateScene(lua_State *L) {
		if (!_lg_typecheck_public_getOrCreateScene(L)) {
			luaL_error(L, "luna typecheck failed in static osgViewer::Scene * osgViewer::Scene::public_getOrCreateScene(osg::Node * node) function, expected prototype:\nstatic osgViewer::Scene * osgViewer::Scene::public_getOrCreateScene(osg::Node * node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* node=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,1));

		wrapper_osgViewer_Scene* self=Luna< osg::Referenced >::checkSubType< wrapper_osgViewer_Scene >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call static osgViewer::Scene * osgViewer::Scene::public_getOrCreateScene(osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgViewer::Scene * lret = self->public_getOrCreateScene(node);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgViewer::Scene >::push(L,lret,false);

		return 1;
	}

	// void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const
	static int _bind_public_signalObserversAndDelete(lua_State *L) {
		if (!_lg_typecheck_public_signalObserversAndDelete(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const function, expected prototype:\nvoid osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool signalDelete=(bool)(lua_toboolean(L,2)==1);
		bool doDelete=(bool)(lua_toboolean(L,3)==1);

		wrapper_osgViewer_Scene* self=Luna< osg::Referenced >::checkSubType< wrapper_osgViewer_Scene >(L,1);
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


		wrapper_osgViewer_Scene* self=Luna< osg::Referenced >::checkSubType< wrapper_osgViewer_Scene >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"getOrCreateScene",_bind_public_getOrCreateScene},
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

