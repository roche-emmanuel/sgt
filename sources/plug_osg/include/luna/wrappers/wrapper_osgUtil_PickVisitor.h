#ifndef _WRAPPERS_WRAPPER_OSGUTIL_PICKVISITOR_H_
#define _WRAPPERS_WRAPPER_OSGUTIL_PICKVISITOR_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osgUtil/IntersectVisitor>

class wrapper_osgUtil_PickVisitor : public osgUtil::PickVisitor, public luna_wrapper_base {

public:
		

	~wrapper_osgUtil_PickVisitor() {
		logDEBUG3("Calling delete function for wrapper osgUtil_PickVisitor");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osgUtil::PickVisitor*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgUtil_PickVisitor(lua_State* L, lua_Table* dum, const osg::Viewport * viewport, const osg::Matrixd & proj, const osg::Matrixd & view, float mx, float my) 
		: osgUtil::PickVisitor(viewport, proj, view, mx, my), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgUtil::PickVisitor*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void osg::Referenced::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg((osgUtil::PickVisitor*)this);
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return PickVisitor::setThreadSafeRefUnref(threadSafe);
	};

	// osg::Vec3f osg::NodeVisitor::getViewPoint() const
	osg::Vec3f getViewPoint() const {
		if(_obj.pushFunction("getViewPoint")) {
			_obj.pushArg((osgUtil::PickVisitor*)this);
			return *(_obj.callFunction<osg::Vec3f*>());
		}

		return PickVisitor::getViewPoint();
	};

	// float osg::NodeVisitor::getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const
	float getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const {
		if(_obj.pushFunction("getDistanceFromEyePoint")) {
			_obj.pushArg((osgUtil::PickVisitor*)this);
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<float>());
		}

		return PickVisitor::getDistanceFromEyePoint(arg1, arg2);
	};

	// float osg::NodeVisitor::getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const
	float getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const {
		if(_obj.pushFunction("getDistanceToViewPoint")) {
			_obj.pushArg((osgUtil::PickVisitor*)this);
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<float>());
		}

		return PickVisitor::getDistanceToViewPoint(arg1, arg2);
	};

	// const char * osgUtil::IntersectVisitor::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			_obj.pushArg((osgUtil::PickVisitor*)this);
			return (_obj.callFunction<const char*>());
		}

		return PickVisitor::libraryName();
	};

	// const char * osgUtil::IntersectVisitor::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			_obj.pushArg((osgUtil::PickVisitor*)this);
			return (_obj.callFunction<const char*>());
		}

		return PickVisitor::className();
	};

	// void osgUtil::IntersectVisitor::reset()
	void reset() {
		if(_obj.pushFunction("reset")) {
			_obj.pushArg((osgUtil::PickVisitor*)this);
			return (_obj.callFunction<void>());
		}

		return PickVisitor::reset();
	};

	// osg::Vec3f osgUtil::IntersectVisitor::getEyePoint() const
	osg::Vec3f getEyePoint() const {
		if(_obj.pushFunction("getEyePoint")) {
			_obj.pushArg((osgUtil::PickVisitor*)this);
			return *(_obj.callFunction<osg::Vec3f*>());
		}

		return PickVisitor::getEyePoint();
	};

	// float osgUtil::IntersectVisitor::getDistanceToEyePoint(const osg::Vec3f & pos, bool withLODScale) const
	float getDistanceToEyePoint(const osg::Vec3f & pos, bool withLODScale) const {
		if(_obj.pushFunction("getDistanceToEyePoint")) {
			_obj.pushArg((osgUtil::PickVisitor*)this);
			_obj.pushArg(&pos);
			_obj.pushArg(withLODScale);
			return (_obj.callFunction<float>());
		}

		return PickVisitor::getDistanceToEyePoint(pos, withLODScale);
	};

	// void osgUtil::PickVisitor::apply(osg::Projection & projection)
	void apply(osg::Projection & projection) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osgUtil::PickVisitor*)this);
			_obj.pushArg(&projection);
			return (_obj.callFunction<void>());
		}

		return PickVisitor::apply(projection);
	};

	// void osgUtil::PickVisitor::apply(osg::Camera & camera)
	void apply(osg::Camera & camera) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osgUtil::PickVisitor*)this);
			_obj.pushArg(&camera);
			return (_obj.callFunction<void>());
		}

		return PickVisitor::apply(camera);
	};


	// Protected non-virtual methods:
	// bool osgUtil::IntersectVisitor::intersect(osg::Drawable & gset)
	bool public_intersect(osg::Drawable & gset) {
		return osgUtil::IntersectVisitor::intersect(gset);
	};

	// void osgUtil::IntersectVisitor::pushMatrix(osg::RefMatrixd * matrix, osg::Transform::ReferenceFrame rf)
	void public_pushMatrix(osg::RefMatrixd * matrix, osg::Transform::ReferenceFrame rf) {
		return osgUtil::IntersectVisitor::pushMatrix(matrix, rf);
	};

	// void osgUtil::IntersectVisitor::popMatrix()
	void public_popMatrix() {
		return osgUtil::IntersectVisitor::popMatrix();
	};

	// bool osgUtil::IntersectVisitor::enterNode(osg::Node & node)
	bool public_enterNode(osg::Node & node) {
		return osgUtil::IntersectVisitor::enterNode(node);
	};

	// void osgUtil::IntersectVisitor::leaveNode()
	void public_leaveNode() {
		return osgUtil::IntersectVisitor::leaveNode();
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
	inline static bool _lg_typecheck_public_intersect(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_pushMatrix(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_popMatrix(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_enterNode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_leaveNode(lua_State *L) {
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
	// bool osgUtil::IntersectVisitor::public_intersect(osg::Drawable & gset)
	static int _bind_public_intersect(lua_State *L) {
		if (!_lg_typecheck_public_intersect(L)) {
			luaL_error(L, "luna typecheck failed in bool osgUtil::IntersectVisitor::public_intersect(osg::Drawable & gset) function, expected prototype:\nbool osgUtil::IntersectVisitor::public_intersect(osg::Drawable & gset)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Drawable* gset_ptr=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,2));
		if( !gset_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg gset in osgUtil::IntersectVisitor::public_intersect function");
		}
		osg::Drawable & gset=*gset_ptr;

		wrapper_osgUtil_PickVisitor* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_PickVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgUtil::IntersectVisitor::public_intersect(osg::Drawable &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->public_intersect(gset);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgUtil::IntersectVisitor::public_pushMatrix(osg::RefMatrixd * matrix, osg::Transform::ReferenceFrame rf)
	static int _bind_public_pushMatrix(lua_State *L) {
		if (!_lg_typecheck_public_pushMatrix(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectVisitor::public_pushMatrix(osg::RefMatrixd * matrix, osg::Transform::ReferenceFrame rf) function, expected prototype:\nvoid osgUtil::IntersectVisitor::public_pushMatrix(osg::RefMatrixd * matrix, osg::Transform::ReferenceFrame rf)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::RefMatrixd* matrix=(Luna< osg::Referenced >::checkSubType< osg::RefMatrixd >(L,2));
		osg::Transform::ReferenceFrame rf=(osg::Transform::ReferenceFrame)lua_tointeger(L,3);

		wrapper_osgUtil_PickVisitor* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_PickVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectVisitor::public_pushMatrix(osg::RefMatrixd *, osg::Transform::ReferenceFrame). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_pushMatrix(matrix, rf);

		return 0;
	}

	// void osgUtil::IntersectVisitor::public_popMatrix()
	static int _bind_public_popMatrix(lua_State *L) {
		if (!_lg_typecheck_public_popMatrix(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectVisitor::public_popMatrix() function, expected prototype:\nvoid osgUtil::IntersectVisitor::public_popMatrix()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_osgUtil_PickVisitor* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_PickVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectVisitor::public_popMatrix(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_popMatrix();

		return 0;
	}

	// bool osgUtil::IntersectVisitor::public_enterNode(osg::Node & node)
	static int _bind_public_enterNode(lua_State *L) {
		if (!_lg_typecheck_public_enterNode(L)) {
			luaL_error(L, "luna typecheck failed in bool osgUtil::IntersectVisitor::public_enterNode(osg::Node & node) function, expected prototype:\nbool osgUtil::IntersectVisitor::public_enterNode(osg::Node & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::IntersectVisitor::public_enterNode function");
		}
		osg::Node & node=*node_ptr;

		wrapper_osgUtil_PickVisitor* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_PickVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgUtil::IntersectVisitor::public_enterNode(osg::Node &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->public_enterNode(node);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgUtil::IntersectVisitor::public_leaveNode()
	static int _bind_public_leaveNode(lua_State *L) {
		if (!_lg_typecheck_public_leaveNode(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectVisitor::public_leaveNode() function, expected prototype:\nvoid osgUtil::IntersectVisitor::public_leaveNode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_osgUtil_PickVisitor* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_PickVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectVisitor::public_leaveNode(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_leaveNode();

		return 0;
	}

	// void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const
	static int _bind_public_signalObserversAndDelete(lua_State *L) {
		if (!_lg_typecheck_public_signalObserversAndDelete(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const function, expected prototype:\nvoid osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool signalDelete=(bool)(lua_toboolean(L,2)==1);
		bool doDelete=(bool)(lua_toboolean(L,3)==1);

		wrapper_osgUtil_PickVisitor* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_PickVisitor >(L,1);
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


		wrapper_osgUtil_PickVisitor* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_PickVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"intersect",_bind_public_intersect},
		{"pushMatrix",_bind_public_pushMatrix},
		{"popMatrix",_bind_public_popMatrix},
		{"enterNode",_bind_public_enterNode},
		{"leaveNode",_bind_public_leaveNode},
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

