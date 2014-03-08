#ifndef _WRAPPERS_WRAPPER_OSGUTIL_BASEOPTIMIZERVISITOR_H_
#define _WRAPPERS_WRAPPER_OSGUTIL_BASEOPTIMIZERVISITOR_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osgUtil/Optimizer>

class wrapper_osgUtil_BaseOptimizerVisitor : public osgUtil::BaseOptimizerVisitor, public luna_wrapper_base {

public:
		

	~wrapper_osgUtil_BaseOptimizerVisitor() {
		logDEBUG3("Calling delete function for wrapper osgUtil_BaseOptimizerVisitor");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osgUtil::BaseOptimizerVisitor*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgUtil_BaseOptimizerVisitor(lua_State* L, lua_Table* dum, osgUtil::Optimizer * optimizer, unsigned int operation) 
		: osgUtil::BaseOptimizerVisitor(optimizer, operation), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgUtil::BaseOptimizerVisitor*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void osg::Referenced::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg((osgUtil::BaseOptimizerVisitor*)this);
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return BaseOptimizerVisitor::setThreadSafeRefUnref(threadSafe);
	};

	// const char * osg::NodeVisitor::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			_obj.pushArg((osgUtil::BaseOptimizerVisitor*)this);
			return (_obj.callFunction<const char*>());
		}

		return BaseOptimizerVisitor::libraryName();
	};

	// const char * osg::NodeVisitor::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			_obj.pushArg((osgUtil::BaseOptimizerVisitor*)this);
			return (_obj.callFunction<const char*>());
		}

		return BaseOptimizerVisitor::className();
	};

	// void osg::NodeVisitor::reset()
	void reset() {
		if(_obj.pushFunction("reset")) {
			_obj.pushArg((osgUtil::BaseOptimizerVisitor*)this);
			return (_obj.callFunction<void>());
		}

		return BaseOptimizerVisitor::reset();
	};

	// osg::Vec3f osg::NodeVisitor::getEyePoint() const
	osg::Vec3f getEyePoint() const {
		if(_obj.pushFunction("getEyePoint")) {
			_obj.pushArg((osgUtil::BaseOptimizerVisitor*)this);
			return *(_obj.callFunction<osg::Vec3f*>());
		}

		return BaseOptimizerVisitor::getEyePoint();
	};

	// osg::Vec3f osg::NodeVisitor::getViewPoint() const
	osg::Vec3f getViewPoint() const {
		if(_obj.pushFunction("getViewPoint")) {
			_obj.pushArg((osgUtil::BaseOptimizerVisitor*)this);
			return *(_obj.callFunction<osg::Vec3f*>());
		}

		return BaseOptimizerVisitor::getViewPoint();
	};

	// float osg::NodeVisitor::getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const
	float getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const {
		if(_obj.pushFunction("getDistanceToEyePoint")) {
			_obj.pushArg((osgUtil::BaseOptimizerVisitor*)this);
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<float>());
		}

		return BaseOptimizerVisitor::getDistanceToEyePoint(arg1, arg2);
	};

	// float osg::NodeVisitor::getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const
	float getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const {
		if(_obj.pushFunction("getDistanceFromEyePoint")) {
			_obj.pushArg((osgUtil::BaseOptimizerVisitor*)this);
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<float>());
		}

		return BaseOptimizerVisitor::getDistanceFromEyePoint(arg1, arg2);
	};

	// float osg::NodeVisitor::getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const
	float getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const {
		if(_obj.pushFunction("getDistanceToViewPoint")) {
			_obj.pushArg((osgUtil::BaseOptimizerVisitor*)this);
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<float>());
		}

		return BaseOptimizerVisitor::getDistanceToViewPoint(arg1, arg2);
	};

	// void osg::NodeVisitor::apply(osg::Node & node)
	void apply(osg::Node & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osgUtil::BaseOptimizerVisitor*)this);
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return BaseOptimizerVisitor::apply(node);
	};

	// void osg::NodeVisitor::apply(osg::Geode & node)
	void apply(osg::Geode & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osgUtil::BaseOptimizerVisitor*)this);
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return BaseOptimizerVisitor::apply(node);
	};

	// void osg::NodeVisitor::apply(osg::Billboard & node)
	void apply(osg::Billboard & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osgUtil::BaseOptimizerVisitor*)this);
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return BaseOptimizerVisitor::apply(node);
	};

	// void osg::NodeVisitor::apply(osg::Group & node)
	void apply(osg::Group & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osgUtil::BaseOptimizerVisitor*)this);
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return BaseOptimizerVisitor::apply(node);
	};

	// void osg::NodeVisitor::apply(osg::Projection & node)
	void apply(osg::Projection & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osgUtil::BaseOptimizerVisitor*)this);
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return BaseOptimizerVisitor::apply(node);
	};

	// void osg::NodeVisitor::apply(osg::CoordinateSystemNode & node)
	void apply(osg::CoordinateSystemNode & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osgUtil::BaseOptimizerVisitor*)this);
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return BaseOptimizerVisitor::apply(node);
	};

	// void osg::NodeVisitor::apply(osg::ClipNode & node)
	void apply(osg::ClipNode & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osgUtil::BaseOptimizerVisitor*)this);
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return BaseOptimizerVisitor::apply(node);
	};

	// void osg::NodeVisitor::apply(osg::TexGenNode & node)
	void apply(osg::TexGenNode & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osgUtil::BaseOptimizerVisitor*)this);
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return BaseOptimizerVisitor::apply(node);
	};

	// void osg::NodeVisitor::apply(osg::LightSource & node)
	void apply(osg::LightSource & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osgUtil::BaseOptimizerVisitor*)this);
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return BaseOptimizerVisitor::apply(node);
	};

	// void osg::NodeVisitor::apply(osg::Transform & node)
	void apply(osg::Transform & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osgUtil::BaseOptimizerVisitor*)this);
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return BaseOptimizerVisitor::apply(node);
	};

	// void osg::NodeVisitor::apply(osg::Camera & node)
	void apply(osg::Camera & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osgUtil::BaseOptimizerVisitor*)this);
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return BaseOptimizerVisitor::apply(node);
	};

	// void osg::NodeVisitor::apply(osg::CameraView & node)
	void apply(osg::CameraView & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osgUtil::BaseOptimizerVisitor*)this);
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return BaseOptimizerVisitor::apply(node);
	};

	// void osg::NodeVisitor::apply(osg::MatrixTransform & node)
	void apply(osg::MatrixTransform & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osgUtil::BaseOptimizerVisitor*)this);
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return BaseOptimizerVisitor::apply(node);
	};

	// void osg::NodeVisitor::apply(osg::PositionAttitudeTransform & node)
	void apply(osg::PositionAttitudeTransform & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osgUtil::BaseOptimizerVisitor*)this);
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return BaseOptimizerVisitor::apply(node);
	};

	// void osg::NodeVisitor::apply(osg::Switch & node)
	void apply(osg::Switch & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osgUtil::BaseOptimizerVisitor*)this);
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return BaseOptimizerVisitor::apply(node);
	};

	// void osg::NodeVisitor::apply(osg::Sequence & node)
	void apply(osg::Sequence & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osgUtil::BaseOptimizerVisitor*)this);
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return BaseOptimizerVisitor::apply(node);
	};

	// void osg::NodeVisitor::apply(osg::LOD & node)
	void apply(osg::LOD & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osgUtil::BaseOptimizerVisitor*)this);
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return BaseOptimizerVisitor::apply(node);
	};

	// void osg::NodeVisitor::apply(osg::PagedLOD & node)
	void apply(osg::PagedLOD & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osgUtil::BaseOptimizerVisitor*)this);
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return BaseOptimizerVisitor::apply(node);
	};

	// void osg::NodeVisitor::apply(osg::ClearNode & node)
	void apply(osg::ClearNode & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osgUtil::BaseOptimizerVisitor*)this);
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return BaseOptimizerVisitor::apply(node);
	};

	// void osg::NodeVisitor::apply(osg::OccluderNode & node)
	void apply(osg::OccluderNode & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osgUtil::BaseOptimizerVisitor*)this);
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return BaseOptimizerVisitor::apply(node);
	};

	// void osg::NodeVisitor::apply(osg::OcclusionQueryNode & node)
	void apply(osg::OcclusionQueryNode & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osgUtil::BaseOptimizerVisitor*)this);
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return BaseOptimizerVisitor::apply(node);
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

		wrapper_osgUtil_BaseOptimizerVisitor* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_BaseOptimizerVisitor >(L,1);
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


		wrapper_osgUtil_BaseOptimizerVisitor* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_BaseOptimizerVisitor >(L,1);
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

