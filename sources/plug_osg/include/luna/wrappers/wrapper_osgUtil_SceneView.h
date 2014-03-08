#ifndef _WRAPPERS_WRAPPER_OSGUTIL_SCENEVIEW_H_
#define _WRAPPERS_WRAPPER_OSGUTIL_SCENEVIEW_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osgUtil/SceneView>

class wrapper_osgUtil_SceneView : public osgUtil::SceneView, public luna_wrapper_base {

public:
		

	~wrapper_osgUtil_SceneView() {
		logDEBUG3("Calling delete function for wrapper osgUtil_SceneView");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osgUtil::SceneView*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgUtil_SceneView(lua_State* L, lua_Table* dum, osg::DisplaySettings * ds = NULL) 
		: osgUtil::SceneView(ds), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgUtil::SceneView*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_osgUtil_SceneView(lua_State* L, lua_Table* dum, const osgUtil::SceneView & sceneview, const osg::CopyOp & copyop = osg::CopyOp ()) 
		: osgUtil::SceneView(sceneview, copyop), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgUtil::SceneView*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// bool osgUtil::SceneView::cullStage(const osg::Matrixd & projection, const osg::Matrixd & modelview, osgUtil::CullVisitor * cullVisitor, osgUtil::StateGraph * rendergraph, osgUtil::RenderStage * renderStage, osg::Viewport * viewport)
	bool cullStage(const osg::Matrixd & projection, const osg::Matrixd & modelview, osgUtil::CullVisitor * cullVisitor, osgUtil::StateGraph * rendergraph, osgUtil::RenderStage * renderStage, osg::Viewport * viewport) {
		if(_obj.pushFunction("cullStage")) {
			_obj.pushArg((osgUtil::SceneView*)this);
			_obj.pushArg(&projection);
			_obj.pushArg(&modelview);
			_obj.pushArg(cullVisitor);
			_obj.pushArg(rendergraph);
			_obj.pushArg(renderStage);
			_obj.pushArg(viewport);
			return (_obj.callFunction<bool>());
		}

		return SceneView::cullStage(projection, modelview, cullVisitor, rendergraph, renderStage, viewport);
	};

public:
	// Public virtual methods:
	// void osg::Object::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg((osgUtil::SceneView*)this);
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return SceneView::setThreadSafeRefUnref(threadSafe);
	};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg((osgUtil::SceneView*)this);
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return SceneView::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			_obj.pushArg((osgUtil::SceneView*)this);
			return (_obj.callFunction<void>());
		}

		return SceneView::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg((osgUtil::SceneView*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return SceneView::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osgUtil::SceneView*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return SceneView::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osgUtil::SceneView*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return SceneView::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg((osgUtil::SceneView*)this);
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return SceneView::releaseGLObjects(arg1);
	};

	// osg::Object * osgUtil::SceneView::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			_obj.pushArg((osgUtil::SceneView*)this);
			return (_obj.callFunction<osg::Object*>());
		}

		return SceneView::cloneType();
	};

	// osg::Object * osgUtil::SceneView::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg((osgUtil::SceneView*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return SceneView::clone(arg1);
	};

	// bool osgUtil::SceneView::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg((osgUtil::SceneView*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return SceneView::isSameKindAs(obj);
	};

	// const char * osgUtil::SceneView::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			_obj.pushArg((osgUtil::SceneView*)this);
			return (_obj.callFunction<const char*>());
		}

		return SceneView::libraryName();
	};

	// const char * osgUtil::SceneView::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			_obj.pushArg((osgUtil::SceneView*)this);
			return (_obj.callFunction<const char*>());
		}

		return SceneView::className();
	};

	// void osgUtil::SceneView::setDefaults()
	void setDefaults() {
		if(_obj.pushFunction("setDefaults")) {
			_obj.pushArg((osgUtil::SceneView*)this);
			return (_obj.callFunction<void>());
		}

		return SceneView::setDefaults();
	};

	// void osgUtil::SceneView::setDefaults(unsigned int options)
	void setDefaults(unsigned int options) {
		if(_obj.pushFunction("setDefaults")) {
			_obj.pushArg((osgUtil::SceneView*)this);
			_obj.pushArg(options);
			return (_obj.callFunction<void>());
		}

		return SceneView::setDefaults(options);
	};

	// osg::Matrixd osgUtil::SceneView::computeLeftEyeProjectionImplementation(const osg::Matrixd & projection) const
	osg::Matrixd computeLeftEyeProjectionImplementation(const osg::Matrixd & projection) const {
		if(_obj.pushFunction("computeLeftEyeProjectionImplementation")) {
			_obj.pushArg((osgUtil::SceneView*)this);
			_obj.pushArg(&projection);
			return *(_obj.callFunction<osg::Matrixd*>());
		}

		return SceneView::computeLeftEyeProjectionImplementation(projection);
	};

	// osg::Matrixd osgUtil::SceneView::computeLeftEyeViewImplementation(const osg::Matrixd & view) const
	osg::Matrixd computeLeftEyeViewImplementation(const osg::Matrixd & view) const {
		if(_obj.pushFunction("computeLeftEyeViewImplementation")) {
			_obj.pushArg((osgUtil::SceneView*)this);
			_obj.pushArg(&view);
			return *(_obj.callFunction<osg::Matrixd*>());
		}

		return SceneView::computeLeftEyeViewImplementation(view);
	};

	// osg::Matrixd osgUtil::SceneView::computeRightEyeProjectionImplementation(const osg::Matrixd & projection) const
	osg::Matrixd computeRightEyeProjectionImplementation(const osg::Matrixd & projection) const {
		if(_obj.pushFunction("computeRightEyeProjectionImplementation")) {
			_obj.pushArg((osgUtil::SceneView*)this);
			_obj.pushArg(&projection);
			return *(_obj.callFunction<osg::Matrixd*>());
		}

		return SceneView::computeRightEyeProjectionImplementation(projection);
	};

	// osg::Matrixd osgUtil::SceneView::computeRightEyeViewImplementation(const osg::Matrixd & view) const
	osg::Matrixd computeRightEyeViewImplementation(const osg::Matrixd & view) const {
		if(_obj.pushFunction("computeRightEyeViewImplementation")) {
			_obj.pushArg((osgUtil::SceneView*)this);
			_obj.pushArg(&view);
			return *(_obj.callFunction<osg::Matrixd*>());
		}

		return SceneView::computeRightEyeViewImplementation(view);
	};

	// void osgUtil::SceneView::inheritCullSettings(const osg::CullSettings & settings)
	void inheritCullSettings(const osg::CullSettings & settings) {
		if(_obj.pushFunction("inheritCullSettings")) {
			_obj.pushArg((osgUtil::SceneView*)this);
			_obj.pushArg(&settings);
			return (_obj.callFunction<void>());
		}

		return SceneView::inheritCullSettings(settings);
	};

	// void osgUtil::SceneView::inheritCullSettings(const osg::CullSettings & settings, unsigned int inheritanceMask)
	void inheritCullSettings(const osg::CullSettings & settings, unsigned int inheritanceMask) {
		if(_obj.pushFunction("inheritCullSettings")) {
			_obj.pushArg((osgUtil::SceneView*)this);
			_obj.pushArg(&settings);
			_obj.pushArg(inheritanceMask);
			return (_obj.callFunction<void>());
		}

		return SceneView::inheritCullSettings(settings, inheritanceMask);
	};

	// void osgUtil::SceneView::init()
	void init() {
		if(_obj.pushFunction("init")) {
			_obj.pushArg((osgUtil::SceneView*)this);
			return (_obj.callFunction<void>());
		}

		return SceneView::init();
	};

	// void osgUtil::SceneView::update()
	void update() {
		if(_obj.pushFunction("update")) {
			_obj.pushArg((osgUtil::SceneView*)this);
			return (_obj.callFunction<void>());
		}

		return SceneView::update();
	};

	// void osgUtil::SceneView::cull()
	void cull() {
		if(_obj.pushFunction("cull")) {
			_obj.pushArg((osgUtil::SceneView*)this);
			return (_obj.callFunction<void>());
		}

		return SceneView::cull();
	};

	// void osgUtil::SceneView::draw()
	void draw() {
		if(_obj.pushFunction("draw")) {
			_obj.pushArg((osgUtil::SceneView*)this);
			return (_obj.callFunction<void>());
		}

		return SceneView::draw();
	};

	// void osgUtil::SceneView::releaseAllGLObjects()
	void releaseAllGLObjects() {
		if(_obj.pushFunction("releaseAllGLObjects")) {
			_obj.pushArg((osgUtil::SceneView*)this);
			return (_obj.callFunction<void>());
		}

		return SceneView::releaseAllGLObjects();
	};

	// void osgUtil::SceneView::flushAllDeletedGLObjects()
	void flushAllDeletedGLObjects() {
		if(_obj.pushFunction("flushAllDeletedGLObjects")) {
			_obj.pushArg((osgUtil::SceneView*)this);
			return (_obj.callFunction<void>());
		}

		return SceneView::flushAllDeletedGLObjects();
	};

	// void osgUtil::SceneView::flushDeletedGLObjects(double & availableTime)
	void flushDeletedGLObjects(double & availableTime) {
		if(_obj.pushFunction("flushDeletedGLObjects")) {
			_obj.pushArg((osgUtil::SceneView*)this);
			_obj.pushArg(availableTime);
			return (_obj.callFunction<void>());
		}

		return SceneView::flushDeletedGLObjects(availableTime);
	};


	// Protected non-virtual methods:
	// void osgUtil::SceneView::computeLeftEyeViewport(const osg::Viewport * viewport)
	void public_computeLeftEyeViewport(const osg::Viewport * viewport) {
		return osgUtil::SceneView::computeLeftEyeViewport(viewport);
	};

	// void osgUtil::SceneView::computeRightEyeViewport(const osg::Viewport * viewport)
	void public_computeRightEyeViewport(const osg::Viewport * viewport) {
		return osgUtil::SceneView::computeRightEyeViewport(viewport);
	};

	// const osg::Matrixd osgUtil::SceneView::computeMVPW() const
	const osg::Matrixd public_computeMVPW() const {
		return osgUtil::SceneView::computeMVPW();
	};

	// void osgUtil::SceneView::clearArea(int x, int y, int width, int height, const osg::Vec4f & color)
	void public_clearArea(int x, int y, int width, int height, const osg::Vec4f & color) {
		return osgUtil::SceneView::clearArea(x, y, width, height, color);
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
	inline static bool _lg_typecheck_public_computeLeftEyeViewport(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_computeRightEyeViewport(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_computeMVPW(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_clearArea(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,92303235) ) return false;
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
	// void osgUtil::SceneView::public_computeLeftEyeViewport(const osg::Viewport * viewport)
	static int _bind_public_computeLeftEyeViewport(lua_State *L) {
		if (!_lg_typecheck_public_computeLeftEyeViewport(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneView::public_computeLeftEyeViewport(const osg::Viewport * viewport) function, expected prototype:\nvoid osgUtil::SceneView::public_computeLeftEyeViewport(const osg::Viewport * viewport)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Viewport* viewport=(Luna< osg::Referenced >::checkSubType< osg::Viewport >(L,2));

		wrapper_osgUtil_SceneView* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_SceneView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::SceneView::public_computeLeftEyeViewport(const osg::Viewport *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_computeLeftEyeViewport(viewport);

		return 0;
	}

	// void osgUtil::SceneView::public_computeRightEyeViewport(const osg::Viewport * viewport)
	static int _bind_public_computeRightEyeViewport(lua_State *L) {
		if (!_lg_typecheck_public_computeRightEyeViewport(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneView::public_computeRightEyeViewport(const osg::Viewport * viewport) function, expected prototype:\nvoid osgUtil::SceneView::public_computeRightEyeViewport(const osg::Viewport * viewport)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Viewport* viewport=(Luna< osg::Referenced >::checkSubType< osg::Viewport >(L,2));

		wrapper_osgUtil_SceneView* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_SceneView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::SceneView::public_computeRightEyeViewport(const osg::Viewport *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_computeRightEyeViewport(viewport);

		return 0;
	}

	// const osg::Matrixd osgUtil::SceneView::public_computeMVPW() const
	static int _bind_public_computeMVPW(lua_State *L) {
		if (!_lg_typecheck_public_computeMVPW(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Matrixd osgUtil::SceneView::public_computeMVPW() const function, expected prototype:\nconst osg::Matrixd osgUtil::SceneView::public_computeMVPW() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_osgUtil_SceneView* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_SceneView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Matrixd osgUtil::SceneView::public_computeMVPW() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Matrixd stack_lret = self->public_computeMVPW();
		const osg::Matrixd* lret = new const osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// void osgUtil::SceneView::public_clearArea(int x, int y, int width, int height, const osg::Vec4f & color)
	static int _bind_public_clearArea(lua_State *L) {
		if (!_lg_typecheck_public_clearArea(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneView::public_clearArea(int x, int y, int width, int height, const osg::Vec4f & color) function, expected prototype:\nvoid osgUtil::SceneView::public_clearArea(int x, int y, int width, int height, const osg::Vec4f & color)\nClass arguments details:\narg 5 ID = 92303235\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		int width=(int)lua_tointeger(L,4);
		int height=(int)lua_tointeger(L,5);
		const osg::Vec4f* color_ptr=(Luna< osg::Vec4f >::check(L,6));
		if( !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in osgUtil::SceneView::public_clearArea function");
		}
		const osg::Vec4f & color=*color_ptr;

		wrapper_osgUtil_SceneView* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_SceneView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::SceneView::public_clearArea(int, int, int, int, const osg::Vec4f &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_clearArea(x, y, width, height, color);

		return 0;
	}

	// void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const
	static int _bind_public_signalObserversAndDelete(lua_State *L) {
		if (!_lg_typecheck_public_signalObserversAndDelete(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const function, expected prototype:\nvoid osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool signalDelete=(bool)(lua_toboolean(L,2)==1);
		bool doDelete=(bool)(lua_toboolean(L,3)==1);

		wrapper_osgUtil_SceneView* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_SceneView >(L,1);
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


		wrapper_osgUtil_SceneView* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_SceneView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"computeLeftEyeViewport",_bind_public_computeLeftEyeViewport},
		{"computeRightEyeViewport",_bind_public_computeRightEyeViewport},
		{"computeMVPW",_bind_public_computeMVPW},
		{"clearArea",_bind_public_clearArea},
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

