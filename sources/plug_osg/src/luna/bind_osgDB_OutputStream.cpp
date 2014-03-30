#include <plug_common.h>

#include <luna/wrappers/wrapper_osgDB_OutputStream.h>

class luna_wrapper_osgDB_OutputStream {
public:
	typedef Luna< osgDB::OutputStream > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<osgDB::OutputStream,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,70071506) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgDB::OutputStream*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::OutputStream* rhs =(Luna< osgDB::OutputStream >::check(L,2));
		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
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

		osgDB::OutputStream* self= (osgDB::OutputStream*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgDB::OutputStream >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,70071506) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgDB::OutputStream");
		
		return luna_dynamicCast(L,converters,"osgDB::OutputStream",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,1)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,2)) ) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_isBinary(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSchemaName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOptions(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setWriteImageHint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getWriteImageHint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_writeWrappedString(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeCharArray(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeArray(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writePrimitiveSet(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeImage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeObject(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeObjectFields(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setOutputIterator(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_start(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_compress(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,2993706)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeSchema(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2993706) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeDouble(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,70071506) ) return false;
		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeInt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,70071506) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeString(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,70071506) ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeBool(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,70071506) ) return false;
		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeProperty(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,70071506) ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeMatrixd(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,70071506) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeVec2d(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,70071506) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,92303171) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeVec2f(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,70071506) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,92303173) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeVec3d(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,70071506) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeVec3f(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,70071506) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeVec4d(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,70071506) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,92303233) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeVec4f(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,70071506) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,92303235) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeQuat(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,70071506) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,80263306) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_endl(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,70071506) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_useHexMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,70071506) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_useDecMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,70071506) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_beginBracket(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,70071506) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_endBracket(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,70071506) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPROPERTY(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_END_BRACKET(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPROPERTY(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,23791141) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_END_BRACKET(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,60066730) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 40 valid operators)
	inline static bool _lg_typecheck_op_write_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_write_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_write_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_write_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_write_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_write_overload_6(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_write_overload_7(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_write_overload_8(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_write_overload_9(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_write_overload_10(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_write_overload_11(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_write_overload_12(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_write_overload_13(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_write_overload_14(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,32567652) ) return false;
		if( (!(Luna< osgDB::ObjectGLenum >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_write_overload_15(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,23791141) ) return false;
		if( (!(Luna< osgDB::ObjectProperty >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_write_overload_16(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,60066730) ) return false;
		if( (!(Luna< osgDB::ObjectMark >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_write_overload_17(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303169) ) return false;
		if( (!(Luna< osg::Vec2b >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_write_overload_18(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303200) ) return false;
		if( (!(Luna< osg::Vec3b >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_write_overload_19(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303231) ) return false;
		if( (!(Luna< osg::Vec4b >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_write_overload_20(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,61400540) ) return false;
		if( (!(Luna< osg::Vec4ub >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_write_overload_21(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303186) ) return false;
		if( (!(Luna< osg::Vec2s >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_write_overload_22(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303217) ) return false;
		if( (!(Luna< osg::Vec3s >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_write_overload_23(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303248) ) return false;
		if( (!(Luna< osg::Vec4s >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_write_overload_24(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303173) ) return false;
		if( (!(Luna< osg::Vec2f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_write_overload_25(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_write_overload_26(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303235) ) return false;
		if( (!(Luna< osg::Vec4f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_write_overload_27(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303171) ) return false;
		if( (!(Luna< osg::Vec2d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_write_overload_28(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_write_overload_29(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303233) ) return false;
		if( (!(Luna< osg::Vec4d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_write_overload_30(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,80263306) ) return false;
		if( (!(Luna< osg::Quat >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_write_overload_31(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,86970521) ) return false;
		if( (!(Luna< osg::Plane >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_write_overload_32(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903840) ) return false;
		if( (!(Luna< osg::Matrixf >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_write_overload_33(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		if( (!(Luna< osg::Matrixd >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_write_overload_34(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Array >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_write_overload_35(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Image >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_write_overload_36(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::PrimitiveSet >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_write_overload_37(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_write_overload_38(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,74215671) ) return false;
		if( (!(Luna< osg::ref_ptr< osg::Array > >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_write_overload_39(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,15557275) ) return false;
		if( (!(Luna< osg::ref_ptr< osg::Image > >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_write_overload_40(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,88770621) ) return false;
		if( (!(Luna< osg::ref_ptr< osg::PrimitiveSet > >::check(L,2))) ) return false;
		return true;
	}


	// Constructor binds:
	// osgDB::OutputStream::OutputStream(const osgDB::Options * options)
	static osgDB::OutputStream* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::OutputStream::OutputStream(const osgDB::Options * options) function, expected prototype:\nosgDB::OutputStream::OutputStream(const osgDB::Options * options)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,1));

		return new osgDB::OutputStream(options);
	}

	// osgDB::OutputStream::OutputStream(lua_Table * data, const osgDB::Options * options)
	static osgDB::OutputStream* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::OutputStream::OutputStream(lua_Table * data, const osgDB::Options * options) function, expected prototype:\nosgDB::OutputStream::OutputStream(lua_Table * data, const osgDB::Options * options)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,2));

		return new wrapper_osgDB_OutputStream(L,NULL, options);
	}

	// Overload binder for osgDB::OutputStream::OutputStream
	static osgDB::OutputStream* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function OutputStream, cannot match any of the overloads for function OutputStream:\n  OutputStream(const osgDB::Options *)\n  OutputStream(lua_Table *, const osgDB::Options *)\n");
		return NULL;
	}


	// Function binds:
	// bool osgDB::OutputStream::isBinary() const
	static int _bind_isBinary(lua_State *L) {
		if (!_lg_typecheck_isBinary(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::OutputStream::isBinary() const function, expected prototype:\nbool osgDB::OutputStream::isBinary() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::OutputStream::isBinary() const. Got : '%s'\n%s",typeid(Luna< osgDB::OutputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isBinary();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const std::string & osgDB::OutputStream::getSchemaName() const
	static int _bind_getSchemaName(lua_State *L) {
		if (!_lg_typecheck_getSchemaName(L)) {
			luaL_error(L, "luna typecheck failed in const std::string & osgDB::OutputStream::getSchemaName() const function, expected prototype:\nconst std::string & osgDB::OutputStream::getSchemaName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const std::string & osgDB::OutputStream::getSchemaName() const. Got : '%s'\n%s",typeid(Luna< osgDB::OutputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const std::string & lret = self->getSchemaName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// const osgDB::Options * osgDB::OutputStream::getOptions() const
	static int _bind_getOptions(lua_State *L) {
		if (!_lg_typecheck_getOptions(L)) {
			luaL_error(L, "luna typecheck failed in const osgDB::Options * osgDB::OutputStream::getOptions() const function, expected prototype:\nconst osgDB::Options * osgDB::OutputStream::getOptions() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgDB::Options * osgDB::OutputStream::getOptions() const. Got : '%s'\n%s",typeid(Luna< osgDB::OutputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::Options * lret = self->getOptions();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::Options >::push(L,lret,false);

		return 1;
	}

	// void osgDB::OutputStream::setWriteImageHint(osgDB::OutputStream::WriteImageHint hint)
	static int _bind_setWriteImageHint(lua_State *L) {
		if (!_lg_typecheck_setWriteImageHint(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::OutputStream::setWriteImageHint(osgDB::OutputStream::WriteImageHint hint) function, expected prototype:\nvoid osgDB::OutputStream::setWriteImageHint(osgDB::OutputStream::WriteImageHint hint)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::OutputStream::WriteImageHint hint=(osgDB::OutputStream::WriteImageHint)lua_tointeger(L,2);

		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::OutputStream::setWriteImageHint(osgDB::OutputStream::WriteImageHint). Got : '%s'\n%s",typeid(Luna< osgDB::OutputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setWriteImageHint(hint);

		return 0;
	}

	// osgDB::OutputStream::WriteImageHint osgDB::OutputStream::getWriteImageHint() const
	static int _bind_getWriteImageHint(lua_State *L) {
		if (!_lg_typecheck_getWriteImageHint(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::OutputStream::WriteImageHint osgDB::OutputStream::getWriteImageHint() const function, expected prototype:\nosgDB::OutputStream::WriteImageHint osgDB::OutputStream::getWriteImageHint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::OutputStream::WriteImageHint osgDB::OutputStream::getWriteImageHint() const. Got : '%s'\n%s",typeid(Luna< osgDB::OutputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::OutputStream::WriteImageHint lret = self->getWriteImageHint();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgDB::OutputStream::writeWrappedString(const std::string & str)
	static int _bind_writeWrappedString(lua_State *L) {
		if (!_lg_typecheck_writeWrappedString(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::OutputStream::writeWrappedString(const std::string & str) function, expected prototype:\nvoid osgDB::OutputStream::writeWrappedString(const std::string & str)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string str(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::OutputStream::writeWrappedString(const std::string &). Got : '%s'\n%s",typeid(Luna< osgDB::OutputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->writeWrappedString(str);

		return 0;
	}

	// void osgDB::OutputStream::writeCharArray(const char * s, unsigned int size)
	static int _bind_writeCharArray(lua_State *L) {
		if (!_lg_typecheck_writeCharArray(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::OutputStream::writeCharArray(const char * s, unsigned int size) function, expected prototype:\nvoid osgDB::OutputStream::writeCharArray(const char * s, unsigned int size)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * s=(const char *)lua_tostring(L,2);
		unsigned int size=(unsigned int)lua_tointeger(L,3);

		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::OutputStream::writeCharArray(const char *, unsigned int). Got : '%s'\n%s",typeid(Luna< osgDB::OutputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->writeCharArray(s, size);

		return 0;
	}

	// void osgDB::OutputStream::writeArray(const osg::Array * a)
	static int _bind_writeArray(lua_State *L) {
		if (!_lg_typecheck_writeArray(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::OutputStream::writeArray(const osg::Array * a) function, expected prototype:\nvoid osgDB::OutputStream::writeArray(const osg::Array * a)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Array* a=(Luna< osg::Referenced >::checkSubType< osg::Array >(L,2));

		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::OutputStream::writeArray(const osg::Array *). Got : '%s'\n%s",typeid(Luna< osgDB::OutputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->writeArray(a);

		return 0;
	}

	// void osgDB::OutputStream::writePrimitiveSet(const osg::PrimitiveSet * p)
	static int _bind_writePrimitiveSet(lua_State *L) {
		if (!_lg_typecheck_writePrimitiveSet(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::OutputStream::writePrimitiveSet(const osg::PrimitiveSet * p) function, expected prototype:\nvoid osgDB::OutputStream::writePrimitiveSet(const osg::PrimitiveSet * p)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::PrimitiveSet* p=(Luna< osg::Referenced >::checkSubType< osg::PrimitiveSet >(L,2));

		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::OutputStream::writePrimitiveSet(const osg::PrimitiveSet *). Got : '%s'\n%s",typeid(Luna< osgDB::OutputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->writePrimitiveSet(p);

		return 0;
	}

	// void osgDB::OutputStream::writeImage(const osg::Image * img)
	static int _bind_writeImage(lua_State *L) {
		if (!_lg_typecheck_writeImage(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::OutputStream::writeImage(const osg::Image * img) function, expected prototype:\nvoid osgDB::OutputStream::writeImage(const osg::Image * img)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Image* img=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,2));

		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::OutputStream::writeImage(const osg::Image *). Got : '%s'\n%s",typeid(Luna< osgDB::OutputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->writeImage(img);

		return 0;
	}

	// void osgDB::OutputStream::writeObject(const osg::Object * obj)
	static int _bind_writeObject(lua_State *L) {
		if (!_lg_typecheck_writeObject(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::OutputStream::writeObject(const osg::Object * obj) function, expected prototype:\nvoid osgDB::OutputStream::writeObject(const osg::Object * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::OutputStream::writeObject(const osg::Object *). Got : '%s'\n%s",typeid(Luna< osgDB::OutputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->writeObject(obj);

		return 0;
	}

	// void osgDB::OutputStream::writeObjectFields(const osg::Object * obj)
	static int _bind_writeObjectFields(lua_State *L) {
		if (!_lg_typecheck_writeObjectFields(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::OutputStream::writeObjectFields(const osg::Object * obj) function, expected prototype:\nvoid osgDB::OutputStream::writeObjectFields(const osg::Object * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::OutputStream::writeObjectFields(const osg::Object *). Got : '%s'\n%s",typeid(Luna< osgDB::OutputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->writeObjectFields(obj);

		return 0;
	}

	// void osgDB::OutputStream::setOutputIterator(osgDB::OutputIterator * oi)
	static int _bind_setOutputIterator(lua_State *L) {
		if (!_lg_typecheck_setOutputIterator(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::OutputStream::setOutputIterator(osgDB::OutputIterator * oi) function, expected prototype:\nvoid osgDB::OutputStream::setOutputIterator(osgDB::OutputIterator * oi)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::OutputIterator* oi=(Luna< osg::Referenced >::checkSubType< osgDB::OutputIterator >(L,2));

		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::OutputStream::setOutputIterator(osgDB::OutputIterator *). Got : '%s'\n%s",typeid(Luna< osgDB::OutputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setOutputIterator(oi);

		return 0;
	}

	// void osgDB::OutputStream::start(osgDB::OutputIterator * outIterator, osgDB::OutputStream::WriteType type)
	static int _bind_start(lua_State *L) {
		if (!_lg_typecheck_start(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::OutputStream::start(osgDB::OutputIterator * outIterator, osgDB::OutputStream::WriteType type) function, expected prototype:\nvoid osgDB::OutputStream::start(osgDB::OutputIterator * outIterator, osgDB::OutputStream::WriteType type)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::OutputIterator* outIterator=(Luna< osg::Referenced >::checkSubType< osgDB::OutputIterator >(L,2));
		osgDB::OutputStream::WriteType type=(osgDB::OutputStream::WriteType)lua_tointeger(L,3);

		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::OutputStream::start(osgDB::OutputIterator *, osgDB::OutputStream::WriteType). Got : '%s'\n%s",typeid(Luna< osgDB::OutputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->start(outIterator, type);

		return 0;
	}

	// void osgDB::OutputStream::compress(std::ostream * ostream)
	static int _bind_compress(lua_State *L) {
		if (!_lg_typecheck_compress(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::OutputStream::compress(std::ostream * ostream) function, expected prototype:\nvoid osgDB::OutputStream::compress(std::ostream * ostream)\nClass arguments details:\narg 1 ID = 2993706\n\n%s",luna_dumpStack(L).c_str());
		}

		std::ostream* ostream=(Luna< std::ostream >::check(L,2));

		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::OutputStream::compress(std::ostream *). Got : '%s'\n%s",typeid(Luna< osgDB::OutputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->compress(ostream);

		return 0;
	}

	// void osgDB::OutputStream::writeSchema(std::ostream & fout)
	static int _bind_writeSchema(lua_State *L) {
		if (!_lg_typecheck_writeSchema(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::OutputStream::writeSchema(std::ostream & fout) function, expected prototype:\nvoid osgDB::OutputStream::writeSchema(std::ostream & fout)\nClass arguments details:\narg 1 ID = 2993706\n\n%s",luna_dumpStack(L).c_str());
		}

		std::ostream* fout_ptr=(Luna< std::ostream >::check(L,2));
		if( !fout_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg fout in osgDB::OutputStream::writeSchema function");
		}
		std::ostream & fout=*fout_ptr;

		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::OutputStream::writeSchema(std::ostream &). Got : '%s'\n%s",typeid(Luna< osgDB::OutputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->writeSchema(fout);

		return 0;
	}

	// osgDB::OutputStream & osgDB::OutputStream::writeDouble(osgDB::OutputStream & os, double val)
	static int _bind_writeDouble(lua_State *L) {
		if (!_lg_typecheck_writeDouble(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::OutputStream & osgDB::OutputStream::writeDouble(osgDB::OutputStream & os, double val) function, expected prototype:\nosgDB::OutputStream & osgDB::OutputStream::writeDouble(osgDB::OutputStream & os, double val)\nClass arguments details:\narg 1 ID = 70071506\n\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::OutputStream* os_ptr=(Luna< osgDB::OutputStream >::check(L,1));
		if( !os_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg os in osgDB::OutputStream::writeDouble function");
		}
		osgDB::OutputStream & os=*os_ptr;
		double val=(double)lua_tonumber(L,2);

		const osgDB::OutputStream* lret = &writeDouble(os, val);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::OutputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::OutputStream & osgDB::OutputStream::writeInt(osgDB::OutputStream & os, int val)
	static int _bind_writeInt(lua_State *L) {
		if (!_lg_typecheck_writeInt(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::OutputStream & osgDB::OutputStream::writeInt(osgDB::OutputStream & os, int val) function, expected prototype:\nosgDB::OutputStream & osgDB::OutputStream::writeInt(osgDB::OutputStream & os, int val)\nClass arguments details:\narg 1 ID = 70071506\n\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::OutputStream* os_ptr=(Luna< osgDB::OutputStream >::check(L,1));
		if( !os_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg os in osgDB::OutputStream::writeInt function");
		}
		osgDB::OutputStream & os=*os_ptr;
		int val=(int)lua_tointeger(L,2);

		const osgDB::OutputStream* lret = &writeInt(os, val);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::OutputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::OutputStream & osgDB::OutputStream::writeString(osgDB::OutputStream & os, const std::string & val)
	static int _bind_writeString(lua_State *L) {
		if (!_lg_typecheck_writeString(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::OutputStream & osgDB::OutputStream::writeString(osgDB::OutputStream & os, const std::string & val) function, expected prototype:\nosgDB::OutputStream & osgDB::OutputStream::writeString(osgDB::OutputStream & os, const std::string & val)\nClass arguments details:\narg 1 ID = 70071506\n\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::OutputStream* os_ptr=(Luna< osgDB::OutputStream >::check(L,1));
		if( !os_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg os in osgDB::OutputStream::writeString function");
		}
		osgDB::OutputStream & os=*os_ptr;
		std::string val(lua_tostring(L,2),lua_objlen(L,2));

		const osgDB::OutputStream* lret = &writeString(os, val);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::OutputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::OutputStream & osgDB::OutputStream::writeBool(osgDB::OutputStream & os, bool val)
	static int _bind_writeBool(lua_State *L) {
		if (!_lg_typecheck_writeBool(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::OutputStream & osgDB::OutputStream::writeBool(osgDB::OutputStream & os, bool val) function, expected prototype:\nosgDB::OutputStream & osgDB::OutputStream::writeBool(osgDB::OutputStream & os, bool val)\nClass arguments details:\narg 1 ID = 70071506\n\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::OutputStream* os_ptr=(Luna< osgDB::OutputStream >::check(L,1));
		if( !os_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg os in osgDB::OutputStream::writeBool function");
		}
		osgDB::OutputStream & os=*os_ptr;
		bool val=(bool)(lua_toboolean(L,2)==1);

		const osgDB::OutputStream* lret = &writeBool(os, val);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::OutputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::OutputStream & osgDB::OutputStream::writeProperty(osgDB::OutputStream & os, const std::string & val)
	static int _bind_writeProperty(lua_State *L) {
		if (!_lg_typecheck_writeProperty(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::OutputStream & osgDB::OutputStream::writeProperty(osgDB::OutputStream & os, const std::string & val) function, expected prototype:\nosgDB::OutputStream & osgDB::OutputStream::writeProperty(osgDB::OutputStream & os, const std::string & val)\nClass arguments details:\narg 1 ID = 70071506\n\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::OutputStream* os_ptr=(Luna< osgDB::OutputStream >::check(L,1));
		if( !os_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg os in osgDB::OutputStream::writeProperty function");
		}
		osgDB::OutputStream & os=*os_ptr;
		std::string val(lua_tostring(L,2),lua_objlen(L,2));

		const osgDB::OutputStream* lret = &writeProperty(os, val);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::OutputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::OutputStream & osgDB::OutputStream::writeMatrixd(osgDB::OutputStream & os, const osg::Matrixd & val)
	static int _bind_writeMatrixd(lua_State *L) {
		if (!_lg_typecheck_writeMatrixd(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::OutputStream & osgDB::OutputStream::writeMatrixd(osgDB::OutputStream & os, const osg::Matrixd & val) function, expected prototype:\nosgDB::OutputStream & osgDB::OutputStream::writeMatrixd(osgDB::OutputStream & os, const osg::Matrixd & val)\nClass arguments details:\narg 1 ID = 70071506\narg 2 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::OutputStream* os_ptr=(Luna< osgDB::OutputStream >::check(L,1));
		if( !os_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg os in osgDB::OutputStream::writeMatrixd function");
		}
		osgDB::OutputStream & os=*os_ptr;
		const osg::Matrixd* val_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !val_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg val in osgDB::OutputStream::writeMatrixd function");
		}
		const osg::Matrixd & val=*val_ptr;

		const osgDB::OutputStream* lret = &writeMatrixd(os, val);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::OutputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::OutputStream & osgDB::OutputStream::writeVec2d(osgDB::OutputStream & os, const osg::Vec2d & val)
	static int _bind_writeVec2d(lua_State *L) {
		if (!_lg_typecheck_writeVec2d(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::OutputStream & osgDB::OutputStream::writeVec2d(osgDB::OutputStream & os, const osg::Vec2d & val) function, expected prototype:\nosgDB::OutputStream & osgDB::OutputStream::writeVec2d(osgDB::OutputStream & os, const osg::Vec2d & val)\nClass arguments details:\narg 1 ID = 70071506\narg 2 ID = 92303171\n\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::OutputStream* os_ptr=(Luna< osgDB::OutputStream >::check(L,1));
		if( !os_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg os in osgDB::OutputStream::writeVec2d function");
		}
		osgDB::OutputStream & os=*os_ptr;
		const osg::Vec2d* val_ptr=(Luna< osg::Vec2d >::check(L,2));
		if( !val_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg val in osgDB::OutputStream::writeVec2d function");
		}
		const osg::Vec2d & val=*val_ptr;

		const osgDB::OutputStream* lret = &writeVec2d(os, val);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::OutputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::OutputStream & osgDB::OutputStream::writeVec2f(osgDB::OutputStream & os, const osg::Vec2f & val)
	static int _bind_writeVec2f(lua_State *L) {
		if (!_lg_typecheck_writeVec2f(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::OutputStream & osgDB::OutputStream::writeVec2f(osgDB::OutputStream & os, const osg::Vec2f & val) function, expected prototype:\nosgDB::OutputStream & osgDB::OutputStream::writeVec2f(osgDB::OutputStream & os, const osg::Vec2f & val)\nClass arguments details:\narg 1 ID = 70071506\narg 2 ID = 92303173\n\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::OutputStream* os_ptr=(Luna< osgDB::OutputStream >::check(L,1));
		if( !os_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg os in osgDB::OutputStream::writeVec2f function");
		}
		osgDB::OutputStream & os=*os_ptr;
		const osg::Vec2f* val_ptr=(Luna< osg::Vec2f >::check(L,2));
		if( !val_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg val in osgDB::OutputStream::writeVec2f function");
		}
		const osg::Vec2f & val=*val_ptr;

		const osgDB::OutputStream* lret = &writeVec2f(os, val);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::OutputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::OutputStream & osgDB::OutputStream::writeVec3d(osgDB::OutputStream & os, const osg::Vec3d & val)
	static int _bind_writeVec3d(lua_State *L) {
		if (!_lg_typecheck_writeVec3d(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::OutputStream & osgDB::OutputStream::writeVec3d(osgDB::OutputStream & os, const osg::Vec3d & val) function, expected prototype:\nosgDB::OutputStream & osgDB::OutputStream::writeVec3d(osgDB::OutputStream & os, const osg::Vec3d & val)\nClass arguments details:\narg 1 ID = 70071506\narg 2 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::OutputStream* os_ptr=(Luna< osgDB::OutputStream >::check(L,1));
		if( !os_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg os in osgDB::OutputStream::writeVec3d function");
		}
		osgDB::OutputStream & os=*os_ptr;
		const osg::Vec3d* val_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !val_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg val in osgDB::OutputStream::writeVec3d function");
		}
		const osg::Vec3d & val=*val_ptr;

		const osgDB::OutputStream* lret = &writeVec3d(os, val);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::OutputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::OutputStream & osgDB::OutputStream::writeVec3f(osgDB::OutputStream & os, const osg::Vec3f & val)
	static int _bind_writeVec3f(lua_State *L) {
		if (!_lg_typecheck_writeVec3f(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::OutputStream & osgDB::OutputStream::writeVec3f(osgDB::OutputStream & os, const osg::Vec3f & val) function, expected prototype:\nosgDB::OutputStream & osgDB::OutputStream::writeVec3f(osgDB::OutputStream & os, const osg::Vec3f & val)\nClass arguments details:\narg 1 ID = 70071506\narg 2 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::OutputStream* os_ptr=(Luna< osgDB::OutputStream >::check(L,1));
		if( !os_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg os in osgDB::OutputStream::writeVec3f function");
		}
		osgDB::OutputStream & os=*os_ptr;
		const osg::Vec3f* val_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !val_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg val in osgDB::OutputStream::writeVec3f function");
		}
		const osg::Vec3f & val=*val_ptr;

		const osgDB::OutputStream* lret = &writeVec3f(os, val);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::OutputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::OutputStream & osgDB::OutputStream::writeVec4d(osgDB::OutputStream & os, const osg::Vec4d & val)
	static int _bind_writeVec4d(lua_State *L) {
		if (!_lg_typecheck_writeVec4d(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::OutputStream & osgDB::OutputStream::writeVec4d(osgDB::OutputStream & os, const osg::Vec4d & val) function, expected prototype:\nosgDB::OutputStream & osgDB::OutputStream::writeVec4d(osgDB::OutputStream & os, const osg::Vec4d & val)\nClass arguments details:\narg 1 ID = 70071506\narg 2 ID = 92303233\n\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::OutputStream* os_ptr=(Luna< osgDB::OutputStream >::check(L,1));
		if( !os_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg os in osgDB::OutputStream::writeVec4d function");
		}
		osgDB::OutputStream & os=*os_ptr;
		const osg::Vec4d* val_ptr=(Luna< osg::Vec4d >::check(L,2));
		if( !val_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg val in osgDB::OutputStream::writeVec4d function");
		}
		const osg::Vec4d & val=*val_ptr;

		const osgDB::OutputStream* lret = &writeVec4d(os, val);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::OutputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::OutputStream & osgDB::OutputStream::writeVec4f(osgDB::OutputStream & os, const osg::Vec4f & val)
	static int _bind_writeVec4f(lua_State *L) {
		if (!_lg_typecheck_writeVec4f(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::OutputStream & osgDB::OutputStream::writeVec4f(osgDB::OutputStream & os, const osg::Vec4f & val) function, expected prototype:\nosgDB::OutputStream & osgDB::OutputStream::writeVec4f(osgDB::OutputStream & os, const osg::Vec4f & val)\nClass arguments details:\narg 1 ID = 70071506\narg 2 ID = 92303235\n\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::OutputStream* os_ptr=(Luna< osgDB::OutputStream >::check(L,1));
		if( !os_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg os in osgDB::OutputStream::writeVec4f function");
		}
		osgDB::OutputStream & os=*os_ptr;
		const osg::Vec4f* val_ptr=(Luna< osg::Vec4f >::check(L,2));
		if( !val_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg val in osgDB::OutputStream::writeVec4f function");
		}
		const osg::Vec4f & val=*val_ptr;

		const osgDB::OutputStream* lret = &writeVec4f(os, val);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::OutputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::OutputStream & osgDB::OutputStream::writeQuat(osgDB::OutputStream & os, const osg::Quat & val)
	static int _bind_writeQuat(lua_State *L) {
		if (!_lg_typecheck_writeQuat(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::OutputStream & osgDB::OutputStream::writeQuat(osgDB::OutputStream & os, const osg::Quat & val) function, expected prototype:\nosgDB::OutputStream & osgDB::OutputStream::writeQuat(osgDB::OutputStream & os, const osg::Quat & val)\nClass arguments details:\narg 1 ID = 70071506\narg 2 ID = 80263306\n\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::OutputStream* os_ptr=(Luna< osgDB::OutputStream >::check(L,1));
		if( !os_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg os in osgDB::OutputStream::writeQuat function");
		}
		osgDB::OutputStream & os=*os_ptr;
		const osg::Quat* val_ptr=(Luna< osg::Quat >::check(L,2));
		if( !val_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg val in osgDB::OutputStream::writeQuat function");
		}
		const osg::Quat & val=*val_ptr;

		const osgDB::OutputStream* lret = &writeQuat(os, val);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::OutputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::OutputStream & osgDB::OutputStream::endl(osgDB::OutputStream & os)
	static int _bind_endl(lua_State *L) {
		if (!_lg_typecheck_endl(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::OutputStream & osgDB::OutputStream::endl(osgDB::OutputStream & os) function, expected prototype:\nosgDB::OutputStream & osgDB::OutputStream::endl(osgDB::OutputStream & os)\nClass arguments details:\narg 1 ID = 70071506\n\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::OutputStream* os_ptr=(Luna< osgDB::OutputStream >::check(L,1));
		if( !os_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg os in osgDB::OutputStream::endl function");
		}
		osgDB::OutputStream & os=*os_ptr;

		const osgDB::OutputStream* lret = &endl(os);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::OutputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::OutputStream & osgDB::OutputStream::useHexMode(osgDB::OutputStream & os)
	static int _bind_useHexMode(lua_State *L) {
		if (!_lg_typecheck_useHexMode(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::OutputStream & osgDB::OutputStream::useHexMode(osgDB::OutputStream & os) function, expected prototype:\nosgDB::OutputStream & osgDB::OutputStream::useHexMode(osgDB::OutputStream & os)\nClass arguments details:\narg 1 ID = 70071506\n\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::OutputStream* os_ptr=(Luna< osgDB::OutputStream >::check(L,1));
		if( !os_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg os in osgDB::OutputStream::useHexMode function");
		}
		osgDB::OutputStream & os=*os_ptr;

		const osgDB::OutputStream* lret = &useHexMode(os);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::OutputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::OutputStream & osgDB::OutputStream::useDecMode(osgDB::OutputStream & os)
	static int _bind_useDecMode(lua_State *L) {
		if (!_lg_typecheck_useDecMode(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::OutputStream & osgDB::OutputStream::useDecMode(osgDB::OutputStream & os) function, expected prototype:\nosgDB::OutputStream & osgDB::OutputStream::useDecMode(osgDB::OutputStream & os)\nClass arguments details:\narg 1 ID = 70071506\n\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::OutputStream* os_ptr=(Luna< osgDB::OutputStream >::check(L,1));
		if( !os_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg os in osgDB::OutputStream::useDecMode function");
		}
		osgDB::OutputStream & os=*os_ptr;

		const osgDB::OutputStream* lret = &useDecMode(os);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::OutputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::OutputStream & osgDB::OutputStream::beginBracket(osgDB::OutputStream & os)
	static int _bind_beginBracket(lua_State *L) {
		if (!_lg_typecheck_beginBracket(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::OutputStream & osgDB::OutputStream::beginBracket(osgDB::OutputStream & os) function, expected prototype:\nosgDB::OutputStream & osgDB::OutputStream::beginBracket(osgDB::OutputStream & os)\nClass arguments details:\narg 1 ID = 70071506\n\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::OutputStream* os_ptr=(Luna< osgDB::OutputStream >::check(L,1));
		if( !os_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg os in osgDB::OutputStream::beginBracket function");
		}
		osgDB::OutputStream & os=*os_ptr;

		const osgDB::OutputStream* lret = &beginBracket(os);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::OutputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::OutputStream & osgDB::OutputStream::endBracket(osgDB::OutputStream & os)
	static int _bind_endBracket(lua_State *L) {
		if (!_lg_typecheck_endBracket(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::OutputStream & osgDB::OutputStream::endBracket(osgDB::OutputStream & os) function, expected prototype:\nosgDB::OutputStream & osgDB::OutputStream::endBracket(osgDB::OutputStream & os)\nClass arguments details:\narg 1 ID = 70071506\n\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::OutputStream* os_ptr=(Luna< osgDB::OutputStream >::check(L,1));
		if( !os_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg os in osgDB::OutputStream::endBracket function");
		}
		osgDB::OutputStream & os=*os_ptr;

		const osgDB::OutputStream* lret = &endBracket(os);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::OutputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::ObjectProperty osgDB::OutputStream::PROPERTY()
	static int _bind_getPROPERTY(lua_State *L) {
		if (!_lg_typecheck_getPROPERTY(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ObjectProperty osgDB::OutputStream::PROPERTY() function, expected prototype:\nosgDB::ObjectProperty osgDB::OutputStream::PROPERTY()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ObjectProperty osgDB::OutputStream::PROPERTY(). Got : '%s'\n%s",typeid(Luna< osgDB::OutputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::ObjectProperty* lret = &self->PROPERTY;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ObjectProperty >::push(L,lret,false);

		return 1;
	}

	// osgDB::ObjectMark osgDB::OutputStream::END_BRACKET()
	static int _bind_get_END_BRACKET(lua_State *L) {
		if (!_lg_typecheck_get_END_BRACKET(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ObjectMark osgDB::OutputStream::END_BRACKET() function, expected prototype:\nosgDB::ObjectMark osgDB::OutputStream::END_BRACKET()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ObjectMark osgDB::OutputStream::END_BRACKET(). Got : '%s'\n%s",typeid(Luna< osgDB::OutputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::ObjectMark* lret = &self->END_BRACKET;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ObjectMark >::push(L,lret,false);

		return 1;
	}

	// void osgDB::OutputStream::PROPERTY(osgDB::ObjectProperty value)
	static int _bind_setPROPERTY(lua_State *L) {
		if (!_lg_typecheck_setPROPERTY(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::OutputStream::PROPERTY(osgDB::ObjectProperty value) function, expected prototype:\nvoid osgDB::OutputStream::PROPERTY(osgDB::ObjectProperty value)\nClass arguments details:\narg 1 ID = 23791141\n\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::ObjectProperty* value_ptr=(Luna< osgDB::ObjectProperty >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgDB::OutputStream::PROPERTY function");
		}
		osgDB::ObjectProperty value=*value_ptr;

		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::OutputStream::PROPERTY(osgDB::ObjectProperty). Got : '%s'\n%s",typeid(Luna< osgDB::OutputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PROPERTY = value;

		return 0;
	}

	// void osgDB::OutputStream::END_BRACKET(osgDB::ObjectMark value)
	static int _bind_set_END_BRACKET(lua_State *L) {
		if (!_lg_typecheck_set_END_BRACKET(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::OutputStream::END_BRACKET(osgDB::ObjectMark value) function, expected prototype:\nvoid osgDB::OutputStream::END_BRACKET(osgDB::ObjectMark value)\nClass arguments details:\narg 1 ID = 60066730\n\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::ObjectMark* value_ptr=(Luna< osgDB::ObjectMark >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgDB::OutputStream::END_BRACKET function");
		}
		osgDB::ObjectMark value=*value_ptr;

		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::OutputStream::END_BRACKET(osgDB::ObjectMark). Got : '%s'\n%s",typeid(Luna< osgDB::OutputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->END_BRACKET = value;

		return 0;
	}


	// Operator binds:
	// osgDB::OutputStream & osgDB::OutputStream::operator<<(bool b)
	static int _bind_op_write_overload_1(lua_State *L) {
		if (!_lg_typecheck_op_write_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::OutputStream & osgDB::OutputStream::operator<<(bool b) function, expected prototype:\nosgDB::OutputStream & osgDB::OutputStream::operator<<(bool b)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool b=(bool)(lua_toboolean(L,2)==1);

		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::OutputStream & osgDB::OutputStream::operator<<(bool). Got : '%s'\n%s",typeid(Luna< osgDB::OutputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::OutputStream* lret = &self->operator<<(b);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::OutputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::OutputStream & osgDB::OutputStream::operator<<(char c)
	static int _bind_op_write_overload_2(lua_State *L) {
		if (!_lg_typecheck_op_write_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::OutputStream & osgDB::OutputStream::operator<<(char c) function, expected prototype:\nosgDB::OutputStream & osgDB::OutputStream::operator<<(char c)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		char c=(char)lua_tointeger(L,2);

		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::OutputStream & osgDB::OutputStream::operator<<(char). Got : '%s'\n%s",typeid(Luna< osgDB::OutputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::OutputStream* lret = &self->operator<<(c);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::OutputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::OutputStream & osgDB::OutputStream::operator<<(unsigned char c)
	static int _bind_op_write_overload_3(lua_State *L) {
		if (!_lg_typecheck_op_write_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::OutputStream & osgDB::OutputStream::operator<<(unsigned char c) function, expected prototype:\nosgDB::OutputStream & osgDB::OutputStream::operator<<(unsigned char c)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char c = (unsigned char)(lua_tointeger(L,2));

		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::OutputStream & osgDB::OutputStream::operator<<(unsigned char). Got : '%s'\n%s",typeid(Luna< osgDB::OutputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::OutputStream* lret = &self->operator<<(c);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::OutputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::OutputStream & osgDB::OutputStream::operator<<(short s)
	static int _bind_op_write_overload_4(lua_State *L) {
		if (!_lg_typecheck_op_write_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::OutputStream & osgDB::OutputStream::operator<<(short s) function, expected prototype:\nosgDB::OutputStream & osgDB::OutputStream::operator<<(short s)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		short s=(short)lua_tointeger(L,2);

		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::OutputStream & osgDB::OutputStream::operator<<(short). Got : '%s'\n%s",typeid(Luna< osgDB::OutputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::OutputStream* lret = &self->operator<<(s);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::OutputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::OutputStream & osgDB::OutputStream::operator<<(unsigned short s)
	static int _bind_op_write_overload_5(lua_State *L) {
		if (!_lg_typecheck_op_write_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::OutputStream & osgDB::OutputStream::operator<<(unsigned short s) function, expected prototype:\nosgDB::OutputStream & osgDB::OutputStream::operator<<(unsigned short s)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned short s=(unsigned short)lua_tointeger(L,2);

		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::OutputStream & osgDB::OutputStream::operator<<(unsigned short). Got : '%s'\n%s",typeid(Luna< osgDB::OutputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::OutputStream* lret = &self->operator<<(s);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::OutputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::OutputStream & osgDB::OutputStream::operator<<(int i)
	static int _bind_op_write_overload_6(lua_State *L) {
		if (!_lg_typecheck_op_write_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::OutputStream & osgDB::OutputStream::operator<<(int i) function, expected prototype:\nosgDB::OutputStream & osgDB::OutputStream::operator<<(int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);

		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::OutputStream & osgDB::OutputStream::operator<<(int). Got : '%s'\n%s",typeid(Luna< osgDB::OutputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::OutputStream* lret = &self->operator<<(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::OutputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::OutputStream & osgDB::OutputStream::operator<<(unsigned int i)
	static int _bind_op_write_overload_7(lua_State *L) {
		if (!_lg_typecheck_op_write_overload_7(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::OutputStream & osgDB::OutputStream::operator<<(unsigned int i) function, expected prototype:\nosgDB::OutputStream & osgDB::OutputStream::operator<<(unsigned int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::OutputStream & osgDB::OutputStream::operator<<(unsigned int). Got : '%s'\n%s",typeid(Luna< osgDB::OutputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::OutputStream* lret = &self->operator<<(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::OutputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::OutputStream & osgDB::OutputStream::operator<<(long l)
	static int _bind_op_write_overload_8(lua_State *L) {
		if (!_lg_typecheck_op_write_overload_8(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::OutputStream & osgDB::OutputStream::operator<<(long l) function, expected prototype:\nosgDB::OutputStream & osgDB::OutputStream::operator<<(long l)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long l=(long)lua_tonumber(L,2);

		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::OutputStream & osgDB::OutputStream::operator<<(long). Got : '%s'\n%s",typeid(Luna< osgDB::OutputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::OutputStream* lret = &self->operator<<(l);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::OutputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::OutputStream & osgDB::OutputStream::operator<<(unsigned long l)
	static int _bind_op_write_overload_9(lua_State *L) {
		if (!_lg_typecheck_op_write_overload_9(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::OutputStream & osgDB::OutputStream::operator<<(unsigned long l) function, expected prototype:\nosgDB::OutputStream & osgDB::OutputStream::operator<<(unsigned long l)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long l=(unsigned long)lua_tonumber(L,2);

		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::OutputStream & osgDB::OutputStream::operator<<(unsigned long). Got : '%s'\n%s",typeid(Luna< osgDB::OutputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::OutputStream* lret = &self->operator<<(l);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::OutputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::OutputStream & osgDB::OutputStream::operator<<(float f)
	static int _bind_op_write_overload_10(lua_State *L) {
		if (!_lg_typecheck_op_write_overload_10(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::OutputStream & osgDB::OutputStream::operator<<(float f) function, expected prototype:\nosgDB::OutputStream & osgDB::OutputStream::operator<<(float f)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float f=(float)lua_tonumber(L,2);

		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::OutputStream & osgDB::OutputStream::operator<<(float). Got : '%s'\n%s",typeid(Luna< osgDB::OutputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::OutputStream* lret = &self->operator<<(f);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::OutputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::OutputStream & osgDB::OutputStream::operator<<(double d)
	static int _bind_op_write_overload_11(lua_State *L) {
		if (!_lg_typecheck_op_write_overload_11(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::OutputStream & osgDB::OutputStream::operator<<(double d) function, expected prototype:\nosgDB::OutputStream & osgDB::OutputStream::operator<<(double d)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double d=(double)lua_tonumber(L,2);

		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::OutputStream & osgDB::OutputStream::operator<<(double). Got : '%s'\n%s",typeid(Luna< osgDB::OutputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::OutputStream* lret = &self->operator<<(d);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::OutputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::OutputStream & osgDB::OutputStream::operator<<(const std::string & s)
	static int _bind_op_write_overload_12(lua_State *L) {
		if (!_lg_typecheck_op_write_overload_12(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::OutputStream & osgDB::OutputStream::operator<<(const std::string & s) function, expected prototype:\nosgDB::OutputStream & osgDB::OutputStream::operator<<(const std::string & s)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string s(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::OutputStream & osgDB::OutputStream::operator<<(const std::string &). Got : '%s'\n%s",typeid(Luna< osgDB::OutputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::OutputStream* lret = &self->operator<<(s);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::OutputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::OutputStream & osgDB::OutputStream::operator<<(const char * s)
	static int _bind_op_write_overload_13(lua_State *L) {
		if (!_lg_typecheck_op_write_overload_13(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::OutputStream & osgDB::OutputStream::operator<<(const char * s) function, expected prototype:\nosgDB::OutputStream & osgDB::OutputStream::operator<<(const char * s)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * s=(const char *)lua_tostring(L,2);

		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::OutputStream & osgDB::OutputStream::operator<<(const char *). Got : '%s'\n%s",typeid(Luna< osgDB::OutputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::OutputStream* lret = &self->operator<<(s);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::OutputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::OutputStream & osgDB::OutputStream::operator<<(const osgDB::ObjectGLenum & value)
	static int _bind_op_write_overload_14(lua_State *L) {
		if (!_lg_typecheck_op_write_overload_14(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::OutputStream & osgDB::OutputStream::operator<<(const osgDB::ObjectGLenum & value) function, expected prototype:\nosgDB::OutputStream & osgDB::OutputStream::operator<<(const osgDB::ObjectGLenum & value)\nClass arguments details:\narg 1 ID = 32567652\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgDB::ObjectGLenum* value_ptr=(Luna< osgDB::ObjectGLenum >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgDB::OutputStream::operator<< function");
		}
		const osgDB::ObjectGLenum & value=*value_ptr;

		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::OutputStream & osgDB::OutputStream::operator<<(const osgDB::ObjectGLenum &). Got : '%s'\n%s",typeid(Luna< osgDB::OutputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::OutputStream* lret = &self->operator<<(value);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::OutputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::OutputStream & osgDB::OutputStream::operator<<(const osgDB::ObjectProperty & prop)
	static int _bind_op_write_overload_15(lua_State *L) {
		if (!_lg_typecheck_op_write_overload_15(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::OutputStream & osgDB::OutputStream::operator<<(const osgDB::ObjectProperty & prop) function, expected prototype:\nosgDB::OutputStream & osgDB::OutputStream::operator<<(const osgDB::ObjectProperty & prop)\nClass arguments details:\narg 1 ID = 23791141\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgDB::ObjectProperty* prop_ptr=(Luna< osgDB::ObjectProperty >::check(L,2));
		if( !prop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg prop in osgDB::OutputStream::operator<< function");
		}
		const osgDB::ObjectProperty & prop=*prop_ptr;

		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::OutputStream & osgDB::OutputStream::operator<<(const osgDB::ObjectProperty &). Got : '%s'\n%s",typeid(Luna< osgDB::OutputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::OutputStream* lret = &self->operator<<(prop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::OutputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::OutputStream & osgDB::OutputStream::operator<<(const osgDB::ObjectMark & mark)
	static int _bind_op_write_overload_16(lua_State *L) {
		if (!_lg_typecheck_op_write_overload_16(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::OutputStream & osgDB::OutputStream::operator<<(const osgDB::ObjectMark & mark) function, expected prototype:\nosgDB::OutputStream & osgDB::OutputStream::operator<<(const osgDB::ObjectMark & mark)\nClass arguments details:\narg 1 ID = 60066730\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgDB::ObjectMark* mark_ptr=(Luna< osgDB::ObjectMark >::check(L,2));
		if( !mark_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mark in osgDB::OutputStream::operator<< function");
		}
		const osgDB::ObjectMark & mark=*mark_ptr;

		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::OutputStream & osgDB::OutputStream::operator<<(const osgDB::ObjectMark &). Got : '%s'\n%s",typeid(Luna< osgDB::OutputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::OutputStream* lret = &self->operator<<(mark);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::OutputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::Vec2b & v)
	static int _bind_op_write_overload_17(lua_State *L) {
		if (!_lg_typecheck_op_write_overload_17(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::Vec2b & v) function, expected prototype:\nosgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::Vec2b & v)\nClass arguments details:\narg 1 ID = 92303169\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec2b* v_ptr=(Luna< osg::Vec2b >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osgDB::OutputStream::operator<< function");
		}
		const osg::Vec2b & v=*v_ptr;

		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::Vec2b &). Got : '%s'\n%s",typeid(Luna< osgDB::OutputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::OutputStream* lret = &self->operator<<(v);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::OutputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::Vec3b & v)
	static int _bind_op_write_overload_18(lua_State *L) {
		if (!_lg_typecheck_op_write_overload_18(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::Vec3b & v) function, expected prototype:\nosgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::Vec3b & v)\nClass arguments details:\narg 1 ID = 92303200\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3b* v_ptr=(Luna< osg::Vec3b >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osgDB::OutputStream::operator<< function");
		}
		const osg::Vec3b & v=*v_ptr;

		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::Vec3b &). Got : '%s'\n%s",typeid(Luna< osgDB::OutputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::OutputStream* lret = &self->operator<<(v);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::OutputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::Vec4b & v)
	static int _bind_op_write_overload_19(lua_State *L) {
		if (!_lg_typecheck_op_write_overload_19(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::Vec4b & v) function, expected prototype:\nosgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::Vec4b & v)\nClass arguments details:\narg 1 ID = 92303231\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4b* v_ptr=(Luna< osg::Vec4b >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osgDB::OutputStream::operator<< function");
		}
		const osg::Vec4b & v=*v_ptr;

		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::Vec4b &). Got : '%s'\n%s",typeid(Luna< osgDB::OutputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::OutputStream* lret = &self->operator<<(v);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::OutputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::Vec4ub & v)
	static int _bind_op_write_overload_20(lua_State *L) {
		if (!_lg_typecheck_op_write_overload_20(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::Vec4ub & v) function, expected prototype:\nosgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::Vec4ub & v)\nClass arguments details:\narg 1 ID = 61400540\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4ub* v_ptr=(Luna< osg::Vec4ub >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osgDB::OutputStream::operator<< function");
		}
		const osg::Vec4ub & v=*v_ptr;

		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::Vec4ub &). Got : '%s'\n%s",typeid(Luna< osgDB::OutputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::OutputStream* lret = &self->operator<<(v);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::OutputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::Vec2s & v)
	static int _bind_op_write_overload_21(lua_State *L) {
		if (!_lg_typecheck_op_write_overload_21(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::Vec2s & v) function, expected prototype:\nosgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::Vec2s & v)\nClass arguments details:\narg 1 ID = 92303186\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec2s* v_ptr=(Luna< osg::Vec2s >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osgDB::OutputStream::operator<< function");
		}
		const osg::Vec2s & v=*v_ptr;

		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::Vec2s &). Got : '%s'\n%s",typeid(Luna< osgDB::OutputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::OutputStream* lret = &self->operator<<(v);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::OutputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::Vec3s & v)
	static int _bind_op_write_overload_22(lua_State *L) {
		if (!_lg_typecheck_op_write_overload_22(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::Vec3s & v) function, expected prototype:\nosgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::Vec3s & v)\nClass arguments details:\narg 1 ID = 92303217\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3s* v_ptr=(Luna< osg::Vec3s >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osgDB::OutputStream::operator<< function");
		}
		const osg::Vec3s & v=*v_ptr;

		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::Vec3s &). Got : '%s'\n%s",typeid(Luna< osgDB::OutputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::OutputStream* lret = &self->operator<<(v);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::OutputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::Vec4s & v)
	static int _bind_op_write_overload_23(lua_State *L) {
		if (!_lg_typecheck_op_write_overload_23(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::Vec4s & v) function, expected prototype:\nosgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::Vec4s & v)\nClass arguments details:\narg 1 ID = 92303248\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4s* v_ptr=(Luna< osg::Vec4s >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osgDB::OutputStream::operator<< function");
		}
		const osg::Vec4s & v=*v_ptr;

		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::Vec4s &). Got : '%s'\n%s",typeid(Luna< osgDB::OutputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::OutputStream* lret = &self->operator<<(v);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::OutputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::Vec2f & v)
	static int _bind_op_write_overload_24(lua_State *L) {
		if (!_lg_typecheck_op_write_overload_24(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::Vec2f & v) function, expected prototype:\nosgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::Vec2f & v)\nClass arguments details:\narg 1 ID = 92303173\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec2f* v_ptr=(Luna< osg::Vec2f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osgDB::OutputStream::operator<< function");
		}
		const osg::Vec2f & v=*v_ptr;

		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::Vec2f &). Got : '%s'\n%s",typeid(Luna< osgDB::OutputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::OutputStream* lret = &self->operator<<(v);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::OutputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::Vec3f & v)
	static int _bind_op_write_overload_25(lua_State *L) {
		if (!_lg_typecheck_op_write_overload_25(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::Vec3f & v) function, expected prototype:\nosgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::Vec3f & v)\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* v_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osgDB::OutputStream::operator<< function");
		}
		const osg::Vec3f & v=*v_ptr;

		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::Vec3f &). Got : '%s'\n%s",typeid(Luna< osgDB::OutputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::OutputStream* lret = &self->operator<<(v);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::OutputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::Vec4f & v)
	static int _bind_op_write_overload_26(lua_State *L) {
		if (!_lg_typecheck_op_write_overload_26(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::Vec4f & v) function, expected prototype:\nosgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::Vec4f & v)\nClass arguments details:\narg 1 ID = 92303235\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4f* v_ptr=(Luna< osg::Vec4f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osgDB::OutputStream::operator<< function");
		}
		const osg::Vec4f & v=*v_ptr;

		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::Vec4f &). Got : '%s'\n%s",typeid(Luna< osgDB::OutputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::OutputStream* lret = &self->operator<<(v);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::OutputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::Vec2d & v)
	static int _bind_op_write_overload_27(lua_State *L) {
		if (!_lg_typecheck_op_write_overload_27(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::Vec2d & v) function, expected prototype:\nosgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::Vec2d & v)\nClass arguments details:\narg 1 ID = 92303171\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec2d* v_ptr=(Luna< osg::Vec2d >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osgDB::OutputStream::operator<< function");
		}
		const osg::Vec2d & v=*v_ptr;

		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::Vec2d &). Got : '%s'\n%s",typeid(Luna< osgDB::OutputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::OutputStream* lret = &self->operator<<(v);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::OutputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::Vec3d & v)
	static int _bind_op_write_overload_28(lua_State *L) {
		if (!_lg_typecheck_op_write_overload_28(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::Vec3d & v) function, expected prototype:\nosgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::Vec3d & v)\nClass arguments details:\narg 1 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3d* v_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osgDB::OutputStream::operator<< function");
		}
		const osg::Vec3d & v=*v_ptr;

		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::Vec3d &). Got : '%s'\n%s",typeid(Luna< osgDB::OutputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::OutputStream* lret = &self->operator<<(v);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::OutputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::Vec4d & v)
	static int _bind_op_write_overload_29(lua_State *L) {
		if (!_lg_typecheck_op_write_overload_29(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::Vec4d & v) function, expected prototype:\nosgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::Vec4d & v)\nClass arguments details:\narg 1 ID = 92303233\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4d* v_ptr=(Luna< osg::Vec4d >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osgDB::OutputStream::operator<< function");
		}
		const osg::Vec4d & v=*v_ptr;

		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::Vec4d &). Got : '%s'\n%s",typeid(Luna< osgDB::OutputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::OutputStream* lret = &self->operator<<(v);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::OutputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::Quat & q)
	static int _bind_op_write_overload_30(lua_State *L) {
		if (!_lg_typecheck_op_write_overload_30(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::Quat & q) function, expected prototype:\nosgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::Quat & q)\nClass arguments details:\narg 1 ID = 80263306\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Quat* q_ptr=(Luna< osg::Quat >::check(L,2));
		if( !q_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg q in osgDB::OutputStream::operator<< function");
		}
		const osg::Quat & q=*q_ptr;

		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::Quat &). Got : '%s'\n%s",typeid(Luna< osgDB::OutputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::OutputStream* lret = &self->operator<<(q);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::OutputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::Plane & p)
	static int _bind_op_write_overload_31(lua_State *L) {
		if (!_lg_typecheck_op_write_overload_31(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::Plane & p) function, expected prototype:\nosgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::Plane & p)\nClass arguments details:\narg 1 ID = 86970521\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Plane* p_ptr=(Luna< osg::Plane >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in osgDB::OutputStream::operator<< function");
		}
		const osg::Plane & p=*p_ptr;

		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::Plane &). Got : '%s'\n%s",typeid(Luna< osgDB::OutputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::OutputStream* lret = &self->operator<<(p);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::OutputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::Matrixf & mat)
	static int _bind_op_write_overload_32(lua_State *L) {
		if (!_lg_typecheck_op_write_overload_32(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::Matrixf & mat) function, expected prototype:\nosgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::Matrixf & mat)\nClass arguments details:\narg 1 ID = 18903840\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixf* mat_ptr=(Luna< osg::Matrixf >::check(L,2));
		if( !mat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mat in osgDB::OutputStream::operator<< function");
		}
		const osg::Matrixf & mat=*mat_ptr;

		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::Matrixf &). Got : '%s'\n%s",typeid(Luna< osgDB::OutputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::OutputStream* lret = &self->operator<<(mat);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::OutputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::Matrixd & mat)
	static int _bind_op_write_overload_33(lua_State *L) {
		if (!_lg_typecheck_op_write_overload_33(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::Matrixd & mat) function, expected prototype:\nosgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::Matrixd & mat)\nClass arguments details:\narg 1 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixd* mat_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !mat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mat in osgDB::OutputStream::operator<< function");
		}
		const osg::Matrixd & mat=*mat_ptr;

		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::Matrixd &). Got : '%s'\n%s",typeid(Luna< osgDB::OutputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::OutputStream* lret = &self->operator<<(mat);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::OutputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::Array * a)
	static int _bind_op_write_overload_34(lua_State *L) {
		if (!_lg_typecheck_op_write_overload_34(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::Array * a) function, expected prototype:\nosgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::Array * a)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Array* a=(Luna< osg::Referenced >::checkSubType< osg::Array >(L,2));

		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::Array *). Got : '%s'\n%s",typeid(Luna< osgDB::OutputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::OutputStream* lret = &self->operator<<(a);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::OutputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::Image * img)
	static int _bind_op_write_overload_35(lua_State *L) {
		if (!_lg_typecheck_op_write_overload_35(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::Image * img) function, expected prototype:\nosgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::Image * img)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Image* img=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,2));

		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::Image *). Got : '%s'\n%s",typeid(Luna< osgDB::OutputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::OutputStream* lret = &self->operator<<(img);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::OutputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::PrimitiveSet * p)
	static int _bind_op_write_overload_36(lua_State *L) {
		if (!_lg_typecheck_op_write_overload_36(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::PrimitiveSet * p) function, expected prototype:\nosgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::PrimitiveSet * p)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::PrimitiveSet* p=(Luna< osg::Referenced >::checkSubType< osg::PrimitiveSet >(L,2));

		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::PrimitiveSet *). Got : '%s'\n%s",typeid(Luna< osgDB::OutputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::OutputStream* lret = &self->operator<<(p);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::OutputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::Object * obj)
	static int _bind_op_write_overload_37(lua_State *L) {
		if (!_lg_typecheck_op_write_overload_37(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::Object * obj) function, expected prototype:\nosgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::Object * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::Object *). Got : '%s'\n%s",typeid(Luna< osgDB::OutputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::OutputStream* lret = &self->operator<<(obj);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::OutputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::ref_ptr< osg::Array > & ptr)
	static int _bind_op_write_overload_38(lua_State *L) {
		if (!_lg_typecheck_op_write_overload_38(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::ref_ptr< osg::Array > & ptr) function, expected prototype:\nosgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::ref_ptr< osg::Array > & ptr)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ref_ptr< osg::Array > ptr = dynamic_cast< osg::Array* >(Luna< osg::Referenced >::check(L,2));

		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::ref_ptr< osg::Array > &). Got : '%s'\n%s",typeid(Luna< osgDB::OutputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::OutputStream* lret = &self->operator<<(ptr);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::OutputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::ref_ptr< osg::Image > & ptr)
	static int _bind_op_write_overload_39(lua_State *L) {
		if (!_lg_typecheck_op_write_overload_39(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::ref_ptr< osg::Image > & ptr) function, expected prototype:\nosgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::ref_ptr< osg::Image > & ptr)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ref_ptr< osg::Image > ptr = dynamic_cast< osg::Image* >(Luna< osg::Referenced >::check(L,2));

		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::ref_ptr< osg::Image > &). Got : '%s'\n%s",typeid(Luna< osgDB::OutputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::OutputStream* lret = &self->operator<<(ptr);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::OutputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::ref_ptr< osg::PrimitiveSet > & ptr)
	static int _bind_op_write_overload_40(lua_State *L) {
		if (!_lg_typecheck_op_write_overload_40(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::ref_ptr< osg::PrimitiveSet > & ptr) function, expected prototype:\nosgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::ref_ptr< osg::PrimitiveSet > & ptr)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ref_ptr< osg::PrimitiveSet > ptr = dynamic_cast< osg::PrimitiveSet* >(Luna< osg::Referenced >::check(L,2));

		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::OutputStream & osgDB::OutputStream::operator<<(const osg::ref_ptr< osg::PrimitiveSet > &). Got : '%s'\n%s",typeid(Luna< osgDB::OutputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::OutputStream* lret = &self->operator<<(ptr);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::OutputStream >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgDB::OutputStream::operator<<
	static int _bind_op_write(lua_State *L) {
		if (_lg_typecheck_op_write_overload_1(L)) return _bind_op_write_overload_1(L);
		if (_lg_typecheck_op_write_overload_2(L)) return _bind_op_write_overload_2(L);
		if (_lg_typecheck_op_write_overload_3(L)) return _bind_op_write_overload_3(L);
		if (_lg_typecheck_op_write_overload_4(L)) return _bind_op_write_overload_4(L);
		if (_lg_typecheck_op_write_overload_5(L)) return _bind_op_write_overload_5(L);
		if (_lg_typecheck_op_write_overload_6(L)) return _bind_op_write_overload_6(L);
		if (_lg_typecheck_op_write_overload_7(L)) return _bind_op_write_overload_7(L);
		if (_lg_typecheck_op_write_overload_8(L)) return _bind_op_write_overload_8(L);
		if (_lg_typecheck_op_write_overload_9(L)) return _bind_op_write_overload_9(L);
		if (_lg_typecheck_op_write_overload_10(L)) return _bind_op_write_overload_10(L);
		if (_lg_typecheck_op_write_overload_11(L)) return _bind_op_write_overload_11(L);
		if (_lg_typecheck_op_write_overload_12(L)) return _bind_op_write_overload_12(L);
		if (_lg_typecheck_op_write_overload_13(L)) return _bind_op_write_overload_13(L);
		if (_lg_typecheck_op_write_overload_14(L)) return _bind_op_write_overload_14(L);
		if (_lg_typecheck_op_write_overload_15(L)) return _bind_op_write_overload_15(L);
		if (_lg_typecheck_op_write_overload_16(L)) return _bind_op_write_overload_16(L);
		if (_lg_typecheck_op_write_overload_17(L)) return _bind_op_write_overload_17(L);
		if (_lg_typecheck_op_write_overload_18(L)) return _bind_op_write_overload_18(L);
		if (_lg_typecheck_op_write_overload_19(L)) return _bind_op_write_overload_19(L);
		if (_lg_typecheck_op_write_overload_20(L)) return _bind_op_write_overload_20(L);
		if (_lg_typecheck_op_write_overload_21(L)) return _bind_op_write_overload_21(L);
		if (_lg_typecheck_op_write_overload_22(L)) return _bind_op_write_overload_22(L);
		if (_lg_typecheck_op_write_overload_23(L)) return _bind_op_write_overload_23(L);
		if (_lg_typecheck_op_write_overload_24(L)) return _bind_op_write_overload_24(L);
		if (_lg_typecheck_op_write_overload_25(L)) return _bind_op_write_overload_25(L);
		if (_lg_typecheck_op_write_overload_26(L)) return _bind_op_write_overload_26(L);
		if (_lg_typecheck_op_write_overload_27(L)) return _bind_op_write_overload_27(L);
		if (_lg_typecheck_op_write_overload_28(L)) return _bind_op_write_overload_28(L);
		if (_lg_typecheck_op_write_overload_29(L)) return _bind_op_write_overload_29(L);
		if (_lg_typecheck_op_write_overload_30(L)) return _bind_op_write_overload_30(L);
		if (_lg_typecheck_op_write_overload_31(L)) return _bind_op_write_overload_31(L);
		if (_lg_typecheck_op_write_overload_32(L)) return _bind_op_write_overload_32(L);
		if (_lg_typecheck_op_write_overload_33(L)) return _bind_op_write_overload_33(L);
		if (_lg_typecheck_op_write_overload_34(L)) return _bind_op_write_overload_34(L);
		if (_lg_typecheck_op_write_overload_35(L)) return _bind_op_write_overload_35(L);
		if (_lg_typecheck_op_write_overload_36(L)) return _bind_op_write_overload_36(L);
		if (_lg_typecheck_op_write_overload_37(L)) return _bind_op_write_overload_37(L);
		if (_lg_typecheck_op_write_overload_38(L)) return _bind_op_write_overload_38(L);
		if (_lg_typecheck_op_write_overload_39(L)) return _bind_op_write_overload_39(L);
		if (_lg_typecheck_op_write_overload_40(L)) return _bind_op_write_overload_40(L);

		luaL_error(L, "error in function operator<<, cannot match any of the overloads for function operator<<:\n  operator<<(bool)\n  operator<<(char)\n  operator<<(unsigned char)\n  operator<<(short)\n  operator<<(unsigned short)\n  operator<<(int)\n  operator<<(unsigned int)\n  operator<<(long)\n  operator<<(unsigned long)\n  operator<<(float)\n  operator<<(double)\n  operator<<(const std::string &)\n  operator<<(const char *)\n  operator<<(const osgDB::ObjectGLenum &)\n  operator<<(const osgDB::ObjectProperty &)\n  operator<<(const osgDB::ObjectMark &)\n  operator<<(const osg::Vec2b &)\n  operator<<(const osg::Vec3b &)\n  operator<<(const osg::Vec4b &)\n  operator<<(const osg::Vec4ub &)\n  operator<<(const osg::Vec2s &)\n  operator<<(const osg::Vec3s &)\n  operator<<(const osg::Vec4s &)\n  operator<<(const osg::Vec2f &)\n  operator<<(const osg::Vec3f &)\n  operator<<(const osg::Vec4f &)\n  operator<<(const osg::Vec2d &)\n  operator<<(const osg::Vec3d &)\n  operator<<(const osg::Vec4d &)\n  operator<<(const osg::Quat &)\n  operator<<(const osg::Plane &)\n  operator<<(const osg::Matrixf &)\n  operator<<(const osg::Matrixd &)\n  operator<<(const osg::Array *)\n  operator<<(const osg::Image *)\n  operator<<(const osg::PrimitiveSet *)\n  operator<<(const osg::Object *)\n  operator<<(const osg::ref_ptr< osg::Array > &)\n  operator<<(const osg::ref_ptr< osg::Image > &)\n  operator<<(const osg::ref_ptr< osg::PrimitiveSet > &)\n");
		return 0;
	}


};

osgDB::OutputStream* LunaTraits< osgDB::OutputStream >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgDB_OutputStream::_bind_ctor(L);
}

void LunaTraits< osgDB::OutputStream >::_bind_dtor(osgDB::OutputStream* obj) {
	delete obj;
}

const char LunaTraits< osgDB::OutputStream >::className[] = "OutputStream";
const char LunaTraits< osgDB::OutputStream >::fullName[] = "osgDB::OutputStream";
const char LunaTraits< osgDB::OutputStream >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::OutputStream >::parents[] = {0};
const int LunaTraits< osgDB::OutputStream >::hash = 70071506;
const int LunaTraits< osgDB::OutputStream >::uniqueIDs[] = {70071506,0};

luna_RegType LunaTraits< osgDB::OutputStream >::methods[] = {
	{"isBinary", &luna_wrapper_osgDB_OutputStream::_bind_isBinary},
	{"getSchemaName", &luna_wrapper_osgDB_OutputStream::_bind_getSchemaName},
	{"getOptions", &luna_wrapper_osgDB_OutputStream::_bind_getOptions},
	{"setWriteImageHint", &luna_wrapper_osgDB_OutputStream::_bind_setWriteImageHint},
	{"getWriteImageHint", &luna_wrapper_osgDB_OutputStream::_bind_getWriteImageHint},
	{"writeWrappedString", &luna_wrapper_osgDB_OutputStream::_bind_writeWrappedString},
	{"writeCharArray", &luna_wrapper_osgDB_OutputStream::_bind_writeCharArray},
	{"writeArray", &luna_wrapper_osgDB_OutputStream::_bind_writeArray},
	{"writePrimitiveSet", &luna_wrapper_osgDB_OutputStream::_bind_writePrimitiveSet},
	{"writeImage", &luna_wrapper_osgDB_OutputStream::_bind_writeImage},
	{"writeObject", &luna_wrapper_osgDB_OutputStream::_bind_writeObject},
	{"writeObjectFields", &luna_wrapper_osgDB_OutputStream::_bind_writeObjectFields},
	{"setOutputIterator", &luna_wrapper_osgDB_OutputStream::_bind_setOutputIterator},
	{"start", &luna_wrapper_osgDB_OutputStream::_bind_start},
	{"compress", &luna_wrapper_osgDB_OutputStream::_bind_compress},
	{"writeSchema", &luna_wrapper_osgDB_OutputStream::_bind_writeSchema},
	{"writeDouble", &luna_wrapper_osgDB_OutputStream::_bind_writeDouble},
	{"writeInt", &luna_wrapper_osgDB_OutputStream::_bind_writeInt},
	{"writeString", &luna_wrapper_osgDB_OutputStream::_bind_writeString},
	{"writeBool", &luna_wrapper_osgDB_OutputStream::_bind_writeBool},
	{"writeProperty", &luna_wrapper_osgDB_OutputStream::_bind_writeProperty},
	{"writeMatrixd", &luna_wrapper_osgDB_OutputStream::_bind_writeMatrixd},
	{"writeVec2d", &luna_wrapper_osgDB_OutputStream::_bind_writeVec2d},
	{"writeVec2f", &luna_wrapper_osgDB_OutputStream::_bind_writeVec2f},
	{"writeVec3d", &luna_wrapper_osgDB_OutputStream::_bind_writeVec3d},
	{"writeVec3f", &luna_wrapper_osgDB_OutputStream::_bind_writeVec3f},
	{"writeVec4d", &luna_wrapper_osgDB_OutputStream::_bind_writeVec4d},
	{"writeVec4f", &luna_wrapper_osgDB_OutputStream::_bind_writeVec4f},
	{"writeQuat", &luna_wrapper_osgDB_OutputStream::_bind_writeQuat},
	{"endl", &luna_wrapper_osgDB_OutputStream::_bind_endl},
	{"useHexMode", &luna_wrapper_osgDB_OutputStream::_bind_useHexMode},
	{"useDecMode", &luna_wrapper_osgDB_OutputStream::_bind_useDecMode},
	{"beginBracket", &luna_wrapper_osgDB_OutputStream::_bind_beginBracket},
	{"endBracket", &luna_wrapper_osgDB_OutputStream::_bind_endBracket},
	{"getPROPERTY", &luna_wrapper_osgDB_OutputStream::_bind_getPROPERTY},
	{"get_END_BRACKET", &luna_wrapper_osgDB_OutputStream::_bind_get_END_BRACKET},
	{"setPROPERTY", &luna_wrapper_osgDB_OutputStream::_bind_setPROPERTY},
	{"set_END_BRACKET", &luna_wrapper_osgDB_OutputStream::_bind_set_END_BRACKET},
	{"op_write", &luna_wrapper_osgDB_OutputStream::_bind_op_write},
	{"dynCast", &luna_wrapper_osgDB_OutputStream::_bind_dynCast},
	{"__eq", &luna_wrapper_osgDB_OutputStream::_bind___eq},
	{"fromVoid", &luna_wrapper_osgDB_OutputStream::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgDB_OutputStream::_bind_asVoid},
	{"getTable", &luna_wrapper_osgDB_OutputStream::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::OutputStream >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::OutputStream >::enumValues[] = {
	{"WRITE_UNKNOWN", osgDB::OutputStream::WRITE_UNKNOWN},
	{"WRITE_SCENE", osgDB::OutputStream::WRITE_SCENE},
	{"WRITE_IMAGE", osgDB::OutputStream::WRITE_IMAGE},
	{"WRITE_OBJECT", osgDB::OutputStream::WRITE_OBJECT},
	{"WRITE_USE_IMAGE_HINT", osgDB::OutputStream::WRITE_USE_IMAGE_HINT},
	{"WRITE_USE_EXTERNAL", osgDB::OutputStream::WRITE_USE_EXTERNAL},
	{"WRITE_INLINE_DATA", osgDB::OutputStream::WRITE_INLINE_DATA},
	{"WRITE_INLINE_FILE", osgDB::OutputStream::WRITE_INLINE_FILE},
	{"WRITE_EXTERNAL_FILE", osgDB::OutputStream::WRITE_EXTERNAL_FILE},
	{0,0}
};


