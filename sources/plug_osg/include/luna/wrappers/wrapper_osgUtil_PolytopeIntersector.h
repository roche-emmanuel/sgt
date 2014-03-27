#ifndef _WRAPPERS_WRAPPER_OSGUTIL_POLYTOPEINTERSECTOR_H_
#define _WRAPPERS_WRAPPER_OSGUTIL_POLYTOPEINTERSECTOR_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osgUtil/PolytopeIntersector>

class wrapper_osgUtil_PolytopeIntersector : public osgUtil::PolytopeIntersector, public luna_wrapper_base {

public:
		

	~wrapper_osgUtil_PolytopeIntersector() {
		logDEBUG3("Calling delete function for wrapper osgUtil_PolytopeIntersector");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osgUtil::PolytopeIntersector*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgUtil_PolytopeIntersector(lua_State* L, lua_Table* dum, const osg::Polytope & polytope) 
		: osgUtil::PolytopeIntersector(polytope), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgUtil::PolytopeIntersector*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_osgUtil_PolytopeIntersector(lua_State* L, lua_Table* dum, osgUtil::Intersector::CoordinateFrame cf, const osg::Polytope & polytope) 
		: osgUtil::PolytopeIntersector(cf, polytope), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgUtil::PolytopeIntersector*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_osgUtil_PolytopeIntersector(lua_State* L, lua_Table* dum, osgUtil::Intersector::CoordinateFrame cf, double xMin, double yMin, double xMax, double yMax) 
		: osgUtil::PolytopeIntersector(cf, xMin, yMin, xMax, yMax), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgUtil::PolytopeIntersector*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void osg::Referenced::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg((osgUtil::PolytopeIntersector*)this);
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return PolytopeIntersector::setThreadSafeRefUnref(threadSafe);
	};

	// osgUtil::Intersector * osgUtil::PolytopeIntersector::clone(osgUtil::IntersectionVisitor & iv)
	osgUtil::Intersector * clone(osgUtil::IntersectionVisitor & iv) {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg((osgUtil::PolytopeIntersector*)this);
			_obj.pushArg(&iv);
			return (_obj.callFunction<osgUtil::Intersector*>());
		}

		return PolytopeIntersector::clone(iv);
	};

	// bool osgUtil::PolytopeIntersector::enter(const osg::Node & node)
	bool enter(const osg::Node & node) {
		if(_obj.pushFunction("enter")) {
			_obj.pushArg((osgUtil::PolytopeIntersector*)this);
			_obj.pushArg(&node);
			return (_obj.callFunction<bool>());
		}

		return PolytopeIntersector::enter(node);
	};

	// void osgUtil::PolytopeIntersector::leave()
	void leave() {
		if(_obj.pushFunction("leave")) {
			_obj.pushArg((osgUtil::PolytopeIntersector*)this);
			return (_obj.callFunction<void>());
		}

		return PolytopeIntersector::leave();
	};

	// void osgUtil::PolytopeIntersector::intersect(osgUtil::IntersectionVisitor & iv, osg::Drawable * drawable)
	void intersect(osgUtil::IntersectionVisitor & iv, osg::Drawable * drawable) {
		if(_obj.pushFunction("intersect")) {
			_obj.pushArg((osgUtil::PolytopeIntersector*)this);
			_obj.pushArg(&iv);
			_obj.pushArg(drawable);
			return (_obj.callFunction<void>());
		}

		return PolytopeIntersector::intersect(iv, drawable);
	};

	// void osgUtil::PolytopeIntersector::reset()
	void reset() {
		if(_obj.pushFunction("reset")) {
			_obj.pushArg((osgUtil::PolytopeIntersector*)this);
			return (_obj.callFunction<void>());
		}

		return PolytopeIntersector::reset();
	};

	// bool osgUtil::PolytopeIntersector::containsIntersections()
	bool containsIntersections() {
		if(_obj.pushFunction("containsIntersections")) {
			_obj.pushArg((osgUtil::PolytopeIntersector*)this);
			return (_obj.callFunction<bool>());
		}

		return PolytopeIntersector::containsIntersections();
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

		wrapper_osgUtil_PolytopeIntersector* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_PolytopeIntersector >(L,1);
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


		wrapper_osgUtil_PolytopeIntersector* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_PolytopeIntersector >(L,1);
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
