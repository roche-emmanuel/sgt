#ifndef _WRAPPERS_WRAPPER_OSGUTIL_HALFWAYMAPGENERATOR_H_
#define _WRAPPERS_WRAPPER_OSGUTIL_HALFWAYMAPGENERATOR_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osgUtil/HalfWayMapGenerator>

class wrapper_osgUtil_HalfWayMapGenerator : public osgUtil::HalfWayMapGenerator, public luna_wrapper_base {

public:
		

	~wrapper_osgUtil_HalfWayMapGenerator() {
		logDEBUG3("Calling delete function for wrapper osgUtil_HalfWayMapGenerator");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osgUtil::HalfWayMapGenerator*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgUtil_HalfWayMapGenerator(lua_State* L, lua_Table* dum, const osg::Vec3f & light_direction, int texture_size = 64) 
		: osgUtil::HalfWayMapGenerator(light_direction, texture_size), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgUtil::HalfWayMapGenerator*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_osgUtil_HalfWayMapGenerator(lua_State* L, lua_Table* dum, const osgUtil::HalfWayMapGenerator & copy, const osg::CopyOp & copyop) 
		: osgUtil::HalfWayMapGenerator(copy, copyop), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgUtil::HalfWayMapGenerator*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// osg::Vec4f osgUtil::HalfWayMapGenerator::compute_color(const osg::Vec3f & R) const
	osg::Vec4f compute_color(const osg::Vec3f & R) const {
		if(_obj.pushFunction("compute_color")) {
			_obj.pushArg((osgUtil::HalfWayMapGenerator*)this);
			_obj.pushArg(&R);
			return *(_obj.callFunction<osg::Vec4f*>());
		}

		return HalfWayMapGenerator::compute_color(R);
	};

public:
	// Public virtual methods:
	// void osg::Referenced::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg((osgUtil::HalfWayMapGenerator*)this);
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return HalfWayMapGenerator::setThreadSafeRefUnref(threadSafe);
	};


	// Protected non-virtual methods:
	// osgUtil::HalfWayMapGenerator & osgUtil::HalfWayMapGenerator::operator=(const osgUtil::HalfWayMapGenerator & arg1)
	osgUtil::HalfWayMapGenerator & public_op_assign(const osgUtil::HalfWayMapGenerator & arg1) {
		return osgUtil::HalfWayMapGenerator::operator=(arg1);
	};

	// void osgUtil::CubeMapGenerator::set_pixel(int index, int c, int r, const osg::Vec4f & color)
	void public_set_pixel(int index, int c, int r, const osg::Vec4f & color) {
		return osgUtil::CubeMapGenerator::set_pixel(index, c, r, color);
	};

	// static osg::Vec4f osgUtil::CubeMapGenerator::vector_to_color(const osg::Vec3f & vec)
	static osg::Vec4f public_vector_to_color(const osg::Vec3f & vec) {
		return osgUtil::CubeMapGenerator::vector_to_color(vec);
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
	inline static bool _lg_typecheck_public_op_assign(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_set_pixel(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,92303235) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_vector_to_color(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92303204) ) return false;
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
	// osgUtil::HalfWayMapGenerator & osgUtil::HalfWayMapGenerator::public_op_assign(const osgUtil::HalfWayMapGenerator & arg1)
	static int _bind_public_op_assign(lua_State *L) {
		if (!_lg_typecheck_public_op_assign(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::HalfWayMapGenerator & osgUtil::HalfWayMapGenerator::public_op_assign(const osgUtil::HalfWayMapGenerator & arg1) function, expected prototype:\nosgUtil::HalfWayMapGenerator & osgUtil::HalfWayMapGenerator::public_op_assign(const osgUtil::HalfWayMapGenerator & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgUtil::HalfWayMapGenerator* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osgUtil::HalfWayMapGenerator >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgUtil::HalfWayMapGenerator::public_op_assign function");
		}
		const osgUtil::HalfWayMapGenerator & _arg1=*_arg1_ptr;

		wrapper_osgUtil_HalfWayMapGenerator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_HalfWayMapGenerator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgUtil::HalfWayMapGenerator & osgUtil::HalfWayMapGenerator::public_op_assign(const osgUtil::HalfWayMapGenerator &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgUtil::HalfWayMapGenerator* lret = &self->public_op_assign(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::HalfWayMapGenerator >::push(L,lret,false);

		return 1;
	}

	// void osgUtil::CubeMapGenerator::public_set_pixel(int index, int c, int r, const osg::Vec4f & color)
	static int _bind_public_set_pixel(lua_State *L) {
		if (!_lg_typecheck_public_set_pixel(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::CubeMapGenerator::public_set_pixel(int index, int c, int r, const osg::Vec4f & color) function, expected prototype:\nvoid osgUtil::CubeMapGenerator::public_set_pixel(int index, int c, int r, const osg::Vec4f & color)\nClass arguments details:\narg 4 ID = 92303235\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);
		int c=(int)lua_tointeger(L,3);
		int r=(int)lua_tointeger(L,4);
		const osg::Vec4f* color_ptr=(Luna< osg::Vec4f >::check(L,5));
		if( !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in osgUtil::CubeMapGenerator::public_set_pixel function");
		}
		const osg::Vec4f & color=*color_ptr;

		wrapper_osgUtil_HalfWayMapGenerator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_HalfWayMapGenerator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::CubeMapGenerator::public_set_pixel(int, int, int, const osg::Vec4f &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_set_pixel(index, c, r, color);

		return 0;
	}

	// static osg::Vec4f osgUtil::CubeMapGenerator::public_vector_to_color(const osg::Vec3f & vec)
	static int _bind_public_vector_to_color(lua_State *L) {
		if (!_lg_typecheck_public_vector_to_color(L)) {
			luaL_error(L, "luna typecheck failed in static osg::Vec4f osgUtil::CubeMapGenerator::public_vector_to_color(const osg::Vec3f & vec) function, expected prototype:\nstatic osg::Vec4f osgUtil::CubeMapGenerator::public_vector_to_color(const osg::Vec3f & vec)\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* vec_ptr=(Luna< osg::Vec3f >::check(L,1));
		if( !vec_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vec in osgUtil::CubeMapGenerator::public_vector_to_color function");
		}
		const osg::Vec3f & vec=*vec_ptr;

		wrapper_osgUtil_HalfWayMapGenerator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_HalfWayMapGenerator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call static osg::Vec4f osgUtil::CubeMapGenerator::public_vector_to_color(const osg::Vec3f &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec4f stack_lret = self->public_vector_to_color(vec);
		osg::Vec4f* lret = new osg::Vec4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,true);

		return 1;
	}

	// void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const
	static int _bind_public_signalObserversAndDelete(lua_State *L) {
		if (!_lg_typecheck_public_signalObserversAndDelete(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const function, expected prototype:\nvoid osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool signalDelete=(bool)(lua_toboolean(L,2)==1);
		bool doDelete=(bool)(lua_toboolean(L,3)==1);

		wrapper_osgUtil_HalfWayMapGenerator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_HalfWayMapGenerator >(L,1);
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


		wrapper_osgUtil_HalfWayMapGenerator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_HalfWayMapGenerator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"op_assign",_bind_public_op_assign},
		{"set_pixel",_bind_public_set_pixel},
		{"vector_to_color",_bind_public_vector_to_color},
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

