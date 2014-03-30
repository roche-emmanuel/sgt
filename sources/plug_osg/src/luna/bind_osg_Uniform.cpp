#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_Uniform.h>

class luna_wrapper_osg_Uniform {
public:
	typedef Luna< osg::Uniform > luna_t;

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

		osg::Uniform* self= (osg::Uniform*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::Uniform >::push(L,self,false);
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
		//osg::Uniform* ptr= dynamic_cast< osg::Uniform* >(Luna< osg::Referenced >::check(L,1));
		osg::Uniform* ptr= luna_caster< osg::Referenced, osg::Uniform >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Uniform >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( luatop>1 && (!(Luna< osg::CopyOp >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_7(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_8(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_9(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,2,92303173) ) return false;
		if( (!(Luna< osg::Vec2f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_10(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_11(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,2,92303235) ) return false;
		if( (!(Luna< osg::Vec4f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_12(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,2,92303171) ) return false;
		if( (!(Luna< osg::Vec2d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_13(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_14(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,2,92303233) ) return false;
		if( (!(Luna< osg::Vec4d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_15(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,2,23566627) ) return false;
		if( (!(Luna< osg::Matrix2Template< float > >::checkSubType< osg::Matrix2 >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_16(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,2,18903789) ) return false;
		if( (!(Luna< osg::Matrix3 >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_17(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,2,18903840) ) return false;
		if( (!(Luna< osg::Matrixf >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_18(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,2,36925025) ) return false;
		if( (!(Luna< osg::Matrix2x3Template< float > >::checkSubType< osg::Matrix2x3 >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_19(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,2,61250437) ) return false;
		if( (!(Luna< osg::Matrix2x4Template< float > >::checkSubType< osg::Matrix2x4 >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_20(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,2,64512237) ) return false;
		if( (!(Luna< osg::Matrix3x2Template< float > >::checkSubType< osg::Matrix3x2 >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_21(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,2,66344120) ) return false;
		if( (!(Luna< osg::Matrix3x4Template< float > >::checkSubType< osg::Matrix3x4 >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_22(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,2,67198576) ) return false;
		if( (!(Luna< osg::Matrix4x2Template< float > >::checkSubType< osg::Matrix4x2 >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_23(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,2,40016085) ) return false;
		if( (!(Luna< osg::Matrix4x3Template< float > >::checkSubType< osg::Matrix4x3 >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_24(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,2,40388721) ) return false;
		if( (!(Luna< osg::Matrix2Template< double > >::checkSubType< osg::Matrix2d >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_25(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,2,86017494) ) return false;
		if( (!(Luna< osg::Matrix3d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_26(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		if( (!(Luna< osg::Matrixd >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_27(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,2,54499000) ) return false;
		if( (!(Luna< osg::Matrix2x3Template< double > >::checkSubType< osg::Matrix2x3d >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_28(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,2,8586516) ) return false;
		if( (!(Luna< osg::Matrix2x4Template< double > >::checkSubType< osg::Matrix2x4d >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_29(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,2,9703245) ) return false;
		if( (!(Luna< osg::Matrix3x2Template< double > >::checkSubType< osg::Matrix3x2d >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_30(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,2,66491618) ) return false;
		if( (!(Luna< osg::Matrix3x4Template< double > >::checkSubType< osg::Matrix3x4d >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_31(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,2,92978793) ) return false;
		if( (!(Luna< osg::Matrix4x2Template< double > >::checkSubType< osg::Matrix4x2d >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_32(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50322789) ) return false;
		if( (!(Luna< osg::Matrix4x3Template< double > >::checkSubType< osg::Matrix4x3d >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_33(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_34(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_35(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_36(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_37(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_38(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_39(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( lua_isboolean(L,2)==0 ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_40(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( lua_isboolean(L,2)==0 ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_41(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( lua_isboolean(L,2)==0 ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		if( lua_isboolean(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_42(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_43(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_44(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,27134364) ) return false;
		if( luatop>2 && (!(Luna< osg::CopyOp >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_45(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_46(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_47(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_48(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_49(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_50(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303173) ) return false;
		if( (!(Luna< osg::Vec2f >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_51(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_52(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303235) ) return false;
		if( (!(Luna< osg::Vec4f >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_53(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303171) ) return false;
		if( (!(Luna< osg::Vec2d >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_54(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_55(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303233) ) return false;
		if( (!(Luna< osg::Vec4d >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_56(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,23566627) ) return false;
		if( (!(Luna< osg::Matrix2Template< float > >::checkSubType< osg::Matrix2 >(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_57(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,18903789) ) return false;
		if( (!(Luna< osg::Matrix3 >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_58(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,18903840) ) return false;
		if( (!(Luna< osg::Matrixf >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_59(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,36925025) ) return false;
		if( (!(Luna< osg::Matrix2x3Template< float > >::checkSubType< osg::Matrix2x3 >(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_60(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,61250437) ) return false;
		if( (!(Luna< osg::Matrix2x4Template< float > >::checkSubType< osg::Matrix2x4 >(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_61(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,64512237) ) return false;
		if( (!(Luna< osg::Matrix3x2Template< float > >::checkSubType< osg::Matrix3x2 >(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_62(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,66344120) ) return false;
		if( (!(Luna< osg::Matrix3x4Template< float > >::checkSubType< osg::Matrix3x4 >(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_63(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,67198576) ) return false;
		if( (!(Luna< osg::Matrix4x2Template< float > >::checkSubType< osg::Matrix4x2 >(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_64(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,40016085) ) return false;
		if( (!(Luna< osg::Matrix4x3Template< float > >::checkSubType< osg::Matrix4x3 >(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_65(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,40388721) ) return false;
		if( (!(Luna< osg::Matrix2Template< double > >::checkSubType< osg::Matrix2d >(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_66(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,86017494) ) return false;
		if( (!(Luna< osg::Matrix3d >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_67(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,18903838) ) return false;
		if( (!(Luna< osg::Matrixd >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_68(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,54499000) ) return false;
		if( (!(Luna< osg::Matrix2x3Template< double > >::checkSubType< osg::Matrix2x3d >(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_69(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,8586516) ) return false;
		if( (!(Luna< osg::Matrix2x4Template< double > >::checkSubType< osg::Matrix2x4d >(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_70(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,9703245) ) return false;
		if( (!(Luna< osg::Matrix3x2Template< double > >::checkSubType< osg::Matrix3x2d >(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_71(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,66491618) ) return false;
		if( (!(Luna< osg::Matrix3x4Template< double > >::checkSubType< osg::Matrix3x4d >(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_72(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92978793) ) return false;
		if( (!(Luna< osg::Matrix4x2Template< double > >::checkSubType< osg::Matrix4x2d >(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_73(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,50322789) ) return false;
		if( (!(Luna< osg::Matrix4x3Template< double > >::checkSubType< osg::Matrix4x3d >(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_74(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_75(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_76(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_77(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_78(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_79(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_80(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_81(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		if( lua_isboolean(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_82(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		if( lua_isboolean(L,5)==0 ) return false;
		if( lua_isboolean(L,6)==0 ) return false;
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

	inline static bool _lg_typecheck_setType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNumElements(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumElements(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getInternalArrayNumElements(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_compare(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_compareData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_copyData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getParents_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getParents_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getParent_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getParent_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumParents(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_set_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_overload_6(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303173) ) return false;
		if( (!(Luna< osg::Vec2f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_overload_7(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_overload_8(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303235) ) return false;
		if( (!(Luna< osg::Vec4f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_overload_9(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303171) ) return false;
		if( (!(Luna< osg::Vec2d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_overload_10(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_overload_11(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303233) ) return false;
		if( (!(Luna< osg::Vec4d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_overload_12(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,23566627) ) return false;
		if( (!(Luna< osg::Matrix2Template< float > >::checkSubType< osg::Matrix2 >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_overload_13(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903789) ) return false;
		if( (!(Luna< osg::Matrix3 >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_overload_14(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903840) ) return false;
		if( (!(Luna< osg::Matrixf >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_overload_15(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,36925025) ) return false;
		if( (!(Luna< osg::Matrix2x3Template< float > >::checkSubType< osg::Matrix2x3 >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_overload_16(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,61250437) ) return false;
		if( (!(Luna< osg::Matrix2x4Template< float > >::checkSubType< osg::Matrix2x4 >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_overload_17(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,64512237) ) return false;
		if( (!(Luna< osg::Matrix3x2Template< float > >::checkSubType< osg::Matrix3x2 >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_overload_18(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,66344120) ) return false;
		if( (!(Luna< osg::Matrix3x4Template< float > >::checkSubType< osg::Matrix3x4 >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_overload_19(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,67198576) ) return false;
		if( (!(Luna< osg::Matrix4x2Template< float > >::checkSubType< osg::Matrix4x2 >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_overload_20(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,40016085) ) return false;
		if( (!(Luna< osg::Matrix4x3Template< float > >::checkSubType< osg::Matrix4x3 >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_overload_21(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,40388721) ) return false;
		if( (!(Luna< osg::Matrix2Template< double > >::checkSubType< osg::Matrix2d >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_overload_22(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,86017494) ) return false;
		if( (!(Luna< osg::Matrix3d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_overload_23(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		if( (!(Luna< osg::Matrixd >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_overload_24(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54499000) ) return false;
		if( (!(Luna< osg::Matrix2x3Template< double > >::checkSubType< osg::Matrix2x3d >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_overload_25(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,8586516) ) return false;
		if( (!(Luna< osg::Matrix2x4Template< double > >::checkSubType< osg::Matrix2x4d >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_overload_26(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,9703245) ) return false;
		if( (!(Luna< osg::Matrix3x2Template< double > >::checkSubType< osg::Matrix3x2d >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_overload_27(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,66491618) ) return false;
		if( (!(Luna< osg::Matrix3x4Template< double > >::checkSubType< osg::Matrix3x4d >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_overload_28(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92978793) ) return false;
		if( (!(Luna< osg::Matrix4x2Template< double > >::checkSubType< osg::Matrix4x2d >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_overload_29(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50322789) ) return false;
		if( (!(Luna< osg::Matrix4x3Template< double > >::checkSubType< osg::Matrix4x3d >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_overload_30(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_overload_31(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_overload_32(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_overload_33(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_overload_34(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_overload_35(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_overload_36(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_overload_37(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_overload_38(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		if( lua_isboolean(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_overload_6(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303173) ) return false;
		if( (!(Luna< osg::Vec2f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_overload_7(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_overload_8(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303235) ) return false;
		if( (!(Luna< osg::Vec4f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_overload_9(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303171) ) return false;
		if( (!(Luna< osg::Vec2d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_overload_10(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_overload_11(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303233) ) return false;
		if( (!(Luna< osg::Vec4d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_overload_12(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,23566627) ) return false;
		if( (!(Luna< osg::Matrix2Template< float > >::checkSubType< osg::Matrix2 >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_overload_13(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903789) ) return false;
		if( (!(Luna< osg::Matrix3 >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_overload_14(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903840) ) return false;
		if( (!(Luna< osg::Matrixf >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_overload_15(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,36925025) ) return false;
		if( (!(Luna< osg::Matrix2x3Template< float > >::checkSubType< osg::Matrix2x3 >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_overload_16(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,61250437) ) return false;
		if( (!(Luna< osg::Matrix2x4Template< float > >::checkSubType< osg::Matrix2x4 >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_overload_17(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,64512237) ) return false;
		if( (!(Luna< osg::Matrix3x2Template< float > >::checkSubType< osg::Matrix3x2 >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_overload_18(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,66344120) ) return false;
		if( (!(Luna< osg::Matrix3x4Template< float > >::checkSubType< osg::Matrix3x4 >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_overload_19(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,67198576) ) return false;
		if( (!(Luna< osg::Matrix4x2Template< float > >::checkSubType< osg::Matrix4x2 >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_overload_20(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,40016085) ) return false;
		if( (!(Luna< osg::Matrix4x3Template< float > >::checkSubType< osg::Matrix4x3 >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_overload_21(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,40388721) ) return false;
		if( (!(Luna< osg::Matrix2Template< double > >::checkSubType< osg::Matrix2d >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_overload_22(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,86017494) ) return false;
		if( (!(Luna< osg::Matrix3d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_overload_23(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		if( (!(Luna< osg::Matrixd >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_overload_24(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54499000) ) return false;
		if( (!(Luna< osg::Matrix2x3Template< double > >::checkSubType< osg::Matrix2x3d >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_overload_25(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,8586516) ) return false;
		if( (!(Luna< osg::Matrix2x4Template< double > >::checkSubType< osg::Matrix2x4d >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_overload_26(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,9703245) ) return false;
		if( (!(Luna< osg::Matrix3x2Template< double > >::checkSubType< osg::Matrix3x2d >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_overload_27(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,66491618) ) return false;
		if( (!(Luna< osg::Matrix3x4Template< double > >::checkSubType< osg::Matrix3x4d >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_overload_28(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92978793) ) return false;
		if( (!(Luna< osg::Matrix4x2Template< double > >::checkSubType< osg::Matrix4x2d >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_overload_29(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50322789) ) return false;
		if( (!(Luna< osg::Matrix4x3Template< double > >::checkSubType< osg::Matrix4x3d >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_overload_30(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_overload_31(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_overload_32(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_overload_33(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_overload_34(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_overload_35(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_overload_36(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_overload_37(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_overload_38(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		if( lua_isboolean(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setElement_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setElement_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setElement_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setElement_overload_4(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setElement_overload_5(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setElement_overload_6(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303173) ) return false;
		if( (!(Luna< osg::Vec2f >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setElement_overload_7(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setElement_overload_8(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303235) ) return false;
		if( (!(Luna< osg::Vec4f >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setElement_overload_9(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303171) ) return false;
		if( (!(Luna< osg::Vec2d >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setElement_overload_10(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setElement_overload_11(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303233) ) return false;
		if( (!(Luna< osg::Vec4d >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setElement_overload_12(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,23566627) ) return false;
		if( (!(Luna< osg::Matrix2Template< float > >::checkSubType< osg::Matrix2 >(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setElement_overload_13(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,18903789) ) return false;
		if( (!(Luna< osg::Matrix3 >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setElement_overload_14(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,18903840) ) return false;
		if( (!(Luna< osg::Matrixf >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setElement_overload_15(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,36925025) ) return false;
		if( (!(Luna< osg::Matrix2x3Template< float > >::checkSubType< osg::Matrix2x3 >(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setElement_overload_16(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,61250437) ) return false;
		if( (!(Luna< osg::Matrix2x4Template< float > >::checkSubType< osg::Matrix2x4 >(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setElement_overload_17(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,64512237) ) return false;
		if( (!(Luna< osg::Matrix3x2Template< float > >::checkSubType< osg::Matrix3x2 >(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setElement_overload_18(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,66344120) ) return false;
		if( (!(Luna< osg::Matrix3x4Template< float > >::checkSubType< osg::Matrix3x4 >(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setElement_overload_19(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,67198576) ) return false;
		if( (!(Luna< osg::Matrix4x2Template< float > >::checkSubType< osg::Matrix4x2 >(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setElement_overload_20(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,40016085) ) return false;
		if( (!(Luna< osg::Matrix4x3Template< float > >::checkSubType< osg::Matrix4x3 >(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setElement_overload_21(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,40388721) ) return false;
		if( (!(Luna< osg::Matrix2Template< double > >::checkSubType< osg::Matrix2d >(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setElement_overload_22(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,86017494) ) return false;
		if( (!(Luna< osg::Matrix3d >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setElement_overload_23(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,18903838) ) return false;
		if( (!(Luna< osg::Matrixd >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setElement_overload_24(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,54499000) ) return false;
		if( (!(Luna< osg::Matrix2x3Template< double > >::checkSubType< osg::Matrix2x3d >(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setElement_overload_25(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,8586516) ) return false;
		if( (!(Luna< osg::Matrix2x4Template< double > >::checkSubType< osg::Matrix2x4d >(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setElement_overload_26(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,9703245) ) return false;
		if( (!(Luna< osg::Matrix3x2Template< double > >::checkSubType< osg::Matrix3x2d >(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setElement_overload_27(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,66491618) ) return false;
		if( (!(Luna< osg::Matrix3x4Template< double > >::checkSubType< osg::Matrix3x4d >(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setElement_overload_28(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92978793) ) return false;
		if( (!(Luna< osg::Matrix4x2Template< double > >::checkSubType< osg::Matrix4x2d >(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setElement_overload_29(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,50322789) ) return false;
		if( (!(Luna< osg::Matrix4x3Template< double > >::checkSubType< osg::Matrix4x3d >(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setElement_overload_30(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setElement_overload_31(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setElement_overload_32(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setElement_overload_33(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setElement_overload_34(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setElement_overload_35(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setElement_overload_36(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setElement_overload_37(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		if( lua_isboolean(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setElement_overload_38(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		if( lua_isboolean(L,5)==0 ) return false;
		if( lua_isboolean(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getElement_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getElement_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getElement_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getElement_overload_4(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getElement_overload_5(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getElement_overload_6(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303173) ) return false;
		if( (!(Luna< osg::Vec2f >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getElement_overload_7(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getElement_overload_8(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303235) ) return false;
		if( (!(Luna< osg::Vec4f >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getElement_overload_9(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303171) ) return false;
		if( (!(Luna< osg::Vec2d >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getElement_overload_10(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getElement_overload_11(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303233) ) return false;
		if( (!(Luna< osg::Vec4d >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getElement_overload_12(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,23566627) ) return false;
		if( (!(Luna< osg::Matrix2Template< float > >::checkSubType< osg::Matrix2 >(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getElement_overload_13(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,18903789) ) return false;
		if( (!(Luna< osg::Matrix3 >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getElement_overload_14(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,18903840) ) return false;
		if( (!(Luna< osg::Matrixf >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getElement_overload_15(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,36925025) ) return false;
		if( (!(Luna< osg::Matrix2x3Template< float > >::checkSubType< osg::Matrix2x3 >(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getElement_overload_16(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,61250437) ) return false;
		if( (!(Luna< osg::Matrix2x4Template< float > >::checkSubType< osg::Matrix2x4 >(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getElement_overload_17(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,64512237) ) return false;
		if( (!(Luna< osg::Matrix3x2Template< float > >::checkSubType< osg::Matrix3x2 >(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getElement_overload_18(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,66344120) ) return false;
		if( (!(Luna< osg::Matrix3x4Template< float > >::checkSubType< osg::Matrix3x4 >(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getElement_overload_19(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,67198576) ) return false;
		if( (!(Luna< osg::Matrix4x2Template< float > >::checkSubType< osg::Matrix4x2 >(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getElement_overload_20(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,40016085) ) return false;
		if( (!(Luna< osg::Matrix4x3Template< float > >::checkSubType< osg::Matrix4x3 >(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getElement_overload_21(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,40388721) ) return false;
		if( (!(Luna< osg::Matrix2Template< double > >::checkSubType< osg::Matrix2d >(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getElement_overload_22(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,86017494) ) return false;
		if( (!(Luna< osg::Matrix3d >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getElement_overload_23(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,18903838) ) return false;
		if( (!(Luna< osg::Matrixd >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getElement_overload_24(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,54499000) ) return false;
		if( (!(Luna< osg::Matrix2x3Template< double > >::checkSubType< osg::Matrix2x3d >(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getElement_overload_25(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,8586516) ) return false;
		if( (!(Luna< osg::Matrix2x4Template< double > >::checkSubType< osg::Matrix2x4d >(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getElement_overload_26(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,9703245) ) return false;
		if( (!(Luna< osg::Matrix3x2Template< double > >::checkSubType< osg::Matrix3x2d >(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getElement_overload_27(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,66491618) ) return false;
		if( (!(Luna< osg::Matrix3x4Template< double > >::checkSubType< osg::Matrix3x4d >(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getElement_overload_28(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92978793) ) return false;
		if( (!(Luna< osg::Matrix4x2Template< double > >::checkSubType< osg::Matrix4x2d >(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getElement_overload_29(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,50322789) ) return false;
		if( (!(Luna< osg::Matrix4x3Template< double > >::checkSubType< osg::Matrix4x3d >(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getElement_overload_30(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getElement_overload_31(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getElement_overload_32(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getElement_overload_33(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getElement_overload_34(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getElement_overload_35(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getElement_overload_36(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getElement_overload_37(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		if( lua_isboolean(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getElement_overload_38(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		if( lua_isboolean(L,5)==0 ) return false;
		if( lua_isboolean(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUpdateCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUpdateCallback_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUpdateCallback_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setEventCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getEventCallback_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getEventCallback_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_dirty(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setArray_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,66705573)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::TemplateArray< float, osg::Array::FloatArrayType, 1, GL_FLOAT > >::checkSubType< osg::FloatArray >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setArray_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,14704447)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::TemplateArray< double, osg::Array::DoubleArrayType, 1, 0x140A > >::checkSubType< osg::DoubleArray >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setArray_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,77568465)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::TemplateIndexArray< int, osg::Array::IntArrayType, 1, 0x1404 > >::checkSubType< osg::IntArray >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setArray_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,14674410)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::TemplateIndexArray< unsigned int, osg::Array::UIntArrayType, 1, 0x1405 > >::checkSubType< osg::UIntArray >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFloatArray_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFloatArray_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDoubleArray_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDoubleArray_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getIntArray_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getIntArray_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUIntArray_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUIntArray_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setModifiedCount(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getModifiedCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNameID_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNameID_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTypename(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTypeNumComponents(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTypeId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getGlApiType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getInternalArrayType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setInt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFloat(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
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

	inline static bool _lg_typecheck_base_setName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_compare(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_compareData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 3 valid operators)
	inline static bool _lg_typecheck___lt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_neq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}


	// Constructor binds:
	// osg::Uniform::Uniform()
	static osg::Uniform* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Uniform() function, expected prototype:\nosg::Uniform::Uniform()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::Uniform();
	}

	// osg::Uniform::Uniform(osg::Uniform::Type type, const std::string & name, int numElements = 1)
	static osg::Uniform* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Uniform(osg::Uniform::Type type, const std::string & name, int numElements = 1) function, expected prototype:\nosg::Uniform::Uniform(osg::Uniform::Type type, const std::string & name, int numElements = 1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::Uniform::Type type=(osg::Uniform::Type)lua_tointeger(L,1);
		std::string name(lua_tostring(L,2),lua_objlen(L,2));
		int numElements=luatop>2 ? (int)lua_tointeger(L,3) : (int)1;

		return new osg::Uniform(type, name, numElements);
	}

	// osg::Uniform::Uniform(const osg::Uniform & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::Uniform* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Uniform(const osg::Uniform & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::Uniform::Uniform(const osg::Uniform & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Uniform* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Uniform::Uniform function");
		}
		const osg::Uniform & rhs=*rhs_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Uniform::Uniform function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osg::Uniform(rhs, copyop);
	}

	// osg::Uniform::Uniform(const char * name, float f)
	static osg::Uniform* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Uniform(const char * name, float f) function, expected prototype:\nosg::Uniform::Uniform(const char * name, float f)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,1);
		float f=(float)lua_tonumber(L,2);

		return new osg::Uniform(name, f);
	}

	// osg::Uniform::Uniform(const char * name, double d)
	static osg::Uniform* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Uniform(const char * name, double d) function, expected prototype:\nosg::Uniform::Uniform(const char * name, double d)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,1);
		double d=(double)lua_tonumber(L,2);

		return new osg::Uniform(name, d);
	}

	// osg::Uniform::Uniform(const char * name, int i)
	static osg::Uniform* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Uniform(const char * name, int i) function, expected prototype:\nosg::Uniform::Uniform(const char * name, int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,1);
		int i=(int)lua_tointeger(L,2);

		return new osg::Uniform(name, i);
	}

	// osg::Uniform::Uniform(const char * name, unsigned int ui)
	static osg::Uniform* _bind_ctor_overload_7(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_7(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Uniform(const char * name, unsigned int ui) function, expected prototype:\nosg::Uniform::Uniform(const char * name, unsigned int ui)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,1);
		unsigned int ui=(unsigned int)lua_tointeger(L,2);

		return new osg::Uniform(name, ui);
	}

	// osg::Uniform::Uniform(const char * name, bool b)
	static osg::Uniform* _bind_ctor_overload_8(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_8(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Uniform(const char * name, bool b) function, expected prototype:\nosg::Uniform::Uniform(const char * name, bool b)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,1);
		bool b=(bool)(lua_toboolean(L,2)==1);

		return new osg::Uniform(name, b);
	}

	// osg::Uniform::Uniform(const char * name, const osg::Vec2f & v2)
	static osg::Uniform* _bind_ctor_overload_9(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_9(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Uniform(const char * name, const osg::Vec2f & v2) function, expected prototype:\nosg::Uniform::Uniform(const char * name, const osg::Vec2f & v2)\nClass arguments details:\narg 2 ID = 92303173\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,1);
		const osg::Vec2f* v2_ptr=(Luna< osg::Vec2f >::check(L,2));
		if( !v2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v2 in osg::Uniform::Uniform function");
		}
		const osg::Vec2f & v2=*v2_ptr;

		return new osg::Uniform(name, v2);
	}

	// osg::Uniform::Uniform(const char * name, const osg::Vec3f & v3)
	static osg::Uniform* _bind_ctor_overload_10(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_10(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Uniform(const char * name, const osg::Vec3f & v3) function, expected prototype:\nosg::Uniform::Uniform(const char * name, const osg::Vec3f & v3)\nClass arguments details:\narg 2 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,1);
		const osg::Vec3f* v3_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !v3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v3 in osg::Uniform::Uniform function");
		}
		const osg::Vec3f & v3=*v3_ptr;

		return new osg::Uniform(name, v3);
	}

	// osg::Uniform::Uniform(const char * name, const osg::Vec4f & v4)
	static osg::Uniform* _bind_ctor_overload_11(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_11(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Uniform(const char * name, const osg::Vec4f & v4) function, expected prototype:\nosg::Uniform::Uniform(const char * name, const osg::Vec4f & v4)\nClass arguments details:\narg 2 ID = 92303235\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,1);
		const osg::Vec4f* v4_ptr=(Luna< osg::Vec4f >::check(L,2));
		if( !v4_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v4 in osg::Uniform::Uniform function");
		}
		const osg::Vec4f & v4=*v4_ptr;

		return new osg::Uniform(name, v4);
	}

	// osg::Uniform::Uniform(const char * name, const osg::Vec2d & v2)
	static osg::Uniform* _bind_ctor_overload_12(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_12(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Uniform(const char * name, const osg::Vec2d & v2) function, expected prototype:\nosg::Uniform::Uniform(const char * name, const osg::Vec2d & v2)\nClass arguments details:\narg 2 ID = 92303171\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,1);
		const osg::Vec2d* v2_ptr=(Luna< osg::Vec2d >::check(L,2));
		if( !v2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v2 in osg::Uniform::Uniform function");
		}
		const osg::Vec2d & v2=*v2_ptr;

		return new osg::Uniform(name, v2);
	}

	// osg::Uniform::Uniform(const char * name, const osg::Vec3d & v3)
	static osg::Uniform* _bind_ctor_overload_13(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_13(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Uniform(const char * name, const osg::Vec3d & v3) function, expected prototype:\nosg::Uniform::Uniform(const char * name, const osg::Vec3d & v3)\nClass arguments details:\narg 2 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,1);
		const osg::Vec3d* v3_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !v3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v3 in osg::Uniform::Uniform function");
		}
		const osg::Vec3d & v3=*v3_ptr;

		return new osg::Uniform(name, v3);
	}

	// osg::Uniform::Uniform(const char * name, const osg::Vec4d & v4)
	static osg::Uniform* _bind_ctor_overload_14(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_14(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Uniform(const char * name, const osg::Vec4d & v4) function, expected prototype:\nosg::Uniform::Uniform(const char * name, const osg::Vec4d & v4)\nClass arguments details:\narg 2 ID = 92303233\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,1);
		const osg::Vec4d* v4_ptr=(Luna< osg::Vec4d >::check(L,2));
		if( !v4_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v4 in osg::Uniform::Uniform function");
		}
		const osg::Vec4d & v4=*v4_ptr;

		return new osg::Uniform(name, v4);
	}

	// osg::Uniform::Uniform(const char * name, const osg::Matrix2 & m2)
	static osg::Uniform* _bind_ctor_overload_15(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_15(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Uniform(const char * name, const osg::Matrix2 & m2) function, expected prototype:\nosg::Uniform::Uniform(const char * name, const osg::Matrix2 & m2)\nClass arguments details:\narg 2 ID = 18903788\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,1);
		const osg::Matrix2* m2_ptr=(Luna< osg::Matrix2Template< float > >::checkSubType< osg::Matrix2 >(L,2));
		if( !m2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m2 in osg::Uniform::Uniform function");
		}
		const osg::Matrix2 & m2=*m2_ptr;

		return new osg::Uniform(name, m2);
	}

	// osg::Uniform::Uniform(const char * name, const osg::Matrix3 & m3)
	static osg::Uniform* _bind_ctor_overload_16(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_16(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Uniform(const char * name, const osg::Matrix3 & m3) function, expected prototype:\nosg::Uniform::Uniform(const char * name, const osg::Matrix3 & m3)\nClass arguments details:\narg 2 ID = 18903789\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,1);
		const osg::Matrix3* m3_ptr=(Luna< osg::Matrix3 >::check(L,2));
		if( !m3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m3 in osg::Uniform::Uniform function");
		}
		const osg::Matrix3 & m3=*m3_ptr;

		return new osg::Uniform(name, m3);
	}

	// osg::Uniform::Uniform(const char * name, const osg::Matrixf & m4)
	static osg::Uniform* _bind_ctor_overload_17(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_17(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Uniform(const char * name, const osg::Matrixf & m4) function, expected prototype:\nosg::Uniform::Uniform(const char * name, const osg::Matrixf & m4)\nClass arguments details:\narg 2 ID = 18903840\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,1);
		const osg::Matrixf* m4_ptr=(Luna< osg::Matrixf >::check(L,2));
		if( !m4_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m4 in osg::Uniform::Uniform function");
		}
		const osg::Matrixf & m4=*m4_ptr;

		return new osg::Uniform(name, m4);
	}

	// osg::Uniform::Uniform(const char * name, const osg::Matrix2x3 & m2x3)
	static osg::Uniform* _bind_ctor_overload_18(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_18(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Uniform(const char * name, const osg::Matrix2x3 & m2x3) function, expected prototype:\nosg::Uniform::Uniform(const char * name, const osg::Matrix2x3 & m2x3)\nClass arguments details:\narg 2 ID = 66541660\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,1);
		const osg::Matrix2x3* m2x3_ptr=(Luna< osg::Matrix2x3Template< float > >::checkSubType< osg::Matrix2x3 >(L,2));
		if( !m2x3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m2x3 in osg::Uniform::Uniform function");
		}
		const osg::Matrix2x3 & m2x3=*m2x3_ptr;

		return new osg::Uniform(name, m2x3);
	}

	// osg::Uniform::Uniform(const char * name, const osg::Matrix2x4 & m2x4)
	static osg::Uniform* _bind_ctor_overload_19(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_19(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Uniform(const char * name, const osg::Matrix2x4 & m2x4) function, expected prototype:\nosg::Uniform::Uniform(const char * name, const osg::Matrix2x4 & m2x4)\nClass arguments details:\narg 2 ID = 66541661\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,1);
		const osg::Matrix2x4* m2x4_ptr=(Luna< osg::Matrix2x4Template< float > >::checkSubType< osg::Matrix2x4 >(L,2));
		if( !m2x4_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m2x4 in osg::Uniform::Uniform function");
		}
		const osg::Matrix2x4 & m2x4=*m2x4_ptr;

		return new osg::Uniform(name, m2x4);
	}

	// osg::Uniform::Uniform(const char * name, const osg::Matrix3x2 & m3x2)
	static osg::Uniform* _bind_ctor_overload_20(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_20(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Uniform(const char * name, const osg::Matrix3x2 & m3x2) function, expected prototype:\nosg::Uniform::Uniform(const char * name, const osg::Matrix3x2 & m3x2)\nClass arguments details:\narg 2 ID = 66542620\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,1);
		const osg::Matrix3x2* m3x2_ptr=(Luna< osg::Matrix3x2Template< float > >::checkSubType< osg::Matrix3x2 >(L,2));
		if( !m3x2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m3x2 in osg::Uniform::Uniform function");
		}
		const osg::Matrix3x2 & m3x2=*m3x2_ptr;

		return new osg::Uniform(name, m3x2);
	}

	// osg::Uniform::Uniform(const char * name, const osg::Matrix3x4 & m3x4)
	static osg::Uniform* _bind_ctor_overload_21(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_21(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Uniform(const char * name, const osg::Matrix3x4 & m3x4) function, expected prototype:\nosg::Uniform::Uniform(const char * name, const osg::Matrix3x4 & m3x4)\nClass arguments details:\narg 2 ID = 66542622\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,1);
		const osg::Matrix3x4* m3x4_ptr=(Luna< osg::Matrix3x4Template< float > >::checkSubType< osg::Matrix3x4 >(L,2));
		if( !m3x4_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m3x4 in osg::Uniform::Uniform function");
		}
		const osg::Matrix3x4 & m3x4=*m3x4_ptr;

		return new osg::Uniform(name, m3x4);
	}

	// osg::Uniform::Uniform(const char * name, const osg::Matrix4x2 & m4x2)
	static osg::Uniform* _bind_ctor_overload_22(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_22(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Uniform(const char * name, const osg::Matrix4x2 & m4x2) function, expected prototype:\nosg::Uniform::Uniform(const char * name, const osg::Matrix4x2 & m4x2)\nClass arguments details:\narg 2 ID = 66543581\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,1);
		const osg::Matrix4x2* m4x2_ptr=(Luna< osg::Matrix4x2Template< float > >::checkSubType< osg::Matrix4x2 >(L,2));
		if( !m4x2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m4x2 in osg::Uniform::Uniform function");
		}
		const osg::Matrix4x2 & m4x2=*m4x2_ptr;

		return new osg::Uniform(name, m4x2);
	}

	// osg::Uniform::Uniform(const char * name, const osg::Matrix4x3 & m4x3)
	static osg::Uniform* _bind_ctor_overload_23(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_23(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Uniform(const char * name, const osg::Matrix4x3 & m4x3) function, expected prototype:\nosg::Uniform::Uniform(const char * name, const osg::Matrix4x3 & m4x3)\nClass arguments details:\narg 2 ID = 66543582\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,1);
		const osg::Matrix4x3* m4x3_ptr=(Luna< osg::Matrix4x3Template< float > >::checkSubType< osg::Matrix4x3 >(L,2));
		if( !m4x3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m4x3 in osg::Uniform::Uniform function");
		}
		const osg::Matrix4x3 & m4x3=*m4x3_ptr;

		return new osg::Uniform(name, m4x3);
	}

	// osg::Uniform::Uniform(const char * name, const osg::Matrix2d & m2)
	static osg::Uniform* _bind_ctor_overload_24(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_24(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Uniform(const char * name, const osg::Matrix2d & m2) function, expected prototype:\nosg::Uniform::Uniform(const char * name, const osg::Matrix2d & m2)\nClass arguments details:\narg 2 ID = 86017463\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,1);
		const osg::Matrix2d* m2_ptr=(Luna< osg::Matrix2Template< double > >::checkSubType< osg::Matrix2d >(L,2));
		if( !m2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m2 in osg::Uniform::Uniform function");
		}
		const osg::Matrix2d & m2=*m2_ptr;

		return new osg::Uniform(name, m2);
	}

	// osg::Uniform::Uniform(const char * name, const osg::Matrix3d & m3)
	static osg::Uniform* _bind_ctor_overload_25(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_25(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Uniform(const char * name, const osg::Matrix3d & m3) function, expected prototype:\nosg::Uniform::Uniform(const char * name, const osg::Matrix3d & m3)\nClass arguments details:\narg 2 ID = 86017494\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,1);
		const osg::Matrix3d* m3_ptr=(Luna< osg::Matrix3d >::check(L,2));
		if( !m3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m3 in osg::Uniform::Uniform function");
		}
		const osg::Matrix3d & m3=*m3_ptr;

		return new osg::Uniform(name, m3);
	}

	// osg::Uniform::Uniform(const char * name, const osg::Matrixd & m4)
	static osg::Uniform* _bind_ctor_overload_26(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_26(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Uniform(const char * name, const osg::Matrixd & m4) function, expected prototype:\nosg::Uniform::Uniform(const char * name, const osg::Matrixd & m4)\nClass arguments details:\narg 2 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,1);
		const osg::Matrixd* m4_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !m4_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m4 in osg::Uniform::Uniform function");
		}
		const osg::Matrixd & m4=*m4_ptr;

		return new osg::Uniform(name, m4);
	}

	// osg::Uniform::Uniform(const char * name, const osg::Matrix2x3d & m2x3)
	static osg::Uniform* _bind_ctor_overload_27(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_27(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Uniform(const char * name, const osg::Matrix2x3d & m2x3) function, expected prototype:\nosg::Uniform::Uniform(const char * name, const osg::Matrix2x3d & m2x3)\nClass arguments details:\narg 2 ID = 62791260\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,1);
		const osg::Matrix2x3d* m2x3_ptr=(Luna< osg::Matrix2x3Template< double > >::checkSubType< osg::Matrix2x3d >(L,2));
		if( !m2x3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m2x3 in osg::Uniform::Uniform function");
		}
		const osg::Matrix2x3d & m2x3=*m2x3_ptr;

		return new osg::Uniform(name, m2x3);
	}

	// osg::Uniform::Uniform(const char * name, const osg::Matrix2x4d & m2x4)
	static osg::Uniform* _bind_ctor_overload_28(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_28(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Uniform(const char * name, const osg::Matrix2x4d & m2x4) function, expected prototype:\nosg::Uniform::Uniform(const char * name, const osg::Matrix2x4d & m2x4)\nClass arguments details:\narg 2 ID = 62791291\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,1);
		const osg::Matrix2x4d* m2x4_ptr=(Luna< osg::Matrix2x4Template< double > >::checkSubType< osg::Matrix2x4d >(L,2));
		if( !m2x4_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m2x4 in osg::Uniform::Uniform function");
		}
		const osg::Matrix2x4d & m2x4=*m2x4_ptr;

		return new osg::Uniform(name, m2x4);
	}

	// osg::Uniform::Uniform(const char * name, const osg::Matrix3x2d & m3x2)
	static osg::Uniform* _bind_ctor_overload_29(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_29(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Uniform(const char * name, const osg::Matrix3x2d & m3x2) function, expected prototype:\nosg::Uniform::Uniform(const char * name, const osg::Matrix3x2d & m3x2)\nClass arguments details:\narg 2 ID = 62821020\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,1);
		const osg::Matrix3x2d* m3x2_ptr=(Luna< osg::Matrix3x2Template< double > >::checkSubType< osg::Matrix3x2d >(L,2));
		if( !m3x2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m3x2 in osg::Uniform::Uniform function");
		}
		const osg::Matrix3x2d & m3x2=*m3x2_ptr;

		return new osg::Uniform(name, m3x2);
	}

	// osg::Uniform::Uniform(const char * name, const osg::Matrix3x4d & m3x4)
	static osg::Uniform* _bind_ctor_overload_30(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_30(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Uniform(const char * name, const osg::Matrix3x4d & m3x4) function, expected prototype:\nosg::Uniform::Uniform(const char * name, const osg::Matrix3x4d & m3x4)\nClass arguments details:\narg 2 ID = 62821082\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,1);
		const osg::Matrix3x4d* m3x4_ptr=(Luna< osg::Matrix3x4Template< double > >::checkSubType< osg::Matrix3x4d >(L,2));
		if( !m3x4_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m3x4 in osg::Uniform::Uniform function");
		}
		const osg::Matrix3x4d & m3x4=*m3x4_ptr;

		return new osg::Uniform(name, m3x4);
	}

	// osg::Uniform::Uniform(const char * name, const osg::Matrix4x2d & m4x2)
	static osg::Uniform* _bind_ctor_overload_31(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_31(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Uniform(const char * name, const osg::Matrix4x2d & m4x2) function, expected prototype:\nosg::Uniform::Uniform(const char * name, const osg::Matrix4x2d & m4x2)\nClass arguments details:\narg 2 ID = 62850811\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,1);
		const osg::Matrix4x2d* m4x2_ptr=(Luna< osg::Matrix4x2Template< double > >::checkSubType< osg::Matrix4x2d >(L,2));
		if( !m4x2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m4x2 in osg::Uniform::Uniform function");
		}
		const osg::Matrix4x2d & m4x2=*m4x2_ptr;

		return new osg::Uniform(name, m4x2);
	}

	// osg::Uniform::Uniform(const char * name, const osg::Matrix4x3d & m4x3)
	static osg::Uniform* _bind_ctor_overload_32(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_32(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Uniform(const char * name, const osg::Matrix4x3d & m4x3) function, expected prototype:\nosg::Uniform::Uniform(const char * name, const osg::Matrix4x3d & m4x3)\nClass arguments details:\narg 2 ID = 62850842\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,1);
		const osg::Matrix4x3d* m4x3_ptr=(Luna< osg::Matrix4x3Template< double > >::checkSubType< osg::Matrix4x3d >(L,2));
		if( !m4x3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m4x3 in osg::Uniform::Uniform function");
		}
		const osg::Matrix4x3d & m4x3=*m4x3_ptr;

		return new osg::Uniform(name, m4x3);
	}

	// osg::Uniform::Uniform(const char * name, int i0, int i1)
	static osg::Uniform* _bind_ctor_overload_33(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_33(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Uniform(const char * name, int i0, int i1) function, expected prototype:\nosg::Uniform::Uniform(const char * name, int i0, int i1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,1);
		int i0=(int)lua_tointeger(L,2);
		int i1=(int)lua_tointeger(L,3);

		return new osg::Uniform(name, i0, i1);
	}

	// osg::Uniform::Uniform(const char * name, int i0, int i1, int i2)
	static osg::Uniform* _bind_ctor_overload_34(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_34(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Uniform(const char * name, int i0, int i1, int i2) function, expected prototype:\nosg::Uniform::Uniform(const char * name, int i0, int i1, int i2)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,1);
		int i0=(int)lua_tointeger(L,2);
		int i1=(int)lua_tointeger(L,3);
		int i2=(int)lua_tointeger(L,4);

		return new osg::Uniform(name, i0, i1, i2);
	}

	// osg::Uniform::Uniform(const char * name, int i0, int i1, int i2, int i3)
	static osg::Uniform* _bind_ctor_overload_35(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_35(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Uniform(const char * name, int i0, int i1, int i2, int i3) function, expected prototype:\nosg::Uniform::Uniform(const char * name, int i0, int i1, int i2, int i3)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,1);
		int i0=(int)lua_tointeger(L,2);
		int i1=(int)lua_tointeger(L,3);
		int i2=(int)lua_tointeger(L,4);
		int i3=(int)lua_tointeger(L,5);

		return new osg::Uniform(name, i0, i1, i2, i3);
	}

	// osg::Uniform::Uniform(const char * name, unsigned int ui0, unsigned int ui1)
	static osg::Uniform* _bind_ctor_overload_36(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_36(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Uniform(const char * name, unsigned int ui0, unsigned int ui1) function, expected prototype:\nosg::Uniform::Uniform(const char * name, unsigned int ui0, unsigned int ui1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,1);
		unsigned int ui0=(unsigned int)lua_tointeger(L,2);
		unsigned int ui1=(unsigned int)lua_tointeger(L,3);

		return new osg::Uniform(name, ui0, ui1);
	}

	// osg::Uniform::Uniform(const char * name, unsigned int ui0, unsigned int ui1, unsigned int ui2)
	static osg::Uniform* _bind_ctor_overload_37(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_37(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Uniform(const char * name, unsigned int ui0, unsigned int ui1, unsigned int ui2) function, expected prototype:\nosg::Uniform::Uniform(const char * name, unsigned int ui0, unsigned int ui1, unsigned int ui2)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,1);
		unsigned int ui0=(unsigned int)lua_tointeger(L,2);
		unsigned int ui1=(unsigned int)lua_tointeger(L,3);
		unsigned int ui2=(unsigned int)lua_tointeger(L,4);

		return new osg::Uniform(name, ui0, ui1, ui2);
	}

	// osg::Uniform::Uniform(const char * name, unsigned int ui0, unsigned int ui1, unsigned int ui2, unsigned int ui3)
	static osg::Uniform* _bind_ctor_overload_38(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_38(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Uniform(const char * name, unsigned int ui0, unsigned int ui1, unsigned int ui2, unsigned int ui3) function, expected prototype:\nosg::Uniform::Uniform(const char * name, unsigned int ui0, unsigned int ui1, unsigned int ui2, unsigned int ui3)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,1);
		unsigned int ui0=(unsigned int)lua_tointeger(L,2);
		unsigned int ui1=(unsigned int)lua_tointeger(L,3);
		unsigned int ui2=(unsigned int)lua_tointeger(L,4);
		unsigned int ui3=(unsigned int)lua_tointeger(L,5);

		return new osg::Uniform(name, ui0, ui1, ui2, ui3);
	}

	// osg::Uniform::Uniform(const char * name, bool b0, bool b1)
	static osg::Uniform* _bind_ctor_overload_39(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_39(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Uniform(const char * name, bool b0, bool b1) function, expected prototype:\nosg::Uniform::Uniform(const char * name, bool b0, bool b1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,1);
		bool b0=(bool)(lua_toboolean(L,2)==1);
		bool b1=(bool)(lua_toboolean(L,3)==1);

		return new osg::Uniform(name, b0, b1);
	}

	// osg::Uniform::Uniform(const char * name, bool b0, bool b1, bool b2)
	static osg::Uniform* _bind_ctor_overload_40(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_40(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Uniform(const char * name, bool b0, bool b1, bool b2) function, expected prototype:\nosg::Uniform::Uniform(const char * name, bool b0, bool b1, bool b2)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,1);
		bool b0=(bool)(lua_toboolean(L,2)==1);
		bool b1=(bool)(lua_toboolean(L,3)==1);
		bool b2=(bool)(lua_toboolean(L,4)==1);

		return new osg::Uniform(name, b0, b1, b2);
	}

	// osg::Uniform::Uniform(const char * name, bool b0, bool b1, bool b2, bool b3)
	static osg::Uniform* _bind_ctor_overload_41(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_41(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Uniform(const char * name, bool b0, bool b1, bool b2, bool b3) function, expected prototype:\nosg::Uniform::Uniform(const char * name, bool b0, bool b1, bool b2, bool b3)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,1);
		bool b0=(bool)(lua_toboolean(L,2)==1);
		bool b1=(bool)(lua_toboolean(L,3)==1);
		bool b2=(bool)(lua_toboolean(L,4)==1);
		bool b3=(bool)(lua_toboolean(L,5)==1);

		return new osg::Uniform(name, b0, b1, b2, b3);
	}

	// osg::Uniform::Uniform(lua_Table * data)
	static osg::Uniform* _bind_ctor_overload_42(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_42(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Uniform(lua_Table * data) function, expected prototype:\nosg::Uniform::Uniform(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_Uniform(L,NULL);
	}

	// osg::Uniform::Uniform(lua_Table * data, osg::Uniform::Type type, const std::string & name, int numElements = 1)
	static osg::Uniform* _bind_ctor_overload_43(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_43(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Uniform(lua_Table * data, osg::Uniform::Type type, const std::string & name, int numElements = 1) function, expected prototype:\nosg::Uniform::Uniform(lua_Table * data, osg::Uniform::Type type, const std::string & name, int numElements = 1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::Uniform::Type type=(osg::Uniform::Type)lua_tointeger(L,2);
		std::string name(lua_tostring(L,3),lua_objlen(L,3));
		int numElements=luatop>3 ? (int)lua_tointeger(L,4) : (int)1;

		return new wrapper_osg_Uniform(L,NULL, type, name, numElements);
	}

	// osg::Uniform::Uniform(lua_Table * data, const osg::Uniform & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::Uniform* _bind_ctor_overload_44(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_44(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Uniform(lua_Table * data, const osg::Uniform & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::Uniform::Uniform(lua_Table * data, const osg::Uniform & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Uniform* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Uniform::Uniform function");
		}
		const osg::Uniform & rhs=*rhs_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Uniform::Uniform function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_Uniform(L,NULL, rhs, copyop);
	}

	// osg::Uniform::Uniform(lua_Table * data, const char * name, float f)
	static osg::Uniform* _bind_ctor_overload_45(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_45(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Uniform(lua_Table * data, const char * name, float f) function, expected prototype:\nosg::Uniform::Uniform(lua_Table * data, const char * name, float f)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,2);
		float f=(float)lua_tonumber(L,3);

		return new wrapper_osg_Uniform(L,NULL, name, f);
	}

	// osg::Uniform::Uniform(lua_Table * data, const char * name, double d)
	static osg::Uniform* _bind_ctor_overload_46(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_46(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Uniform(lua_Table * data, const char * name, double d) function, expected prototype:\nosg::Uniform::Uniform(lua_Table * data, const char * name, double d)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,2);
		double d=(double)lua_tonumber(L,3);

		return new wrapper_osg_Uniform(L,NULL, name, d);
	}

	// osg::Uniform::Uniform(lua_Table * data, const char * name, int i)
	static osg::Uniform* _bind_ctor_overload_47(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_47(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Uniform(lua_Table * data, const char * name, int i) function, expected prototype:\nosg::Uniform::Uniform(lua_Table * data, const char * name, int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,2);
		int i=(int)lua_tointeger(L,3);

		return new wrapper_osg_Uniform(L,NULL, name, i);
	}

	// osg::Uniform::Uniform(lua_Table * data, const char * name, unsigned int ui)
	static osg::Uniform* _bind_ctor_overload_48(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_48(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Uniform(lua_Table * data, const char * name, unsigned int ui) function, expected prototype:\nosg::Uniform::Uniform(lua_Table * data, const char * name, unsigned int ui)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,2);
		unsigned int ui=(unsigned int)lua_tointeger(L,3);

		return new wrapper_osg_Uniform(L,NULL, name, ui);
	}

	// osg::Uniform::Uniform(lua_Table * data, const char * name, bool b)
	static osg::Uniform* _bind_ctor_overload_49(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_49(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Uniform(lua_Table * data, const char * name, bool b) function, expected prototype:\nosg::Uniform::Uniform(lua_Table * data, const char * name, bool b)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,2);
		bool b=(bool)(lua_toboolean(L,3)==1);

		return new wrapper_osg_Uniform(L,NULL, name, b);
	}

	// osg::Uniform::Uniform(lua_Table * data, const char * name, const osg::Vec2f & v2)
	static osg::Uniform* _bind_ctor_overload_50(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_50(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Uniform(lua_Table * data, const char * name, const osg::Vec2f & v2) function, expected prototype:\nosg::Uniform::Uniform(lua_Table * data, const char * name, const osg::Vec2f & v2)\nClass arguments details:\narg 3 ID = 92303173\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,2);
		const osg::Vec2f* v2_ptr=(Luna< osg::Vec2f >::check(L,3));
		if( !v2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v2 in osg::Uniform::Uniform function");
		}
		const osg::Vec2f & v2=*v2_ptr;

		return new wrapper_osg_Uniform(L,NULL, name, v2);
	}

	// osg::Uniform::Uniform(lua_Table * data, const char * name, const osg::Vec3f & v3)
	static osg::Uniform* _bind_ctor_overload_51(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_51(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Uniform(lua_Table * data, const char * name, const osg::Vec3f & v3) function, expected prototype:\nosg::Uniform::Uniform(lua_Table * data, const char * name, const osg::Vec3f & v3)\nClass arguments details:\narg 3 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,2);
		const osg::Vec3f* v3_ptr=(Luna< osg::Vec3f >::check(L,3));
		if( !v3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v3 in osg::Uniform::Uniform function");
		}
		const osg::Vec3f & v3=*v3_ptr;

		return new wrapper_osg_Uniform(L,NULL, name, v3);
	}

	// osg::Uniform::Uniform(lua_Table * data, const char * name, const osg::Vec4f & v4)
	static osg::Uniform* _bind_ctor_overload_52(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_52(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Uniform(lua_Table * data, const char * name, const osg::Vec4f & v4) function, expected prototype:\nosg::Uniform::Uniform(lua_Table * data, const char * name, const osg::Vec4f & v4)\nClass arguments details:\narg 3 ID = 92303235\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,2);
		const osg::Vec4f* v4_ptr=(Luna< osg::Vec4f >::check(L,3));
		if( !v4_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v4 in osg::Uniform::Uniform function");
		}
		const osg::Vec4f & v4=*v4_ptr;

		return new wrapper_osg_Uniform(L,NULL, name, v4);
	}

	// osg::Uniform::Uniform(lua_Table * data, const char * name, const osg::Vec2d & v2)
	static osg::Uniform* _bind_ctor_overload_53(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_53(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Uniform(lua_Table * data, const char * name, const osg::Vec2d & v2) function, expected prototype:\nosg::Uniform::Uniform(lua_Table * data, const char * name, const osg::Vec2d & v2)\nClass arguments details:\narg 3 ID = 92303171\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,2);
		const osg::Vec2d* v2_ptr=(Luna< osg::Vec2d >::check(L,3));
		if( !v2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v2 in osg::Uniform::Uniform function");
		}
		const osg::Vec2d & v2=*v2_ptr;

		return new wrapper_osg_Uniform(L,NULL, name, v2);
	}

	// osg::Uniform::Uniform(lua_Table * data, const char * name, const osg::Vec3d & v3)
	static osg::Uniform* _bind_ctor_overload_54(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_54(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Uniform(lua_Table * data, const char * name, const osg::Vec3d & v3) function, expected prototype:\nosg::Uniform::Uniform(lua_Table * data, const char * name, const osg::Vec3d & v3)\nClass arguments details:\narg 3 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,2);
		const osg::Vec3d* v3_ptr=(Luna< osg::Vec3d >::check(L,3));
		if( !v3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v3 in osg::Uniform::Uniform function");
		}
		const osg::Vec3d & v3=*v3_ptr;

		return new wrapper_osg_Uniform(L,NULL, name, v3);
	}

	// osg::Uniform::Uniform(lua_Table * data, const char * name, const osg::Vec4d & v4)
	static osg::Uniform* _bind_ctor_overload_55(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_55(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Uniform(lua_Table * data, const char * name, const osg::Vec4d & v4) function, expected prototype:\nosg::Uniform::Uniform(lua_Table * data, const char * name, const osg::Vec4d & v4)\nClass arguments details:\narg 3 ID = 92303233\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,2);
		const osg::Vec4d* v4_ptr=(Luna< osg::Vec4d >::check(L,3));
		if( !v4_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v4 in osg::Uniform::Uniform function");
		}
		const osg::Vec4d & v4=*v4_ptr;

		return new wrapper_osg_Uniform(L,NULL, name, v4);
	}

	// osg::Uniform::Uniform(lua_Table * data, const char * name, const osg::Matrix2 & m2)
	static osg::Uniform* _bind_ctor_overload_56(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_56(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Uniform(lua_Table * data, const char * name, const osg::Matrix2 & m2) function, expected prototype:\nosg::Uniform::Uniform(lua_Table * data, const char * name, const osg::Matrix2 & m2)\nClass arguments details:\narg 3 ID = 18903788\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,2);
		const osg::Matrix2* m2_ptr=(Luna< osg::Matrix2Template< float > >::checkSubType< osg::Matrix2 >(L,3));
		if( !m2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m2 in osg::Uniform::Uniform function");
		}
		const osg::Matrix2 & m2=*m2_ptr;

		return new wrapper_osg_Uniform(L,NULL, name, m2);
	}

	// osg::Uniform::Uniform(lua_Table * data, const char * name, const osg::Matrix3 & m3)
	static osg::Uniform* _bind_ctor_overload_57(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_57(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Uniform(lua_Table * data, const char * name, const osg::Matrix3 & m3) function, expected prototype:\nosg::Uniform::Uniform(lua_Table * data, const char * name, const osg::Matrix3 & m3)\nClass arguments details:\narg 3 ID = 18903789\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,2);
		const osg::Matrix3* m3_ptr=(Luna< osg::Matrix3 >::check(L,3));
		if( !m3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m3 in osg::Uniform::Uniform function");
		}
		const osg::Matrix3 & m3=*m3_ptr;

		return new wrapper_osg_Uniform(L,NULL, name, m3);
	}

	// osg::Uniform::Uniform(lua_Table * data, const char * name, const osg::Matrixf & m4)
	static osg::Uniform* _bind_ctor_overload_58(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_58(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Uniform(lua_Table * data, const char * name, const osg::Matrixf & m4) function, expected prototype:\nosg::Uniform::Uniform(lua_Table * data, const char * name, const osg::Matrixf & m4)\nClass arguments details:\narg 3 ID = 18903840\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,2);
		const osg::Matrixf* m4_ptr=(Luna< osg::Matrixf >::check(L,3));
		if( !m4_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m4 in osg::Uniform::Uniform function");
		}
		const osg::Matrixf & m4=*m4_ptr;

		return new wrapper_osg_Uniform(L,NULL, name, m4);
	}

	// osg::Uniform::Uniform(lua_Table * data, const char * name, const osg::Matrix2x3 & m2x3)
	static osg::Uniform* _bind_ctor_overload_59(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_59(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Uniform(lua_Table * data, const char * name, const osg::Matrix2x3 & m2x3) function, expected prototype:\nosg::Uniform::Uniform(lua_Table * data, const char * name, const osg::Matrix2x3 & m2x3)\nClass arguments details:\narg 3 ID = 66541660\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,2);
		const osg::Matrix2x3* m2x3_ptr=(Luna< osg::Matrix2x3Template< float > >::checkSubType< osg::Matrix2x3 >(L,3));
		if( !m2x3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m2x3 in osg::Uniform::Uniform function");
		}
		const osg::Matrix2x3 & m2x3=*m2x3_ptr;

		return new wrapper_osg_Uniform(L,NULL, name, m2x3);
	}

	// osg::Uniform::Uniform(lua_Table * data, const char * name, const osg::Matrix2x4 & m2x4)
	static osg::Uniform* _bind_ctor_overload_60(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_60(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Uniform(lua_Table * data, const char * name, const osg::Matrix2x4 & m2x4) function, expected prototype:\nosg::Uniform::Uniform(lua_Table * data, const char * name, const osg::Matrix2x4 & m2x4)\nClass arguments details:\narg 3 ID = 66541661\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,2);
		const osg::Matrix2x4* m2x4_ptr=(Luna< osg::Matrix2x4Template< float > >::checkSubType< osg::Matrix2x4 >(L,3));
		if( !m2x4_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m2x4 in osg::Uniform::Uniform function");
		}
		const osg::Matrix2x4 & m2x4=*m2x4_ptr;

		return new wrapper_osg_Uniform(L,NULL, name, m2x4);
	}

	// osg::Uniform::Uniform(lua_Table * data, const char * name, const osg::Matrix3x2 & m3x2)
	static osg::Uniform* _bind_ctor_overload_61(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_61(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Uniform(lua_Table * data, const char * name, const osg::Matrix3x2 & m3x2) function, expected prototype:\nosg::Uniform::Uniform(lua_Table * data, const char * name, const osg::Matrix3x2 & m3x2)\nClass arguments details:\narg 3 ID = 66542620\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,2);
		const osg::Matrix3x2* m3x2_ptr=(Luna< osg::Matrix3x2Template< float > >::checkSubType< osg::Matrix3x2 >(L,3));
		if( !m3x2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m3x2 in osg::Uniform::Uniform function");
		}
		const osg::Matrix3x2 & m3x2=*m3x2_ptr;

		return new wrapper_osg_Uniform(L,NULL, name, m3x2);
	}

	// osg::Uniform::Uniform(lua_Table * data, const char * name, const osg::Matrix3x4 & m3x4)
	static osg::Uniform* _bind_ctor_overload_62(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_62(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Uniform(lua_Table * data, const char * name, const osg::Matrix3x4 & m3x4) function, expected prototype:\nosg::Uniform::Uniform(lua_Table * data, const char * name, const osg::Matrix3x4 & m3x4)\nClass arguments details:\narg 3 ID = 66542622\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,2);
		const osg::Matrix3x4* m3x4_ptr=(Luna< osg::Matrix3x4Template< float > >::checkSubType< osg::Matrix3x4 >(L,3));
		if( !m3x4_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m3x4 in osg::Uniform::Uniform function");
		}
		const osg::Matrix3x4 & m3x4=*m3x4_ptr;

		return new wrapper_osg_Uniform(L,NULL, name, m3x4);
	}

	// osg::Uniform::Uniform(lua_Table * data, const char * name, const osg::Matrix4x2 & m4x2)
	static osg::Uniform* _bind_ctor_overload_63(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_63(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Uniform(lua_Table * data, const char * name, const osg::Matrix4x2 & m4x2) function, expected prototype:\nosg::Uniform::Uniform(lua_Table * data, const char * name, const osg::Matrix4x2 & m4x2)\nClass arguments details:\narg 3 ID = 66543581\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,2);
		const osg::Matrix4x2* m4x2_ptr=(Luna< osg::Matrix4x2Template< float > >::checkSubType< osg::Matrix4x2 >(L,3));
		if( !m4x2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m4x2 in osg::Uniform::Uniform function");
		}
		const osg::Matrix4x2 & m4x2=*m4x2_ptr;

		return new wrapper_osg_Uniform(L,NULL, name, m4x2);
	}

	// osg::Uniform::Uniform(lua_Table * data, const char * name, const osg::Matrix4x3 & m4x3)
	static osg::Uniform* _bind_ctor_overload_64(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_64(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Uniform(lua_Table * data, const char * name, const osg::Matrix4x3 & m4x3) function, expected prototype:\nosg::Uniform::Uniform(lua_Table * data, const char * name, const osg::Matrix4x3 & m4x3)\nClass arguments details:\narg 3 ID = 66543582\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,2);
		const osg::Matrix4x3* m4x3_ptr=(Luna< osg::Matrix4x3Template< float > >::checkSubType< osg::Matrix4x3 >(L,3));
		if( !m4x3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m4x3 in osg::Uniform::Uniform function");
		}
		const osg::Matrix4x3 & m4x3=*m4x3_ptr;

		return new wrapper_osg_Uniform(L,NULL, name, m4x3);
	}

	// osg::Uniform::Uniform(lua_Table * data, const char * name, const osg::Matrix2d & m2)
	static osg::Uniform* _bind_ctor_overload_65(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_65(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Uniform(lua_Table * data, const char * name, const osg::Matrix2d & m2) function, expected prototype:\nosg::Uniform::Uniform(lua_Table * data, const char * name, const osg::Matrix2d & m2)\nClass arguments details:\narg 3 ID = 86017463\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,2);
		const osg::Matrix2d* m2_ptr=(Luna< osg::Matrix2Template< double > >::checkSubType< osg::Matrix2d >(L,3));
		if( !m2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m2 in osg::Uniform::Uniform function");
		}
		const osg::Matrix2d & m2=*m2_ptr;

		return new wrapper_osg_Uniform(L,NULL, name, m2);
	}

	// osg::Uniform::Uniform(lua_Table * data, const char * name, const osg::Matrix3d & m3)
	static osg::Uniform* _bind_ctor_overload_66(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_66(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Uniform(lua_Table * data, const char * name, const osg::Matrix3d & m3) function, expected prototype:\nosg::Uniform::Uniform(lua_Table * data, const char * name, const osg::Matrix3d & m3)\nClass arguments details:\narg 3 ID = 86017494\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,2);
		const osg::Matrix3d* m3_ptr=(Luna< osg::Matrix3d >::check(L,3));
		if( !m3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m3 in osg::Uniform::Uniform function");
		}
		const osg::Matrix3d & m3=*m3_ptr;

		return new wrapper_osg_Uniform(L,NULL, name, m3);
	}

	// osg::Uniform::Uniform(lua_Table * data, const char * name, const osg::Matrixd & m4)
	static osg::Uniform* _bind_ctor_overload_67(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_67(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Uniform(lua_Table * data, const char * name, const osg::Matrixd & m4) function, expected prototype:\nosg::Uniform::Uniform(lua_Table * data, const char * name, const osg::Matrixd & m4)\nClass arguments details:\narg 3 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,2);
		const osg::Matrixd* m4_ptr=(Luna< osg::Matrixd >::check(L,3));
		if( !m4_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m4 in osg::Uniform::Uniform function");
		}
		const osg::Matrixd & m4=*m4_ptr;

		return new wrapper_osg_Uniform(L,NULL, name, m4);
	}

	// osg::Uniform::Uniform(lua_Table * data, const char * name, const osg::Matrix2x3d & m2x3)
	static osg::Uniform* _bind_ctor_overload_68(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_68(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Uniform(lua_Table * data, const char * name, const osg::Matrix2x3d & m2x3) function, expected prototype:\nosg::Uniform::Uniform(lua_Table * data, const char * name, const osg::Matrix2x3d & m2x3)\nClass arguments details:\narg 3 ID = 62791260\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,2);
		const osg::Matrix2x3d* m2x3_ptr=(Luna< osg::Matrix2x3Template< double > >::checkSubType< osg::Matrix2x3d >(L,3));
		if( !m2x3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m2x3 in osg::Uniform::Uniform function");
		}
		const osg::Matrix2x3d & m2x3=*m2x3_ptr;

		return new wrapper_osg_Uniform(L,NULL, name, m2x3);
	}

	// osg::Uniform::Uniform(lua_Table * data, const char * name, const osg::Matrix2x4d & m2x4)
	static osg::Uniform* _bind_ctor_overload_69(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_69(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Uniform(lua_Table * data, const char * name, const osg::Matrix2x4d & m2x4) function, expected prototype:\nosg::Uniform::Uniform(lua_Table * data, const char * name, const osg::Matrix2x4d & m2x4)\nClass arguments details:\narg 3 ID = 62791291\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,2);
		const osg::Matrix2x4d* m2x4_ptr=(Luna< osg::Matrix2x4Template< double > >::checkSubType< osg::Matrix2x4d >(L,3));
		if( !m2x4_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m2x4 in osg::Uniform::Uniform function");
		}
		const osg::Matrix2x4d & m2x4=*m2x4_ptr;

		return new wrapper_osg_Uniform(L,NULL, name, m2x4);
	}

	// osg::Uniform::Uniform(lua_Table * data, const char * name, const osg::Matrix3x2d & m3x2)
	static osg::Uniform* _bind_ctor_overload_70(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_70(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Uniform(lua_Table * data, const char * name, const osg::Matrix3x2d & m3x2) function, expected prototype:\nosg::Uniform::Uniform(lua_Table * data, const char * name, const osg::Matrix3x2d & m3x2)\nClass arguments details:\narg 3 ID = 62821020\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,2);
		const osg::Matrix3x2d* m3x2_ptr=(Luna< osg::Matrix3x2Template< double > >::checkSubType< osg::Matrix3x2d >(L,3));
		if( !m3x2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m3x2 in osg::Uniform::Uniform function");
		}
		const osg::Matrix3x2d & m3x2=*m3x2_ptr;

		return new wrapper_osg_Uniform(L,NULL, name, m3x2);
	}

	// osg::Uniform::Uniform(lua_Table * data, const char * name, const osg::Matrix3x4d & m3x4)
	static osg::Uniform* _bind_ctor_overload_71(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_71(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Uniform(lua_Table * data, const char * name, const osg::Matrix3x4d & m3x4) function, expected prototype:\nosg::Uniform::Uniform(lua_Table * data, const char * name, const osg::Matrix3x4d & m3x4)\nClass arguments details:\narg 3 ID = 62821082\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,2);
		const osg::Matrix3x4d* m3x4_ptr=(Luna< osg::Matrix3x4Template< double > >::checkSubType< osg::Matrix3x4d >(L,3));
		if( !m3x4_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m3x4 in osg::Uniform::Uniform function");
		}
		const osg::Matrix3x4d & m3x4=*m3x4_ptr;

		return new wrapper_osg_Uniform(L,NULL, name, m3x4);
	}

	// osg::Uniform::Uniform(lua_Table * data, const char * name, const osg::Matrix4x2d & m4x2)
	static osg::Uniform* _bind_ctor_overload_72(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_72(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Uniform(lua_Table * data, const char * name, const osg::Matrix4x2d & m4x2) function, expected prototype:\nosg::Uniform::Uniform(lua_Table * data, const char * name, const osg::Matrix4x2d & m4x2)\nClass arguments details:\narg 3 ID = 62850811\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,2);
		const osg::Matrix4x2d* m4x2_ptr=(Luna< osg::Matrix4x2Template< double > >::checkSubType< osg::Matrix4x2d >(L,3));
		if( !m4x2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m4x2 in osg::Uniform::Uniform function");
		}
		const osg::Matrix4x2d & m4x2=*m4x2_ptr;

		return new wrapper_osg_Uniform(L,NULL, name, m4x2);
	}

	// osg::Uniform::Uniform(lua_Table * data, const char * name, const osg::Matrix4x3d & m4x3)
	static osg::Uniform* _bind_ctor_overload_73(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_73(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Uniform(lua_Table * data, const char * name, const osg::Matrix4x3d & m4x3) function, expected prototype:\nosg::Uniform::Uniform(lua_Table * data, const char * name, const osg::Matrix4x3d & m4x3)\nClass arguments details:\narg 3 ID = 62850842\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,2);
		const osg::Matrix4x3d* m4x3_ptr=(Luna< osg::Matrix4x3Template< double > >::checkSubType< osg::Matrix4x3d >(L,3));
		if( !m4x3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m4x3 in osg::Uniform::Uniform function");
		}
		const osg::Matrix4x3d & m4x3=*m4x3_ptr;

		return new wrapper_osg_Uniform(L,NULL, name, m4x3);
	}

	// osg::Uniform::Uniform(lua_Table * data, const char * name, int i0, int i1)
	static osg::Uniform* _bind_ctor_overload_74(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_74(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Uniform(lua_Table * data, const char * name, int i0, int i1) function, expected prototype:\nosg::Uniform::Uniform(lua_Table * data, const char * name, int i0, int i1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,2);
		int i0=(int)lua_tointeger(L,3);
		int i1=(int)lua_tointeger(L,4);

		return new wrapper_osg_Uniform(L,NULL, name, i0, i1);
	}

	// osg::Uniform::Uniform(lua_Table * data, const char * name, int i0, int i1, int i2)
	static osg::Uniform* _bind_ctor_overload_75(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_75(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Uniform(lua_Table * data, const char * name, int i0, int i1, int i2) function, expected prototype:\nosg::Uniform::Uniform(lua_Table * data, const char * name, int i0, int i1, int i2)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,2);
		int i0=(int)lua_tointeger(L,3);
		int i1=(int)lua_tointeger(L,4);
		int i2=(int)lua_tointeger(L,5);

		return new wrapper_osg_Uniform(L,NULL, name, i0, i1, i2);
	}

	// osg::Uniform::Uniform(lua_Table * data, const char * name, int i0, int i1, int i2, int i3)
	static osg::Uniform* _bind_ctor_overload_76(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_76(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Uniform(lua_Table * data, const char * name, int i0, int i1, int i2, int i3) function, expected prototype:\nosg::Uniform::Uniform(lua_Table * data, const char * name, int i0, int i1, int i2, int i3)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,2);
		int i0=(int)lua_tointeger(L,3);
		int i1=(int)lua_tointeger(L,4);
		int i2=(int)lua_tointeger(L,5);
		int i3=(int)lua_tointeger(L,6);

		return new wrapper_osg_Uniform(L,NULL, name, i0, i1, i2, i3);
	}

	// osg::Uniform::Uniform(lua_Table * data, const char * name, unsigned int ui0, unsigned int ui1)
	static osg::Uniform* _bind_ctor_overload_77(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_77(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Uniform(lua_Table * data, const char * name, unsigned int ui0, unsigned int ui1) function, expected prototype:\nosg::Uniform::Uniform(lua_Table * data, const char * name, unsigned int ui0, unsigned int ui1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,2);
		unsigned int ui0=(unsigned int)lua_tointeger(L,3);
		unsigned int ui1=(unsigned int)lua_tointeger(L,4);

		return new wrapper_osg_Uniform(L,NULL, name, ui0, ui1);
	}

	// osg::Uniform::Uniform(lua_Table * data, const char * name, unsigned int ui0, unsigned int ui1, unsigned int ui2)
	static osg::Uniform* _bind_ctor_overload_78(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_78(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Uniform(lua_Table * data, const char * name, unsigned int ui0, unsigned int ui1, unsigned int ui2) function, expected prototype:\nosg::Uniform::Uniform(lua_Table * data, const char * name, unsigned int ui0, unsigned int ui1, unsigned int ui2)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,2);
		unsigned int ui0=(unsigned int)lua_tointeger(L,3);
		unsigned int ui1=(unsigned int)lua_tointeger(L,4);
		unsigned int ui2=(unsigned int)lua_tointeger(L,5);

		return new wrapper_osg_Uniform(L,NULL, name, ui0, ui1, ui2);
	}

	// osg::Uniform::Uniform(lua_Table * data, const char * name, unsigned int ui0, unsigned int ui1, unsigned int ui2, unsigned int ui3)
	static osg::Uniform* _bind_ctor_overload_79(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_79(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Uniform(lua_Table * data, const char * name, unsigned int ui0, unsigned int ui1, unsigned int ui2, unsigned int ui3) function, expected prototype:\nosg::Uniform::Uniform(lua_Table * data, const char * name, unsigned int ui0, unsigned int ui1, unsigned int ui2, unsigned int ui3)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,2);
		unsigned int ui0=(unsigned int)lua_tointeger(L,3);
		unsigned int ui1=(unsigned int)lua_tointeger(L,4);
		unsigned int ui2=(unsigned int)lua_tointeger(L,5);
		unsigned int ui3=(unsigned int)lua_tointeger(L,6);

		return new wrapper_osg_Uniform(L,NULL, name, ui0, ui1, ui2, ui3);
	}

	// osg::Uniform::Uniform(lua_Table * data, const char * name, bool b0, bool b1)
	static osg::Uniform* _bind_ctor_overload_80(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_80(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Uniform(lua_Table * data, const char * name, bool b0, bool b1) function, expected prototype:\nosg::Uniform::Uniform(lua_Table * data, const char * name, bool b0, bool b1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,2);
		bool b0=(bool)(lua_toboolean(L,3)==1);
		bool b1=(bool)(lua_toboolean(L,4)==1);

		return new wrapper_osg_Uniform(L,NULL, name, b0, b1);
	}

	// osg::Uniform::Uniform(lua_Table * data, const char * name, bool b0, bool b1, bool b2)
	static osg::Uniform* _bind_ctor_overload_81(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_81(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Uniform(lua_Table * data, const char * name, bool b0, bool b1, bool b2) function, expected prototype:\nosg::Uniform::Uniform(lua_Table * data, const char * name, bool b0, bool b1, bool b2)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,2);
		bool b0=(bool)(lua_toboolean(L,3)==1);
		bool b1=(bool)(lua_toboolean(L,4)==1);
		bool b2=(bool)(lua_toboolean(L,5)==1);

		return new wrapper_osg_Uniform(L,NULL, name, b0, b1, b2);
	}

	// osg::Uniform::Uniform(lua_Table * data, const char * name, bool b0, bool b1, bool b2, bool b3)
	static osg::Uniform* _bind_ctor_overload_82(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_82(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Uniform(lua_Table * data, const char * name, bool b0, bool b1, bool b2, bool b3) function, expected prototype:\nosg::Uniform::Uniform(lua_Table * data, const char * name, bool b0, bool b1, bool b2, bool b3)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,2);
		bool b0=(bool)(lua_toboolean(L,3)==1);
		bool b1=(bool)(lua_toboolean(L,4)==1);
		bool b2=(bool)(lua_toboolean(L,5)==1);
		bool b3=(bool)(lua_toboolean(L,6)==1);

		return new wrapper_osg_Uniform(L,NULL, name, b0, b1, b2, b3);
	}

	// Overload binder for osg::Uniform::Uniform
	static osg::Uniform* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);
		if (_lg_typecheck_ctor_overload_7(L)) return _bind_ctor_overload_7(L);
		if (_lg_typecheck_ctor_overload_8(L)) return _bind_ctor_overload_8(L);
		if (_lg_typecheck_ctor_overload_9(L)) return _bind_ctor_overload_9(L);
		if (_lg_typecheck_ctor_overload_10(L)) return _bind_ctor_overload_10(L);
		if (_lg_typecheck_ctor_overload_11(L)) return _bind_ctor_overload_11(L);
		if (_lg_typecheck_ctor_overload_12(L)) return _bind_ctor_overload_12(L);
		if (_lg_typecheck_ctor_overload_13(L)) return _bind_ctor_overload_13(L);
		if (_lg_typecheck_ctor_overload_14(L)) return _bind_ctor_overload_14(L);
		if (_lg_typecheck_ctor_overload_15(L)) return _bind_ctor_overload_15(L);
		if (_lg_typecheck_ctor_overload_16(L)) return _bind_ctor_overload_16(L);
		if (_lg_typecheck_ctor_overload_17(L)) return _bind_ctor_overload_17(L);
		if (_lg_typecheck_ctor_overload_18(L)) return _bind_ctor_overload_18(L);
		if (_lg_typecheck_ctor_overload_19(L)) return _bind_ctor_overload_19(L);
		if (_lg_typecheck_ctor_overload_20(L)) return _bind_ctor_overload_20(L);
		if (_lg_typecheck_ctor_overload_21(L)) return _bind_ctor_overload_21(L);
		if (_lg_typecheck_ctor_overload_22(L)) return _bind_ctor_overload_22(L);
		if (_lg_typecheck_ctor_overload_23(L)) return _bind_ctor_overload_23(L);
		if (_lg_typecheck_ctor_overload_24(L)) return _bind_ctor_overload_24(L);
		if (_lg_typecheck_ctor_overload_25(L)) return _bind_ctor_overload_25(L);
		if (_lg_typecheck_ctor_overload_26(L)) return _bind_ctor_overload_26(L);
		if (_lg_typecheck_ctor_overload_27(L)) return _bind_ctor_overload_27(L);
		if (_lg_typecheck_ctor_overload_28(L)) return _bind_ctor_overload_28(L);
		if (_lg_typecheck_ctor_overload_29(L)) return _bind_ctor_overload_29(L);
		if (_lg_typecheck_ctor_overload_30(L)) return _bind_ctor_overload_30(L);
		if (_lg_typecheck_ctor_overload_31(L)) return _bind_ctor_overload_31(L);
		if (_lg_typecheck_ctor_overload_32(L)) return _bind_ctor_overload_32(L);
		if (_lg_typecheck_ctor_overload_33(L)) return _bind_ctor_overload_33(L);
		if (_lg_typecheck_ctor_overload_34(L)) return _bind_ctor_overload_34(L);
		if (_lg_typecheck_ctor_overload_35(L)) return _bind_ctor_overload_35(L);
		if (_lg_typecheck_ctor_overload_36(L)) return _bind_ctor_overload_36(L);
		if (_lg_typecheck_ctor_overload_37(L)) return _bind_ctor_overload_37(L);
		if (_lg_typecheck_ctor_overload_38(L)) return _bind_ctor_overload_38(L);
		if (_lg_typecheck_ctor_overload_39(L)) return _bind_ctor_overload_39(L);
		if (_lg_typecheck_ctor_overload_40(L)) return _bind_ctor_overload_40(L);
		if (_lg_typecheck_ctor_overload_41(L)) return _bind_ctor_overload_41(L);
		if (_lg_typecheck_ctor_overload_42(L)) return _bind_ctor_overload_42(L);
		if (_lg_typecheck_ctor_overload_43(L)) return _bind_ctor_overload_43(L);
		if (_lg_typecheck_ctor_overload_44(L)) return _bind_ctor_overload_44(L);
		if (_lg_typecheck_ctor_overload_45(L)) return _bind_ctor_overload_45(L);
		if (_lg_typecheck_ctor_overload_46(L)) return _bind_ctor_overload_46(L);
		if (_lg_typecheck_ctor_overload_47(L)) return _bind_ctor_overload_47(L);
		if (_lg_typecheck_ctor_overload_48(L)) return _bind_ctor_overload_48(L);
		if (_lg_typecheck_ctor_overload_49(L)) return _bind_ctor_overload_49(L);
		if (_lg_typecheck_ctor_overload_50(L)) return _bind_ctor_overload_50(L);
		if (_lg_typecheck_ctor_overload_51(L)) return _bind_ctor_overload_51(L);
		if (_lg_typecheck_ctor_overload_52(L)) return _bind_ctor_overload_52(L);
		if (_lg_typecheck_ctor_overload_53(L)) return _bind_ctor_overload_53(L);
		if (_lg_typecheck_ctor_overload_54(L)) return _bind_ctor_overload_54(L);
		if (_lg_typecheck_ctor_overload_55(L)) return _bind_ctor_overload_55(L);
		if (_lg_typecheck_ctor_overload_56(L)) return _bind_ctor_overload_56(L);
		if (_lg_typecheck_ctor_overload_57(L)) return _bind_ctor_overload_57(L);
		if (_lg_typecheck_ctor_overload_58(L)) return _bind_ctor_overload_58(L);
		if (_lg_typecheck_ctor_overload_59(L)) return _bind_ctor_overload_59(L);
		if (_lg_typecheck_ctor_overload_60(L)) return _bind_ctor_overload_60(L);
		if (_lg_typecheck_ctor_overload_61(L)) return _bind_ctor_overload_61(L);
		if (_lg_typecheck_ctor_overload_62(L)) return _bind_ctor_overload_62(L);
		if (_lg_typecheck_ctor_overload_63(L)) return _bind_ctor_overload_63(L);
		if (_lg_typecheck_ctor_overload_64(L)) return _bind_ctor_overload_64(L);
		if (_lg_typecheck_ctor_overload_65(L)) return _bind_ctor_overload_65(L);
		if (_lg_typecheck_ctor_overload_66(L)) return _bind_ctor_overload_66(L);
		if (_lg_typecheck_ctor_overload_67(L)) return _bind_ctor_overload_67(L);
		if (_lg_typecheck_ctor_overload_68(L)) return _bind_ctor_overload_68(L);
		if (_lg_typecheck_ctor_overload_69(L)) return _bind_ctor_overload_69(L);
		if (_lg_typecheck_ctor_overload_70(L)) return _bind_ctor_overload_70(L);
		if (_lg_typecheck_ctor_overload_71(L)) return _bind_ctor_overload_71(L);
		if (_lg_typecheck_ctor_overload_72(L)) return _bind_ctor_overload_72(L);
		if (_lg_typecheck_ctor_overload_73(L)) return _bind_ctor_overload_73(L);
		if (_lg_typecheck_ctor_overload_74(L)) return _bind_ctor_overload_74(L);
		if (_lg_typecheck_ctor_overload_75(L)) return _bind_ctor_overload_75(L);
		if (_lg_typecheck_ctor_overload_76(L)) return _bind_ctor_overload_76(L);
		if (_lg_typecheck_ctor_overload_77(L)) return _bind_ctor_overload_77(L);
		if (_lg_typecheck_ctor_overload_78(L)) return _bind_ctor_overload_78(L);
		if (_lg_typecheck_ctor_overload_79(L)) return _bind_ctor_overload_79(L);
		if (_lg_typecheck_ctor_overload_80(L)) return _bind_ctor_overload_80(L);
		if (_lg_typecheck_ctor_overload_81(L)) return _bind_ctor_overload_81(L);
		if (_lg_typecheck_ctor_overload_82(L)) return _bind_ctor_overload_82(L);

		luaL_error(L, "error in function Uniform, cannot match any of the overloads for function Uniform:\n  Uniform()\n  Uniform(osg::Uniform::Type, const std::string &, int)\n  Uniform(const osg::Uniform &, const osg::CopyOp &)\n  Uniform(const char *, float)\n  Uniform(const char *, double)\n  Uniform(const char *, int)\n  Uniform(const char *, unsigned int)\n  Uniform(const char *, bool)\n  Uniform(const char *, const osg::Vec2f &)\n  Uniform(const char *, const osg::Vec3f &)\n  Uniform(const char *, const osg::Vec4f &)\n  Uniform(const char *, const osg::Vec2d &)\n  Uniform(const char *, const osg::Vec3d &)\n  Uniform(const char *, const osg::Vec4d &)\n  Uniform(const char *, const osg::Matrix2 &)\n  Uniform(const char *, const osg::Matrix3 &)\n  Uniform(const char *, const osg::Matrixf &)\n  Uniform(const char *, const osg::Matrix2x3 &)\n  Uniform(const char *, const osg::Matrix2x4 &)\n  Uniform(const char *, const osg::Matrix3x2 &)\n  Uniform(const char *, const osg::Matrix3x4 &)\n  Uniform(const char *, const osg::Matrix4x2 &)\n  Uniform(const char *, const osg::Matrix4x3 &)\n  Uniform(const char *, const osg::Matrix2d &)\n  Uniform(const char *, const osg::Matrix3d &)\n  Uniform(const char *, const osg::Matrixd &)\n  Uniform(const char *, const osg::Matrix2x3d &)\n  Uniform(const char *, const osg::Matrix2x4d &)\n  Uniform(const char *, const osg::Matrix3x2d &)\n  Uniform(const char *, const osg::Matrix3x4d &)\n  Uniform(const char *, const osg::Matrix4x2d &)\n  Uniform(const char *, const osg::Matrix4x3d &)\n  Uniform(const char *, int, int)\n  Uniform(const char *, int, int, int)\n  Uniform(const char *, int, int, int, int)\n  Uniform(const char *, unsigned int, unsigned int)\n  Uniform(const char *, unsigned int, unsigned int, unsigned int)\n  Uniform(const char *, unsigned int, unsigned int, unsigned int, unsigned int)\n  Uniform(const char *, bool, bool)\n  Uniform(const char *, bool, bool, bool)\n  Uniform(const char *, bool, bool, bool, bool)\n  Uniform(lua_Table *)\n  Uniform(lua_Table *, osg::Uniform::Type, const std::string &, int)\n  Uniform(lua_Table *, const osg::Uniform &, const osg::CopyOp &)\n  Uniform(lua_Table *, const char *, float)\n  Uniform(lua_Table *, const char *, double)\n  Uniform(lua_Table *, const char *, int)\n  Uniform(lua_Table *, const char *, unsigned int)\n  Uniform(lua_Table *, const char *, bool)\n  Uniform(lua_Table *, const char *, const osg::Vec2f &)\n  Uniform(lua_Table *, const char *, const osg::Vec3f &)\n  Uniform(lua_Table *, const char *, const osg::Vec4f &)\n  Uniform(lua_Table *, const char *, const osg::Vec2d &)\n  Uniform(lua_Table *, const char *, const osg::Vec3d &)\n  Uniform(lua_Table *, const char *, const osg::Vec4d &)\n  Uniform(lua_Table *, const char *, const osg::Matrix2 &)\n  Uniform(lua_Table *, const char *, const osg::Matrix3 &)\n  Uniform(lua_Table *, const char *, const osg::Matrixf &)\n  Uniform(lua_Table *, const char *, const osg::Matrix2x3 &)\n  Uniform(lua_Table *, const char *, const osg::Matrix2x4 &)\n  Uniform(lua_Table *, const char *, const osg::Matrix3x2 &)\n  Uniform(lua_Table *, const char *, const osg::Matrix3x4 &)\n  Uniform(lua_Table *, const char *, const osg::Matrix4x2 &)\n  Uniform(lua_Table *, const char *, const osg::Matrix4x3 &)\n  Uniform(lua_Table *, const char *, const osg::Matrix2d &)\n  Uniform(lua_Table *, const char *, const osg::Matrix3d &)\n  Uniform(lua_Table *, const char *, const osg::Matrixd &)\n  Uniform(lua_Table *, const char *, const osg::Matrix2x3d &)\n  Uniform(lua_Table *, const char *, const osg::Matrix2x4d &)\n  Uniform(lua_Table *, const char *, const osg::Matrix3x2d &)\n  Uniform(lua_Table *, const char *, const osg::Matrix3x4d &)\n  Uniform(lua_Table *, const char *, const osg::Matrix4x2d &)\n  Uniform(lua_Table *, const char *, const osg::Matrix4x3d &)\n  Uniform(lua_Table *, const char *, int, int)\n  Uniform(lua_Table *, const char *, int, int, int)\n  Uniform(lua_Table *, const char *, int, int, int, int)\n  Uniform(lua_Table *, const char *, unsigned int, unsigned int)\n  Uniform(lua_Table *, const char *, unsigned int, unsigned int, unsigned int)\n  Uniform(lua_Table *, const char *, unsigned int, unsigned int, unsigned int, unsigned int)\n  Uniform(lua_Table *, const char *, bool, bool)\n  Uniform(lua_Table *, const char *, bool, bool, bool)\n  Uniform(lua_Table *, const char *, bool, bool, bool, bool)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::Uniform::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Uniform::cloneType() const function, expected prototype:\nosg::Object * osg::Uniform::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Uniform::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Uniform::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Uniform::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::Uniform::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Uniform::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Uniform::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Uniform::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Uniform::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Uniform::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Uniform::libraryName() const function, expected prototype:\nconst char * osg::Uniform::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Uniform::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Uniform::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Uniform::className() const function, expected prototype:\nconst char * osg::Uniform::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Uniform::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// bool osg::Uniform::setType(osg::Uniform::Type t)
	static int _bind_setType(lua_State *L) {
		if (!_lg_typecheck_setType(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::setType(osg::Uniform::Type t) function, expected prototype:\nbool osg::Uniform::setType(osg::Uniform::Type t)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Uniform::Type t=(osg::Uniform::Type)lua_tointeger(L,2);

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::setType(osg::Uniform::Type). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->setType(t);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// osg::Uniform::Type osg::Uniform::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Type osg::Uniform::getType() const function, expected prototype:\nosg::Uniform::Type osg::Uniform::getType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Uniform::Type osg::Uniform::getType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Uniform::Type lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Uniform::setName(const std::string & name)
	static int _bind_setName(lua_State *L) {
		if (!_lg_typecheck_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Uniform::setName(const std::string & name) function, expected prototype:\nvoid osg::Uniform::setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Uniform::setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setName(name);

		return 0;
	}

	// void osg::Uniform::setNumElements(unsigned int numElements)
	static int _bind_setNumElements(lua_State *L) {
		if (!_lg_typecheck_setNumElements(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Uniform::setNumElements(unsigned int numElements) function, expected prototype:\nvoid osg::Uniform::setNumElements(unsigned int numElements)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int numElements=(unsigned int)lua_tointeger(L,2);

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Uniform::setNumElements(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setNumElements(numElements);

		return 0;
	}

	// unsigned int osg::Uniform::getNumElements() const
	static int _bind_getNumElements(lua_State *L) {
		if (!_lg_typecheck_getNumElements(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Uniform::getNumElements() const function, expected prototype:\nunsigned int osg::Uniform::getNumElements() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Uniform::getNumElements() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getNumElements();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::Uniform::getInternalArrayNumElements() const
	static int _bind_getInternalArrayNumElements(lua_State *L) {
		if (!_lg_typecheck_getInternalArrayNumElements(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Uniform::getInternalArrayNumElements() const function, expected prototype:\nunsigned int osg::Uniform::getInternalArrayNumElements() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Uniform::getInternalArrayNumElements() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getInternalArrayNumElements();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Uniform::compare(const osg::Uniform & rhs) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luaL_error(L, "luna typecheck failed in int osg::Uniform::compare(const osg::Uniform & rhs) const function, expected prototype:\nint osg::Uniform::compare(const osg::Uniform & rhs) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Uniform* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Uniform::compare function");
		}
		const osg::Uniform & rhs=*rhs_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::Uniform::compare(const osg::Uniform &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->compare(rhs);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Uniform::compareData(const osg::Uniform & rhs) const
	static int _bind_compareData(lua_State *L) {
		if (!_lg_typecheck_compareData(L)) {
			luaL_error(L, "luna typecheck failed in int osg::Uniform::compareData(const osg::Uniform & rhs) const function, expected prototype:\nint osg::Uniform::compareData(const osg::Uniform & rhs) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Uniform* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Uniform::compareData function");
		}
		const osg::Uniform & rhs=*rhs_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::Uniform::compareData(const osg::Uniform &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->compareData(rhs);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Uniform::copyData(const osg::Uniform & rhs)
	static int _bind_copyData(lua_State *L) {
		if (!_lg_typecheck_copyData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Uniform::copyData(const osg::Uniform & rhs) function, expected prototype:\nvoid osg::Uniform::copyData(const osg::Uniform & rhs)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Uniform* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Uniform::copyData function");
		}
		const osg::Uniform & rhs=*rhs_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Uniform::copyData(const osg::Uniform &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->copyData(rhs);

		return 0;
	}

	// const osg::Uniform::ParentList & osg::Uniform::getParents() const
	static int _bind_getParents_overload_1(lua_State *L) {
		if (!_lg_typecheck_getParents_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Uniform::ParentList & osg::Uniform::getParents() const function, expected prototype:\nconst osg::Uniform::ParentList & osg::Uniform::getParents() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Uniform::ParentList & osg::Uniform::getParents() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Uniform::ParentList* lret = &self->getParents();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Uniform::ParentList >::push(L,lret,false);

		return 1;
	}

	// osg::Uniform::ParentList osg::Uniform::getParents()
	static int _bind_getParents_overload_2(lua_State *L) {
		if (!_lg_typecheck_getParents_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::ParentList osg::Uniform::getParents() function, expected prototype:\nosg::Uniform::ParentList osg::Uniform::getParents()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Uniform::ParentList osg::Uniform::getParents(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Uniform::ParentList stack_lret = self->getParents();
		osg::Uniform::ParentList* lret = new osg::Uniform::ParentList(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Uniform::ParentList >::push(L,lret,true);

		return 1;
	}

	// Overload binder for osg::Uniform::getParents
	static int _bind_getParents(lua_State *L) {
		if (_lg_typecheck_getParents_overload_1(L)) return _bind_getParents_overload_1(L);
		if (_lg_typecheck_getParents_overload_2(L)) return _bind_getParents_overload_2(L);

		luaL_error(L, "error in function getParents, cannot match any of the overloads for function getParents:\n  getParents()\n  getParents()\n");
		return 0;
	}

	// osg::StateSet * osg::Uniform::getParent(unsigned int i)
	static int _bind_getParent_overload_1(lua_State *L) {
		if (!_lg_typecheck_getParent_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateSet * osg::Uniform::getParent(unsigned int i) function, expected prototype:\nosg::StateSet * osg::Uniform::getParent(unsigned int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateSet * osg::Uniform::getParent(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateSet * lret = self->getParent(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateSet >::push(L,lret,false);

		return 1;
	}

	// const osg::StateSet * osg::Uniform::getParent(unsigned int i) const
	static int _bind_getParent_overload_2(lua_State *L) {
		if (!_lg_typecheck_getParent_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::StateSet * osg::Uniform::getParent(unsigned int i) const function, expected prototype:\nconst osg::StateSet * osg::Uniform::getParent(unsigned int i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::StateSet * osg::Uniform::getParent(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::StateSet * lret = self->getParent(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateSet >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Uniform::getParent
	static int _bind_getParent(lua_State *L) {
		if (_lg_typecheck_getParent_overload_1(L)) return _bind_getParent_overload_1(L);
		if (_lg_typecheck_getParent_overload_2(L)) return _bind_getParent_overload_2(L);

		luaL_error(L, "error in function getParent, cannot match any of the overloads for function getParent:\n  getParent(unsigned int)\n  getParent(unsigned int)\n");
		return 0;
	}

	// unsigned int osg::Uniform::getNumParents() const
	static int _bind_getNumParents(lua_State *L) {
		if (!_lg_typecheck_getNumParents(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Uniform::getNumParents() const function, expected prototype:\nunsigned int osg::Uniform::getNumParents() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Uniform::getNumParents() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getNumParents();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::Uniform::set(float f)
	static int _bind_set_overload_1(lua_State *L) {
		if (!_lg_typecheck_set_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::set(float f) function, expected prototype:\nbool osg::Uniform::set(float f)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float f=(float)lua_tonumber(L,2);

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::set(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->set(f);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::set(double d)
	static int _bind_set_overload_2(lua_State *L) {
		if (!_lg_typecheck_set_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::set(double d) function, expected prototype:\nbool osg::Uniform::set(double d)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double d=(double)lua_tonumber(L,2);

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::set(double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->set(d);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::set(int i)
	static int _bind_set_overload_3(lua_State *L) {
		if (!_lg_typecheck_set_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::set(int i) function, expected prototype:\nbool osg::Uniform::set(int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::set(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->set(i);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::set(unsigned int ui)
	static int _bind_set_overload_4(lua_State *L) {
		if (!_lg_typecheck_set_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::set(unsigned int ui) function, expected prototype:\nbool osg::Uniform::set(unsigned int ui)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int ui=(unsigned int)lua_tointeger(L,2);

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::set(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->set(ui);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::set(bool b)
	static int _bind_set_overload_5(lua_State *L) {
		if (!_lg_typecheck_set_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::set(bool b) function, expected prototype:\nbool osg::Uniform::set(bool b)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool b=(bool)(lua_toboolean(L,2)==1);

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::set(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->set(b);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::set(const osg::Vec2f & v2)
	static int _bind_set_overload_6(lua_State *L) {
		if (!_lg_typecheck_set_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::set(const osg::Vec2f & v2) function, expected prototype:\nbool osg::Uniform::set(const osg::Vec2f & v2)\nClass arguments details:\narg 1 ID = 92303173\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec2f* v2_ptr=(Luna< osg::Vec2f >::check(L,2));
		if( !v2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v2 in osg::Uniform::set function");
		}
		const osg::Vec2f & v2=*v2_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::set(const osg::Vec2f &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->set(v2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::set(const osg::Vec3f & v3)
	static int _bind_set_overload_7(lua_State *L) {
		if (!_lg_typecheck_set_overload_7(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::set(const osg::Vec3f & v3) function, expected prototype:\nbool osg::Uniform::set(const osg::Vec3f & v3)\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* v3_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !v3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v3 in osg::Uniform::set function");
		}
		const osg::Vec3f & v3=*v3_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::set(const osg::Vec3f &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->set(v3);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::set(const osg::Vec4f & v4)
	static int _bind_set_overload_8(lua_State *L) {
		if (!_lg_typecheck_set_overload_8(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::set(const osg::Vec4f & v4) function, expected prototype:\nbool osg::Uniform::set(const osg::Vec4f & v4)\nClass arguments details:\narg 1 ID = 92303235\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4f* v4_ptr=(Luna< osg::Vec4f >::check(L,2));
		if( !v4_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v4 in osg::Uniform::set function");
		}
		const osg::Vec4f & v4=*v4_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::set(const osg::Vec4f &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->set(v4);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::set(const osg::Vec2d & v2)
	static int _bind_set_overload_9(lua_State *L) {
		if (!_lg_typecheck_set_overload_9(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::set(const osg::Vec2d & v2) function, expected prototype:\nbool osg::Uniform::set(const osg::Vec2d & v2)\nClass arguments details:\narg 1 ID = 92303171\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec2d* v2_ptr=(Luna< osg::Vec2d >::check(L,2));
		if( !v2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v2 in osg::Uniform::set function");
		}
		const osg::Vec2d & v2=*v2_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::set(const osg::Vec2d &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->set(v2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::set(const osg::Vec3d & v3)
	static int _bind_set_overload_10(lua_State *L) {
		if (!_lg_typecheck_set_overload_10(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::set(const osg::Vec3d & v3) function, expected prototype:\nbool osg::Uniform::set(const osg::Vec3d & v3)\nClass arguments details:\narg 1 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3d* v3_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !v3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v3 in osg::Uniform::set function");
		}
		const osg::Vec3d & v3=*v3_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::set(const osg::Vec3d &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->set(v3);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::set(const osg::Vec4d & v4)
	static int _bind_set_overload_11(lua_State *L) {
		if (!_lg_typecheck_set_overload_11(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::set(const osg::Vec4d & v4) function, expected prototype:\nbool osg::Uniform::set(const osg::Vec4d & v4)\nClass arguments details:\narg 1 ID = 92303233\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4d* v4_ptr=(Luna< osg::Vec4d >::check(L,2));
		if( !v4_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v4 in osg::Uniform::set function");
		}
		const osg::Vec4d & v4=*v4_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::set(const osg::Vec4d &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->set(v4);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::set(const osg::Matrix2 & m2)
	static int _bind_set_overload_12(lua_State *L) {
		if (!_lg_typecheck_set_overload_12(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::set(const osg::Matrix2 & m2) function, expected prototype:\nbool osg::Uniform::set(const osg::Matrix2 & m2)\nClass arguments details:\narg 1 ID = 18903788\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrix2* m2_ptr=(Luna< osg::Matrix2Template< float > >::checkSubType< osg::Matrix2 >(L,2));
		if( !m2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m2 in osg::Uniform::set function");
		}
		const osg::Matrix2 & m2=*m2_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::set(const osg::Matrix2 &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->set(m2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::set(const osg::Matrix3 & m3)
	static int _bind_set_overload_13(lua_State *L) {
		if (!_lg_typecheck_set_overload_13(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::set(const osg::Matrix3 & m3) function, expected prototype:\nbool osg::Uniform::set(const osg::Matrix3 & m3)\nClass arguments details:\narg 1 ID = 18903789\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrix3* m3_ptr=(Luna< osg::Matrix3 >::check(L,2));
		if( !m3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m3 in osg::Uniform::set function");
		}
		const osg::Matrix3 & m3=*m3_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::set(const osg::Matrix3 &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->set(m3);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::set(const osg::Matrixf & m4)
	static int _bind_set_overload_14(lua_State *L) {
		if (!_lg_typecheck_set_overload_14(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::set(const osg::Matrixf & m4) function, expected prototype:\nbool osg::Uniform::set(const osg::Matrixf & m4)\nClass arguments details:\narg 1 ID = 18903840\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixf* m4_ptr=(Luna< osg::Matrixf >::check(L,2));
		if( !m4_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m4 in osg::Uniform::set function");
		}
		const osg::Matrixf & m4=*m4_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::set(const osg::Matrixf &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->set(m4);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::set(const osg::Matrix2x3 & m2x3)
	static int _bind_set_overload_15(lua_State *L) {
		if (!_lg_typecheck_set_overload_15(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::set(const osg::Matrix2x3 & m2x3) function, expected prototype:\nbool osg::Uniform::set(const osg::Matrix2x3 & m2x3)\nClass arguments details:\narg 1 ID = 66541660\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrix2x3* m2x3_ptr=(Luna< osg::Matrix2x3Template< float > >::checkSubType< osg::Matrix2x3 >(L,2));
		if( !m2x3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m2x3 in osg::Uniform::set function");
		}
		const osg::Matrix2x3 & m2x3=*m2x3_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::set(const osg::Matrix2x3 &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->set(m2x3);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::set(const osg::Matrix2x4 & m2x4)
	static int _bind_set_overload_16(lua_State *L) {
		if (!_lg_typecheck_set_overload_16(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::set(const osg::Matrix2x4 & m2x4) function, expected prototype:\nbool osg::Uniform::set(const osg::Matrix2x4 & m2x4)\nClass arguments details:\narg 1 ID = 66541661\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrix2x4* m2x4_ptr=(Luna< osg::Matrix2x4Template< float > >::checkSubType< osg::Matrix2x4 >(L,2));
		if( !m2x4_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m2x4 in osg::Uniform::set function");
		}
		const osg::Matrix2x4 & m2x4=*m2x4_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::set(const osg::Matrix2x4 &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->set(m2x4);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::set(const osg::Matrix3x2 & m3x2)
	static int _bind_set_overload_17(lua_State *L) {
		if (!_lg_typecheck_set_overload_17(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::set(const osg::Matrix3x2 & m3x2) function, expected prototype:\nbool osg::Uniform::set(const osg::Matrix3x2 & m3x2)\nClass arguments details:\narg 1 ID = 66542620\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrix3x2* m3x2_ptr=(Luna< osg::Matrix3x2Template< float > >::checkSubType< osg::Matrix3x2 >(L,2));
		if( !m3x2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m3x2 in osg::Uniform::set function");
		}
		const osg::Matrix3x2 & m3x2=*m3x2_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::set(const osg::Matrix3x2 &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->set(m3x2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::set(const osg::Matrix3x4 & m3x4)
	static int _bind_set_overload_18(lua_State *L) {
		if (!_lg_typecheck_set_overload_18(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::set(const osg::Matrix3x4 & m3x4) function, expected prototype:\nbool osg::Uniform::set(const osg::Matrix3x4 & m3x4)\nClass arguments details:\narg 1 ID = 66542622\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrix3x4* m3x4_ptr=(Luna< osg::Matrix3x4Template< float > >::checkSubType< osg::Matrix3x4 >(L,2));
		if( !m3x4_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m3x4 in osg::Uniform::set function");
		}
		const osg::Matrix3x4 & m3x4=*m3x4_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::set(const osg::Matrix3x4 &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->set(m3x4);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::set(const osg::Matrix4x2 & m4x2)
	static int _bind_set_overload_19(lua_State *L) {
		if (!_lg_typecheck_set_overload_19(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::set(const osg::Matrix4x2 & m4x2) function, expected prototype:\nbool osg::Uniform::set(const osg::Matrix4x2 & m4x2)\nClass arguments details:\narg 1 ID = 66543581\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrix4x2* m4x2_ptr=(Luna< osg::Matrix4x2Template< float > >::checkSubType< osg::Matrix4x2 >(L,2));
		if( !m4x2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m4x2 in osg::Uniform::set function");
		}
		const osg::Matrix4x2 & m4x2=*m4x2_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::set(const osg::Matrix4x2 &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->set(m4x2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::set(const osg::Matrix4x3 & m4x3)
	static int _bind_set_overload_20(lua_State *L) {
		if (!_lg_typecheck_set_overload_20(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::set(const osg::Matrix4x3 & m4x3) function, expected prototype:\nbool osg::Uniform::set(const osg::Matrix4x3 & m4x3)\nClass arguments details:\narg 1 ID = 66543582\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrix4x3* m4x3_ptr=(Luna< osg::Matrix4x3Template< float > >::checkSubType< osg::Matrix4x3 >(L,2));
		if( !m4x3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m4x3 in osg::Uniform::set function");
		}
		const osg::Matrix4x3 & m4x3=*m4x3_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::set(const osg::Matrix4x3 &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->set(m4x3);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::set(const osg::Matrix2d & m2)
	static int _bind_set_overload_21(lua_State *L) {
		if (!_lg_typecheck_set_overload_21(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::set(const osg::Matrix2d & m2) function, expected prototype:\nbool osg::Uniform::set(const osg::Matrix2d & m2)\nClass arguments details:\narg 1 ID = 86017463\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrix2d* m2_ptr=(Luna< osg::Matrix2Template< double > >::checkSubType< osg::Matrix2d >(L,2));
		if( !m2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m2 in osg::Uniform::set function");
		}
		const osg::Matrix2d & m2=*m2_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::set(const osg::Matrix2d &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->set(m2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::set(const osg::Matrix3d & m3)
	static int _bind_set_overload_22(lua_State *L) {
		if (!_lg_typecheck_set_overload_22(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::set(const osg::Matrix3d & m3) function, expected prototype:\nbool osg::Uniform::set(const osg::Matrix3d & m3)\nClass arguments details:\narg 1 ID = 86017494\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrix3d* m3_ptr=(Luna< osg::Matrix3d >::check(L,2));
		if( !m3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m3 in osg::Uniform::set function");
		}
		const osg::Matrix3d & m3=*m3_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::set(const osg::Matrix3d &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->set(m3);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::set(const osg::Matrixd & m4)
	static int _bind_set_overload_23(lua_State *L) {
		if (!_lg_typecheck_set_overload_23(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::set(const osg::Matrixd & m4) function, expected prototype:\nbool osg::Uniform::set(const osg::Matrixd & m4)\nClass arguments details:\narg 1 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixd* m4_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !m4_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m4 in osg::Uniform::set function");
		}
		const osg::Matrixd & m4=*m4_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::set(const osg::Matrixd &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->set(m4);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::set(const osg::Matrix2x3d & m2x3)
	static int _bind_set_overload_24(lua_State *L) {
		if (!_lg_typecheck_set_overload_24(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::set(const osg::Matrix2x3d & m2x3) function, expected prototype:\nbool osg::Uniform::set(const osg::Matrix2x3d & m2x3)\nClass arguments details:\narg 1 ID = 62791260\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrix2x3d* m2x3_ptr=(Luna< osg::Matrix2x3Template< double > >::checkSubType< osg::Matrix2x3d >(L,2));
		if( !m2x3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m2x3 in osg::Uniform::set function");
		}
		const osg::Matrix2x3d & m2x3=*m2x3_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::set(const osg::Matrix2x3d &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->set(m2x3);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::set(const osg::Matrix2x4d & m2x4)
	static int _bind_set_overload_25(lua_State *L) {
		if (!_lg_typecheck_set_overload_25(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::set(const osg::Matrix2x4d & m2x4) function, expected prototype:\nbool osg::Uniform::set(const osg::Matrix2x4d & m2x4)\nClass arguments details:\narg 1 ID = 62791291\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrix2x4d* m2x4_ptr=(Luna< osg::Matrix2x4Template< double > >::checkSubType< osg::Matrix2x4d >(L,2));
		if( !m2x4_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m2x4 in osg::Uniform::set function");
		}
		const osg::Matrix2x4d & m2x4=*m2x4_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::set(const osg::Matrix2x4d &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->set(m2x4);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::set(const osg::Matrix3x2d & m3x2)
	static int _bind_set_overload_26(lua_State *L) {
		if (!_lg_typecheck_set_overload_26(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::set(const osg::Matrix3x2d & m3x2) function, expected prototype:\nbool osg::Uniform::set(const osg::Matrix3x2d & m3x2)\nClass arguments details:\narg 1 ID = 62821020\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrix3x2d* m3x2_ptr=(Luna< osg::Matrix3x2Template< double > >::checkSubType< osg::Matrix3x2d >(L,2));
		if( !m3x2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m3x2 in osg::Uniform::set function");
		}
		const osg::Matrix3x2d & m3x2=*m3x2_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::set(const osg::Matrix3x2d &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->set(m3x2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::set(const osg::Matrix3x4d & m3x4)
	static int _bind_set_overload_27(lua_State *L) {
		if (!_lg_typecheck_set_overload_27(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::set(const osg::Matrix3x4d & m3x4) function, expected prototype:\nbool osg::Uniform::set(const osg::Matrix3x4d & m3x4)\nClass arguments details:\narg 1 ID = 62821082\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrix3x4d* m3x4_ptr=(Luna< osg::Matrix3x4Template< double > >::checkSubType< osg::Matrix3x4d >(L,2));
		if( !m3x4_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m3x4 in osg::Uniform::set function");
		}
		const osg::Matrix3x4d & m3x4=*m3x4_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::set(const osg::Matrix3x4d &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->set(m3x4);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::set(const osg::Matrix4x2d & m4x2)
	static int _bind_set_overload_28(lua_State *L) {
		if (!_lg_typecheck_set_overload_28(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::set(const osg::Matrix4x2d & m4x2) function, expected prototype:\nbool osg::Uniform::set(const osg::Matrix4x2d & m4x2)\nClass arguments details:\narg 1 ID = 62850811\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrix4x2d* m4x2_ptr=(Luna< osg::Matrix4x2Template< double > >::checkSubType< osg::Matrix4x2d >(L,2));
		if( !m4x2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m4x2 in osg::Uniform::set function");
		}
		const osg::Matrix4x2d & m4x2=*m4x2_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::set(const osg::Matrix4x2d &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->set(m4x2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::set(const osg::Matrix4x3d & m4x3)
	static int _bind_set_overload_29(lua_State *L) {
		if (!_lg_typecheck_set_overload_29(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::set(const osg::Matrix4x3d & m4x3) function, expected prototype:\nbool osg::Uniform::set(const osg::Matrix4x3d & m4x3)\nClass arguments details:\narg 1 ID = 62850842\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrix4x3d* m4x3_ptr=(Luna< osg::Matrix4x3Template< double > >::checkSubType< osg::Matrix4x3d >(L,2));
		if( !m4x3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m4x3 in osg::Uniform::set function");
		}
		const osg::Matrix4x3d & m4x3=*m4x3_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::set(const osg::Matrix4x3d &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->set(m4x3);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::set(int i0, int i1)
	static int _bind_set_overload_30(lua_State *L) {
		if (!_lg_typecheck_set_overload_30(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::set(int i0, int i1) function, expected prototype:\nbool osg::Uniform::set(int i0, int i1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i0=(int)lua_tointeger(L,2);
		int i1=(int)lua_tointeger(L,3);

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::set(int, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->set(i0, i1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::set(int i0, int i1, int i2)
	static int _bind_set_overload_31(lua_State *L) {
		if (!_lg_typecheck_set_overload_31(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::set(int i0, int i1, int i2) function, expected prototype:\nbool osg::Uniform::set(int i0, int i1, int i2)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i0=(int)lua_tointeger(L,2);
		int i1=(int)lua_tointeger(L,3);
		int i2=(int)lua_tointeger(L,4);

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::set(int, int, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->set(i0, i1, i2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::set(int i0, int i1, int i2, int i3)
	static int _bind_set_overload_32(lua_State *L) {
		if (!_lg_typecheck_set_overload_32(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::set(int i0, int i1, int i2, int i3) function, expected prototype:\nbool osg::Uniform::set(int i0, int i1, int i2, int i3)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i0=(int)lua_tointeger(L,2);
		int i1=(int)lua_tointeger(L,3);
		int i2=(int)lua_tointeger(L,4);
		int i3=(int)lua_tointeger(L,5);

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::set(int, int, int, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->set(i0, i1, i2, i3);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::set(unsigned int ui0, unsigned int ui1)
	static int _bind_set_overload_33(lua_State *L) {
		if (!_lg_typecheck_set_overload_33(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::set(unsigned int ui0, unsigned int ui1) function, expected prototype:\nbool osg::Uniform::set(unsigned int ui0, unsigned int ui1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int ui0=(unsigned int)lua_tointeger(L,2);
		unsigned int ui1=(unsigned int)lua_tointeger(L,3);

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::set(unsigned int, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->set(ui0, ui1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::set(unsigned int ui0, unsigned int ui1, unsigned int ui2)
	static int _bind_set_overload_34(lua_State *L) {
		if (!_lg_typecheck_set_overload_34(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::set(unsigned int ui0, unsigned int ui1, unsigned int ui2) function, expected prototype:\nbool osg::Uniform::set(unsigned int ui0, unsigned int ui1, unsigned int ui2)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int ui0=(unsigned int)lua_tointeger(L,2);
		unsigned int ui1=(unsigned int)lua_tointeger(L,3);
		unsigned int ui2=(unsigned int)lua_tointeger(L,4);

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::set(unsigned int, unsigned int, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->set(ui0, ui1, ui2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::set(unsigned int ui0, unsigned int ui1, unsigned int ui2, unsigned int ui3)
	static int _bind_set_overload_35(lua_State *L) {
		if (!_lg_typecheck_set_overload_35(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::set(unsigned int ui0, unsigned int ui1, unsigned int ui2, unsigned int ui3) function, expected prototype:\nbool osg::Uniform::set(unsigned int ui0, unsigned int ui1, unsigned int ui2, unsigned int ui3)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int ui0=(unsigned int)lua_tointeger(L,2);
		unsigned int ui1=(unsigned int)lua_tointeger(L,3);
		unsigned int ui2=(unsigned int)lua_tointeger(L,4);
		unsigned int ui3=(unsigned int)lua_tointeger(L,5);

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::set(unsigned int, unsigned int, unsigned int, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->set(ui0, ui1, ui2, ui3);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::set(bool b0, bool b1)
	static int _bind_set_overload_36(lua_State *L) {
		if (!_lg_typecheck_set_overload_36(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::set(bool b0, bool b1) function, expected prototype:\nbool osg::Uniform::set(bool b0, bool b1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool b0=(bool)(lua_toboolean(L,2)==1);
		bool b1=(bool)(lua_toboolean(L,3)==1);

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::set(bool, bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->set(b0, b1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::set(bool b0, bool b1, bool b2)
	static int _bind_set_overload_37(lua_State *L) {
		if (!_lg_typecheck_set_overload_37(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::set(bool b0, bool b1, bool b2) function, expected prototype:\nbool osg::Uniform::set(bool b0, bool b1, bool b2)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool b0=(bool)(lua_toboolean(L,2)==1);
		bool b1=(bool)(lua_toboolean(L,3)==1);
		bool b2=(bool)(lua_toboolean(L,4)==1);

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::set(bool, bool, bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->set(b0, b1, b2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::set(bool b0, bool b1, bool b2, bool b3)
	static int _bind_set_overload_38(lua_State *L) {
		if (!_lg_typecheck_set_overload_38(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::set(bool b0, bool b1, bool b2, bool b3) function, expected prototype:\nbool osg::Uniform::set(bool b0, bool b1, bool b2, bool b3)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool b0=(bool)(lua_toboolean(L,2)==1);
		bool b1=(bool)(lua_toboolean(L,3)==1);
		bool b2=(bool)(lua_toboolean(L,4)==1);
		bool b3=(bool)(lua_toboolean(L,5)==1);

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::set(bool, bool, bool, bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->set(b0, b1, b2, b3);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for osg::Uniform::set
	static int _bind_set(lua_State *L) {
		if (_lg_typecheck_set_overload_1(L)) return _bind_set_overload_1(L);
		if (_lg_typecheck_set_overload_2(L)) return _bind_set_overload_2(L);
		if (_lg_typecheck_set_overload_3(L)) return _bind_set_overload_3(L);
		if (_lg_typecheck_set_overload_4(L)) return _bind_set_overload_4(L);
		if (_lg_typecheck_set_overload_5(L)) return _bind_set_overload_5(L);
		if (_lg_typecheck_set_overload_6(L)) return _bind_set_overload_6(L);
		if (_lg_typecheck_set_overload_7(L)) return _bind_set_overload_7(L);
		if (_lg_typecheck_set_overload_8(L)) return _bind_set_overload_8(L);
		if (_lg_typecheck_set_overload_9(L)) return _bind_set_overload_9(L);
		if (_lg_typecheck_set_overload_10(L)) return _bind_set_overload_10(L);
		if (_lg_typecheck_set_overload_11(L)) return _bind_set_overload_11(L);
		if (_lg_typecheck_set_overload_12(L)) return _bind_set_overload_12(L);
		if (_lg_typecheck_set_overload_13(L)) return _bind_set_overload_13(L);
		if (_lg_typecheck_set_overload_14(L)) return _bind_set_overload_14(L);
		if (_lg_typecheck_set_overload_15(L)) return _bind_set_overload_15(L);
		if (_lg_typecheck_set_overload_16(L)) return _bind_set_overload_16(L);
		if (_lg_typecheck_set_overload_17(L)) return _bind_set_overload_17(L);
		if (_lg_typecheck_set_overload_18(L)) return _bind_set_overload_18(L);
		if (_lg_typecheck_set_overload_19(L)) return _bind_set_overload_19(L);
		if (_lg_typecheck_set_overload_20(L)) return _bind_set_overload_20(L);
		if (_lg_typecheck_set_overload_21(L)) return _bind_set_overload_21(L);
		if (_lg_typecheck_set_overload_22(L)) return _bind_set_overload_22(L);
		if (_lg_typecheck_set_overload_23(L)) return _bind_set_overload_23(L);
		if (_lg_typecheck_set_overload_24(L)) return _bind_set_overload_24(L);
		if (_lg_typecheck_set_overload_25(L)) return _bind_set_overload_25(L);
		if (_lg_typecheck_set_overload_26(L)) return _bind_set_overload_26(L);
		if (_lg_typecheck_set_overload_27(L)) return _bind_set_overload_27(L);
		if (_lg_typecheck_set_overload_28(L)) return _bind_set_overload_28(L);
		if (_lg_typecheck_set_overload_29(L)) return _bind_set_overload_29(L);
		if (_lg_typecheck_set_overload_30(L)) return _bind_set_overload_30(L);
		if (_lg_typecheck_set_overload_31(L)) return _bind_set_overload_31(L);
		if (_lg_typecheck_set_overload_32(L)) return _bind_set_overload_32(L);
		if (_lg_typecheck_set_overload_33(L)) return _bind_set_overload_33(L);
		if (_lg_typecheck_set_overload_34(L)) return _bind_set_overload_34(L);
		if (_lg_typecheck_set_overload_35(L)) return _bind_set_overload_35(L);
		if (_lg_typecheck_set_overload_36(L)) return _bind_set_overload_36(L);
		if (_lg_typecheck_set_overload_37(L)) return _bind_set_overload_37(L);
		if (_lg_typecheck_set_overload_38(L)) return _bind_set_overload_38(L);

		luaL_error(L, "error in function set, cannot match any of the overloads for function set:\n  set(float)\n  set(double)\n  set(int)\n  set(unsigned int)\n  set(bool)\n  set(const osg::Vec2f &)\n  set(const osg::Vec3f &)\n  set(const osg::Vec4f &)\n  set(const osg::Vec2d &)\n  set(const osg::Vec3d &)\n  set(const osg::Vec4d &)\n  set(const osg::Matrix2 &)\n  set(const osg::Matrix3 &)\n  set(const osg::Matrixf &)\n  set(const osg::Matrix2x3 &)\n  set(const osg::Matrix2x4 &)\n  set(const osg::Matrix3x2 &)\n  set(const osg::Matrix3x4 &)\n  set(const osg::Matrix4x2 &)\n  set(const osg::Matrix4x3 &)\n  set(const osg::Matrix2d &)\n  set(const osg::Matrix3d &)\n  set(const osg::Matrixd &)\n  set(const osg::Matrix2x3d &)\n  set(const osg::Matrix2x4d &)\n  set(const osg::Matrix3x2d &)\n  set(const osg::Matrix3x4d &)\n  set(const osg::Matrix4x2d &)\n  set(const osg::Matrix4x3d &)\n  set(int, int)\n  set(int, int, int)\n  set(int, int, int, int)\n  set(unsigned int, unsigned int)\n  set(unsigned int, unsigned int, unsigned int)\n  set(unsigned int, unsigned int, unsigned int, unsigned int)\n  set(bool, bool)\n  set(bool, bool, bool)\n  set(bool, bool, bool, bool)\n");
		return 0;
	}

	// bool osg::Uniform::get(float & f) const
	static int _bind_get_overload_1(lua_State *L) {
		if (!_lg_typecheck_get_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::get(float & f) const function, expected prototype:\nbool osg::Uniform::get(float & f) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float f=(float)lua_tonumber(L,2);

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::get(float &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->get(f);
		lua_pushboolean(L,lret?1:0);

		lua_pushnumber(L,f);
		return 2;
	}

	// bool osg::Uniform::get(double & d) const
	static int _bind_get_overload_2(lua_State *L) {
		if (!_lg_typecheck_get_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::get(double & d) const function, expected prototype:\nbool osg::Uniform::get(double & d) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double d=(double)lua_tonumber(L,2);

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::get(double &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->get(d);
		lua_pushboolean(L,lret?1:0);

		lua_pushnumber(L,d);
		return 2;
	}

	// bool osg::Uniform::get(int & i) const
	static int _bind_get_overload_3(lua_State *L) {
		if (!_lg_typecheck_get_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::get(int & i) const function, expected prototype:\nbool osg::Uniform::get(int & i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::get(int &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->get(i);
		lua_pushboolean(L,lret?1:0);

		lua_pushnumber(L,i);
		return 2;
	}

	// bool osg::Uniform::get(unsigned int & ui) const
	static int _bind_get_overload_4(lua_State *L) {
		if (!_lg_typecheck_get_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::get(unsigned int & ui) const function, expected prototype:\nbool osg::Uniform::get(unsigned int & ui) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int ui=(unsigned int)lua_tointeger(L,2);

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::get(unsigned int &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->get(ui);
		lua_pushboolean(L,lret?1:0);

		lua_pushnumber(L,ui);
		return 2;
	}

	// bool osg::Uniform::get(bool & b) const
	static int _bind_get_overload_5(lua_State *L) {
		if (!_lg_typecheck_get_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::get(bool & b) const function, expected prototype:\nbool osg::Uniform::get(bool & b) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool b=(bool)(lua_toboolean(L,2)==1);

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::get(bool &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->get(b);
		lua_pushboolean(L,lret?1:0);

		lua_pushboolean(L,b?1:0);
		return 2;
	}

	// bool osg::Uniform::get(osg::Vec2f & v2) const
	static int _bind_get_overload_6(lua_State *L) {
		if (!_lg_typecheck_get_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::get(osg::Vec2f & v2) const function, expected prototype:\nbool osg::Uniform::get(osg::Vec2f & v2) const\nClass arguments details:\narg 1 ID = 92303173\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec2f* v2_ptr=(Luna< osg::Vec2f >::check(L,2));
		if( !v2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v2 in osg::Uniform::get function");
		}
		osg::Vec2f & v2=*v2_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::get(osg::Vec2f &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->get(v2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::get(osg::Vec3f & v3) const
	static int _bind_get_overload_7(lua_State *L) {
		if (!_lg_typecheck_get_overload_7(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::get(osg::Vec3f & v3) const function, expected prototype:\nbool osg::Uniform::get(osg::Vec3f & v3) const\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec3f* v3_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !v3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v3 in osg::Uniform::get function");
		}
		osg::Vec3f & v3=*v3_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::get(osg::Vec3f &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->get(v3);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::get(osg::Vec4f & v4) const
	static int _bind_get_overload_8(lua_State *L) {
		if (!_lg_typecheck_get_overload_8(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::get(osg::Vec4f & v4) const function, expected prototype:\nbool osg::Uniform::get(osg::Vec4f & v4) const\nClass arguments details:\narg 1 ID = 92303235\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec4f* v4_ptr=(Luna< osg::Vec4f >::check(L,2));
		if( !v4_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v4 in osg::Uniform::get function");
		}
		osg::Vec4f & v4=*v4_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::get(osg::Vec4f &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->get(v4);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::get(osg::Vec2d & v2) const
	static int _bind_get_overload_9(lua_State *L) {
		if (!_lg_typecheck_get_overload_9(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::get(osg::Vec2d & v2) const function, expected prototype:\nbool osg::Uniform::get(osg::Vec2d & v2) const\nClass arguments details:\narg 1 ID = 92303171\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec2d* v2_ptr=(Luna< osg::Vec2d >::check(L,2));
		if( !v2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v2 in osg::Uniform::get function");
		}
		osg::Vec2d & v2=*v2_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::get(osg::Vec2d &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->get(v2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::get(osg::Vec3d & v3) const
	static int _bind_get_overload_10(lua_State *L) {
		if (!_lg_typecheck_get_overload_10(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::get(osg::Vec3d & v3) const function, expected prototype:\nbool osg::Uniform::get(osg::Vec3d & v3) const\nClass arguments details:\narg 1 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec3d* v3_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !v3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v3 in osg::Uniform::get function");
		}
		osg::Vec3d & v3=*v3_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::get(osg::Vec3d &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->get(v3);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::get(osg::Vec4d & v4) const
	static int _bind_get_overload_11(lua_State *L) {
		if (!_lg_typecheck_get_overload_11(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::get(osg::Vec4d & v4) const function, expected prototype:\nbool osg::Uniform::get(osg::Vec4d & v4) const\nClass arguments details:\narg 1 ID = 92303233\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec4d* v4_ptr=(Luna< osg::Vec4d >::check(L,2));
		if( !v4_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v4 in osg::Uniform::get function");
		}
		osg::Vec4d & v4=*v4_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::get(osg::Vec4d &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->get(v4);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::get(osg::Matrix2 & m2) const
	static int _bind_get_overload_12(lua_State *L) {
		if (!_lg_typecheck_get_overload_12(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::get(osg::Matrix2 & m2) const function, expected prototype:\nbool osg::Uniform::get(osg::Matrix2 & m2) const\nClass arguments details:\narg 1 ID = 18903788\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Matrix2* m2_ptr=(Luna< osg::Matrix2Template< float > >::checkSubType< osg::Matrix2 >(L,2));
		if( !m2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m2 in osg::Uniform::get function");
		}
		osg::Matrix2 & m2=*m2_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::get(osg::Matrix2 &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->get(m2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::get(osg::Matrix3 & m3) const
	static int _bind_get_overload_13(lua_State *L) {
		if (!_lg_typecheck_get_overload_13(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::get(osg::Matrix3 & m3) const function, expected prototype:\nbool osg::Uniform::get(osg::Matrix3 & m3) const\nClass arguments details:\narg 1 ID = 18903789\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Matrix3* m3_ptr=(Luna< osg::Matrix3 >::check(L,2));
		if( !m3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m3 in osg::Uniform::get function");
		}
		osg::Matrix3 & m3=*m3_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::get(osg::Matrix3 &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->get(m3);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::get(osg::Matrixf & m4) const
	static int _bind_get_overload_14(lua_State *L) {
		if (!_lg_typecheck_get_overload_14(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::get(osg::Matrixf & m4) const function, expected prototype:\nbool osg::Uniform::get(osg::Matrixf & m4) const\nClass arguments details:\narg 1 ID = 18903840\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Matrixf* m4_ptr=(Luna< osg::Matrixf >::check(L,2));
		if( !m4_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m4 in osg::Uniform::get function");
		}
		osg::Matrixf & m4=*m4_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::get(osg::Matrixf &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->get(m4);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::get(osg::Matrix2x3 & m2x3) const
	static int _bind_get_overload_15(lua_State *L) {
		if (!_lg_typecheck_get_overload_15(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::get(osg::Matrix2x3 & m2x3) const function, expected prototype:\nbool osg::Uniform::get(osg::Matrix2x3 & m2x3) const\nClass arguments details:\narg 1 ID = 66541660\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Matrix2x3* m2x3_ptr=(Luna< osg::Matrix2x3Template< float > >::checkSubType< osg::Matrix2x3 >(L,2));
		if( !m2x3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m2x3 in osg::Uniform::get function");
		}
		osg::Matrix2x3 & m2x3=*m2x3_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::get(osg::Matrix2x3 &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->get(m2x3);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::get(osg::Matrix2x4 & m2x4) const
	static int _bind_get_overload_16(lua_State *L) {
		if (!_lg_typecheck_get_overload_16(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::get(osg::Matrix2x4 & m2x4) const function, expected prototype:\nbool osg::Uniform::get(osg::Matrix2x4 & m2x4) const\nClass arguments details:\narg 1 ID = 66541661\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Matrix2x4* m2x4_ptr=(Luna< osg::Matrix2x4Template< float > >::checkSubType< osg::Matrix2x4 >(L,2));
		if( !m2x4_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m2x4 in osg::Uniform::get function");
		}
		osg::Matrix2x4 & m2x4=*m2x4_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::get(osg::Matrix2x4 &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->get(m2x4);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::get(osg::Matrix3x2 & m3x2) const
	static int _bind_get_overload_17(lua_State *L) {
		if (!_lg_typecheck_get_overload_17(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::get(osg::Matrix3x2 & m3x2) const function, expected prototype:\nbool osg::Uniform::get(osg::Matrix3x2 & m3x2) const\nClass arguments details:\narg 1 ID = 66542620\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Matrix3x2* m3x2_ptr=(Luna< osg::Matrix3x2Template< float > >::checkSubType< osg::Matrix3x2 >(L,2));
		if( !m3x2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m3x2 in osg::Uniform::get function");
		}
		osg::Matrix3x2 & m3x2=*m3x2_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::get(osg::Matrix3x2 &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->get(m3x2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::get(osg::Matrix3x4 & m3x4) const
	static int _bind_get_overload_18(lua_State *L) {
		if (!_lg_typecheck_get_overload_18(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::get(osg::Matrix3x4 & m3x4) const function, expected prototype:\nbool osg::Uniform::get(osg::Matrix3x4 & m3x4) const\nClass arguments details:\narg 1 ID = 66542622\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Matrix3x4* m3x4_ptr=(Luna< osg::Matrix3x4Template< float > >::checkSubType< osg::Matrix3x4 >(L,2));
		if( !m3x4_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m3x4 in osg::Uniform::get function");
		}
		osg::Matrix3x4 & m3x4=*m3x4_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::get(osg::Matrix3x4 &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->get(m3x4);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::get(osg::Matrix4x2 & m4x2) const
	static int _bind_get_overload_19(lua_State *L) {
		if (!_lg_typecheck_get_overload_19(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::get(osg::Matrix4x2 & m4x2) const function, expected prototype:\nbool osg::Uniform::get(osg::Matrix4x2 & m4x2) const\nClass arguments details:\narg 1 ID = 66543581\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Matrix4x2* m4x2_ptr=(Luna< osg::Matrix4x2Template< float > >::checkSubType< osg::Matrix4x2 >(L,2));
		if( !m4x2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m4x2 in osg::Uniform::get function");
		}
		osg::Matrix4x2 & m4x2=*m4x2_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::get(osg::Matrix4x2 &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->get(m4x2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::get(osg::Matrix4x3 & m4x3) const
	static int _bind_get_overload_20(lua_State *L) {
		if (!_lg_typecheck_get_overload_20(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::get(osg::Matrix4x3 & m4x3) const function, expected prototype:\nbool osg::Uniform::get(osg::Matrix4x3 & m4x3) const\nClass arguments details:\narg 1 ID = 66543582\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Matrix4x3* m4x3_ptr=(Luna< osg::Matrix4x3Template< float > >::checkSubType< osg::Matrix4x3 >(L,2));
		if( !m4x3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m4x3 in osg::Uniform::get function");
		}
		osg::Matrix4x3 & m4x3=*m4x3_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::get(osg::Matrix4x3 &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->get(m4x3);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::get(osg::Matrix2d & m2) const
	static int _bind_get_overload_21(lua_State *L) {
		if (!_lg_typecheck_get_overload_21(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::get(osg::Matrix2d & m2) const function, expected prototype:\nbool osg::Uniform::get(osg::Matrix2d & m2) const\nClass arguments details:\narg 1 ID = 86017463\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Matrix2d* m2_ptr=(Luna< osg::Matrix2Template< double > >::checkSubType< osg::Matrix2d >(L,2));
		if( !m2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m2 in osg::Uniform::get function");
		}
		osg::Matrix2d & m2=*m2_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::get(osg::Matrix2d &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->get(m2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::get(osg::Matrix3d & m3) const
	static int _bind_get_overload_22(lua_State *L) {
		if (!_lg_typecheck_get_overload_22(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::get(osg::Matrix3d & m3) const function, expected prototype:\nbool osg::Uniform::get(osg::Matrix3d & m3) const\nClass arguments details:\narg 1 ID = 86017494\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Matrix3d* m3_ptr=(Luna< osg::Matrix3d >::check(L,2));
		if( !m3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m3 in osg::Uniform::get function");
		}
		osg::Matrix3d & m3=*m3_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::get(osg::Matrix3d &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->get(m3);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::get(osg::Matrixd & m4) const
	static int _bind_get_overload_23(lua_State *L) {
		if (!_lg_typecheck_get_overload_23(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::get(osg::Matrixd & m4) const function, expected prototype:\nbool osg::Uniform::get(osg::Matrixd & m4) const\nClass arguments details:\narg 1 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Matrixd* m4_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !m4_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m4 in osg::Uniform::get function");
		}
		osg::Matrixd & m4=*m4_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::get(osg::Matrixd &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->get(m4);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::get(osg::Matrix2x3d & m2x3) const
	static int _bind_get_overload_24(lua_State *L) {
		if (!_lg_typecheck_get_overload_24(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::get(osg::Matrix2x3d & m2x3) const function, expected prototype:\nbool osg::Uniform::get(osg::Matrix2x3d & m2x3) const\nClass arguments details:\narg 1 ID = 62791260\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Matrix2x3d* m2x3_ptr=(Luna< osg::Matrix2x3Template< double > >::checkSubType< osg::Matrix2x3d >(L,2));
		if( !m2x3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m2x3 in osg::Uniform::get function");
		}
		osg::Matrix2x3d & m2x3=*m2x3_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::get(osg::Matrix2x3d &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->get(m2x3);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::get(osg::Matrix2x4d & m2x4) const
	static int _bind_get_overload_25(lua_State *L) {
		if (!_lg_typecheck_get_overload_25(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::get(osg::Matrix2x4d & m2x4) const function, expected prototype:\nbool osg::Uniform::get(osg::Matrix2x4d & m2x4) const\nClass arguments details:\narg 1 ID = 62791291\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Matrix2x4d* m2x4_ptr=(Luna< osg::Matrix2x4Template< double > >::checkSubType< osg::Matrix2x4d >(L,2));
		if( !m2x4_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m2x4 in osg::Uniform::get function");
		}
		osg::Matrix2x4d & m2x4=*m2x4_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::get(osg::Matrix2x4d &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->get(m2x4);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::get(osg::Matrix3x2d & m3x2) const
	static int _bind_get_overload_26(lua_State *L) {
		if (!_lg_typecheck_get_overload_26(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::get(osg::Matrix3x2d & m3x2) const function, expected prototype:\nbool osg::Uniform::get(osg::Matrix3x2d & m3x2) const\nClass arguments details:\narg 1 ID = 62821020\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Matrix3x2d* m3x2_ptr=(Luna< osg::Matrix3x2Template< double > >::checkSubType< osg::Matrix3x2d >(L,2));
		if( !m3x2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m3x2 in osg::Uniform::get function");
		}
		osg::Matrix3x2d & m3x2=*m3x2_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::get(osg::Matrix3x2d &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->get(m3x2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::get(osg::Matrix3x4d & m3x4) const
	static int _bind_get_overload_27(lua_State *L) {
		if (!_lg_typecheck_get_overload_27(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::get(osg::Matrix3x4d & m3x4) const function, expected prototype:\nbool osg::Uniform::get(osg::Matrix3x4d & m3x4) const\nClass arguments details:\narg 1 ID = 62821082\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Matrix3x4d* m3x4_ptr=(Luna< osg::Matrix3x4Template< double > >::checkSubType< osg::Matrix3x4d >(L,2));
		if( !m3x4_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m3x4 in osg::Uniform::get function");
		}
		osg::Matrix3x4d & m3x4=*m3x4_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::get(osg::Matrix3x4d &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->get(m3x4);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::get(osg::Matrix4x2d & m4x2) const
	static int _bind_get_overload_28(lua_State *L) {
		if (!_lg_typecheck_get_overload_28(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::get(osg::Matrix4x2d & m4x2) const function, expected prototype:\nbool osg::Uniform::get(osg::Matrix4x2d & m4x2) const\nClass arguments details:\narg 1 ID = 62850811\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Matrix4x2d* m4x2_ptr=(Luna< osg::Matrix4x2Template< double > >::checkSubType< osg::Matrix4x2d >(L,2));
		if( !m4x2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m4x2 in osg::Uniform::get function");
		}
		osg::Matrix4x2d & m4x2=*m4x2_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::get(osg::Matrix4x2d &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->get(m4x2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::get(osg::Matrix4x3d & m4x3) const
	static int _bind_get_overload_29(lua_State *L) {
		if (!_lg_typecheck_get_overload_29(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::get(osg::Matrix4x3d & m4x3) const function, expected prototype:\nbool osg::Uniform::get(osg::Matrix4x3d & m4x3) const\nClass arguments details:\narg 1 ID = 62850842\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Matrix4x3d* m4x3_ptr=(Luna< osg::Matrix4x3Template< double > >::checkSubType< osg::Matrix4x3d >(L,2));
		if( !m4x3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m4x3 in osg::Uniform::get function");
		}
		osg::Matrix4x3d & m4x3=*m4x3_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::get(osg::Matrix4x3d &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->get(m4x3);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::get(int & i0, int & i1) const
	static int _bind_get_overload_30(lua_State *L) {
		if (!_lg_typecheck_get_overload_30(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::get(int & i0, int & i1) const function, expected prototype:\nbool osg::Uniform::get(int & i0, int & i1) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i0=(int)lua_tointeger(L,2);
		int i1=(int)lua_tointeger(L,3);

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::get(int &, int &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->get(i0, i1);
		lua_pushboolean(L,lret?1:0);

		lua_pushnumber(L,i0);
		lua_pushnumber(L,i1);
		return 3;
	}

	// bool osg::Uniform::get(int & i0, int & i1, int & i2) const
	static int _bind_get_overload_31(lua_State *L) {
		if (!_lg_typecheck_get_overload_31(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::get(int & i0, int & i1, int & i2) const function, expected prototype:\nbool osg::Uniform::get(int & i0, int & i1, int & i2) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i0=(int)lua_tointeger(L,2);
		int i1=(int)lua_tointeger(L,3);
		int i2=(int)lua_tointeger(L,4);

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::get(int &, int &, int &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->get(i0, i1, i2);
		lua_pushboolean(L,lret?1:0);

		lua_pushnumber(L,i0);
		lua_pushnumber(L,i1);
		lua_pushnumber(L,i2);
		return 4;
	}

	// bool osg::Uniform::get(int & i0, int & i1, int & i2, int & i3) const
	static int _bind_get_overload_32(lua_State *L) {
		if (!_lg_typecheck_get_overload_32(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::get(int & i0, int & i1, int & i2, int & i3) const function, expected prototype:\nbool osg::Uniform::get(int & i0, int & i1, int & i2, int & i3) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i0=(int)lua_tointeger(L,2);
		int i1=(int)lua_tointeger(L,3);
		int i2=(int)lua_tointeger(L,4);
		int i3=(int)lua_tointeger(L,5);

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::get(int &, int &, int &, int &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->get(i0, i1, i2, i3);
		lua_pushboolean(L,lret?1:0);

		lua_pushnumber(L,i0);
		lua_pushnumber(L,i1);
		lua_pushnumber(L,i2);
		lua_pushnumber(L,i3);
		return 5;
	}

	// bool osg::Uniform::get(unsigned int & ui0, unsigned int & ui1) const
	static int _bind_get_overload_33(lua_State *L) {
		if (!_lg_typecheck_get_overload_33(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::get(unsigned int & ui0, unsigned int & ui1) const function, expected prototype:\nbool osg::Uniform::get(unsigned int & ui0, unsigned int & ui1) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int ui0=(unsigned int)lua_tointeger(L,2);
		unsigned int ui1=(unsigned int)lua_tointeger(L,3);

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::get(unsigned int &, unsigned int &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->get(ui0, ui1);
		lua_pushboolean(L,lret?1:0);

		lua_pushnumber(L,ui0);
		lua_pushnumber(L,ui1);
		return 3;
	}

	// bool osg::Uniform::get(unsigned int & ui0, unsigned int & ui1, unsigned int & ui2) const
	static int _bind_get_overload_34(lua_State *L) {
		if (!_lg_typecheck_get_overload_34(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::get(unsigned int & ui0, unsigned int & ui1, unsigned int & ui2) const function, expected prototype:\nbool osg::Uniform::get(unsigned int & ui0, unsigned int & ui1, unsigned int & ui2) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int ui0=(unsigned int)lua_tointeger(L,2);
		unsigned int ui1=(unsigned int)lua_tointeger(L,3);
		unsigned int ui2=(unsigned int)lua_tointeger(L,4);

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::get(unsigned int &, unsigned int &, unsigned int &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->get(ui0, ui1, ui2);
		lua_pushboolean(L,lret?1:0);

		lua_pushnumber(L,ui0);
		lua_pushnumber(L,ui1);
		lua_pushnumber(L,ui2);
		return 4;
	}

	// bool osg::Uniform::get(unsigned int & ui0, unsigned int & ui1, unsigned int & ui2, unsigned int & ui3) const
	static int _bind_get_overload_35(lua_State *L) {
		if (!_lg_typecheck_get_overload_35(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::get(unsigned int & ui0, unsigned int & ui1, unsigned int & ui2, unsigned int & ui3) const function, expected prototype:\nbool osg::Uniform::get(unsigned int & ui0, unsigned int & ui1, unsigned int & ui2, unsigned int & ui3) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int ui0=(unsigned int)lua_tointeger(L,2);
		unsigned int ui1=(unsigned int)lua_tointeger(L,3);
		unsigned int ui2=(unsigned int)lua_tointeger(L,4);
		unsigned int ui3=(unsigned int)lua_tointeger(L,5);

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::get(unsigned int &, unsigned int &, unsigned int &, unsigned int &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->get(ui0, ui1, ui2, ui3);
		lua_pushboolean(L,lret?1:0);

		lua_pushnumber(L,ui0);
		lua_pushnumber(L,ui1);
		lua_pushnumber(L,ui2);
		lua_pushnumber(L,ui3);
		return 5;
	}

	// bool osg::Uniform::get(bool & b0, bool & b1) const
	static int _bind_get_overload_36(lua_State *L) {
		if (!_lg_typecheck_get_overload_36(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::get(bool & b0, bool & b1) const function, expected prototype:\nbool osg::Uniform::get(bool & b0, bool & b1) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool b0=(bool)(lua_toboolean(L,2)==1);
		bool b1=(bool)(lua_toboolean(L,3)==1);

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::get(bool &, bool &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->get(b0, b1);
		lua_pushboolean(L,lret?1:0);

		lua_pushboolean(L,b0?1:0);
		lua_pushboolean(L,b1?1:0);
		return 3;
	}

	// bool osg::Uniform::get(bool & b0, bool & b1, bool & b2) const
	static int _bind_get_overload_37(lua_State *L) {
		if (!_lg_typecheck_get_overload_37(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::get(bool & b0, bool & b1, bool & b2) const function, expected prototype:\nbool osg::Uniform::get(bool & b0, bool & b1, bool & b2) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool b0=(bool)(lua_toboolean(L,2)==1);
		bool b1=(bool)(lua_toboolean(L,3)==1);
		bool b2=(bool)(lua_toboolean(L,4)==1);

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::get(bool &, bool &, bool &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->get(b0, b1, b2);
		lua_pushboolean(L,lret?1:0);

		lua_pushboolean(L,b0?1:0);
		lua_pushboolean(L,b1?1:0);
		lua_pushboolean(L,b2?1:0);
		return 4;
	}

	// bool osg::Uniform::get(bool & b0, bool & b1, bool & b2, bool & b3) const
	static int _bind_get_overload_38(lua_State *L) {
		if (!_lg_typecheck_get_overload_38(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::get(bool & b0, bool & b1, bool & b2, bool & b3) const function, expected prototype:\nbool osg::Uniform::get(bool & b0, bool & b1, bool & b2, bool & b3) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool b0=(bool)(lua_toboolean(L,2)==1);
		bool b1=(bool)(lua_toboolean(L,3)==1);
		bool b2=(bool)(lua_toboolean(L,4)==1);
		bool b3=(bool)(lua_toboolean(L,5)==1);

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::get(bool &, bool &, bool &, bool &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->get(b0, b1, b2, b3);
		lua_pushboolean(L,lret?1:0);

		lua_pushboolean(L,b0?1:0);
		lua_pushboolean(L,b1?1:0);
		lua_pushboolean(L,b2?1:0);
		lua_pushboolean(L,b3?1:0);
		return 5;
	}

	// Overload binder for osg::Uniform::get
	static int _bind_get(lua_State *L) {
		if (_lg_typecheck_get_overload_1(L)) return _bind_get_overload_1(L);
		if (_lg_typecheck_get_overload_2(L)) return _bind_get_overload_2(L);
		if (_lg_typecheck_get_overload_3(L)) return _bind_get_overload_3(L);
		if (_lg_typecheck_get_overload_4(L)) return _bind_get_overload_4(L);
		if (_lg_typecheck_get_overload_5(L)) return _bind_get_overload_5(L);
		if (_lg_typecheck_get_overload_6(L)) return _bind_get_overload_6(L);
		if (_lg_typecheck_get_overload_7(L)) return _bind_get_overload_7(L);
		if (_lg_typecheck_get_overload_8(L)) return _bind_get_overload_8(L);
		if (_lg_typecheck_get_overload_9(L)) return _bind_get_overload_9(L);
		if (_lg_typecheck_get_overload_10(L)) return _bind_get_overload_10(L);
		if (_lg_typecheck_get_overload_11(L)) return _bind_get_overload_11(L);
		if (_lg_typecheck_get_overload_12(L)) return _bind_get_overload_12(L);
		if (_lg_typecheck_get_overload_13(L)) return _bind_get_overload_13(L);
		if (_lg_typecheck_get_overload_14(L)) return _bind_get_overload_14(L);
		if (_lg_typecheck_get_overload_15(L)) return _bind_get_overload_15(L);
		if (_lg_typecheck_get_overload_16(L)) return _bind_get_overload_16(L);
		if (_lg_typecheck_get_overload_17(L)) return _bind_get_overload_17(L);
		if (_lg_typecheck_get_overload_18(L)) return _bind_get_overload_18(L);
		if (_lg_typecheck_get_overload_19(L)) return _bind_get_overload_19(L);
		if (_lg_typecheck_get_overload_20(L)) return _bind_get_overload_20(L);
		if (_lg_typecheck_get_overload_21(L)) return _bind_get_overload_21(L);
		if (_lg_typecheck_get_overload_22(L)) return _bind_get_overload_22(L);
		if (_lg_typecheck_get_overload_23(L)) return _bind_get_overload_23(L);
		if (_lg_typecheck_get_overload_24(L)) return _bind_get_overload_24(L);
		if (_lg_typecheck_get_overload_25(L)) return _bind_get_overload_25(L);
		if (_lg_typecheck_get_overload_26(L)) return _bind_get_overload_26(L);
		if (_lg_typecheck_get_overload_27(L)) return _bind_get_overload_27(L);
		if (_lg_typecheck_get_overload_28(L)) return _bind_get_overload_28(L);
		if (_lg_typecheck_get_overload_29(L)) return _bind_get_overload_29(L);
		if (_lg_typecheck_get_overload_30(L)) return _bind_get_overload_30(L);
		if (_lg_typecheck_get_overload_31(L)) return _bind_get_overload_31(L);
		if (_lg_typecheck_get_overload_32(L)) return _bind_get_overload_32(L);
		if (_lg_typecheck_get_overload_33(L)) return _bind_get_overload_33(L);
		if (_lg_typecheck_get_overload_34(L)) return _bind_get_overload_34(L);
		if (_lg_typecheck_get_overload_35(L)) return _bind_get_overload_35(L);
		if (_lg_typecheck_get_overload_36(L)) return _bind_get_overload_36(L);
		if (_lg_typecheck_get_overload_37(L)) return _bind_get_overload_37(L);
		if (_lg_typecheck_get_overload_38(L)) return _bind_get_overload_38(L);

		luaL_error(L, "error in function get, cannot match any of the overloads for function get:\n  get(float &)\n  get(double &)\n  get(int &)\n  get(unsigned int &)\n  get(bool &)\n  get(osg::Vec2f &)\n  get(osg::Vec3f &)\n  get(osg::Vec4f &)\n  get(osg::Vec2d &)\n  get(osg::Vec3d &)\n  get(osg::Vec4d &)\n  get(osg::Matrix2 &)\n  get(osg::Matrix3 &)\n  get(osg::Matrixf &)\n  get(osg::Matrix2x3 &)\n  get(osg::Matrix2x4 &)\n  get(osg::Matrix3x2 &)\n  get(osg::Matrix3x4 &)\n  get(osg::Matrix4x2 &)\n  get(osg::Matrix4x3 &)\n  get(osg::Matrix2d &)\n  get(osg::Matrix3d &)\n  get(osg::Matrixd &)\n  get(osg::Matrix2x3d &)\n  get(osg::Matrix2x4d &)\n  get(osg::Matrix3x2d &)\n  get(osg::Matrix3x4d &)\n  get(osg::Matrix4x2d &)\n  get(osg::Matrix4x3d &)\n  get(int &, int &)\n  get(int &, int &, int &)\n  get(int &, int &, int &, int &)\n  get(unsigned int &, unsigned int &)\n  get(unsigned int &, unsigned int &, unsigned int &)\n  get(unsigned int &, unsigned int &, unsigned int &, unsigned int &)\n  get(bool &, bool &)\n  get(bool &, bool &, bool &)\n  get(bool &, bool &, bool &, bool &)\n");
		return 0;
	}

	// bool osg::Uniform::setElement(unsigned int index, float f)
	static int _bind_setElement_overload_1(lua_State *L) {
		if (!_lg_typecheck_setElement_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::setElement(unsigned int index, float f) function, expected prototype:\nbool osg::Uniform::setElement(unsigned int index, float f)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		float f=(float)lua_tonumber(L,3);

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::setElement(unsigned int, float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->setElement(index, f);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::setElement(unsigned int index, double d)
	static int _bind_setElement_overload_2(lua_State *L) {
		if (!_lg_typecheck_setElement_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::setElement(unsigned int index, double d) function, expected prototype:\nbool osg::Uniform::setElement(unsigned int index, double d)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		double d=(double)lua_tonumber(L,3);

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::setElement(unsigned int, double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->setElement(index, d);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::setElement(unsigned int index, int i)
	static int _bind_setElement_overload_3(lua_State *L) {
		if (!_lg_typecheck_setElement_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::setElement(unsigned int index, int i) function, expected prototype:\nbool osg::Uniform::setElement(unsigned int index, int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		int i=(int)lua_tointeger(L,3);

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::setElement(unsigned int, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->setElement(index, i);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::setElement(unsigned int index, unsigned int ui)
	static int _bind_setElement_overload_4(lua_State *L) {
		if (!_lg_typecheck_setElement_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::setElement(unsigned int index, unsigned int ui) function, expected prototype:\nbool osg::Uniform::setElement(unsigned int index, unsigned int ui)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		unsigned int ui=(unsigned int)lua_tointeger(L,3);

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::setElement(unsigned int, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->setElement(index, ui);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::setElement(unsigned int index, bool b)
	static int _bind_setElement_overload_5(lua_State *L) {
		if (!_lg_typecheck_setElement_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::setElement(unsigned int index, bool b) function, expected prototype:\nbool osg::Uniform::setElement(unsigned int index, bool b)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		bool b=(bool)(lua_toboolean(L,3)==1);

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::setElement(unsigned int, bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->setElement(index, b);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::setElement(unsigned int index, const osg::Vec2f & v2)
	static int _bind_setElement_overload_6(lua_State *L) {
		if (!_lg_typecheck_setElement_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::setElement(unsigned int index, const osg::Vec2f & v2) function, expected prototype:\nbool osg::Uniform::setElement(unsigned int index, const osg::Vec2f & v2)\nClass arguments details:\narg 2 ID = 92303173\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		const osg::Vec2f* v2_ptr=(Luna< osg::Vec2f >::check(L,3));
		if( !v2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v2 in osg::Uniform::setElement function");
		}
		const osg::Vec2f & v2=*v2_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::setElement(unsigned int, const osg::Vec2f &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->setElement(index, v2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::setElement(unsigned int index, const osg::Vec3f & v3)
	static int _bind_setElement_overload_7(lua_State *L) {
		if (!_lg_typecheck_setElement_overload_7(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::setElement(unsigned int index, const osg::Vec3f & v3) function, expected prototype:\nbool osg::Uniform::setElement(unsigned int index, const osg::Vec3f & v3)\nClass arguments details:\narg 2 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		const osg::Vec3f* v3_ptr=(Luna< osg::Vec3f >::check(L,3));
		if( !v3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v3 in osg::Uniform::setElement function");
		}
		const osg::Vec3f & v3=*v3_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::setElement(unsigned int, const osg::Vec3f &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->setElement(index, v3);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::setElement(unsigned int index, const osg::Vec4f & v4)
	static int _bind_setElement_overload_8(lua_State *L) {
		if (!_lg_typecheck_setElement_overload_8(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::setElement(unsigned int index, const osg::Vec4f & v4) function, expected prototype:\nbool osg::Uniform::setElement(unsigned int index, const osg::Vec4f & v4)\nClass arguments details:\narg 2 ID = 92303235\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		const osg::Vec4f* v4_ptr=(Luna< osg::Vec4f >::check(L,3));
		if( !v4_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v4 in osg::Uniform::setElement function");
		}
		const osg::Vec4f & v4=*v4_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::setElement(unsigned int, const osg::Vec4f &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->setElement(index, v4);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::setElement(unsigned int index, const osg::Vec2d & v2)
	static int _bind_setElement_overload_9(lua_State *L) {
		if (!_lg_typecheck_setElement_overload_9(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::setElement(unsigned int index, const osg::Vec2d & v2) function, expected prototype:\nbool osg::Uniform::setElement(unsigned int index, const osg::Vec2d & v2)\nClass arguments details:\narg 2 ID = 92303171\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		const osg::Vec2d* v2_ptr=(Luna< osg::Vec2d >::check(L,3));
		if( !v2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v2 in osg::Uniform::setElement function");
		}
		const osg::Vec2d & v2=*v2_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::setElement(unsigned int, const osg::Vec2d &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->setElement(index, v2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::setElement(unsigned int index, const osg::Vec3d & v3)
	static int _bind_setElement_overload_10(lua_State *L) {
		if (!_lg_typecheck_setElement_overload_10(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::setElement(unsigned int index, const osg::Vec3d & v3) function, expected prototype:\nbool osg::Uniform::setElement(unsigned int index, const osg::Vec3d & v3)\nClass arguments details:\narg 2 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		const osg::Vec3d* v3_ptr=(Luna< osg::Vec3d >::check(L,3));
		if( !v3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v3 in osg::Uniform::setElement function");
		}
		const osg::Vec3d & v3=*v3_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::setElement(unsigned int, const osg::Vec3d &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->setElement(index, v3);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::setElement(unsigned int index, const osg::Vec4d & v4)
	static int _bind_setElement_overload_11(lua_State *L) {
		if (!_lg_typecheck_setElement_overload_11(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::setElement(unsigned int index, const osg::Vec4d & v4) function, expected prototype:\nbool osg::Uniform::setElement(unsigned int index, const osg::Vec4d & v4)\nClass arguments details:\narg 2 ID = 92303233\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		const osg::Vec4d* v4_ptr=(Luna< osg::Vec4d >::check(L,3));
		if( !v4_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v4 in osg::Uniform::setElement function");
		}
		const osg::Vec4d & v4=*v4_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::setElement(unsigned int, const osg::Vec4d &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->setElement(index, v4);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::setElement(unsigned int index, const osg::Matrix2 & m2)
	static int _bind_setElement_overload_12(lua_State *L) {
		if (!_lg_typecheck_setElement_overload_12(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::setElement(unsigned int index, const osg::Matrix2 & m2) function, expected prototype:\nbool osg::Uniform::setElement(unsigned int index, const osg::Matrix2 & m2)\nClass arguments details:\narg 2 ID = 18903788\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		const osg::Matrix2* m2_ptr=(Luna< osg::Matrix2Template< float > >::checkSubType< osg::Matrix2 >(L,3));
		if( !m2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m2 in osg::Uniform::setElement function");
		}
		const osg::Matrix2 & m2=*m2_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::setElement(unsigned int, const osg::Matrix2 &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->setElement(index, m2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::setElement(unsigned int index, const osg::Matrix3 & m3)
	static int _bind_setElement_overload_13(lua_State *L) {
		if (!_lg_typecheck_setElement_overload_13(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::setElement(unsigned int index, const osg::Matrix3 & m3) function, expected prototype:\nbool osg::Uniform::setElement(unsigned int index, const osg::Matrix3 & m3)\nClass arguments details:\narg 2 ID = 18903789\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		const osg::Matrix3* m3_ptr=(Luna< osg::Matrix3 >::check(L,3));
		if( !m3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m3 in osg::Uniform::setElement function");
		}
		const osg::Matrix3 & m3=*m3_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::setElement(unsigned int, const osg::Matrix3 &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->setElement(index, m3);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::setElement(unsigned int index, const osg::Matrixf & m4)
	static int _bind_setElement_overload_14(lua_State *L) {
		if (!_lg_typecheck_setElement_overload_14(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::setElement(unsigned int index, const osg::Matrixf & m4) function, expected prototype:\nbool osg::Uniform::setElement(unsigned int index, const osg::Matrixf & m4)\nClass arguments details:\narg 2 ID = 18903840\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		const osg::Matrixf* m4_ptr=(Luna< osg::Matrixf >::check(L,3));
		if( !m4_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m4 in osg::Uniform::setElement function");
		}
		const osg::Matrixf & m4=*m4_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::setElement(unsigned int, const osg::Matrixf &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->setElement(index, m4);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::setElement(unsigned int index, const osg::Matrix2x3 & m2x3)
	static int _bind_setElement_overload_15(lua_State *L) {
		if (!_lg_typecheck_setElement_overload_15(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::setElement(unsigned int index, const osg::Matrix2x3 & m2x3) function, expected prototype:\nbool osg::Uniform::setElement(unsigned int index, const osg::Matrix2x3 & m2x3)\nClass arguments details:\narg 2 ID = 66541660\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		const osg::Matrix2x3* m2x3_ptr=(Luna< osg::Matrix2x3Template< float > >::checkSubType< osg::Matrix2x3 >(L,3));
		if( !m2x3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m2x3 in osg::Uniform::setElement function");
		}
		const osg::Matrix2x3 & m2x3=*m2x3_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::setElement(unsigned int, const osg::Matrix2x3 &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->setElement(index, m2x3);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::setElement(unsigned int index, const osg::Matrix2x4 & m2x4)
	static int _bind_setElement_overload_16(lua_State *L) {
		if (!_lg_typecheck_setElement_overload_16(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::setElement(unsigned int index, const osg::Matrix2x4 & m2x4) function, expected prototype:\nbool osg::Uniform::setElement(unsigned int index, const osg::Matrix2x4 & m2x4)\nClass arguments details:\narg 2 ID = 66541661\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		const osg::Matrix2x4* m2x4_ptr=(Luna< osg::Matrix2x4Template< float > >::checkSubType< osg::Matrix2x4 >(L,3));
		if( !m2x4_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m2x4 in osg::Uniform::setElement function");
		}
		const osg::Matrix2x4 & m2x4=*m2x4_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::setElement(unsigned int, const osg::Matrix2x4 &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->setElement(index, m2x4);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::setElement(unsigned int index, const osg::Matrix3x2 & m3x2)
	static int _bind_setElement_overload_17(lua_State *L) {
		if (!_lg_typecheck_setElement_overload_17(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::setElement(unsigned int index, const osg::Matrix3x2 & m3x2) function, expected prototype:\nbool osg::Uniform::setElement(unsigned int index, const osg::Matrix3x2 & m3x2)\nClass arguments details:\narg 2 ID = 66542620\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		const osg::Matrix3x2* m3x2_ptr=(Luna< osg::Matrix3x2Template< float > >::checkSubType< osg::Matrix3x2 >(L,3));
		if( !m3x2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m3x2 in osg::Uniform::setElement function");
		}
		const osg::Matrix3x2 & m3x2=*m3x2_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::setElement(unsigned int, const osg::Matrix3x2 &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->setElement(index, m3x2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::setElement(unsigned int index, const osg::Matrix3x4 & m3x4)
	static int _bind_setElement_overload_18(lua_State *L) {
		if (!_lg_typecheck_setElement_overload_18(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::setElement(unsigned int index, const osg::Matrix3x4 & m3x4) function, expected prototype:\nbool osg::Uniform::setElement(unsigned int index, const osg::Matrix3x4 & m3x4)\nClass arguments details:\narg 2 ID = 66542622\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		const osg::Matrix3x4* m3x4_ptr=(Luna< osg::Matrix3x4Template< float > >::checkSubType< osg::Matrix3x4 >(L,3));
		if( !m3x4_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m3x4 in osg::Uniform::setElement function");
		}
		const osg::Matrix3x4 & m3x4=*m3x4_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::setElement(unsigned int, const osg::Matrix3x4 &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->setElement(index, m3x4);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::setElement(unsigned int index, const osg::Matrix4x2 & m4x2)
	static int _bind_setElement_overload_19(lua_State *L) {
		if (!_lg_typecheck_setElement_overload_19(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::setElement(unsigned int index, const osg::Matrix4x2 & m4x2) function, expected prototype:\nbool osg::Uniform::setElement(unsigned int index, const osg::Matrix4x2 & m4x2)\nClass arguments details:\narg 2 ID = 66543581\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		const osg::Matrix4x2* m4x2_ptr=(Luna< osg::Matrix4x2Template< float > >::checkSubType< osg::Matrix4x2 >(L,3));
		if( !m4x2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m4x2 in osg::Uniform::setElement function");
		}
		const osg::Matrix4x2 & m4x2=*m4x2_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::setElement(unsigned int, const osg::Matrix4x2 &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->setElement(index, m4x2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::setElement(unsigned int index, const osg::Matrix4x3 & m4x3)
	static int _bind_setElement_overload_20(lua_State *L) {
		if (!_lg_typecheck_setElement_overload_20(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::setElement(unsigned int index, const osg::Matrix4x3 & m4x3) function, expected prototype:\nbool osg::Uniform::setElement(unsigned int index, const osg::Matrix4x3 & m4x3)\nClass arguments details:\narg 2 ID = 66543582\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		const osg::Matrix4x3* m4x3_ptr=(Luna< osg::Matrix4x3Template< float > >::checkSubType< osg::Matrix4x3 >(L,3));
		if( !m4x3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m4x3 in osg::Uniform::setElement function");
		}
		const osg::Matrix4x3 & m4x3=*m4x3_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::setElement(unsigned int, const osg::Matrix4x3 &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->setElement(index, m4x3);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::setElement(unsigned int index, const osg::Matrix2d & m2)
	static int _bind_setElement_overload_21(lua_State *L) {
		if (!_lg_typecheck_setElement_overload_21(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::setElement(unsigned int index, const osg::Matrix2d & m2) function, expected prototype:\nbool osg::Uniform::setElement(unsigned int index, const osg::Matrix2d & m2)\nClass arguments details:\narg 2 ID = 86017463\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		const osg::Matrix2d* m2_ptr=(Luna< osg::Matrix2Template< double > >::checkSubType< osg::Matrix2d >(L,3));
		if( !m2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m2 in osg::Uniform::setElement function");
		}
		const osg::Matrix2d & m2=*m2_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::setElement(unsigned int, const osg::Matrix2d &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->setElement(index, m2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::setElement(unsigned int index, const osg::Matrix3d & m3)
	static int _bind_setElement_overload_22(lua_State *L) {
		if (!_lg_typecheck_setElement_overload_22(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::setElement(unsigned int index, const osg::Matrix3d & m3) function, expected prototype:\nbool osg::Uniform::setElement(unsigned int index, const osg::Matrix3d & m3)\nClass arguments details:\narg 2 ID = 86017494\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		const osg::Matrix3d* m3_ptr=(Luna< osg::Matrix3d >::check(L,3));
		if( !m3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m3 in osg::Uniform::setElement function");
		}
		const osg::Matrix3d & m3=*m3_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::setElement(unsigned int, const osg::Matrix3d &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->setElement(index, m3);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::setElement(unsigned int index, const osg::Matrixd & m4)
	static int _bind_setElement_overload_23(lua_State *L) {
		if (!_lg_typecheck_setElement_overload_23(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::setElement(unsigned int index, const osg::Matrixd & m4) function, expected prototype:\nbool osg::Uniform::setElement(unsigned int index, const osg::Matrixd & m4)\nClass arguments details:\narg 2 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		const osg::Matrixd* m4_ptr=(Luna< osg::Matrixd >::check(L,3));
		if( !m4_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m4 in osg::Uniform::setElement function");
		}
		const osg::Matrixd & m4=*m4_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::setElement(unsigned int, const osg::Matrixd &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->setElement(index, m4);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::setElement(unsigned int index, const osg::Matrix2x3d & m2x3)
	static int _bind_setElement_overload_24(lua_State *L) {
		if (!_lg_typecheck_setElement_overload_24(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::setElement(unsigned int index, const osg::Matrix2x3d & m2x3) function, expected prototype:\nbool osg::Uniform::setElement(unsigned int index, const osg::Matrix2x3d & m2x3)\nClass arguments details:\narg 2 ID = 62791260\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		const osg::Matrix2x3d* m2x3_ptr=(Luna< osg::Matrix2x3Template< double > >::checkSubType< osg::Matrix2x3d >(L,3));
		if( !m2x3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m2x3 in osg::Uniform::setElement function");
		}
		const osg::Matrix2x3d & m2x3=*m2x3_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::setElement(unsigned int, const osg::Matrix2x3d &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->setElement(index, m2x3);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::setElement(unsigned int index, const osg::Matrix2x4d & m2x4)
	static int _bind_setElement_overload_25(lua_State *L) {
		if (!_lg_typecheck_setElement_overload_25(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::setElement(unsigned int index, const osg::Matrix2x4d & m2x4) function, expected prototype:\nbool osg::Uniform::setElement(unsigned int index, const osg::Matrix2x4d & m2x4)\nClass arguments details:\narg 2 ID = 62791291\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		const osg::Matrix2x4d* m2x4_ptr=(Luna< osg::Matrix2x4Template< double > >::checkSubType< osg::Matrix2x4d >(L,3));
		if( !m2x4_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m2x4 in osg::Uniform::setElement function");
		}
		const osg::Matrix2x4d & m2x4=*m2x4_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::setElement(unsigned int, const osg::Matrix2x4d &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->setElement(index, m2x4);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::setElement(unsigned int index, const osg::Matrix3x2d & m3x2)
	static int _bind_setElement_overload_26(lua_State *L) {
		if (!_lg_typecheck_setElement_overload_26(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::setElement(unsigned int index, const osg::Matrix3x2d & m3x2) function, expected prototype:\nbool osg::Uniform::setElement(unsigned int index, const osg::Matrix3x2d & m3x2)\nClass arguments details:\narg 2 ID = 62821020\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		const osg::Matrix3x2d* m3x2_ptr=(Luna< osg::Matrix3x2Template< double > >::checkSubType< osg::Matrix3x2d >(L,3));
		if( !m3x2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m3x2 in osg::Uniform::setElement function");
		}
		const osg::Matrix3x2d & m3x2=*m3x2_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::setElement(unsigned int, const osg::Matrix3x2d &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->setElement(index, m3x2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::setElement(unsigned int index, const osg::Matrix3x4d & m3x4)
	static int _bind_setElement_overload_27(lua_State *L) {
		if (!_lg_typecheck_setElement_overload_27(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::setElement(unsigned int index, const osg::Matrix3x4d & m3x4) function, expected prototype:\nbool osg::Uniform::setElement(unsigned int index, const osg::Matrix3x4d & m3x4)\nClass arguments details:\narg 2 ID = 62821082\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		const osg::Matrix3x4d* m3x4_ptr=(Luna< osg::Matrix3x4Template< double > >::checkSubType< osg::Matrix3x4d >(L,3));
		if( !m3x4_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m3x4 in osg::Uniform::setElement function");
		}
		const osg::Matrix3x4d & m3x4=*m3x4_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::setElement(unsigned int, const osg::Matrix3x4d &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->setElement(index, m3x4);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::setElement(unsigned int index, const osg::Matrix4x2d & m4x2)
	static int _bind_setElement_overload_28(lua_State *L) {
		if (!_lg_typecheck_setElement_overload_28(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::setElement(unsigned int index, const osg::Matrix4x2d & m4x2) function, expected prototype:\nbool osg::Uniform::setElement(unsigned int index, const osg::Matrix4x2d & m4x2)\nClass arguments details:\narg 2 ID = 62850811\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		const osg::Matrix4x2d* m4x2_ptr=(Luna< osg::Matrix4x2Template< double > >::checkSubType< osg::Matrix4x2d >(L,3));
		if( !m4x2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m4x2 in osg::Uniform::setElement function");
		}
		const osg::Matrix4x2d & m4x2=*m4x2_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::setElement(unsigned int, const osg::Matrix4x2d &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->setElement(index, m4x2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::setElement(unsigned int index, const osg::Matrix4x3d & m4x3)
	static int _bind_setElement_overload_29(lua_State *L) {
		if (!_lg_typecheck_setElement_overload_29(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::setElement(unsigned int index, const osg::Matrix4x3d & m4x3) function, expected prototype:\nbool osg::Uniform::setElement(unsigned int index, const osg::Matrix4x3d & m4x3)\nClass arguments details:\narg 2 ID = 62850842\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		const osg::Matrix4x3d* m4x3_ptr=(Luna< osg::Matrix4x3Template< double > >::checkSubType< osg::Matrix4x3d >(L,3));
		if( !m4x3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m4x3 in osg::Uniform::setElement function");
		}
		const osg::Matrix4x3d & m4x3=*m4x3_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::setElement(unsigned int, const osg::Matrix4x3d &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->setElement(index, m4x3);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::setElement(unsigned int index, int i0, int i1)
	static int _bind_setElement_overload_30(lua_State *L) {
		if (!_lg_typecheck_setElement_overload_30(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::setElement(unsigned int index, int i0, int i1) function, expected prototype:\nbool osg::Uniform::setElement(unsigned int index, int i0, int i1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		int i0=(int)lua_tointeger(L,3);
		int i1=(int)lua_tointeger(L,4);

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::setElement(unsigned int, int, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->setElement(index, i0, i1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::setElement(unsigned int index, int i0, int i1, int i2)
	static int _bind_setElement_overload_31(lua_State *L) {
		if (!_lg_typecheck_setElement_overload_31(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::setElement(unsigned int index, int i0, int i1, int i2) function, expected prototype:\nbool osg::Uniform::setElement(unsigned int index, int i0, int i1, int i2)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		int i0=(int)lua_tointeger(L,3);
		int i1=(int)lua_tointeger(L,4);
		int i2=(int)lua_tointeger(L,5);

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::setElement(unsigned int, int, int, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->setElement(index, i0, i1, i2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::setElement(unsigned int index, int i0, int i1, int i2, int i3)
	static int _bind_setElement_overload_32(lua_State *L) {
		if (!_lg_typecheck_setElement_overload_32(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::setElement(unsigned int index, int i0, int i1, int i2, int i3) function, expected prototype:\nbool osg::Uniform::setElement(unsigned int index, int i0, int i1, int i2, int i3)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		int i0=(int)lua_tointeger(L,3);
		int i1=(int)lua_tointeger(L,4);
		int i2=(int)lua_tointeger(L,5);
		int i3=(int)lua_tointeger(L,6);

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::setElement(unsigned int, int, int, int, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->setElement(index, i0, i1, i2, i3);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::setElement(unsigned int index, unsigned int ui0, unsigned int ui1)
	static int _bind_setElement_overload_33(lua_State *L) {
		if (!_lg_typecheck_setElement_overload_33(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::setElement(unsigned int index, unsigned int ui0, unsigned int ui1) function, expected prototype:\nbool osg::Uniform::setElement(unsigned int index, unsigned int ui0, unsigned int ui1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		unsigned int ui0=(unsigned int)lua_tointeger(L,3);
		unsigned int ui1=(unsigned int)lua_tointeger(L,4);

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::setElement(unsigned int, unsigned int, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->setElement(index, ui0, ui1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::setElement(unsigned int index, unsigned int ui0, unsigned int ui1, unsigned int ui2)
	static int _bind_setElement_overload_34(lua_State *L) {
		if (!_lg_typecheck_setElement_overload_34(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::setElement(unsigned int index, unsigned int ui0, unsigned int ui1, unsigned int ui2) function, expected prototype:\nbool osg::Uniform::setElement(unsigned int index, unsigned int ui0, unsigned int ui1, unsigned int ui2)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		unsigned int ui0=(unsigned int)lua_tointeger(L,3);
		unsigned int ui1=(unsigned int)lua_tointeger(L,4);
		unsigned int ui2=(unsigned int)lua_tointeger(L,5);

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::setElement(unsigned int, unsigned int, unsigned int, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->setElement(index, ui0, ui1, ui2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::setElement(unsigned int index, unsigned int ui0, unsigned int ui1, unsigned int ui2, unsigned int ui3)
	static int _bind_setElement_overload_35(lua_State *L) {
		if (!_lg_typecheck_setElement_overload_35(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::setElement(unsigned int index, unsigned int ui0, unsigned int ui1, unsigned int ui2, unsigned int ui3) function, expected prototype:\nbool osg::Uniform::setElement(unsigned int index, unsigned int ui0, unsigned int ui1, unsigned int ui2, unsigned int ui3)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		unsigned int ui0=(unsigned int)lua_tointeger(L,3);
		unsigned int ui1=(unsigned int)lua_tointeger(L,4);
		unsigned int ui2=(unsigned int)lua_tointeger(L,5);
		unsigned int ui3=(unsigned int)lua_tointeger(L,6);

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::setElement(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->setElement(index, ui0, ui1, ui2, ui3);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::setElement(unsigned int index, bool b0, bool b1)
	static int _bind_setElement_overload_36(lua_State *L) {
		if (!_lg_typecheck_setElement_overload_36(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::setElement(unsigned int index, bool b0, bool b1) function, expected prototype:\nbool osg::Uniform::setElement(unsigned int index, bool b0, bool b1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		bool b0=(bool)(lua_toboolean(L,3)==1);
		bool b1=(bool)(lua_toboolean(L,4)==1);

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::setElement(unsigned int, bool, bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->setElement(index, b0, b1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::setElement(unsigned int index, bool b0, bool b1, bool b2)
	static int _bind_setElement_overload_37(lua_State *L) {
		if (!_lg_typecheck_setElement_overload_37(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::setElement(unsigned int index, bool b0, bool b1, bool b2) function, expected prototype:\nbool osg::Uniform::setElement(unsigned int index, bool b0, bool b1, bool b2)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		bool b0=(bool)(lua_toboolean(L,3)==1);
		bool b1=(bool)(lua_toboolean(L,4)==1);
		bool b2=(bool)(lua_toboolean(L,5)==1);

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::setElement(unsigned int, bool, bool, bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->setElement(index, b0, b1, b2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::setElement(unsigned int index, bool b0, bool b1, bool b2, bool b3)
	static int _bind_setElement_overload_38(lua_State *L) {
		if (!_lg_typecheck_setElement_overload_38(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::setElement(unsigned int index, bool b0, bool b1, bool b2, bool b3) function, expected prototype:\nbool osg::Uniform::setElement(unsigned int index, bool b0, bool b1, bool b2, bool b3)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		bool b0=(bool)(lua_toboolean(L,3)==1);
		bool b1=(bool)(lua_toboolean(L,4)==1);
		bool b2=(bool)(lua_toboolean(L,5)==1);
		bool b3=(bool)(lua_toboolean(L,6)==1);

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::setElement(unsigned int, bool, bool, bool, bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->setElement(index, b0, b1, b2, b3);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for osg::Uniform::setElement
	static int _bind_setElement(lua_State *L) {
		if (_lg_typecheck_setElement_overload_1(L)) return _bind_setElement_overload_1(L);
		if (_lg_typecheck_setElement_overload_2(L)) return _bind_setElement_overload_2(L);
		if (_lg_typecheck_setElement_overload_3(L)) return _bind_setElement_overload_3(L);
		if (_lg_typecheck_setElement_overload_4(L)) return _bind_setElement_overload_4(L);
		if (_lg_typecheck_setElement_overload_5(L)) return _bind_setElement_overload_5(L);
		if (_lg_typecheck_setElement_overload_6(L)) return _bind_setElement_overload_6(L);
		if (_lg_typecheck_setElement_overload_7(L)) return _bind_setElement_overload_7(L);
		if (_lg_typecheck_setElement_overload_8(L)) return _bind_setElement_overload_8(L);
		if (_lg_typecheck_setElement_overload_9(L)) return _bind_setElement_overload_9(L);
		if (_lg_typecheck_setElement_overload_10(L)) return _bind_setElement_overload_10(L);
		if (_lg_typecheck_setElement_overload_11(L)) return _bind_setElement_overload_11(L);
		if (_lg_typecheck_setElement_overload_12(L)) return _bind_setElement_overload_12(L);
		if (_lg_typecheck_setElement_overload_13(L)) return _bind_setElement_overload_13(L);
		if (_lg_typecheck_setElement_overload_14(L)) return _bind_setElement_overload_14(L);
		if (_lg_typecheck_setElement_overload_15(L)) return _bind_setElement_overload_15(L);
		if (_lg_typecheck_setElement_overload_16(L)) return _bind_setElement_overload_16(L);
		if (_lg_typecheck_setElement_overload_17(L)) return _bind_setElement_overload_17(L);
		if (_lg_typecheck_setElement_overload_18(L)) return _bind_setElement_overload_18(L);
		if (_lg_typecheck_setElement_overload_19(L)) return _bind_setElement_overload_19(L);
		if (_lg_typecheck_setElement_overload_20(L)) return _bind_setElement_overload_20(L);
		if (_lg_typecheck_setElement_overload_21(L)) return _bind_setElement_overload_21(L);
		if (_lg_typecheck_setElement_overload_22(L)) return _bind_setElement_overload_22(L);
		if (_lg_typecheck_setElement_overload_23(L)) return _bind_setElement_overload_23(L);
		if (_lg_typecheck_setElement_overload_24(L)) return _bind_setElement_overload_24(L);
		if (_lg_typecheck_setElement_overload_25(L)) return _bind_setElement_overload_25(L);
		if (_lg_typecheck_setElement_overload_26(L)) return _bind_setElement_overload_26(L);
		if (_lg_typecheck_setElement_overload_27(L)) return _bind_setElement_overload_27(L);
		if (_lg_typecheck_setElement_overload_28(L)) return _bind_setElement_overload_28(L);
		if (_lg_typecheck_setElement_overload_29(L)) return _bind_setElement_overload_29(L);
		if (_lg_typecheck_setElement_overload_30(L)) return _bind_setElement_overload_30(L);
		if (_lg_typecheck_setElement_overload_31(L)) return _bind_setElement_overload_31(L);
		if (_lg_typecheck_setElement_overload_32(L)) return _bind_setElement_overload_32(L);
		if (_lg_typecheck_setElement_overload_33(L)) return _bind_setElement_overload_33(L);
		if (_lg_typecheck_setElement_overload_34(L)) return _bind_setElement_overload_34(L);
		if (_lg_typecheck_setElement_overload_35(L)) return _bind_setElement_overload_35(L);
		if (_lg_typecheck_setElement_overload_36(L)) return _bind_setElement_overload_36(L);
		if (_lg_typecheck_setElement_overload_37(L)) return _bind_setElement_overload_37(L);
		if (_lg_typecheck_setElement_overload_38(L)) return _bind_setElement_overload_38(L);

		luaL_error(L, "error in function setElement, cannot match any of the overloads for function setElement:\n  setElement(unsigned int, float)\n  setElement(unsigned int, double)\n  setElement(unsigned int, int)\n  setElement(unsigned int, unsigned int)\n  setElement(unsigned int, bool)\n  setElement(unsigned int, const osg::Vec2f &)\n  setElement(unsigned int, const osg::Vec3f &)\n  setElement(unsigned int, const osg::Vec4f &)\n  setElement(unsigned int, const osg::Vec2d &)\n  setElement(unsigned int, const osg::Vec3d &)\n  setElement(unsigned int, const osg::Vec4d &)\n  setElement(unsigned int, const osg::Matrix2 &)\n  setElement(unsigned int, const osg::Matrix3 &)\n  setElement(unsigned int, const osg::Matrixf &)\n  setElement(unsigned int, const osg::Matrix2x3 &)\n  setElement(unsigned int, const osg::Matrix2x4 &)\n  setElement(unsigned int, const osg::Matrix3x2 &)\n  setElement(unsigned int, const osg::Matrix3x4 &)\n  setElement(unsigned int, const osg::Matrix4x2 &)\n  setElement(unsigned int, const osg::Matrix4x3 &)\n  setElement(unsigned int, const osg::Matrix2d &)\n  setElement(unsigned int, const osg::Matrix3d &)\n  setElement(unsigned int, const osg::Matrixd &)\n  setElement(unsigned int, const osg::Matrix2x3d &)\n  setElement(unsigned int, const osg::Matrix2x4d &)\n  setElement(unsigned int, const osg::Matrix3x2d &)\n  setElement(unsigned int, const osg::Matrix3x4d &)\n  setElement(unsigned int, const osg::Matrix4x2d &)\n  setElement(unsigned int, const osg::Matrix4x3d &)\n  setElement(unsigned int, int, int)\n  setElement(unsigned int, int, int, int)\n  setElement(unsigned int, int, int, int, int)\n  setElement(unsigned int, unsigned int, unsigned int)\n  setElement(unsigned int, unsigned int, unsigned int, unsigned int)\n  setElement(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int)\n  setElement(unsigned int, bool, bool)\n  setElement(unsigned int, bool, bool, bool)\n  setElement(unsigned int, bool, bool, bool, bool)\n");
		return 0;
	}

	// bool osg::Uniform::getElement(unsigned int index, float & f) const
	static int _bind_getElement_overload_1(lua_State *L) {
		if (!_lg_typecheck_getElement_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::getElement(unsigned int index, float & f) const function, expected prototype:\nbool osg::Uniform::getElement(unsigned int index, float & f) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		float f=(float)lua_tonumber(L,3);

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::getElement(unsigned int, float &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getElement(index, f);
		lua_pushboolean(L,lret?1:0);

		lua_pushnumber(L,f);
		return 2;
	}

	// bool osg::Uniform::getElement(unsigned int index, double & d) const
	static int _bind_getElement_overload_2(lua_State *L) {
		if (!_lg_typecheck_getElement_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::getElement(unsigned int index, double & d) const function, expected prototype:\nbool osg::Uniform::getElement(unsigned int index, double & d) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		double d=(double)lua_tonumber(L,3);

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::getElement(unsigned int, double &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getElement(index, d);
		lua_pushboolean(L,lret?1:0);

		lua_pushnumber(L,d);
		return 2;
	}

	// bool osg::Uniform::getElement(unsigned int index, int & i) const
	static int _bind_getElement_overload_3(lua_State *L) {
		if (!_lg_typecheck_getElement_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::getElement(unsigned int index, int & i) const function, expected prototype:\nbool osg::Uniform::getElement(unsigned int index, int & i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		int i=(int)lua_tointeger(L,3);

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::getElement(unsigned int, int &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getElement(index, i);
		lua_pushboolean(L,lret?1:0);

		lua_pushnumber(L,i);
		return 2;
	}

	// bool osg::Uniform::getElement(unsigned int index, unsigned int & ui) const
	static int _bind_getElement_overload_4(lua_State *L) {
		if (!_lg_typecheck_getElement_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::getElement(unsigned int index, unsigned int & ui) const function, expected prototype:\nbool osg::Uniform::getElement(unsigned int index, unsigned int & ui) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		unsigned int ui=(unsigned int)lua_tointeger(L,3);

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::getElement(unsigned int, unsigned int &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getElement(index, ui);
		lua_pushboolean(L,lret?1:0);

		lua_pushnumber(L,ui);
		return 2;
	}

	// bool osg::Uniform::getElement(unsigned int index, bool & b) const
	static int _bind_getElement_overload_5(lua_State *L) {
		if (!_lg_typecheck_getElement_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::getElement(unsigned int index, bool & b) const function, expected prototype:\nbool osg::Uniform::getElement(unsigned int index, bool & b) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		bool b=(bool)(lua_toboolean(L,3)==1);

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::getElement(unsigned int, bool &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getElement(index, b);
		lua_pushboolean(L,lret?1:0);

		lua_pushboolean(L,b?1:0);
		return 2;
	}

	// bool osg::Uniform::getElement(unsigned int index, osg::Vec2f & v2) const
	static int _bind_getElement_overload_6(lua_State *L) {
		if (!_lg_typecheck_getElement_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::getElement(unsigned int index, osg::Vec2f & v2) const function, expected prototype:\nbool osg::Uniform::getElement(unsigned int index, osg::Vec2f & v2) const\nClass arguments details:\narg 2 ID = 92303173\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		osg::Vec2f* v2_ptr=(Luna< osg::Vec2f >::check(L,3));
		if( !v2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v2 in osg::Uniform::getElement function");
		}
		osg::Vec2f & v2=*v2_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::getElement(unsigned int, osg::Vec2f &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getElement(index, v2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::getElement(unsigned int index, osg::Vec3f & v3) const
	static int _bind_getElement_overload_7(lua_State *L) {
		if (!_lg_typecheck_getElement_overload_7(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::getElement(unsigned int index, osg::Vec3f & v3) const function, expected prototype:\nbool osg::Uniform::getElement(unsigned int index, osg::Vec3f & v3) const\nClass arguments details:\narg 2 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		osg::Vec3f* v3_ptr=(Luna< osg::Vec3f >::check(L,3));
		if( !v3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v3 in osg::Uniform::getElement function");
		}
		osg::Vec3f & v3=*v3_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::getElement(unsigned int, osg::Vec3f &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getElement(index, v3);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::getElement(unsigned int index, osg::Vec4f & v4) const
	static int _bind_getElement_overload_8(lua_State *L) {
		if (!_lg_typecheck_getElement_overload_8(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::getElement(unsigned int index, osg::Vec4f & v4) const function, expected prototype:\nbool osg::Uniform::getElement(unsigned int index, osg::Vec4f & v4) const\nClass arguments details:\narg 2 ID = 92303235\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		osg::Vec4f* v4_ptr=(Luna< osg::Vec4f >::check(L,3));
		if( !v4_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v4 in osg::Uniform::getElement function");
		}
		osg::Vec4f & v4=*v4_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::getElement(unsigned int, osg::Vec4f &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getElement(index, v4);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::getElement(unsigned int index, osg::Vec2d & v2) const
	static int _bind_getElement_overload_9(lua_State *L) {
		if (!_lg_typecheck_getElement_overload_9(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::getElement(unsigned int index, osg::Vec2d & v2) const function, expected prototype:\nbool osg::Uniform::getElement(unsigned int index, osg::Vec2d & v2) const\nClass arguments details:\narg 2 ID = 92303171\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		osg::Vec2d* v2_ptr=(Luna< osg::Vec2d >::check(L,3));
		if( !v2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v2 in osg::Uniform::getElement function");
		}
		osg::Vec2d & v2=*v2_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::getElement(unsigned int, osg::Vec2d &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getElement(index, v2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::getElement(unsigned int index, osg::Vec3d & v3) const
	static int _bind_getElement_overload_10(lua_State *L) {
		if (!_lg_typecheck_getElement_overload_10(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::getElement(unsigned int index, osg::Vec3d & v3) const function, expected prototype:\nbool osg::Uniform::getElement(unsigned int index, osg::Vec3d & v3) const\nClass arguments details:\narg 2 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		osg::Vec3d* v3_ptr=(Luna< osg::Vec3d >::check(L,3));
		if( !v3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v3 in osg::Uniform::getElement function");
		}
		osg::Vec3d & v3=*v3_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::getElement(unsigned int, osg::Vec3d &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getElement(index, v3);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::getElement(unsigned int index, osg::Vec4d & v4) const
	static int _bind_getElement_overload_11(lua_State *L) {
		if (!_lg_typecheck_getElement_overload_11(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::getElement(unsigned int index, osg::Vec4d & v4) const function, expected prototype:\nbool osg::Uniform::getElement(unsigned int index, osg::Vec4d & v4) const\nClass arguments details:\narg 2 ID = 92303233\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		osg::Vec4d* v4_ptr=(Luna< osg::Vec4d >::check(L,3));
		if( !v4_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v4 in osg::Uniform::getElement function");
		}
		osg::Vec4d & v4=*v4_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::getElement(unsigned int, osg::Vec4d &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getElement(index, v4);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::getElement(unsigned int index, osg::Matrix2 & m2) const
	static int _bind_getElement_overload_12(lua_State *L) {
		if (!_lg_typecheck_getElement_overload_12(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::getElement(unsigned int index, osg::Matrix2 & m2) const function, expected prototype:\nbool osg::Uniform::getElement(unsigned int index, osg::Matrix2 & m2) const\nClass arguments details:\narg 2 ID = 18903788\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		osg::Matrix2* m2_ptr=(Luna< osg::Matrix2Template< float > >::checkSubType< osg::Matrix2 >(L,3));
		if( !m2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m2 in osg::Uniform::getElement function");
		}
		osg::Matrix2 & m2=*m2_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::getElement(unsigned int, osg::Matrix2 &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getElement(index, m2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::getElement(unsigned int index, osg::Matrix3 & m3) const
	static int _bind_getElement_overload_13(lua_State *L) {
		if (!_lg_typecheck_getElement_overload_13(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::getElement(unsigned int index, osg::Matrix3 & m3) const function, expected prototype:\nbool osg::Uniform::getElement(unsigned int index, osg::Matrix3 & m3) const\nClass arguments details:\narg 2 ID = 18903789\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		osg::Matrix3* m3_ptr=(Luna< osg::Matrix3 >::check(L,3));
		if( !m3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m3 in osg::Uniform::getElement function");
		}
		osg::Matrix3 & m3=*m3_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::getElement(unsigned int, osg::Matrix3 &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getElement(index, m3);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::getElement(unsigned int index, osg::Matrixf & m4) const
	static int _bind_getElement_overload_14(lua_State *L) {
		if (!_lg_typecheck_getElement_overload_14(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::getElement(unsigned int index, osg::Matrixf & m4) const function, expected prototype:\nbool osg::Uniform::getElement(unsigned int index, osg::Matrixf & m4) const\nClass arguments details:\narg 2 ID = 18903840\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		osg::Matrixf* m4_ptr=(Luna< osg::Matrixf >::check(L,3));
		if( !m4_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m4 in osg::Uniform::getElement function");
		}
		osg::Matrixf & m4=*m4_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::getElement(unsigned int, osg::Matrixf &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getElement(index, m4);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::getElement(unsigned int index, osg::Matrix2x3 & m2x3) const
	static int _bind_getElement_overload_15(lua_State *L) {
		if (!_lg_typecheck_getElement_overload_15(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::getElement(unsigned int index, osg::Matrix2x3 & m2x3) const function, expected prototype:\nbool osg::Uniform::getElement(unsigned int index, osg::Matrix2x3 & m2x3) const\nClass arguments details:\narg 2 ID = 66541660\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		osg::Matrix2x3* m2x3_ptr=(Luna< osg::Matrix2x3Template< float > >::checkSubType< osg::Matrix2x3 >(L,3));
		if( !m2x3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m2x3 in osg::Uniform::getElement function");
		}
		osg::Matrix2x3 & m2x3=*m2x3_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::getElement(unsigned int, osg::Matrix2x3 &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getElement(index, m2x3);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::getElement(unsigned int index, osg::Matrix2x4 & m2x4) const
	static int _bind_getElement_overload_16(lua_State *L) {
		if (!_lg_typecheck_getElement_overload_16(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::getElement(unsigned int index, osg::Matrix2x4 & m2x4) const function, expected prototype:\nbool osg::Uniform::getElement(unsigned int index, osg::Matrix2x4 & m2x4) const\nClass arguments details:\narg 2 ID = 66541661\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		osg::Matrix2x4* m2x4_ptr=(Luna< osg::Matrix2x4Template< float > >::checkSubType< osg::Matrix2x4 >(L,3));
		if( !m2x4_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m2x4 in osg::Uniform::getElement function");
		}
		osg::Matrix2x4 & m2x4=*m2x4_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::getElement(unsigned int, osg::Matrix2x4 &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getElement(index, m2x4);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::getElement(unsigned int index, osg::Matrix3x2 & m3x2) const
	static int _bind_getElement_overload_17(lua_State *L) {
		if (!_lg_typecheck_getElement_overload_17(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::getElement(unsigned int index, osg::Matrix3x2 & m3x2) const function, expected prototype:\nbool osg::Uniform::getElement(unsigned int index, osg::Matrix3x2 & m3x2) const\nClass arguments details:\narg 2 ID = 66542620\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		osg::Matrix3x2* m3x2_ptr=(Luna< osg::Matrix3x2Template< float > >::checkSubType< osg::Matrix3x2 >(L,3));
		if( !m3x2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m3x2 in osg::Uniform::getElement function");
		}
		osg::Matrix3x2 & m3x2=*m3x2_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::getElement(unsigned int, osg::Matrix3x2 &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getElement(index, m3x2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::getElement(unsigned int index, osg::Matrix3x4 & m3x4) const
	static int _bind_getElement_overload_18(lua_State *L) {
		if (!_lg_typecheck_getElement_overload_18(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::getElement(unsigned int index, osg::Matrix3x4 & m3x4) const function, expected prototype:\nbool osg::Uniform::getElement(unsigned int index, osg::Matrix3x4 & m3x4) const\nClass arguments details:\narg 2 ID = 66542622\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		osg::Matrix3x4* m3x4_ptr=(Luna< osg::Matrix3x4Template< float > >::checkSubType< osg::Matrix3x4 >(L,3));
		if( !m3x4_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m3x4 in osg::Uniform::getElement function");
		}
		osg::Matrix3x4 & m3x4=*m3x4_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::getElement(unsigned int, osg::Matrix3x4 &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getElement(index, m3x4);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::getElement(unsigned int index, osg::Matrix4x2 & m4x2) const
	static int _bind_getElement_overload_19(lua_State *L) {
		if (!_lg_typecheck_getElement_overload_19(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::getElement(unsigned int index, osg::Matrix4x2 & m4x2) const function, expected prototype:\nbool osg::Uniform::getElement(unsigned int index, osg::Matrix4x2 & m4x2) const\nClass arguments details:\narg 2 ID = 66543581\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		osg::Matrix4x2* m4x2_ptr=(Luna< osg::Matrix4x2Template< float > >::checkSubType< osg::Matrix4x2 >(L,3));
		if( !m4x2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m4x2 in osg::Uniform::getElement function");
		}
		osg::Matrix4x2 & m4x2=*m4x2_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::getElement(unsigned int, osg::Matrix4x2 &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getElement(index, m4x2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::getElement(unsigned int index, osg::Matrix4x3 & m4x3) const
	static int _bind_getElement_overload_20(lua_State *L) {
		if (!_lg_typecheck_getElement_overload_20(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::getElement(unsigned int index, osg::Matrix4x3 & m4x3) const function, expected prototype:\nbool osg::Uniform::getElement(unsigned int index, osg::Matrix4x3 & m4x3) const\nClass arguments details:\narg 2 ID = 66543582\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		osg::Matrix4x3* m4x3_ptr=(Luna< osg::Matrix4x3Template< float > >::checkSubType< osg::Matrix4x3 >(L,3));
		if( !m4x3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m4x3 in osg::Uniform::getElement function");
		}
		osg::Matrix4x3 & m4x3=*m4x3_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::getElement(unsigned int, osg::Matrix4x3 &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getElement(index, m4x3);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::getElement(unsigned int index, osg::Matrix2d & m2) const
	static int _bind_getElement_overload_21(lua_State *L) {
		if (!_lg_typecheck_getElement_overload_21(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::getElement(unsigned int index, osg::Matrix2d & m2) const function, expected prototype:\nbool osg::Uniform::getElement(unsigned int index, osg::Matrix2d & m2) const\nClass arguments details:\narg 2 ID = 86017463\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		osg::Matrix2d* m2_ptr=(Luna< osg::Matrix2Template< double > >::checkSubType< osg::Matrix2d >(L,3));
		if( !m2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m2 in osg::Uniform::getElement function");
		}
		osg::Matrix2d & m2=*m2_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::getElement(unsigned int, osg::Matrix2d &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getElement(index, m2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::getElement(unsigned int index, osg::Matrix3d & m3) const
	static int _bind_getElement_overload_22(lua_State *L) {
		if (!_lg_typecheck_getElement_overload_22(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::getElement(unsigned int index, osg::Matrix3d & m3) const function, expected prototype:\nbool osg::Uniform::getElement(unsigned int index, osg::Matrix3d & m3) const\nClass arguments details:\narg 2 ID = 86017494\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		osg::Matrix3d* m3_ptr=(Luna< osg::Matrix3d >::check(L,3));
		if( !m3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m3 in osg::Uniform::getElement function");
		}
		osg::Matrix3d & m3=*m3_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::getElement(unsigned int, osg::Matrix3d &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getElement(index, m3);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::getElement(unsigned int index, osg::Matrixd & m4) const
	static int _bind_getElement_overload_23(lua_State *L) {
		if (!_lg_typecheck_getElement_overload_23(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::getElement(unsigned int index, osg::Matrixd & m4) const function, expected prototype:\nbool osg::Uniform::getElement(unsigned int index, osg::Matrixd & m4) const\nClass arguments details:\narg 2 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		osg::Matrixd* m4_ptr=(Luna< osg::Matrixd >::check(L,3));
		if( !m4_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m4 in osg::Uniform::getElement function");
		}
		osg::Matrixd & m4=*m4_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::getElement(unsigned int, osg::Matrixd &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getElement(index, m4);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::getElement(unsigned int index, osg::Matrix2x3d & m2x3) const
	static int _bind_getElement_overload_24(lua_State *L) {
		if (!_lg_typecheck_getElement_overload_24(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::getElement(unsigned int index, osg::Matrix2x3d & m2x3) const function, expected prototype:\nbool osg::Uniform::getElement(unsigned int index, osg::Matrix2x3d & m2x3) const\nClass arguments details:\narg 2 ID = 62791260\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		osg::Matrix2x3d* m2x3_ptr=(Luna< osg::Matrix2x3Template< double > >::checkSubType< osg::Matrix2x3d >(L,3));
		if( !m2x3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m2x3 in osg::Uniform::getElement function");
		}
		osg::Matrix2x3d & m2x3=*m2x3_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::getElement(unsigned int, osg::Matrix2x3d &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getElement(index, m2x3);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::getElement(unsigned int index, osg::Matrix2x4d & m2x4) const
	static int _bind_getElement_overload_25(lua_State *L) {
		if (!_lg_typecheck_getElement_overload_25(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::getElement(unsigned int index, osg::Matrix2x4d & m2x4) const function, expected prototype:\nbool osg::Uniform::getElement(unsigned int index, osg::Matrix2x4d & m2x4) const\nClass arguments details:\narg 2 ID = 62791291\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		osg::Matrix2x4d* m2x4_ptr=(Luna< osg::Matrix2x4Template< double > >::checkSubType< osg::Matrix2x4d >(L,3));
		if( !m2x4_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m2x4 in osg::Uniform::getElement function");
		}
		osg::Matrix2x4d & m2x4=*m2x4_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::getElement(unsigned int, osg::Matrix2x4d &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getElement(index, m2x4);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::getElement(unsigned int index, osg::Matrix3x2d & m3x2) const
	static int _bind_getElement_overload_26(lua_State *L) {
		if (!_lg_typecheck_getElement_overload_26(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::getElement(unsigned int index, osg::Matrix3x2d & m3x2) const function, expected prototype:\nbool osg::Uniform::getElement(unsigned int index, osg::Matrix3x2d & m3x2) const\nClass arguments details:\narg 2 ID = 62821020\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		osg::Matrix3x2d* m3x2_ptr=(Luna< osg::Matrix3x2Template< double > >::checkSubType< osg::Matrix3x2d >(L,3));
		if( !m3x2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m3x2 in osg::Uniform::getElement function");
		}
		osg::Matrix3x2d & m3x2=*m3x2_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::getElement(unsigned int, osg::Matrix3x2d &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getElement(index, m3x2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::getElement(unsigned int index, osg::Matrix3x4d & m3x4) const
	static int _bind_getElement_overload_27(lua_State *L) {
		if (!_lg_typecheck_getElement_overload_27(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::getElement(unsigned int index, osg::Matrix3x4d & m3x4) const function, expected prototype:\nbool osg::Uniform::getElement(unsigned int index, osg::Matrix3x4d & m3x4) const\nClass arguments details:\narg 2 ID = 62821082\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		osg::Matrix3x4d* m3x4_ptr=(Luna< osg::Matrix3x4Template< double > >::checkSubType< osg::Matrix3x4d >(L,3));
		if( !m3x4_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m3x4 in osg::Uniform::getElement function");
		}
		osg::Matrix3x4d & m3x4=*m3x4_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::getElement(unsigned int, osg::Matrix3x4d &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getElement(index, m3x4);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::getElement(unsigned int index, osg::Matrix4x2d & m4x2) const
	static int _bind_getElement_overload_28(lua_State *L) {
		if (!_lg_typecheck_getElement_overload_28(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::getElement(unsigned int index, osg::Matrix4x2d & m4x2) const function, expected prototype:\nbool osg::Uniform::getElement(unsigned int index, osg::Matrix4x2d & m4x2) const\nClass arguments details:\narg 2 ID = 62850811\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		osg::Matrix4x2d* m4x2_ptr=(Luna< osg::Matrix4x2Template< double > >::checkSubType< osg::Matrix4x2d >(L,3));
		if( !m4x2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m4x2 in osg::Uniform::getElement function");
		}
		osg::Matrix4x2d & m4x2=*m4x2_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::getElement(unsigned int, osg::Matrix4x2d &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getElement(index, m4x2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::getElement(unsigned int index, osg::Matrix4x3d & m4x3) const
	static int _bind_getElement_overload_29(lua_State *L) {
		if (!_lg_typecheck_getElement_overload_29(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::getElement(unsigned int index, osg::Matrix4x3d & m4x3) const function, expected prototype:\nbool osg::Uniform::getElement(unsigned int index, osg::Matrix4x3d & m4x3) const\nClass arguments details:\narg 2 ID = 62850842\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		osg::Matrix4x3d* m4x3_ptr=(Luna< osg::Matrix4x3Template< double > >::checkSubType< osg::Matrix4x3d >(L,3));
		if( !m4x3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m4x3 in osg::Uniform::getElement function");
		}
		osg::Matrix4x3d & m4x3=*m4x3_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::getElement(unsigned int, osg::Matrix4x3d &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getElement(index, m4x3);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::getElement(unsigned int index, int & i0, int & i1) const
	static int _bind_getElement_overload_30(lua_State *L) {
		if (!_lg_typecheck_getElement_overload_30(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::getElement(unsigned int index, int & i0, int & i1) const function, expected prototype:\nbool osg::Uniform::getElement(unsigned int index, int & i0, int & i1) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		int i0=(int)lua_tointeger(L,3);
		int i1=(int)lua_tointeger(L,4);

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::getElement(unsigned int, int &, int &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getElement(index, i0, i1);
		lua_pushboolean(L,lret?1:0);

		lua_pushnumber(L,i0);
		lua_pushnumber(L,i1);
		return 3;
	}

	// bool osg::Uniform::getElement(unsigned int index, int & i0, int & i1, int & i2) const
	static int _bind_getElement_overload_31(lua_State *L) {
		if (!_lg_typecheck_getElement_overload_31(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::getElement(unsigned int index, int & i0, int & i1, int & i2) const function, expected prototype:\nbool osg::Uniform::getElement(unsigned int index, int & i0, int & i1, int & i2) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		int i0=(int)lua_tointeger(L,3);
		int i1=(int)lua_tointeger(L,4);
		int i2=(int)lua_tointeger(L,5);

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::getElement(unsigned int, int &, int &, int &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getElement(index, i0, i1, i2);
		lua_pushboolean(L,lret?1:0);

		lua_pushnumber(L,i0);
		lua_pushnumber(L,i1);
		lua_pushnumber(L,i2);
		return 4;
	}

	// bool osg::Uniform::getElement(unsigned int index, int & i0, int & i1, int & i2, int & i3) const
	static int _bind_getElement_overload_32(lua_State *L) {
		if (!_lg_typecheck_getElement_overload_32(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::getElement(unsigned int index, int & i0, int & i1, int & i2, int & i3) const function, expected prototype:\nbool osg::Uniform::getElement(unsigned int index, int & i0, int & i1, int & i2, int & i3) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		int i0=(int)lua_tointeger(L,3);
		int i1=(int)lua_tointeger(L,4);
		int i2=(int)lua_tointeger(L,5);
		int i3=(int)lua_tointeger(L,6);

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::getElement(unsigned int, int &, int &, int &, int &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getElement(index, i0, i1, i2, i3);
		lua_pushboolean(L,lret?1:0);

		lua_pushnumber(L,i0);
		lua_pushnumber(L,i1);
		lua_pushnumber(L,i2);
		lua_pushnumber(L,i3);
		return 5;
	}

	// bool osg::Uniform::getElement(unsigned int index, unsigned int & ui0, unsigned int & ui1) const
	static int _bind_getElement_overload_33(lua_State *L) {
		if (!_lg_typecheck_getElement_overload_33(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::getElement(unsigned int index, unsigned int & ui0, unsigned int & ui1) const function, expected prototype:\nbool osg::Uniform::getElement(unsigned int index, unsigned int & ui0, unsigned int & ui1) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		unsigned int ui0=(unsigned int)lua_tointeger(L,3);
		unsigned int ui1=(unsigned int)lua_tointeger(L,4);

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::getElement(unsigned int, unsigned int &, unsigned int &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getElement(index, ui0, ui1);
		lua_pushboolean(L,lret?1:0);

		lua_pushnumber(L,ui0);
		lua_pushnumber(L,ui1);
		return 3;
	}

	// bool osg::Uniform::getElement(unsigned int index, unsigned int & ui0, unsigned int & ui1, unsigned int & ui2) const
	static int _bind_getElement_overload_34(lua_State *L) {
		if (!_lg_typecheck_getElement_overload_34(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::getElement(unsigned int index, unsigned int & ui0, unsigned int & ui1, unsigned int & ui2) const function, expected prototype:\nbool osg::Uniform::getElement(unsigned int index, unsigned int & ui0, unsigned int & ui1, unsigned int & ui2) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		unsigned int ui0=(unsigned int)lua_tointeger(L,3);
		unsigned int ui1=(unsigned int)lua_tointeger(L,4);
		unsigned int ui2=(unsigned int)lua_tointeger(L,5);

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::getElement(unsigned int, unsigned int &, unsigned int &, unsigned int &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getElement(index, ui0, ui1, ui2);
		lua_pushboolean(L,lret?1:0);

		lua_pushnumber(L,ui0);
		lua_pushnumber(L,ui1);
		lua_pushnumber(L,ui2);
		return 4;
	}

	// bool osg::Uniform::getElement(unsigned int index, unsigned int & ui0, unsigned int & ui1, unsigned int & ui2, unsigned int & ui3) const
	static int _bind_getElement_overload_35(lua_State *L) {
		if (!_lg_typecheck_getElement_overload_35(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::getElement(unsigned int index, unsigned int & ui0, unsigned int & ui1, unsigned int & ui2, unsigned int & ui3) const function, expected prototype:\nbool osg::Uniform::getElement(unsigned int index, unsigned int & ui0, unsigned int & ui1, unsigned int & ui2, unsigned int & ui3) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		unsigned int ui0=(unsigned int)lua_tointeger(L,3);
		unsigned int ui1=(unsigned int)lua_tointeger(L,4);
		unsigned int ui2=(unsigned int)lua_tointeger(L,5);
		unsigned int ui3=(unsigned int)lua_tointeger(L,6);

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::getElement(unsigned int, unsigned int &, unsigned int &, unsigned int &, unsigned int &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getElement(index, ui0, ui1, ui2, ui3);
		lua_pushboolean(L,lret?1:0);

		lua_pushnumber(L,ui0);
		lua_pushnumber(L,ui1);
		lua_pushnumber(L,ui2);
		lua_pushnumber(L,ui3);
		return 5;
	}

	// bool osg::Uniform::getElement(unsigned int index, bool & b0, bool & b1) const
	static int _bind_getElement_overload_36(lua_State *L) {
		if (!_lg_typecheck_getElement_overload_36(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::getElement(unsigned int index, bool & b0, bool & b1) const function, expected prototype:\nbool osg::Uniform::getElement(unsigned int index, bool & b0, bool & b1) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		bool b0=(bool)(lua_toboolean(L,3)==1);
		bool b1=(bool)(lua_toboolean(L,4)==1);

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::getElement(unsigned int, bool &, bool &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getElement(index, b0, b1);
		lua_pushboolean(L,lret?1:0);

		lua_pushboolean(L,b0?1:0);
		lua_pushboolean(L,b1?1:0);
		return 3;
	}

	// bool osg::Uniform::getElement(unsigned int index, bool & b0, bool & b1, bool & b2) const
	static int _bind_getElement_overload_37(lua_State *L) {
		if (!_lg_typecheck_getElement_overload_37(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::getElement(unsigned int index, bool & b0, bool & b1, bool & b2) const function, expected prototype:\nbool osg::Uniform::getElement(unsigned int index, bool & b0, bool & b1, bool & b2) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		bool b0=(bool)(lua_toboolean(L,3)==1);
		bool b1=(bool)(lua_toboolean(L,4)==1);
		bool b2=(bool)(lua_toboolean(L,5)==1);

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::getElement(unsigned int, bool &, bool &, bool &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getElement(index, b0, b1, b2);
		lua_pushboolean(L,lret?1:0);

		lua_pushboolean(L,b0?1:0);
		lua_pushboolean(L,b1?1:0);
		lua_pushboolean(L,b2?1:0);
		return 4;
	}

	// bool osg::Uniform::getElement(unsigned int index, bool & b0, bool & b1, bool & b2, bool & b3) const
	static int _bind_getElement_overload_38(lua_State *L) {
		if (!_lg_typecheck_getElement_overload_38(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::getElement(unsigned int index, bool & b0, bool & b1, bool & b2, bool & b3) const function, expected prototype:\nbool osg::Uniform::getElement(unsigned int index, bool & b0, bool & b1, bool & b2, bool & b3) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		bool b0=(bool)(lua_toboolean(L,3)==1);
		bool b1=(bool)(lua_toboolean(L,4)==1);
		bool b2=(bool)(lua_toboolean(L,5)==1);
		bool b3=(bool)(lua_toboolean(L,6)==1);

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::getElement(unsigned int, bool &, bool &, bool &, bool &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getElement(index, b0, b1, b2, b3);
		lua_pushboolean(L,lret?1:0);

		lua_pushboolean(L,b0?1:0);
		lua_pushboolean(L,b1?1:0);
		lua_pushboolean(L,b2?1:0);
		lua_pushboolean(L,b3?1:0);
		return 5;
	}

	// Overload binder for osg::Uniform::getElement
	static int _bind_getElement(lua_State *L) {
		if (_lg_typecheck_getElement_overload_1(L)) return _bind_getElement_overload_1(L);
		if (_lg_typecheck_getElement_overload_2(L)) return _bind_getElement_overload_2(L);
		if (_lg_typecheck_getElement_overload_3(L)) return _bind_getElement_overload_3(L);
		if (_lg_typecheck_getElement_overload_4(L)) return _bind_getElement_overload_4(L);
		if (_lg_typecheck_getElement_overload_5(L)) return _bind_getElement_overload_5(L);
		if (_lg_typecheck_getElement_overload_6(L)) return _bind_getElement_overload_6(L);
		if (_lg_typecheck_getElement_overload_7(L)) return _bind_getElement_overload_7(L);
		if (_lg_typecheck_getElement_overload_8(L)) return _bind_getElement_overload_8(L);
		if (_lg_typecheck_getElement_overload_9(L)) return _bind_getElement_overload_9(L);
		if (_lg_typecheck_getElement_overload_10(L)) return _bind_getElement_overload_10(L);
		if (_lg_typecheck_getElement_overload_11(L)) return _bind_getElement_overload_11(L);
		if (_lg_typecheck_getElement_overload_12(L)) return _bind_getElement_overload_12(L);
		if (_lg_typecheck_getElement_overload_13(L)) return _bind_getElement_overload_13(L);
		if (_lg_typecheck_getElement_overload_14(L)) return _bind_getElement_overload_14(L);
		if (_lg_typecheck_getElement_overload_15(L)) return _bind_getElement_overload_15(L);
		if (_lg_typecheck_getElement_overload_16(L)) return _bind_getElement_overload_16(L);
		if (_lg_typecheck_getElement_overload_17(L)) return _bind_getElement_overload_17(L);
		if (_lg_typecheck_getElement_overload_18(L)) return _bind_getElement_overload_18(L);
		if (_lg_typecheck_getElement_overload_19(L)) return _bind_getElement_overload_19(L);
		if (_lg_typecheck_getElement_overload_20(L)) return _bind_getElement_overload_20(L);
		if (_lg_typecheck_getElement_overload_21(L)) return _bind_getElement_overload_21(L);
		if (_lg_typecheck_getElement_overload_22(L)) return _bind_getElement_overload_22(L);
		if (_lg_typecheck_getElement_overload_23(L)) return _bind_getElement_overload_23(L);
		if (_lg_typecheck_getElement_overload_24(L)) return _bind_getElement_overload_24(L);
		if (_lg_typecheck_getElement_overload_25(L)) return _bind_getElement_overload_25(L);
		if (_lg_typecheck_getElement_overload_26(L)) return _bind_getElement_overload_26(L);
		if (_lg_typecheck_getElement_overload_27(L)) return _bind_getElement_overload_27(L);
		if (_lg_typecheck_getElement_overload_28(L)) return _bind_getElement_overload_28(L);
		if (_lg_typecheck_getElement_overload_29(L)) return _bind_getElement_overload_29(L);
		if (_lg_typecheck_getElement_overload_30(L)) return _bind_getElement_overload_30(L);
		if (_lg_typecheck_getElement_overload_31(L)) return _bind_getElement_overload_31(L);
		if (_lg_typecheck_getElement_overload_32(L)) return _bind_getElement_overload_32(L);
		if (_lg_typecheck_getElement_overload_33(L)) return _bind_getElement_overload_33(L);
		if (_lg_typecheck_getElement_overload_34(L)) return _bind_getElement_overload_34(L);
		if (_lg_typecheck_getElement_overload_35(L)) return _bind_getElement_overload_35(L);
		if (_lg_typecheck_getElement_overload_36(L)) return _bind_getElement_overload_36(L);
		if (_lg_typecheck_getElement_overload_37(L)) return _bind_getElement_overload_37(L);
		if (_lg_typecheck_getElement_overload_38(L)) return _bind_getElement_overload_38(L);

		luaL_error(L, "error in function getElement, cannot match any of the overloads for function getElement:\n  getElement(unsigned int, float &)\n  getElement(unsigned int, double &)\n  getElement(unsigned int, int &)\n  getElement(unsigned int, unsigned int &)\n  getElement(unsigned int, bool &)\n  getElement(unsigned int, osg::Vec2f &)\n  getElement(unsigned int, osg::Vec3f &)\n  getElement(unsigned int, osg::Vec4f &)\n  getElement(unsigned int, osg::Vec2d &)\n  getElement(unsigned int, osg::Vec3d &)\n  getElement(unsigned int, osg::Vec4d &)\n  getElement(unsigned int, osg::Matrix2 &)\n  getElement(unsigned int, osg::Matrix3 &)\n  getElement(unsigned int, osg::Matrixf &)\n  getElement(unsigned int, osg::Matrix2x3 &)\n  getElement(unsigned int, osg::Matrix2x4 &)\n  getElement(unsigned int, osg::Matrix3x2 &)\n  getElement(unsigned int, osg::Matrix3x4 &)\n  getElement(unsigned int, osg::Matrix4x2 &)\n  getElement(unsigned int, osg::Matrix4x3 &)\n  getElement(unsigned int, osg::Matrix2d &)\n  getElement(unsigned int, osg::Matrix3d &)\n  getElement(unsigned int, osg::Matrixd &)\n  getElement(unsigned int, osg::Matrix2x3d &)\n  getElement(unsigned int, osg::Matrix2x4d &)\n  getElement(unsigned int, osg::Matrix3x2d &)\n  getElement(unsigned int, osg::Matrix3x4d &)\n  getElement(unsigned int, osg::Matrix4x2d &)\n  getElement(unsigned int, osg::Matrix4x3d &)\n  getElement(unsigned int, int &, int &)\n  getElement(unsigned int, int &, int &, int &)\n  getElement(unsigned int, int &, int &, int &, int &)\n  getElement(unsigned int, unsigned int &, unsigned int &)\n  getElement(unsigned int, unsigned int &, unsigned int &, unsigned int &)\n  getElement(unsigned int, unsigned int &, unsigned int &, unsigned int &, unsigned int &)\n  getElement(unsigned int, bool &, bool &)\n  getElement(unsigned int, bool &, bool &, bool &)\n  getElement(unsigned int, bool &, bool &, bool &, bool &)\n");
		return 0;
	}

	// void osg::Uniform::setUpdateCallback(osg::Uniform::Callback * uc)
	static int _bind_setUpdateCallback(lua_State *L) {
		if (!_lg_typecheck_setUpdateCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Uniform::setUpdateCallback(osg::Uniform::Callback * uc) function, expected prototype:\nvoid osg::Uniform::setUpdateCallback(osg::Uniform::Callback * uc)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Uniform::Callback* uc=(Luna< osg::Referenced >::checkSubType< osg::Uniform::Callback >(L,2));

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Uniform::setUpdateCallback(osg::Uniform::Callback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setUpdateCallback(uc);

		return 0;
	}

	// osg::Uniform::Callback * osg::Uniform::getUpdateCallback()
	static int _bind_getUpdateCallback_overload_1(lua_State *L) {
		if (!_lg_typecheck_getUpdateCallback_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Callback * osg::Uniform::getUpdateCallback() function, expected prototype:\nosg::Uniform::Callback * osg::Uniform::getUpdateCallback()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Uniform::Callback * osg::Uniform::getUpdateCallback(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Uniform::Callback * lret = self->getUpdateCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Uniform::Callback >::push(L,lret,false);

		return 1;
	}

	// const osg::Uniform::Callback * osg::Uniform::getUpdateCallback() const
	static int _bind_getUpdateCallback_overload_2(lua_State *L) {
		if (!_lg_typecheck_getUpdateCallback_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Uniform::Callback * osg::Uniform::getUpdateCallback() const function, expected prototype:\nconst osg::Uniform::Callback * osg::Uniform::getUpdateCallback() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Uniform::Callback * osg::Uniform::getUpdateCallback() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Uniform::Callback * lret = self->getUpdateCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Uniform::Callback >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Uniform::getUpdateCallback
	static int _bind_getUpdateCallback(lua_State *L) {
		if (_lg_typecheck_getUpdateCallback_overload_1(L)) return _bind_getUpdateCallback_overload_1(L);
		if (_lg_typecheck_getUpdateCallback_overload_2(L)) return _bind_getUpdateCallback_overload_2(L);

		luaL_error(L, "error in function getUpdateCallback, cannot match any of the overloads for function getUpdateCallback:\n  getUpdateCallback()\n  getUpdateCallback()\n");
		return 0;
	}

	// void osg::Uniform::setEventCallback(osg::Uniform::Callback * ec)
	static int _bind_setEventCallback(lua_State *L) {
		if (!_lg_typecheck_setEventCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Uniform::setEventCallback(osg::Uniform::Callback * ec) function, expected prototype:\nvoid osg::Uniform::setEventCallback(osg::Uniform::Callback * ec)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Uniform::Callback* ec=(Luna< osg::Referenced >::checkSubType< osg::Uniform::Callback >(L,2));

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Uniform::setEventCallback(osg::Uniform::Callback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setEventCallback(ec);

		return 0;
	}

	// osg::Uniform::Callback * osg::Uniform::getEventCallback()
	static int _bind_getEventCallback_overload_1(lua_State *L) {
		if (!_lg_typecheck_getEventCallback_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform::Callback * osg::Uniform::getEventCallback() function, expected prototype:\nosg::Uniform::Callback * osg::Uniform::getEventCallback()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Uniform::Callback * osg::Uniform::getEventCallback(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Uniform::Callback * lret = self->getEventCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Uniform::Callback >::push(L,lret,false);

		return 1;
	}

	// const osg::Uniform::Callback * osg::Uniform::getEventCallback() const
	static int _bind_getEventCallback_overload_2(lua_State *L) {
		if (!_lg_typecheck_getEventCallback_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Uniform::Callback * osg::Uniform::getEventCallback() const function, expected prototype:\nconst osg::Uniform::Callback * osg::Uniform::getEventCallback() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Uniform::Callback * osg::Uniform::getEventCallback() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Uniform::Callback * lret = self->getEventCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Uniform::Callback >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Uniform::getEventCallback
	static int _bind_getEventCallback(lua_State *L) {
		if (_lg_typecheck_getEventCallback_overload_1(L)) return _bind_getEventCallback_overload_1(L);
		if (_lg_typecheck_getEventCallback_overload_2(L)) return _bind_getEventCallback_overload_2(L);

		luaL_error(L, "error in function getEventCallback, cannot match any of the overloads for function getEventCallback:\n  getEventCallback()\n  getEventCallback()\n");
		return 0;
	}

	// void osg::Uniform::dirty()
	static int _bind_dirty(lua_State *L) {
		if (!_lg_typecheck_dirty(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Uniform::dirty() function, expected prototype:\nvoid osg::Uniform::dirty()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Uniform::dirty(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->dirty();

		return 0;
	}

	// bool osg::Uniform::setArray(osg::FloatArray * array)
	static int _bind_setArray_overload_1(lua_State *L) {
		if (!_lg_typecheck_setArray_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::setArray(osg::FloatArray * array) function, expected prototype:\nbool osg::Uniform::setArray(osg::FloatArray * array)\nClass arguments details:\narg 1 ID = 43730923\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::FloatArray* array=(Luna< osg::TemplateArray< float, osg::Array::FloatArrayType, 1, GL_FLOAT > >::checkSubType< osg::FloatArray >(L,2));

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::setArray(osg::FloatArray *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->setArray(array);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::setArray(osg::DoubleArray * array)
	static int _bind_setArray_overload_2(lua_State *L) {
		if (!_lg_typecheck_setArray_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::setArray(osg::DoubleArray * array) function, expected prototype:\nbool osg::Uniform::setArray(osg::DoubleArray * array)\nClass arguments details:\narg 1 ID = 50192637\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::DoubleArray* array=(Luna< osg::TemplateArray< double, osg::Array::DoubleArrayType, 1, 0x140A > >::checkSubType< osg::DoubleArray >(L,2));

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::setArray(osg::DoubleArray *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->setArray(array);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::setArray(osg::IntArray * array)
	static int _bind_setArray_overload_3(lua_State *L) {
		if (!_lg_typecheck_setArray_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::setArray(osg::IntArray * array) function, expected prototype:\nbool osg::Uniform::setArray(osg::IntArray * array)\nClass arguments details:\narg 1 ID = 28130065\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::IntArray* array=(Luna< osg::TemplateIndexArray< int, osg::Array::IntArrayType, 1, 0x1404 > >::checkSubType< osg::IntArray >(L,2));

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::setArray(osg::IntArray *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->setArray(array);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::setArray(osg::UIntArray * array)
	static int _bind_setArray_overload_4(lua_State *L) {
		if (!_lg_typecheck_setArray_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::setArray(osg::UIntArray * array) function, expected prototype:\nbool osg::Uniform::setArray(osg::UIntArray * array)\nClass arguments details:\narg 1 ID = 86600648\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::UIntArray* array=(Luna< osg::TemplateIndexArray< unsigned int, osg::Array::UIntArrayType, 1, 0x1405 > >::checkSubType< osg::UIntArray >(L,2));

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::setArray(osg::UIntArray *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->setArray(array);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for osg::Uniform::setArray
	static int _bind_setArray(lua_State *L) {
		if (_lg_typecheck_setArray_overload_1(L)) return _bind_setArray_overload_1(L);
		if (_lg_typecheck_setArray_overload_2(L)) return _bind_setArray_overload_2(L);
		if (_lg_typecheck_setArray_overload_3(L)) return _bind_setArray_overload_3(L);
		if (_lg_typecheck_setArray_overload_4(L)) return _bind_setArray_overload_4(L);

		luaL_error(L, "error in function setArray, cannot match any of the overloads for function setArray:\n  setArray(osg::FloatArray *)\n  setArray(osg::DoubleArray *)\n  setArray(osg::IntArray *)\n  setArray(osg::UIntArray *)\n");
		return 0;
	}

	// osg::FloatArray * osg::Uniform::getFloatArray()
	static int _bind_getFloatArray_overload_1(lua_State *L) {
		if (!_lg_typecheck_getFloatArray_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::FloatArray * osg::Uniform::getFloatArray() function, expected prototype:\nosg::FloatArray * osg::Uniform::getFloatArray()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::FloatArray * osg::Uniform::getFloatArray(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::FloatArray * lret = self->getFloatArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::FloatArray >::push(L,lret,false);

		return 1;
	}

	// const osg::FloatArray * osg::Uniform::getFloatArray() const
	static int _bind_getFloatArray_overload_2(lua_State *L) {
		if (!_lg_typecheck_getFloatArray_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::FloatArray * osg::Uniform::getFloatArray() const function, expected prototype:\nconst osg::FloatArray * osg::Uniform::getFloatArray() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::FloatArray * osg::Uniform::getFloatArray() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::FloatArray * lret = self->getFloatArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::FloatArray >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Uniform::getFloatArray
	static int _bind_getFloatArray(lua_State *L) {
		if (_lg_typecheck_getFloatArray_overload_1(L)) return _bind_getFloatArray_overload_1(L);
		if (_lg_typecheck_getFloatArray_overload_2(L)) return _bind_getFloatArray_overload_2(L);

		luaL_error(L, "error in function getFloatArray, cannot match any of the overloads for function getFloatArray:\n  getFloatArray()\n  getFloatArray()\n");
		return 0;
	}

	// osg::DoubleArray * osg::Uniform::getDoubleArray()
	static int _bind_getDoubleArray_overload_1(lua_State *L) {
		if (!_lg_typecheck_getDoubleArray_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::DoubleArray * osg::Uniform::getDoubleArray() function, expected prototype:\nosg::DoubleArray * osg::Uniform::getDoubleArray()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::DoubleArray * osg::Uniform::getDoubleArray(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::DoubleArray * lret = self->getDoubleArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::DoubleArray >::push(L,lret,false);

		return 1;
	}

	// const osg::DoubleArray * osg::Uniform::getDoubleArray() const
	static int _bind_getDoubleArray_overload_2(lua_State *L) {
		if (!_lg_typecheck_getDoubleArray_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::DoubleArray * osg::Uniform::getDoubleArray() const function, expected prototype:\nconst osg::DoubleArray * osg::Uniform::getDoubleArray() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::DoubleArray * osg::Uniform::getDoubleArray() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::DoubleArray * lret = self->getDoubleArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::DoubleArray >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Uniform::getDoubleArray
	static int _bind_getDoubleArray(lua_State *L) {
		if (_lg_typecheck_getDoubleArray_overload_1(L)) return _bind_getDoubleArray_overload_1(L);
		if (_lg_typecheck_getDoubleArray_overload_2(L)) return _bind_getDoubleArray_overload_2(L);

		luaL_error(L, "error in function getDoubleArray, cannot match any of the overloads for function getDoubleArray:\n  getDoubleArray()\n  getDoubleArray()\n");
		return 0;
	}

	// osg::IntArray * osg::Uniform::getIntArray()
	static int _bind_getIntArray_overload_1(lua_State *L) {
		if (!_lg_typecheck_getIntArray_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::IntArray * osg::Uniform::getIntArray() function, expected prototype:\nosg::IntArray * osg::Uniform::getIntArray()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::IntArray * osg::Uniform::getIntArray(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::IntArray * lret = self->getIntArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::IntArray >::push(L,lret,false);

		return 1;
	}

	// const osg::IntArray * osg::Uniform::getIntArray() const
	static int _bind_getIntArray_overload_2(lua_State *L) {
		if (!_lg_typecheck_getIntArray_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::IntArray * osg::Uniform::getIntArray() const function, expected prototype:\nconst osg::IntArray * osg::Uniform::getIntArray() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::IntArray * osg::Uniform::getIntArray() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::IntArray * lret = self->getIntArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::IntArray >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Uniform::getIntArray
	static int _bind_getIntArray(lua_State *L) {
		if (_lg_typecheck_getIntArray_overload_1(L)) return _bind_getIntArray_overload_1(L);
		if (_lg_typecheck_getIntArray_overload_2(L)) return _bind_getIntArray_overload_2(L);

		luaL_error(L, "error in function getIntArray, cannot match any of the overloads for function getIntArray:\n  getIntArray()\n  getIntArray()\n");
		return 0;
	}

	// osg::UIntArray * osg::Uniform::getUIntArray()
	static int _bind_getUIntArray_overload_1(lua_State *L) {
		if (!_lg_typecheck_getUIntArray_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::UIntArray * osg::Uniform::getUIntArray() function, expected prototype:\nosg::UIntArray * osg::Uniform::getUIntArray()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::UIntArray * osg::Uniform::getUIntArray(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::UIntArray * lret = self->getUIntArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::UIntArray >::push(L,lret,false);

		return 1;
	}

	// const osg::UIntArray * osg::Uniform::getUIntArray() const
	static int _bind_getUIntArray_overload_2(lua_State *L) {
		if (!_lg_typecheck_getUIntArray_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::UIntArray * osg::Uniform::getUIntArray() const function, expected prototype:\nconst osg::UIntArray * osg::Uniform::getUIntArray() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::UIntArray * osg::Uniform::getUIntArray() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::UIntArray * lret = self->getUIntArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::UIntArray >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Uniform::getUIntArray
	static int _bind_getUIntArray(lua_State *L) {
		if (_lg_typecheck_getUIntArray_overload_1(L)) return _bind_getUIntArray_overload_1(L);
		if (_lg_typecheck_getUIntArray_overload_2(L)) return _bind_getUIntArray_overload_2(L);

		luaL_error(L, "error in function getUIntArray, cannot match any of the overloads for function getUIntArray:\n  getUIntArray()\n  getUIntArray()\n");
		return 0;
	}

	// void osg::Uniform::setModifiedCount(unsigned int mc)
	static int _bind_setModifiedCount(lua_State *L) {
		if (!_lg_typecheck_setModifiedCount(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Uniform::setModifiedCount(unsigned int mc) function, expected prototype:\nvoid osg::Uniform::setModifiedCount(unsigned int mc)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int mc=(unsigned int)lua_tointeger(L,2);

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Uniform::setModifiedCount(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setModifiedCount(mc);

		return 0;
	}

	// unsigned int osg::Uniform::getModifiedCount() const
	static int _bind_getModifiedCount(lua_State *L) {
		if (!_lg_typecheck_getModifiedCount(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Uniform::getModifiedCount() const function, expected prototype:\nunsigned int osg::Uniform::getModifiedCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Uniform::getModifiedCount() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getModifiedCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::Uniform::getNameID() const
	static int _bind_getNameID_overload_1(lua_State *L) {
		if (!_lg_typecheck_getNameID_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Uniform::getNameID() const function, expected prototype:\nunsigned int osg::Uniform::getNameID() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Uniform::getNameID() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getNameID();
		lua_pushnumber(L,lret);

		return 1;
	}

	// static unsigned int osg::Uniform::getNameID(const std::string & name)
	static int _bind_getNameID_overload_2(lua_State *L) {
		if (!_lg_typecheck_getNameID_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in static unsigned int osg::Uniform::getNameID(const std::string & name) function, expected prototype:\nstatic unsigned int osg::Uniform::getNameID(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,1),lua_objlen(L,1));

		unsigned int lret = osg::Uniform::getNameID(name);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Uniform::getNameID
	static int _bind_getNameID(lua_State *L) {
		if (_lg_typecheck_getNameID_overload_1(L)) return _bind_getNameID_overload_1(L);
		if (_lg_typecheck_getNameID_overload_2(L)) return _bind_getNameID_overload_2(L);

		luaL_error(L, "error in function getNameID, cannot match any of the overloads for function getNameID:\n  getNameID()\n  getNameID(const std::string &)\n");
		return 0;
	}

	// void osg::Uniform::apply(const osg::GL2Extensions * ext, int location) const
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Uniform::apply(const osg::GL2Extensions * ext, int location) const function, expected prototype:\nvoid osg::Uniform::apply(const osg::GL2Extensions * ext, int location) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::GL2Extensions* ext=(Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,2));
		int location=(int)lua_tointeger(L,3);

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Uniform::apply(const osg::GL2Extensions *, int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(ext, location);

		return 0;
	}

	// static const char * osg::Uniform::getTypename(osg::Uniform::Type t)
	static int _bind_getTypename(lua_State *L) {
		if (!_lg_typecheck_getTypename(L)) {
			luaL_error(L, "luna typecheck failed in static const char * osg::Uniform::getTypename(osg::Uniform::Type t) function, expected prototype:\nstatic const char * osg::Uniform::getTypename(osg::Uniform::Type t)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Uniform::Type t=(osg::Uniform::Type)lua_tointeger(L,1);

		const char * lret = osg::Uniform::getTypename(t);
		lua_pushstring(L,lret);

		return 1;
	}

	// static int osg::Uniform::getTypeNumComponents(osg::Uniform::Type t)
	static int _bind_getTypeNumComponents(lua_State *L) {
		if (!_lg_typecheck_getTypeNumComponents(L)) {
			luaL_error(L, "luna typecheck failed in static int osg::Uniform::getTypeNumComponents(osg::Uniform::Type t) function, expected prototype:\nstatic int osg::Uniform::getTypeNumComponents(osg::Uniform::Type t)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Uniform::Type t=(osg::Uniform::Type)lua_tointeger(L,1);

		int lret = osg::Uniform::getTypeNumComponents(t);
		lua_pushnumber(L,lret);

		return 1;
	}

	// static osg::Uniform::Type osg::Uniform::getTypeId(const std::string & tname)
	static int _bind_getTypeId(lua_State *L) {
		if (!_lg_typecheck_getTypeId(L)) {
			luaL_error(L, "luna typecheck failed in static osg::Uniform::Type osg::Uniform::getTypeId(const std::string & tname) function, expected prototype:\nstatic osg::Uniform::Type osg::Uniform::getTypeId(const std::string & tname)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string tname(lua_tostring(L,1),lua_objlen(L,1));

		osg::Uniform::Type lret = osg::Uniform::getTypeId(tname);
		lua_pushnumber(L,lret);

		return 1;
	}

	// static osg::Uniform::Type osg::Uniform::getGlApiType(osg::Uniform::Type t)
	static int _bind_getGlApiType(lua_State *L) {
		if (!_lg_typecheck_getGlApiType(L)) {
			luaL_error(L, "luna typecheck failed in static osg::Uniform::Type osg::Uniform::getGlApiType(osg::Uniform::Type t) function, expected prototype:\nstatic osg::Uniform::Type osg::Uniform::getGlApiType(osg::Uniform::Type t)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Uniform::Type t=(osg::Uniform::Type)lua_tointeger(L,1);

		osg::Uniform::Type lret = osg::Uniform::getGlApiType(t);
		lua_pushnumber(L,lret);

		return 1;
	}

	// static unsigned int osg::Uniform::getInternalArrayType(osg::Uniform::Type t)
	static int _bind_getInternalArrayType(lua_State *L) {
		if (!_lg_typecheck_getInternalArrayType(L)) {
			luaL_error(L, "luna typecheck failed in static unsigned int osg::Uniform::getInternalArrayType(osg::Uniform::Type t) function, expected prototype:\nstatic unsigned int osg::Uniform::getInternalArrayType(osg::Uniform::Type t)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Uniform::Type t=(osg::Uniform::Type)lua_tointeger(L,1);

		unsigned int lret = osg::Uniform::getInternalArrayType(t);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Uniform::setInt(osg::Uniform * unif, int val)
	static int _bind_setInt(lua_State *L) {
		if (!_lg_typecheck_setInt(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Uniform::setInt(osg::Uniform * unif, int val) function, expected prototype:\nvoid osg::Uniform::setInt(osg::Uniform * unif, int val)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Uniform* unif=(Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1));
		int val=(int)lua_tointeger(L,2);

		setInt(unif, val);

		return 0;
	}

	// void osg::Uniform::setFloat(osg::Uniform * unif, float val)
	static int _bind_setFloat(lua_State *L) {
		if (!_lg_typecheck_setFloat(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Uniform::setFloat(osg::Uniform * unif, float val) function, expected prototype:\nvoid osg::Uniform::setFloat(osg::Uniform * unif, float val)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Uniform* unif=(Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1));
		float val=(float)lua_tonumber(L,2);

		setFloat(unif, val);

		return 0;
	}

	// void osg::Uniform::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Uniform::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::Uniform::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Uniform::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Uniform::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::Uniform::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Uniform::base_computeDataVariance() function, expected prototype:\nvoid osg::Uniform::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Uniform::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Uniform::computeDataVariance();

		return 0;
	}

	// void osg::Uniform::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Uniform::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::Uniform::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Uniform::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Uniform::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::Uniform::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::Uniform::base_getUserData() function, expected prototype:\nosg::Referenced * osg::Uniform::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::Uniform::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->Uniform::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::Uniform::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::Uniform::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::Uniform::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::Uniform::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->Uniform::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Uniform::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osg::Uniform::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Uniform::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::Uniform::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Uniform::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Uniform::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osg::Uniform::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Uniform::base_cloneType() const function, expected prototype:\nosg::Object * osg::Uniform::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Uniform::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->Uniform::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Uniform::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Uniform::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::Uniform::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Uniform::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Uniform::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->Uniform::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Uniform::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Uniform::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Uniform::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Uniform::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Uniform::base_libraryName() const function, expected prototype:\nconst char * osg::Uniform::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Uniform::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Uniform::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Uniform::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Uniform::base_className() const function, expected prototype:\nconst char * osg::Uniform::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Uniform::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Uniform::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::Uniform::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Uniform::base_setName(const std::string & name) function, expected prototype:\nvoid osg::Uniform::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Uniform::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Uniform::setName(name);

		return 0;
	}

	// int osg::Uniform::base_compare(const osg::Uniform & rhs) const
	static int _bind_base_compare(lua_State *L) {
		if (!_lg_typecheck_base_compare(L)) {
			luaL_error(L, "luna typecheck failed in int osg::Uniform::base_compare(const osg::Uniform & rhs) const function, expected prototype:\nint osg::Uniform::base_compare(const osg::Uniform & rhs) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Uniform* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Uniform::base_compare function");
		}
		const osg::Uniform & rhs=*rhs_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::Uniform::base_compare(const osg::Uniform &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->Uniform::compare(rhs);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Uniform::base_compareData(const osg::Uniform & rhs) const
	static int _bind_base_compareData(lua_State *L) {
		if (!_lg_typecheck_base_compareData(L)) {
			luaL_error(L, "luna typecheck failed in int osg::Uniform::base_compareData(const osg::Uniform & rhs) const function, expected prototype:\nint osg::Uniform::base_compareData(const osg::Uniform & rhs) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Uniform* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Uniform::base_compareData function");
		}
		const osg::Uniform & rhs=*rhs_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::Uniform::base_compareData(const osg::Uniform &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->Uniform::compareData(rhs);
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:
	// bool osg::Uniform::operator<(const osg::Uniform & rhs) const
	static int _bind___lt(lua_State *L) {
		if (!_lg_typecheck___lt(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::operator<(const osg::Uniform & rhs) const function, expected prototype:\nbool osg::Uniform::operator<(const osg::Uniform & rhs) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Uniform* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Uniform::operator< function");
		}
		const osg::Uniform & rhs=*rhs_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::operator<(const osg::Uniform &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator<(rhs);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::operator==(const osg::Uniform & rhs) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::operator==(const osg::Uniform & rhs) const function, expected prototype:\nbool osg::Uniform::operator==(const osg::Uniform & rhs) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Uniform* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Uniform::operator== function");
		}
		const osg::Uniform & rhs=*rhs_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::operator==(const osg::Uniform &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator==(rhs);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::operator!=(const osg::Uniform & rhs) const
	static int _bind_op_neq(lua_State *L) {
		if (!_lg_typecheck_op_neq(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::operator!=(const osg::Uniform & rhs) const function, expected prototype:\nbool osg::Uniform::operator!=(const osg::Uniform & rhs) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Uniform* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Uniform::operator!= function");
		}
		const osg::Uniform & rhs=*rhs_ptr;

		osg::Uniform* self=Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Uniform::operator!=(const osg::Uniform &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator!=(rhs);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

osg::Uniform* LunaTraits< osg::Uniform >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Uniform::_bind_ctor(L);
}

void LunaTraits< osg::Uniform >::_bind_dtor(osg::Uniform* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Uniform >::className[] = "Uniform";
const char LunaTraits< osg::Uniform >::fullName[] = "osg::Uniform";
const char LunaTraits< osg::Uniform >::moduleName[] = "osg";
const char* LunaTraits< osg::Uniform >::parents[] = {"osg.Object", 0};
const int LunaTraits< osg::Uniform >::hash = 80600789;
const int LunaTraits< osg::Uniform >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Uniform >::methods[] = {
	{"cloneType", &luna_wrapper_osg_Uniform::_bind_cloneType},
	{"clone", &luna_wrapper_osg_Uniform::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_Uniform::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_Uniform::_bind_libraryName},
	{"className", &luna_wrapper_osg_Uniform::_bind_className},
	{"setType", &luna_wrapper_osg_Uniform::_bind_setType},
	{"getType", &luna_wrapper_osg_Uniform::_bind_getType},
	{"setName", &luna_wrapper_osg_Uniform::_bind_setName},
	{"setNumElements", &luna_wrapper_osg_Uniform::_bind_setNumElements},
	{"getNumElements", &luna_wrapper_osg_Uniform::_bind_getNumElements},
	{"getInternalArrayNumElements", &luna_wrapper_osg_Uniform::_bind_getInternalArrayNumElements},
	{"compare", &luna_wrapper_osg_Uniform::_bind_compare},
	{"compareData", &luna_wrapper_osg_Uniform::_bind_compareData},
	{"copyData", &luna_wrapper_osg_Uniform::_bind_copyData},
	{"getParents", &luna_wrapper_osg_Uniform::_bind_getParents},
	{"getParent", &luna_wrapper_osg_Uniform::_bind_getParent},
	{"getNumParents", &luna_wrapper_osg_Uniform::_bind_getNumParents},
	{"set", &luna_wrapper_osg_Uniform::_bind_set},
	{"get", &luna_wrapper_osg_Uniform::_bind_get},
	{"setElement", &luna_wrapper_osg_Uniform::_bind_setElement},
	{"getElement", &luna_wrapper_osg_Uniform::_bind_getElement},
	{"setUpdateCallback", &luna_wrapper_osg_Uniform::_bind_setUpdateCallback},
	{"getUpdateCallback", &luna_wrapper_osg_Uniform::_bind_getUpdateCallback},
	{"setEventCallback", &luna_wrapper_osg_Uniform::_bind_setEventCallback},
	{"getEventCallback", &luna_wrapper_osg_Uniform::_bind_getEventCallback},
	{"dirty", &luna_wrapper_osg_Uniform::_bind_dirty},
	{"setArray", &luna_wrapper_osg_Uniform::_bind_setArray},
	{"getFloatArray", &luna_wrapper_osg_Uniform::_bind_getFloatArray},
	{"getDoubleArray", &luna_wrapper_osg_Uniform::_bind_getDoubleArray},
	{"getIntArray", &luna_wrapper_osg_Uniform::_bind_getIntArray},
	{"getUIntArray", &luna_wrapper_osg_Uniform::_bind_getUIntArray},
	{"setModifiedCount", &luna_wrapper_osg_Uniform::_bind_setModifiedCount},
	{"getModifiedCount", &luna_wrapper_osg_Uniform::_bind_getModifiedCount},
	{"getNameID", &luna_wrapper_osg_Uniform::_bind_getNameID},
	{"apply", &luna_wrapper_osg_Uniform::_bind_apply},
	{"getTypename", &luna_wrapper_osg_Uniform::_bind_getTypename},
	{"getTypeNumComponents", &luna_wrapper_osg_Uniform::_bind_getTypeNumComponents},
	{"getTypeId", &luna_wrapper_osg_Uniform::_bind_getTypeId},
	{"getGlApiType", &luna_wrapper_osg_Uniform::_bind_getGlApiType},
	{"getInternalArrayType", &luna_wrapper_osg_Uniform::_bind_getInternalArrayType},
	{"setInt", &luna_wrapper_osg_Uniform::_bind_setInt},
	{"setFloat", &luna_wrapper_osg_Uniform::_bind_setFloat},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_Uniform::_bind_base_setThreadSafeRefUnref},
	{"base_computeDataVariance", &luna_wrapper_osg_Uniform::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_Uniform::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_Uniform::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osg_Uniform::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osg_Uniform::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_Uniform::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_Uniform::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_Uniform::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_Uniform::_bind_base_className},
	{"base_setName", &luna_wrapper_osg_Uniform::_bind_base_setName},
	{"base_compare", &luna_wrapper_osg_Uniform::_bind_base_compare},
	{"base_compareData", &luna_wrapper_osg_Uniform::_bind_base_compareData},
	{"__lt", &luna_wrapper_osg_Uniform::_bind___lt},
	{"__eq", &luna_wrapper_osg_Uniform::_bind___eq},
	{"op_neq", &luna_wrapper_osg_Uniform::_bind_op_neq},
	{"fromVoid", &luna_wrapper_osg_Uniform::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_Uniform::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_Uniform::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Uniform >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Uniform::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Uniform >::enumValues[] = {
	{"FLOAT", osg::Uniform::FLOAT},
	{"FLOAT_VEC2", osg::Uniform::FLOAT_VEC2},
	{"FLOAT_VEC3", osg::Uniform::FLOAT_VEC3},
	{"FLOAT_VEC4", osg::Uniform::FLOAT_VEC4},
	{"DOUBLE", osg::Uniform::DOUBLE},
	{"DOUBLE_VEC2", osg::Uniform::DOUBLE_VEC2},
	{"DOUBLE_VEC3", osg::Uniform::DOUBLE_VEC3},
	{"DOUBLE_VEC4", osg::Uniform::DOUBLE_VEC4},
	{"INT", osg::Uniform::INT},
	{"INT_VEC2", osg::Uniform::INT_VEC2},
	{"INT_VEC3", osg::Uniform::INT_VEC3},
	{"INT_VEC4", osg::Uniform::INT_VEC4},
	{"UNSIGNED_INT", osg::Uniform::UNSIGNED_INT},
	{"UNSIGNED_INT_VEC2", osg::Uniform::UNSIGNED_INT_VEC2},
	{"UNSIGNED_INT_VEC3", osg::Uniform::UNSIGNED_INT_VEC3},
	{"UNSIGNED_INT_VEC4", osg::Uniform::UNSIGNED_INT_VEC4},
	{"BOOL", osg::Uniform::BOOL},
	{"BOOL_VEC2", osg::Uniform::BOOL_VEC2},
	{"BOOL_VEC3", osg::Uniform::BOOL_VEC3},
	{"BOOL_VEC4", osg::Uniform::BOOL_VEC4},
	{"FLOAT_MAT2", osg::Uniform::FLOAT_MAT2},
	{"FLOAT_MAT3", osg::Uniform::FLOAT_MAT3},
	{"FLOAT_MAT4", osg::Uniform::FLOAT_MAT4},
	{"FLOAT_MAT2x3", osg::Uniform::FLOAT_MAT2x3},
	{"FLOAT_MAT2x4", osg::Uniform::FLOAT_MAT2x4},
	{"FLOAT_MAT3x2", osg::Uniform::FLOAT_MAT3x2},
	{"FLOAT_MAT3x4", osg::Uniform::FLOAT_MAT3x4},
	{"FLOAT_MAT4x2", osg::Uniform::FLOAT_MAT4x2},
	{"FLOAT_MAT4x3", osg::Uniform::FLOAT_MAT4x3},
	{"DOUBLE_MAT2", osg::Uniform::DOUBLE_MAT2},
	{"DOUBLE_MAT3", osg::Uniform::DOUBLE_MAT3},
	{"DOUBLE_MAT4", osg::Uniform::DOUBLE_MAT4},
	{"DOUBLE_MAT2x3", osg::Uniform::DOUBLE_MAT2x3},
	{"DOUBLE_MAT2x4", osg::Uniform::DOUBLE_MAT2x4},
	{"DOUBLE_MAT3x2", osg::Uniform::DOUBLE_MAT3x2},
	{"DOUBLE_MAT3x4", osg::Uniform::DOUBLE_MAT3x4},
	{"DOUBLE_MAT4x2", osg::Uniform::DOUBLE_MAT4x2},
	{"DOUBLE_MAT4x3", osg::Uniform::DOUBLE_MAT4x3},
	{"SAMPLER_1D", osg::Uniform::SAMPLER_1D},
	{"SAMPLER_2D", osg::Uniform::SAMPLER_2D},
	{"SAMPLER_3D", osg::Uniform::SAMPLER_3D},
	{"SAMPLER_CUBE", osg::Uniform::SAMPLER_CUBE},
	{"SAMPLER_1D_SHADOW", osg::Uniform::SAMPLER_1D_SHADOW},
	{"SAMPLER_2D_SHADOW", osg::Uniform::SAMPLER_2D_SHADOW},
	{"SAMPLER_1D_ARRAY", osg::Uniform::SAMPLER_1D_ARRAY},
	{"SAMPLER_2D_ARRAY", osg::Uniform::SAMPLER_2D_ARRAY},
	{"SAMPLER_CUBE_MAP_ARRAY", osg::Uniform::SAMPLER_CUBE_MAP_ARRAY},
	{"SAMPLER_1D_ARRAY_SHADOW", osg::Uniform::SAMPLER_1D_ARRAY_SHADOW},
	{"SAMPLER_2D_ARRAY_SHADOW", osg::Uniform::SAMPLER_2D_ARRAY_SHADOW},
	{"SAMPLER_2D_MULTISAMPLE", osg::Uniform::SAMPLER_2D_MULTISAMPLE},
	{"SAMPLER_2D_MULTISAMPLE_ARRAY", osg::Uniform::SAMPLER_2D_MULTISAMPLE_ARRAY},
	{"SAMPLER_CUBE_SHADOW", osg::Uniform::SAMPLER_CUBE_SHADOW},
	{"SAMPLER_CUBE_MAP_ARRAY_SHADOW", osg::Uniform::SAMPLER_CUBE_MAP_ARRAY_SHADOW},
	{"SAMPLER_BUFFER", osg::Uniform::SAMPLER_BUFFER},
	{"SAMPLER_2D_RECT", osg::Uniform::SAMPLER_2D_RECT},
	{"SAMPLER_2D_RECT_SHADOW", osg::Uniform::SAMPLER_2D_RECT_SHADOW},
	{"INT_SAMPLER_1D", osg::Uniform::INT_SAMPLER_1D},
	{"INT_SAMPLER_2D", osg::Uniform::INT_SAMPLER_2D},
	{"INT_SAMPLER_3D", osg::Uniform::INT_SAMPLER_3D},
	{"INT_SAMPLER_CUBE", osg::Uniform::INT_SAMPLER_CUBE},
	{"INT_SAMPLER_1D_ARRAY", osg::Uniform::INT_SAMPLER_1D_ARRAY},
	{"INT_SAMPLER_2D_ARRAY", osg::Uniform::INT_SAMPLER_2D_ARRAY},
	{"INT_SAMPLER_CUBE_MAP_ARRAY", osg::Uniform::INT_SAMPLER_CUBE_MAP_ARRAY},
	{"INT_SAMPLER_2D_MULTISAMPLE", osg::Uniform::INT_SAMPLER_2D_MULTISAMPLE},
	{"INT_SAMPLER_2D_MULTISAMPLE_ARRAY", osg::Uniform::INT_SAMPLER_2D_MULTISAMPLE_ARRAY},
	{"INT_SAMPLER_BUFFER", osg::Uniform::INT_SAMPLER_BUFFER},
	{"INT_SAMPLER_2D_RECT", osg::Uniform::INT_SAMPLER_2D_RECT},
	{"UNSIGNED_INT_SAMPLER_1D", osg::Uniform::UNSIGNED_INT_SAMPLER_1D},
	{"UNSIGNED_INT_SAMPLER_2D", osg::Uniform::UNSIGNED_INT_SAMPLER_2D},
	{"UNSIGNED_INT_SAMPLER_3D", osg::Uniform::UNSIGNED_INT_SAMPLER_3D},
	{"UNSIGNED_INT_SAMPLER_CUBE", osg::Uniform::UNSIGNED_INT_SAMPLER_CUBE},
	{"UNSIGNED_INT_SAMPLER_1D_ARRAY", osg::Uniform::UNSIGNED_INT_SAMPLER_1D_ARRAY},
	{"UNSIGNED_INT_SAMPLER_2D_ARRAY", osg::Uniform::UNSIGNED_INT_SAMPLER_2D_ARRAY},
	{"UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY", osg::Uniform::UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY},
	{"UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE", osg::Uniform::UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE},
	{"UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY", osg::Uniform::UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY},
	{"UNSIGNED_INT_SAMPLER_BUFFER", osg::Uniform::UNSIGNED_INT_SAMPLER_BUFFER},
	{"UNSIGNED_INT_SAMPLER_2D_RECT", osg::Uniform::UNSIGNED_INT_SAMPLER_2D_RECT},
	{"IMAGE_1D", osg::Uniform::IMAGE_1D},
	{"IMAGE_2D", osg::Uniform::IMAGE_2D},
	{"IMAGE_3D", osg::Uniform::IMAGE_3D},
	{"IMAGE_2D_RECT", osg::Uniform::IMAGE_2D_RECT},
	{"IMAGE_CUBE", osg::Uniform::IMAGE_CUBE},
	{"IMAGE_BUFFER", osg::Uniform::IMAGE_BUFFER},
	{"IMAGE_1D_ARRAY", osg::Uniform::IMAGE_1D_ARRAY},
	{"IMAGE_2D_ARRAY", osg::Uniform::IMAGE_2D_ARRAY},
	{"IMAGE_CUBE_MAP_ARRAY", osg::Uniform::IMAGE_CUBE_MAP_ARRAY},
	{"IMAGE_2D_MULTISAMPLE", osg::Uniform::IMAGE_2D_MULTISAMPLE},
	{"IMAGE_2D_MULTISAMPLE_ARRAY", osg::Uniform::IMAGE_2D_MULTISAMPLE_ARRAY},
	{"INT_IMAGE_1D", osg::Uniform::INT_IMAGE_1D},
	{"INT_IMAGE_2D", osg::Uniform::INT_IMAGE_2D},
	{"INT_IMAGE_3D", osg::Uniform::INT_IMAGE_3D},
	{"INT_IMAGE_2D_RECT", osg::Uniform::INT_IMAGE_2D_RECT},
	{"INT_IMAGE_CUBE", osg::Uniform::INT_IMAGE_CUBE},
	{"INT_IMAGE_BUFFER", osg::Uniform::INT_IMAGE_BUFFER},
	{"INT_IMAGE_1D_ARRAY", osg::Uniform::INT_IMAGE_1D_ARRAY},
	{"INT_IMAGE_2D_ARRAY", osg::Uniform::INT_IMAGE_2D_ARRAY},
	{"INT_IMAGE_CUBE_MAP_ARRAY", osg::Uniform::INT_IMAGE_CUBE_MAP_ARRAY},
	{"INT_IMAGE_2D_MULTISAMPLE", osg::Uniform::INT_IMAGE_2D_MULTISAMPLE},
	{"INT_IMAGE_2D_MULTISAMPLE_ARRAY", osg::Uniform::INT_IMAGE_2D_MULTISAMPLE_ARRAY},
	{"UNSIGNED_INT_IMAGE_1D", osg::Uniform::UNSIGNED_INT_IMAGE_1D},
	{"UNSIGNED_INT_IMAGE_2D", osg::Uniform::UNSIGNED_INT_IMAGE_2D},
	{"UNSIGNED_INT_IMAGE_3D", osg::Uniform::UNSIGNED_INT_IMAGE_3D},
	{"UNSIGNED_INT_IMAGE_2D_RECT", osg::Uniform::UNSIGNED_INT_IMAGE_2D_RECT},
	{"UNSIGNED_INT_IMAGE_CUBE", osg::Uniform::UNSIGNED_INT_IMAGE_CUBE},
	{"UNSIGNED_INT_IMAGE_BUFFER", osg::Uniform::UNSIGNED_INT_IMAGE_BUFFER},
	{"UNSIGNED_INT_IMAGE_1D_ARRAY", osg::Uniform::UNSIGNED_INT_IMAGE_1D_ARRAY},
	{"UNSIGNED_INT_IMAGE_2D_ARRAY", osg::Uniform::UNSIGNED_INT_IMAGE_2D_ARRAY},
	{"UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY", osg::Uniform::UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY},
	{"UNSIGNED_INT_IMAGE_2D_MULTISAMPLE", osg::Uniform::UNSIGNED_INT_IMAGE_2D_MULTISAMPLE},
	{"UNSIGNED_INT_IMAGE_2D_MULTISAMPLE_ARRAY", osg::Uniform::UNSIGNED_INT_IMAGE_2D_MULTISAMPLE_ARRAY},
	{"UNDEFINED", osg::Uniform::UNDEFINED},
	{0,0}
};


