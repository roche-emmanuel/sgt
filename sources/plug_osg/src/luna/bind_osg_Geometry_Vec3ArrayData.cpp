#include <plug_common.h>

class luna_wrapper_osg_Geometry_Vec3ArrayData {
public:
	typedef Luna< osg::Geometry::Vec3ArrayData > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,80248523) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::Geometry::Vec3ArrayData*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::Geometry::Vec3ArrayData* rhs =(Luna< osg::Geometry::Vec3ArrayData >::check(L,2));
		osg::Geometry::Vec3ArrayData* self=(Luna< osg::Geometry::Vec3ArrayData >::check(L,1));
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

		osg::Geometry::Vec3ArrayData* self= (osg::Geometry::Vec3ArrayData*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::Geometry::Vec3ArrayData >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,80248523) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osg::Geometry::Vec3ArrayData >::check(L,1));
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

		osg::Geometry::Vec3ArrayData* self=(Luna< osg::Geometry::Vec3ArrayData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::Geometry::Vec3ArrayData");
		
		return luna_dynamicCast(L,converters,"osg::Geometry::Vec3ArrayData",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,80248523) ) return false;
		if( (!(Luna< osg::Geometry::Vec3ArrayData >::check(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( luatop>1 && (!(Luna< osg::CopyOp >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Vec3Array >(L,1)) ) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Vec3Array >(L,1)) ) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::IndexArray >(L,2)) ) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_empty(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getArray(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getIndices(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBinding(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNormalize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setArray(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,93386385) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setIndices(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,7615640) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setBinding(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNormalize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck_op_assign(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,80248523) ) return false;
		return true;
	}


	// Constructor binds:
	// osg::Geometry::Vec3ArrayData::Vec3ArrayData()
	static osg::Geometry::Vec3ArrayData* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geometry::Vec3ArrayData::Vec3ArrayData() function, expected prototype:\nosg::Geometry::Vec3ArrayData::Vec3ArrayData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::Geometry::Vec3ArrayData();
	}

	// osg::Geometry::Vec3ArrayData::Vec3ArrayData(const osg::Geometry::Vec3ArrayData & data, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::Geometry::Vec3ArrayData* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geometry::Vec3ArrayData::Vec3ArrayData(const osg::Geometry::Vec3ArrayData & data, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::Geometry::Vec3ArrayData::Vec3ArrayData(const osg::Geometry::Vec3ArrayData & data, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 80248523\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Geometry::Vec3ArrayData* data_ptr=(Luna< osg::Geometry::Vec3ArrayData >::check(L,1));
		if( !data_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg data in osg::Geometry::Vec3ArrayData::Vec3ArrayData function");
		}
		const osg::Geometry::Vec3ArrayData & data=*data_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Geometry::Vec3ArrayData::Vec3ArrayData function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osg::Geometry::Vec3ArrayData(data, copyop);
	}

	// osg::Geometry::Vec3ArrayData::Vec3ArrayData(osg::Vec3Array * a, osg::Geometry::AttributeBinding b, unsigned char n = GL_FALSE)
	static osg::Geometry::Vec3ArrayData* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geometry::Vec3ArrayData::Vec3ArrayData(osg::Vec3Array * a, osg::Geometry::AttributeBinding b, unsigned char n = GL_FALSE) function, expected prototype:\nosg::Geometry::Vec3ArrayData::Vec3ArrayData(osg::Vec3Array * a, osg::Geometry::AttributeBinding b, unsigned char n = GL_FALSE)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::Vec3Array* a=(Luna< osg::Referenced >::checkSubType< osg::Vec3Array >(L,1));
		osg::Geometry::AttributeBinding b=(osg::Geometry::AttributeBinding)lua_tointeger(L,2);
		unsigned char n = (unsigned char)(lua_tointeger(L,3));

		return new osg::Geometry::Vec3ArrayData(a, b, n);
	}

	// osg::Geometry::Vec3ArrayData::Vec3ArrayData(osg::Vec3Array * a, osg::IndexArray * i, osg::Geometry::AttributeBinding b, unsigned char n = GL_FALSE)
	static osg::Geometry::Vec3ArrayData* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geometry::Vec3ArrayData::Vec3ArrayData(osg::Vec3Array * a, osg::IndexArray * i, osg::Geometry::AttributeBinding b, unsigned char n = GL_FALSE) function, expected prototype:\nosg::Geometry::Vec3ArrayData::Vec3ArrayData(osg::Vec3Array * a, osg::IndexArray * i, osg::Geometry::AttributeBinding b, unsigned char n = GL_FALSE)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::Vec3Array* a=(Luna< osg::Referenced >::checkSubType< osg::Vec3Array >(L,1));
		osg::IndexArray* i=(Luna< osg::Referenced >::checkSubType< osg::IndexArray >(L,2));
		osg::Geometry::AttributeBinding b=(osg::Geometry::AttributeBinding)lua_tointeger(L,3);
		unsigned char n = (unsigned char)(lua_tointeger(L,4));

		return new osg::Geometry::Vec3ArrayData(a, i, b, n);
	}

	// Overload binder for osg::Geometry::Vec3ArrayData::Vec3ArrayData
	static osg::Geometry::Vec3ArrayData* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function Vec3ArrayData, cannot match any of the overloads for function Vec3ArrayData:\n  Vec3ArrayData()\n  Vec3ArrayData(const osg::Geometry::Vec3ArrayData &, const osg::CopyOp &)\n  Vec3ArrayData(osg::Vec3Array *, osg::Geometry::AttributeBinding, unsigned char)\n  Vec3ArrayData(osg::Vec3Array *, osg::IndexArray *, osg::Geometry::AttributeBinding, unsigned char)\n");
		return NULL;
	}


	// Function binds:
	// bool osg::Geometry::Vec3ArrayData::empty() const
	static int _bind_empty(lua_State *L) {
		if (!_lg_typecheck_empty(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Geometry::Vec3ArrayData::empty() const function, expected prototype:\nbool osg::Geometry::Vec3ArrayData::empty() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geometry::Vec3ArrayData* self=(Luna< osg::Geometry::Vec3ArrayData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Geometry::Vec3ArrayData::empty() const. Got : '%s'\n%s",typeid(Luna< osg::Geometry::Vec3ArrayData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->empty();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// osg::ref_ptr< osg::Vec3Array > osg::Geometry::Vec3ArrayData::array()
	static int _bind_getArray(lua_State *L) {
		if (!_lg_typecheck_getArray(L)) {
			luaL_error(L, "luna typecheck failed in osg::ref_ptr< osg::Vec3Array > osg::Geometry::Vec3ArrayData::array() function, expected prototype:\nosg::ref_ptr< osg::Vec3Array > osg::Geometry::Vec3ArrayData::array()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geometry::Vec3ArrayData* self=(Luna< osg::Geometry::Vec3ArrayData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::ref_ptr< osg::Vec3Array > osg::Geometry::Vec3ArrayData::array(). Got : '%s'\n%s",typeid(Luna< osg::Geometry::Vec3ArrayData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::ref_ptr< osg::Vec3Array > lret = self->array;
		Luna< osg::Vec3Array >::push(L,lret.get(),false);

		return 1;
	}

	// osg::ref_ptr< osg::IndexArray > osg::Geometry::Vec3ArrayData::indices()
	static int _bind_getIndices(lua_State *L) {
		if (!_lg_typecheck_getIndices(L)) {
			luaL_error(L, "luna typecheck failed in osg::ref_ptr< osg::IndexArray > osg::Geometry::Vec3ArrayData::indices() function, expected prototype:\nosg::ref_ptr< osg::IndexArray > osg::Geometry::Vec3ArrayData::indices()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geometry::Vec3ArrayData* self=(Luna< osg::Geometry::Vec3ArrayData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::ref_ptr< osg::IndexArray > osg::Geometry::Vec3ArrayData::indices(). Got : '%s'\n%s",typeid(Luna< osg::Geometry::Vec3ArrayData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::ref_ptr< osg::IndexArray > lret = self->indices;
		Luna< osg::IndexArray >::push(L,lret.get(),false);

		return 1;
	}

	// osg::Geometry::AttributeBinding osg::Geometry::Vec3ArrayData::binding()
	static int _bind_getBinding(lua_State *L) {
		if (!_lg_typecheck_getBinding(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geometry::AttributeBinding osg::Geometry::Vec3ArrayData::binding() function, expected prototype:\nosg::Geometry::AttributeBinding osg::Geometry::Vec3ArrayData::binding()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geometry::Vec3ArrayData* self=(Luna< osg::Geometry::Vec3ArrayData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Geometry::AttributeBinding osg::Geometry::Vec3ArrayData::binding(). Got : '%s'\n%s",typeid(Luna< osg::Geometry::Vec3ArrayData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Geometry::AttributeBinding lret = self->binding;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned char osg::Geometry::Vec3ArrayData::normalize()
	static int _bind_getNormalize(lua_State *L) {
		if (!_lg_typecheck_getNormalize(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char osg::Geometry::Vec3ArrayData::normalize() function, expected prototype:\nunsigned char osg::Geometry::Vec3ArrayData::normalize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geometry::Vec3ArrayData* self=(Luna< osg::Geometry::Vec3ArrayData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char osg::Geometry::Vec3ArrayData::normalize(). Got : '%s'\n%s",typeid(Luna< osg::Geometry::Vec3ArrayData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->normalize;
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// void osg::Geometry::Vec3ArrayData::array(osg::ref_ptr< osg::Vec3Array > value)
	static int _bind_setArray(lua_State *L) {
		if (!_lg_typecheck_setArray(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Geometry::Vec3ArrayData::array(osg::ref_ptr< osg::Vec3Array > value) function, expected prototype:\nvoid osg::Geometry::Vec3ArrayData::array(osg::ref_ptr< osg::Vec3Array > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ref_ptr< osg::Vec3Array > value = dynamic_cast< osg::Vec3Array* >(Luna< osg::Referenced >::check(L,2));

		osg::Geometry::Vec3ArrayData* self=(Luna< osg::Geometry::Vec3ArrayData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Geometry::Vec3ArrayData::array(osg::ref_ptr< osg::Vec3Array >). Got : '%s'\n%s",typeid(Luna< osg::Geometry::Vec3ArrayData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->array = value;

		return 0;
	}

	// void osg::Geometry::Vec3ArrayData::indices(osg::ref_ptr< osg::IndexArray > value)
	static int _bind_setIndices(lua_State *L) {
		if (!_lg_typecheck_setIndices(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Geometry::Vec3ArrayData::indices(osg::ref_ptr< osg::IndexArray > value) function, expected prototype:\nvoid osg::Geometry::Vec3ArrayData::indices(osg::ref_ptr< osg::IndexArray > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ref_ptr< osg::IndexArray > value = dynamic_cast< osg::IndexArray* >(Luna< osg::Referenced >::check(L,2));

		osg::Geometry::Vec3ArrayData* self=(Luna< osg::Geometry::Vec3ArrayData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Geometry::Vec3ArrayData::indices(osg::ref_ptr< osg::IndexArray >). Got : '%s'\n%s",typeid(Luna< osg::Geometry::Vec3ArrayData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->indices = value;

		return 0;
	}

	// void osg::Geometry::Vec3ArrayData::binding(osg::Geometry::AttributeBinding value)
	static int _bind_setBinding(lua_State *L) {
		if (!_lg_typecheck_setBinding(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Geometry::Vec3ArrayData::binding(osg::Geometry::AttributeBinding value) function, expected prototype:\nvoid osg::Geometry::Vec3ArrayData::binding(osg::Geometry::AttributeBinding value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Geometry::AttributeBinding value=(osg::Geometry::AttributeBinding)lua_tointeger(L,2);

		osg::Geometry::Vec3ArrayData* self=(Luna< osg::Geometry::Vec3ArrayData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Geometry::Vec3ArrayData::binding(osg::Geometry::AttributeBinding). Got : '%s'\n%s",typeid(Luna< osg::Geometry::Vec3ArrayData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->binding = value;

		return 0;
	}

	// void osg::Geometry::Vec3ArrayData::normalize(unsigned char value)
	static int _bind_setNormalize(lua_State *L) {
		if (!_lg_typecheck_setNormalize(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Geometry::Vec3ArrayData::normalize(unsigned char value) function, expected prototype:\nvoid osg::Geometry::Vec3ArrayData::normalize(unsigned char value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		osg::Geometry::Vec3ArrayData* self=(Luna< osg::Geometry::Vec3ArrayData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Geometry::Vec3ArrayData::normalize(unsigned char). Got : '%s'\n%s",typeid(Luna< osg::Geometry::Vec3ArrayData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->normalize = value;

		return 0;
	}


	// Operator binds:
	// osg::Geometry::Vec3ArrayData & osg::Geometry::Vec3ArrayData::operator=(const osg::Geometry::Vec3ArrayData & rhs)
	static int _bind_op_assign(lua_State *L) {
		if (!_lg_typecheck_op_assign(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geometry::Vec3ArrayData & osg::Geometry::Vec3ArrayData::operator=(const osg::Geometry::Vec3ArrayData & rhs) function, expected prototype:\nosg::Geometry::Vec3ArrayData & osg::Geometry::Vec3ArrayData::operator=(const osg::Geometry::Vec3ArrayData & rhs)\nClass arguments details:\narg 1 ID = 80248523\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Geometry::Vec3ArrayData* rhs_ptr=(Luna< osg::Geometry::Vec3ArrayData >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Geometry::Vec3ArrayData::operator= function");
		}
		const osg::Geometry::Vec3ArrayData & rhs=*rhs_ptr;

		osg::Geometry::Vec3ArrayData* self=(Luna< osg::Geometry::Vec3ArrayData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Geometry::Vec3ArrayData & osg::Geometry::Vec3ArrayData::operator=(const osg::Geometry::Vec3ArrayData &). Got : '%s'\n%s",typeid(Luna< osg::Geometry::Vec3ArrayData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Geometry::Vec3ArrayData* lret = &self->operator=(rhs);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geometry::Vec3ArrayData >::push(L,lret,false);

		return 1;
	}


};

osg::Geometry::Vec3ArrayData* LunaTraits< osg::Geometry::Vec3ArrayData >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Geometry_Vec3ArrayData::_bind_ctor(L);
}

void LunaTraits< osg::Geometry::Vec3ArrayData >::_bind_dtor(osg::Geometry::Vec3ArrayData* obj) {
	delete obj;
}

const char LunaTraits< osg::Geometry::Vec3ArrayData >::className[] = "Geometry_Vec3ArrayData";
const char LunaTraits< osg::Geometry::Vec3ArrayData >::fullName[] = "osg::Geometry::Vec3ArrayData";
const char LunaTraits< osg::Geometry::Vec3ArrayData >::moduleName[] = "osg";
const char* LunaTraits< osg::Geometry::Vec3ArrayData >::parents[] = {0};
const int LunaTraits< osg::Geometry::Vec3ArrayData >::hash = 80248523;
const int LunaTraits< osg::Geometry::Vec3ArrayData >::uniqueIDs[] = {80248523,0};

luna_RegType LunaTraits< osg::Geometry::Vec3ArrayData >::methods[] = {
	{"empty", &luna_wrapper_osg_Geometry_Vec3ArrayData::_bind_empty},
	{"getArray", &luna_wrapper_osg_Geometry_Vec3ArrayData::_bind_getArray},
	{"getIndices", &luna_wrapper_osg_Geometry_Vec3ArrayData::_bind_getIndices},
	{"getBinding", &luna_wrapper_osg_Geometry_Vec3ArrayData::_bind_getBinding},
	{"getNormalize", &luna_wrapper_osg_Geometry_Vec3ArrayData::_bind_getNormalize},
	{"setArray", &luna_wrapper_osg_Geometry_Vec3ArrayData::_bind_setArray},
	{"setIndices", &luna_wrapper_osg_Geometry_Vec3ArrayData::_bind_setIndices},
	{"setBinding", &luna_wrapper_osg_Geometry_Vec3ArrayData::_bind_setBinding},
	{"setNormalize", &luna_wrapper_osg_Geometry_Vec3ArrayData::_bind_setNormalize},
	{"op_assign", &luna_wrapper_osg_Geometry_Vec3ArrayData::_bind_op_assign},
	{"dynCast", &luna_wrapper_osg_Geometry_Vec3ArrayData::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_Geometry_Vec3ArrayData::_bind___eq},
	{"fromVoid", &luna_wrapper_osg_Geometry_Vec3ArrayData::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_Geometry_Vec3ArrayData::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Geometry::Vec3ArrayData >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Geometry::Vec3ArrayData >::enumValues[] = {
	{0,0}
};


