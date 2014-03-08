#ifndef _WRAPPERS_WRAPPER_OSGUTIL_INTERSECTIONVISITOR_H_
#define _WRAPPERS_WRAPPER_OSGUTIL_INTERSECTIONVISITOR_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osgUtil/IntersectionVisitor>

class wrapper_osgUtil_IntersectionVisitor : public osgUtil::IntersectionVisitor, public luna_wrapper_base {

public:
		

	~wrapper_osgUtil_IntersectionVisitor() {
		logDEBUG3("Calling delete function for wrapper osgUtil_IntersectionVisitor");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osgUtil::IntersectionVisitor*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgUtil_IntersectionVisitor(lua_State* L, lua_Table* dum, osgUtil::Intersector * intersector = 0, osgUtil::IntersectionVisitor::ReadCallback * readCallback = 0) 
		: osgUtil::IntersectionVisitor(intersector, readCallback), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgUtil::IntersectionVisitor*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void osg::Referenced::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg((osgUtil::IntersectionVisitor*)this);
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return IntersectionVisitor::setThreadSafeRefUnref(threadSafe);
	};

	// osg::Vec3f osg::NodeVisitor::getViewPoint() const
	osg::Vec3f getViewPoint() const {
		if(_obj.pushFunction("getViewPoint")) {
			_obj.pushArg((osgUtil::IntersectionVisitor*)this);
			return *(_obj.callFunction<osg::Vec3f*>());
		}

		return IntersectionVisitor::getViewPoint();
	};

	// float osg::NodeVisitor::getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const
	float getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const {
		if(_obj.pushFunction("getDistanceFromEyePoint")) {
			_obj.pushArg((osgUtil::IntersectionVisitor*)this);
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<float>());
		}

		return IntersectionVisitor::getDistanceFromEyePoint(arg1, arg2);
	};

	// float osg::NodeVisitor::getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const
	float getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const {
		if(_obj.pushFunction("getDistanceToViewPoint")) {
			_obj.pushArg((osgUtil::IntersectionVisitor*)this);
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<float>());
		}

		return IntersectionVisitor::getDistanceToViewPoint(arg1, arg2);
	};

	// const char * osgUtil::IntersectionVisitor::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			_obj.pushArg((osgUtil::IntersectionVisitor*)this);
			return (_obj.callFunction<const char*>());
		}

		return IntersectionVisitor::libraryName();
	};

	// const char * osgUtil::IntersectionVisitor::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			_obj.pushArg((osgUtil::IntersectionVisitor*)this);
			return (_obj.callFunction<const char*>());
		}

		return IntersectionVisitor::className();
	};

	// void osgUtil::IntersectionVisitor::reset()
	void reset() {
		if(_obj.pushFunction("reset")) {
			_obj.pushArg((osgUtil::IntersectionVisitor*)this);
			return (_obj.callFunction<void>());
		}

		return IntersectionVisitor::reset();
	};

	// osg::Vec3f osgUtil::IntersectionVisitor::getEyePoint() const
	osg::Vec3f getEyePoint() const {
		if(_obj.pushFunction("getEyePoint")) {
			_obj.pushArg((osgUtil::IntersectionVisitor*)this);
			return *(_obj.callFunction<osg::Vec3f*>());
		}

		return IntersectionVisitor::getEyePoint();
	};

	// float osgUtil::IntersectionVisitor::getDistanceToEyePoint(const osg::Vec3f & pos, bool withLODScale) const
	float getDistanceToEyePoint(const osg::Vec3f & pos, bool withLODScale) const {
		if(_obj.pushFunction("getDistanceToEyePoint")) {
			_obj.pushArg((osgUtil::IntersectionVisitor*)this);
			_obj.pushArg(&pos);
			_obj.pushArg(withLODScale);
			return (_obj.callFunction<float>());
		}

		return IntersectionVisitor::getDistanceToEyePoint(pos, withLODScale);
	};

	// void osgUtil::IntersectionVisitor::apply(osg::Node & node)
	void apply(osg::Node & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osgUtil::IntersectionVisitor*)this);
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return IntersectionVisitor::apply(node);
	};

	// void osgUtil::IntersectionVisitor::apply(osg::Geode & geode)
	void apply(osg::Geode & geode) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osgUtil::IntersectionVisitor*)this);
			_obj.pushArg(&geode);
			return (_obj.callFunction<void>());
		}

		return IntersectionVisitor::apply(geode);
	};

	// void osgUtil::IntersectionVisitor::apply(osg::Billboard & geode)
	void apply(osg::Billboard & geode) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osgUtil::IntersectionVisitor*)this);
			_obj.pushArg(&geode);
			return (_obj.callFunction<void>());
		}

		return IntersectionVisitor::apply(geode);
	};

	// void osgUtil::IntersectionVisitor::apply(osg::Group & group)
	void apply(osg::Group & group) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osgUtil::IntersectionVisitor*)this);
			_obj.pushArg(&group);
			return (_obj.callFunction<void>());
		}

		return IntersectionVisitor::apply(group);
	};

	// void osgUtil::IntersectionVisitor::apply(osg::LOD & lod)
	void apply(osg::LOD & lod) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osgUtil::IntersectionVisitor*)this);
			_obj.pushArg(&lod);
			return (_obj.callFunction<void>());
		}

		return IntersectionVisitor::apply(lod);
	};

	// void osgUtil::IntersectionVisitor::apply(osg::PagedLOD & lod)
	void apply(osg::PagedLOD & lod) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osgUtil::IntersectionVisitor*)this);
			_obj.pushArg(&lod);
			return (_obj.callFunction<void>());
		}

		return IntersectionVisitor::apply(lod);
	};

	// void osgUtil::IntersectionVisitor::apply(osg::Transform & transform)
	void apply(osg::Transform & transform) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osgUtil::IntersectionVisitor*)this);
			_obj.pushArg(&transform);
			return (_obj.callFunction<void>());
		}

		return IntersectionVisitor::apply(transform);
	};

	// void osgUtil::IntersectionVisitor::apply(osg::Projection & projection)
	void apply(osg::Projection & projection) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osgUtil::IntersectionVisitor*)this);
			_obj.pushArg(&projection);
			return (_obj.callFunction<void>());
		}

		return IntersectionVisitor::apply(projection);
	};

	// void osgUtil::IntersectionVisitor::apply(osg::Camera & camera)
	void apply(osg::Camera & camera) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osgUtil::IntersectionVisitor*)this);
			_obj.pushArg(&camera);
			return (_obj.callFunction<void>());
		}

		return IntersectionVisitor::apply(camera);
	};


	// Protected non-virtual methods:
	// bool osgUtil::IntersectionVisitor::enter(const osg::Node & node)
	bool public_enter(const osg::Node & node) {
		return osgUtil::IntersectionVisitor::enter(node);
	};

	// void osgUtil::IntersectionVisitor::leave()
	void public_leave() {
		return osgUtil::IntersectionVisitor::leave();
	};

	// void osgUtil::IntersectionVisitor::intersect(osg::Drawable * drawable)
	void public_intersect(osg::Drawable * drawable) {
		return osgUtil::IntersectionVisitor::intersect(drawable);
	};

	// void osgUtil::IntersectionVisitor::push_clone()
	void public_push_clone() {
		return osgUtil::IntersectionVisitor::push_clone();
	};

	// void osgUtil::IntersectionVisitor::pop_clone()
	void public_pop_clone() {
		return osgUtil::IntersectionVisitor::pop_clone();
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
	inline static bool _lg_typecheck_public_enter(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_leave(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_intersect(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_push_clone(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_pop_clone(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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
	// bool osgUtil::IntersectionVisitor::public_enter(const osg::Node & node)
	static int _bind_public_enter(lua_State *L) {
		if (!_lg_typecheck_public_enter(L)) {
			luaL_error(L, "luna typecheck failed in bool osgUtil::IntersectionVisitor::public_enter(const osg::Node & node) function, expected prototype:\nbool osgUtil::IntersectionVisitor::public_enter(const osg::Node & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Node* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::IntersectionVisitor::public_enter function");
		}
		const osg::Node & node=*node_ptr;

		wrapper_osgUtil_IntersectionVisitor* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_IntersectionVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgUtil::IntersectionVisitor::public_enter(const osg::Node &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->public_enter(node);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgUtil::IntersectionVisitor::public_leave()
	static int _bind_public_leave(lua_State *L) {
		if (!_lg_typecheck_public_leave(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectionVisitor::public_leave() function, expected prototype:\nvoid osgUtil::IntersectionVisitor::public_leave()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_osgUtil_IntersectionVisitor* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_IntersectionVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectionVisitor::public_leave(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_leave();

		return 0;
	}

	// void osgUtil::IntersectionVisitor::public_intersect(osg::Drawable * drawable)
	static int _bind_public_intersect(lua_State *L) {
		if (!_lg_typecheck_public_intersect(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectionVisitor::public_intersect(osg::Drawable * drawable) function, expected prototype:\nvoid osgUtil::IntersectionVisitor::public_intersect(osg::Drawable * drawable)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Drawable* drawable=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,2));

		wrapper_osgUtil_IntersectionVisitor* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_IntersectionVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectionVisitor::public_intersect(osg::Drawable *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_intersect(drawable);

		return 0;
	}

	// void osgUtil::IntersectionVisitor::public_push_clone()
	static int _bind_public_push_clone(lua_State *L) {
		if (!_lg_typecheck_public_push_clone(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectionVisitor::public_push_clone() function, expected prototype:\nvoid osgUtil::IntersectionVisitor::public_push_clone()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_osgUtil_IntersectionVisitor* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_IntersectionVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectionVisitor::public_push_clone(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_push_clone();

		return 0;
	}

	// void osgUtil::IntersectionVisitor::public_pop_clone()
	static int _bind_public_pop_clone(lua_State *L) {
		if (!_lg_typecheck_public_pop_clone(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectionVisitor::public_pop_clone() function, expected prototype:\nvoid osgUtil::IntersectionVisitor::public_pop_clone()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_osgUtil_IntersectionVisitor* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_IntersectionVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectionVisitor::public_pop_clone(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_pop_clone();

		return 0;
	}

	// void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const
	static int _bind_public_signalObserversAndDelete(lua_State *L) {
		if (!_lg_typecheck_public_signalObserversAndDelete(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const function, expected prototype:\nvoid osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool signalDelete=(bool)(lua_toboolean(L,2)==1);
		bool doDelete=(bool)(lua_toboolean(L,3)==1);

		wrapper_osgUtil_IntersectionVisitor* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_IntersectionVisitor >(L,1);
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


		wrapper_osgUtil_IntersectionVisitor* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_IntersectionVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"enter",_bind_public_enter},
		{"leave",_bind_public_leave},
		{"intersect",_bind_public_intersect},
		{"push_clone",_bind_public_push_clone},
		{"pop_clone",_bind_public_pop_clone},
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

