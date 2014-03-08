#ifndef _WRAPPERS_WRAPPER_OSGUTIL_RENDERLEAF_H_
#define _WRAPPERS_WRAPPER_OSGUTIL_RENDERLEAF_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osgUtil/RenderLeaf>

class wrapper_osgUtil_RenderLeaf : public osgUtil::RenderLeaf, public luna_wrapper_base {

public:
		

	~wrapper_osgUtil_RenderLeaf() {
		logDEBUG3("Calling delete function for wrapper osgUtil_RenderLeaf");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osgUtil::RenderLeaf*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgUtil_RenderLeaf(lua_State* L, lua_Table* dum, osg::Drawable * drawable, osg::RefMatrixd * projection, osg::RefMatrixd * modelview, float depth = 0.0f, unsigned int traversalNumber = 0) 
		: osgUtil::RenderLeaf(drawable, projection, modelview, depth, traversalNumber), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgUtil::RenderLeaf*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void osg::Referenced::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg((osgUtil::RenderLeaf*)this);
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return RenderLeaf::setThreadSafeRefUnref(threadSafe);
	};

	// void osgUtil::RenderLeaf::render(osg::RenderInfo & renderInfo, osgUtil::RenderLeaf * previous)
	void render(osg::RenderInfo & renderInfo, osgUtil::RenderLeaf * previous) {
		if(_obj.pushFunction("render")) {
			_obj.pushArg((osgUtil::RenderLeaf*)this);
			_obj.pushArg(&renderInfo);
			_obj.pushArg(previous);
			return (_obj.callFunction<void>());
		}

		return RenderLeaf::render(renderInfo, previous);
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

		wrapper_osgUtil_RenderLeaf* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_RenderLeaf >(L,1);
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


		wrapper_osgUtil_RenderLeaf* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_RenderLeaf >(L,1);
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

