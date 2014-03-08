#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_View.h>

class luna_wrapper_osg_View {
public:
	typedef Luna< osg::View > luna_t;

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

		osg::View* self= (osg::View*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::View >::push(L,self,false);
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
		//osg::View* ptr= dynamic_cast< osg::View* >(Luna< osg::Referenced >::check(L,1));
		osg::View* ptr= luna_caster< osg::Referenced, osg::View >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::View >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::View >(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( luatop>1 && (!(Luna< osg::CopyOp >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::View >(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,27134364) ) return false;
		if( luatop>2 && (!(Luna< osg::CopyOp >::check(L,3))) ) return false;
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

	inline static bool _lg_typecheck_take(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setStats(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getStats_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getStats_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setLightingMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLightingMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setLight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLight_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLight_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCamera(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCamera_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCamera_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFrameStamp(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFrameStamp_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFrameStamp_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_addSlave_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Camera >(L,2)) ) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addSlave_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Camera >(L,2)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,18903838) ) return false;
		if( (!(Luna< osg::Matrixd >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,18903838) ) return false;
		if( (!(Luna< osg::Matrixd >::check(L,4))) ) return false;
		if( luatop>4 && lua_isboolean(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeSlave(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumSlaves(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSlave_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSlave_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_findSlaveIndexForCamera(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_findSlaveForCamera(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_updateSlaves(lua_State *L) {
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

	inline static bool _lg_typecheck_base_take(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::View::View()
	static osg::View* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::View::View() function, expected prototype:\nosg::View::View()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::View();
	}

	// osg::View::View(const osg::View & view, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::View* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::View::View(const osg::View & view, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::View::View(const osg::View & view, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::View* view_ptr=(Luna< osg::Referenced >::checkSubType< osg::View >(L,1));
		if( !view_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg view in osg::View::View function");
		}
		const osg::View & view=*view_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::View::View function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osg::View(view, copyop);
	}

	// osg::View::View(lua_Table * data)
	static osg::View* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::View::View(lua_Table * data) function, expected prototype:\nosg::View::View(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_View(L,NULL);
	}

	// osg::View::View(lua_Table * data, const osg::View & view, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::View* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::View::View(lua_Table * data, const osg::View & view, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::View::View(lua_Table * data, const osg::View & view, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::View* view_ptr=(Luna< osg::Referenced >::checkSubType< osg::View >(L,2));
		if( !view_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg view in osg::View::View function");
		}
		const osg::View & view=*view_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::View::View function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_View(L,NULL, view, copyop);
	}

	// Overload binder for osg::View::View
	static osg::View* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function View, cannot match any of the overloads for function View:\n  View()\n  View(const osg::View &, const osg::CopyOp &)\n  View(lua_Table *)\n  View(lua_Table *, const osg::View &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::View::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::View::cloneType() const function, expected prototype:\nosg::Object * osg::View::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::View* self=Luna< osg::Referenced >::checkSubType< osg::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::View::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::View::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::View::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::View::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::View::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::View* self=Luna< osg::Referenced >::checkSubType< osg::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::View::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::View::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::View::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::View::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::View* self=Luna< osg::Referenced >::checkSubType< osg::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::View::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::View::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::View::libraryName() const function, expected prototype:\nconst char * osg::View::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::View* self=Luna< osg::Referenced >::checkSubType< osg::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::View::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::View::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::View::className() const function, expected prototype:\nconst char * osg::View::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::View* self=Luna< osg::Referenced >::checkSubType< osg::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::View::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::View::take(osg::View & rhs)
	static int _bind_take(lua_State *L) {
		if (!_lg_typecheck_take(L)) {
			luaL_error(L, "luna typecheck failed in void osg::View::take(osg::View & rhs) function, expected prototype:\nvoid osg::View::take(osg::View & rhs)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::View* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osg::View >(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::View::take function");
		}
		osg::View & rhs=*rhs_ptr;

		osg::View* self=Luna< osg::Referenced >::checkSubType< osg::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::View::take(osg::View &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->take(rhs);

		return 0;
	}

	// void osg::View::setStats(osg::Stats * stats)
	static int _bind_setStats(lua_State *L) {
		if (!_lg_typecheck_setStats(L)) {
			luaL_error(L, "luna typecheck failed in void osg::View::setStats(osg::Stats * stats) function, expected prototype:\nvoid osg::View::setStats(osg::Stats * stats)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Stats* stats=(Luna< osg::Referenced >::checkSubType< osg::Stats >(L,2));

		osg::View* self=Luna< osg::Referenced >::checkSubType< osg::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::View::setStats(osg::Stats *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setStats(stats);

		return 0;
	}

	// osg::Stats * osg::View::getStats()
	static int _bind_getStats_overload_1(lua_State *L) {
		if (!_lg_typecheck_getStats_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Stats * osg::View::getStats() function, expected prototype:\nosg::Stats * osg::View::getStats()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::View* self=Luna< osg::Referenced >::checkSubType< osg::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Stats * osg::View::getStats(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Stats * lret = self->getStats();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Stats >::push(L,lret,false);

		return 1;
	}

	// const osg::Stats * osg::View::getStats() const
	static int _bind_getStats_overload_2(lua_State *L) {
		if (!_lg_typecheck_getStats_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Stats * osg::View::getStats() const function, expected prototype:\nconst osg::Stats * osg::View::getStats() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::View* self=Luna< osg::Referenced >::checkSubType< osg::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Stats * osg::View::getStats() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Stats * lret = self->getStats();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Stats >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::View::getStats
	static int _bind_getStats(lua_State *L) {
		if (_lg_typecheck_getStats_overload_1(L)) return _bind_getStats_overload_1(L);
		if (_lg_typecheck_getStats_overload_2(L)) return _bind_getStats_overload_2(L);

		luaL_error(L, "error in function getStats, cannot match any of the overloads for function getStats:\n  getStats()\n  getStats()\n");
		return 0;
	}

	// void osg::View::setLightingMode(osg::View::LightingMode lightingMode)
	static int _bind_setLightingMode(lua_State *L) {
		if (!_lg_typecheck_setLightingMode(L)) {
			luaL_error(L, "luna typecheck failed in void osg::View::setLightingMode(osg::View::LightingMode lightingMode) function, expected prototype:\nvoid osg::View::setLightingMode(osg::View::LightingMode lightingMode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::View::LightingMode lightingMode=(osg::View::LightingMode)lua_tointeger(L,2);

		osg::View* self=Luna< osg::Referenced >::checkSubType< osg::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::View::setLightingMode(osg::View::LightingMode). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setLightingMode(lightingMode);

		return 0;
	}

	// osg::View::LightingMode osg::View::getLightingMode() const
	static int _bind_getLightingMode(lua_State *L) {
		if (!_lg_typecheck_getLightingMode(L)) {
			luaL_error(L, "luna typecheck failed in osg::View::LightingMode osg::View::getLightingMode() const function, expected prototype:\nosg::View::LightingMode osg::View::getLightingMode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::View* self=Luna< osg::Referenced >::checkSubType< osg::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::View::LightingMode osg::View::getLightingMode() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::View::LightingMode lret = self->getLightingMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::View::setLight(osg::Light * light)
	static int _bind_setLight(lua_State *L) {
		if (!_lg_typecheck_setLight(L)) {
			luaL_error(L, "luna typecheck failed in void osg::View::setLight(osg::Light * light) function, expected prototype:\nvoid osg::View::setLight(osg::Light * light)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Light* light=(Luna< osg::Referenced >::checkSubType< osg::Light >(L,2));

		osg::View* self=Luna< osg::Referenced >::checkSubType< osg::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::View::setLight(osg::Light *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setLight(light);

		return 0;
	}

	// osg::Light * osg::View::getLight()
	static int _bind_getLight_overload_1(lua_State *L) {
		if (!_lg_typecheck_getLight_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Light * osg::View::getLight() function, expected prototype:\nosg::Light * osg::View::getLight()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::View* self=Luna< osg::Referenced >::checkSubType< osg::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Light * osg::View::getLight(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Light * lret = self->getLight();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Light >::push(L,lret,false);

		return 1;
	}

	// const osg::Light * osg::View::getLight() const
	static int _bind_getLight_overload_2(lua_State *L) {
		if (!_lg_typecheck_getLight_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Light * osg::View::getLight() const function, expected prototype:\nconst osg::Light * osg::View::getLight() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::View* self=Luna< osg::Referenced >::checkSubType< osg::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Light * osg::View::getLight() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Light * lret = self->getLight();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Light >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::View::getLight
	static int _bind_getLight(lua_State *L) {
		if (_lg_typecheck_getLight_overload_1(L)) return _bind_getLight_overload_1(L);
		if (_lg_typecheck_getLight_overload_2(L)) return _bind_getLight_overload_2(L);

		luaL_error(L, "error in function getLight, cannot match any of the overloads for function getLight:\n  getLight()\n  getLight()\n");
		return 0;
	}

	// void osg::View::setCamera(osg::Camera * camera)
	static int _bind_setCamera(lua_State *L) {
		if (!_lg_typecheck_setCamera(L)) {
			luaL_error(L, "luna typecheck failed in void osg::View::setCamera(osg::Camera * camera) function, expected prototype:\nvoid osg::View::setCamera(osg::Camera * camera)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Camera* camera=(Luna< osg::Referenced >::checkSubType< osg::Camera >(L,2));

		osg::View* self=Luna< osg::Referenced >::checkSubType< osg::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::View::setCamera(osg::Camera *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setCamera(camera);

		return 0;
	}

	// osg::Camera * osg::View::getCamera()
	static int _bind_getCamera_overload_1(lua_State *L) {
		if (!_lg_typecheck_getCamera_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Camera * osg::View::getCamera() function, expected prototype:\nosg::Camera * osg::View::getCamera()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::View* self=Luna< osg::Referenced >::checkSubType< osg::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Camera * osg::View::getCamera(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Camera * lret = self->getCamera();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

		return 1;
	}

	// const osg::Camera * osg::View::getCamera() const
	static int _bind_getCamera_overload_2(lua_State *L) {
		if (!_lg_typecheck_getCamera_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Camera * osg::View::getCamera() const function, expected prototype:\nconst osg::Camera * osg::View::getCamera() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::View* self=Luna< osg::Referenced >::checkSubType< osg::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Camera * osg::View::getCamera() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Camera * lret = self->getCamera();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::View::getCamera
	static int _bind_getCamera(lua_State *L) {
		if (_lg_typecheck_getCamera_overload_1(L)) return _bind_getCamera_overload_1(L);
		if (_lg_typecheck_getCamera_overload_2(L)) return _bind_getCamera_overload_2(L);

		luaL_error(L, "error in function getCamera, cannot match any of the overloads for function getCamera:\n  getCamera()\n  getCamera()\n");
		return 0;
	}

	// void osg::View::setFrameStamp(osg::FrameStamp * fs)
	static int _bind_setFrameStamp(lua_State *L) {
		if (!_lg_typecheck_setFrameStamp(L)) {
			luaL_error(L, "luna typecheck failed in void osg::View::setFrameStamp(osg::FrameStamp * fs) function, expected prototype:\nvoid osg::View::setFrameStamp(osg::FrameStamp * fs)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::FrameStamp* fs=(Luna< osg::Referenced >::checkSubType< osg::FrameStamp >(L,2));

		osg::View* self=Luna< osg::Referenced >::checkSubType< osg::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::View::setFrameStamp(osg::FrameStamp *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setFrameStamp(fs);

		return 0;
	}

	// osg::FrameStamp * osg::View::getFrameStamp()
	static int _bind_getFrameStamp_overload_1(lua_State *L) {
		if (!_lg_typecheck_getFrameStamp_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::FrameStamp * osg::View::getFrameStamp() function, expected prototype:\nosg::FrameStamp * osg::View::getFrameStamp()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::View* self=Luna< osg::Referenced >::checkSubType< osg::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::FrameStamp * osg::View::getFrameStamp(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::FrameStamp * lret = self->getFrameStamp();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::FrameStamp >::push(L,lret,false);

		return 1;
	}

	// const osg::FrameStamp * osg::View::getFrameStamp() const
	static int _bind_getFrameStamp_overload_2(lua_State *L) {
		if (!_lg_typecheck_getFrameStamp_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::FrameStamp * osg::View::getFrameStamp() const function, expected prototype:\nconst osg::FrameStamp * osg::View::getFrameStamp() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::View* self=Luna< osg::Referenced >::checkSubType< osg::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::FrameStamp * osg::View::getFrameStamp() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::FrameStamp * lret = self->getFrameStamp();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::FrameStamp >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::View::getFrameStamp
	static int _bind_getFrameStamp(lua_State *L) {
		if (_lg_typecheck_getFrameStamp_overload_1(L)) return _bind_getFrameStamp_overload_1(L);
		if (_lg_typecheck_getFrameStamp_overload_2(L)) return _bind_getFrameStamp_overload_2(L);

		luaL_error(L, "error in function getFrameStamp, cannot match any of the overloads for function getFrameStamp:\n  getFrameStamp()\n  getFrameStamp()\n");
		return 0;
	}

	// bool osg::View::addSlave(osg::Camera * camera, bool useMastersSceneData = true)
	static int _bind_addSlave_overload_1(lua_State *L) {
		if (!_lg_typecheck_addSlave_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::View::addSlave(osg::Camera * camera, bool useMastersSceneData = true) function, expected prototype:\nbool osg::View::addSlave(osg::Camera * camera, bool useMastersSceneData = true)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::Camera* camera=(Luna< osg::Referenced >::checkSubType< osg::Camera >(L,2));
		bool useMastersSceneData=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		osg::View* self=Luna< osg::Referenced >::checkSubType< osg::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::View::addSlave(osg::Camera *, bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->addSlave(camera, useMastersSceneData);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::View::addSlave(osg::Camera * camera, const osg::Matrixd & projectionOffset, const osg::Matrixd & viewOffset, bool useMastersSceneData = true)
	static int _bind_addSlave_overload_2(lua_State *L) {
		if (!_lg_typecheck_addSlave_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::View::addSlave(osg::Camera * camera, const osg::Matrixd & projectionOffset, const osg::Matrixd & viewOffset, bool useMastersSceneData = true) function, expected prototype:\nbool osg::View::addSlave(osg::Camera * camera, const osg::Matrixd & projectionOffset, const osg::Matrixd & viewOffset, bool useMastersSceneData = true)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 18903838\narg 3 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::Camera* camera=(Luna< osg::Referenced >::checkSubType< osg::Camera >(L,2));
		const osg::Matrixd* projectionOffset_ptr=(Luna< osg::Matrixd >::check(L,3));
		if( !projectionOffset_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg projectionOffset in osg::View::addSlave function");
		}
		const osg::Matrixd & projectionOffset=*projectionOffset_ptr;
		const osg::Matrixd* viewOffset_ptr=(Luna< osg::Matrixd >::check(L,4));
		if( !viewOffset_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg viewOffset in osg::View::addSlave function");
		}
		const osg::Matrixd & viewOffset=*viewOffset_ptr;
		bool useMastersSceneData=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : (bool)true;

		osg::View* self=Luna< osg::Referenced >::checkSubType< osg::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::View::addSlave(osg::Camera *, const osg::Matrixd &, const osg::Matrixd &, bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->addSlave(camera, projectionOffset, viewOffset, useMastersSceneData);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for osg::View::addSlave
	static int _bind_addSlave(lua_State *L) {
		if (_lg_typecheck_addSlave_overload_1(L)) return _bind_addSlave_overload_1(L);
		if (_lg_typecheck_addSlave_overload_2(L)) return _bind_addSlave_overload_2(L);

		luaL_error(L, "error in function addSlave, cannot match any of the overloads for function addSlave:\n  addSlave(osg::Camera *, bool)\n  addSlave(osg::Camera *, const osg::Matrixd &, const osg::Matrixd &, bool)\n");
		return 0;
	}

	// bool osg::View::removeSlave(unsigned int pos)
	static int _bind_removeSlave(lua_State *L) {
		if (!_lg_typecheck_removeSlave(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::View::removeSlave(unsigned int pos) function, expected prototype:\nbool osg::View::removeSlave(unsigned int pos)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);

		osg::View* self=Luna< osg::Referenced >::checkSubType< osg::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::View::removeSlave(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->removeSlave(pos);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int osg::View::getNumSlaves() const
	static int _bind_getNumSlaves(lua_State *L) {
		if (!_lg_typecheck_getNumSlaves(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::View::getNumSlaves() const function, expected prototype:\nunsigned int osg::View::getNumSlaves() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::View* self=Luna< osg::Referenced >::checkSubType< osg::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::View::getNumSlaves() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getNumSlaves();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::View::Slave & osg::View::getSlave(unsigned int pos)
	static int _bind_getSlave_overload_1(lua_State *L) {
		if (!_lg_typecheck_getSlave_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::View::Slave & osg::View::getSlave(unsigned int pos) function, expected prototype:\nosg::View::Slave & osg::View::getSlave(unsigned int pos)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);

		osg::View* self=Luna< osg::Referenced >::checkSubType< osg::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::View::Slave & osg::View::getSlave(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::View::Slave* lret = &self->getSlave(pos);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::View::Slave >::push(L,lret,false);

		return 1;
	}

	// const osg::View::Slave & osg::View::getSlave(unsigned int pos) const
	static int _bind_getSlave_overload_2(lua_State *L) {
		if (!_lg_typecheck_getSlave_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::View::Slave & osg::View::getSlave(unsigned int pos) const function, expected prototype:\nconst osg::View::Slave & osg::View::getSlave(unsigned int pos) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);

		osg::View* self=Luna< osg::Referenced >::checkSubType< osg::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::View::Slave & osg::View::getSlave(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::View::Slave* lret = &self->getSlave(pos);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::View::Slave >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::View::getSlave
	static int _bind_getSlave(lua_State *L) {
		if (_lg_typecheck_getSlave_overload_1(L)) return _bind_getSlave_overload_1(L);
		if (_lg_typecheck_getSlave_overload_2(L)) return _bind_getSlave_overload_2(L);

		luaL_error(L, "error in function getSlave, cannot match any of the overloads for function getSlave:\n  getSlave(unsigned int)\n  getSlave(unsigned int)\n");
		return 0;
	}

	// unsigned int osg::View::findSlaveIndexForCamera(osg::Camera * camera) const
	static int _bind_findSlaveIndexForCamera(lua_State *L) {
		if (!_lg_typecheck_findSlaveIndexForCamera(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::View::findSlaveIndexForCamera(osg::Camera * camera) const function, expected prototype:\nunsigned int osg::View::findSlaveIndexForCamera(osg::Camera * camera) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Camera* camera=(Luna< osg::Referenced >::checkSubType< osg::Camera >(L,2));

		osg::View* self=Luna< osg::Referenced >::checkSubType< osg::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::View::findSlaveIndexForCamera(osg::Camera *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->findSlaveIndexForCamera(camera);
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::View::Slave * osg::View::findSlaveForCamera(osg::Camera * camera)
	static int _bind_findSlaveForCamera(lua_State *L) {
		if (!_lg_typecheck_findSlaveForCamera(L)) {
			luaL_error(L, "luna typecheck failed in osg::View::Slave * osg::View::findSlaveForCamera(osg::Camera * camera) function, expected prototype:\nosg::View::Slave * osg::View::findSlaveForCamera(osg::Camera * camera)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Camera* camera=(Luna< osg::Referenced >::checkSubType< osg::Camera >(L,2));

		osg::View* self=Luna< osg::Referenced >::checkSubType< osg::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::View::Slave * osg::View::findSlaveForCamera(osg::Camera *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::View::Slave * lret = self->findSlaveForCamera(camera);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::View::Slave >::push(L,lret,false);

		return 1;
	}

	// void osg::View::updateSlaves()
	static int _bind_updateSlaves(lua_State *L) {
		if (!_lg_typecheck_updateSlaves(L)) {
			luaL_error(L, "luna typecheck failed in void osg::View::updateSlaves() function, expected prototype:\nvoid osg::View::updateSlaves()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::View* self=Luna< osg::Referenced >::checkSubType< osg::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::View::updateSlaves(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->updateSlaves();

		return 0;
	}

	// void osg::View::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::View::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::View::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::View* self=Luna< osg::Referenced >::checkSubType< osg::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::View::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->View::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::View::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::View::base_setName(const std::string & name) function, expected prototype:\nvoid osg::View::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::View* self=Luna< osg::Referenced >::checkSubType< osg::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::View::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->View::setName(name);

		return 0;
	}

	// void osg::View::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::View::base_computeDataVariance() function, expected prototype:\nvoid osg::View::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::View* self=Luna< osg::Referenced >::checkSubType< osg::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::View::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->View::computeDataVariance();

		return 0;
	}

	// void osg::View::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::View::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::View::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::View* self=Luna< osg::Referenced >::checkSubType< osg::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::View::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->View::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::View::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::View::base_getUserData() function, expected prototype:\nosg::Referenced * osg::View::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::View* self=Luna< osg::Referenced >::checkSubType< osg::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::View::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->View::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::View::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::View::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::View::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::View* self=Luna< osg::Referenced >::checkSubType< osg::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::View::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->View::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::View::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osg::View::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::View::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::View::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::View* self=Luna< osg::Referenced >::checkSubType< osg::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::View::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->View::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osg::View::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::View::base_cloneType() const function, expected prototype:\nosg::Object * osg::View::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::View* self=Luna< osg::Referenced >::checkSubType< osg::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::View::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->View::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::View::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::View::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::View::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::View::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::View* self=Luna< osg::Referenced >::checkSubType< osg::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::View::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->View::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::View::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::View::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::View::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::View* self=Luna< osg::Referenced >::checkSubType< osg::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::View::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->View::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::View::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::View::base_libraryName() const function, expected prototype:\nconst char * osg::View::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::View* self=Luna< osg::Referenced >::checkSubType< osg::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::View::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->View::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::View::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::View::base_className() const function, expected prototype:\nconst char * osg::View::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::View* self=Luna< osg::Referenced >::checkSubType< osg::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::View::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->View::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::View::base_take(osg::View & rhs)
	static int _bind_base_take(lua_State *L) {
		if (!_lg_typecheck_base_take(L)) {
			luaL_error(L, "luna typecheck failed in void osg::View::base_take(osg::View & rhs) function, expected prototype:\nvoid osg::View::base_take(osg::View & rhs)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::View* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osg::View >(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::View::base_take function");
		}
		osg::View & rhs=*rhs_ptr;

		osg::View* self=Luna< osg::Referenced >::checkSubType< osg::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::View::base_take(osg::View &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->View::take(rhs);

		return 0;
	}


	// Operator binds:

};

osg::View* LunaTraits< osg::View >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_View::_bind_ctor(L);
}

void LunaTraits< osg::View >::_bind_dtor(osg::View* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::View >::className[] = "View";
const char LunaTraits< osg::View >::fullName[] = "osg::View";
const char LunaTraits< osg::View >::moduleName[] = "osg";
const char* LunaTraits< osg::View >::parents[] = {"osg.Object", 0};
const int LunaTraits< osg::View >::hash = 80400856;
const int LunaTraits< osg::View >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::View >::methods[] = {
	{"cloneType", &luna_wrapper_osg_View::_bind_cloneType},
	{"clone", &luna_wrapper_osg_View::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_View::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_View::_bind_libraryName},
	{"className", &luna_wrapper_osg_View::_bind_className},
	{"take", &luna_wrapper_osg_View::_bind_take},
	{"setStats", &luna_wrapper_osg_View::_bind_setStats},
	{"getStats", &luna_wrapper_osg_View::_bind_getStats},
	{"setLightingMode", &luna_wrapper_osg_View::_bind_setLightingMode},
	{"getLightingMode", &luna_wrapper_osg_View::_bind_getLightingMode},
	{"setLight", &luna_wrapper_osg_View::_bind_setLight},
	{"getLight", &luna_wrapper_osg_View::_bind_getLight},
	{"setCamera", &luna_wrapper_osg_View::_bind_setCamera},
	{"getCamera", &luna_wrapper_osg_View::_bind_getCamera},
	{"setFrameStamp", &luna_wrapper_osg_View::_bind_setFrameStamp},
	{"getFrameStamp", &luna_wrapper_osg_View::_bind_getFrameStamp},
	{"addSlave", &luna_wrapper_osg_View::_bind_addSlave},
	{"removeSlave", &luna_wrapper_osg_View::_bind_removeSlave},
	{"getNumSlaves", &luna_wrapper_osg_View::_bind_getNumSlaves},
	{"getSlave", &luna_wrapper_osg_View::_bind_getSlave},
	{"findSlaveIndexForCamera", &luna_wrapper_osg_View::_bind_findSlaveIndexForCamera},
	{"findSlaveForCamera", &luna_wrapper_osg_View::_bind_findSlaveForCamera},
	{"updateSlaves", &luna_wrapper_osg_View::_bind_updateSlaves},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_View::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osg_View::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_View::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_View::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_View::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osg_View::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osg_View::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_View::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_View::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_View::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_View::_bind_base_className},
	{"base_take", &luna_wrapper_osg_View::_bind_base_take},
	{"fromVoid", &luna_wrapper_osg_View::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_View::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_View::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::View >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_View::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::View >::enumValues[] = {
	{"NO_LIGHT", osg::View::NO_LIGHT},
	{"HEADLIGHT", osg::View::HEADLIGHT},
	{"SKY_LIGHT", osg::View::SKY_LIGHT},
	{0,0}
};


