#include <plug_common.h>

#include <luna/wrappers/wrapper_osgGA_EventQueue.h>

class luna_wrapper_osgGA_EventQueue {
public:
	typedef Luna< osgGA::EventQueue > luna_t;

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

		osgGA::EventQueue* self= (osgGA::EventQueue*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgGA::EventQueue >::push(L,self,false);
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
		//osgGA::EventQueue* ptr= dynamic_cast< osgGA::EventQueue* >(Luna< osg::Referenced >::check(L,1));
		osgGA::EventQueue* ptr= luna_caster< osg::Referenced, osgGA::EventQueue >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgGA::EventQueue >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setEvents(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1490680) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_takeEvents_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1490680) ) return false;
		if( (!(Luna< std::list< osg::ref_ptr< osgGA::GUIEventAdapter > > >::checkSubType< osgGA::EventQueue::Events >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_takeEvents_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1490680) ) return false;
		if( (!(Luna< std::list< osg::ref_ptr< osgGA::GUIEventAdapter > > >::checkSubType< osgGA::EventQueue::Events >(L,2))) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_copyEvents(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1490680) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_appendEvents(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1490680) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addEvent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUseFixedMouseInputRange(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUseFixedMouseInputRange(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setGraphicsContext(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMouseInputRange(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_windowResize_overload_1(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_windowResize_overload_2(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( lua_type(L,6)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_mouseScroll_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_mouseScroll_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_mouseScroll2D_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_mouseScroll2D_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_penPressure_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_penPressure_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_penOrientation_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_penOrientation_overload_2(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_penProximity_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_penProximity_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_mouseWarped(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_mouseMotion_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_mouseMotion_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_mouseButtonPress_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_mouseButtonPress_overload_2(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_mouseDoubleButtonPress_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_mouseDoubleButtonPress_overload_2(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_mouseButtonRelease_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_mouseButtonRelease_overload_2(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_keyPress_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_keyPress_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_keyRelease_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_keyRelease_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_touchBegan_overload_1(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( lua_type(L,6)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_touchBegan_overload_2(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_touchMoved_overload_1(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( lua_type(L,6)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_touchMoved_overload_2(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_touchEnded_overload_1(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( lua_type(L,7)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_touchEnded_overload_2(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_closeWindow_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_closeWindow_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_quitApplication_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_quitApplication_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_frame(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setStartTick(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,32973728) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getStartTick(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_createEvent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCurrentEventState(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCurrentEventState_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCurrentEventState_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_userEvent_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::check(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_userEvent_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::check(L,2)) ) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFirstTouchEmulatesMouse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFirstTouchEmulatesMouse(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgGA::EventQueue::EventQueue(osgGA::GUIEventAdapter::MouseYOrientation mouseYOrientation = osgGA::GUIEventAdapter::Y_INCREASING_DOWNWARDS)
	static osgGA::EventQueue* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgGA::EventQueue::EventQueue(osgGA::GUIEventAdapter::MouseYOrientation mouseYOrientation = osgGA::GUIEventAdapter::Y_INCREASING_DOWNWARDS) function, expected prototype:\nosgGA::EventQueue::EventQueue(osgGA::GUIEventAdapter::MouseYOrientation mouseYOrientation = osgGA::GUIEventAdapter::Y_INCREASING_DOWNWARDS)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osgGA::GUIEventAdapter::MouseYOrientation mouseYOrientation=luatop>0 ? (osgGA::GUIEventAdapter::MouseYOrientation)lua_tointeger(L,1) : (osgGA::GUIEventAdapter::MouseYOrientation)osgGA::GUIEventAdapter::Y_INCREASING_DOWNWARDS;

		return new osgGA::EventQueue(mouseYOrientation);
	}

	// osgGA::EventQueue::EventQueue(lua_Table * data, osgGA::GUIEventAdapter::MouseYOrientation mouseYOrientation = osgGA::GUIEventAdapter::Y_INCREASING_DOWNWARDS)
	static osgGA::EventQueue* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgGA::EventQueue::EventQueue(lua_Table * data, osgGA::GUIEventAdapter::MouseYOrientation mouseYOrientation = osgGA::GUIEventAdapter::Y_INCREASING_DOWNWARDS) function, expected prototype:\nosgGA::EventQueue::EventQueue(lua_Table * data, osgGA::GUIEventAdapter::MouseYOrientation mouseYOrientation = osgGA::GUIEventAdapter::Y_INCREASING_DOWNWARDS)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osgGA::GUIEventAdapter::MouseYOrientation mouseYOrientation=luatop>1 ? (osgGA::GUIEventAdapter::MouseYOrientation)lua_tointeger(L,2) : (osgGA::GUIEventAdapter::MouseYOrientation)osgGA::GUIEventAdapter::Y_INCREASING_DOWNWARDS;

		return new wrapper_osgGA_EventQueue(L,NULL, mouseYOrientation);
	}

	// Overload binder for osgGA::EventQueue::EventQueue
	static osgGA::EventQueue* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function EventQueue, cannot match any of the overloads for function EventQueue:\n  EventQueue(osgGA::GUIEventAdapter::MouseYOrientation)\n  EventQueue(lua_Table *, osgGA::GUIEventAdapter::MouseYOrientation)\n");
		return NULL;
	}


	// Function binds:
	// void osgGA::EventQueue::setEvents(osgGA::EventQueue::Events & events)
	static int _bind_setEvents(lua_State *L) {
		if (!_lg_typecheck_setEvents(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::EventQueue::setEvents(osgGA::EventQueue::Events & events) function, expected prototype:\nvoid osgGA::EventQueue::setEvents(osgGA::EventQueue::Events & events)\nClass arguments details:\narg 1 ID = 42735238\n\n%s",luna_dumpStack(L).c_str());
		}

		osgGA::EventQueue::Events* events_ptr=(Luna< std::list< osg::ref_ptr< osgGA::GUIEventAdapter > > >::checkSubType< osgGA::EventQueue::Events >(L,2));
		if( !events_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg events in osgGA::EventQueue::setEvents function");
		}
		osgGA::EventQueue::Events & events=*events_ptr;

		osgGA::EventQueue* self=Luna< osg::Referenced >::checkSubType< osgGA::EventQueue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::EventQueue::setEvents(osgGA::EventQueue::Events &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setEvents(events);

		return 0;
	}

	// bool osgGA::EventQueue::takeEvents(osgGA::EventQueue::Events & events)
	static int _bind_takeEvents_overload_1(lua_State *L) {
		if (!_lg_typecheck_takeEvents_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool osgGA::EventQueue::takeEvents(osgGA::EventQueue::Events & events) function, expected prototype:\nbool osgGA::EventQueue::takeEvents(osgGA::EventQueue::Events & events)\nClass arguments details:\narg 1 ID = 42735238\n\n%s",luna_dumpStack(L).c_str());
		}

		osgGA::EventQueue::Events* events_ptr=(Luna< std::list< osg::ref_ptr< osgGA::GUIEventAdapter > > >::checkSubType< osgGA::EventQueue::Events >(L,2));
		if( !events_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg events in osgGA::EventQueue::takeEvents function");
		}
		osgGA::EventQueue::Events & events=*events_ptr;

		osgGA::EventQueue* self=Luna< osg::Referenced >::checkSubType< osgGA::EventQueue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgGA::EventQueue::takeEvents(osgGA::EventQueue::Events &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->takeEvents(events);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgGA::EventQueue::takeEvents(osgGA::EventQueue::Events & events, double cutOffTime)
	static int _bind_takeEvents_overload_2(lua_State *L) {
		if (!_lg_typecheck_takeEvents_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool osgGA::EventQueue::takeEvents(osgGA::EventQueue::Events & events, double cutOffTime) function, expected prototype:\nbool osgGA::EventQueue::takeEvents(osgGA::EventQueue::Events & events, double cutOffTime)\nClass arguments details:\narg 1 ID = 42735238\n\n%s",luna_dumpStack(L).c_str());
		}

		osgGA::EventQueue::Events* events_ptr=(Luna< std::list< osg::ref_ptr< osgGA::GUIEventAdapter > > >::checkSubType< osgGA::EventQueue::Events >(L,2));
		if( !events_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg events in osgGA::EventQueue::takeEvents function");
		}
		osgGA::EventQueue::Events & events=*events_ptr;
		double cutOffTime=(double)lua_tonumber(L,3);

		osgGA::EventQueue* self=Luna< osg::Referenced >::checkSubType< osgGA::EventQueue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgGA::EventQueue::takeEvents(osgGA::EventQueue::Events &, double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->takeEvents(events, cutOffTime);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for osgGA::EventQueue::takeEvents
	static int _bind_takeEvents(lua_State *L) {
		if (_lg_typecheck_takeEvents_overload_1(L)) return _bind_takeEvents_overload_1(L);
		if (_lg_typecheck_takeEvents_overload_2(L)) return _bind_takeEvents_overload_2(L);

		luaL_error(L, "error in function takeEvents, cannot match any of the overloads for function takeEvents:\n  takeEvents(osgGA::EventQueue::Events &)\n  takeEvents(osgGA::EventQueue::Events &, double)\n");
		return 0;
	}

	// bool osgGA::EventQueue::copyEvents(osgGA::EventQueue::Events & events) const
	static int _bind_copyEvents(lua_State *L) {
		if (!_lg_typecheck_copyEvents(L)) {
			luaL_error(L, "luna typecheck failed in bool osgGA::EventQueue::copyEvents(osgGA::EventQueue::Events & events) const function, expected prototype:\nbool osgGA::EventQueue::copyEvents(osgGA::EventQueue::Events & events) const\nClass arguments details:\narg 1 ID = 42735238\n\n%s",luna_dumpStack(L).c_str());
		}

		osgGA::EventQueue::Events* events_ptr=(Luna< std::list< osg::ref_ptr< osgGA::GUIEventAdapter > > >::checkSubType< osgGA::EventQueue::Events >(L,2));
		if( !events_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg events in osgGA::EventQueue::copyEvents function");
		}
		osgGA::EventQueue::Events & events=*events_ptr;

		osgGA::EventQueue* self=Luna< osg::Referenced >::checkSubType< osgGA::EventQueue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgGA::EventQueue::copyEvents(osgGA::EventQueue::Events &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->copyEvents(events);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgGA::EventQueue::appendEvents(osgGA::EventQueue::Events & events)
	static int _bind_appendEvents(lua_State *L) {
		if (!_lg_typecheck_appendEvents(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::EventQueue::appendEvents(osgGA::EventQueue::Events & events) function, expected prototype:\nvoid osgGA::EventQueue::appendEvents(osgGA::EventQueue::Events & events)\nClass arguments details:\narg 1 ID = 42735238\n\n%s",luna_dumpStack(L).c_str());
		}

		osgGA::EventQueue::Events* events_ptr=(Luna< std::list< osg::ref_ptr< osgGA::GUIEventAdapter > > >::checkSubType< osgGA::EventQueue::Events >(L,2));
		if( !events_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg events in osgGA::EventQueue::appendEvents function");
		}
		osgGA::EventQueue::Events & events=*events_ptr;

		osgGA::EventQueue* self=Luna< osg::Referenced >::checkSubType< osgGA::EventQueue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::EventQueue::appendEvents(osgGA::EventQueue::Events &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->appendEvents(events);

		return 0;
	}

	// void osgGA::EventQueue::addEvent(osgGA::GUIEventAdapter * event)
	static int _bind_addEvent(lua_State *L) {
		if (!_lg_typecheck_addEvent(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::EventQueue::addEvent(osgGA::GUIEventAdapter * event) function, expected prototype:\nvoid osgGA::EventQueue::addEvent(osgGA::GUIEventAdapter * event)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgGA::GUIEventAdapter* event=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2));

		osgGA::EventQueue* self=Luna< osg::Referenced >::checkSubType< osgGA::EventQueue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::EventQueue::addEvent(osgGA::GUIEventAdapter *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addEvent(event);

		return 0;
	}

	// void osgGA::EventQueue::setUseFixedMouseInputRange(bool useFixedMouseInputRange)
	static int _bind_setUseFixedMouseInputRange(lua_State *L) {
		if (!_lg_typecheck_setUseFixedMouseInputRange(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::EventQueue::setUseFixedMouseInputRange(bool useFixedMouseInputRange) function, expected prototype:\nvoid osgGA::EventQueue::setUseFixedMouseInputRange(bool useFixedMouseInputRange)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool useFixedMouseInputRange=(bool)(lua_toboolean(L,2)==1);

		osgGA::EventQueue* self=Luna< osg::Referenced >::checkSubType< osgGA::EventQueue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::EventQueue::setUseFixedMouseInputRange(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setUseFixedMouseInputRange(useFixedMouseInputRange);

		return 0;
	}

	// bool osgGA::EventQueue::getUseFixedMouseInputRange()
	static int _bind_getUseFixedMouseInputRange(lua_State *L) {
		if (!_lg_typecheck_getUseFixedMouseInputRange(L)) {
			luaL_error(L, "luna typecheck failed in bool osgGA::EventQueue::getUseFixedMouseInputRange() function, expected prototype:\nbool osgGA::EventQueue::getUseFixedMouseInputRange()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::EventQueue* self=Luna< osg::Referenced >::checkSubType< osgGA::EventQueue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgGA::EventQueue::getUseFixedMouseInputRange(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getUseFixedMouseInputRange();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgGA::EventQueue::setGraphicsContext(osg::GraphicsContext * context)
	static int _bind_setGraphicsContext(lua_State *L) {
		if (!_lg_typecheck_setGraphicsContext(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::EventQueue::setGraphicsContext(osg::GraphicsContext * context) function, expected prototype:\nvoid osgGA::EventQueue::setGraphicsContext(osg::GraphicsContext * context)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::GraphicsContext* context=(Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,2));

		osgGA::EventQueue* self=Luna< osg::Referenced >::checkSubType< osgGA::EventQueue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::EventQueue::setGraphicsContext(osg::GraphicsContext *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setGraphicsContext(context);

		return 0;
	}

	// void osgGA::EventQueue::setMouseInputRange(float xMin, float yMin, float xMax, float yMax)
	static int _bind_setMouseInputRange(lua_State *L) {
		if (!_lg_typecheck_setMouseInputRange(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::EventQueue::setMouseInputRange(float xMin, float yMin, float xMax, float yMax) function, expected prototype:\nvoid osgGA::EventQueue::setMouseInputRange(float xMin, float yMin, float xMax, float yMax)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float xMin=(float)lua_tonumber(L,2);
		float yMin=(float)lua_tonumber(L,3);
		float xMax=(float)lua_tonumber(L,4);
		float yMax=(float)lua_tonumber(L,5);

		osgGA::EventQueue* self=Luna< osg::Referenced >::checkSubType< osgGA::EventQueue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::EventQueue::setMouseInputRange(float, float, float, float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setMouseInputRange(xMin, yMin, xMax, yMax);

		return 0;
	}

	// void osgGA::EventQueue::windowResize(int x, int y, int width, int height)
	static int _bind_windowResize_overload_1(lua_State *L) {
		if (!_lg_typecheck_windowResize_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::EventQueue::windowResize(int x, int y, int width, int height) function, expected prototype:\nvoid osgGA::EventQueue::windowResize(int x, int y, int width, int height)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		int width=(int)lua_tointeger(L,4);
		int height=(int)lua_tointeger(L,5);

		osgGA::EventQueue* self=Luna< osg::Referenced >::checkSubType< osgGA::EventQueue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::EventQueue::windowResize(int, int, int, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->windowResize(x, y, width, height);

		return 0;
	}

	// void osgGA::EventQueue::windowResize(int x, int y, int width, int height, double time)
	static int _bind_windowResize_overload_2(lua_State *L) {
		if (!_lg_typecheck_windowResize_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::EventQueue::windowResize(int x, int y, int width, int height, double time) function, expected prototype:\nvoid osgGA::EventQueue::windowResize(int x, int y, int width, int height, double time)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		int width=(int)lua_tointeger(L,4);
		int height=(int)lua_tointeger(L,5);
		double time=(double)lua_tonumber(L,6);

		osgGA::EventQueue* self=Luna< osg::Referenced >::checkSubType< osgGA::EventQueue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::EventQueue::windowResize(int, int, int, int, double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->windowResize(x, y, width, height, time);

		return 0;
	}

	// Overload binder for osgGA::EventQueue::windowResize
	static int _bind_windowResize(lua_State *L) {
		if (_lg_typecheck_windowResize_overload_1(L)) return _bind_windowResize_overload_1(L);
		if (_lg_typecheck_windowResize_overload_2(L)) return _bind_windowResize_overload_2(L);

		luaL_error(L, "error in function windowResize, cannot match any of the overloads for function windowResize:\n  windowResize(int, int, int, int)\n  windowResize(int, int, int, int, double)\n");
		return 0;
	}

	// void osgGA::EventQueue::mouseScroll(osgGA::GUIEventAdapter::ScrollingMotion sm)
	static int _bind_mouseScroll_overload_1(lua_State *L) {
		if (!_lg_typecheck_mouseScroll_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::EventQueue::mouseScroll(osgGA::GUIEventAdapter::ScrollingMotion sm) function, expected prototype:\nvoid osgGA::EventQueue::mouseScroll(osgGA::GUIEventAdapter::ScrollingMotion sm)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osgGA::GUIEventAdapter::ScrollingMotion sm=(osgGA::GUIEventAdapter::ScrollingMotion)lua_tointeger(L,2);

		osgGA::EventQueue* self=Luna< osg::Referenced >::checkSubType< osgGA::EventQueue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::EventQueue::mouseScroll(osgGA::GUIEventAdapter::ScrollingMotion). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->mouseScroll(sm);

		return 0;
	}

	// void osgGA::EventQueue::mouseScroll(osgGA::GUIEventAdapter::ScrollingMotion sm, double time)
	static int _bind_mouseScroll_overload_2(lua_State *L) {
		if (!_lg_typecheck_mouseScroll_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::EventQueue::mouseScroll(osgGA::GUIEventAdapter::ScrollingMotion sm, double time) function, expected prototype:\nvoid osgGA::EventQueue::mouseScroll(osgGA::GUIEventAdapter::ScrollingMotion sm, double time)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osgGA::GUIEventAdapter::ScrollingMotion sm=(osgGA::GUIEventAdapter::ScrollingMotion)lua_tointeger(L,2);
		double time=(double)lua_tonumber(L,3);

		osgGA::EventQueue* self=Luna< osg::Referenced >::checkSubType< osgGA::EventQueue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::EventQueue::mouseScroll(osgGA::GUIEventAdapter::ScrollingMotion, double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->mouseScroll(sm, time);

		return 0;
	}

	// Overload binder for osgGA::EventQueue::mouseScroll
	static int _bind_mouseScroll(lua_State *L) {
		if (_lg_typecheck_mouseScroll_overload_1(L)) return _bind_mouseScroll_overload_1(L);
		if (_lg_typecheck_mouseScroll_overload_2(L)) return _bind_mouseScroll_overload_2(L);

		luaL_error(L, "error in function mouseScroll, cannot match any of the overloads for function mouseScroll:\n  mouseScroll(osgGA::GUIEventAdapter::ScrollingMotion)\n  mouseScroll(osgGA::GUIEventAdapter::ScrollingMotion, double)\n");
		return 0;
	}

	// void osgGA::EventQueue::mouseScroll2D(float x, float y)
	static int _bind_mouseScroll2D_overload_1(lua_State *L) {
		if (!_lg_typecheck_mouseScroll2D_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::EventQueue::mouseScroll2D(float x, float y) function, expected prototype:\nvoid osgGA::EventQueue::mouseScroll2D(float x, float y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float x=(float)lua_tonumber(L,2);
		float y=(float)lua_tonumber(L,3);

		osgGA::EventQueue* self=Luna< osg::Referenced >::checkSubType< osgGA::EventQueue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::EventQueue::mouseScroll2D(float, float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->mouseScroll2D(x, y);

		return 0;
	}

	// void osgGA::EventQueue::mouseScroll2D(float x, float y, double time)
	static int _bind_mouseScroll2D_overload_2(lua_State *L) {
		if (!_lg_typecheck_mouseScroll2D_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::EventQueue::mouseScroll2D(float x, float y, double time) function, expected prototype:\nvoid osgGA::EventQueue::mouseScroll2D(float x, float y, double time)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float x=(float)lua_tonumber(L,2);
		float y=(float)lua_tonumber(L,3);
		double time=(double)lua_tonumber(L,4);

		osgGA::EventQueue* self=Luna< osg::Referenced >::checkSubType< osgGA::EventQueue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::EventQueue::mouseScroll2D(float, float, double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->mouseScroll2D(x, y, time);

		return 0;
	}

	// Overload binder for osgGA::EventQueue::mouseScroll2D
	static int _bind_mouseScroll2D(lua_State *L) {
		if (_lg_typecheck_mouseScroll2D_overload_1(L)) return _bind_mouseScroll2D_overload_1(L);
		if (_lg_typecheck_mouseScroll2D_overload_2(L)) return _bind_mouseScroll2D_overload_2(L);

		luaL_error(L, "error in function mouseScroll2D, cannot match any of the overloads for function mouseScroll2D:\n  mouseScroll2D(float, float)\n  mouseScroll2D(float, float, double)\n");
		return 0;
	}

	// void osgGA::EventQueue::penPressure(float pressure)
	static int _bind_penPressure_overload_1(lua_State *L) {
		if (!_lg_typecheck_penPressure_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::EventQueue::penPressure(float pressure) function, expected prototype:\nvoid osgGA::EventQueue::penPressure(float pressure)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float pressure=(float)lua_tonumber(L,2);

		osgGA::EventQueue* self=Luna< osg::Referenced >::checkSubType< osgGA::EventQueue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::EventQueue::penPressure(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->penPressure(pressure);

		return 0;
	}

	// void osgGA::EventQueue::penPressure(float pressure, double time)
	static int _bind_penPressure_overload_2(lua_State *L) {
		if (!_lg_typecheck_penPressure_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::EventQueue::penPressure(float pressure, double time) function, expected prototype:\nvoid osgGA::EventQueue::penPressure(float pressure, double time)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float pressure=(float)lua_tonumber(L,2);
		double time=(double)lua_tonumber(L,3);

		osgGA::EventQueue* self=Luna< osg::Referenced >::checkSubType< osgGA::EventQueue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::EventQueue::penPressure(float, double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->penPressure(pressure, time);

		return 0;
	}

	// Overload binder for osgGA::EventQueue::penPressure
	static int _bind_penPressure(lua_State *L) {
		if (_lg_typecheck_penPressure_overload_1(L)) return _bind_penPressure_overload_1(L);
		if (_lg_typecheck_penPressure_overload_2(L)) return _bind_penPressure_overload_2(L);

		luaL_error(L, "error in function penPressure, cannot match any of the overloads for function penPressure:\n  penPressure(float)\n  penPressure(float, double)\n");
		return 0;
	}

	// void osgGA::EventQueue::penOrientation(float tiltX, float tiltY, float rotation)
	static int _bind_penOrientation_overload_1(lua_State *L) {
		if (!_lg_typecheck_penOrientation_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::EventQueue::penOrientation(float tiltX, float tiltY, float rotation) function, expected prototype:\nvoid osgGA::EventQueue::penOrientation(float tiltX, float tiltY, float rotation)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float tiltX=(float)lua_tonumber(L,2);
		float tiltY=(float)lua_tonumber(L,3);
		float rotation=(float)lua_tonumber(L,4);

		osgGA::EventQueue* self=Luna< osg::Referenced >::checkSubType< osgGA::EventQueue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::EventQueue::penOrientation(float, float, float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->penOrientation(tiltX, tiltY, rotation);

		return 0;
	}

	// void osgGA::EventQueue::penOrientation(float tiltX, float tiltY, float rotation, double time)
	static int _bind_penOrientation_overload_2(lua_State *L) {
		if (!_lg_typecheck_penOrientation_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::EventQueue::penOrientation(float tiltX, float tiltY, float rotation, double time) function, expected prototype:\nvoid osgGA::EventQueue::penOrientation(float tiltX, float tiltY, float rotation, double time)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float tiltX=(float)lua_tonumber(L,2);
		float tiltY=(float)lua_tonumber(L,3);
		float rotation=(float)lua_tonumber(L,4);
		double time=(double)lua_tonumber(L,5);

		osgGA::EventQueue* self=Luna< osg::Referenced >::checkSubType< osgGA::EventQueue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::EventQueue::penOrientation(float, float, float, double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->penOrientation(tiltX, tiltY, rotation, time);

		return 0;
	}

	// Overload binder for osgGA::EventQueue::penOrientation
	static int _bind_penOrientation(lua_State *L) {
		if (_lg_typecheck_penOrientation_overload_1(L)) return _bind_penOrientation_overload_1(L);
		if (_lg_typecheck_penOrientation_overload_2(L)) return _bind_penOrientation_overload_2(L);

		luaL_error(L, "error in function penOrientation, cannot match any of the overloads for function penOrientation:\n  penOrientation(float, float, float)\n  penOrientation(float, float, float, double)\n");
		return 0;
	}

	// void osgGA::EventQueue::penProximity(osgGA::GUIEventAdapter::TabletPointerType pt, bool isEntering)
	static int _bind_penProximity_overload_1(lua_State *L) {
		if (!_lg_typecheck_penProximity_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::EventQueue::penProximity(osgGA::GUIEventAdapter::TabletPointerType pt, bool isEntering) function, expected prototype:\nvoid osgGA::EventQueue::penProximity(osgGA::GUIEventAdapter::TabletPointerType pt, bool isEntering)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osgGA::GUIEventAdapter::TabletPointerType pt=(osgGA::GUIEventAdapter::TabletPointerType)lua_tointeger(L,2);
		bool isEntering=(bool)(lua_toboolean(L,3)==1);

		osgGA::EventQueue* self=Luna< osg::Referenced >::checkSubType< osgGA::EventQueue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::EventQueue::penProximity(osgGA::GUIEventAdapter::TabletPointerType, bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->penProximity(pt, isEntering);

		return 0;
	}

	// void osgGA::EventQueue::penProximity(osgGA::GUIEventAdapter::TabletPointerType pt, bool isEntering, double time)
	static int _bind_penProximity_overload_2(lua_State *L) {
		if (!_lg_typecheck_penProximity_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::EventQueue::penProximity(osgGA::GUIEventAdapter::TabletPointerType pt, bool isEntering, double time) function, expected prototype:\nvoid osgGA::EventQueue::penProximity(osgGA::GUIEventAdapter::TabletPointerType pt, bool isEntering, double time)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osgGA::GUIEventAdapter::TabletPointerType pt=(osgGA::GUIEventAdapter::TabletPointerType)lua_tointeger(L,2);
		bool isEntering=(bool)(lua_toboolean(L,3)==1);
		double time=(double)lua_tonumber(L,4);

		osgGA::EventQueue* self=Luna< osg::Referenced >::checkSubType< osgGA::EventQueue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::EventQueue::penProximity(osgGA::GUIEventAdapter::TabletPointerType, bool, double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->penProximity(pt, isEntering, time);

		return 0;
	}

	// Overload binder for osgGA::EventQueue::penProximity
	static int _bind_penProximity(lua_State *L) {
		if (_lg_typecheck_penProximity_overload_1(L)) return _bind_penProximity_overload_1(L);
		if (_lg_typecheck_penProximity_overload_2(L)) return _bind_penProximity_overload_2(L);

		luaL_error(L, "error in function penProximity, cannot match any of the overloads for function penProximity:\n  penProximity(osgGA::GUIEventAdapter::TabletPointerType, bool)\n  penProximity(osgGA::GUIEventAdapter::TabletPointerType, bool, double)\n");
		return 0;
	}

	// void osgGA::EventQueue::mouseWarped(float x, float y)
	static int _bind_mouseWarped(lua_State *L) {
		if (!_lg_typecheck_mouseWarped(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::EventQueue::mouseWarped(float x, float y) function, expected prototype:\nvoid osgGA::EventQueue::mouseWarped(float x, float y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float x=(float)lua_tonumber(L,2);
		float y=(float)lua_tonumber(L,3);

		osgGA::EventQueue* self=Luna< osg::Referenced >::checkSubType< osgGA::EventQueue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::EventQueue::mouseWarped(float, float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->mouseWarped(x, y);

		return 0;
	}

	// void osgGA::EventQueue::mouseMotion(float x, float y)
	static int _bind_mouseMotion_overload_1(lua_State *L) {
		if (!_lg_typecheck_mouseMotion_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::EventQueue::mouseMotion(float x, float y) function, expected prototype:\nvoid osgGA::EventQueue::mouseMotion(float x, float y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float x=(float)lua_tonumber(L,2);
		float y=(float)lua_tonumber(L,3);

		osgGA::EventQueue* self=Luna< osg::Referenced >::checkSubType< osgGA::EventQueue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::EventQueue::mouseMotion(float, float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->mouseMotion(x, y);

		return 0;
	}

	// void osgGA::EventQueue::mouseMotion(float x, float y, double time)
	static int _bind_mouseMotion_overload_2(lua_State *L) {
		if (!_lg_typecheck_mouseMotion_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::EventQueue::mouseMotion(float x, float y, double time) function, expected prototype:\nvoid osgGA::EventQueue::mouseMotion(float x, float y, double time)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float x=(float)lua_tonumber(L,2);
		float y=(float)lua_tonumber(L,3);
		double time=(double)lua_tonumber(L,4);

		osgGA::EventQueue* self=Luna< osg::Referenced >::checkSubType< osgGA::EventQueue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::EventQueue::mouseMotion(float, float, double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->mouseMotion(x, y, time);

		return 0;
	}

	// Overload binder for osgGA::EventQueue::mouseMotion
	static int _bind_mouseMotion(lua_State *L) {
		if (_lg_typecheck_mouseMotion_overload_1(L)) return _bind_mouseMotion_overload_1(L);
		if (_lg_typecheck_mouseMotion_overload_2(L)) return _bind_mouseMotion_overload_2(L);

		luaL_error(L, "error in function mouseMotion, cannot match any of the overloads for function mouseMotion:\n  mouseMotion(float, float)\n  mouseMotion(float, float, double)\n");
		return 0;
	}

	// void osgGA::EventQueue::mouseButtonPress(float x, float y, unsigned int button)
	static int _bind_mouseButtonPress_overload_1(lua_State *L) {
		if (!_lg_typecheck_mouseButtonPress_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::EventQueue::mouseButtonPress(float x, float y, unsigned int button) function, expected prototype:\nvoid osgGA::EventQueue::mouseButtonPress(float x, float y, unsigned int button)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float x=(float)lua_tonumber(L,2);
		float y=(float)lua_tonumber(L,3);
		unsigned int button=(unsigned int)lua_tointeger(L,4);

		osgGA::EventQueue* self=Luna< osg::Referenced >::checkSubType< osgGA::EventQueue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::EventQueue::mouseButtonPress(float, float, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->mouseButtonPress(x, y, button);

		return 0;
	}

	// void osgGA::EventQueue::mouseButtonPress(float x, float y, unsigned int button, double time)
	static int _bind_mouseButtonPress_overload_2(lua_State *L) {
		if (!_lg_typecheck_mouseButtonPress_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::EventQueue::mouseButtonPress(float x, float y, unsigned int button, double time) function, expected prototype:\nvoid osgGA::EventQueue::mouseButtonPress(float x, float y, unsigned int button, double time)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float x=(float)lua_tonumber(L,2);
		float y=(float)lua_tonumber(L,3);
		unsigned int button=(unsigned int)lua_tointeger(L,4);
		double time=(double)lua_tonumber(L,5);

		osgGA::EventQueue* self=Luna< osg::Referenced >::checkSubType< osgGA::EventQueue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::EventQueue::mouseButtonPress(float, float, unsigned int, double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->mouseButtonPress(x, y, button, time);

		return 0;
	}

	// Overload binder for osgGA::EventQueue::mouseButtonPress
	static int _bind_mouseButtonPress(lua_State *L) {
		if (_lg_typecheck_mouseButtonPress_overload_1(L)) return _bind_mouseButtonPress_overload_1(L);
		if (_lg_typecheck_mouseButtonPress_overload_2(L)) return _bind_mouseButtonPress_overload_2(L);

		luaL_error(L, "error in function mouseButtonPress, cannot match any of the overloads for function mouseButtonPress:\n  mouseButtonPress(float, float, unsigned int)\n  mouseButtonPress(float, float, unsigned int, double)\n");
		return 0;
	}

	// void osgGA::EventQueue::mouseDoubleButtonPress(float x, float y, unsigned int button)
	static int _bind_mouseDoubleButtonPress_overload_1(lua_State *L) {
		if (!_lg_typecheck_mouseDoubleButtonPress_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::EventQueue::mouseDoubleButtonPress(float x, float y, unsigned int button) function, expected prototype:\nvoid osgGA::EventQueue::mouseDoubleButtonPress(float x, float y, unsigned int button)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float x=(float)lua_tonumber(L,2);
		float y=(float)lua_tonumber(L,3);
		unsigned int button=(unsigned int)lua_tointeger(L,4);

		osgGA::EventQueue* self=Luna< osg::Referenced >::checkSubType< osgGA::EventQueue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::EventQueue::mouseDoubleButtonPress(float, float, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->mouseDoubleButtonPress(x, y, button);

		return 0;
	}

	// void osgGA::EventQueue::mouseDoubleButtonPress(float x, float y, unsigned int button, double time)
	static int _bind_mouseDoubleButtonPress_overload_2(lua_State *L) {
		if (!_lg_typecheck_mouseDoubleButtonPress_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::EventQueue::mouseDoubleButtonPress(float x, float y, unsigned int button, double time) function, expected prototype:\nvoid osgGA::EventQueue::mouseDoubleButtonPress(float x, float y, unsigned int button, double time)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float x=(float)lua_tonumber(L,2);
		float y=(float)lua_tonumber(L,3);
		unsigned int button=(unsigned int)lua_tointeger(L,4);
		double time=(double)lua_tonumber(L,5);

		osgGA::EventQueue* self=Luna< osg::Referenced >::checkSubType< osgGA::EventQueue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::EventQueue::mouseDoubleButtonPress(float, float, unsigned int, double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->mouseDoubleButtonPress(x, y, button, time);

		return 0;
	}

	// Overload binder for osgGA::EventQueue::mouseDoubleButtonPress
	static int _bind_mouseDoubleButtonPress(lua_State *L) {
		if (_lg_typecheck_mouseDoubleButtonPress_overload_1(L)) return _bind_mouseDoubleButtonPress_overload_1(L);
		if (_lg_typecheck_mouseDoubleButtonPress_overload_2(L)) return _bind_mouseDoubleButtonPress_overload_2(L);

		luaL_error(L, "error in function mouseDoubleButtonPress, cannot match any of the overloads for function mouseDoubleButtonPress:\n  mouseDoubleButtonPress(float, float, unsigned int)\n  mouseDoubleButtonPress(float, float, unsigned int, double)\n");
		return 0;
	}

	// void osgGA::EventQueue::mouseButtonRelease(float x, float y, unsigned int button)
	static int _bind_mouseButtonRelease_overload_1(lua_State *L) {
		if (!_lg_typecheck_mouseButtonRelease_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::EventQueue::mouseButtonRelease(float x, float y, unsigned int button) function, expected prototype:\nvoid osgGA::EventQueue::mouseButtonRelease(float x, float y, unsigned int button)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float x=(float)lua_tonumber(L,2);
		float y=(float)lua_tonumber(L,3);
		unsigned int button=(unsigned int)lua_tointeger(L,4);

		osgGA::EventQueue* self=Luna< osg::Referenced >::checkSubType< osgGA::EventQueue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::EventQueue::mouseButtonRelease(float, float, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->mouseButtonRelease(x, y, button);

		return 0;
	}

	// void osgGA::EventQueue::mouseButtonRelease(float x, float y, unsigned int button, double time)
	static int _bind_mouseButtonRelease_overload_2(lua_State *L) {
		if (!_lg_typecheck_mouseButtonRelease_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::EventQueue::mouseButtonRelease(float x, float y, unsigned int button, double time) function, expected prototype:\nvoid osgGA::EventQueue::mouseButtonRelease(float x, float y, unsigned int button, double time)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float x=(float)lua_tonumber(L,2);
		float y=(float)lua_tonumber(L,3);
		unsigned int button=(unsigned int)lua_tointeger(L,4);
		double time=(double)lua_tonumber(L,5);

		osgGA::EventQueue* self=Luna< osg::Referenced >::checkSubType< osgGA::EventQueue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::EventQueue::mouseButtonRelease(float, float, unsigned int, double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->mouseButtonRelease(x, y, button, time);

		return 0;
	}

	// Overload binder for osgGA::EventQueue::mouseButtonRelease
	static int _bind_mouseButtonRelease(lua_State *L) {
		if (_lg_typecheck_mouseButtonRelease_overload_1(L)) return _bind_mouseButtonRelease_overload_1(L);
		if (_lg_typecheck_mouseButtonRelease_overload_2(L)) return _bind_mouseButtonRelease_overload_2(L);

		luaL_error(L, "error in function mouseButtonRelease, cannot match any of the overloads for function mouseButtonRelease:\n  mouseButtonRelease(float, float, unsigned int)\n  mouseButtonRelease(float, float, unsigned int, double)\n");
		return 0;
	}

	// void osgGA::EventQueue::keyPress(int key, int unmodifiedKey = 0)
	static int _bind_keyPress_overload_1(lua_State *L) {
		if (!_lg_typecheck_keyPress_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::EventQueue::keyPress(int key, int unmodifiedKey = 0) function, expected prototype:\nvoid osgGA::EventQueue::keyPress(int key, int unmodifiedKey = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int key=(int)lua_tointeger(L,2);
		int unmodifiedKey=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;

		osgGA::EventQueue* self=Luna< osg::Referenced >::checkSubType< osgGA::EventQueue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::EventQueue::keyPress(int, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->keyPress(key, unmodifiedKey);

		return 0;
	}

	// void osgGA::EventQueue::keyPress(int key, double time, int unmodifiedKey = 0)
	static int _bind_keyPress_overload_2(lua_State *L) {
		if (!_lg_typecheck_keyPress_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::EventQueue::keyPress(int key, double time, int unmodifiedKey = 0) function, expected prototype:\nvoid osgGA::EventQueue::keyPress(int key, double time, int unmodifiedKey = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int key=(int)lua_tointeger(L,2);
		double time=(double)lua_tonumber(L,3);
		int unmodifiedKey=luatop>3 ? (int)lua_tointeger(L,4) : (int)0;

		osgGA::EventQueue* self=Luna< osg::Referenced >::checkSubType< osgGA::EventQueue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::EventQueue::keyPress(int, double, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->keyPress(key, time, unmodifiedKey);

		return 0;
	}

	// Overload binder for osgGA::EventQueue::keyPress
	static int _bind_keyPress(lua_State *L) {
		if (_lg_typecheck_keyPress_overload_1(L)) return _bind_keyPress_overload_1(L);
		if (_lg_typecheck_keyPress_overload_2(L)) return _bind_keyPress_overload_2(L);

		luaL_error(L, "error in function keyPress, cannot match any of the overloads for function keyPress:\n  keyPress(int, int)\n  keyPress(int, double, int)\n");
		return 0;
	}

	// void osgGA::EventQueue::keyRelease(int key, int unmodifiedKey = 0)
	static int _bind_keyRelease_overload_1(lua_State *L) {
		if (!_lg_typecheck_keyRelease_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::EventQueue::keyRelease(int key, int unmodifiedKey = 0) function, expected prototype:\nvoid osgGA::EventQueue::keyRelease(int key, int unmodifiedKey = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int key=(int)lua_tointeger(L,2);
		int unmodifiedKey=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;

		osgGA::EventQueue* self=Luna< osg::Referenced >::checkSubType< osgGA::EventQueue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::EventQueue::keyRelease(int, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->keyRelease(key, unmodifiedKey);

		return 0;
	}

	// void osgGA::EventQueue::keyRelease(int key, double time, int unmodifiedKey = 0)
	static int _bind_keyRelease_overload_2(lua_State *L) {
		if (!_lg_typecheck_keyRelease_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::EventQueue::keyRelease(int key, double time, int unmodifiedKey = 0) function, expected prototype:\nvoid osgGA::EventQueue::keyRelease(int key, double time, int unmodifiedKey = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int key=(int)lua_tointeger(L,2);
		double time=(double)lua_tonumber(L,3);
		int unmodifiedKey=luatop>3 ? (int)lua_tointeger(L,4) : (int)0;

		osgGA::EventQueue* self=Luna< osg::Referenced >::checkSubType< osgGA::EventQueue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::EventQueue::keyRelease(int, double, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->keyRelease(key, time, unmodifiedKey);

		return 0;
	}

	// Overload binder for osgGA::EventQueue::keyRelease
	static int _bind_keyRelease(lua_State *L) {
		if (_lg_typecheck_keyRelease_overload_1(L)) return _bind_keyRelease_overload_1(L);
		if (_lg_typecheck_keyRelease_overload_2(L)) return _bind_keyRelease_overload_2(L);

		luaL_error(L, "error in function keyRelease, cannot match any of the overloads for function keyRelease:\n  keyRelease(int, int)\n  keyRelease(int, double, int)\n");
		return 0;
	}

	// osgGA::GUIEventAdapter * osgGA::EventQueue::touchBegan(unsigned int id, osgGA::GUIEventAdapter::TouchPhase phase, float x, float y, double time)
	static int _bind_touchBegan_overload_1(lua_State *L) {
		if (!_lg_typecheck_touchBegan_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgGA::GUIEventAdapter * osgGA::EventQueue::touchBegan(unsigned int id, osgGA::GUIEventAdapter::TouchPhase phase, float x, float y, double time) function, expected prototype:\nosgGA::GUIEventAdapter * osgGA::EventQueue::touchBegan(unsigned int id, osgGA::GUIEventAdapter::TouchPhase phase, float x, float y, double time)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int id=(unsigned int)lua_tointeger(L,2);
		osgGA::GUIEventAdapter::TouchPhase phase=(osgGA::GUIEventAdapter::TouchPhase)lua_tointeger(L,3);
		float x=(float)lua_tonumber(L,4);
		float y=(float)lua_tonumber(L,5);
		double time=(double)lua_tonumber(L,6);

		osgGA::EventQueue* self=Luna< osg::Referenced >::checkSubType< osgGA::EventQueue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgGA::GUIEventAdapter * osgGA::EventQueue::touchBegan(unsigned int, osgGA::GUIEventAdapter::TouchPhase, float, float, double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgGA::GUIEventAdapter * lret = self->touchBegan(id, phase, x, y, time);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgGA::GUIEventAdapter >::push(L,lret,false);

		return 1;
	}

	// osgGA::GUIEventAdapter * osgGA::EventQueue::touchBegan(unsigned int id, osgGA::GUIEventAdapter::TouchPhase phase, float x, float y)
	static int _bind_touchBegan_overload_2(lua_State *L) {
		if (!_lg_typecheck_touchBegan_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgGA::GUIEventAdapter * osgGA::EventQueue::touchBegan(unsigned int id, osgGA::GUIEventAdapter::TouchPhase phase, float x, float y) function, expected prototype:\nosgGA::GUIEventAdapter * osgGA::EventQueue::touchBegan(unsigned int id, osgGA::GUIEventAdapter::TouchPhase phase, float x, float y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int id=(unsigned int)lua_tointeger(L,2);
		osgGA::GUIEventAdapter::TouchPhase phase=(osgGA::GUIEventAdapter::TouchPhase)lua_tointeger(L,3);
		float x=(float)lua_tonumber(L,4);
		float y=(float)lua_tonumber(L,5);

		osgGA::EventQueue* self=Luna< osg::Referenced >::checkSubType< osgGA::EventQueue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgGA::GUIEventAdapter * osgGA::EventQueue::touchBegan(unsigned int, osgGA::GUIEventAdapter::TouchPhase, float, float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgGA::GUIEventAdapter * lret = self->touchBegan(id, phase, x, y);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgGA::GUIEventAdapter >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgGA::EventQueue::touchBegan
	static int _bind_touchBegan(lua_State *L) {
		if (_lg_typecheck_touchBegan_overload_1(L)) return _bind_touchBegan_overload_1(L);
		if (_lg_typecheck_touchBegan_overload_2(L)) return _bind_touchBegan_overload_2(L);

		luaL_error(L, "error in function touchBegan, cannot match any of the overloads for function touchBegan:\n  touchBegan(unsigned int, osgGA::GUIEventAdapter::TouchPhase, float, float, double)\n  touchBegan(unsigned int, osgGA::GUIEventAdapter::TouchPhase, float, float)\n");
		return 0;
	}

	// osgGA::GUIEventAdapter * osgGA::EventQueue::touchMoved(unsigned int id, osgGA::GUIEventAdapter::TouchPhase phase, float x, float y, double time)
	static int _bind_touchMoved_overload_1(lua_State *L) {
		if (!_lg_typecheck_touchMoved_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgGA::GUIEventAdapter * osgGA::EventQueue::touchMoved(unsigned int id, osgGA::GUIEventAdapter::TouchPhase phase, float x, float y, double time) function, expected prototype:\nosgGA::GUIEventAdapter * osgGA::EventQueue::touchMoved(unsigned int id, osgGA::GUIEventAdapter::TouchPhase phase, float x, float y, double time)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int id=(unsigned int)lua_tointeger(L,2);
		osgGA::GUIEventAdapter::TouchPhase phase=(osgGA::GUIEventAdapter::TouchPhase)lua_tointeger(L,3);
		float x=(float)lua_tonumber(L,4);
		float y=(float)lua_tonumber(L,5);
		double time=(double)lua_tonumber(L,6);

		osgGA::EventQueue* self=Luna< osg::Referenced >::checkSubType< osgGA::EventQueue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgGA::GUIEventAdapter * osgGA::EventQueue::touchMoved(unsigned int, osgGA::GUIEventAdapter::TouchPhase, float, float, double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgGA::GUIEventAdapter * lret = self->touchMoved(id, phase, x, y, time);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgGA::GUIEventAdapter >::push(L,lret,false);

		return 1;
	}

	// osgGA::GUIEventAdapter * osgGA::EventQueue::touchMoved(unsigned int id, osgGA::GUIEventAdapter::TouchPhase phase, float x, float y)
	static int _bind_touchMoved_overload_2(lua_State *L) {
		if (!_lg_typecheck_touchMoved_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgGA::GUIEventAdapter * osgGA::EventQueue::touchMoved(unsigned int id, osgGA::GUIEventAdapter::TouchPhase phase, float x, float y) function, expected prototype:\nosgGA::GUIEventAdapter * osgGA::EventQueue::touchMoved(unsigned int id, osgGA::GUIEventAdapter::TouchPhase phase, float x, float y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int id=(unsigned int)lua_tointeger(L,2);
		osgGA::GUIEventAdapter::TouchPhase phase=(osgGA::GUIEventAdapter::TouchPhase)lua_tointeger(L,3);
		float x=(float)lua_tonumber(L,4);
		float y=(float)lua_tonumber(L,5);

		osgGA::EventQueue* self=Luna< osg::Referenced >::checkSubType< osgGA::EventQueue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgGA::GUIEventAdapter * osgGA::EventQueue::touchMoved(unsigned int, osgGA::GUIEventAdapter::TouchPhase, float, float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgGA::GUIEventAdapter * lret = self->touchMoved(id, phase, x, y);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgGA::GUIEventAdapter >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgGA::EventQueue::touchMoved
	static int _bind_touchMoved(lua_State *L) {
		if (_lg_typecheck_touchMoved_overload_1(L)) return _bind_touchMoved_overload_1(L);
		if (_lg_typecheck_touchMoved_overload_2(L)) return _bind_touchMoved_overload_2(L);

		luaL_error(L, "error in function touchMoved, cannot match any of the overloads for function touchMoved:\n  touchMoved(unsigned int, osgGA::GUIEventAdapter::TouchPhase, float, float, double)\n  touchMoved(unsigned int, osgGA::GUIEventAdapter::TouchPhase, float, float)\n");
		return 0;
	}

	// osgGA::GUIEventAdapter * osgGA::EventQueue::touchEnded(unsigned int id, osgGA::GUIEventAdapter::TouchPhase phase, float x, float y, unsigned int tap_count, double time)
	static int _bind_touchEnded_overload_1(lua_State *L) {
		if (!_lg_typecheck_touchEnded_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgGA::GUIEventAdapter * osgGA::EventQueue::touchEnded(unsigned int id, osgGA::GUIEventAdapter::TouchPhase phase, float x, float y, unsigned int tap_count, double time) function, expected prototype:\nosgGA::GUIEventAdapter * osgGA::EventQueue::touchEnded(unsigned int id, osgGA::GUIEventAdapter::TouchPhase phase, float x, float y, unsigned int tap_count, double time)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int id=(unsigned int)lua_tointeger(L,2);
		osgGA::GUIEventAdapter::TouchPhase phase=(osgGA::GUIEventAdapter::TouchPhase)lua_tointeger(L,3);
		float x=(float)lua_tonumber(L,4);
		float y=(float)lua_tonumber(L,5);
		unsigned int tap_count=(unsigned int)lua_tointeger(L,6);
		double time=(double)lua_tonumber(L,7);

		osgGA::EventQueue* self=Luna< osg::Referenced >::checkSubType< osgGA::EventQueue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgGA::GUIEventAdapter * osgGA::EventQueue::touchEnded(unsigned int, osgGA::GUIEventAdapter::TouchPhase, float, float, unsigned int, double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgGA::GUIEventAdapter * lret = self->touchEnded(id, phase, x, y, tap_count, time);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgGA::GUIEventAdapter >::push(L,lret,false);

		return 1;
	}

	// osgGA::GUIEventAdapter * osgGA::EventQueue::touchEnded(unsigned int id, osgGA::GUIEventAdapter::TouchPhase phase, float x, float y, unsigned int tap_count)
	static int _bind_touchEnded_overload_2(lua_State *L) {
		if (!_lg_typecheck_touchEnded_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgGA::GUIEventAdapter * osgGA::EventQueue::touchEnded(unsigned int id, osgGA::GUIEventAdapter::TouchPhase phase, float x, float y, unsigned int tap_count) function, expected prototype:\nosgGA::GUIEventAdapter * osgGA::EventQueue::touchEnded(unsigned int id, osgGA::GUIEventAdapter::TouchPhase phase, float x, float y, unsigned int tap_count)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int id=(unsigned int)lua_tointeger(L,2);
		osgGA::GUIEventAdapter::TouchPhase phase=(osgGA::GUIEventAdapter::TouchPhase)lua_tointeger(L,3);
		float x=(float)lua_tonumber(L,4);
		float y=(float)lua_tonumber(L,5);
		unsigned int tap_count=(unsigned int)lua_tointeger(L,6);

		osgGA::EventQueue* self=Luna< osg::Referenced >::checkSubType< osgGA::EventQueue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgGA::GUIEventAdapter * osgGA::EventQueue::touchEnded(unsigned int, osgGA::GUIEventAdapter::TouchPhase, float, float, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgGA::GUIEventAdapter * lret = self->touchEnded(id, phase, x, y, tap_count);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgGA::GUIEventAdapter >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgGA::EventQueue::touchEnded
	static int _bind_touchEnded(lua_State *L) {
		if (_lg_typecheck_touchEnded_overload_1(L)) return _bind_touchEnded_overload_1(L);
		if (_lg_typecheck_touchEnded_overload_2(L)) return _bind_touchEnded_overload_2(L);

		luaL_error(L, "error in function touchEnded, cannot match any of the overloads for function touchEnded:\n  touchEnded(unsigned int, osgGA::GUIEventAdapter::TouchPhase, float, float, unsigned int, double)\n  touchEnded(unsigned int, osgGA::GUIEventAdapter::TouchPhase, float, float, unsigned int)\n");
		return 0;
	}

	// void osgGA::EventQueue::closeWindow()
	static int _bind_closeWindow_overload_1(lua_State *L) {
		if (!_lg_typecheck_closeWindow_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::EventQueue::closeWindow() function, expected prototype:\nvoid osgGA::EventQueue::closeWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::EventQueue* self=Luna< osg::Referenced >::checkSubType< osgGA::EventQueue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::EventQueue::closeWindow(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->closeWindow();

		return 0;
	}

	// void osgGA::EventQueue::closeWindow(double time)
	static int _bind_closeWindow_overload_2(lua_State *L) {
		if (!_lg_typecheck_closeWindow_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::EventQueue::closeWindow(double time) function, expected prototype:\nvoid osgGA::EventQueue::closeWindow(double time)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double time=(double)lua_tonumber(L,2);

		osgGA::EventQueue* self=Luna< osg::Referenced >::checkSubType< osgGA::EventQueue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::EventQueue::closeWindow(double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->closeWindow(time);

		return 0;
	}

	// Overload binder for osgGA::EventQueue::closeWindow
	static int _bind_closeWindow(lua_State *L) {
		if (_lg_typecheck_closeWindow_overload_1(L)) return _bind_closeWindow_overload_1(L);
		if (_lg_typecheck_closeWindow_overload_2(L)) return _bind_closeWindow_overload_2(L);

		luaL_error(L, "error in function closeWindow, cannot match any of the overloads for function closeWindow:\n  closeWindow()\n  closeWindow(double)\n");
		return 0;
	}

	// void osgGA::EventQueue::quitApplication()
	static int _bind_quitApplication_overload_1(lua_State *L) {
		if (!_lg_typecheck_quitApplication_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::EventQueue::quitApplication() function, expected prototype:\nvoid osgGA::EventQueue::quitApplication()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::EventQueue* self=Luna< osg::Referenced >::checkSubType< osgGA::EventQueue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::EventQueue::quitApplication(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->quitApplication();

		return 0;
	}

	// void osgGA::EventQueue::quitApplication(double time)
	static int _bind_quitApplication_overload_2(lua_State *L) {
		if (!_lg_typecheck_quitApplication_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::EventQueue::quitApplication(double time) function, expected prototype:\nvoid osgGA::EventQueue::quitApplication(double time)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double time=(double)lua_tonumber(L,2);

		osgGA::EventQueue* self=Luna< osg::Referenced >::checkSubType< osgGA::EventQueue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::EventQueue::quitApplication(double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->quitApplication(time);

		return 0;
	}

	// Overload binder for osgGA::EventQueue::quitApplication
	static int _bind_quitApplication(lua_State *L) {
		if (_lg_typecheck_quitApplication_overload_1(L)) return _bind_quitApplication_overload_1(L);
		if (_lg_typecheck_quitApplication_overload_2(L)) return _bind_quitApplication_overload_2(L);

		luaL_error(L, "error in function quitApplication, cannot match any of the overloads for function quitApplication:\n  quitApplication()\n  quitApplication(double)\n");
		return 0;
	}

	// void osgGA::EventQueue::frame(double time)
	static int _bind_frame(lua_State *L) {
		if (!_lg_typecheck_frame(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::EventQueue::frame(double time) function, expected prototype:\nvoid osgGA::EventQueue::frame(double time)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double time=(double)lua_tonumber(L,2);

		osgGA::EventQueue* self=Luna< osg::Referenced >::checkSubType< osgGA::EventQueue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::EventQueue::frame(double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->frame(time);

		return 0;
	}

	// void osgGA::EventQueue::setStartTick(__int64 tick)
	static int _bind_setStartTick(lua_State *L) {
		if (!_lg_typecheck_setStartTick(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::EventQueue::setStartTick(__int64 tick) function, expected prototype:\nvoid osgGA::EventQueue::setStartTick(__int64 tick)\nClass arguments details:\narg 1 ID = 32973728\n\n%s",luna_dumpStack(L).c_str());
		}

		__int64* tick_ptr=(Luna< __int64 >::check(L,2));
		if( !tick_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg tick in osgGA::EventQueue::setStartTick function");
		}
		__int64 tick=*tick_ptr;

		osgGA::EventQueue* self=Luna< osg::Referenced >::checkSubType< osgGA::EventQueue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::EventQueue::setStartTick(__int64). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setStartTick(tick);

		return 0;
	}

	// __int64 osgGA::EventQueue::getStartTick() const
	static int _bind_getStartTick(lua_State *L) {
		if (!_lg_typecheck_getStartTick(L)) {
			luaL_error(L, "luna typecheck failed in __int64 osgGA::EventQueue::getStartTick() const function, expected prototype:\n__int64 osgGA::EventQueue::getStartTick() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::EventQueue* self=Luna< osg::Referenced >::checkSubType< osgGA::EventQueue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call __int64 osgGA::EventQueue::getStartTick() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		__int64 stack_lret = self->getStartTick();
		__int64* lret = new __int64(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< __int64 >::push(L,lret,true);

		return 1;
	}

	// double osgGA::EventQueue::getTime() const
	static int _bind_getTime(lua_State *L) {
		if (!_lg_typecheck_getTime(L)) {
			luaL_error(L, "luna typecheck failed in double osgGA::EventQueue::getTime() const function, expected prototype:\ndouble osgGA::EventQueue::getTime() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::EventQueue* self=Luna< osg::Referenced >::checkSubType< osgGA::EventQueue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double osgGA::EventQueue::getTime() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::EventQueue::clear()
	static int _bind_clear(lua_State *L) {
		if (!_lg_typecheck_clear(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::EventQueue::clear() function, expected prototype:\nvoid osgGA::EventQueue::clear()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::EventQueue* self=Luna< osg::Referenced >::checkSubType< osgGA::EventQueue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::EventQueue::clear(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->clear();

		return 0;
	}

	// osgGA::GUIEventAdapter * osgGA::EventQueue::createEvent()
	static int _bind_createEvent(lua_State *L) {
		if (!_lg_typecheck_createEvent(L)) {
			luaL_error(L, "luna typecheck failed in osgGA::GUIEventAdapter * osgGA::EventQueue::createEvent() function, expected prototype:\nosgGA::GUIEventAdapter * osgGA::EventQueue::createEvent()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::EventQueue* self=Luna< osg::Referenced >::checkSubType< osgGA::EventQueue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgGA::GUIEventAdapter * osgGA::EventQueue::createEvent(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgGA::GUIEventAdapter * lret = self->createEvent();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgGA::GUIEventAdapter >::push(L,lret,false);

		return 1;
	}

	// void osgGA::EventQueue::setCurrentEventState(osgGA::GUIEventAdapter * ea)
	static int _bind_setCurrentEventState(lua_State *L) {
		if (!_lg_typecheck_setCurrentEventState(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::EventQueue::setCurrentEventState(osgGA::GUIEventAdapter * ea) function, expected prototype:\nvoid osgGA::EventQueue::setCurrentEventState(osgGA::GUIEventAdapter * ea)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgGA::GUIEventAdapter* ea=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2));

		osgGA::EventQueue* self=Luna< osg::Referenced >::checkSubType< osgGA::EventQueue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::EventQueue::setCurrentEventState(osgGA::GUIEventAdapter *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setCurrentEventState(ea);

		return 0;
	}

	// osgGA::GUIEventAdapter * osgGA::EventQueue::getCurrentEventState()
	static int _bind_getCurrentEventState_overload_1(lua_State *L) {
		if (!_lg_typecheck_getCurrentEventState_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgGA::GUIEventAdapter * osgGA::EventQueue::getCurrentEventState() function, expected prototype:\nosgGA::GUIEventAdapter * osgGA::EventQueue::getCurrentEventState()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::EventQueue* self=Luna< osg::Referenced >::checkSubType< osgGA::EventQueue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgGA::GUIEventAdapter * osgGA::EventQueue::getCurrentEventState(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgGA::GUIEventAdapter * lret = self->getCurrentEventState();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgGA::GUIEventAdapter >::push(L,lret,false);

		return 1;
	}

	// const osgGA::GUIEventAdapter * osgGA::EventQueue::getCurrentEventState() const
	static int _bind_getCurrentEventState_overload_2(lua_State *L) {
		if (!_lg_typecheck_getCurrentEventState_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osgGA::GUIEventAdapter * osgGA::EventQueue::getCurrentEventState() const function, expected prototype:\nconst osgGA::GUIEventAdapter * osgGA::EventQueue::getCurrentEventState() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::EventQueue* self=Luna< osg::Referenced >::checkSubType< osgGA::EventQueue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgGA::GUIEventAdapter * osgGA::EventQueue::getCurrentEventState() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgGA::GUIEventAdapter * lret = self->getCurrentEventState();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgGA::GUIEventAdapter >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgGA::EventQueue::getCurrentEventState
	static int _bind_getCurrentEventState(lua_State *L) {
		if (_lg_typecheck_getCurrentEventState_overload_1(L)) return _bind_getCurrentEventState_overload_1(L);
		if (_lg_typecheck_getCurrentEventState_overload_2(L)) return _bind_getCurrentEventState_overload_2(L);

		luaL_error(L, "error in function getCurrentEventState, cannot match any of the overloads for function getCurrentEventState:\n  getCurrentEventState()\n  getCurrentEventState()\n");
		return 0;
	}

	// void osgGA::EventQueue::userEvent(osg::Referenced * userEventData)
	static int _bind_userEvent_overload_1(lua_State *L) {
		if (!_lg_typecheck_userEvent_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::EventQueue::userEvent(osg::Referenced * userEventData) function, expected prototype:\nvoid osgGA::EventQueue::userEvent(osg::Referenced * userEventData)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* userEventData=(Luna< osg::Referenced >::check(L,2));

		osgGA::EventQueue* self=Luna< osg::Referenced >::checkSubType< osgGA::EventQueue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::EventQueue::userEvent(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->userEvent(userEventData);

		return 0;
	}

	// void osgGA::EventQueue::userEvent(osg::Referenced * userEventData, double time)
	static int _bind_userEvent_overload_2(lua_State *L) {
		if (!_lg_typecheck_userEvent_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::EventQueue::userEvent(osg::Referenced * userEventData, double time) function, expected prototype:\nvoid osgGA::EventQueue::userEvent(osg::Referenced * userEventData, double time)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* userEventData=(Luna< osg::Referenced >::check(L,2));
		double time=(double)lua_tonumber(L,3);

		osgGA::EventQueue* self=Luna< osg::Referenced >::checkSubType< osgGA::EventQueue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::EventQueue::userEvent(osg::Referenced *, double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->userEvent(userEventData, time);

		return 0;
	}

	// Overload binder for osgGA::EventQueue::userEvent
	static int _bind_userEvent(lua_State *L) {
		if (_lg_typecheck_userEvent_overload_1(L)) return _bind_userEvent_overload_1(L);
		if (_lg_typecheck_userEvent_overload_2(L)) return _bind_userEvent_overload_2(L);

		luaL_error(L, "error in function userEvent, cannot match any of the overloads for function userEvent:\n  userEvent(osg::Referenced *)\n  userEvent(osg::Referenced *, double)\n");
		return 0;
	}

	// void osgGA::EventQueue::setFirstTouchEmulatesMouse(bool b)
	static int _bind_setFirstTouchEmulatesMouse(lua_State *L) {
		if (!_lg_typecheck_setFirstTouchEmulatesMouse(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::EventQueue::setFirstTouchEmulatesMouse(bool b) function, expected prototype:\nvoid osgGA::EventQueue::setFirstTouchEmulatesMouse(bool b)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool b=(bool)(lua_toboolean(L,2)==1);

		osgGA::EventQueue* self=Luna< osg::Referenced >::checkSubType< osgGA::EventQueue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::EventQueue::setFirstTouchEmulatesMouse(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setFirstTouchEmulatesMouse(b);

		return 0;
	}

	// bool osgGA::EventQueue::getFirstTouchEmulatesMouse() const
	static int _bind_getFirstTouchEmulatesMouse(lua_State *L) {
		if (!_lg_typecheck_getFirstTouchEmulatesMouse(L)) {
			luaL_error(L, "luna typecheck failed in bool osgGA::EventQueue::getFirstTouchEmulatesMouse() const function, expected prototype:\nbool osgGA::EventQueue::getFirstTouchEmulatesMouse() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::EventQueue* self=Luna< osg::Referenced >::checkSubType< osgGA::EventQueue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgGA::EventQueue::getFirstTouchEmulatesMouse() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getFirstTouchEmulatesMouse();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgGA::EventQueue::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::EventQueue::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgGA::EventQueue::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgGA::EventQueue* self=Luna< osg::Referenced >::checkSubType< osgGA::EventQueue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::EventQueue::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EventQueue::setThreadSafeRefUnref(threadSafe);

		return 0;
	}


	// Operator binds:

};

osgGA::EventQueue* LunaTraits< osgGA::EventQueue >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgGA_EventQueue::_bind_ctor(L);
}

void LunaTraits< osgGA::EventQueue >::_bind_dtor(osgGA::EventQueue* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgGA::EventQueue >::className[] = "EventQueue";
const char LunaTraits< osgGA::EventQueue >::fullName[] = "osgGA::EventQueue";
const char LunaTraits< osgGA::EventQueue >::moduleName[] = "osgGA";
const char* LunaTraits< osgGA::EventQueue >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgGA::EventQueue >::hash = 38975657;
const int LunaTraits< osgGA::EventQueue >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgGA::EventQueue >::methods[] = {
	{"setEvents", &luna_wrapper_osgGA_EventQueue::_bind_setEvents},
	{"takeEvents", &luna_wrapper_osgGA_EventQueue::_bind_takeEvents},
	{"copyEvents", &luna_wrapper_osgGA_EventQueue::_bind_copyEvents},
	{"appendEvents", &luna_wrapper_osgGA_EventQueue::_bind_appendEvents},
	{"addEvent", &luna_wrapper_osgGA_EventQueue::_bind_addEvent},
	{"setUseFixedMouseInputRange", &luna_wrapper_osgGA_EventQueue::_bind_setUseFixedMouseInputRange},
	{"getUseFixedMouseInputRange", &luna_wrapper_osgGA_EventQueue::_bind_getUseFixedMouseInputRange},
	{"setGraphicsContext", &luna_wrapper_osgGA_EventQueue::_bind_setGraphicsContext},
	{"setMouseInputRange", &luna_wrapper_osgGA_EventQueue::_bind_setMouseInputRange},
	{"windowResize", &luna_wrapper_osgGA_EventQueue::_bind_windowResize},
	{"mouseScroll", &luna_wrapper_osgGA_EventQueue::_bind_mouseScroll},
	{"mouseScroll2D", &luna_wrapper_osgGA_EventQueue::_bind_mouseScroll2D},
	{"penPressure", &luna_wrapper_osgGA_EventQueue::_bind_penPressure},
	{"penOrientation", &luna_wrapper_osgGA_EventQueue::_bind_penOrientation},
	{"penProximity", &luna_wrapper_osgGA_EventQueue::_bind_penProximity},
	{"mouseWarped", &luna_wrapper_osgGA_EventQueue::_bind_mouseWarped},
	{"mouseMotion", &luna_wrapper_osgGA_EventQueue::_bind_mouseMotion},
	{"mouseButtonPress", &luna_wrapper_osgGA_EventQueue::_bind_mouseButtonPress},
	{"mouseDoubleButtonPress", &luna_wrapper_osgGA_EventQueue::_bind_mouseDoubleButtonPress},
	{"mouseButtonRelease", &luna_wrapper_osgGA_EventQueue::_bind_mouseButtonRelease},
	{"keyPress", &luna_wrapper_osgGA_EventQueue::_bind_keyPress},
	{"keyRelease", &luna_wrapper_osgGA_EventQueue::_bind_keyRelease},
	{"touchBegan", &luna_wrapper_osgGA_EventQueue::_bind_touchBegan},
	{"touchMoved", &luna_wrapper_osgGA_EventQueue::_bind_touchMoved},
	{"touchEnded", &luna_wrapper_osgGA_EventQueue::_bind_touchEnded},
	{"closeWindow", &luna_wrapper_osgGA_EventQueue::_bind_closeWindow},
	{"quitApplication", &luna_wrapper_osgGA_EventQueue::_bind_quitApplication},
	{"frame", &luna_wrapper_osgGA_EventQueue::_bind_frame},
	{"setStartTick", &luna_wrapper_osgGA_EventQueue::_bind_setStartTick},
	{"getStartTick", &luna_wrapper_osgGA_EventQueue::_bind_getStartTick},
	{"getTime", &luna_wrapper_osgGA_EventQueue::_bind_getTime},
	{"clear", &luna_wrapper_osgGA_EventQueue::_bind_clear},
	{"createEvent", &luna_wrapper_osgGA_EventQueue::_bind_createEvent},
	{"setCurrentEventState", &luna_wrapper_osgGA_EventQueue::_bind_setCurrentEventState},
	{"getCurrentEventState", &luna_wrapper_osgGA_EventQueue::_bind_getCurrentEventState},
	{"userEvent", &luna_wrapper_osgGA_EventQueue::_bind_userEvent},
	{"setFirstTouchEmulatesMouse", &luna_wrapper_osgGA_EventQueue::_bind_setFirstTouchEmulatesMouse},
	{"getFirstTouchEmulatesMouse", &luna_wrapper_osgGA_EventQueue::_bind_getFirstTouchEmulatesMouse},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgGA_EventQueue::_bind_base_setThreadSafeRefUnref},
	{"fromVoid", &luna_wrapper_osgGA_EventQueue::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgGA_EventQueue::_bind_asVoid},
	{"getTable", &luna_wrapper_osgGA_EventQueue::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgGA::EventQueue >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgGA_EventQueue::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgGA::EventQueue >::enumValues[] = {
	{0,0}
};


