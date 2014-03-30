#ifndef _WRAPPERS_WRAPPER_OSGUTIL_LINESEGMENTINTERSECTOR_H_
#define _WRAPPERS_WRAPPER_OSGUTIL_LINESEGMENTINTERSECTOR_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osgUtil/LineSegmentIntersector>

class wrapper_osgUtil_LineSegmentIntersector : public osgUtil::LineSegmentIntersector, public luna_wrapper_base {

public:
		

	~wrapper_osgUtil_LineSegmentIntersector() {
		logDEBUG3("Calling delete function for wrapper osgUtil_LineSegmentIntersector");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osgUtil::LineSegmentIntersector*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgUtil_LineSegmentIntersector(lua_State* L, lua_Table* dum, const osg::Vec3d & start, const osg::Vec3d & end) 
		: osgUtil::LineSegmentIntersector(start, end), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgUtil::LineSegmentIntersector*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_osgUtil_LineSegmentIntersector(lua_State* L, lua_Table* dum, osgUtil::Intersector::CoordinateFrame cf, const osg::Vec3d & start, const osg::Vec3d & end) 
		: osgUtil::LineSegmentIntersector(cf, start, end), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgUtil::LineSegmentIntersector*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_osgUtil_LineSegmentIntersector(lua_State* L, lua_Table* dum, osgUtil::Intersector::CoordinateFrame cf, double x, double y) 
		: osgUtil::LineSegmentIntersector(cf, x, y), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgUtil::LineSegmentIntersector*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void osg::Referenced::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg((osgUtil::LineSegmentIntersector*)this);
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return LineSegmentIntersector::setThreadSafeRefUnref(threadSafe);
	};

	// osgUtil::Intersector * osgUtil::LineSegmentIntersector::clone(osgUtil::IntersectionVisitor & iv)
	osgUtil::Intersector * clone(osgUtil::IntersectionVisitor & iv) {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg((osgUtil::LineSegmentIntersector*)this);
			_obj.pushArg(&iv);
			return (_obj.callFunction<osgUtil::Intersector*>());
		}

		return LineSegmentIntersector::clone(iv);
	};

	// bool osgUtil::LineSegmentIntersector::enter(const osg::Node & node)
	bool enter(const osg::Node & node) {
		if(_obj.pushFunction("enter")) {
			_obj.pushArg((osgUtil::LineSegmentIntersector*)this);
			_obj.pushArg(&node);
			return (_obj.callFunction<bool>());
		}

		return LineSegmentIntersector::enter(node);
	};

	// void osgUtil::LineSegmentIntersector::leave()
	void leave() {
		if(_obj.pushFunction("leave")) {
			_obj.pushArg((osgUtil::LineSegmentIntersector*)this);
			return (_obj.callFunction<void>());
		}

		return LineSegmentIntersector::leave();
	};

	// void osgUtil::LineSegmentIntersector::intersect(osgUtil::IntersectionVisitor & iv, osg::Drawable * drawable)
	void intersect(osgUtil::IntersectionVisitor & iv, osg::Drawable * drawable) {
		if(_obj.pushFunction("intersect")) {
			_obj.pushArg((osgUtil::LineSegmentIntersector*)this);
			_obj.pushArg(&iv);
			_obj.pushArg(drawable);
			return (_obj.callFunction<void>());
		}

		return LineSegmentIntersector::intersect(iv, drawable);
	};

	// void osgUtil::LineSegmentIntersector::reset()
	void reset() {
		if(_obj.pushFunction("reset")) {
			_obj.pushArg((osgUtil::LineSegmentIntersector*)this);
			return (_obj.callFunction<void>());
		}

		return LineSegmentIntersector::reset();
	};

	// bool osgUtil::LineSegmentIntersector::containsIntersections()
	bool containsIntersections() {
		if(_obj.pushFunction("containsIntersections")) {
			_obj.pushArg((osgUtil::LineSegmentIntersector*)this);
			return (_obj.callFunction<bool>());
		}

		return LineSegmentIntersector::containsIntersections();
	};


	// Protected non-virtual methods:
	// bool osgUtil::LineSegmentIntersector::intersects(const osg::BoundingSphered & bs)
	bool public_intersects(const osg::BoundingSphered & bs) {
		return osgUtil::LineSegmentIntersector::intersects(bs);
	};

	// bool osgUtil::LineSegmentIntersector::intersectAndClip(osg::Vec3d & s, osg::Vec3d & e, const osg::BoundingBoxd & bb)
	bool public_intersectAndClip(osg::Vec3d & s, osg::Vec3d & e, const osg::BoundingBoxd & bb) {
		return osgUtil::LineSegmentIntersector::intersectAndClip(s, e, bb);
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
	inline static bool _lg_typecheck_public_intersects(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,65870735) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_intersectAndClip(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303202) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,41227270) ) return false;
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
	// bool osgUtil::LineSegmentIntersector::public_intersects(const osg::BoundingSphered & bs)
	static int _bind_public_intersects(lua_State *L) {
		if (!_lg_typecheck_public_intersects(L)) {
			luaL_error(L, "luna typecheck failed in bool osgUtil::LineSegmentIntersector::public_intersects(const osg::BoundingSphered & bs) function, expected prototype:\nbool osgUtil::LineSegmentIntersector::public_intersects(const osg::BoundingSphered & bs)\nClass arguments details:\narg 1 ID = 54337300\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::BoundingSphered* bs_ptr=(Luna< osg::BoundingSphereImpl< osg::Vec3d > >::checkSubType< osg::BoundingSphered >(L,2));
		if( !bs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bs in osgUtil::LineSegmentIntersector::public_intersects function");
		}
		const osg::BoundingSphered & bs=*bs_ptr;

		wrapper_osgUtil_LineSegmentIntersector* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_LineSegmentIntersector >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgUtil::LineSegmentIntersector::public_intersects(const osg::BoundingSphered &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->public_intersects(bs);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgUtil::LineSegmentIntersector::public_intersectAndClip(osg::Vec3d & s, osg::Vec3d & e, const osg::BoundingBoxd & bb)
	static int _bind_public_intersectAndClip(lua_State *L) {
		if (!_lg_typecheck_public_intersectAndClip(L)) {
			luaL_error(L, "luna typecheck failed in bool osgUtil::LineSegmentIntersector::public_intersectAndClip(osg::Vec3d & s, osg::Vec3d & e, const osg::BoundingBoxd & bb) function, expected prototype:\nbool osgUtil::LineSegmentIntersector::public_intersectAndClip(osg::Vec3d & s, osg::Vec3d & e, const osg::BoundingBoxd & bb)\nClass arguments details:\narg 1 ID = 92303202\narg 2 ID = 92303202\narg 3 ID = 82744897\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec3d* s_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !s_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg s in osgUtil::LineSegmentIntersector::public_intersectAndClip function");
		}
		osg::Vec3d & s=*s_ptr;
		osg::Vec3d* e_ptr=(Luna< osg::Vec3d >::check(L,3));
		if( !e_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg e in osgUtil::LineSegmentIntersector::public_intersectAndClip function");
		}
		osg::Vec3d & e=*e_ptr;
		const osg::BoundingBoxd* bb_ptr=(Luna< osg::BoundingBoxImpl< osg::Vec3d > >::checkSubType< osg::BoundingBoxd >(L,4));
		if( !bb_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bb in osgUtil::LineSegmentIntersector::public_intersectAndClip function");
		}
		const osg::BoundingBoxd & bb=*bb_ptr;

		wrapper_osgUtil_LineSegmentIntersector* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_LineSegmentIntersector >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgUtil::LineSegmentIntersector::public_intersectAndClip(osg::Vec3d &, osg::Vec3d &, const osg::BoundingBoxd &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->public_intersectAndClip(s, e, bb);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const
	static int _bind_public_signalObserversAndDelete(lua_State *L) {
		if (!_lg_typecheck_public_signalObserversAndDelete(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const function, expected prototype:\nvoid osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool signalDelete=(bool)(lua_toboolean(L,2)==1);
		bool doDelete=(bool)(lua_toboolean(L,3)==1);

		wrapper_osgUtil_LineSegmentIntersector* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_LineSegmentIntersector >(L,1);
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


		wrapper_osgUtil_LineSegmentIntersector* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_LineSegmentIntersector >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"intersects",_bind_public_intersects},
		{"intersectAndClip",_bind_public_intersectAndClip},
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

