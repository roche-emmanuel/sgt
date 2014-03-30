#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_ConstArrayVisitor.h>

class luna_wrapper_osg_ConstArrayVisitor {
public:
	typedef Luna< osg::ConstArrayVisitor > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::ConstArrayVisitor* self=(Luna< osg::ConstArrayVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<osg::ConstArrayVisitor,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,80735172) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::ConstArrayVisitor*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::ConstArrayVisitor* rhs =(Luna< osg::ConstArrayVisitor >::check(L,2));
		osg::ConstArrayVisitor* self=(Luna< osg::ConstArrayVisitor >::check(L,1));
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

		osg::ConstArrayVisitor* self= (osg::ConstArrayVisitor*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::ConstArrayVisitor >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,80735172) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osg::ConstArrayVisitor >::check(L,1));
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

		osg::ConstArrayVisitor* self=(Luna< osg::ConstArrayVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::ConstArrayVisitor");
		
		return luna_dynamicCast(L,converters,"osg::ConstArrayVisitor",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_apply_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Array >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,46527738) ) return false;
		if( (!(Luna< osg::TemplateIndexArray< signed char, osg::Array::ByteArrayType, 1, GL_BYTE > >::checkSubType< osg::ByteArray >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,72312551) ) return false;
		if( (!(Luna< osg::TemplateIndexArray< short, osg::Array::ShortArrayType, 1, GL_SHORT > >::checkSubType< osg::ShortArray >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,77568465) ) return false;
		if( (!(Luna< osg::TemplateIndexArray< int, osg::Array::IntArrayType, 1, 0x1404 > >::checkSubType< osg::IntArray >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76345736) ) return false;
		if( (!(Luna< osg::TemplateIndexArray< unsigned char, osg::Array::UByteArrayType, 1, GL_UNSIGNED_BYTE > >::checkSubType< osg::UByteArray >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_6(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,59968751) ) return false;
		if( (!(Luna< osg::TemplateIndexArray< unsigned short, osg::Array::UShortArrayType, 1, GL_UNSIGNED_SHORT > >::checkSubType< osg::UShortArray >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_7(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,14674410) ) return false;
		if( (!(Luna< osg::TemplateIndexArray< unsigned int, osg::Array::UIntArrayType, 1, 0x1405 > >::checkSubType< osg::UIntArray >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_8(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,66705573) ) return false;
		if( (!(Luna< osg::TemplateArray< float, osg::Array::FloatArrayType, 1, GL_FLOAT > >::checkSubType< osg::FloatArray >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_9(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,14704447) ) return false;
		if( (!(Luna< osg::TemplateArray< double, osg::Array::DoubleArrayType, 1, 0x140A > >::checkSubType< osg::DoubleArray >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_10(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Vec2Array >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_11(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Vec3Array >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_12(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Vec4Array >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_13(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,40646071) ) return false;
		if( (!(Luna< osg::TemplateArray< osg::Vec4ub, osg::Array::Vec4ubArrayType, 4, GL_UNSIGNED_BYTE > >::checkSubType< osg::Vec4ubArray >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_14(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,66655983) ) return false;
		if( (!(Luna< osg::TemplateArray< osg::Vec2b, osg::Array::Vec2bArrayType, 2, GL_BYTE > >::checkSubType< osg::Vec2bArray >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_15(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,49027762) ) return false;
		if( (!(Luna< osg::TemplateArray< osg::Vec3b, osg::Array::Vec3bArrayType, 3, GL_BYTE > >::checkSubType< osg::Vec3bArray >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_16(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,75159211) ) return false;
		if( (!(Luna< osg::TemplateArray< osg::Vec4b, osg::Array::Vec4bArrayType, 4, GL_BYTE > >::checkSubType< osg::Vec4bArray >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_17(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,38996958) ) return false;
		if( (!(Luna< osg::TemplateArray< osg::Vec2s, osg::Array::Vec2sArrayType, 2, GL_SHORT > >::checkSubType< osg::Vec2sArray >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_18(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,16762640) ) return false;
		if( (!(Luna< osg::TemplateArray< osg::Vec3s, osg::Array::Vec3sArrayType, 3, GL_SHORT > >::checkSubType< osg::Vec3sArray >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_19(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18397997) ) return false;
		if( (!(Luna< osg::TemplateArray< osg::Vec4s, osg::Array::Vec4sArrayType, 4, GL_SHORT > >::checkSubType< osg::Vec4sArray >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_20(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,88202160) ) return false;
		if( (!(Luna< osg::TemplateArray< osg::Vec2d, osg::Array::Vec2dArrayType, 2, 0x140A > >::checkSubType< osg::Vec2dArray >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_21(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18847939) ) return false;
		if( (!(Luna< osg::TemplateArray< osg::Vec3d, osg::Array::Vec3dArrayType, 3, 0x140A > >::checkSubType< osg::Vec3dArray >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_22(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,21777619) ) return false;
		if( (!(Luna< osg::TemplateArray< osg::Vec4d, osg::Array::Vec4dArrayType, 4, 0x140A > >::checkSubType< osg::Vec4dArray >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_23(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76760649) ) return false;
		if( (!(Luna< osg::TemplateArray< osg::Matrixf, osg::Array::MatrixArrayType, 16, GL_FLOAT > >::checkSubType< osg::MatrixfArray >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Array >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,46527738) ) return false;
		if( (!(Luna< osg::TemplateIndexArray< signed char, osg::Array::ByteArrayType, 1, GL_BYTE > >::checkSubType< osg::ByteArray >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,72312551) ) return false;
		if( (!(Luna< osg::TemplateIndexArray< short, osg::Array::ShortArrayType, 1, GL_SHORT > >::checkSubType< osg::ShortArray >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,77568465) ) return false;
		if( (!(Luna< osg::TemplateIndexArray< int, osg::Array::IntArrayType, 1, 0x1404 > >::checkSubType< osg::IntArray >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76345736) ) return false;
		if( (!(Luna< osg::TemplateIndexArray< unsigned char, osg::Array::UByteArrayType, 1, GL_UNSIGNED_BYTE > >::checkSubType< osg::UByteArray >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_6(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,59968751) ) return false;
		if( (!(Luna< osg::TemplateIndexArray< unsigned short, osg::Array::UShortArrayType, 1, GL_UNSIGNED_SHORT > >::checkSubType< osg::UShortArray >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_7(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,14674410) ) return false;
		if( (!(Luna< osg::TemplateIndexArray< unsigned int, osg::Array::UIntArrayType, 1, 0x1405 > >::checkSubType< osg::UIntArray >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_8(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,66705573) ) return false;
		if( (!(Luna< osg::TemplateArray< float, osg::Array::FloatArrayType, 1, GL_FLOAT > >::checkSubType< osg::FloatArray >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_9(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,14704447) ) return false;
		if( (!(Luna< osg::TemplateArray< double, osg::Array::DoubleArrayType, 1, 0x140A > >::checkSubType< osg::DoubleArray >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_10(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Vec2Array >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_11(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Vec3Array >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_12(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Vec4Array >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_13(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,40646071) ) return false;
		if( (!(Luna< osg::TemplateArray< osg::Vec4ub, osg::Array::Vec4ubArrayType, 4, GL_UNSIGNED_BYTE > >::checkSubType< osg::Vec4ubArray >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_14(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,66655983) ) return false;
		if( (!(Luna< osg::TemplateArray< osg::Vec2b, osg::Array::Vec2bArrayType, 2, GL_BYTE > >::checkSubType< osg::Vec2bArray >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_15(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,49027762) ) return false;
		if( (!(Luna< osg::TemplateArray< osg::Vec3b, osg::Array::Vec3bArrayType, 3, GL_BYTE > >::checkSubType< osg::Vec3bArray >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_16(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,75159211) ) return false;
		if( (!(Luna< osg::TemplateArray< osg::Vec4b, osg::Array::Vec4bArrayType, 4, GL_BYTE > >::checkSubType< osg::Vec4bArray >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_17(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,38996958) ) return false;
		if( (!(Luna< osg::TemplateArray< osg::Vec2s, osg::Array::Vec2sArrayType, 2, GL_SHORT > >::checkSubType< osg::Vec2sArray >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_18(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,16762640) ) return false;
		if( (!(Luna< osg::TemplateArray< osg::Vec3s, osg::Array::Vec3sArrayType, 3, GL_SHORT > >::checkSubType< osg::Vec3sArray >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_19(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18397997) ) return false;
		if( (!(Luna< osg::TemplateArray< osg::Vec4s, osg::Array::Vec4sArrayType, 4, GL_SHORT > >::checkSubType< osg::Vec4sArray >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_20(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,88202160) ) return false;
		if( (!(Luna< osg::TemplateArray< osg::Vec2d, osg::Array::Vec2dArrayType, 2, 0x140A > >::checkSubType< osg::Vec2dArray >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_21(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18847939) ) return false;
		if( (!(Luna< osg::TemplateArray< osg::Vec3d, osg::Array::Vec3dArrayType, 3, 0x140A > >::checkSubType< osg::Vec3dArray >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_22(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,21777619) ) return false;
		if( (!(Luna< osg::TemplateArray< osg::Vec4d, osg::Array::Vec4dArrayType, 4, 0x140A > >::checkSubType< osg::Vec4dArray >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_23(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76760649) ) return false;
		if( (!(Luna< osg::TemplateArray< osg::Matrixf, osg::Array::MatrixArrayType, 16, GL_FLOAT > >::checkSubType< osg::MatrixfArray >(L,2))) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::ConstArrayVisitor::ConstArrayVisitor()
	static osg::ConstArrayVisitor* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::ConstArrayVisitor::ConstArrayVisitor() function, expected prototype:\nosg::ConstArrayVisitor::ConstArrayVisitor()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::ConstArrayVisitor();
	}

	// osg::ConstArrayVisitor::ConstArrayVisitor(lua_Table * data)
	static osg::ConstArrayVisitor* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::ConstArrayVisitor::ConstArrayVisitor(lua_Table * data) function, expected prototype:\nosg::ConstArrayVisitor::ConstArrayVisitor(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_ConstArrayVisitor(L,NULL);
	}

	// Overload binder for osg::ConstArrayVisitor::ConstArrayVisitor
	static osg::ConstArrayVisitor* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ConstArrayVisitor, cannot match any of the overloads for function ConstArrayVisitor:\n  ConstArrayVisitor()\n  ConstArrayVisitor(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void osg::ConstArrayVisitor::apply(const osg::Array & arg1)
	static int _bind_apply_overload_1(lua_State *L) {
		if (!_lg_typecheck_apply_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ConstArrayVisitor::apply(const osg::Array & arg1) function, expected prototype:\nvoid osg::ConstArrayVisitor::apply(const osg::Array & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Array* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::Array >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstArrayVisitor::apply function");
		}
		const osg::Array & _arg1=*_arg1_ptr;

		osg::ConstArrayVisitor* self=(Luna< osg::ConstArrayVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ConstArrayVisitor::apply(const osg::Array &). Got : '%s'\n%s",typeid(Luna< osg::ConstArrayVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstArrayVisitor::apply(const osg::ByteArray & arg1)
	static int _bind_apply_overload_2(lua_State *L) {
		if (!_lg_typecheck_apply_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ConstArrayVisitor::apply(const osg::ByteArray & arg1) function, expected prototype:\nvoid osg::ConstArrayVisitor::apply(const osg::ByteArray & arg1)\nClass arguments details:\narg 1 ID = 59587824\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::ByteArray* _arg1_ptr=(Luna< osg::TemplateIndexArray< signed char, osg::Array::ByteArrayType, 1, GL_BYTE > >::checkSubType< osg::ByteArray >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstArrayVisitor::apply function");
		}
		const osg::ByteArray & _arg1=*_arg1_ptr;

		osg::ConstArrayVisitor* self=(Luna< osg::ConstArrayVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ConstArrayVisitor::apply(const osg::ByteArray &). Got : '%s'\n%s",typeid(Luna< osg::ConstArrayVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstArrayVisitor::apply(const osg::ShortArray & arg1)
	static int _bind_apply_overload_3(lua_State *L) {
		if (!_lg_typecheck_apply_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ConstArrayVisitor::apply(const osg::ShortArray & arg1) function, expected prototype:\nvoid osg::ConstArrayVisitor::apply(const osg::ShortArray & arg1)\nClass arguments details:\narg 1 ID = 17157487\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::ShortArray* _arg1_ptr=(Luna< osg::TemplateIndexArray< short, osg::Array::ShortArrayType, 1, GL_SHORT > >::checkSubType< osg::ShortArray >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstArrayVisitor::apply function");
		}
		const osg::ShortArray & _arg1=*_arg1_ptr;

		osg::ConstArrayVisitor* self=(Luna< osg::ConstArrayVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ConstArrayVisitor::apply(const osg::ShortArray &). Got : '%s'\n%s",typeid(Luna< osg::ConstArrayVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstArrayVisitor::apply(const osg::IntArray & arg1)
	static int _bind_apply_overload_4(lua_State *L) {
		if (!_lg_typecheck_apply_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ConstArrayVisitor::apply(const osg::IntArray & arg1) function, expected prototype:\nvoid osg::ConstArrayVisitor::apply(const osg::IntArray & arg1)\nClass arguments details:\narg 1 ID = 28130065\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::IntArray* _arg1_ptr=(Luna< osg::TemplateIndexArray< int, osg::Array::IntArrayType, 1, 0x1404 > >::checkSubType< osg::IntArray >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstArrayVisitor::apply function");
		}
		const osg::IntArray & _arg1=*_arg1_ptr;

		osg::ConstArrayVisitor* self=(Luna< osg::ConstArrayVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ConstArrayVisitor::apply(const osg::IntArray &). Got : '%s'\n%s",typeid(Luna< osg::ConstArrayVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstArrayVisitor::apply(const osg::UByteArray & arg1)
	static int _bind_apply_overload_5(lua_State *L) {
		if (!_lg_typecheck_apply_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ConstArrayVisitor::apply(const osg::UByteArray & arg1) function, expected prototype:\nvoid osg::ConstArrayVisitor::apply(const osg::UByteArray & arg1)\nClass arguments details:\narg 1 ID = 72202494\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::UByteArray* _arg1_ptr=(Luna< osg::TemplateIndexArray< unsigned char, osg::Array::UByteArrayType, 1, GL_UNSIGNED_BYTE > >::checkSubType< osg::UByteArray >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstArrayVisitor::apply function");
		}
		const osg::UByteArray & _arg1=*_arg1_ptr;

		osg::ConstArrayVisitor* self=(Luna< osg::ConstArrayVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ConstArrayVisitor::apply(const osg::UByteArray &). Got : '%s'\n%s",typeid(Luna< osg::ConstArrayVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstArrayVisitor::apply(const osg::UShortArray & arg1)
	static int _bind_apply_overload_6(lua_State *L) {
		if (!_lg_typecheck_apply_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ConstArrayVisitor::apply(const osg::UShortArray & arg1) function, expected prototype:\nvoid osg::ConstArrayVisitor::apply(const osg::UShortArray & arg1)\nClass arguments details:\narg 1 ID = 4787198\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::UShortArray* _arg1_ptr=(Luna< osg::TemplateIndexArray< unsigned short, osg::Array::UShortArrayType, 1, GL_UNSIGNED_SHORT > >::checkSubType< osg::UShortArray >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstArrayVisitor::apply function");
		}
		const osg::UShortArray & _arg1=*_arg1_ptr;

		osg::ConstArrayVisitor* self=(Luna< osg::ConstArrayVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ConstArrayVisitor::apply(const osg::UShortArray &). Got : '%s'\n%s",typeid(Luna< osg::ConstArrayVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstArrayVisitor::apply(const osg::UIntArray & arg1)
	static int _bind_apply_overload_7(lua_State *L) {
		if (!_lg_typecheck_apply_overload_7(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ConstArrayVisitor::apply(const osg::UIntArray & arg1) function, expected prototype:\nvoid osg::ConstArrayVisitor::apply(const osg::UIntArray & arg1)\nClass arguments details:\narg 1 ID = 86600648\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::UIntArray* _arg1_ptr=(Luna< osg::TemplateIndexArray< unsigned int, osg::Array::UIntArrayType, 1, 0x1405 > >::checkSubType< osg::UIntArray >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstArrayVisitor::apply function");
		}
		const osg::UIntArray & _arg1=*_arg1_ptr;

		osg::ConstArrayVisitor* self=(Luna< osg::ConstArrayVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ConstArrayVisitor::apply(const osg::UIntArray &). Got : '%s'\n%s",typeid(Luna< osg::ConstArrayVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstArrayVisitor::apply(const osg::FloatArray & arg1)
	static int _bind_apply_overload_8(lua_State *L) {
		if (!_lg_typecheck_apply_overload_8(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ConstArrayVisitor::apply(const osg::FloatArray & arg1) function, expected prototype:\nvoid osg::ConstArrayVisitor::apply(const osg::FloatArray & arg1)\nClass arguments details:\narg 1 ID = 43730923\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::FloatArray* _arg1_ptr=(Luna< osg::TemplateArray< float, osg::Array::FloatArrayType, 1, GL_FLOAT > >::checkSubType< osg::FloatArray >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstArrayVisitor::apply function");
		}
		const osg::FloatArray & _arg1=*_arg1_ptr;

		osg::ConstArrayVisitor* self=(Luna< osg::ConstArrayVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ConstArrayVisitor::apply(const osg::FloatArray &). Got : '%s'\n%s",typeid(Luna< osg::ConstArrayVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstArrayVisitor::apply(const osg::DoubleArray & arg1)
	static int _bind_apply_overload_9(lua_State *L) {
		if (!_lg_typecheck_apply_overload_9(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ConstArrayVisitor::apply(const osg::DoubleArray & arg1) function, expected prototype:\nvoid osg::ConstArrayVisitor::apply(const osg::DoubleArray & arg1)\nClass arguments details:\narg 1 ID = 50192637\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::DoubleArray* _arg1_ptr=(Luna< osg::TemplateArray< double, osg::Array::DoubleArrayType, 1, 0x140A > >::checkSubType< osg::DoubleArray >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstArrayVisitor::apply function");
		}
		const osg::DoubleArray & _arg1=*_arg1_ptr;

		osg::ConstArrayVisitor* self=(Luna< osg::ConstArrayVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ConstArrayVisitor::apply(const osg::DoubleArray &). Got : '%s'\n%s",typeid(Luna< osg::ConstArrayVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstArrayVisitor::apply(const osg::Vec2Array & arg1)
	static int _bind_apply_overload_10(lua_State *L) {
		if (!_lg_typecheck_apply_overload_10(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ConstArrayVisitor::apply(const osg::Vec2Array & arg1) function, expected prototype:\nvoid osg::ConstArrayVisitor::apply(const osg::Vec2Array & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec2Array* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::Vec2Array >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstArrayVisitor::apply function");
		}
		const osg::Vec2Array & _arg1=*_arg1_ptr;

		osg::ConstArrayVisitor* self=(Luna< osg::ConstArrayVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ConstArrayVisitor::apply(const osg::Vec2Array &). Got : '%s'\n%s",typeid(Luna< osg::ConstArrayVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstArrayVisitor::apply(const osg::Vec3Array & arg1)
	static int _bind_apply_overload_11(lua_State *L) {
		if (!_lg_typecheck_apply_overload_11(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ConstArrayVisitor::apply(const osg::Vec3Array & arg1) function, expected prototype:\nvoid osg::ConstArrayVisitor::apply(const osg::Vec3Array & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3Array* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::Vec3Array >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstArrayVisitor::apply function");
		}
		const osg::Vec3Array & _arg1=*_arg1_ptr;

		osg::ConstArrayVisitor* self=(Luna< osg::ConstArrayVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ConstArrayVisitor::apply(const osg::Vec3Array &). Got : '%s'\n%s",typeid(Luna< osg::ConstArrayVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstArrayVisitor::apply(const osg::Vec4Array & arg1)
	static int _bind_apply_overload_12(lua_State *L) {
		if (!_lg_typecheck_apply_overload_12(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ConstArrayVisitor::apply(const osg::Vec4Array & arg1) function, expected prototype:\nvoid osg::ConstArrayVisitor::apply(const osg::Vec4Array & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4Array* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::Vec4Array >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstArrayVisitor::apply function");
		}
		const osg::Vec4Array & _arg1=*_arg1_ptr;

		osg::ConstArrayVisitor* self=(Luna< osg::ConstArrayVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ConstArrayVisitor::apply(const osg::Vec4Array &). Got : '%s'\n%s",typeid(Luna< osg::ConstArrayVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstArrayVisitor::apply(const osg::Vec4ubArray & arg1)
	static int _bind_apply_overload_13(lua_State *L) {
		if (!_lg_typecheck_apply_overload_13(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ConstArrayVisitor::apply(const osg::Vec4ubArray & arg1) function, expected prototype:\nvoid osg::ConstArrayVisitor::apply(const osg::Vec4ubArray & arg1)\nClass arguments details:\narg 1 ID = 83703711\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4ubArray* _arg1_ptr=(Luna< osg::TemplateArray< osg::Vec4ub, osg::Array::Vec4ubArrayType, 4, GL_UNSIGNED_BYTE > >::checkSubType< osg::Vec4ubArray >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstArrayVisitor::apply function");
		}
		const osg::Vec4ubArray & _arg1=*_arg1_ptr;

		osg::ConstArrayVisitor* self=(Luna< osg::ConstArrayVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ConstArrayVisitor::apply(const osg::Vec4ubArray &). Got : '%s'\n%s",typeid(Luna< osg::ConstArrayVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstArrayVisitor::apply(const osg::Vec2bArray & arg1)
	static int _bind_apply_overload_14(lua_State *L) {
		if (!_lg_typecheck_apply_overload_14(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ConstArrayVisitor::apply(const osg::Vec2bArray & arg1) function, expected prototype:\nvoid osg::ConstArrayVisitor::apply(const osg::Vec2bArray & arg1)\nClass arguments details:\narg 1 ID = 35367467\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec2bArray* _arg1_ptr=(Luna< osg::TemplateArray< osg::Vec2b, osg::Array::Vec2bArrayType, 2, GL_BYTE > >::checkSubType< osg::Vec2bArray >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstArrayVisitor::apply function");
		}
		const osg::Vec2bArray & _arg1=*_arg1_ptr;

		osg::ConstArrayVisitor* self=(Luna< osg::ConstArrayVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ConstArrayVisitor::apply(const osg::Vec2bArray &). Got : '%s'\n%s",typeid(Luna< osg::ConstArrayVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstArrayVisitor::apply(const osg::Vec3bArray & arg1)
	static int _bind_apply_overload_15(lua_State *L) {
		if (!_lg_typecheck_apply_overload_15(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ConstArrayVisitor::apply(const osg::Vec3bArray & arg1) function, expected prototype:\nvoid osg::ConstArrayVisitor::apply(const osg::Vec3bArray & arg1)\nClass arguments details:\narg 1 ID = 22871013\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3bArray* _arg1_ptr=(Luna< osg::TemplateArray< osg::Vec3b, osg::Array::Vec3bArrayType, 3, GL_BYTE > >::checkSubType< osg::Vec3bArray >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstArrayVisitor::apply function");
		}
		const osg::Vec3bArray & _arg1=*_arg1_ptr;

		osg::ConstArrayVisitor* self=(Luna< osg::ConstArrayVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ConstArrayVisitor::apply(const osg::Vec3bArray &). Got : '%s'\n%s",typeid(Luna< osg::ConstArrayVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstArrayVisitor::apply(const osg::Vec4bArray & arg1)
	static int _bind_apply_overload_16(lua_State *L) {
		if (!_lg_typecheck_apply_overload_16(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ConstArrayVisitor::apply(const osg::Vec4bArray & arg1) function, expected prototype:\nvoid osg::ConstArrayVisitor::apply(const osg::Vec4bArray & arg1)\nClass arguments details:\narg 1 ID = 10374559\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4bArray* _arg1_ptr=(Luna< osg::TemplateArray< osg::Vec4b, osg::Array::Vec4bArrayType, 4, GL_BYTE > >::checkSubType< osg::Vec4bArray >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstArrayVisitor::apply function");
		}
		const osg::Vec4bArray & _arg1=*_arg1_ptr;

		osg::ConstArrayVisitor* self=(Luna< osg::ConstArrayVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ConstArrayVisitor::apply(const osg::Vec4bArray &). Got : '%s'\n%s",typeid(Luna< osg::ConstArrayVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstArrayVisitor::apply(const osg::Vec2sArray & arg1)
	static int _bind_apply_overload_17(lua_State *L) {
		if (!_lg_typecheck_apply_overload_17(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ConstArrayVisitor::apply(const osg::Vec2sArray & arg1) function, expected prototype:\nvoid osg::ConstArrayVisitor::apply(const osg::Vec2sArray & arg1)\nClass arguments details:\narg 1 ID = 22062959\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec2sArray* _arg1_ptr=(Luna< osg::TemplateArray< osg::Vec2s, osg::Array::Vec2sArrayType, 2, GL_SHORT > >::checkSubType< osg::Vec2sArray >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstArrayVisitor::apply function");
		}
		const osg::Vec2sArray & _arg1=*_arg1_ptr;

		osg::ConstArrayVisitor* self=(Luna< osg::ConstArrayVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ConstArrayVisitor::apply(const osg::Vec2sArray &). Got : '%s'\n%s",typeid(Luna< osg::ConstArrayVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstArrayVisitor::apply(const osg::Vec3sArray & arg1)
	static int _bind_apply_overload_18(lua_State *L) {
		if (!_lg_typecheck_apply_overload_18(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ConstArrayVisitor::apply(const osg::Vec3sArray & arg1) function, expected prototype:\nvoid osg::ConstArrayVisitor::apply(const osg::Vec3sArray & arg1)\nClass arguments details:\narg 1 ID = 9566505\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3sArray* _arg1_ptr=(Luna< osg::TemplateArray< osg::Vec3s, osg::Array::Vec3sArrayType, 3, GL_SHORT > >::checkSubType< osg::Vec3sArray >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstArrayVisitor::apply function");
		}
		const osg::Vec3sArray & _arg1=*_arg1_ptr;

		osg::ConstArrayVisitor* self=(Luna< osg::ConstArrayVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ConstArrayVisitor::apply(const osg::Vec3sArray &). Got : '%s'\n%s",typeid(Luna< osg::ConstArrayVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstArrayVisitor::apply(const osg::Vec4sArray & arg1)
	static int _bind_apply_overload_19(lua_State *L) {
		if (!_lg_typecheck_apply_overload_19(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ConstArrayVisitor::apply(const osg::Vec4sArray & arg1) function, expected prototype:\nvoid osg::ConstArrayVisitor::apply(const osg::Vec4sArray & arg1)\nClass arguments details:\narg 1 ID = 97070066\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4sArray* _arg1_ptr=(Luna< osg::TemplateArray< osg::Vec4s, osg::Array::Vec4sArrayType, 4, GL_SHORT > >::checkSubType< osg::Vec4sArray >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstArrayVisitor::apply function");
		}
		const osg::Vec4sArray & _arg1=*_arg1_ptr;

		osg::ConstArrayVisitor* self=(Luna< osg::ConstArrayVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ConstArrayVisitor::apply(const osg::Vec4sArray &). Got : '%s'\n%s",typeid(Luna< osg::ConstArrayVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstArrayVisitor::apply(const osg::Vec2dArray & arg1)
	static int _bind_apply_overload_20(lua_State *L) {
		if (!_lg_typecheck_apply_overload_20(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ConstArrayVisitor::apply(const osg::Vec2dArray & arg1) function, expected prototype:\nvoid osg::ConstArrayVisitor::apply(const osg::Vec2dArray & arg1)\nClass arguments details:\narg 1 ID = 92625769\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec2dArray* _arg1_ptr=(Luna< osg::TemplateArray< osg::Vec2d, osg::Array::Vec2dArrayType, 2, 0x140A > >::checkSubType< osg::Vec2dArray >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstArrayVisitor::apply function");
		}
		const osg::Vec2dArray & _arg1=*_arg1_ptr;

		osg::ConstArrayVisitor* self=(Luna< osg::ConstArrayVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ConstArrayVisitor::apply(const osg::Vec2dArray &). Got : '%s'\n%s",typeid(Luna< osg::ConstArrayVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstArrayVisitor::apply(const osg::Vec3dArray & arg1)
	static int _bind_apply_overload_21(lua_State *L) {
		if (!_lg_typecheck_apply_overload_21(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ConstArrayVisitor::apply(const osg::Vec3dArray & arg1) function, expected prototype:\nvoid osg::ConstArrayVisitor::apply(const osg::Vec3dArray & arg1)\nClass arguments details:\narg 1 ID = 80129315\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3dArray* _arg1_ptr=(Luna< osg::TemplateArray< osg::Vec3d, osg::Array::Vec3dArrayType, 3, 0x140A > >::checkSubType< osg::Vec3dArray >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstArrayVisitor::apply function");
		}
		const osg::Vec3dArray & _arg1=*_arg1_ptr;

		osg::ConstArrayVisitor* self=(Luna< osg::ConstArrayVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ConstArrayVisitor::apply(const osg::Vec3dArray &). Got : '%s'\n%s",typeid(Luna< osg::ConstArrayVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstArrayVisitor::apply(const osg::Vec4dArray & arg1)
	static int _bind_apply_overload_22(lua_State *L) {
		if (!_lg_typecheck_apply_overload_22(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ConstArrayVisitor::apply(const osg::Vec4dArray & arg1) function, expected prototype:\nvoid osg::ConstArrayVisitor::apply(const osg::Vec4dArray & arg1)\nClass arguments details:\narg 1 ID = 67632861\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4dArray* _arg1_ptr=(Luna< osg::TemplateArray< osg::Vec4d, osg::Array::Vec4dArrayType, 4, 0x140A > >::checkSubType< osg::Vec4dArray >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstArrayVisitor::apply function");
		}
		const osg::Vec4dArray & _arg1=*_arg1_ptr;

		osg::ConstArrayVisitor* self=(Luna< osg::ConstArrayVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ConstArrayVisitor::apply(const osg::Vec4dArray &). Got : '%s'\n%s",typeid(Luna< osg::ConstArrayVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstArrayVisitor::apply(const osg::MatrixfArray & arg1)
	static int _bind_apply_overload_23(lua_State *L) {
		if (!_lg_typecheck_apply_overload_23(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ConstArrayVisitor::apply(const osg::MatrixfArray & arg1) function, expected prototype:\nvoid osg::ConstArrayVisitor::apply(const osg::MatrixfArray & arg1)\nClass arguments details:\narg 1 ID = 82206572\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::MatrixfArray* _arg1_ptr=(Luna< osg::TemplateArray< osg::Matrixf, osg::Array::MatrixArrayType, 16, GL_FLOAT > >::checkSubType< osg::MatrixfArray >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstArrayVisitor::apply function");
		}
		const osg::MatrixfArray & _arg1=*_arg1_ptr;

		osg::ConstArrayVisitor* self=(Luna< osg::ConstArrayVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ConstArrayVisitor::apply(const osg::MatrixfArray &). Got : '%s'\n%s",typeid(Luna< osg::ConstArrayVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		return 0;
	}

	// Overload binder for osg::ConstArrayVisitor::apply
	static int _bind_apply(lua_State *L) {
		if (_lg_typecheck_apply_overload_1(L)) return _bind_apply_overload_1(L);
		if (_lg_typecheck_apply_overload_2(L)) return _bind_apply_overload_2(L);
		if (_lg_typecheck_apply_overload_3(L)) return _bind_apply_overload_3(L);
		if (_lg_typecheck_apply_overload_4(L)) return _bind_apply_overload_4(L);
		if (_lg_typecheck_apply_overload_5(L)) return _bind_apply_overload_5(L);
		if (_lg_typecheck_apply_overload_6(L)) return _bind_apply_overload_6(L);
		if (_lg_typecheck_apply_overload_7(L)) return _bind_apply_overload_7(L);
		if (_lg_typecheck_apply_overload_8(L)) return _bind_apply_overload_8(L);
		if (_lg_typecheck_apply_overload_9(L)) return _bind_apply_overload_9(L);
		if (_lg_typecheck_apply_overload_10(L)) return _bind_apply_overload_10(L);
		if (_lg_typecheck_apply_overload_11(L)) return _bind_apply_overload_11(L);
		if (_lg_typecheck_apply_overload_12(L)) return _bind_apply_overload_12(L);
		if (_lg_typecheck_apply_overload_13(L)) return _bind_apply_overload_13(L);
		if (_lg_typecheck_apply_overload_14(L)) return _bind_apply_overload_14(L);
		if (_lg_typecheck_apply_overload_15(L)) return _bind_apply_overload_15(L);
		if (_lg_typecheck_apply_overload_16(L)) return _bind_apply_overload_16(L);
		if (_lg_typecheck_apply_overload_17(L)) return _bind_apply_overload_17(L);
		if (_lg_typecheck_apply_overload_18(L)) return _bind_apply_overload_18(L);
		if (_lg_typecheck_apply_overload_19(L)) return _bind_apply_overload_19(L);
		if (_lg_typecheck_apply_overload_20(L)) return _bind_apply_overload_20(L);
		if (_lg_typecheck_apply_overload_21(L)) return _bind_apply_overload_21(L);
		if (_lg_typecheck_apply_overload_22(L)) return _bind_apply_overload_22(L);
		if (_lg_typecheck_apply_overload_23(L)) return _bind_apply_overload_23(L);

		luaL_error(L, "error in function apply, cannot match any of the overloads for function apply:\n  apply(const osg::Array &)\n  apply(const osg::ByteArray &)\n  apply(const osg::ShortArray &)\n  apply(const osg::IntArray &)\n  apply(const osg::UByteArray &)\n  apply(const osg::UShortArray &)\n  apply(const osg::UIntArray &)\n  apply(const osg::FloatArray &)\n  apply(const osg::DoubleArray &)\n  apply(const osg::Vec2Array &)\n  apply(const osg::Vec3Array &)\n  apply(const osg::Vec4Array &)\n  apply(const osg::Vec4ubArray &)\n  apply(const osg::Vec2bArray &)\n  apply(const osg::Vec3bArray &)\n  apply(const osg::Vec4bArray &)\n  apply(const osg::Vec2sArray &)\n  apply(const osg::Vec3sArray &)\n  apply(const osg::Vec4sArray &)\n  apply(const osg::Vec2dArray &)\n  apply(const osg::Vec3dArray &)\n  apply(const osg::Vec4dArray &)\n  apply(const osg::MatrixfArray &)\n");
		return 0;
	}

	// void osg::ConstArrayVisitor::base_apply(const osg::Array & arg1)
	static int _bind_base_apply_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ConstArrayVisitor::base_apply(const osg::Array & arg1) function, expected prototype:\nvoid osg::ConstArrayVisitor::base_apply(const osg::Array & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Array* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::Array >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstArrayVisitor::base_apply function");
		}
		const osg::Array & _arg1=*_arg1_ptr;

		osg::ConstArrayVisitor* self=(Luna< osg::ConstArrayVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ConstArrayVisitor::base_apply(const osg::Array &). Got : '%s'\n%s",typeid(Luna< osg::ConstArrayVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ConstArrayVisitor::apply(_arg1);

		return 0;
	}

	// void osg::ConstArrayVisitor::base_apply(const osg::ByteArray & arg1)
	static int _bind_base_apply_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ConstArrayVisitor::base_apply(const osg::ByteArray & arg1) function, expected prototype:\nvoid osg::ConstArrayVisitor::base_apply(const osg::ByteArray & arg1)\nClass arguments details:\narg 1 ID = 59587824\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::ByteArray* _arg1_ptr=(Luna< osg::TemplateIndexArray< signed char, osg::Array::ByteArrayType, 1, GL_BYTE > >::checkSubType< osg::ByteArray >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstArrayVisitor::base_apply function");
		}
		const osg::ByteArray & _arg1=*_arg1_ptr;

		osg::ConstArrayVisitor* self=(Luna< osg::ConstArrayVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ConstArrayVisitor::base_apply(const osg::ByteArray &). Got : '%s'\n%s",typeid(Luna< osg::ConstArrayVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ConstArrayVisitor::apply(_arg1);

		return 0;
	}

	// void osg::ConstArrayVisitor::base_apply(const osg::ShortArray & arg1)
	static int _bind_base_apply_overload_3(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ConstArrayVisitor::base_apply(const osg::ShortArray & arg1) function, expected prototype:\nvoid osg::ConstArrayVisitor::base_apply(const osg::ShortArray & arg1)\nClass arguments details:\narg 1 ID = 17157487\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::ShortArray* _arg1_ptr=(Luna< osg::TemplateIndexArray< short, osg::Array::ShortArrayType, 1, GL_SHORT > >::checkSubType< osg::ShortArray >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstArrayVisitor::base_apply function");
		}
		const osg::ShortArray & _arg1=*_arg1_ptr;

		osg::ConstArrayVisitor* self=(Luna< osg::ConstArrayVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ConstArrayVisitor::base_apply(const osg::ShortArray &). Got : '%s'\n%s",typeid(Luna< osg::ConstArrayVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ConstArrayVisitor::apply(_arg1);

		return 0;
	}

	// void osg::ConstArrayVisitor::base_apply(const osg::IntArray & arg1)
	static int _bind_base_apply_overload_4(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ConstArrayVisitor::base_apply(const osg::IntArray & arg1) function, expected prototype:\nvoid osg::ConstArrayVisitor::base_apply(const osg::IntArray & arg1)\nClass arguments details:\narg 1 ID = 28130065\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::IntArray* _arg1_ptr=(Luna< osg::TemplateIndexArray< int, osg::Array::IntArrayType, 1, 0x1404 > >::checkSubType< osg::IntArray >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstArrayVisitor::base_apply function");
		}
		const osg::IntArray & _arg1=*_arg1_ptr;

		osg::ConstArrayVisitor* self=(Luna< osg::ConstArrayVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ConstArrayVisitor::base_apply(const osg::IntArray &). Got : '%s'\n%s",typeid(Luna< osg::ConstArrayVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ConstArrayVisitor::apply(_arg1);

		return 0;
	}

	// void osg::ConstArrayVisitor::base_apply(const osg::UByteArray & arg1)
	static int _bind_base_apply_overload_5(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ConstArrayVisitor::base_apply(const osg::UByteArray & arg1) function, expected prototype:\nvoid osg::ConstArrayVisitor::base_apply(const osg::UByteArray & arg1)\nClass arguments details:\narg 1 ID = 72202494\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::UByteArray* _arg1_ptr=(Luna< osg::TemplateIndexArray< unsigned char, osg::Array::UByteArrayType, 1, GL_UNSIGNED_BYTE > >::checkSubType< osg::UByteArray >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstArrayVisitor::base_apply function");
		}
		const osg::UByteArray & _arg1=*_arg1_ptr;

		osg::ConstArrayVisitor* self=(Luna< osg::ConstArrayVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ConstArrayVisitor::base_apply(const osg::UByteArray &). Got : '%s'\n%s",typeid(Luna< osg::ConstArrayVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ConstArrayVisitor::apply(_arg1);

		return 0;
	}

	// void osg::ConstArrayVisitor::base_apply(const osg::UShortArray & arg1)
	static int _bind_base_apply_overload_6(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ConstArrayVisitor::base_apply(const osg::UShortArray & arg1) function, expected prototype:\nvoid osg::ConstArrayVisitor::base_apply(const osg::UShortArray & arg1)\nClass arguments details:\narg 1 ID = 4787198\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::UShortArray* _arg1_ptr=(Luna< osg::TemplateIndexArray< unsigned short, osg::Array::UShortArrayType, 1, GL_UNSIGNED_SHORT > >::checkSubType< osg::UShortArray >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstArrayVisitor::base_apply function");
		}
		const osg::UShortArray & _arg1=*_arg1_ptr;

		osg::ConstArrayVisitor* self=(Luna< osg::ConstArrayVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ConstArrayVisitor::base_apply(const osg::UShortArray &). Got : '%s'\n%s",typeid(Luna< osg::ConstArrayVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ConstArrayVisitor::apply(_arg1);

		return 0;
	}

	// void osg::ConstArrayVisitor::base_apply(const osg::UIntArray & arg1)
	static int _bind_base_apply_overload_7(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_7(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ConstArrayVisitor::base_apply(const osg::UIntArray & arg1) function, expected prototype:\nvoid osg::ConstArrayVisitor::base_apply(const osg::UIntArray & arg1)\nClass arguments details:\narg 1 ID = 86600648\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::UIntArray* _arg1_ptr=(Luna< osg::TemplateIndexArray< unsigned int, osg::Array::UIntArrayType, 1, 0x1405 > >::checkSubType< osg::UIntArray >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstArrayVisitor::base_apply function");
		}
		const osg::UIntArray & _arg1=*_arg1_ptr;

		osg::ConstArrayVisitor* self=(Luna< osg::ConstArrayVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ConstArrayVisitor::base_apply(const osg::UIntArray &). Got : '%s'\n%s",typeid(Luna< osg::ConstArrayVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ConstArrayVisitor::apply(_arg1);

		return 0;
	}

	// void osg::ConstArrayVisitor::base_apply(const osg::FloatArray & arg1)
	static int _bind_base_apply_overload_8(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_8(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ConstArrayVisitor::base_apply(const osg::FloatArray & arg1) function, expected prototype:\nvoid osg::ConstArrayVisitor::base_apply(const osg::FloatArray & arg1)\nClass arguments details:\narg 1 ID = 43730923\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::FloatArray* _arg1_ptr=(Luna< osg::TemplateArray< float, osg::Array::FloatArrayType, 1, GL_FLOAT > >::checkSubType< osg::FloatArray >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstArrayVisitor::base_apply function");
		}
		const osg::FloatArray & _arg1=*_arg1_ptr;

		osg::ConstArrayVisitor* self=(Luna< osg::ConstArrayVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ConstArrayVisitor::base_apply(const osg::FloatArray &). Got : '%s'\n%s",typeid(Luna< osg::ConstArrayVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ConstArrayVisitor::apply(_arg1);

		return 0;
	}

	// void osg::ConstArrayVisitor::base_apply(const osg::DoubleArray & arg1)
	static int _bind_base_apply_overload_9(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_9(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ConstArrayVisitor::base_apply(const osg::DoubleArray & arg1) function, expected prototype:\nvoid osg::ConstArrayVisitor::base_apply(const osg::DoubleArray & arg1)\nClass arguments details:\narg 1 ID = 50192637\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::DoubleArray* _arg1_ptr=(Luna< osg::TemplateArray< double, osg::Array::DoubleArrayType, 1, 0x140A > >::checkSubType< osg::DoubleArray >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstArrayVisitor::base_apply function");
		}
		const osg::DoubleArray & _arg1=*_arg1_ptr;

		osg::ConstArrayVisitor* self=(Luna< osg::ConstArrayVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ConstArrayVisitor::base_apply(const osg::DoubleArray &). Got : '%s'\n%s",typeid(Luna< osg::ConstArrayVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ConstArrayVisitor::apply(_arg1);

		return 0;
	}

	// void osg::ConstArrayVisitor::base_apply(const osg::Vec2Array & arg1)
	static int _bind_base_apply_overload_10(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_10(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ConstArrayVisitor::base_apply(const osg::Vec2Array & arg1) function, expected prototype:\nvoid osg::ConstArrayVisitor::base_apply(const osg::Vec2Array & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec2Array* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::Vec2Array >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstArrayVisitor::base_apply function");
		}
		const osg::Vec2Array & _arg1=*_arg1_ptr;

		osg::ConstArrayVisitor* self=(Luna< osg::ConstArrayVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ConstArrayVisitor::base_apply(const osg::Vec2Array &). Got : '%s'\n%s",typeid(Luna< osg::ConstArrayVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ConstArrayVisitor::apply(_arg1);

		return 0;
	}

	// void osg::ConstArrayVisitor::base_apply(const osg::Vec3Array & arg1)
	static int _bind_base_apply_overload_11(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_11(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ConstArrayVisitor::base_apply(const osg::Vec3Array & arg1) function, expected prototype:\nvoid osg::ConstArrayVisitor::base_apply(const osg::Vec3Array & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3Array* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::Vec3Array >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstArrayVisitor::base_apply function");
		}
		const osg::Vec3Array & _arg1=*_arg1_ptr;

		osg::ConstArrayVisitor* self=(Luna< osg::ConstArrayVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ConstArrayVisitor::base_apply(const osg::Vec3Array &). Got : '%s'\n%s",typeid(Luna< osg::ConstArrayVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ConstArrayVisitor::apply(_arg1);

		return 0;
	}

	// void osg::ConstArrayVisitor::base_apply(const osg::Vec4Array & arg1)
	static int _bind_base_apply_overload_12(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_12(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ConstArrayVisitor::base_apply(const osg::Vec4Array & arg1) function, expected prototype:\nvoid osg::ConstArrayVisitor::base_apply(const osg::Vec4Array & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4Array* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::Vec4Array >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstArrayVisitor::base_apply function");
		}
		const osg::Vec4Array & _arg1=*_arg1_ptr;

		osg::ConstArrayVisitor* self=(Luna< osg::ConstArrayVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ConstArrayVisitor::base_apply(const osg::Vec4Array &). Got : '%s'\n%s",typeid(Luna< osg::ConstArrayVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ConstArrayVisitor::apply(_arg1);

		return 0;
	}

	// void osg::ConstArrayVisitor::base_apply(const osg::Vec4ubArray & arg1)
	static int _bind_base_apply_overload_13(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_13(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ConstArrayVisitor::base_apply(const osg::Vec4ubArray & arg1) function, expected prototype:\nvoid osg::ConstArrayVisitor::base_apply(const osg::Vec4ubArray & arg1)\nClass arguments details:\narg 1 ID = 83703711\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4ubArray* _arg1_ptr=(Luna< osg::TemplateArray< osg::Vec4ub, osg::Array::Vec4ubArrayType, 4, GL_UNSIGNED_BYTE > >::checkSubType< osg::Vec4ubArray >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstArrayVisitor::base_apply function");
		}
		const osg::Vec4ubArray & _arg1=*_arg1_ptr;

		osg::ConstArrayVisitor* self=(Luna< osg::ConstArrayVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ConstArrayVisitor::base_apply(const osg::Vec4ubArray &). Got : '%s'\n%s",typeid(Luna< osg::ConstArrayVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ConstArrayVisitor::apply(_arg1);

		return 0;
	}

	// void osg::ConstArrayVisitor::base_apply(const osg::Vec2bArray & arg1)
	static int _bind_base_apply_overload_14(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_14(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ConstArrayVisitor::base_apply(const osg::Vec2bArray & arg1) function, expected prototype:\nvoid osg::ConstArrayVisitor::base_apply(const osg::Vec2bArray & arg1)\nClass arguments details:\narg 1 ID = 35367467\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec2bArray* _arg1_ptr=(Luna< osg::TemplateArray< osg::Vec2b, osg::Array::Vec2bArrayType, 2, GL_BYTE > >::checkSubType< osg::Vec2bArray >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstArrayVisitor::base_apply function");
		}
		const osg::Vec2bArray & _arg1=*_arg1_ptr;

		osg::ConstArrayVisitor* self=(Luna< osg::ConstArrayVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ConstArrayVisitor::base_apply(const osg::Vec2bArray &). Got : '%s'\n%s",typeid(Luna< osg::ConstArrayVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ConstArrayVisitor::apply(_arg1);

		return 0;
	}

	// void osg::ConstArrayVisitor::base_apply(const osg::Vec3bArray & arg1)
	static int _bind_base_apply_overload_15(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_15(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ConstArrayVisitor::base_apply(const osg::Vec3bArray & arg1) function, expected prototype:\nvoid osg::ConstArrayVisitor::base_apply(const osg::Vec3bArray & arg1)\nClass arguments details:\narg 1 ID = 22871013\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3bArray* _arg1_ptr=(Luna< osg::TemplateArray< osg::Vec3b, osg::Array::Vec3bArrayType, 3, GL_BYTE > >::checkSubType< osg::Vec3bArray >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstArrayVisitor::base_apply function");
		}
		const osg::Vec3bArray & _arg1=*_arg1_ptr;

		osg::ConstArrayVisitor* self=(Luna< osg::ConstArrayVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ConstArrayVisitor::base_apply(const osg::Vec3bArray &). Got : '%s'\n%s",typeid(Luna< osg::ConstArrayVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ConstArrayVisitor::apply(_arg1);

		return 0;
	}

	// void osg::ConstArrayVisitor::base_apply(const osg::Vec4bArray & arg1)
	static int _bind_base_apply_overload_16(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_16(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ConstArrayVisitor::base_apply(const osg::Vec4bArray & arg1) function, expected prototype:\nvoid osg::ConstArrayVisitor::base_apply(const osg::Vec4bArray & arg1)\nClass arguments details:\narg 1 ID = 10374559\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4bArray* _arg1_ptr=(Luna< osg::TemplateArray< osg::Vec4b, osg::Array::Vec4bArrayType, 4, GL_BYTE > >::checkSubType< osg::Vec4bArray >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstArrayVisitor::base_apply function");
		}
		const osg::Vec4bArray & _arg1=*_arg1_ptr;

		osg::ConstArrayVisitor* self=(Luna< osg::ConstArrayVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ConstArrayVisitor::base_apply(const osg::Vec4bArray &). Got : '%s'\n%s",typeid(Luna< osg::ConstArrayVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ConstArrayVisitor::apply(_arg1);

		return 0;
	}

	// void osg::ConstArrayVisitor::base_apply(const osg::Vec2sArray & arg1)
	static int _bind_base_apply_overload_17(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_17(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ConstArrayVisitor::base_apply(const osg::Vec2sArray & arg1) function, expected prototype:\nvoid osg::ConstArrayVisitor::base_apply(const osg::Vec2sArray & arg1)\nClass arguments details:\narg 1 ID = 22062959\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec2sArray* _arg1_ptr=(Luna< osg::TemplateArray< osg::Vec2s, osg::Array::Vec2sArrayType, 2, GL_SHORT > >::checkSubType< osg::Vec2sArray >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstArrayVisitor::base_apply function");
		}
		const osg::Vec2sArray & _arg1=*_arg1_ptr;

		osg::ConstArrayVisitor* self=(Luna< osg::ConstArrayVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ConstArrayVisitor::base_apply(const osg::Vec2sArray &). Got : '%s'\n%s",typeid(Luna< osg::ConstArrayVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ConstArrayVisitor::apply(_arg1);

		return 0;
	}

	// void osg::ConstArrayVisitor::base_apply(const osg::Vec3sArray & arg1)
	static int _bind_base_apply_overload_18(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_18(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ConstArrayVisitor::base_apply(const osg::Vec3sArray & arg1) function, expected prototype:\nvoid osg::ConstArrayVisitor::base_apply(const osg::Vec3sArray & arg1)\nClass arguments details:\narg 1 ID = 9566505\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3sArray* _arg1_ptr=(Luna< osg::TemplateArray< osg::Vec3s, osg::Array::Vec3sArrayType, 3, GL_SHORT > >::checkSubType< osg::Vec3sArray >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstArrayVisitor::base_apply function");
		}
		const osg::Vec3sArray & _arg1=*_arg1_ptr;

		osg::ConstArrayVisitor* self=(Luna< osg::ConstArrayVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ConstArrayVisitor::base_apply(const osg::Vec3sArray &). Got : '%s'\n%s",typeid(Luna< osg::ConstArrayVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ConstArrayVisitor::apply(_arg1);

		return 0;
	}

	// void osg::ConstArrayVisitor::base_apply(const osg::Vec4sArray & arg1)
	static int _bind_base_apply_overload_19(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_19(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ConstArrayVisitor::base_apply(const osg::Vec4sArray & arg1) function, expected prototype:\nvoid osg::ConstArrayVisitor::base_apply(const osg::Vec4sArray & arg1)\nClass arguments details:\narg 1 ID = 97070066\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4sArray* _arg1_ptr=(Luna< osg::TemplateArray< osg::Vec4s, osg::Array::Vec4sArrayType, 4, GL_SHORT > >::checkSubType< osg::Vec4sArray >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstArrayVisitor::base_apply function");
		}
		const osg::Vec4sArray & _arg1=*_arg1_ptr;

		osg::ConstArrayVisitor* self=(Luna< osg::ConstArrayVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ConstArrayVisitor::base_apply(const osg::Vec4sArray &). Got : '%s'\n%s",typeid(Luna< osg::ConstArrayVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ConstArrayVisitor::apply(_arg1);

		return 0;
	}

	// void osg::ConstArrayVisitor::base_apply(const osg::Vec2dArray & arg1)
	static int _bind_base_apply_overload_20(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_20(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ConstArrayVisitor::base_apply(const osg::Vec2dArray & arg1) function, expected prototype:\nvoid osg::ConstArrayVisitor::base_apply(const osg::Vec2dArray & arg1)\nClass arguments details:\narg 1 ID = 92625769\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec2dArray* _arg1_ptr=(Luna< osg::TemplateArray< osg::Vec2d, osg::Array::Vec2dArrayType, 2, 0x140A > >::checkSubType< osg::Vec2dArray >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstArrayVisitor::base_apply function");
		}
		const osg::Vec2dArray & _arg1=*_arg1_ptr;

		osg::ConstArrayVisitor* self=(Luna< osg::ConstArrayVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ConstArrayVisitor::base_apply(const osg::Vec2dArray &). Got : '%s'\n%s",typeid(Luna< osg::ConstArrayVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ConstArrayVisitor::apply(_arg1);

		return 0;
	}

	// void osg::ConstArrayVisitor::base_apply(const osg::Vec3dArray & arg1)
	static int _bind_base_apply_overload_21(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_21(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ConstArrayVisitor::base_apply(const osg::Vec3dArray & arg1) function, expected prototype:\nvoid osg::ConstArrayVisitor::base_apply(const osg::Vec3dArray & arg1)\nClass arguments details:\narg 1 ID = 80129315\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3dArray* _arg1_ptr=(Luna< osg::TemplateArray< osg::Vec3d, osg::Array::Vec3dArrayType, 3, 0x140A > >::checkSubType< osg::Vec3dArray >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstArrayVisitor::base_apply function");
		}
		const osg::Vec3dArray & _arg1=*_arg1_ptr;

		osg::ConstArrayVisitor* self=(Luna< osg::ConstArrayVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ConstArrayVisitor::base_apply(const osg::Vec3dArray &). Got : '%s'\n%s",typeid(Luna< osg::ConstArrayVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ConstArrayVisitor::apply(_arg1);

		return 0;
	}

	// void osg::ConstArrayVisitor::base_apply(const osg::Vec4dArray & arg1)
	static int _bind_base_apply_overload_22(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_22(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ConstArrayVisitor::base_apply(const osg::Vec4dArray & arg1) function, expected prototype:\nvoid osg::ConstArrayVisitor::base_apply(const osg::Vec4dArray & arg1)\nClass arguments details:\narg 1 ID = 67632861\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4dArray* _arg1_ptr=(Luna< osg::TemplateArray< osg::Vec4d, osg::Array::Vec4dArrayType, 4, 0x140A > >::checkSubType< osg::Vec4dArray >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstArrayVisitor::base_apply function");
		}
		const osg::Vec4dArray & _arg1=*_arg1_ptr;

		osg::ConstArrayVisitor* self=(Luna< osg::ConstArrayVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ConstArrayVisitor::base_apply(const osg::Vec4dArray &). Got : '%s'\n%s",typeid(Luna< osg::ConstArrayVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ConstArrayVisitor::apply(_arg1);

		return 0;
	}

	// void osg::ConstArrayVisitor::base_apply(const osg::MatrixfArray & arg1)
	static int _bind_base_apply_overload_23(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_23(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ConstArrayVisitor::base_apply(const osg::MatrixfArray & arg1) function, expected prototype:\nvoid osg::ConstArrayVisitor::base_apply(const osg::MatrixfArray & arg1)\nClass arguments details:\narg 1 ID = 82206572\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::MatrixfArray* _arg1_ptr=(Luna< osg::TemplateArray< osg::Matrixf, osg::Array::MatrixArrayType, 16, GL_FLOAT > >::checkSubType< osg::MatrixfArray >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstArrayVisitor::base_apply function");
		}
		const osg::MatrixfArray & _arg1=*_arg1_ptr;

		osg::ConstArrayVisitor* self=(Luna< osg::ConstArrayVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ConstArrayVisitor::base_apply(const osg::MatrixfArray &). Got : '%s'\n%s",typeid(Luna< osg::ConstArrayVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ConstArrayVisitor::apply(_arg1);

		return 0;
	}

	// Overload binder for osg::ConstArrayVisitor::base_apply
	static int _bind_base_apply(lua_State *L) {
		if (_lg_typecheck_base_apply_overload_1(L)) return _bind_base_apply_overload_1(L);
		if (_lg_typecheck_base_apply_overload_2(L)) return _bind_base_apply_overload_2(L);
		if (_lg_typecheck_base_apply_overload_3(L)) return _bind_base_apply_overload_3(L);
		if (_lg_typecheck_base_apply_overload_4(L)) return _bind_base_apply_overload_4(L);
		if (_lg_typecheck_base_apply_overload_5(L)) return _bind_base_apply_overload_5(L);
		if (_lg_typecheck_base_apply_overload_6(L)) return _bind_base_apply_overload_6(L);
		if (_lg_typecheck_base_apply_overload_7(L)) return _bind_base_apply_overload_7(L);
		if (_lg_typecheck_base_apply_overload_8(L)) return _bind_base_apply_overload_8(L);
		if (_lg_typecheck_base_apply_overload_9(L)) return _bind_base_apply_overload_9(L);
		if (_lg_typecheck_base_apply_overload_10(L)) return _bind_base_apply_overload_10(L);
		if (_lg_typecheck_base_apply_overload_11(L)) return _bind_base_apply_overload_11(L);
		if (_lg_typecheck_base_apply_overload_12(L)) return _bind_base_apply_overload_12(L);
		if (_lg_typecheck_base_apply_overload_13(L)) return _bind_base_apply_overload_13(L);
		if (_lg_typecheck_base_apply_overload_14(L)) return _bind_base_apply_overload_14(L);
		if (_lg_typecheck_base_apply_overload_15(L)) return _bind_base_apply_overload_15(L);
		if (_lg_typecheck_base_apply_overload_16(L)) return _bind_base_apply_overload_16(L);
		if (_lg_typecheck_base_apply_overload_17(L)) return _bind_base_apply_overload_17(L);
		if (_lg_typecheck_base_apply_overload_18(L)) return _bind_base_apply_overload_18(L);
		if (_lg_typecheck_base_apply_overload_19(L)) return _bind_base_apply_overload_19(L);
		if (_lg_typecheck_base_apply_overload_20(L)) return _bind_base_apply_overload_20(L);
		if (_lg_typecheck_base_apply_overload_21(L)) return _bind_base_apply_overload_21(L);
		if (_lg_typecheck_base_apply_overload_22(L)) return _bind_base_apply_overload_22(L);
		if (_lg_typecheck_base_apply_overload_23(L)) return _bind_base_apply_overload_23(L);

		luaL_error(L, "error in function base_apply, cannot match any of the overloads for function base_apply:\n  base_apply(const osg::Array &)\n  base_apply(const osg::ByteArray &)\n  base_apply(const osg::ShortArray &)\n  base_apply(const osg::IntArray &)\n  base_apply(const osg::UByteArray &)\n  base_apply(const osg::UShortArray &)\n  base_apply(const osg::UIntArray &)\n  base_apply(const osg::FloatArray &)\n  base_apply(const osg::DoubleArray &)\n  base_apply(const osg::Vec2Array &)\n  base_apply(const osg::Vec3Array &)\n  base_apply(const osg::Vec4Array &)\n  base_apply(const osg::Vec4ubArray &)\n  base_apply(const osg::Vec2bArray &)\n  base_apply(const osg::Vec3bArray &)\n  base_apply(const osg::Vec4bArray &)\n  base_apply(const osg::Vec2sArray &)\n  base_apply(const osg::Vec3sArray &)\n  base_apply(const osg::Vec4sArray &)\n  base_apply(const osg::Vec2dArray &)\n  base_apply(const osg::Vec3dArray &)\n  base_apply(const osg::Vec4dArray &)\n  base_apply(const osg::MatrixfArray &)\n");
		return 0;
	}


	// Operator binds:

};

osg::ConstArrayVisitor* LunaTraits< osg::ConstArrayVisitor >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_ConstArrayVisitor::_bind_ctor(L);
}

void LunaTraits< osg::ConstArrayVisitor >::_bind_dtor(osg::ConstArrayVisitor* obj) {
	delete obj;
}

const char LunaTraits< osg::ConstArrayVisitor >::className[] = "ConstArrayVisitor";
const char LunaTraits< osg::ConstArrayVisitor >::fullName[] = "osg::ConstArrayVisitor";
const char LunaTraits< osg::ConstArrayVisitor >::moduleName[] = "osg";
const char* LunaTraits< osg::ConstArrayVisitor >::parents[] = {0};
const int LunaTraits< osg::ConstArrayVisitor >::hash = 80735172;
const int LunaTraits< osg::ConstArrayVisitor >::uniqueIDs[] = {80735172,0};

luna_RegType LunaTraits< osg::ConstArrayVisitor >::methods[] = {
	{"apply", &luna_wrapper_osg_ConstArrayVisitor::_bind_apply},
	{"base_apply", &luna_wrapper_osg_ConstArrayVisitor::_bind_base_apply},
	{"dynCast", &luna_wrapper_osg_ConstArrayVisitor::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_ConstArrayVisitor::_bind___eq},
	{"fromVoid", &luna_wrapper_osg_ConstArrayVisitor::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_ConstArrayVisitor::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_ConstArrayVisitor::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ConstArrayVisitor >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ConstArrayVisitor >::enumValues[] = {
	{0,0}
};


