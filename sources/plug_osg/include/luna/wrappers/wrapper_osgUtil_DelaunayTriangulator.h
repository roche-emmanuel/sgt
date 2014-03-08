#ifndef _WRAPPERS_WRAPPER_OSGUTIL_DELAUNAYTRIANGULATOR_H_
#define _WRAPPERS_WRAPPER_OSGUTIL_DELAUNAYTRIANGULATOR_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osgUtil/DelaunayTriangulator>

class wrapper_osgUtil_DelaunayTriangulator : public osgUtil::DelaunayTriangulator, public luna_wrapper_base {

public:
		

	~wrapper_osgUtil_DelaunayTriangulator() {
		logDEBUG3("Calling delete function for wrapper osgUtil_DelaunayTriangulator");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osgUtil::DelaunayTriangulator*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgUtil_DelaunayTriangulator(lua_State* L, lua_Table* dum) 
		: osgUtil::DelaunayTriangulator(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgUtil::DelaunayTriangulator*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_osgUtil_DelaunayTriangulator(lua_State* L, lua_Table* dum, osg::Vec3Array * points, osg::Vec3Array * normals = 0) 
		: osgUtil::DelaunayTriangulator(points, normals), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgUtil::DelaunayTriangulator*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_osgUtil_DelaunayTriangulator(lua_State* L, lua_Table* dum, const osgUtil::DelaunayTriangulator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) 
		: osgUtil::DelaunayTriangulator(copy, copyop), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgUtil::DelaunayTriangulator*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void osg::Referenced::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg((osgUtil::DelaunayTriangulator*)this);
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return DelaunayTriangulator::setThreadSafeRefUnref(threadSafe);
	};


	// Protected non-virtual methods:
	// int osgUtil::DelaunayTriangulator::getindex(const osg::Vec3f & pt, const osg::Vec3Array * points)
	int public_getindex(const osg::Vec3f & pt, const osg::Vec3Array * points) {
		return osgUtil::DelaunayTriangulator::getindex(pt, points);
	};

	// osgUtil::DelaunayTriangulator & osgUtil::DelaunayTriangulator::operator=(const osgUtil::DelaunayTriangulator & arg1)
	osgUtil::DelaunayTriangulator & public_op_assign(const osgUtil::DelaunayTriangulator & arg1) {
		return osgUtil::DelaunayTriangulator::operator=(arg1);
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
	inline static bool _lg_typecheck_public_getindex(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_op_assign(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
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
	// int osgUtil::DelaunayTriangulator::public_getindex(const osg::Vec3f & pt, const osg::Vec3Array * points)
	static int _bind_public_getindex(lua_State *L) {
		if (!_lg_typecheck_public_getindex(L)) {
			luaL_error(L, "luna typecheck failed in int osgUtil::DelaunayTriangulator::public_getindex(const osg::Vec3f & pt, const osg::Vec3Array * points) function, expected prototype:\nint osgUtil::DelaunayTriangulator::public_getindex(const osg::Vec3f & pt, const osg::Vec3Array * points)\nClass arguments details:\narg 1 ID = 92303204\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* pt_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in osgUtil::DelaunayTriangulator::public_getindex function");
		}
		const osg::Vec3f & pt=*pt_ptr;
		const osg::Vec3Array* points=(Luna< osg::Referenced >::checkSubType< osg::Vec3Array >(L,3));

		wrapper_osgUtil_DelaunayTriangulator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_DelaunayTriangulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osgUtil::DelaunayTriangulator::public_getindex(const osg::Vec3f &, const osg::Vec3Array *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->public_getindex(pt, points);
		lua_pushnumber(L,lret);

		return 1;
	}

	// osgUtil::DelaunayTriangulator & osgUtil::DelaunayTriangulator::public_op_assign(const osgUtil::DelaunayTriangulator & arg1)
	static int _bind_public_op_assign(lua_State *L) {
		if (!_lg_typecheck_public_op_assign(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::DelaunayTriangulator & osgUtil::DelaunayTriangulator::public_op_assign(const osgUtil::DelaunayTriangulator & arg1) function, expected prototype:\nosgUtil::DelaunayTriangulator & osgUtil::DelaunayTriangulator::public_op_assign(const osgUtil::DelaunayTriangulator & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgUtil::DelaunayTriangulator* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osgUtil::DelaunayTriangulator >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgUtil::DelaunayTriangulator::public_op_assign function");
		}
		const osgUtil::DelaunayTriangulator & _arg1=*_arg1_ptr;

		wrapper_osgUtil_DelaunayTriangulator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_DelaunayTriangulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgUtil::DelaunayTriangulator & osgUtil::DelaunayTriangulator::public_op_assign(const osgUtil::DelaunayTriangulator &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgUtil::DelaunayTriangulator* lret = &self->public_op_assign(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::DelaunayTriangulator >::push(L,lret,false);

		return 1;
	}

	// void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const
	static int _bind_public_signalObserversAndDelete(lua_State *L) {
		if (!_lg_typecheck_public_signalObserversAndDelete(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const function, expected prototype:\nvoid osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool signalDelete=(bool)(lua_toboolean(L,2)==1);
		bool doDelete=(bool)(lua_toboolean(L,3)==1);

		wrapper_osgUtil_DelaunayTriangulator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_DelaunayTriangulator >(L,1);
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


		wrapper_osgUtil_DelaunayTriangulator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_DelaunayTriangulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"getindex",_bind_public_getindex},
		{"op_assign",_bind_public_op_assign},
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

