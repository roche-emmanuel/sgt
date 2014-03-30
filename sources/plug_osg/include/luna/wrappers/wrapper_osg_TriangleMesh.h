#ifndef _WRAPPERS_WRAPPER_OSG_TRIANGLEMESH_H_
#define _WRAPPERS_WRAPPER_OSG_TRIANGLEMESH_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osg/Shape>

class wrapper_osg_TriangleMesh : public osg::TriangleMesh, public luna_wrapper_base {

public:
		

	~wrapper_osg_TriangleMesh() {
		logDEBUG3("Calling delete function for wrapper osg_TriangleMesh");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osg::TriangleMesh*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_TriangleMesh(lua_State* L, lua_Table* dum) 
		: osg::TriangleMesh(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osg::TriangleMesh*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_osg_TriangleMesh(lua_State* L, lua_Table* dum, const osg::TriangleMesh & mesh, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) 
		: osg::TriangleMesh(mesh, copyop), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osg::TriangleMesh*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void osg::Object::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg((osg::TriangleMesh*)this);
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return TriangleMesh::setThreadSafeRefUnref(threadSafe);
	};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg((osg::TriangleMesh*)this);
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return TriangleMesh::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			_obj.pushArg((osg::TriangleMesh*)this);
			return (_obj.callFunction<void>());
		}

		return TriangleMesh::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg((osg::TriangleMesh*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return TriangleMesh::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osg::TriangleMesh*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return TriangleMesh::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osg::TriangleMesh*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return TriangleMesh::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg((osg::TriangleMesh*)this);
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return TriangleMesh::releaseGLObjects(arg1);
	};

	// osg::Object * osg::TriangleMesh::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			_obj.pushArg((osg::TriangleMesh*)this);
			return (_obj.callFunction<osg::Object*>());
		}

		return TriangleMesh::cloneType();
	};

	// osg::Object * osg::TriangleMesh::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg((osg::TriangleMesh*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return TriangleMesh::clone(arg1);
	};

	// bool osg::TriangleMesh::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg((osg::TriangleMesh*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return TriangleMesh::isSameKindAs(obj);
	};

	// const char * osg::TriangleMesh::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			_obj.pushArg((osg::TriangleMesh*)this);
			return (_obj.callFunction<const char*>());
		}

		return TriangleMesh::libraryName();
	};

	// const char * osg::TriangleMesh::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			_obj.pushArg((osg::TriangleMesh*)this);
			return (_obj.callFunction<const char*>());
		}

		return TriangleMesh::className();
	};

	// void osg::TriangleMesh::accept(osg::ShapeVisitor & arg1)
	void accept(osg::ShapeVisitor & arg1) {
		if(_obj.pushFunction("accept")) {
			_obj.pushArg((osg::TriangleMesh*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return TriangleMesh::accept(arg1);
	};

	// void osg::TriangleMesh::accept(osg::ConstShapeVisitor & arg1) const
	void accept(osg::ConstShapeVisitor & arg1) const {
		if(_obj.pushFunction("accept")) {
			_obj.pushArg((osg::TriangleMesh*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return TriangleMesh::accept(arg1);
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

		wrapper_osg_TriangleMesh* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_TriangleMesh >(L,1);
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


		wrapper_osg_TriangleMesh* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_TriangleMesh >(L,1);
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

