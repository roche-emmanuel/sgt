#ifndef _WRAPPERS_WRAPPER_OSGUTIL_RENDERBIN_H_
#define _WRAPPERS_WRAPPER_OSGUTIL_RENDERBIN_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osgUtil/RenderBin>

class wrapper_osgUtil_RenderBin : public osgUtil::RenderBin, public luna_wrapper_base {

public:
		

	~wrapper_osgUtil_RenderBin() {
		logDEBUG3("Calling delete function for wrapper osgUtil_RenderBin");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osgUtil::RenderBin*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgUtil_RenderBin(lua_State* L, lua_Table* dum) 
		: osgUtil::RenderBin(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgUtil::RenderBin*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_osgUtil_RenderBin(lua_State* L, lua_Table* dum, osgUtil::RenderBin::SortMode mode) 
		: osgUtil::RenderBin(mode), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgUtil::RenderBin*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_osgUtil_RenderBin(lua_State* L, lua_Table* dum, const osgUtil::RenderBin & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) 
		: osgUtil::RenderBin(rhs, copyop), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgUtil::RenderBin*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void osg::Object::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg((osgUtil::RenderBin*)this);
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return RenderBin::setThreadSafeRefUnref(threadSafe);
	};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg((osgUtil::RenderBin*)this);
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return RenderBin::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			_obj.pushArg((osgUtil::RenderBin*)this);
			return (_obj.callFunction<void>());
		}

		return RenderBin::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg((osgUtil::RenderBin*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return RenderBin::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osgUtil::RenderBin*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return RenderBin::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osgUtil::RenderBin*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return RenderBin::getUserData();
	};

	// osg::Object * osgUtil::RenderBin::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			_obj.pushArg((osgUtil::RenderBin*)this);
			return (_obj.callFunction<osg::Object*>());
		}

		return RenderBin::cloneType();
	};

	// osg::Object * osgUtil::RenderBin::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg((osgUtil::RenderBin*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return RenderBin::clone(arg1);
	};

	// bool osgUtil::RenderBin::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg((osgUtil::RenderBin*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return RenderBin::isSameKindAs(obj);
	};

	// const char * osgUtil::RenderBin::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			_obj.pushArg((osgUtil::RenderBin*)this);
			return (_obj.callFunction<const char*>());
		}

		return RenderBin::libraryName();
	};

	// const char * osgUtil::RenderBin::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			_obj.pushArg((osgUtil::RenderBin*)this);
			return (_obj.callFunction<const char*>());
		}

		return RenderBin::className();
	};

	// void osgUtil::RenderBin::reset()
	void reset() {
		if(_obj.pushFunction("reset")) {
			_obj.pushArg((osgUtil::RenderBin*)this);
			return (_obj.callFunction<void>());
		}

		return RenderBin::reset();
	};

	// void osgUtil::RenderBin::sort()
	void sort() {
		if(_obj.pushFunction("sort")) {
			_obj.pushArg((osgUtil::RenderBin*)this);
			return (_obj.callFunction<void>());
		}

		return RenderBin::sort();
	};

	// void osgUtil::RenderBin::sortImplementation()
	void sortImplementation() {
		if(_obj.pushFunction("sortImplementation")) {
			_obj.pushArg((osgUtil::RenderBin*)this);
			return (_obj.callFunction<void>());
		}

		return RenderBin::sortImplementation();
	};

	// void osgUtil::RenderBin::sortByState()
	void sortByState() {
		if(_obj.pushFunction("sortByState")) {
			_obj.pushArg((osgUtil::RenderBin*)this);
			return (_obj.callFunction<void>());
		}

		return RenderBin::sortByState();
	};

	// void osgUtil::RenderBin::sortByStateThenFrontToBack()
	void sortByStateThenFrontToBack() {
		if(_obj.pushFunction("sortByStateThenFrontToBack")) {
			_obj.pushArg((osgUtil::RenderBin*)this);
			return (_obj.callFunction<void>());
		}

		return RenderBin::sortByStateThenFrontToBack();
	};

	// void osgUtil::RenderBin::sortFrontToBack()
	void sortFrontToBack() {
		if(_obj.pushFunction("sortFrontToBack")) {
			_obj.pushArg((osgUtil::RenderBin*)this);
			return (_obj.callFunction<void>());
		}

		return RenderBin::sortFrontToBack();
	};

	// void osgUtil::RenderBin::sortBackToFront()
	void sortBackToFront() {
		if(_obj.pushFunction("sortBackToFront")) {
			_obj.pushArg((osgUtil::RenderBin*)this);
			return (_obj.callFunction<void>());
		}

		return RenderBin::sortBackToFront();
	};

	// void osgUtil::RenderBin::sortTraversalOrder()
	void sortTraversalOrder() {
		if(_obj.pushFunction("sortTraversalOrder")) {
			_obj.pushArg((osgUtil::RenderBin*)this);
			return (_obj.callFunction<void>());
		}

		return RenderBin::sortTraversalOrder();
	};

	// void osgUtil::RenderBin::draw(osg::RenderInfo & renderInfo, osgUtil::RenderLeaf *& previous)
	void draw(osg::RenderInfo & renderInfo, osgUtil::RenderLeaf *& previous) {
		if(_obj.pushFunction("draw")) {
			_obj.pushArg((osgUtil::RenderBin*)this);
			_obj.pushArg(&renderInfo);
			_obj.pushArg(previous);
			return (_obj.callFunction<void>());
		}

		return RenderBin::draw(renderInfo, previous);
	};

	// void osgUtil::RenderBin::drawImplementation(osg::RenderInfo & renderInfo, osgUtil::RenderLeaf *& previous)
	void drawImplementation(osg::RenderInfo & renderInfo, osgUtil::RenderLeaf *& previous) {
		if(_obj.pushFunction("drawImplementation")) {
			_obj.pushArg((osgUtil::RenderBin*)this);
			_obj.pushArg(&renderInfo);
			_obj.pushArg(previous);
			return (_obj.callFunction<void>());
		}

		return RenderBin::drawImplementation(renderInfo, previous);
	};

	// unsigned int osgUtil::RenderBin::computeNumberOfDynamicRenderLeaves() const
	unsigned int computeNumberOfDynamicRenderLeaves() const {
		if(_obj.pushFunction("computeNumberOfDynamicRenderLeaves")) {
			_obj.pushArg((osgUtil::RenderBin*)this);
			return (_obj.callFunction<unsigned int>());
		}

		return RenderBin::computeNumberOfDynamicRenderLeaves();
	};

	// void osgUtil::RenderBin::releaseGLObjects(osg::State * state = 0) const
	void releaseGLObjects(osg::State * state = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg((osgUtil::RenderBin*)this);
			_obj.pushArg(state);
			return (_obj.callFunction<void>());
		}

		return RenderBin::releaseGLObjects(state);
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

		wrapper_osgUtil_RenderBin* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_RenderBin >(L,1);
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


		wrapper_osgUtil_RenderBin* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_RenderBin >(L,1);
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

