#ifndef _WRAPPERS_WRAPPER_OSGUTIL_STATSVISITOR_H_
#define _WRAPPERS_WRAPPER_OSGUTIL_STATSVISITOR_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osgUtil/Statistics>

class wrapper_osgUtil_StatsVisitor : public osgUtil::StatsVisitor, public luna_wrapper_base {

public:
		

	~wrapper_osgUtil_StatsVisitor() {
		logDEBUG3("Calling delete function for wrapper osgUtil_StatsVisitor");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osgUtil::StatsVisitor*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgUtil_StatsVisitor(lua_State* L, lua_Table* dum) 
		: osgUtil::StatsVisitor(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgUtil::StatsVisitor*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void osg::Referenced::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg((osgUtil::StatsVisitor*)this);
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return StatsVisitor::setThreadSafeRefUnref(threadSafe);
	};

	// osg::Vec3f osg::NodeVisitor::getEyePoint() const
	osg::Vec3f getEyePoint() const {
		if(_obj.pushFunction("getEyePoint")) {
			_obj.pushArg((osgUtil::StatsVisitor*)this);
			return *(_obj.callFunction<osg::Vec3f*>());
		}

		return StatsVisitor::getEyePoint();
	};

	// osg::Vec3f osg::NodeVisitor::getViewPoint() const
	osg::Vec3f getViewPoint() const {
		if(_obj.pushFunction("getViewPoint")) {
			_obj.pushArg((osgUtil::StatsVisitor*)this);
			return *(_obj.callFunction<osg::Vec3f*>());
		}

		return StatsVisitor::getViewPoint();
	};

	// float osg::NodeVisitor::getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const
	float getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const {
		if(_obj.pushFunction("getDistanceToEyePoint")) {
			_obj.pushArg((osgUtil::StatsVisitor*)this);
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<float>());
		}

		return StatsVisitor::getDistanceToEyePoint(arg1, arg2);
	};

	// float osg::NodeVisitor::getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const
	float getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const {
		if(_obj.pushFunction("getDistanceFromEyePoint")) {
			_obj.pushArg((osgUtil::StatsVisitor*)this);
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<float>());
		}

		return StatsVisitor::getDistanceFromEyePoint(arg1, arg2);
	};

	// float osg::NodeVisitor::getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const
	float getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const {
		if(_obj.pushFunction("getDistanceToViewPoint")) {
			_obj.pushArg((osgUtil::StatsVisitor*)this);
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<float>());
		}

		return StatsVisitor::getDistanceToViewPoint(arg1, arg2);
	};

	// const char * osgUtil::StatsVisitor::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			_obj.pushArg((osgUtil::StatsVisitor*)this);
			return (_obj.callFunction<const char*>());
		}

		return StatsVisitor::libraryName();
	};

	// const char * osgUtil::StatsVisitor::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			_obj.pushArg((osgUtil::StatsVisitor*)this);
			return (_obj.callFunction<const char*>());
		}

		return StatsVisitor::className();
	};

	// void osgUtil::StatsVisitor::reset()
	void reset() {
		if(_obj.pushFunction("reset")) {
			_obj.pushArg((osgUtil::StatsVisitor*)this);
			return (_obj.callFunction<void>());
		}

		return StatsVisitor::reset();
	};

	// void osgUtil::StatsVisitor::apply(osg::Node & node)
	void apply(osg::Node & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osgUtil::StatsVisitor*)this);
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return StatsVisitor::apply(node);
	};

	// void osgUtil::StatsVisitor::apply(osg::Group & node)
	void apply(osg::Group & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osgUtil::StatsVisitor*)this);
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return StatsVisitor::apply(node);
	};

	// void osgUtil::StatsVisitor::apply(osg::Transform & node)
	void apply(osg::Transform & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osgUtil::StatsVisitor*)this);
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return StatsVisitor::apply(node);
	};

	// void osgUtil::StatsVisitor::apply(osg::LOD & node)
	void apply(osg::LOD & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osgUtil::StatsVisitor*)this);
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return StatsVisitor::apply(node);
	};

	// void osgUtil::StatsVisitor::apply(osg::Switch & node)
	void apply(osg::Switch & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osgUtil::StatsVisitor*)this);
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return StatsVisitor::apply(node);
	};

	// void osgUtil::StatsVisitor::apply(osg::Geode & node)
	void apply(osg::Geode & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osgUtil::StatsVisitor*)this);
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return StatsVisitor::apply(node);
	};

	// void osgUtil::StatsVisitor::apply(osg::Drawable & drawable)
	void apply(osg::Drawable & drawable) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osgUtil::StatsVisitor*)this);
			_obj.pushArg(&drawable);
			return (_obj.callFunction<void>());
		}

		return StatsVisitor::apply(drawable);
	};

	// void osgUtil::StatsVisitor::apply(osg::StateSet & ss)
	void apply(osg::StateSet & ss) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osgUtil::StatsVisitor*)this);
			_obj.pushArg(&ss);
			return (_obj.callFunction<void>());
		}

		return StatsVisitor::apply(ss);
	};

	// void osgUtil::StatsVisitor::totalUpStats()
	void totalUpStats() {
		if(_obj.pushFunction("totalUpStats")) {
			_obj.pushArg((osgUtil::StatsVisitor*)this);
			return (_obj.callFunction<void>());
		}

		return StatsVisitor::totalUpStats();
	};

	// void osgUtil::StatsVisitor::print(std::ostream & out)
	void print(std::ostream & out) {
		if(_obj.pushFunction("print")) {
			_obj.pushArg((osgUtil::StatsVisitor*)this);
			_obj.pushArg(&out);
			return (_obj.callFunction<void>());
		}

		return StatsVisitor::print(out);
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

		wrapper_osgUtil_StatsVisitor* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_StatsVisitor >(L,1);
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


		wrapper_osgUtil_StatsVisitor* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_StatsVisitor >(L,1);
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

