#ifndef _WRAPPERS_WRAPPER_OSGUTIL_SHADERGENVISITOR_H_
#define _WRAPPERS_WRAPPER_OSGUTIL_SHADERGENVISITOR_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osgUtil/ShaderGen>

class wrapper_osgUtil_ShaderGenVisitor : public osgUtil::ShaderGenVisitor, public luna_wrapper_base {

public:
		

	~wrapper_osgUtil_ShaderGenVisitor() {
		logDEBUG3("Calling delete function for wrapper osgUtil_ShaderGenVisitor");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osgUtil::ShaderGenVisitor*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgUtil_ShaderGenVisitor(lua_State* L, lua_Table* dum) 
		: osgUtil::ShaderGenVisitor(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgUtil::ShaderGenVisitor*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_osgUtil_ShaderGenVisitor(lua_State* L, lua_Table* dum, osgUtil::ShaderGenCache * stateCache) 
		: osgUtil::ShaderGenVisitor(stateCache), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgUtil::ShaderGenVisitor*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void osg::Referenced::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg((osgUtil::ShaderGenVisitor*)this);
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return ShaderGenVisitor::setThreadSafeRefUnref(threadSafe);
	};

	// const char * osg::NodeVisitor::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			_obj.pushArg((osgUtil::ShaderGenVisitor*)this);
			return (_obj.callFunction<const char*>());
		}

		return ShaderGenVisitor::libraryName();
	};

	// const char * osg::NodeVisitor::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			_obj.pushArg((osgUtil::ShaderGenVisitor*)this);
			return (_obj.callFunction<const char*>());
		}

		return ShaderGenVisitor::className();
	};

	// osg::Vec3f osg::NodeVisitor::getEyePoint() const
	osg::Vec3f getEyePoint() const {
		if(_obj.pushFunction("getEyePoint")) {
			_obj.pushArg((osgUtil::ShaderGenVisitor*)this);
			return *(_obj.callFunction<osg::Vec3f*>());
		}

		return ShaderGenVisitor::getEyePoint();
	};

	// osg::Vec3f osg::NodeVisitor::getViewPoint() const
	osg::Vec3f getViewPoint() const {
		if(_obj.pushFunction("getViewPoint")) {
			_obj.pushArg((osgUtil::ShaderGenVisitor*)this);
			return *(_obj.callFunction<osg::Vec3f*>());
		}

		return ShaderGenVisitor::getViewPoint();
	};

	// float osg::NodeVisitor::getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const
	float getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const {
		if(_obj.pushFunction("getDistanceToEyePoint")) {
			_obj.pushArg((osgUtil::ShaderGenVisitor*)this);
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<float>());
		}

		return ShaderGenVisitor::getDistanceToEyePoint(arg1, arg2);
	};

	// float osg::NodeVisitor::getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const
	float getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const {
		if(_obj.pushFunction("getDistanceFromEyePoint")) {
			_obj.pushArg((osgUtil::ShaderGenVisitor*)this);
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<float>());
		}

		return ShaderGenVisitor::getDistanceFromEyePoint(arg1, arg2);
	};

	// float osg::NodeVisitor::getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const
	float getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const {
		if(_obj.pushFunction("getDistanceToViewPoint")) {
			_obj.pushArg((osgUtil::ShaderGenVisitor*)this);
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<float>());
		}

		return ShaderGenVisitor::getDistanceToViewPoint(arg1, arg2);
	};

	// void osgUtil::ShaderGenVisitor::apply(osg::Node & node)
	void apply(osg::Node & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osgUtil::ShaderGenVisitor*)this);
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return ShaderGenVisitor::apply(node);
	};

	// void osgUtil::ShaderGenVisitor::apply(osg::Geode & geode)
	void apply(osg::Geode & geode) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osgUtil::ShaderGenVisitor*)this);
			_obj.pushArg(&geode);
			return (_obj.callFunction<void>());
		}

		return ShaderGenVisitor::apply(geode);
	};

	// void osgUtil::ShaderGenVisitor::reset()
	void reset() {
		if(_obj.pushFunction("reset")) {
			_obj.pushArg((osgUtil::ShaderGenVisitor*)this);
			return (_obj.callFunction<void>());
		}

		return ShaderGenVisitor::reset();
	};


	// Protected non-virtual methods:
	// void osgUtil::ShaderGenVisitor::update(osg::Drawable * drawable)
	void public_update(osg::Drawable * drawable) {
		return osgUtil::ShaderGenVisitor::update(drawable);
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
	inline static bool _lg_typecheck_public_update(lua_State *L) {
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
	// void osgUtil::ShaderGenVisitor::public_update(osg::Drawable * drawable)
	static int _bind_public_update(lua_State *L) {
		if (!_lg_typecheck_public_update(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::ShaderGenVisitor::public_update(osg::Drawable * drawable) function, expected prototype:\nvoid osgUtil::ShaderGenVisitor::public_update(osg::Drawable * drawable)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Drawable* drawable=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,2));

		wrapper_osgUtil_ShaderGenVisitor* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_ShaderGenVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::ShaderGenVisitor::public_update(osg::Drawable *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_update(drawable);

		return 0;
	}

	// void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const
	static int _bind_public_signalObserversAndDelete(lua_State *L) {
		if (!_lg_typecheck_public_signalObserversAndDelete(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const function, expected prototype:\nvoid osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool signalDelete=(bool)(lua_toboolean(L,2)==1);
		bool doDelete=(bool)(lua_toboolean(L,3)==1);

		wrapper_osgUtil_ShaderGenVisitor* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_ShaderGenVisitor >(L,1);
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


		wrapper_osgUtil_ShaderGenVisitor* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_ShaderGenVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"update",_bind_public_update},
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

