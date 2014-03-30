#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_Scissor.h>

class luna_wrapper_osg_Scissor {
public:
	typedef Luna< osg::Scissor > luna_t;

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

		osg::Scissor* self= (osg::Scissor*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::Scissor >::push(L,self,false);
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
		//osg::Scissor* ptr= dynamic_cast< osg::Scissor* >(Luna< osg::Referenced >::check(L,1));
		osg::Scissor* ptr= luna_caster< osg::Referenced, osg::Scissor >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Scissor >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Scissor >(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( luatop>1 && (!(Luna< osg::CopyOp >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Scissor >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_getType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_compare(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getModeUsage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,48108040) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setScissor(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getScissor(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_x_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_x_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_y_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_y_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_width_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_width_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_height_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_height_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_apply(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
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

	inline static bool _lg_typecheck_base_asTexture_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asTexture_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getMember(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_isTextureAttribute(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_checkValidityOfAssociatedModes(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_compileGLObjects(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
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

	inline static bool _lg_typecheck_base_getType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_compare(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getModeUsage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,48108040) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::Scissor::Scissor()
	static osg::Scissor* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Scissor::Scissor() function, expected prototype:\nosg::Scissor::Scissor()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::Scissor();
	}

	// osg::Scissor::Scissor(int x, int y, int width, int height)
	static osg::Scissor* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Scissor::Scissor(int x, int y, int width, int height) function, expected prototype:\nosg::Scissor::Scissor(int x, int y, int width, int height)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,1);
		int y=(int)lua_tointeger(L,2);
		int width=(int)lua_tointeger(L,3);
		int height=(int)lua_tointeger(L,4);

		return new osg::Scissor(x, y, width, height);
	}

	// osg::Scissor::Scissor(const osg::Scissor & vp, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::Scissor* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::Scissor::Scissor(const osg::Scissor & vp, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::Scissor::Scissor(const osg::Scissor & vp, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Scissor* vp_ptr=(Luna< osg::Referenced >::checkSubType< osg::Scissor >(L,1));
		if( !vp_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vp in osg::Scissor::Scissor function");
		}
		const osg::Scissor & vp=*vp_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Scissor::Scissor function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osg::Scissor(vp, copyop);
	}

	// osg::Scissor::Scissor(lua_Table * data)
	static osg::Scissor* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::Scissor::Scissor(lua_Table * data) function, expected prototype:\nosg::Scissor::Scissor(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_Scissor(L,NULL);
	}

	// osg::Scissor::Scissor(lua_Table * data, int x, int y, int width, int height)
	static osg::Scissor* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in osg::Scissor::Scissor(lua_Table * data, int x, int y, int width, int height) function, expected prototype:\nosg::Scissor::Scissor(lua_Table * data, int x, int y, int width, int height)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		int width=(int)lua_tointeger(L,4);
		int height=(int)lua_tointeger(L,5);

		return new wrapper_osg_Scissor(L,NULL, x, y, width, height);
	}

	// osg::Scissor::Scissor(lua_Table * data, const osg::Scissor & vp, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::Scissor* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in osg::Scissor::Scissor(lua_Table * data, const osg::Scissor & vp, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::Scissor::Scissor(lua_Table * data, const osg::Scissor & vp, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Scissor* vp_ptr=(Luna< osg::Referenced >::checkSubType< osg::Scissor >(L,2));
		if( !vp_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vp in osg::Scissor::Scissor function");
		}
		const osg::Scissor & vp=*vp_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Scissor::Scissor function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_Scissor(L,NULL, vp, copyop);
	}

	// Overload binder for osg::Scissor::Scissor
	static osg::Scissor* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);

		luaL_error(L, "error in function Scissor, cannot match any of the overloads for function Scissor:\n  Scissor()\n  Scissor(int, int, int, int)\n  Scissor(const osg::Scissor &, const osg::CopyOp &)\n  Scissor(lua_Table *)\n  Scissor(lua_Table *, int, int, int, int)\n  Scissor(lua_Table *, const osg::Scissor &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::Scissor::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Scissor::cloneType() const function, expected prototype:\nosg::Object * osg::Scissor::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Scissor* self=Luna< osg::Referenced >::checkSubType< osg::Scissor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Scissor::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Scissor::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Scissor::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::Scissor::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Scissor::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::Scissor* self=Luna< osg::Referenced >::checkSubType< osg::Scissor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Scissor::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Scissor::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Scissor::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Scissor::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::Scissor* self=Luna< osg::Referenced >::checkSubType< osg::Scissor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Scissor::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Scissor::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Scissor::libraryName() const function, expected prototype:\nconst char * osg::Scissor::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Scissor* self=Luna< osg::Referenced >::checkSubType< osg::Scissor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Scissor::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Scissor::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Scissor::className() const function, expected prototype:\nconst char * osg::Scissor::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Scissor* self=Luna< osg::Referenced >::checkSubType< osg::Scissor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Scissor::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::Scissor::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::Scissor::getType() const function, expected prototype:\nosg::StateAttribute::Type osg::Scissor::getType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Scissor* self=Luna< osg::Referenced >::checkSubType< osg::Scissor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::Scissor::getType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateAttribute::Type lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Scissor::compare(const osg::StateAttribute & sa) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luaL_error(L, "luna typecheck failed in int osg::Scissor::compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::Scissor::compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::StateAttribute* sa_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::Scissor::compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::Scissor* self=Luna< osg::Referenced >::checkSubType< osg::Scissor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::Scissor::compare(const osg::StateAttribute &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::Scissor::getModeUsage(osg::StateAttribute::ModeUsage & arg1) const
	static int _bind_getModeUsage(lua_State *L) {
		if (!_lg_typecheck_getModeUsage(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Scissor::getModeUsage(osg::StateAttribute::ModeUsage & arg1) const function, expected prototype:\nbool osg::Scissor::getModeUsage(osg::StateAttribute::ModeUsage & arg1) const\nClass arguments details:\narg 1 ID = 48108040\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateAttribute::ModeUsage* _arg1_ptr=(Luna< osg::StateAttribute::ModeUsage >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Scissor::getModeUsage function");
		}
		osg::StateAttribute::ModeUsage & _arg1=*_arg1_ptr;

		osg::Scissor* self=Luna< osg::Referenced >::checkSubType< osg::Scissor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Scissor::getModeUsage(osg::StateAttribute::ModeUsage &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getModeUsage(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Scissor::setScissor(int x, int y, int width, int height)
	static int _bind_setScissor(lua_State *L) {
		if (!_lg_typecheck_setScissor(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Scissor::setScissor(int x, int y, int width, int height) function, expected prototype:\nvoid osg::Scissor::setScissor(int x, int y, int width, int height)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		int width=(int)lua_tointeger(L,4);
		int height=(int)lua_tointeger(L,5);

		osg::Scissor* self=Luna< osg::Referenced >::checkSubType< osg::Scissor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Scissor::setScissor(int, int, int, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setScissor(x, y, width, height);

		return 0;
	}

	// void osg::Scissor::getScissor(int & x, int & y, int & width, int & height) const
	static int _bind_getScissor(lua_State *L) {
		if (!_lg_typecheck_getScissor(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Scissor::getScissor(int & x, int & y, int & width, int & height) const function, expected prototype:\nvoid osg::Scissor::getScissor(int & x, int & y, int & width, int & height) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		int width=(int)lua_tointeger(L,4);
		int height=(int)lua_tointeger(L,5);

		osg::Scissor* self=Luna< osg::Referenced >::checkSubType< osg::Scissor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Scissor::getScissor(int &, int &, int &, int &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getScissor(x, y, width, height);

		lua_pushnumber(L,x);
		lua_pushnumber(L,y);
		lua_pushnumber(L,width);
		lua_pushnumber(L,height);
		return 4;
	}

	// int & osg::Scissor::x()
	static int _bind_x_overload_1(lua_State *L) {
		if (!_lg_typecheck_x_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in int & osg::Scissor::x() function, expected prototype:\nint & osg::Scissor::x()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Scissor* self=Luna< osg::Referenced >::checkSubType< osg::Scissor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int & osg::Scissor::x(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int & lret = self->x();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Scissor::x() const
	static int _bind_x_overload_2(lua_State *L) {
		if (!_lg_typecheck_x_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in int osg::Scissor::x() const function, expected prototype:\nint osg::Scissor::x() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Scissor* self=Luna< osg::Referenced >::checkSubType< osg::Scissor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::Scissor::x() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->x();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Scissor::x
	static int _bind_x(lua_State *L) {
		if (_lg_typecheck_x_overload_1(L)) return _bind_x_overload_1(L);
		if (_lg_typecheck_x_overload_2(L)) return _bind_x_overload_2(L);

		luaL_error(L, "error in function x, cannot match any of the overloads for function x:\n  x()\n  x()\n");
		return 0;
	}

	// int & osg::Scissor::y()
	static int _bind_y_overload_1(lua_State *L) {
		if (!_lg_typecheck_y_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in int & osg::Scissor::y() function, expected prototype:\nint & osg::Scissor::y()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Scissor* self=Luna< osg::Referenced >::checkSubType< osg::Scissor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int & osg::Scissor::y(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int & lret = self->y();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Scissor::y() const
	static int _bind_y_overload_2(lua_State *L) {
		if (!_lg_typecheck_y_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in int osg::Scissor::y() const function, expected prototype:\nint osg::Scissor::y() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Scissor* self=Luna< osg::Referenced >::checkSubType< osg::Scissor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::Scissor::y() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->y();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Scissor::y
	static int _bind_y(lua_State *L) {
		if (_lg_typecheck_y_overload_1(L)) return _bind_y_overload_1(L);
		if (_lg_typecheck_y_overload_2(L)) return _bind_y_overload_2(L);

		luaL_error(L, "error in function y, cannot match any of the overloads for function y:\n  y()\n  y()\n");
		return 0;
	}

	// int & osg::Scissor::width()
	static int _bind_width_overload_1(lua_State *L) {
		if (!_lg_typecheck_width_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in int & osg::Scissor::width() function, expected prototype:\nint & osg::Scissor::width()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Scissor* self=Luna< osg::Referenced >::checkSubType< osg::Scissor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int & osg::Scissor::width(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int & lret = self->width();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Scissor::width() const
	static int _bind_width_overload_2(lua_State *L) {
		if (!_lg_typecheck_width_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in int osg::Scissor::width() const function, expected prototype:\nint osg::Scissor::width() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Scissor* self=Luna< osg::Referenced >::checkSubType< osg::Scissor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::Scissor::width() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->width();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Scissor::width
	static int _bind_width(lua_State *L) {
		if (_lg_typecheck_width_overload_1(L)) return _bind_width_overload_1(L);
		if (_lg_typecheck_width_overload_2(L)) return _bind_width_overload_2(L);

		luaL_error(L, "error in function width, cannot match any of the overloads for function width:\n  width()\n  width()\n");
		return 0;
	}

	// int & osg::Scissor::height()
	static int _bind_height_overload_1(lua_State *L) {
		if (!_lg_typecheck_height_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in int & osg::Scissor::height() function, expected prototype:\nint & osg::Scissor::height()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Scissor* self=Luna< osg::Referenced >::checkSubType< osg::Scissor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int & osg::Scissor::height(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int & lret = self->height();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Scissor::height() const
	static int _bind_height_overload_2(lua_State *L) {
		if (!_lg_typecheck_height_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in int osg::Scissor::height() const function, expected prototype:\nint osg::Scissor::height() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Scissor* self=Luna< osg::Referenced >::checkSubType< osg::Scissor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::Scissor::height() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->height();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Scissor::height
	static int _bind_height(lua_State *L) {
		if (_lg_typecheck_height_overload_1(L)) return _bind_height_overload_1(L);
		if (_lg_typecheck_height_overload_2(L)) return _bind_height_overload_2(L);

		luaL_error(L, "error in function height, cannot match any of the overloads for function height:\n  height()\n  height()\n");
		return 0;
	}

	// void osg::Scissor::apply(osg::State & arg1) const
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Scissor::apply(osg::State & arg1) const function, expected prototype:\nvoid osg::Scissor::apply(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Scissor::apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::Scissor* self=Luna< osg::Referenced >::checkSubType< osg::Scissor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Scissor::apply(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::Scissor::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Scissor::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::Scissor::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::Scissor* self=Luna< osg::Referenced >::checkSubType< osg::Scissor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Scissor::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Scissor::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::Scissor::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Scissor::base_setName(const std::string & name) function, expected prototype:\nvoid osg::Scissor::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::Scissor* self=Luna< osg::Referenced >::checkSubType< osg::Scissor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Scissor::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Scissor::setName(name);

		return 0;
	}

	// void osg::Scissor::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Scissor::base_computeDataVariance() function, expected prototype:\nvoid osg::Scissor::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Scissor* self=Luna< osg::Referenced >::checkSubType< osg::Scissor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Scissor::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Scissor::computeDataVariance();

		return 0;
	}

	// void osg::Scissor::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Scissor::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::Scissor::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::Scissor* self=Luna< osg::Referenced >::checkSubType< osg::Scissor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Scissor::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Scissor::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::Scissor::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::Scissor::base_getUserData() function, expected prototype:\nosg::Referenced * osg::Scissor::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Scissor* self=Luna< osg::Referenced >::checkSubType< osg::Scissor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::Scissor::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->Scissor::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::Scissor::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::Scissor::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::Scissor::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Scissor* self=Luna< osg::Referenced >::checkSubType< osg::Scissor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::Scissor::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->Scissor::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Scissor::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// osg::Texture * osg::Scissor::base_asTexture()
	static int _bind_base_asTexture_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asTexture_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Texture * osg::Scissor::base_asTexture() function, expected prototype:\nosg::Texture * osg::Scissor::base_asTexture()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Scissor* self=Luna< osg::Referenced >::checkSubType< osg::Scissor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Texture * osg::Scissor::base_asTexture(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Texture * lret = self->Scissor::asTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// const osg::Texture * osg::Scissor::base_asTexture() const
	static int _bind_base_asTexture_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asTexture_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Texture * osg::Scissor::base_asTexture() const function, expected prototype:\nconst osg::Texture * osg::Scissor::base_asTexture() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Scissor* self=Luna< osg::Referenced >::checkSubType< osg::Scissor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Texture * osg::Scissor::base_asTexture() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Texture * lret = self->Scissor::asTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Scissor::base_asTexture
	static int _bind_base_asTexture(lua_State *L) {
		if (_lg_typecheck_base_asTexture_overload_1(L)) return _bind_base_asTexture_overload_1(L);
		if (_lg_typecheck_base_asTexture_overload_2(L)) return _bind_base_asTexture_overload_2(L);

		luaL_error(L, "error in function base_asTexture, cannot match any of the overloads for function base_asTexture:\n  base_asTexture()\n  base_asTexture()\n");
		return 0;
	}

	// unsigned int osg::Scissor::base_getMember() const
	static int _bind_base_getMember(lua_State *L) {
		if (!_lg_typecheck_base_getMember(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Scissor::base_getMember() const function, expected prototype:\nunsigned int osg::Scissor::base_getMember() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Scissor* self=Luna< osg::Referenced >::checkSubType< osg::Scissor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Scissor::base_getMember() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->Scissor::getMember();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::Scissor::base_isTextureAttribute() const
	static int _bind_base_isTextureAttribute(lua_State *L) {
		if (!_lg_typecheck_base_isTextureAttribute(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Scissor::base_isTextureAttribute() const function, expected prototype:\nbool osg::Scissor::base_isTextureAttribute() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Scissor* self=Luna< osg::Referenced >::checkSubType< osg::Scissor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Scissor::base_isTextureAttribute() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Scissor::isTextureAttribute();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Scissor::base_checkValidityOfAssociatedModes(osg::State & arg1) const
	static int _bind_base_checkValidityOfAssociatedModes(lua_State *L) {
		if (!_lg_typecheck_base_checkValidityOfAssociatedModes(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Scissor::base_checkValidityOfAssociatedModes(osg::State & arg1) const function, expected prototype:\nbool osg::Scissor::base_checkValidityOfAssociatedModes(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Scissor::base_checkValidityOfAssociatedModes function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::Scissor* self=Luna< osg::Referenced >::checkSubType< osg::Scissor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Scissor::base_checkValidityOfAssociatedModes(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Scissor::checkValidityOfAssociatedModes(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Scissor::base_compileGLObjects(osg::State & arg1) const
	static int _bind_base_compileGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_compileGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Scissor::base_compileGLObjects(osg::State & arg1) const function, expected prototype:\nvoid osg::Scissor::base_compileGLObjects(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Scissor::base_compileGLObjects function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::Scissor* self=Luna< osg::Referenced >::checkSubType< osg::Scissor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Scissor::base_compileGLObjects(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Scissor::compileGLObjects(_arg1);

		return 0;
	}

	// void osg::Scissor::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Scissor::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::Scissor::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::Scissor* self=Luna< osg::Referenced >::checkSubType< osg::Scissor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Scissor::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Scissor::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osg::Scissor::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Scissor::base_cloneType() const function, expected prototype:\nosg::Object * osg::Scissor::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Scissor* self=Luna< osg::Referenced >::checkSubType< osg::Scissor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Scissor::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->Scissor::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Scissor::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Scissor::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::Scissor::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Scissor::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::Scissor* self=Luna< osg::Referenced >::checkSubType< osg::Scissor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Scissor::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->Scissor::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Scissor::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Scissor::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Scissor::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::Scissor* self=Luna< osg::Referenced >::checkSubType< osg::Scissor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Scissor::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Scissor::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Scissor::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Scissor::base_libraryName() const function, expected prototype:\nconst char * osg::Scissor::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Scissor* self=Luna< osg::Referenced >::checkSubType< osg::Scissor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Scissor::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Scissor::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Scissor::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Scissor::base_className() const function, expected prototype:\nconst char * osg::Scissor::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Scissor* self=Luna< osg::Referenced >::checkSubType< osg::Scissor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Scissor::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Scissor::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::Scissor::base_getType() const
	static int _bind_base_getType(lua_State *L) {
		if (!_lg_typecheck_base_getType(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::Scissor::base_getType() const function, expected prototype:\nosg::StateAttribute::Type osg::Scissor::base_getType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Scissor* self=Luna< osg::Referenced >::checkSubType< osg::Scissor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::Scissor::base_getType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateAttribute::Type lret = self->Scissor::getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Scissor::base_compare(const osg::StateAttribute & sa) const
	static int _bind_base_compare(lua_State *L) {
		if (!_lg_typecheck_base_compare(L)) {
			luaL_error(L, "luna typecheck failed in int osg::Scissor::base_compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::Scissor::base_compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::StateAttribute* sa_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::Scissor::base_compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::Scissor* self=Luna< osg::Referenced >::checkSubType< osg::Scissor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::Scissor::base_compare(const osg::StateAttribute &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->Scissor::compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::Scissor::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const
	static int _bind_base_getModeUsage(lua_State *L) {
		if (!_lg_typecheck_base_getModeUsage(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Scissor::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const function, expected prototype:\nbool osg::Scissor::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const\nClass arguments details:\narg 1 ID = 48108040\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateAttribute::ModeUsage* _arg1_ptr=(Luna< osg::StateAttribute::ModeUsage >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Scissor::base_getModeUsage function");
		}
		osg::StateAttribute::ModeUsage & _arg1=*_arg1_ptr;

		osg::Scissor* self=Luna< osg::Referenced >::checkSubType< osg::Scissor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Scissor::base_getModeUsage(osg::StateAttribute::ModeUsage &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Scissor::getModeUsage(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Scissor::base_apply(osg::State & arg1) const
	static int _bind_base_apply(lua_State *L) {
		if (!_lg_typecheck_base_apply(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Scissor::base_apply(osg::State & arg1) const function, expected prototype:\nvoid osg::Scissor::base_apply(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Scissor::base_apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::Scissor* self=Luna< osg::Referenced >::checkSubType< osg::Scissor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Scissor::base_apply(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Scissor::apply(_arg1);

		return 0;
	}


	// Operator binds:

};

osg::Scissor* LunaTraits< osg::Scissor >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Scissor::_bind_ctor(L);
}

void LunaTraits< osg::Scissor >::_bind_dtor(osg::Scissor* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Scissor >::className[] = "Scissor";
const char LunaTraits< osg::Scissor >::fullName[] = "osg::Scissor";
const char LunaTraits< osg::Scissor >::moduleName[] = "osg";
const char* LunaTraits< osg::Scissor >::parents[] = {"osg.StateAttribute", 0};
const int LunaTraits< osg::Scissor >::hash = 91064026;
const int LunaTraits< osg::Scissor >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Scissor >::methods[] = {
	{"cloneType", &luna_wrapper_osg_Scissor::_bind_cloneType},
	{"clone", &luna_wrapper_osg_Scissor::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_Scissor::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_Scissor::_bind_libraryName},
	{"className", &luna_wrapper_osg_Scissor::_bind_className},
	{"getType", &luna_wrapper_osg_Scissor::_bind_getType},
	{"compare", &luna_wrapper_osg_Scissor::_bind_compare},
	{"getModeUsage", &luna_wrapper_osg_Scissor::_bind_getModeUsage},
	{"setScissor", &luna_wrapper_osg_Scissor::_bind_setScissor},
	{"getScissor", &luna_wrapper_osg_Scissor::_bind_getScissor},
	{"x", &luna_wrapper_osg_Scissor::_bind_x},
	{"y", &luna_wrapper_osg_Scissor::_bind_y},
	{"width", &luna_wrapper_osg_Scissor::_bind_width},
	{"height", &luna_wrapper_osg_Scissor::_bind_height},
	{"apply", &luna_wrapper_osg_Scissor::_bind_apply},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_Scissor::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osg_Scissor::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_Scissor::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_Scissor::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_Scissor::_bind_base_getUserData},
	{"base_asTexture", &luna_wrapper_osg_Scissor::_bind_base_asTexture},
	{"base_getMember", &luna_wrapper_osg_Scissor::_bind_base_getMember},
	{"base_isTextureAttribute", &luna_wrapper_osg_Scissor::_bind_base_isTextureAttribute},
	{"base_checkValidityOfAssociatedModes", &luna_wrapper_osg_Scissor::_bind_base_checkValidityOfAssociatedModes},
	{"base_compileGLObjects", &luna_wrapper_osg_Scissor::_bind_base_compileGLObjects},
	{"base_releaseGLObjects", &luna_wrapper_osg_Scissor::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osg_Scissor::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_Scissor::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_Scissor::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_Scissor::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_Scissor::_bind_base_className},
	{"base_getType", &luna_wrapper_osg_Scissor::_bind_base_getType},
	{"base_compare", &luna_wrapper_osg_Scissor::_bind_base_compare},
	{"base_getModeUsage", &luna_wrapper_osg_Scissor::_bind_base_getModeUsage},
	{"base_apply", &luna_wrapper_osg_Scissor::_bind_base_apply},
	{"fromVoid", &luna_wrapper_osg_Scissor::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_Scissor::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_Scissor::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Scissor >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Scissor::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Scissor >::enumValues[] = {
	{0,0}
};


