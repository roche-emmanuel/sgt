#include <plug_common.h>

#include <luna/wrappers/wrapper_osgViewer_GraphicsWindowEmbedded.h>

class luna_wrapper_osgViewer_GraphicsWindowEmbedded {
public:
	typedef Luna< osgViewer::GraphicsWindowEmbedded > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<osg::Referenced,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osgViewer::GraphicsWindowEmbedded* self= (osgViewer::GraphicsWindowEmbedded*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgViewer::GraphicsWindowEmbedded >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		//osgViewer::GraphicsWindowEmbedded* ptr= dynamic_cast< osgViewer::GraphicsWindowEmbedded* >(Luna< osg::Referenced >::check(L,1));
		osgViewer::GraphicsWindowEmbedded* ptr= luna_caster< osg::Referenced, osgViewer::GraphicsWindowEmbedded >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgViewer::GraphicsWindowEmbedded >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_GUIActionAdapter(lua_State *L) {
		// all checked are already performed before reaching this point.
		//osgViewer::GraphicsWindowEmbedded* ptr= dynamic_cast< osgViewer::GraphicsWindowEmbedded* >(Luna< osgGA::GUIActionAdapter >::check(L,1));
		osgViewer::GraphicsWindowEmbedded* ptr= luna_caster< osgGA::GUIActionAdapter, osgViewer::GraphicsWindowEmbedded >::cast(Luna< osgGA::GUIActionAdapter >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgViewer::GraphicsWindowEmbedded >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::Traits >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_init(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_valid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_realizeImplementation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isRealizedImplementation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_closeImplementation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_makeCurrentImplementation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_releaseContextImplementation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_swapBuffersImplementation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_grabFocus(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_grabFocusIfPointerInWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_raiseWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_computeDataVariance(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setUserData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getUserData_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getUserData_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_releaseGLObjects(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_runOperations(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_resizedImplementation(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_asView(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_checkEvents(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setWindowRectangleImplementation(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getWindowRectangle(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setWindowDecorationImplementation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getWindowDecoration(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setWindowName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getWindowName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_useCursor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setCursor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setSyncToVBlank(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setSwapGroup(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_bindPBufferToTextureImplementation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_requestRedraw(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_requestContinuousUpdate(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_requestWarpPointer(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_valid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_realizeImplementation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_isRealizedImplementation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_closeImplementation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_makeCurrentImplementation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_releaseContextImplementation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_swapBuffersImplementation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_grabFocus(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_grabFocusIfPointerInWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_raiseWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgViewer::GraphicsWindowEmbedded::GraphicsWindowEmbedded(lua_Table * data, osg::GraphicsContext::Traits * traits = 0)
	static osgViewer::GraphicsWindowEmbedded* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgViewer::GraphicsWindowEmbedded::GraphicsWindowEmbedded(lua_Table * data, osg::GraphicsContext::Traits * traits = 0) function, expected prototype:\nosgViewer::GraphicsWindowEmbedded::GraphicsWindowEmbedded(lua_Table * data, osg::GraphicsContext::Traits * traits = 0)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::GraphicsContext::Traits* traits=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::Traits >(L,2)) : (osg::GraphicsContext::Traits*)0;

		return new wrapper_osgViewer_GraphicsWindowEmbedded(L,NULL, traits);
	}

	// osgViewer::GraphicsWindowEmbedded::GraphicsWindowEmbedded(lua_Table * data, int x, int y, int width, int height)
	static osgViewer::GraphicsWindowEmbedded* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgViewer::GraphicsWindowEmbedded::GraphicsWindowEmbedded(lua_Table * data, int x, int y, int width, int height) function, expected prototype:\nosgViewer::GraphicsWindowEmbedded::GraphicsWindowEmbedded(lua_Table * data, int x, int y, int width, int height)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		int width=(int)lua_tointeger(L,4);
		int height=(int)lua_tointeger(L,5);

		return new wrapper_osgViewer_GraphicsWindowEmbedded(L,NULL, x, y, width, height);
	}

	// Overload binder for osgViewer::GraphicsWindowEmbedded::GraphicsWindowEmbedded
	static osgViewer::GraphicsWindowEmbedded* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function GraphicsWindowEmbedded, cannot match any of the overloads for function GraphicsWindowEmbedded:\n  GraphicsWindowEmbedded(lua_Table *, osg::GraphicsContext::Traits *)\n  GraphicsWindowEmbedded(lua_Table *, int, int, int, int)\n");
		return NULL;
	}


	// Function binds:
	// const char * osgViewer::GraphicsWindowEmbedded::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgViewer::GraphicsWindowEmbedded::libraryName() const function, expected prototype:\nconst char * osgViewer::GraphicsWindowEmbedded::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::GraphicsWindowEmbedded* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindowEmbedded >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgViewer::GraphicsWindowEmbedded::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgViewer::GraphicsWindowEmbedded::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgViewer::GraphicsWindowEmbedded::className() const function, expected prototype:\nconst char * osgViewer::GraphicsWindowEmbedded::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::GraphicsWindowEmbedded* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindowEmbedded >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgViewer::GraphicsWindowEmbedded::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgViewer::GraphicsWindowEmbedded::init()
	static int _bind_init(lua_State *L) {
		if (!_lg_typecheck_init(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindowEmbedded::init() function, expected prototype:\nvoid osgViewer::GraphicsWindowEmbedded::init()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::GraphicsWindowEmbedded* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindowEmbedded >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindowEmbedded::init(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->init();

		return 0;
	}

	// bool osgViewer::GraphicsWindowEmbedded::valid() const
	static int _bind_valid(lua_State *L) {
		if (!_lg_typecheck_valid(L)) {
			luaL_error(L, "luna typecheck failed in bool osgViewer::GraphicsWindowEmbedded::valid() const function, expected prototype:\nbool osgViewer::GraphicsWindowEmbedded::valid() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::GraphicsWindowEmbedded* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindowEmbedded >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgViewer::GraphicsWindowEmbedded::valid() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->valid();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgViewer::GraphicsWindowEmbedded::realizeImplementation()
	static int _bind_realizeImplementation(lua_State *L) {
		if (!_lg_typecheck_realizeImplementation(L)) {
			luaL_error(L, "luna typecheck failed in bool osgViewer::GraphicsWindowEmbedded::realizeImplementation() function, expected prototype:\nbool osgViewer::GraphicsWindowEmbedded::realizeImplementation()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::GraphicsWindowEmbedded* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindowEmbedded >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgViewer::GraphicsWindowEmbedded::realizeImplementation(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->realizeImplementation();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgViewer::GraphicsWindowEmbedded::isRealizedImplementation() const
	static int _bind_isRealizedImplementation(lua_State *L) {
		if (!_lg_typecheck_isRealizedImplementation(L)) {
			luaL_error(L, "luna typecheck failed in bool osgViewer::GraphicsWindowEmbedded::isRealizedImplementation() const function, expected prototype:\nbool osgViewer::GraphicsWindowEmbedded::isRealizedImplementation() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::GraphicsWindowEmbedded* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindowEmbedded >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgViewer::GraphicsWindowEmbedded::isRealizedImplementation() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isRealizedImplementation();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgViewer::GraphicsWindowEmbedded::closeImplementation()
	static int _bind_closeImplementation(lua_State *L) {
		if (!_lg_typecheck_closeImplementation(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindowEmbedded::closeImplementation() function, expected prototype:\nvoid osgViewer::GraphicsWindowEmbedded::closeImplementation()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::GraphicsWindowEmbedded* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindowEmbedded >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindowEmbedded::closeImplementation(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->closeImplementation();

		return 0;
	}

	// bool osgViewer::GraphicsWindowEmbedded::makeCurrentImplementation()
	static int _bind_makeCurrentImplementation(lua_State *L) {
		if (!_lg_typecheck_makeCurrentImplementation(L)) {
			luaL_error(L, "luna typecheck failed in bool osgViewer::GraphicsWindowEmbedded::makeCurrentImplementation() function, expected prototype:\nbool osgViewer::GraphicsWindowEmbedded::makeCurrentImplementation()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::GraphicsWindowEmbedded* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindowEmbedded >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgViewer::GraphicsWindowEmbedded::makeCurrentImplementation(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->makeCurrentImplementation();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgViewer::GraphicsWindowEmbedded::releaseContextImplementation()
	static int _bind_releaseContextImplementation(lua_State *L) {
		if (!_lg_typecheck_releaseContextImplementation(L)) {
			luaL_error(L, "luna typecheck failed in bool osgViewer::GraphicsWindowEmbedded::releaseContextImplementation() function, expected prototype:\nbool osgViewer::GraphicsWindowEmbedded::releaseContextImplementation()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::GraphicsWindowEmbedded* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindowEmbedded >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgViewer::GraphicsWindowEmbedded::releaseContextImplementation(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->releaseContextImplementation();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgViewer::GraphicsWindowEmbedded::swapBuffersImplementation()
	static int _bind_swapBuffersImplementation(lua_State *L) {
		if (!_lg_typecheck_swapBuffersImplementation(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindowEmbedded::swapBuffersImplementation() function, expected prototype:\nvoid osgViewer::GraphicsWindowEmbedded::swapBuffersImplementation()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::GraphicsWindowEmbedded* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindowEmbedded >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindowEmbedded::swapBuffersImplementation(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->swapBuffersImplementation();

		return 0;
	}

	// void osgViewer::GraphicsWindowEmbedded::grabFocus()
	static int _bind_grabFocus(lua_State *L) {
		if (!_lg_typecheck_grabFocus(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindowEmbedded::grabFocus() function, expected prototype:\nvoid osgViewer::GraphicsWindowEmbedded::grabFocus()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::GraphicsWindowEmbedded* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindowEmbedded >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindowEmbedded::grabFocus(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->grabFocus();

		return 0;
	}

	// void osgViewer::GraphicsWindowEmbedded::grabFocusIfPointerInWindow()
	static int _bind_grabFocusIfPointerInWindow(lua_State *L) {
		if (!_lg_typecheck_grabFocusIfPointerInWindow(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindowEmbedded::grabFocusIfPointerInWindow() function, expected prototype:\nvoid osgViewer::GraphicsWindowEmbedded::grabFocusIfPointerInWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::GraphicsWindowEmbedded* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindowEmbedded >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindowEmbedded::grabFocusIfPointerInWindow(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->grabFocusIfPointerInWindow();

		return 0;
	}

	// void osgViewer::GraphicsWindowEmbedded::raiseWindow()
	static int _bind_raiseWindow(lua_State *L) {
		if (!_lg_typecheck_raiseWindow(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindowEmbedded::raiseWindow() function, expected prototype:\nvoid osgViewer::GraphicsWindowEmbedded::raiseWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::GraphicsWindowEmbedded* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindowEmbedded >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindowEmbedded::raiseWindow(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->raiseWindow();

		return 0;
	}

	// void osgViewer::GraphicsWindowEmbedded::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindowEmbedded::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgViewer::GraphicsWindowEmbedded::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgViewer::GraphicsWindowEmbedded* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindowEmbedded >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindowEmbedded::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphicsWindowEmbedded::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osgViewer::GraphicsWindowEmbedded::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindowEmbedded::base_setName(const std::string & name) function, expected prototype:\nvoid osgViewer::GraphicsWindowEmbedded::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgViewer::GraphicsWindowEmbedded* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindowEmbedded >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindowEmbedded::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphicsWindowEmbedded::setName(name);

		return 0;
	}

	// void osgViewer::GraphicsWindowEmbedded::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindowEmbedded::base_computeDataVariance() function, expected prototype:\nvoid osgViewer::GraphicsWindowEmbedded::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::GraphicsWindowEmbedded* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindowEmbedded >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindowEmbedded::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphicsWindowEmbedded::computeDataVariance();

		return 0;
	}

	// void osgViewer::GraphicsWindowEmbedded::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindowEmbedded::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osgViewer::GraphicsWindowEmbedded::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osgViewer::GraphicsWindowEmbedded* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindowEmbedded >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindowEmbedded::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphicsWindowEmbedded::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osgViewer::GraphicsWindowEmbedded::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osgViewer::GraphicsWindowEmbedded::base_getUserData() function, expected prototype:\nosg::Referenced * osgViewer::GraphicsWindowEmbedded::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::GraphicsWindowEmbedded* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindowEmbedded >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osgViewer::GraphicsWindowEmbedded::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->GraphicsWindowEmbedded::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osgViewer::GraphicsWindowEmbedded::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osgViewer::GraphicsWindowEmbedded::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osgViewer::GraphicsWindowEmbedded::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::GraphicsWindowEmbedded* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindowEmbedded >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osgViewer::GraphicsWindowEmbedded::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->GraphicsWindowEmbedded::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgViewer::GraphicsWindowEmbedded::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osgViewer::GraphicsWindowEmbedded::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindowEmbedded::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osgViewer::GraphicsWindowEmbedded::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgViewer::GraphicsWindowEmbedded* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindowEmbedded >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindowEmbedded::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphicsWindowEmbedded::releaseGLObjects(_arg1);

		return 0;
	}

	// void osgViewer::GraphicsWindowEmbedded::base_runOperations()
	static int _bind_base_runOperations(lua_State *L) {
		if (!_lg_typecheck_base_runOperations(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindowEmbedded::base_runOperations() function, expected prototype:\nvoid osgViewer::GraphicsWindowEmbedded::base_runOperations()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::GraphicsWindowEmbedded* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindowEmbedded >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindowEmbedded::base_runOperations(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphicsWindowEmbedded::runOperations();

		return 0;
	}

	// void osgViewer::GraphicsWindowEmbedded::base_clear()
	static int _bind_base_clear(lua_State *L) {
		if (!_lg_typecheck_base_clear(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindowEmbedded::base_clear() function, expected prototype:\nvoid osgViewer::GraphicsWindowEmbedded::base_clear()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::GraphicsWindowEmbedded* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindowEmbedded >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindowEmbedded::base_clear(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphicsWindowEmbedded::clear();

		return 0;
	}

	// void osgViewer::GraphicsWindowEmbedded::base_resizedImplementation(int x, int y, int width, int height)
	static int _bind_base_resizedImplementation(lua_State *L) {
		if (!_lg_typecheck_base_resizedImplementation(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindowEmbedded::base_resizedImplementation(int x, int y, int width, int height) function, expected prototype:\nvoid osgViewer::GraphicsWindowEmbedded::base_resizedImplementation(int x, int y, int width, int height)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		int width=(int)lua_tointeger(L,4);
		int height=(int)lua_tointeger(L,5);

		osgViewer::GraphicsWindowEmbedded* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindowEmbedded >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindowEmbedded::base_resizedImplementation(int, int, int, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphicsWindowEmbedded::resizedImplementation(x, y, width, height);

		return 0;
	}

	// osg::View * osgViewer::GraphicsWindowEmbedded::base_asView()
	static int _bind_base_asView(lua_State *L) {
		if (!_lg_typecheck_base_asView(L)) {
			luaL_error(L, "luna typecheck failed in osg::View * osgViewer::GraphicsWindowEmbedded::base_asView() function, expected prototype:\nosg::View * osgViewer::GraphicsWindowEmbedded::base_asView()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::GraphicsWindowEmbedded* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindowEmbedded >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::View * osgViewer::GraphicsWindowEmbedded::base_asView(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::View * lret = self->GraphicsWindowEmbedded::asView();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::View >::push(L,lret,false);

		return 1;
	}

	// void osgViewer::GraphicsWindowEmbedded::base_checkEvents()
	static int _bind_base_checkEvents(lua_State *L) {
		if (!_lg_typecheck_base_checkEvents(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindowEmbedded::base_checkEvents() function, expected prototype:\nvoid osgViewer::GraphicsWindowEmbedded::base_checkEvents()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::GraphicsWindowEmbedded* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindowEmbedded >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindowEmbedded::base_checkEvents(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphicsWindowEmbedded::checkEvents();

		return 0;
	}

	// bool osgViewer::GraphicsWindowEmbedded::base_setWindowRectangleImplementation(int arg1, int arg2, int arg3, int arg4)
	static int _bind_base_setWindowRectangleImplementation(lua_State *L) {
		if (!_lg_typecheck_base_setWindowRectangleImplementation(L)) {
			luaL_error(L, "luna typecheck failed in bool osgViewer::GraphicsWindowEmbedded::base_setWindowRectangleImplementation(int arg1, int arg2, int arg3, int arg4) function, expected prototype:\nbool osgViewer::GraphicsWindowEmbedded::base_setWindowRectangleImplementation(int arg1, int arg2, int arg3, int arg4)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int _arg1=(int)lua_tointeger(L,2);
		int _arg2=(int)lua_tointeger(L,3);
		int _arg3=(int)lua_tointeger(L,4);
		int _arg4=(int)lua_tointeger(L,5);

		osgViewer::GraphicsWindowEmbedded* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindowEmbedded >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgViewer::GraphicsWindowEmbedded::base_setWindowRectangleImplementation(int, int, int, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GraphicsWindowEmbedded::setWindowRectangleImplementation(_arg1, _arg2, _arg3, _arg4);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgViewer::GraphicsWindowEmbedded::base_getWindowRectangle(int & x, int & y, int & width, int & height)
	static int _bind_base_getWindowRectangle(lua_State *L) {
		if (!_lg_typecheck_base_getWindowRectangle(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindowEmbedded::base_getWindowRectangle(int & x, int & y, int & width, int & height) function, expected prototype:\nvoid osgViewer::GraphicsWindowEmbedded::base_getWindowRectangle(int & x, int & y, int & width, int & height)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		int width=(int)lua_tointeger(L,4);
		int height=(int)lua_tointeger(L,5);

		osgViewer::GraphicsWindowEmbedded* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindowEmbedded >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindowEmbedded::base_getWindowRectangle(int &, int &, int &, int &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphicsWindowEmbedded::getWindowRectangle(x, y, width, height);

		lua_pushnumber(L,x);
		lua_pushnumber(L,y);
		lua_pushnumber(L,width);
		lua_pushnumber(L,height);
		return 4;
	}

	// bool osgViewer::GraphicsWindowEmbedded::base_setWindowDecorationImplementation(bool arg1)
	static int _bind_base_setWindowDecorationImplementation(lua_State *L) {
		if (!_lg_typecheck_base_setWindowDecorationImplementation(L)) {
			luaL_error(L, "luna typecheck failed in bool osgViewer::GraphicsWindowEmbedded::base_setWindowDecorationImplementation(bool arg1) function, expected prototype:\nbool osgViewer::GraphicsWindowEmbedded::base_setWindowDecorationImplementation(bool arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool _arg1=(bool)(lua_toboolean(L,2)==1);

		osgViewer::GraphicsWindowEmbedded* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindowEmbedded >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgViewer::GraphicsWindowEmbedded::base_setWindowDecorationImplementation(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GraphicsWindowEmbedded::setWindowDecorationImplementation(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgViewer::GraphicsWindowEmbedded::base_getWindowDecoration() const
	static int _bind_base_getWindowDecoration(lua_State *L) {
		if (!_lg_typecheck_base_getWindowDecoration(L)) {
			luaL_error(L, "luna typecheck failed in bool osgViewer::GraphicsWindowEmbedded::base_getWindowDecoration() const function, expected prototype:\nbool osgViewer::GraphicsWindowEmbedded::base_getWindowDecoration() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::GraphicsWindowEmbedded* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindowEmbedded >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgViewer::GraphicsWindowEmbedded::base_getWindowDecoration() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GraphicsWindowEmbedded::getWindowDecoration();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgViewer::GraphicsWindowEmbedded::base_setWindowName(const std::string & arg1)
	static int _bind_base_setWindowName(lua_State *L) {
		if (!_lg_typecheck_base_setWindowName(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindowEmbedded::base_setWindowName(const std::string & arg1) function, expected prototype:\nvoid osgViewer::GraphicsWindowEmbedded::base_setWindowName(const std::string & arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string _arg1(lua_tostring(L,2),lua_objlen(L,2));

		osgViewer::GraphicsWindowEmbedded* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindowEmbedded >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindowEmbedded::base_setWindowName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphicsWindowEmbedded::setWindowName(_arg1);

		return 0;
	}

	// std::string osgViewer::GraphicsWindowEmbedded::base_getWindowName()
	static int _bind_base_getWindowName(lua_State *L) {
		if (!_lg_typecheck_base_getWindowName(L)) {
			luaL_error(L, "luna typecheck failed in std::string osgViewer::GraphicsWindowEmbedded::base_getWindowName() function, expected prototype:\nstd::string osgViewer::GraphicsWindowEmbedded::base_getWindowName()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::GraphicsWindowEmbedded* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindowEmbedded >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call std::string osgViewer::GraphicsWindowEmbedded::base_getWindowName(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		std::string lret = self->GraphicsWindowEmbedded::getWindowName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void osgViewer::GraphicsWindowEmbedded::base_useCursor(bool cursorOn)
	static int _bind_base_useCursor(lua_State *L) {
		if (!_lg_typecheck_base_useCursor(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindowEmbedded::base_useCursor(bool cursorOn) function, expected prototype:\nvoid osgViewer::GraphicsWindowEmbedded::base_useCursor(bool cursorOn)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool cursorOn=(bool)(lua_toboolean(L,2)==1);

		osgViewer::GraphicsWindowEmbedded* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindowEmbedded >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindowEmbedded::base_useCursor(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphicsWindowEmbedded::useCursor(cursorOn);

		return 0;
	}

	// void osgViewer::GraphicsWindowEmbedded::base_setCursor(osgViewer::GraphicsWindow::MouseCursor arg1)
	static int _bind_base_setCursor(lua_State *L) {
		if (!_lg_typecheck_base_setCursor(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindowEmbedded::base_setCursor(osgViewer::GraphicsWindow::MouseCursor arg1) function, expected prototype:\nvoid osgViewer::GraphicsWindowEmbedded::base_setCursor(osgViewer::GraphicsWindow::MouseCursor arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osgViewer::GraphicsWindow::MouseCursor _arg1=(osgViewer::GraphicsWindow::MouseCursor)lua_tointeger(L,2);

		osgViewer::GraphicsWindowEmbedded* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindowEmbedded >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindowEmbedded::base_setCursor(osgViewer::GraphicsWindow::MouseCursor). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphicsWindowEmbedded::setCursor(_arg1);

		return 0;
	}

	// void osgViewer::GraphicsWindowEmbedded::base_setSyncToVBlank(bool on)
	static int _bind_base_setSyncToVBlank(lua_State *L) {
		if (!_lg_typecheck_base_setSyncToVBlank(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindowEmbedded::base_setSyncToVBlank(bool on) function, expected prototype:\nvoid osgViewer::GraphicsWindowEmbedded::base_setSyncToVBlank(bool on)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool on=(bool)(lua_toboolean(L,2)==1);

		osgViewer::GraphicsWindowEmbedded* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindowEmbedded >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindowEmbedded::base_setSyncToVBlank(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphicsWindowEmbedded::setSyncToVBlank(on);

		return 0;
	}

	// void osgViewer::GraphicsWindowEmbedded::base_setSwapGroup(bool on, unsigned int group, unsigned int barrier)
	static int _bind_base_setSwapGroup(lua_State *L) {
		if (!_lg_typecheck_base_setSwapGroup(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindowEmbedded::base_setSwapGroup(bool on, unsigned int group, unsigned int barrier) function, expected prototype:\nvoid osgViewer::GraphicsWindowEmbedded::base_setSwapGroup(bool on, unsigned int group, unsigned int barrier)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool on=(bool)(lua_toboolean(L,2)==1);
		unsigned int group=(unsigned int)lua_tointeger(L,3);
		unsigned int barrier=(unsigned int)lua_tointeger(L,4);

		osgViewer::GraphicsWindowEmbedded* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindowEmbedded >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindowEmbedded::base_setSwapGroup(bool, unsigned int, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphicsWindowEmbedded::setSwapGroup(on, group, barrier);

		return 0;
	}

	// void osgViewer::GraphicsWindowEmbedded::base_bindPBufferToTextureImplementation(unsigned int arg1)
	static int _bind_base_bindPBufferToTextureImplementation(lua_State *L) {
		if (!_lg_typecheck_base_bindPBufferToTextureImplementation(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindowEmbedded::base_bindPBufferToTextureImplementation(unsigned int arg1) function, expected prototype:\nvoid osgViewer::GraphicsWindowEmbedded::base_bindPBufferToTextureImplementation(unsigned int arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int _arg1=(unsigned int)lua_tointeger(L,2);

		osgViewer::GraphicsWindowEmbedded* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindowEmbedded >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindowEmbedded::base_bindPBufferToTextureImplementation(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphicsWindowEmbedded::bindPBufferToTextureImplementation(_arg1);

		return 0;
	}

	// void osgViewer::GraphicsWindowEmbedded::base_requestRedraw()
	static int _bind_base_requestRedraw(lua_State *L) {
		if (!_lg_typecheck_base_requestRedraw(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindowEmbedded::base_requestRedraw() function, expected prototype:\nvoid osgViewer::GraphicsWindowEmbedded::base_requestRedraw()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::GraphicsWindowEmbedded* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindowEmbedded >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindowEmbedded::base_requestRedraw(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphicsWindowEmbedded::requestRedraw();

		return 0;
	}

	// void osgViewer::GraphicsWindowEmbedded::base_requestContinuousUpdate(bool needed = true)
	static int _bind_base_requestContinuousUpdate(lua_State *L) {
		if (!_lg_typecheck_base_requestContinuousUpdate(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindowEmbedded::base_requestContinuousUpdate(bool needed = true) function, expected prototype:\nvoid osgViewer::GraphicsWindowEmbedded::base_requestContinuousUpdate(bool needed = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool needed=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		osgViewer::GraphicsWindowEmbedded* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindowEmbedded >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindowEmbedded::base_requestContinuousUpdate(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphicsWindowEmbedded::requestContinuousUpdate(needed);

		return 0;
	}

	// void osgViewer::GraphicsWindowEmbedded::base_requestWarpPointer(float x, float y)
	static int _bind_base_requestWarpPointer(lua_State *L) {
		if (!_lg_typecheck_base_requestWarpPointer(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindowEmbedded::base_requestWarpPointer(float x, float y) function, expected prototype:\nvoid osgViewer::GraphicsWindowEmbedded::base_requestWarpPointer(float x, float y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float x=(float)lua_tonumber(L,2);
		float y=(float)lua_tonumber(L,3);

		osgViewer::GraphicsWindowEmbedded* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindowEmbedded >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindowEmbedded::base_requestWarpPointer(float, float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphicsWindowEmbedded::requestWarpPointer(x, y);

		return 0;
	}

	// const char * osgViewer::GraphicsWindowEmbedded::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgViewer::GraphicsWindowEmbedded::base_libraryName() const function, expected prototype:\nconst char * osgViewer::GraphicsWindowEmbedded::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::GraphicsWindowEmbedded* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindowEmbedded >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgViewer::GraphicsWindowEmbedded::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->GraphicsWindowEmbedded::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgViewer::GraphicsWindowEmbedded::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgViewer::GraphicsWindowEmbedded::base_className() const function, expected prototype:\nconst char * osgViewer::GraphicsWindowEmbedded::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::GraphicsWindowEmbedded* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindowEmbedded >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgViewer::GraphicsWindowEmbedded::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->GraphicsWindowEmbedded::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// bool osgViewer::GraphicsWindowEmbedded::base_valid() const
	static int _bind_base_valid(lua_State *L) {
		if (!_lg_typecheck_base_valid(L)) {
			luaL_error(L, "luna typecheck failed in bool osgViewer::GraphicsWindowEmbedded::base_valid() const function, expected prototype:\nbool osgViewer::GraphicsWindowEmbedded::base_valid() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::GraphicsWindowEmbedded* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindowEmbedded >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgViewer::GraphicsWindowEmbedded::base_valid() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GraphicsWindowEmbedded::valid();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgViewer::GraphicsWindowEmbedded::base_realizeImplementation()
	static int _bind_base_realizeImplementation(lua_State *L) {
		if (!_lg_typecheck_base_realizeImplementation(L)) {
			luaL_error(L, "luna typecheck failed in bool osgViewer::GraphicsWindowEmbedded::base_realizeImplementation() function, expected prototype:\nbool osgViewer::GraphicsWindowEmbedded::base_realizeImplementation()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::GraphicsWindowEmbedded* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindowEmbedded >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgViewer::GraphicsWindowEmbedded::base_realizeImplementation(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GraphicsWindowEmbedded::realizeImplementation();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgViewer::GraphicsWindowEmbedded::base_isRealizedImplementation() const
	static int _bind_base_isRealizedImplementation(lua_State *L) {
		if (!_lg_typecheck_base_isRealizedImplementation(L)) {
			luaL_error(L, "luna typecheck failed in bool osgViewer::GraphicsWindowEmbedded::base_isRealizedImplementation() const function, expected prototype:\nbool osgViewer::GraphicsWindowEmbedded::base_isRealizedImplementation() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::GraphicsWindowEmbedded* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindowEmbedded >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgViewer::GraphicsWindowEmbedded::base_isRealizedImplementation() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GraphicsWindowEmbedded::isRealizedImplementation();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgViewer::GraphicsWindowEmbedded::base_closeImplementation()
	static int _bind_base_closeImplementation(lua_State *L) {
		if (!_lg_typecheck_base_closeImplementation(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindowEmbedded::base_closeImplementation() function, expected prototype:\nvoid osgViewer::GraphicsWindowEmbedded::base_closeImplementation()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::GraphicsWindowEmbedded* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindowEmbedded >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindowEmbedded::base_closeImplementation(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphicsWindowEmbedded::closeImplementation();

		return 0;
	}

	// bool osgViewer::GraphicsWindowEmbedded::base_makeCurrentImplementation()
	static int _bind_base_makeCurrentImplementation(lua_State *L) {
		if (!_lg_typecheck_base_makeCurrentImplementation(L)) {
			luaL_error(L, "luna typecheck failed in bool osgViewer::GraphicsWindowEmbedded::base_makeCurrentImplementation() function, expected prototype:\nbool osgViewer::GraphicsWindowEmbedded::base_makeCurrentImplementation()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::GraphicsWindowEmbedded* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindowEmbedded >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgViewer::GraphicsWindowEmbedded::base_makeCurrentImplementation(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GraphicsWindowEmbedded::makeCurrentImplementation();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgViewer::GraphicsWindowEmbedded::base_releaseContextImplementation()
	static int _bind_base_releaseContextImplementation(lua_State *L) {
		if (!_lg_typecheck_base_releaseContextImplementation(L)) {
			luaL_error(L, "luna typecheck failed in bool osgViewer::GraphicsWindowEmbedded::base_releaseContextImplementation() function, expected prototype:\nbool osgViewer::GraphicsWindowEmbedded::base_releaseContextImplementation()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::GraphicsWindowEmbedded* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindowEmbedded >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgViewer::GraphicsWindowEmbedded::base_releaseContextImplementation(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GraphicsWindowEmbedded::releaseContextImplementation();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgViewer::GraphicsWindowEmbedded::base_swapBuffersImplementation()
	static int _bind_base_swapBuffersImplementation(lua_State *L) {
		if (!_lg_typecheck_base_swapBuffersImplementation(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindowEmbedded::base_swapBuffersImplementation() function, expected prototype:\nvoid osgViewer::GraphicsWindowEmbedded::base_swapBuffersImplementation()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::GraphicsWindowEmbedded* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindowEmbedded >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindowEmbedded::base_swapBuffersImplementation(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphicsWindowEmbedded::swapBuffersImplementation();

		return 0;
	}

	// void osgViewer::GraphicsWindowEmbedded::base_grabFocus()
	static int _bind_base_grabFocus(lua_State *L) {
		if (!_lg_typecheck_base_grabFocus(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindowEmbedded::base_grabFocus() function, expected prototype:\nvoid osgViewer::GraphicsWindowEmbedded::base_grabFocus()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::GraphicsWindowEmbedded* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindowEmbedded >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindowEmbedded::base_grabFocus(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphicsWindowEmbedded::grabFocus();

		return 0;
	}

	// void osgViewer::GraphicsWindowEmbedded::base_grabFocusIfPointerInWindow()
	static int _bind_base_grabFocusIfPointerInWindow(lua_State *L) {
		if (!_lg_typecheck_base_grabFocusIfPointerInWindow(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindowEmbedded::base_grabFocusIfPointerInWindow() function, expected prototype:\nvoid osgViewer::GraphicsWindowEmbedded::base_grabFocusIfPointerInWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::GraphicsWindowEmbedded* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindowEmbedded >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindowEmbedded::base_grabFocusIfPointerInWindow(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphicsWindowEmbedded::grabFocusIfPointerInWindow();

		return 0;
	}

	// void osgViewer::GraphicsWindowEmbedded::base_raiseWindow()
	static int _bind_base_raiseWindow(lua_State *L) {
		if (!_lg_typecheck_base_raiseWindow(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindowEmbedded::base_raiseWindow() function, expected prototype:\nvoid osgViewer::GraphicsWindowEmbedded::base_raiseWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::GraphicsWindowEmbedded* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindowEmbedded >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindowEmbedded::base_raiseWindow(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphicsWindowEmbedded::raiseWindow();

		return 0;
	}


	// Operator binds:

};

osgViewer::GraphicsWindowEmbedded* LunaTraits< osgViewer::GraphicsWindowEmbedded >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgViewer_GraphicsWindowEmbedded::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// bool osg::GraphicsContext::makeContextCurrentImplementation(osg::GraphicsContext * readContext)
}

void LunaTraits< osgViewer::GraphicsWindowEmbedded >::_bind_dtor(osgViewer::GraphicsWindowEmbedded* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgViewer::GraphicsWindowEmbedded >::className[] = "GraphicsWindowEmbedded";
const char LunaTraits< osgViewer::GraphicsWindowEmbedded >::fullName[] = "osgViewer::GraphicsWindowEmbedded";
const char LunaTraits< osgViewer::GraphicsWindowEmbedded >::moduleName[] = "osgViewer";
const char* LunaTraits< osgViewer::GraphicsWindowEmbedded >::parents[] = {"osgViewer.GraphicsWindow", 0};
const int LunaTraits< osgViewer::GraphicsWindowEmbedded >::hash = 38900406;
const int LunaTraits< osgViewer::GraphicsWindowEmbedded >::uniqueIDs[] = {50169651, 85302998,0};

luna_RegType LunaTraits< osgViewer::GraphicsWindowEmbedded >::methods[] = {
	{"libraryName", &luna_wrapper_osgViewer_GraphicsWindowEmbedded::_bind_libraryName},
	{"className", &luna_wrapper_osgViewer_GraphicsWindowEmbedded::_bind_className},
	{"init", &luna_wrapper_osgViewer_GraphicsWindowEmbedded::_bind_init},
	{"valid", &luna_wrapper_osgViewer_GraphicsWindowEmbedded::_bind_valid},
	{"realizeImplementation", &luna_wrapper_osgViewer_GraphicsWindowEmbedded::_bind_realizeImplementation},
	{"isRealizedImplementation", &luna_wrapper_osgViewer_GraphicsWindowEmbedded::_bind_isRealizedImplementation},
	{"closeImplementation", &luna_wrapper_osgViewer_GraphicsWindowEmbedded::_bind_closeImplementation},
	{"makeCurrentImplementation", &luna_wrapper_osgViewer_GraphicsWindowEmbedded::_bind_makeCurrentImplementation},
	{"releaseContextImplementation", &luna_wrapper_osgViewer_GraphicsWindowEmbedded::_bind_releaseContextImplementation},
	{"swapBuffersImplementation", &luna_wrapper_osgViewer_GraphicsWindowEmbedded::_bind_swapBuffersImplementation},
	{"grabFocus", &luna_wrapper_osgViewer_GraphicsWindowEmbedded::_bind_grabFocus},
	{"grabFocusIfPointerInWindow", &luna_wrapper_osgViewer_GraphicsWindowEmbedded::_bind_grabFocusIfPointerInWindow},
	{"raiseWindow", &luna_wrapper_osgViewer_GraphicsWindowEmbedded::_bind_raiseWindow},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgViewer_GraphicsWindowEmbedded::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osgViewer_GraphicsWindowEmbedded::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osgViewer_GraphicsWindowEmbedded::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osgViewer_GraphicsWindowEmbedded::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osgViewer_GraphicsWindowEmbedded::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osgViewer_GraphicsWindowEmbedded::_bind_base_releaseGLObjects},
	{"base_runOperations", &luna_wrapper_osgViewer_GraphicsWindowEmbedded::_bind_base_runOperations},
	{"base_clear", &luna_wrapper_osgViewer_GraphicsWindowEmbedded::_bind_base_clear},
	{"base_resizedImplementation", &luna_wrapper_osgViewer_GraphicsWindowEmbedded::_bind_base_resizedImplementation},
	{"base_asView", &luna_wrapper_osgViewer_GraphicsWindowEmbedded::_bind_base_asView},
	{"base_checkEvents", &luna_wrapper_osgViewer_GraphicsWindowEmbedded::_bind_base_checkEvents},
	{"base_setWindowRectangleImplementation", &luna_wrapper_osgViewer_GraphicsWindowEmbedded::_bind_base_setWindowRectangleImplementation},
	{"base_getWindowRectangle", &luna_wrapper_osgViewer_GraphicsWindowEmbedded::_bind_base_getWindowRectangle},
	{"base_setWindowDecorationImplementation", &luna_wrapper_osgViewer_GraphicsWindowEmbedded::_bind_base_setWindowDecorationImplementation},
	{"base_getWindowDecoration", &luna_wrapper_osgViewer_GraphicsWindowEmbedded::_bind_base_getWindowDecoration},
	{"base_setWindowName", &luna_wrapper_osgViewer_GraphicsWindowEmbedded::_bind_base_setWindowName},
	{"base_getWindowName", &luna_wrapper_osgViewer_GraphicsWindowEmbedded::_bind_base_getWindowName},
	{"base_useCursor", &luna_wrapper_osgViewer_GraphicsWindowEmbedded::_bind_base_useCursor},
	{"base_setCursor", &luna_wrapper_osgViewer_GraphicsWindowEmbedded::_bind_base_setCursor},
	{"base_setSyncToVBlank", &luna_wrapper_osgViewer_GraphicsWindowEmbedded::_bind_base_setSyncToVBlank},
	{"base_setSwapGroup", &luna_wrapper_osgViewer_GraphicsWindowEmbedded::_bind_base_setSwapGroup},
	{"base_bindPBufferToTextureImplementation", &luna_wrapper_osgViewer_GraphicsWindowEmbedded::_bind_base_bindPBufferToTextureImplementation},
	{"base_requestRedraw", &luna_wrapper_osgViewer_GraphicsWindowEmbedded::_bind_base_requestRedraw},
	{"base_requestContinuousUpdate", &luna_wrapper_osgViewer_GraphicsWindowEmbedded::_bind_base_requestContinuousUpdate},
	{"base_requestWarpPointer", &luna_wrapper_osgViewer_GraphicsWindowEmbedded::_bind_base_requestWarpPointer},
	{"base_libraryName", &luna_wrapper_osgViewer_GraphicsWindowEmbedded::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osgViewer_GraphicsWindowEmbedded::_bind_base_className},
	{"base_valid", &luna_wrapper_osgViewer_GraphicsWindowEmbedded::_bind_base_valid},
	{"base_realizeImplementation", &luna_wrapper_osgViewer_GraphicsWindowEmbedded::_bind_base_realizeImplementation},
	{"base_isRealizedImplementation", &luna_wrapper_osgViewer_GraphicsWindowEmbedded::_bind_base_isRealizedImplementation},
	{"base_closeImplementation", &luna_wrapper_osgViewer_GraphicsWindowEmbedded::_bind_base_closeImplementation},
	{"base_makeCurrentImplementation", &luna_wrapper_osgViewer_GraphicsWindowEmbedded::_bind_base_makeCurrentImplementation},
	{"base_releaseContextImplementation", &luna_wrapper_osgViewer_GraphicsWindowEmbedded::_bind_base_releaseContextImplementation},
	{"base_swapBuffersImplementation", &luna_wrapper_osgViewer_GraphicsWindowEmbedded::_bind_base_swapBuffersImplementation},
	{"base_grabFocus", &luna_wrapper_osgViewer_GraphicsWindowEmbedded::_bind_base_grabFocus},
	{"base_grabFocusIfPointerInWindow", &luna_wrapper_osgViewer_GraphicsWindowEmbedded::_bind_base_grabFocusIfPointerInWindow},
	{"base_raiseWindow", &luna_wrapper_osgViewer_GraphicsWindowEmbedded::_bind_base_raiseWindow},
	{"fromVoid", &luna_wrapper_osgViewer_GraphicsWindowEmbedded::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgViewer_GraphicsWindowEmbedded::_bind_asVoid},
	{"getTable", &luna_wrapper_osgViewer_GraphicsWindowEmbedded::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgViewer::GraphicsWindowEmbedded >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgViewer_GraphicsWindowEmbedded::_cast_from_Referenced},
	{"osgGA::GUIActionAdapter", &luna_wrapper_osgViewer_GraphicsWindowEmbedded::_cast_from_GUIActionAdapter},
	{0,0}
};

luna_RegEnumType LunaTraits< osgViewer::GraphicsWindowEmbedded >::enumValues[] = {
	{0,0}
};


