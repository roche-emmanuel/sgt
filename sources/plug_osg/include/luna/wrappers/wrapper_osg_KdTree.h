#ifndef _WRAPPERS_WRAPPER_OSG_KDTREE_H_
#define _WRAPPERS_WRAPPER_OSG_KDTREE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osg/KdTree>

class wrapper_osg_KdTree : public osg::KdTree, public luna_wrapper_base {

public:
		

	~wrapper_osg_KdTree() {
		logDEBUG3("Calling delete function for wrapper osg_KdTree");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osg::KdTree*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_KdTree(lua_State* L, lua_Table* dum) 
		: osg::KdTree(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osg::KdTree*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_osg_KdTree(lua_State* L, lua_Table* dum, const osg::KdTree & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) 
		: osg::KdTree(rhs, copyop), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osg::KdTree*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void osg::Object::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg((osg::KdTree*)this);
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return KdTree::setThreadSafeRefUnref(threadSafe);
	};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg((osg::KdTree*)this);
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return KdTree::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			_obj.pushArg((osg::KdTree*)this);
			return (_obj.callFunction<void>());
		}

		return KdTree::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg((osg::KdTree*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return KdTree::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osg::KdTree*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return KdTree::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osg::KdTree*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return KdTree::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg((osg::KdTree*)this);
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return KdTree::releaseGLObjects(arg1);
	};

	// osg::Object * osg::KdTree::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			_obj.pushArg((osg::KdTree*)this);
			return (_obj.callFunction<osg::Object*>());
		}

		return KdTree::cloneType();
	};

	// osg::Object * osg::KdTree::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg((osg::KdTree*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return KdTree::clone(arg1);
	};

	// bool osg::KdTree::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg((osg::KdTree*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return KdTree::isSameKindAs(obj);
	};

	// const char * osg::KdTree::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			_obj.pushArg((osg::KdTree*)this);
			return (_obj.callFunction<const char*>());
		}

		return KdTree::libraryName();
	};

	// const char * osg::KdTree::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			_obj.pushArg((osg::KdTree*)this);
			return (_obj.callFunction<const char*>());
		}

		return KdTree::className();
	};

	// void osg::KdTree::accept(osg::ShapeVisitor & arg1)
	void accept(osg::ShapeVisitor & arg1) {
		if(_obj.pushFunction("accept")) {
			_obj.pushArg((osg::KdTree*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return KdTree::accept(arg1);
	};

	// void osg::KdTree::accept(osg::ConstShapeVisitor & arg1) const
	void accept(osg::ConstShapeVisitor & arg1) const {
		if(_obj.pushFunction("accept")) {
			_obj.pushArg((osg::KdTree*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return KdTree::accept(arg1);
	};

	// bool osg::KdTree::intersect(const osg::Vec3d & start, const osg::Vec3d & end, osg::KdTree::LineSegmentIntersections & intersections) const
	bool intersect(const osg::Vec3d & start, const osg::Vec3d & end, osg::KdTree::LineSegmentIntersections & intersections) const {
		if(_obj.pushFunction("intersect")) {
			_obj.pushArg((osg::KdTree*)this);
			_obj.pushArg(&start);
			_obj.pushArg(&end);
			_obj.pushArg(&intersections);
			return (_obj.callFunction<bool>());
		}

		return KdTree::intersect(start, end, intersections);
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

		wrapper_osg_KdTree* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_KdTree >(L,1);
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


		wrapper_osg_KdTree* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_KdTree >(L,1);
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

