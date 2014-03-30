#include <plug_common.h>

#include <luna/wrappers/wrapper_osgGA_GUIEventHandler.h>

class luna_wrapper_osgGA_GUIEventHandler {
public:
	typedef Luna< osgGA::GUIEventHandler > luna_t;

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

		osgGA::GUIEventHandler* self= (osgGA::GUIEventHandler*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgGA::GUIEventHandler >::push(L,self,false);
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
		//osgGA::GUIEventHandler* ptr= dynamic_cast< osgGA::GUIEventHandler* >(Luna< osg::Referenced >::check(L,1));
		osgGA::GUIEventHandler* ptr= luna_caster< osg::Referenced, osgGA::GUIEventHandler >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgGA::GUIEventHandler >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventHandler >(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( (!(Luna< osg::CopyOp >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventHandler >(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,27134364) ) return false;
		if( (!(Luna< osg::CopyOp >::check(L,3))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_cloneType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_clone(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isSameKindAs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_event(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_handle_overload_1(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85302998) ) return false;
		if( (!(Luna< osgGA::GUIActionAdapter >::check(L,3))) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		if( (lua_isnil(L,4)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Object >(L,4)) ) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,50169651)) ) return false;
		if( (lua_isnil(L,5)==0 && !(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,5)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_handle_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85302998) ) return false;
		if( (!(Luna< osgGA::GUIActionAdapter >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_handleWithCheckAgainstIgnoreHandledEventsMask_overload_1(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85302998) ) return false;
		if( (!(Luna< osgGA::GUIActionAdapter >::check(L,3))) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		if( (lua_isnil(L,4)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Object >(L,4)) ) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,50169651)) ) return false;
		if( (lua_isnil(L,5)==0 && !(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,5)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_handleWithCheckAgainstIgnoreHandledEventsMask_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85302998) ) return false;
		if( (!(Luna< osgGA::GUIActionAdapter >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUsage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setIgnoreHandledEventsMask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getIgnoreHandledEventsMask(lua_State *L) {
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

	inline static bool _lg_typecheck_base_cloneType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_clone(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_isSameKindAs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
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

	inline static bool _lg_typecheck_base_event(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_handle_overload_1(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85302998) ) return false;
		if( (!(Luna< osgGA::GUIActionAdapter >::check(L,3))) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		if( (lua_isnil(L,4)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Object >(L,4)) ) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,50169651)) ) return false;
		if( (lua_isnil(L,5)==0 && !(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,5)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_handle_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85302998) ) return false;
		if( (!(Luna< osgGA::GUIActionAdapter >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getUsage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck_op_call(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}


	// Constructor binds:
	// osgGA::GUIEventHandler::GUIEventHandler()
	static osgGA::GUIEventHandler* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgGA::GUIEventHandler::GUIEventHandler() function, expected prototype:\nosgGA::GUIEventHandler::GUIEventHandler()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osgGA::GUIEventHandler();
	}

	// osgGA::GUIEventHandler::GUIEventHandler(const osgGA::GUIEventHandler & eh, const osg::CopyOp & copyop)
	static osgGA::GUIEventHandler* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgGA::GUIEventHandler::GUIEventHandler(const osgGA::GUIEventHandler & eh, const osg::CopyOp & copyop) function, expected prototype:\nosgGA::GUIEventHandler::GUIEventHandler(const osgGA::GUIEventHandler & eh, const osg::CopyOp & copyop)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgGA::GUIEventHandler* eh_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventHandler >(L,1));
		if( !eh_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg eh in osgGA::GUIEventHandler::GUIEventHandler function");
		}
		const osgGA::GUIEventHandler & eh=*eh_ptr;
		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgGA::GUIEventHandler::GUIEventHandler function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		return new osgGA::GUIEventHandler(eh, copyop);
	}

	// osgGA::GUIEventHandler::GUIEventHandler(lua_Table * data)
	static osgGA::GUIEventHandler* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osgGA::GUIEventHandler::GUIEventHandler(lua_Table * data) function, expected prototype:\nosgGA::GUIEventHandler::GUIEventHandler(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgGA_GUIEventHandler(L,NULL);
	}

	// osgGA::GUIEventHandler::GUIEventHandler(lua_Table * data, const osgGA::GUIEventHandler & eh, const osg::CopyOp & copyop)
	static osgGA::GUIEventHandler* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osgGA::GUIEventHandler::GUIEventHandler(lua_Table * data, const osgGA::GUIEventHandler & eh, const osg::CopyOp & copyop) function, expected prototype:\nosgGA::GUIEventHandler::GUIEventHandler(lua_Table * data, const osgGA::GUIEventHandler & eh, const osg::CopyOp & copyop)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgGA::GUIEventHandler* eh_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventHandler >(L,2));
		if( !eh_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg eh in osgGA::GUIEventHandler::GUIEventHandler function");
		}
		const osgGA::GUIEventHandler & eh=*eh_ptr;
		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,3));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgGA::GUIEventHandler::GUIEventHandler function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		return new wrapper_osgGA_GUIEventHandler(L,NULL, eh, copyop);
	}

	// Overload binder for osgGA::GUIEventHandler::GUIEventHandler
	static osgGA::GUIEventHandler* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function GUIEventHandler, cannot match any of the overloads for function GUIEventHandler:\n  GUIEventHandler()\n  GUIEventHandler(const osgGA::GUIEventHandler &, const osg::CopyOp &)\n  GUIEventHandler(lua_Table *)\n  GUIEventHandler(lua_Table *, const osgGA::GUIEventHandler &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgGA::GUIEventHandler::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgGA::GUIEventHandler::cloneType() const function, expected prototype:\nosg::Object * osgGA::GUIEventHandler::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::GUIEventHandler* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgGA::GUIEventHandler::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgGA::GUIEventHandler::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgGA::GUIEventHandler::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgGA::GUIEventHandler::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgGA::GUIEventHandler::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgGA::GUIEventHandler* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgGA::GUIEventHandler::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgGA::GUIEventHandler::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgGA::GUIEventHandler::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgGA::GUIEventHandler::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgGA::GUIEventHandler* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgGA::GUIEventHandler::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgGA::GUIEventHandler::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgGA::GUIEventHandler::libraryName() const function, expected prototype:\nconst char * osgGA::GUIEventHandler::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::GUIEventHandler* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgGA::GUIEventHandler::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgGA::GUIEventHandler::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgGA::GUIEventHandler::className() const function, expected prototype:\nconst char * osgGA::GUIEventHandler::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::GUIEventHandler* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgGA::GUIEventHandler::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgGA::GUIEventHandler::event(osg::NodeVisitor * nv, osg::Drawable * drawable)
	static int _bind_event(lua_State *L) {
		if (!_lg_typecheck_event(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::GUIEventHandler::event(osg::NodeVisitor * nv, osg::Drawable * drawable) function, expected prototype:\nvoid osgGA::GUIEventHandler::event(osg::NodeVisitor * nv, osg::Drawable * drawable)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		osg::Drawable* drawable=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,3));

		osgGA::GUIEventHandler* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::GUIEventHandler::event(osg::NodeVisitor *, osg::Drawable *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->event(nv, drawable);

		return 0;
	}

	// bool osgGA::GUIEventHandler::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & aa, osg::Object * arg3, osg::NodeVisitor * arg4)
	static int _bind_handle_overload_1(lua_State *L) {
		if (!_lg_typecheck_handle_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool osgGA::GUIEventHandler::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & aa, osg::Object * arg3, osg::NodeVisitor * arg4) function, expected prototype:\nbool osgGA::GUIEventHandler::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & aa, osg::Object * arg3, osg::NodeVisitor * arg4)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\narg 3 ID = 50169651\narg 4 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgGA::GUIEventAdapter* ea_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2));
		if( !ea_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ea in osgGA::GUIEventHandler::handle function");
		}
		const osgGA::GUIEventAdapter & ea=*ea_ptr;
		osgGA::GUIActionAdapter* aa_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !aa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aa in osgGA::GUIEventHandler::handle function");
		}
		osgGA::GUIActionAdapter & aa=*aa_ptr;
		osg::Object* _arg3=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,4));
		osg::NodeVisitor* _arg4=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,5));

		osgGA::GUIEventHandler* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgGA::GUIEventHandler::handle(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &, osg::Object *, osg::NodeVisitor *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->handle(ea, aa, _arg3, _arg4);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgGA::GUIEventHandler::handle(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)
	static int _bind_handle_overload_2(lua_State *L) {
		if (!_lg_typecheck_handle_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool osgGA::GUIEventHandler::handle(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2) function, expected prototype:\nbool osgGA::GUIEventHandler::handle(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgGA::GUIEventAdapter* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgGA::GUIEventHandler::handle function");
		}
		const osgGA::GUIEventAdapter & _arg1=*_arg1_ptr;
		osgGA::GUIActionAdapter* _arg2_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgGA::GUIEventHandler::handle function");
		}
		osgGA::GUIActionAdapter & _arg2=*_arg2_ptr;

		osgGA::GUIEventHandler* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgGA::GUIEventHandler::handle(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->handle(_arg1, _arg2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for osgGA::GUIEventHandler::handle
	static int _bind_handle(lua_State *L) {
		if (_lg_typecheck_handle_overload_1(L)) return _bind_handle_overload_1(L);
		if (_lg_typecheck_handle_overload_2(L)) return _bind_handle_overload_2(L);

		luaL_error(L, "error in function handle, cannot match any of the overloads for function handle:\n  handle(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &, osg::Object *, osg::NodeVisitor *)\n  handle(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &)\n");
		return 0;
	}

	// bool osgGA::GUIEventHandler::handleWithCheckAgainstIgnoreHandledEventsMask(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & aa, osg::Object * object, osg::NodeVisitor * nv)
	static int _bind_handleWithCheckAgainstIgnoreHandledEventsMask_overload_1(lua_State *L) {
		if (!_lg_typecheck_handleWithCheckAgainstIgnoreHandledEventsMask_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool osgGA::GUIEventHandler::handleWithCheckAgainstIgnoreHandledEventsMask(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & aa, osg::Object * object, osg::NodeVisitor * nv) function, expected prototype:\nbool osgGA::GUIEventHandler::handleWithCheckAgainstIgnoreHandledEventsMask(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & aa, osg::Object * object, osg::NodeVisitor * nv)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\narg 3 ID = 50169651\narg 4 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgGA::GUIEventAdapter* ea_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2));
		if( !ea_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ea in osgGA::GUIEventHandler::handleWithCheckAgainstIgnoreHandledEventsMask function");
		}
		const osgGA::GUIEventAdapter & ea=*ea_ptr;
		osgGA::GUIActionAdapter* aa_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !aa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aa in osgGA::GUIEventHandler::handleWithCheckAgainstIgnoreHandledEventsMask function");
		}
		osgGA::GUIActionAdapter & aa=*aa_ptr;
		osg::Object* object=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,4));
		osg::NodeVisitor* nv=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,5));

		osgGA::GUIEventHandler* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgGA::GUIEventHandler::handleWithCheckAgainstIgnoreHandledEventsMask(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &, osg::Object *, osg::NodeVisitor *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->handleWithCheckAgainstIgnoreHandledEventsMask(ea, aa, object, nv);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgGA::GUIEventHandler::handleWithCheckAgainstIgnoreHandledEventsMask(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & aa)
	static int _bind_handleWithCheckAgainstIgnoreHandledEventsMask_overload_2(lua_State *L) {
		if (!_lg_typecheck_handleWithCheckAgainstIgnoreHandledEventsMask_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool osgGA::GUIEventHandler::handleWithCheckAgainstIgnoreHandledEventsMask(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & aa) function, expected prototype:\nbool osgGA::GUIEventHandler::handleWithCheckAgainstIgnoreHandledEventsMask(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & aa)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgGA::GUIEventAdapter* ea_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2));
		if( !ea_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ea in osgGA::GUIEventHandler::handleWithCheckAgainstIgnoreHandledEventsMask function");
		}
		const osgGA::GUIEventAdapter & ea=*ea_ptr;
		osgGA::GUIActionAdapter* aa_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !aa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aa in osgGA::GUIEventHandler::handleWithCheckAgainstIgnoreHandledEventsMask function");
		}
		osgGA::GUIActionAdapter & aa=*aa_ptr;

		osgGA::GUIEventHandler* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgGA::GUIEventHandler::handleWithCheckAgainstIgnoreHandledEventsMask(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->handleWithCheckAgainstIgnoreHandledEventsMask(ea, aa);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for osgGA::GUIEventHandler::handleWithCheckAgainstIgnoreHandledEventsMask
	static int _bind_handleWithCheckAgainstIgnoreHandledEventsMask(lua_State *L) {
		if (_lg_typecheck_handleWithCheckAgainstIgnoreHandledEventsMask_overload_1(L)) return _bind_handleWithCheckAgainstIgnoreHandledEventsMask_overload_1(L);
		if (_lg_typecheck_handleWithCheckAgainstIgnoreHandledEventsMask_overload_2(L)) return _bind_handleWithCheckAgainstIgnoreHandledEventsMask_overload_2(L);

		luaL_error(L, "error in function handleWithCheckAgainstIgnoreHandledEventsMask, cannot match any of the overloads for function handleWithCheckAgainstIgnoreHandledEventsMask:\n  handleWithCheckAgainstIgnoreHandledEventsMask(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &, osg::Object *, osg::NodeVisitor *)\n  handleWithCheckAgainstIgnoreHandledEventsMask(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &)\n");
		return 0;
	}

	// void osgGA::GUIEventHandler::getUsage(osg::ApplicationUsage & arg1) const
	static int _bind_getUsage(lua_State *L) {
		if (!_lg_typecheck_getUsage(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::GUIEventHandler::getUsage(osg::ApplicationUsage & arg1) const function, expected prototype:\nvoid osgGA::GUIEventHandler::getUsage(osg::ApplicationUsage & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ApplicationUsage* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::ApplicationUsage >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgGA::GUIEventHandler::getUsage function");
		}
		osg::ApplicationUsage & _arg1=*_arg1_ptr;

		osgGA::GUIEventHandler* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::GUIEventHandler::getUsage(osg::ApplicationUsage &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getUsage(_arg1);

		return 0;
	}

	// void osgGA::GUIEventHandler::setIgnoreHandledEventsMask(unsigned int mask)
	static int _bind_setIgnoreHandledEventsMask(lua_State *L) {
		if (!_lg_typecheck_setIgnoreHandledEventsMask(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::GUIEventHandler::setIgnoreHandledEventsMask(unsigned int mask) function, expected prototype:\nvoid osgGA::GUIEventHandler::setIgnoreHandledEventsMask(unsigned int mask)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int mask=(unsigned int)lua_tointeger(L,2);

		osgGA::GUIEventHandler* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::GUIEventHandler::setIgnoreHandledEventsMask(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setIgnoreHandledEventsMask(mask);

		return 0;
	}

	// unsigned int osgGA::GUIEventHandler::getIgnoreHandledEventsMask() const
	static int _bind_getIgnoreHandledEventsMask(lua_State *L) {
		if (!_lg_typecheck_getIgnoreHandledEventsMask(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osgGA::GUIEventHandler::getIgnoreHandledEventsMask() const function, expected prototype:\nunsigned int osgGA::GUIEventHandler::getIgnoreHandledEventsMask() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::GUIEventHandler* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osgGA::GUIEventHandler::getIgnoreHandledEventsMask() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getIgnoreHandledEventsMask();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::GUIEventHandler::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::GUIEventHandler::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgGA::GUIEventHandler::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgGA::GUIEventHandler* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::GUIEventHandler::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GUIEventHandler::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osgGA::GUIEventHandler::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::GUIEventHandler::base_setName(const std::string & name) function, expected prototype:\nvoid osgGA::GUIEventHandler::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgGA::GUIEventHandler* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::GUIEventHandler::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GUIEventHandler::setName(name);

		return 0;
	}

	// void osgGA::GUIEventHandler::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::GUIEventHandler::base_computeDataVariance() function, expected prototype:\nvoid osgGA::GUIEventHandler::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::GUIEventHandler* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::GUIEventHandler::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GUIEventHandler::computeDataVariance();

		return 0;
	}

	// void osgGA::GUIEventHandler::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::GUIEventHandler::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osgGA::GUIEventHandler::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osgGA::GUIEventHandler* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::GUIEventHandler::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GUIEventHandler::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osgGA::GUIEventHandler::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osgGA::GUIEventHandler::base_getUserData() function, expected prototype:\nosg::Referenced * osgGA::GUIEventHandler::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::GUIEventHandler* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osgGA::GUIEventHandler::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->GUIEventHandler::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osgGA::GUIEventHandler::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osgGA::GUIEventHandler::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osgGA::GUIEventHandler::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::GUIEventHandler* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osgGA::GUIEventHandler::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->GUIEventHandler::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgGA::GUIEventHandler::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osgGA::GUIEventHandler::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::GUIEventHandler::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osgGA::GUIEventHandler::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgGA::GUIEventHandler* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::GUIEventHandler::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GUIEventHandler::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osgGA::GUIEventHandler::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgGA::GUIEventHandler::base_cloneType() const function, expected prototype:\nosg::Object * osgGA::GUIEventHandler::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::GUIEventHandler* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgGA::GUIEventHandler::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->GUIEventHandler::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgGA::GUIEventHandler::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgGA::GUIEventHandler::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgGA::GUIEventHandler::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgGA::GUIEventHandler::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgGA::GUIEventHandler* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgGA::GUIEventHandler::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->GUIEventHandler::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgGA::GUIEventHandler::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgGA::GUIEventHandler::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgGA::GUIEventHandler::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgGA::GUIEventHandler* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgGA::GUIEventHandler::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GUIEventHandler::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgGA::GUIEventHandler::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgGA::GUIEventHandler::base_libraryName() const function, expected prototype:\nconst char * osgGA::GUIEventHandler::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::GUIEventHandler* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgGA::GUIEventHandler::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->GUIEventHandler::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgGA::GUIEventHandler::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgGA::GUIEventHandler::base_className() const function, expected prototype:\nconst char * osgGA::GUIEventHandler::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::GUIEventHandler* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgGA::GUIEventHandler::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->GUIEventHandler::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgGA::GUIEventHandler::base_event(osg::NodeVisitor * nv, osg::Drawable * drawable)
	static int _bind_base_event(lua_State *L) {
		if (!_lg_typecheck_base_event(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::GUIEventHandler::base_event(osg::NodeVisitor * nv, osg::Drawable * drawable) function, expected prototype:\nvoid osgGA::GUIEventHandler::base_event(osg::NodeVisitor * nv, osg::Drawable * drawable)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		osg::Drawable* drawable=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,3));

		osgGA::GUIEventHandler* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::GUIEventHandler::base_event(osg::NodeVisitor *, osg::Drawable *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GUIEventHandler::event(nv, drawable);

		return 0;
	}

	// bool osgGA::GUIEventHandler::base_handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & aa, osg::Object * arg3, osg::NodeVisitor * arg4)
	static int _bind_base_handle_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_handle_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool osgGA::GUIEventHandler::base_handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & aa, osg::Object * arg3, osg::NodeVisitor * arg4) function, expected prototype:\nbool osgGA::GUIEventHandler::base_handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & aa, osg::Object * arg3, osg::NodeVisitor * arg4)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\narg 3 ID = 50169651\narg 4 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgGA::GUIEventAdapter* ea_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2));
		if( !ea_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ea in osgGA::GUIEventHandler::base_handle function");
		}
		const osgGA::GUIEventAdapter & ea=*ea_ptr;
		osgGA::GUIActionAdapter* aa_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !aa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aa in osgGA::GUIEventHandler::base_handle function");
		}
		osgGA::GUIActionAdapter & aa=*aa_ptr;
		osg::Object* _arg3=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,4));
		osg::NodeVisitor* _arg4=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,5));

		osgGA::GUIEventHandler* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgGA::GUIEventHandler::base_handle(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &, osg::Object *, osg::NodeVisitor *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GUIEventHandler::handle(ea, aa, _arg3, _arg4);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgGA::GUIEventHandler::base_handle(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)
	static int _bind_base_handle_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_handle_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool osgGA::GUIEventHandler::base_handle(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2) function, expected prototype:\nbool osgGA::GUIEventHandler::base_handle(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgGA::GUIEventAdapter* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgGA::GUIEventHandler::base_handle function");
		}
		const osgGA::GUIEventAdapter & _arg1=*_arg1_ptr;
		osgGA::GUIActionAdapter* _arg2_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgGA::GUIEventHandler::base_handle function");
		}
		osgGA::GUIActionAdapter & _arg2=*_arg2_ptr;

		osgGA::GUIEventHandler* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgGA::GUIEventHandler::base_handle(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GUIEventHandler::handle(_arg1, _arg2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for osgGA::GUIEventHandler::base_handle
	static int _bind_base_handle(lua_State *L) {
		if (_lg_typecheck_base_handle_overload_1(L)) return _bind_base_handle_overload_1(L);
		if (_lg_typecheck_base_handle_overload_2(L)) return _bind_base_handle_overload_2(L);

		luaL_error(L, "error in function base_handle, cannot match any of the overloads for function base_handle:\n  base_handle(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &, osg::Object *, osg::NodeVisitor *)\n  base_handle(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &)\n");
		return 0;
	}

	// void osgGA::GUIEventHandler::base_getUsage(osg::ApplicationUsage & arg1) const
	static int _bind_base_getUsage(lua_State *L) {
		if (!_lg_typecheck_base_getUsage(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::GUIEventHandler::base_getUsage(osg::ApplicationUsage & arg1) const function, expected prototype:\nvoid osgGA::GUIEventHandler::base_getUsage(osg::ApplicationUsage & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ApplicationUsage* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::ApplicationUsage >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgGA::GUIEventHandler::base_getUsage function");
		}
		osg::ApplicationUsage & _arg1=*_arg1_ptr;

		osgGA::GUIEventHandler* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::GUIEventHandler::base_getUsage(osg::ApplicationUsage &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GUIEventHandler::getUsage(_arg1);

		return 0;
	}


	// Operator binds:
	// void osgGA::GUIEventHandler::operator()(osg::Node * node, osg::NodeVisitor * nv)
	static int _bind_op_call(lua_State *L) {
		if (!_lg_typecheck_op_call(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::GUIEventHandler::operator()(osg::Node * node, osg::NodeVisitor * nv) function, expected prototype:\nvoid osgGA::GUIEventHandler::operator()(osg::Node * node, osg::NodeVisitor * nv)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* node=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		osg::NodeVisitor* nv=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,3));

		osgGA::GUIEventHandler* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::GUIEventHandler::operator()(osg::Node *, osg::NodeVisitor *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->operator()(node, nv);

		return 0;
	}


};

osgGA::GUIEventHandler* LunaTraits< osgGA::GUIEventHandler >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgGA_GUIEventHandler::_bind_ctor(L);
}

void LunaTraits< osgGA::GUIEventHandler >::_bind_dtor(osgGA::GUIEventHandler* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgGA::GUIEventHandler >::className[] = "GUIEventHandler";
const char LunaTraits< osgGA::GUIEventHandler >::fullName[] = "osgGA::GUIEventHandler";
const char LunaTraits< osgGA::GUIEventHandler >::moduleName[] = "osgGA";
const char* LunaTraits< osgGA::GUIEventHandler >::parents[] = {"osg.NodeCallback", "osg.Drawable_EventCallback", 0};
const int LunaTraits< osgGA::GUIEventHandler >::hash = 29676225;
const int LunaTraits< osgGA::GUIEventHandler >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgGA::GUIEventHandler >::methods[] = {
	{"cloneType", &luna_wrapper_osgGA_GUIEventHandler::_bind_cloneType},
	{"clone", &luna_wrapper_osgGA_GUIEventHandler::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgGA_GUIEventHandler::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osgGA_GUIEventHandler::_bind_libraryName},
	{"className", &luna_wrapper_osgGA_GUIEventHandler::_bind_className},
	{"event", &luna_wrapper_osgGA_GUIEventHandler::_bind_event},
	{"handle", &luna_wrapper_osgGA_GUIEventHandler::_bind_handle},
	{"handleWithCheckAgainstIgnoreHandledEventsMask", &luna_wrapper_osgGA_GUIEventHandler::_bind_handleWithCheckAgainstIgnoreHandledEventsMask},
	{"getUsage", &luna_wrapper_osgGA_GUIEventHandler::_bind_getUsage},
	{"setIgnoreHandledEventsMask", &luna_wrapper_osgGA_GUIEventHandler::_bind_setIgnoreHandledEventsMask},
	{"getIgnoreHandledEventsMask", &luna_wrapper_osgGA_GUIEventHandler::_bind_getIgnoreHandledEventsMask},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgGA_GUIEventHandler::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osgGA_GUIEventHandler::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osgGA_GUIEventHandler::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osgGA_GUIEventHandler::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osgGA_GUIEventHandler::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osgGA_GUIEventHandler::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osgGA_GUIEventHandler::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osgGA_GUIEventHandler::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osgGA_GUIEventHandler::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osgGA_GUIEventHandler::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osgGA_GUIEventHandler::_bind_base_className},
	{"base_event", &luna_wrapper_osgGA_GUIEventHandler::_bind_base_event},
	{"base_handle", &luna_wrapper_osgGA_GUIEventHandler::_bind_base_handle},
	{"base_getUsage", &luna_wrapper_osgGA_GUIEventHandler::_bind_base_getUsage},
	{"op_call", &luna_wrapper_osgGA_GUIEventHandler::_bind_op_call},
	{"fromVoid", &luna_wrapper_osgGA_GUIEventHandler::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgGA_GUIEventHandler::_bind_asVoid},
	{"getTable", &luna_wrapper_osgGA_GUIEventHandler::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgGA::GUIEventHandler >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgGA_GUIEventHandler::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgGA::GUIEventHandler >::enumValues[] = {
	{0,0}
};


