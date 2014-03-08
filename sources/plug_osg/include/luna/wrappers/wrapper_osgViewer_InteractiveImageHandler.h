#ifndef _WRAPPERS_WRAPPER_OSGVIEWER_INTERACTIVEIMAGEHANDLER_H_
#define _WRAPPERS_WRAPPER_OSGVIEWER_INTERACTIVEIMAGEHANDLER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osgViewer/ViewerEventHandlers>

class wrapper_osgViewer_InteractiveImageHandler : public osgViewer::InteractiveImageHandler, public luna_wrapper_base {

public:
		

	~wrapper_osgViewer_InteractiveImageHandler() {
		logDEBUG3("Calling delete function for wrapper osgViewer_InteractiveImageHandler");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osgViewer::InteractiveImageHandler*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgViewer_InteractiveImageHandler(lua_State* L, lua_Table* dum, osg::Image * image) 
		: osgViewer::InteractiveImageHandler(image), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgViewer::InteractiveImageHandler*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_osgViewer_InteractiveImageHandler(lua_State* L, lua_Table* dum, osg::Image * image, osg::Texture2D * texture, osg::Camera * camera) 
		: osgViewer::InteractiveImageHandler(image, texture, camera), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgViewer::InteractiveImageHandler*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_osgViewer_InteractiveImageHandler(lua_State* L, lua_Table* dum) 
		: osgViewer::InteractiveImageHandler(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgViewer::InteractiveImageHandler*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_osgViewer_InteractiveImageHandler(lua_State* L, lua_Table* dum, const osgViewer::InteractiveImageHandler & arg1, const osg::CopyOp & arg2 = osg::CopyOp::SHALLOW_COPY) 
		: osgViewer::InteractiveImageHandler(arg1, arg2), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgViewer::InteractiveImageHandler*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void osg::Object::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg((osgViewer::InteractiveImageHandler*)this);
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return InteractiveImageHandler::setThreadSafeRefUnref(threadSafe);
	};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg((osgViewer::InteractiveImageHandler*)this);
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return InteractiveImageHandler::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			_obj.pushArg((osgViewer::InteractiveImageHandler*)this);
			return (_obj.callFunction<void>());
		}

		return InteractiveImageHandler::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg((osgViewer::InteractiveImageHandler*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return InteractiveImageHandler::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osgViewer::InteractiveImageHandler*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return InteractiveImageHandler::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osgViewer::InteractiveImageHandler*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return InteractiveImageHandler::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg((osgViewer::InteractiveImageHandler*)this);
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return InteractiveImageHandler::releaseGLObjects(arg1);
	};

	// void osgGA::GUIEventHandler::event(osg::NodeVisitor * nv, osg::Drawable * drawable)
	void event(osg::NodeVisitor * nv, osg::Drawable * drawable) {
		if(_obj.pushFunction("event")) {
			_obj.pushArg((osgViewer::InteractiveImageHandler*)this);
			_obj.pushArg(nv);
			_obj.pushArg(drawable);
			return (_obj.callFunction<void>());
		}

		return InteractiveImageHandler::event(nv, drawable);
	};

	// void osgGA::GUIEventHandler::getUsage(osg::ApplicationUsage & arg1) const
	void getUsage(osg::ApplicationUsage & arg1) const {
		if(_obj.pushFunction("getUsage")) {
			_obj.pushArg((osgViewer::InteractiveImageHandler*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return InteractiveImageHandler::getUsage(arg1);
	};

	// void osgGA::GUIEventHandler::operator()(osg::Node * node, osg::NodeVisitor * nv)
	void operator()(osg::Node * node, osg::NodeVisitor * nv) {
		if(_obj.pushFunction("op_call")) {
			_obj.pushArg((osgViewer::InteractiveImageHandler*)this);
			_obj.pushArg(node);
			_obj.pushArg(nv);
			return (_obj.callFunction<void>());
		}

		return InteractiveImageHandler::operator()(node, nv);
	};

	// osg::Object * osgViewer::InteractiveImageHandler::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			_obj.pushArg((osgViewer::InteractiveImageHandler*)this);
			return (_obj.callFunction<osg::Object*>());
		}

		return InteractiveImageHandler::cloneType();
	};

	// osg::Object * osgViewer::InteractiveImageHandler::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg((osgViewer::InteractiveImageHandler*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return InteractiveImageHandler::clone(arg1);
	};

	// bool osgViewer::InteractiveImageHandler::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg((osgViewer::InteractiveImageHandler*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return InteractiveImageHandler::isSameKindAs(obj);
	};

	// const char * osgViewer::InteractiveImageHandler::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			_obj.pushArg((osgViewer::InteractiveImageHandler*)this);
			return (_obj.callFunction<const char*>());
		}

		return InteractiveImageHandler::libraryName();
	};

	// const char * osgViewer::InteractiveImageHandler::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			_obj.pushArg((osgViewer::InteractiveImageHandler*)this);
			return (_obj.callFunction<const char*>());
		}

		return InteractiveImageHandler::className();
	};

	// bool osgViewer::InteractiveImageHandler::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & aa, osg::Object * arg3, osg::NodeVisitor * arg4)
	bool handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & aa, osg::Object * arg3, osg::NodeVisitor * arg4) {
		if(_obj.pushFunction("handle")) {
			_obj.pushArg((osgViewer::InteractiveImageHandler*)this);
			_obj.pushArg(&ea);
			_obj.pushArg(&aa);
			_obj.pushArg(arg3);
			_obj.pushArg(arg4);
			return (_obj.callFunction<bool>());
		}

		return InteractiveImageHandler::handle(ea, aa, arg3, arg4);
	};

	// bool osgViewer::InteractiveImageHandler::cull(osg::NodeVisitor * nv, osg::Drawable * drawable, osg::RenderInfo * renderInfo) const
	bool cull(osg::NodeVisitor * nv, osg::Drawable * drawable, osg::RenderInfo * renderInfo) const {
		if(_obj.pushFunction("cull")) {
			_obj.pushArg((osgViewer::InteractiveImageHandler*)this);
			_obj.pushArg(nv);
			_obj.pushArg(drawable);
			_obj.pushArg(renderInfo);
			return (_obj.callFunction<bool>());
		}

		return InteractiveImageHandler::cull(nv, drawable, renderInfo);
	};


	// Protected non-virtual methods:
	// bool osgViewer::InteractiveImageHandler::mousePosition(osgViewer::View * view, osg::NodeVisitor * nv, const osgGA::GUIEventAdapter & ea, int & x, int & y) const
	bool public_mousePosition(osgViewer::View * view, osg::NodeVisitor * nv, const osgGA::GUIEventAdapter & ea, int & x, int & y) const {
		return osgViewer::InteractiveImageHandler::mousePosition(view, nv, ea, x, y);
	};

	// bool osgViewer::InteractiveImageHandler::computeIntersections(osgViewer::View * view, float x, float y, const osg::NodePath & nodePath, osgUtil::LineSegmentIntersector::Intersections & intersections, unsigned int traversalMask = 0xffffffff) const
	bool public_computeIntersections(osgViewer::View * view, float x, float y, const osg::NodePath & nodePath, osgUtil::LineSegmentIntersector::Intersections & intersections, unsigned int traversalMask = 0xffffffff) const {
		return osgViewer::InteractiveImageHandler::computeIntersections(view, x, y, nodePath, intersections, traversalMask);
	};

	// void osgViewer::InteractiveImageHandler::resize(int width, int height)
	void public_resize(int width, int height) {
		return osgViewer::InteractiveImageHandler::resize(width, height);
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
	inline static bool _lg_typecheck_public_mousePosition(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,50169651) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_computeIntersections(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<6 || luatop>7 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,5,52841328) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,9645394) ) return false;
		if( luatop>6 && (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_resize(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
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
	// bool osgViewer::InteractiveImageHandler::public_mousePosition(osgViewer::View * view, osg::NodeVisitor * nv, const osgGA::GUIEventAdapter & ea, int & x, int & y) const
	static int _bind_public_mousePosition(lua_State *L) {
		if (!_lg_typecheck_public_mousePosition(L)) {
			luaL_error(L, "luna typecheck failed in bool osgViewer::InteractiveImageHandler::public_mousePosition(osgViewer::View * view, osg::NodeVisitor * nv, const osgGA::GUIEventAdapter & ea, int & x, int & y) const function, expected prototype:\nbool osgViewer::InteractiveImageHandler::public_mousePosition(osgViewer::View * view, osg::NodeVisitor * nv, const osgGA::GUIEventAdapter & ea, int & x, int & y) const\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgViewer::View* view=(Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,2));
		osg::NodeVisitor* nv=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,3));
		const osgGA::GUIEventAdapter* ea_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,4));
		if( !ea_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ea in osgViewer::InteractiveImageHandler::public_mousePosition function");
		}
		const osgGA::GUIEventAdapter & ea=*ea_ptr;
		int x=(int)lua_tointeger(L,5);
		int y=(int)lua_tointeger(L,6);

		wrapper_osgViewer_InteractiveImageHandler* self=Luna< osg::Referenced >::checkSubType< wrapper_osgViewer_InteractiveImageHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgViewer::InteractiveImageHandler::public_mousePosition(osgViewer::View *, osg::NodeVisitor *, const osgGA::GUIEventAdapter &, int &, int &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->public_mousePosition(view, nv, ea, x, y);
		lua_pushboolean(L,lret?1:0);

		lua_pushnumber(L,x);
		lua_pushnumber(L,y);
		return 3;
	}

	// bool osgViewer::InteractiveImageHandler::public_computeIntersections(osgViewer::View * view, float x, float y, const osg::NodePath & nodePath, osgUtil::LineSegmentIntersector::Intersections & intersections, unsigned int traversalMask = 0xffffffff) const
	static int _bind_public_computeIntersections(lua_State *L) {
		if (!_lg_typecheck_public_computeIntersections(L)) {
			luaL_error(L, "luna typecheck failed in bool osgViewer::InteractiveImageHandler::public_computeIntersections(osgViewer::View * view, float x, float y, const osg::NodePath & nodePath, osgUtil::LineSegmentIntersector::Intersections & intersections, unsigned int traversalMask = 0xffffffff) const function, expected prototype:\nbool osgViewer::InteractiveImageHandler::public_computeIntersections(osgViewer::View * view, float x, float y, const osg::NodePath & nodePath, osgUtil::LineSegmentIntersector::Intersections & intersections, unsigned int traversalMask = 0xffffffff) const\nClass arguments details:\narg 1 ID = 50169651\narg 4 ID = 52841328\narg 5 ID = 19574398\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osgViewer::View* view=(Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,2));
		float x=(float)lua_tonumber(L,3);
		float y=(float)lua_tonumber(L,4);
		const osg::NodePath* nodePath_ptr=(Luna< osg::NodePath >::check(L,5));
		if( !nodePath_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nodePath in osgViewer::InteractiveImageHandler::public_computeIntersections function");
		}
		const osg::NodePath & nodePath=*nodePath_ptr;
		osgUtil::LineSegmentIntersector::Intersections* intersections_ptr=(Luna< std::multiset< osgUtil::LineSegmentIntersector::Intersection > >::checkSubType< osgUtil::LineSegmentIntersector::Intersections >(L,6));
		if( !intersections_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg intersections in osgViewer::InteractiveImageHandler::public_computeIntersections function");
		}
		osgUtil::LineSegmentIntersector::Intersections & intersections=*intersections_ptr;
		unsigned int traversalMask=luatop>6 ? (unsigned int)lua_tointeger(L,7) : (unsigned int)0xffffffff;

		wrapper_osgViewer_InteractiveImageHandler* self=Luna< osg::Referenced >::checkSubType< wrapper_osgViewer_InteractiveImageHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgViewer::InteractiveImageHandler::public_computeIntersections(osgViewer::View *, float, float, const osg::NodePath &, osgUtil::LineSegmentIntersector::Intersections &, unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->public_computeIntersections(view, x, y, nodePath, intersections, traversalMask);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgViewer::InteractiveImageHandler::public_resize(int width, int height)
	static int _bind_public_resize(lua_State *L) {
		if (!_lg_typecheck_public_resize(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::InteractiveImageHandler::public_resize(int width, int height) function, expected prototype:\nvoid osgViewer::InteractiveImageHandler::public_resize(int width, int height)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int width=(int)lua_tointeger(L,2);
		int height=(int)lua_tointeger(L,3);

		wrapper_osgViewer_InteractiveImageHandler* self=Luna< osg::Referenced >::checkSubType< wrapper_osgViewer_InteractiveImageHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::InteractiveImageHandler::public_resize(int, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_resize(width, height);

		return 0;
	}

	// void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const
	static int _bind_public_signalObserversAndDelete(lua_State *L) {
		if (!_lg_typecheck_public_signalObserversAndDelete(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const function, expected prototype:\nvoid osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool signalDelete=(bool)(lua_toboolean(L,2)==1);
		bool doDelete=(bool)(lua_toboolean(L,3)==1);

		wrapper_osgViewer_InteractiveImageHandler* self=Luna< osg::Referenced >::checkSubType< wrapper_osgViewer_InteractiveImageHandler >(L,1);
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


		wrapper_osgViewer_InteractiveImageHandler* self=Luna< osg::Referenced >::checkSubType< wrapper_osgViewer_InteractiveImageHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"mousePosition",_bind_public_mousePosition},
		{"computeIntersections",_bind_public_computeIntersections},
		{"resize",_bind_public_resize},
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

