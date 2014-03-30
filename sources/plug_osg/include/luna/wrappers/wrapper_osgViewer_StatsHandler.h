#ifndef _WRAPPERS_WRAPPER_OSGVIEWER_STATSHANDLER_H_
#define _WRAPPERS_WRAPPER_OSGVIEWER_STATSHANDLER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osgViewer/ViewerEventHandlers>

class wrapper_osgViewer_StatsHandler : public osgViewer::StatsHandler, public luna_wrapper_base {

public:
		

	~wrapper_osgViewer_StatsHandler() {
		logDEBUG3("Calling delete function for wrapper osgViewer_StatsHandler");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osgViewer::StatsHandler*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgViewer_StatsHandler(lua_State* L, lua_Table* dum) 
		: osgViewer::StatsHandler(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgViewer::StatsHandler*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void osg::Object::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg((osgViewer::StatsHandler*)this);
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return StatsHandler::setThreadSafeRefUnref(threadSafe);
	};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg((osgViewer::StatsHandler*)this);
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return StatsHandler::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			_obj.pushArg((osgViewer::StatsHandler*)this);
			return (_obj.callFunction<void>());
		}

		return StatsHandler::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg((osgViewer::StatsHandler*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return StatsHandler::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osgViewer::StatsHandler*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return StatsHandler::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osgViewer::StatsHandler*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return StatsHandler::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg((osgViewer::StatsHandler*)this);
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return StatsHandler::releaseGLObjects(arg1);
	};

	// osg::Object * osgGA::GUIEventHandler::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			_obj.pushArg((osgViewer::StatsHandler*)this);
			return (_obj.callFunction<osg::Object*>());
		}

		return StatsHandler::cloneType();
	};

	// osg::Object * osgGA::GUIEventHandler::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg((osgViewer::StatsHandler*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return StatsHandler::clone(arg1);
	};

	// bool osgGA::GUIEventHandler::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg((osgViewer::StatsHandler*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return StatsHandler::isSameKindAs(obj);
	};

	// const char * osgGA::GUIEventHandler::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			_obj.pushArg((osgViewer::StatsHandler*)this);
			return (_obj.callFunction<const char*>());
		}

		return StatsHandler::libraryName();
	};

	// const char * osgGA::GUIEventHandler::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			_obj.pushArg((osgViewer::StatsHandler*)this);
			return (_obj.callFunction<const char*>());
		}

		return StatsHandler::className();
	};

	// void osgGA::GUIEventHandler::event(osg::NodeVisitor * nv, osg::Drawable * drawable)
	void event(osg::NodeVisitor * nv, osg::Drawable * drawable) {
		if(_obj.pushFunction("event")) {
			_obj.pushArg((osgViewer::StatsHandler*)this);
			_obj.pushArg(nv);
			_obj.pushArg(drawable);
			return (_obj.callFunction<void>());
		}

		return StatsHandler::event(nv, drawable);
	};

	// void osgGA::GUIEventHandler::operator()(osg::Node * node, osg::NodeVisitor * nv)
	void operator()(osg::Node * node, osg::NodeVisitor * nv) {
		if(_obj.pushFunction("op_call")) {
			_obj.pushArg((osgViewer::StatsHandler*)this);
			_obj.pushArg(node);
			_obj.pushArg(nv);
			return (_obj.callFunction<void>());
		}

		return StatsHandler::operator()(node, nv);
	};

	// bool osgViewer::StatsHandler::handle(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)
	bool handle(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2) {
		if(_obj.pushFunction("handle")) {
			_obj.pushArg((osgViewer::StatsHandler*)this);
			_obj.pushArg(&arg1);
			_obj.pushArg(&arg2);
			return (_obj.callFunction<bool>());
		}

		return StatsHandler::handle(arg1, arg2);
	};

	// void osgViewer::StatsHandler::getUsage(osg::ApplicationUsage & usage) const
	void getUsage(osg::ApplicationUsage & usage) const {
		if(_obj.pushFunction("getUsage")) {
			_obj.pushArg((osgViewer::StatsHandler*)this);
			_obj.pushArg(&usage);
			return (_obj.callFunction<void>());
		}

		return StatsHandler::getUsage(usage);
	};


	// Protected non-virtual methods:
	// void osgViewer::StatsHandler::setUpHUDCamera(osgViewer::ViewerBase * viewer)
	void public_setUpHUDCamera(osgViewer::ViewerBase * viewer) {
		return osgViewer::StatsHandler::setUpHUDCamera(viewer);
	};

	// void osgViewer::StatsHandler::setWindowSize(int width, int height)
	void public_setWindowSize(int width, int height) {
		return osgViewer::StatsHandler::setWindowSize(width, height);
	};

	// osg::Geometry * osgViewer::StatsHandler::createBackgroundRectangle(const osg::Vec3f & pos, const float width, const float height, osg::Vec4f & color)
	osg::Geometry * public_createBackgroundRectangle(const osg::Vec3f & pos, const float width, const float height, osg::Vec4f & color) {
		return osgViewer::StatsHandler::createBackgroundRectangle(pos, width, height, color);
	};

	// osg::Geometry * osgViewer::StatsHandler::createGeometry(const osg::Vec3f & pos, float height, const osg::Vec4f & colour, unsigned int numBlocks)
	osg::Geometry * public_createGeometry(const osg::Vec3f & pos, float height, const osg::Vec4f & colour, unsigned int numBlocks) {
		return osgViewer::StatsHandler::createGeometry(pos, height, colour, numBlocks);
	};

	// osg::Geometry * osgViewer::StatsHandler::createFrameMarkers(const osg::Vec3f & pos, float height, const osg::Vec4f & colour, unsigned int numBlocks)
	osg::Geometry * public_createFrameMarkers(const osg::Vec3f & pos, float height, const osg::Vec4f & colour, unsigned int numBlocks) {
		return osgViewer::StatsHandler::createFrameMarkers(pos, height, colour, numBlocks);
	};

	// osg::Geometry * osgViewer::StatsHandler::createTick(const osg::Vec3f & pos, float height, const osg::Vec4f & colour, unsigned int numTicks)
	osg::Geometry * public_createTick(const osg::Vec3f & pos, float height, const osg::Vec4f & colour, unsigned int numTicks) {
		return osgViewer::StatsHandler::createTick(pos, height, colour, numTicks);
	};

	// void osgViewer::StatsHandler::createTimeStatsLine(const std::string & lineLabel, osg::Vec3f pos, const osg::Vec4f & textColor, const osg::Vec4f & barColor, osg::Stats * viewerStats, osg::Stats * stats, const std::string & timeTakenName, float multiplier, bool average, bool averageInInverseSpace, const std::string & beginTimeName, const std::string & endTimeName)
	void public_createTimeStatsLine(const std::string & lineLabel, osg::Vec3f pos, const osg::Vec4f & textColor, const osg::Vec4f & barColor, osg::Stats * viewerStats, osg::Stats * stats, const std::string & timeTakenName, float multiplier, bool average, bool averageInInverseSpace, const std::string & beginTimeName, const std::string & endTimeName) {
		return osgViewer::StatsHandler::createTimeStatsLine(lineLabel, pos, textColor, barColor, viewerStats, stats, timeTakenName, multiplier, average, averageInInverseSpace, beginTimeName, endTimeName);
	};

	// void osgViewer::StatsHandler::createCameraTimeStats(osg::Vec3f & pos, bool acquireGPUStats, osg::Stats * viewerStats, osg::Camera * camera)
	void public_createCameraTimeStats(osg::Vec3f & pos, bool acquireGPUStats, osg::Stats * viewerStats, osg::Camera * camera) {
		return osgViewer::StatsHandler::createCameraTimeStats(pos, acquireGPUStats, viewerStats, camera);
	};

	// void osgViewer::StatsHandler::setUpScene(osgViewer::ViewerBase * viewer)
	void public_setUpScene(osgViewer::ViewerBase * viewer) {
		return osgViewer::StatsHandler::setUpScene(viewer);
	};

	// void osgViewer::StatsHandler::updateThreadingModelText()
	void public_updateThreadingModelText() {
		return osgViewer::StatsHandler::updateThreadingModelText();
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
	inline static bool _lg_typecheck_public_setUpHUDCamera(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_setWindowSize(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_createBackgroundRectangle(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,5,92303235) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_createGeometry(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92303235) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_createFrameMarkers(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92303235) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_createTick(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92303235) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_createTimeStatsLine(lua_State *L) {
		if( lua_gettop(L)!=13 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303204) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92303235) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,92303235) ) return false;
		if( (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,50169651)) ) return false;
		if( (lua_isnil(L,7)==0 && !Luna<void>::has_uniqueid(L,7,50169651)) ) return false;
		if( lua_type(L,8)!=LUA_TSTRING ) return false;
		if( lua_type(L,9)!=LUA_TNUMBER ) return false;
		if( lua_isboolean(L,10)==0 ) return false;
		if( lua_isboolean(L,11)==0 ) return false;
		if( lua_type(L,12)!=LUA_TSTRING ) return false;
		if( lua_type(L,13)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_createCameraTimeStats(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_setUpScene(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_updateThreadingModelText(lua_State *L) {
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
	// void osgViewer::StatsHandler::public_setUpHUDCamera(osgViewer::ViewerBase * viewer)
	static int _bind_public_setUpHUDCamera(lua_State *L) {
		if (!_lg_typecheck_public_setUpHUDCamera(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::StatsHandler::public_setUpHUDCamera(osgViewer::ViewerBase * viewer) function, expected prototype:\nvoid osgViewer::StatsHandler::public_setUpHUDCamera(osgViewer::ViewerBase * viewer)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgViewer::ViewerBase* viewer=(Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,2));

		wrapper_osgViewer_StatsHandler* self=Luna< osg::Referenced >::checkSubType< wrapper_osgViewer_StatsHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::StatsHandler::public_setUpHUDCamera(osgViewer::ViewerBase *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_setUpHUDCamera(viewer);

		return 0;
	}

	// void osgViewer::StatsHandler::public_setWindowSize(int width, int height)
	static int _bind_public_setWindowSize(lua_State *L) {
		if (!_lg_typecheck_public_setWindowSize(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::StatsHandler::public_setWindowSize(int width, int height) function, expected prototype:\nvoid osgViewer::StatsHandler::public_setWindowSize(int width, int height)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int width=(int)lua_tointeger(L,2);
		int height=(int)lua_tointeger(L,3);

		wrapper_osgViewer_StatsHandler* self=Luna< osg::Referenced >::checkSubType< wrapper_osgViewer_StatsHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::StatsHandler::public_setWindowSize(int, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_setWindowSize(width, height);

		return 0;
	}

	// osg::Geometry * osgViewer::StatsHandler::public_createBackgroundRectangle(const osg::Vec3f & pos, const float width, const float height, osg::Vec4f & color)
	static int _bind_public_createBackgroundRectangle(lua_State *L) {
		if (!_lg_typecheck_public_createBackgroundRectangle(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geometry * osgViewer::StatsHandler::public_createBackgroundRectangle(const osg::Vec3f & pos, const float width, const float height, osg::Vec4f & color) function, expected prototype:\nosg::Geometry * osgViewer::StatsHandler::public_createBackgroundRectangle(const osg::Vec3f & pos, const float width, const float height, osg::Vec4f & color)\nClass arguments details:\narg 1 ID = 92303204\narg 4 ID = 92303235\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* pos_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in osgViewer::StatsHandler::public_createBackgroundRectangle function");
		}
		const osg::Vec3f & pos=*pos_ptr;
		const float width=(const float)lua_tonumber(L,3);
		const float height=(const float)lua_tonumber(L,4);
		osg::Vec4f* color_ptr=(Luna< osg::Vec4f >::check(L,5));
		if( !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in osgViewer::StatsHandler::public_createBackgroundRectangle function");
		}
		osg::Vec4f & color=*color_ptr;

		wrapper_osgViewer_StatsHandler* self=Luna< osg::Referenced >::checkSubType< wrapper_osgViewer_StatsHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Geometry * osgViewer::StatsHandler::public_createBackgroundRectangle(const osg::Vec3f &, const float, const float, osg::Vec4f &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Geometry * lret = self->public_createBackgroundRectangle(pos, width, height, color);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geometry >::push(L,lret,false);

		return 1;
	}

	// osg::Geometry * osgViewer::StatsHandler::public_createGeometry(const osg::Vec3f & pos, float height, const osg::Vec4f & colour, unsigned int numBlocks)
	static int _bind_public_createGeometry(lua_State *L) {
		if (!_lg_typecheck_public_createGeometry(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geometry * osgViewer::StatsHandler::public_createGeometry(const osg::Vec3f & pos, float height, const osg::Vec4f & colour, unsigned int numBlocks) function, expected prototype:\nosg::Geometry * osgViewer::StatsHandler::public_createGeometry(const osg::Vec3f & pos, float height, const osg::Vec4f & colour, unsigned int numBlocks)\nClass arguments details:\narg 1 ID = 92303204\narg 3 ID = 92303235\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* pos_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in osgViewer::StatsHandler::public_createGeometry function");
		}
		const osg::Vec3f & pos=*pos_ptr;
		float height=(float)lua_tonumber(L,3);
		const osg::Vec4f* colour_ptr=(Luna< osg::Vec4f >::check(L,4));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in osgViewer::StatsHandler::public_createGeometry function");
		}
		const osg::Vec4f & colour=*colour_ptr;
		unsigned int numBlocks=(unsigned int)lua_tointeger(L,5);

		wrapper_osgViewer_StatsHandler* self=Luna< osg::Referenced >::checkSubType< wrapper_osgViewer_StatsHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Geometry * osgViewer::StatsHandler::public_createGeometry(const osg::Vec3f &, float, const osg::Vec4f &, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Geometry * lret = self->public_createGeometry(pos, height, colour, numBlocks);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geometry >::push(L,lret,false);

		return 1;
	}

	// osg::Geometry * osgViewer::StatsHandler::public_createFrameMarkers(const osg::Vec3f & pos, float height, const osg::Vec4f & colour, unsigned int numBlocks)
	static int _bind_public_createFrameMarkers(lua_State *L) {
		if (!_lg_typecheck_public_createFrameMarkers(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geometry * osgViewer::StatsHandler::public_createFrameMarkers(const osg::Vec3f & pos, float height, const osg::Vec4f & colour, unsigned int numBlocks) function, expected prototype:\nosg::Geometry * osgViewer::StatsHandler::public_createFrameMarkers(const osg::Vec3f & pos, float height, const osg::Vec4f & colour, unsigned int numBlocks)\nClass arguments details:\narg 1 ID = 92303204\narg 3 ID = 92303235\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* pos_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in osgViewer::StatsHandler::public_createFrameMarkers function");
		}
		const osg::Vec3f & pos=*pos_ptr;
		float height=(float)lua_tonumber(L,3);
		const osg::Vec4f* colour_ptr=(Luna< osg::Vec4f >::check(L,4));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in osgViewer::StatsHandler::public_createFrameMarkers function");
		}
		const osg::Vec4f & colour=*colour_ptr;
		unsigned int numBlocks=(unsigned int)lua_tointeger(L,5);

		wrapper_osgViewer_StatsHandler* self=Luna< osg::Referenced >::checkSubType< wrapper_osgViewer_StatsHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Geometry * osgViewer::StatsHandler::public_createFrameMarkers(const osg::Vec3f &, float, const osg::Vec4f &, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Geometry * lret = self->public_createFrameMarkers(pos, height, colour, numBlocks);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geometry >::push(L,lret,false);

		return 1;
	}

	// osg::Geometry * osgViewer::StatsHandler::public_createTick(const osg::Vec3f & pos, float height, const osg::Vec4f & colour, unsigned int numTicks)
	static int _bind_public_createTick(lua_State *L) {
		if (!_lg_typecheck_public_createTick(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geometry * osgViewer::StatsHandler::public_createTick(const osg::Vec3f & pos, float height, const osg::Vec4f & colour, unsigned int numTicks) function, expected prototype:\nosg::Geometry * osgViewer::StatsHandler::public_createTick(const osg::Vec3f & pos, float height, const osg::Vec4f & colour, unsigned int numTicks)\nClass arguments details:\narg 1 ID = 92303204\narg 3 ID = 92303235\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* pos_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in osgViewer::StatsHandler::public_createTick function");
		}
		const osg::Vec3f & pos=*pos_ptr;
		float height=(float)lua_tonumber(L,3);
		const osg::Vec4f* colour_ptr=(Luna< osg::Vec4f >::check(L,4));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in osgViewer::StatsHandler::public_createTick function");
		}
		const osg::Vec4f & colour=*colour_ptr;
		unsigned int numTicks=(unsigned int)lua_tointeger(L,5);

		wrapper_osgViewer_StatsHandler* self=Luna< osg::Referenced >::checkSubType< wrapper_osgViewer_StatsHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Geometry * osgViewer::StatsHandler::public_createTick(const osg::Vec3f &, float, const osg::Vec4f &, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Geometry * lret = self->public_createTick(pos, height, colour, numTicks);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geometry >::push(L,lret,false);

		return 1;
	}

	// void osgViewer::StatsHandler::public_createTimeStatsLine(const std::string & lineLabel, osg::Vec3f pos, const osg::Vec4f & textColor, const osg::Vec4f & barColor, osg::Stats * viewerStats, osg::Stats * stats, const std::string & timeTakenName, float multiplier, bool average, bool averageInInverseSpace, const std::string & beginTimeName, const std::string & endTimeName)
	static int _bind_public_createTimeStatsLine(lua_State *L) {
		if (!_lg_typecheck_public_createTimeStatsLine(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::StatsHandler::public_createTimeStatsLine(const std::string & lineLabel, osg::Vec3f pos, const osg::Vec4f & textColor, const osg::Vec4f & barColor, osg::Stats * viewerStats, osg::Stats * stats, const std::string & timeTakenName, float multiplier, bool average, bool averageInInverseSpace, const std::string & beginTimeName, const std::string & endTimeName) function, expected prototype:\nvoid osgViewer::StatsHandler::public_createTimeStatsLine(const std::string & lineLabel, osg::Vec3f pos, const osg::Vec4f & textColor, const osg::Vec4f & barColor, osg::Stats * viewerStats, osg::Stats * stats, const std::string & timeTakenName, float multiplier, bool average, bool averageInInverseSpace, const std::string & beginTimeName, const std::string & endTimeName)\nClass arguments details:\narg 2 ID = 92303204\narg 3 ID = 92303235\narg 4 ID = 92303235\narg 5 ID = 50169651\narg 6 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string lineLabel(lua_tostring(L,2),lua_objlen(L,2));
		osg::Vec3f* pos_ptr=(Luna< osg::Vec3f >::check(L,3));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in osgViewer::StatsHandler::public_createTimeStatsLine function");
		}
		osg::Vec3f pos=*pos_ptr;
		const osg::Vec4f* textColor_ptr=(Luna< osg::Vec4f >::check(L,4));
		if( !textColor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg textColor in osgViewer::StatsHandler::public_createTimeStatsLine function");
		}
		const osg::Vec4f & textColor=*textColor_ptr;
		const osg::Vec4f* barColor_ptr=(Luna< osg::Vec4f >::check(L,5));
		if( !barColor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg barColor in osgViewer::StatsHandler::public_createTimeStatsLine function");
		}
		const osg::Vec4f & barColor=*barColor_ptr;
		osg::Stats* viewerStats=(Luna< osg::Referenced >::checkSubType< osg::Stats >(L,6));
		osg::Stats* stats=(Luna< osg::Referenced >::checkSubType< osg::Stats >(L,7));
		std::string timeTakenName(lua_tostring(L,8),lua_objlen(L,8));
		float multiplier=(float)lua_tonumber(L,9);
		bool average=(bool)(lua_toboolean(L,10)==1);
		bool averageInInverseSpace=(bool)(lua_toboolean(L,11)==1);
		std::string beginTimeName(lua_tostring(L,12),lua_objlen(L,12));
		std::string endTimeName(lua_tostring(L,13),lua_objlen(L,13));

		wrapper_osgViewer_StatsHandler* self=Luna< osg::Referenced >::checkSubType< wrapper_osgViewer_StatsHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::StatsHandler::public_createTimeStatsLine(const std::string &, osg::Vec3f, const osg::Vec4f &, const osg::Vec4f &, osg::Stats *, osg::Stats *, const std::string &, float, bool, bool, const std::string &, const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_createTimeStatsLine(lineLabel, pos, textColor, barColor, viewerStats, stats, timeTakenName, multiplier, average, averageInInverseSpace, beginTimeName, endTimeName);

		return 0;
	}

	// void osgViewer::StatsHandler::public_createCameraTimeStats(osg::Vec3f & pos, bool acquireGPUStats, osg::Stats * viewerStats, osg::Camera * camera)
	static int _bind_public_createCameraTimeStats(lua_State *L) {
		if (!_lg_typecheck_public_createCameraTimeStats(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::StatsHandler::public_createCameraTimeStats(osg::Vec3f & pos, bool acquireGPUStats, osg::Stats * viewerStats, osg::Camera * camera) function, expected prototype:\nvoid osgViewer::StatsHandler::public_createCameraTimeStats(osg::Vec3f & pos, bool acquireGPUStats, osg::Stats * viewerStats, osg::Camera * camera)\nClass arguments details:\narg 1 ID = 92303204\narg 3 ID = 50169651\narg 4 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec3f* pos_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in osgViewer::StatsHandler::public_createCameraTimeStats function");
		}
		osg::Vec3f & pos=*pos_ptr;
		bool acquireGPUStats=(bool)(lua_toboolean(L,3)==1);
		osg::Stats* viewerStats=(Luna< osg::Referenced >::checkSubType< osg::Stats >(L,4));
		osg::Camera* camera=(Luna< osg::Referenced >::checkSubType< osg::Camera >(L,5));

		wrapper_osgViewer_StatsHandler* self=Luna< osg::Referenced >::checkSubType< wrapper_osgViewer_StatsHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::StatsHandler::public_createCameraTimeStats(osg::Vec3f &, bool, osg::Stats *, osg::Camera *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_createCameraTimeStats(pos, acquireGPUStats, viewerStats, camera);

		return 0;
	}

	// void osgViewer::StatsHandler::public_setUpScene(osgViewer::ViewerBase * viewer)
	static int _bind_public_setUpScene(lua_State *L) {
		if (!_lg_typecheck_public_setUpScene(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::StatsHandler::public_setUpScene(osgViewer::ViewerBase * viewer) function, expected prototype:\nvoid osgViewer::StatsHandler::public_setUpScene(osgViewer::ViewerBase * viewer)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgViewer::ViewerBase* viewer=(Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,2));

		wrapper_osgViewer_StatsHandler* self=Luna< osg::Referenced >::checkSubType< wrapper_osgViewer_StatsHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::StatsHandler::public_setUpScene(osgViewer::ViewerBase *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_setUpScene(viewer);

		return 0;
	}

	// void osgViewer::StatsHandler::public_updateThreadingModelText()
	static int _bind_public_updateThreadingModelText(lua_State *L) {
		if (!_lg_typecheck_public_updateThreadingModelText(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::StatsHandler::public_updateThreadingModelText() function, expected prototype:\nvoid osgViewer::StatsHandler::public_updateThreadingModelText()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_osgViewer_StatsHandler* self=Luna< osg::Referenced >::checkSubType< wrapper_osgViewer_StatsHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::StatsHandler::public_updateThreadingModelText(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_updateThreadingModelText();

		return 0;
	}

	// void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const
	static int _bind_public_signalObserversAndDelete(lua_State *L) {
		if (!_lg_typecheck_public_signalObserversAndDelete(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const function, expected prototype:\nvoid osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool signalDelete=(bool)(lua_toboolean(L,2)==1);
		bool doDelete=(bool)(lua_toboolean(L,3)==1);

		wrapper_osgViewer_StatsHandler* self=Luna< osg::Referenced >::checkSubType< wrapper_osgViewer_StatsHandler >(L,1);
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


		wrapper_osgViewer_StatsHandler* self=Luna< osg::Referenced >::checkSubType< wrapper_osgViewer_StatsHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"setUpHUDCamera",_bind_public_setUpHUDCamera},
		{"setWindowSize",_bind_public_setWindowSize},
		{"createBackgroundRectangle",_bind_public_createBackgroundRectangle},
		{"createGeometry",_bind_public_createGeometry},
		{"createFrameMarkers",_bind_public_createFrameMarkers},
		{"createTick",_bind_public_createTick},
		{"createTimeStatsLine",_bind_public_createTimeStatsLine},
		{"createCameraTimeStats",_bind_public_createCameraTimeStats},
		{"setUpScene",_bind_public_setUpScene},
		{"updateThreadingModelText",_bind_public_updateThreadingModelText},
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

