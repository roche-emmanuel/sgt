#ifndef _WRAPPERS_WRAPPER_OSG_LINESEGMENT_H_
#define _WRAPPERS_WRAPPER_OSG_LINESEGMENT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osg/LineSegment>

class wrapper_osg_LineSegment : public osg::LineSegment, public luna_wrapper_base {

public:
		

	~wrapper_osg_LineSegment() {
		logDEBUG3("Calling delete function for wrapper osg_LineSegment");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osg::LineSegment*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_LineSegment(lua_State* L, lua_Table* dum) 
		: osg::LineSegment(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osg::LineSegment*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_osg_LineSegment(lua_State* L, lua_Table* dum, const osg::LineSegment & seg) 
		: osg::LineSegment(seg), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osg::LineSegment*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_osg_LineSegment(lua_State* L, lua_Table* dum, const osg::Vec3d & s, const osg::Vec3d & e) 
		: osg::LineSegment(s, e), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osg::LineSegment*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void osg::Referenced::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg((osg::LineSegment*)this);
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return LineSegment::setThreadSafeRefUnref(threadSafe);
	};


	// Protected non-virtual methods:
	// static bool osg::LineSegment::intersectAndClip(osg::Vec3d & s, osg::Vec3d & e, const osg::BoundingBoxd & bb)
	static bool public_intersectAndClip(osg::Vec3d & s, osg::Vec3d & e, const osg::BoundingBoxd & bb) {
		return osg::LineSegment::intersectAndClip(s, e, bb);
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
	inline static bool _lg_typecheck_public_intersectAndClip(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92303202) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,41227270) ) return false;
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
	// static bool osg::LineSegment::public_intersectAndClip(osg::Vec3d & s, osg::Vec3d & e, const osg::BoundingBoxd & bb)
	static int _bind_public_intersectAndClip(lua_State *L) {
		if (!_lg_typecheck_public_intersectAndClip(L)) {
			luaL_error(L, "luna typecheck failed in static bool osg::LineSegment::public_intersectAndClip(osg::Vec3d & s, osg::Vec3d & e, const osg::BoundingBoxd & bb) function, expected prototype:\nstatic bool osg::LineSegment::public_intersectAndClip(osg::Vec3d & s, osg::Vec3d & e, const osg::BoundingBoxd & bb)\nClass arguments details:\narg 1 ID = 92303202\narg 2 ID = 92303202\narg 3 ID = 82744897\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec3d* s_ptr=(Luna< osg::Vec3d >::check(L,1));
		if( !s_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg s in osg::LineSegment::public_intersectAndClip function");
		}
		osg::Vec3d & s=*s_ptr;
		osg::Vec3d* e_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !e_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg e in osg::LineSegment::public_intersectAndClip function");
		}
		osg::Vec3d & e=*e_ptr;
		const osg::BoundingBoxd* bb_ptr=(Luna< osg::BoundingBoxImpl< osg::Vec3d > >::checkSubType< osg::BoundingBoxd >(L,3));
		if( !bb_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bb in osg::LineSegment::public_intersectAndClip function");
		}
		const osg::BoundingBoxd & bb=*bb_ptr;

		wrapper_osg_LineSegment* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_LineSegment >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call static bool osg::LineSegment::public_intersectAndClip(osg::Vec3d &, osg::Vec3d &, const osg::BoundingBoxd &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
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

		wrapper_osg_LineSegment* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_LineSegment >(L,1);
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


		wrapper_osg_LineSegment* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_LineSegment >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
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

