#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_ConstShapeVisitor.h>

class luna_wrapper_osg_ConstShapeVisitor {
public:
	typedef Luna< osg::ConstShapeVisitor > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::ConstShapeVisitor* self=(Luna< osg::ConstShapeVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<osg::ConstShapeVisitor,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,45826538) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::ConstShapeVisitor*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::ConstShapeVisitor* rhs =(Luna< osg::ConstShapeVisitor >::check(L,2));
		osg::ConstShapeVisitor* self=(Luna< osg::ConstShapeVisitor >::check(L,1));
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

		osg::ConstShapeVisitor* self= (osg::ConstShapeVisitor*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::ConstShapeVisitor >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,45826538) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osg::ConstShapeVisitor >::check(L,1));
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

		osg::ConstShapeVisitor* self=(Luna< osg::ConstShapeVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::ConstShapeVisitor");
		
		return luna_dynamicCast(L,converters,"osg::ConstShapeVisitor",name);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Shape >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Sphere >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Box >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Cone >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Cylinder >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_6(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Capsule >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_7(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::InfinitePlane >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_8(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::TriangleMesh >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_9(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::ConvexHull >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_10(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::HeightField >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_11(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::CompositeShape >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Shape >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Sphere >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Box >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Cone >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Cylinder >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_6(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Capsule >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_7(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::InfinitePlane >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_8(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::TriangleMesh >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_9(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::ConvexHull >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_10(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::HeightField >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_11(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::CompositeShape >(L,2))) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::ConstShapeVisitor::ConstShapeVisitor()
	static osg::ConstShapeVisitor* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::ConstShapeVisitor::ConstShapeVisitor() function, expected prototype:\nosg::ConstShapeVisitor::ConstShapeVisitor()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::ConstShapeVisitor();
	}

	// osg::ConstShapeVisitor::ConstShapeVisitor(lua_Table * data)
	static osg::ConstShapeVisitor* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::ConstShapeVisitor::ConstShapeVisitor(lua_Table * data) function, expected prototype:\nosg::ConstShapeVisitor::ConstShapeVisitor(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_ConstShapeVisitor(L,NULL);
	}

	// Overload binder for osg::ConstShapeVisitor::ConstShapeVisitor
	static osg::ConstShapeVisitor* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ConstShapeVisitor, cannot match any of the overloads for function ConstShapeVisitor:\n  ConstShapeVisitor()\n  ConstShapeVisitor(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void osg::ConstShapeVisitor::apply(const osg::Shape & arg1)
	static int _bind_apply_overload_1(lua_State *L) {
		if (!_lg_typecheck_apply_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ConstShapeVisitor::apply(const osg::Shape & arg1) function, expected prototype:\nvoid osg::ConstShapeVisitor::apply(const osg::Shape & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Shape* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::Shape >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstShapeVisitor::apply function");
		}
		const osg::Shape & _arg1=*_arg1_ptr;

		osg::ConstShapeVisitor* self=(Luna< osg::ConstShapeVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ConstShapeVisitor::apply(const osg::Shape &). Got : '%s'\n%s",typeid(Luna< osg::ConstShapeVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstShapeVisitor::apply(const osg::Sphere & arg1)
	static int _bind_apply_overload_2(lua_State *L) {
		if (!_lg_typecheck_apply_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ConstShapeVisitor::apply(const osg::Sphere & arg1) function, expected prototype:\nvoid osg::ConstShapeVisitor::apply(const osg::Sphere & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Sphere* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::Sphere >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstShapeVisitor::apply function");
		}
		const osg::Sphere & _arg1=*_arg1_ptr;

		osg::ConstShapeVisitor* self=(Luna< osg::ConstShapeVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ConstShapeVisitor::apply(const osg::Sphere &). Got : '%s'\n%s",typeid(Luna< osg::ConstShapeVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstShapeVisitor::apply(const osg::Box & arg1)
	static int _bind_apply_overload_3(lua_State *L) {
		if (!_lg_typecheck_apply_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ConstShapeVisitor::apply(const osg::Box & arg1) function, expected prototype:\nvoid osg::ConstShapeVisitor::apply(const osg::Box & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Box* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::Box >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstShapeVisitor::apply function");
		}
		const osg::Box & _arg1=*_arg1_ptr;

		osg::ConstShapeVisitor* self=(Luna< osg::ConstShapeVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ConstShapeVisitor::apply(const osg::Box &). Got : '%s'\n%s",typeid(Luna< osg::ConstShapeVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstShapeVisitor::apply(const osg::Cone & arg1)
	static int _bind_apply_overload_4(lua_State *L) {
		if (!_lg_typecheck_apply_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ConstShapeVisitor::apply(const osg::Cone & arg1) function, expected prototype:\nvoid osg::ConstShapeVisitor::apply(const osg::Cone & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Cone* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::Cone >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstShapeVisitor::apply function");
		}
		const osg::Cone & _arg1=*_arg1_ptr;

		osg::ConstShapeVisitor* self=(Luna< osg::ConstShapeVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ConstShapeVisitor::apply(const osg::Cone &). Got : '%s'\n%s",typeid(Luna< osg::ConstShapeVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstShapeVisitor::apply(const osg::Cylinder & arg1)
	static int _bind_apply_overload_5(lua_State *L) {
		if (!_lg_typecheck_apply_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ConstShapeVisitor::apply(const osg::Cylinder & arg1) function, expected prototype:\nvoid osg::ConstShapeVisitor::apply(const osg::Cylinder & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Cylinder* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::Cylinder >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstShapeVisitor::apply function");
		}
		const osg::Cylinder & _arg1=*_arg1_ptr;

		osg::ConstShapeVisitor* self=(Luna< osg::ConstShapeVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ConstShapeVisitor::apply(const osg::Cylinder &). Got : '%s'\n%s",typeid(Luna< osg::ConstShapeVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstShapeVisitor::apply(const osg::Capsule & arg1)
	static int _bind_apply_overload_6(lua_State *L) {
		if (!_lg_typecheck_apply_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ConstShapeVisitor::apply(const osg::Capsule & arg1) function, expected prototype:\nvoid osg::ConstShapeVisitor::apply(const osg::Capsule & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Capsule* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::Capsule >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstShapeVisitor::apply function");
		}
		const osg::Capsule & _arg1=*_arg1_ptr;

		osg::ConstShapeVisitor* self=(Luna< osg::ConstShapeVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ConstShapeVisitor::apply(const osg::Capsule &). Got : '%s'\n%s",typeid(Luna< osg::ConstShapeVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstShapeVisitor::apply(const osg::InfinitePlane & arg1)
	static int _bind_apply_overload_7(lua_State *L) {
		if (!_lg_typecheck_apply_overload_7(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ConstShapeVisitor::apply(const osg::InfinitePlane & arg1) function, expected prototype:\nvoid osg::ConstShapeVisitor::apply(const osg::InfinitePlane & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::InfinitePlane* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::InfinitePlane >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstShapeVisitor::apply function");
		}
		const osg::InfinitePlane & _arg1=*_arg1_ptr;

		osg::ConstShapeVisitor* self=(Luna< osg::ConstShapeVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ConstShapeVisitor::apply(const osg::InfinitePlane &). Got : '%s'\n%s",typeid(Luna< osg::ConstShapeVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstShapeVisitor::apply(const osg::TriangleMesh & arg1)
	static int _bind_apply_overload_8(lua_State *L) {
		if (!_lg_typecheck_apply_overload_8(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ConstShapeVisitor::apply(const osg::TriangleMesh & arg1) function, expected prototype:\nvoid osg::ConstShapeVisitor::apply(const osg::TriangleMesh & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::TriangleMesh* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::TriangleMesh >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstShapeVisitor::apply function");
		}
		const osg::TriangleMesh & _arg1=*_arg1_ptr;

		osg::ConstShapeVisitor* self=(Luna< osg::ConstShapeVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ConstShapeVisitor::apply(const osg::TriangleMesh &). Got : '%s'\n%s",typeid(Luna< osg::ConstShapeVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstShapeVisitor::apply(const osg::ConvexHull & arg1)
	static int _bind_apply_overload_9(lua_State *L) {
		if (!_lg_typecheck_apply_overload_9(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ConstShapeVisitor::apply(const osg::ConvexHull & arg1) function, expected prototype:\nvoid osg::ConstShapeVisitor::apply(const osg::ConvexHull & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::ConvexHull* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::ConvexHull >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstShapeVisitor::apply function");
		}
		const osg::ConvexHull & _arg1=*_arg1_ptr;

		osg::ConstShapeVisitor* self=(Luna< osg::ConstShapeVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ConstShapeVisitor::apply(const osg::ConvexHull &). Got : '%s'\n%s",typeid(Luna< osg::ConstShapeVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstShapeVisitor::apply(const osg::HeightField & arg1)
	static int _bind_apply_overload_10(lua_State *L) {
		if (!_lg_typecheck_apply_overload_10(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ConstShapeVisitor::apply(const osg::HeightField & arg1) function, expected prototype:\nvoid osg::ConstShapeVisitor::apply(const osg::HeightField & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::HeightField* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::HeightField >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstShapeVisitor::apply function");
		}
		const osg::HeightField & _arg1=*_arg1_ptr;

		osg::ConstShapeVisitor* self=(Luna< osg::ConstShapeVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ConstShapeVisitor::apply(const osg::HeightField &). Got : '%s'\n%s",typeid(Luna< osg::ConstShapeVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstShapeVisitor::apply(const osg::CompositeShape & arg1)
	static int _bind_apply_overload_11(lua_State *L) {
		if (!_lg_typecheck_apply_overload_11(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ConstShapeVisitor::apply(const osg::CompositeShape & arg1) function, expected prototype:\nvoid osg::ConstShapeVisitor::apply(const osg::CompositeShape & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CompositeShape* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::CompositeShape >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstShapeVisitor::apply function");
		}
		const osg::CompositeShape & _arg1=*_arg1_ptr;

		osg::ConstShapeVisitor* self=(Luna< osg::ConstShapeVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ConstShapeVisitor::apply(const osg::CompositeShape &). Got : '%s'\n%s",typeid(Luna< osg::ConstShapeVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		return 0;
	}

	// Overload binder for osg::ConstShapeVisitor::apply
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

		luaL_error(L, "error in function apply, cannot match any of the overloads for function apply:\n  apply(const osg::Shape &)\n  apply(const osg::Sphere &)\n  apply(const osg::Box &)\n  apply(const osg::Cone &)\n  apply(const osg::Cylinder &)\n  apply(const osg::Capsule &)\n  apply(const osg::InfinitePlane &)\n  apply(const osg::TriangleMesh &)\n  apply(const osg::ConvexHull &)\n  apply(const osg::HeightField &)\n  apply(const osg::CompositeShape &)\n");
		return 0;
	}

	// void osg::ConstShapeVisitor::base_apply(const osg::Shape & arg1)
	static int _bind_base_apply_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ConstShapeVisitor::base_apply(const osg::Shape & arg1) function, expected prototype:\nvoid osg::ConstShapeVisitor::base_apply(const osg::Shape & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Shape* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::Shape >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstShapeVisitor::base_apply function");
		}
		const osg::Shape & _arg1=*_arg1_ptr;

		osg::ConstShapeVisitor* self=(Luna< osg::ConstShapeVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ConstShapeVisitor::base_apply(const osg::Shape &). Got : '%s'\n%s",typeid(Luna< osg::ConstShapeVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ConstShapeVisitor::apply(_arg1);

		return 0;
	}

	// void osg::ConstShapeVisitor::base_apply(const osg::Sphere & arg1)
	static int _bind_base_apply_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ConstShapeVisitor::base_apply(const osg::Sphere & arg1) function, expected prototype:\nvoid osg::ConstShapeVisitor::base_apply(const osg::Sphere & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Sphere* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::Sphere >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstShapeVisitor::base_apply function");
		}
		const osg::Sphere & _arg1=*_arg1_ptr;

		osg::ConstShapeVisitor* self=(Luna< osg::ConstShapeVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ConstShapeVisitor::base_apply(const osg::Sphere &). Got : '%s'\n%s",typeid(Luna< osg::ConstShapeVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ConstShapeVisitor::apply(_arg1);

		return 0;
	}

	// void osg::ConstShapeVisitor::base_apply(const osg::Box & arg1)
	static int _bind_base_apply_overload_3(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ConstShapeVisitor::base_apply(const osg::Box & arg1) function, expected prototype:\nvoid osg::ConstShapeVisitor::base_apply(const osg::Box & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Box* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::Box >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstShapeVisitor::base_apply function");
		}
		const osg::Box & _arg1=*_arg1_ptr;

		osg::ConstShapeVisitor* self=(Luna< osg::ConstShapeVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ConstShapeVisitor::base_apply(const osg::Box &). Got : '%s'\n%s",typeid(Luna< osg::ConstShapeVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ConstShapeVisitor::apply(_arg1);

		return 0;
	}

	// void osg::ConstShapeVisitor::base_apply(const osg::Cone & arg1)
	static int _bind_base_apply_overload_4(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ConstShapeVisitor::base_apply(const osg::Cone & arg1) function, expected prototype:\nvoid osg::ConstShapeVisitor::base_apply(const osg::Cone & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Cone* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::Cone >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstShapeVisitor::base_apply function");
		}
		const osg::Cone & _arg1=*_arg1_ptr;

		osg::ConstShapeVisitor* self=(Luna< osg::ConstShapeVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ConstShapeVisitor::base_apply(const osg::Cone &). Got : '%s'\n%s",typeid(Luna< osg::ConstShapeVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ConstShapeVisitor::apply(_arg1);

		return 0;
	}

	// void osg::ConstShapeVisitor::base_apply(const osg::Cylinder & arg1)
	static int _bind_base_apply_overload_5(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ConstShapeVisitor::base_apply(const osg::Cylinder & arg1) function, expected prototype:\nvoid osg::ConstShapeVisitor::base_apply(const osg::Cylinder & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Cylinder* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::Cylinder >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstShapeVisitor::base_apply function");
		}
		const osg::Cylinder & _arg1=*_arg1_ptr;

		osg::ConstShapeVisitor* self=(Luna< osg::ConstShapeVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ConstShapeVisitor::base_apply(const osg::Cylinder &). Got : '%s'\n%s",typeid(Luna< osg::ConstShapeVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ConstShapeVisitor::apply(_arg1);

		return 0;
	}

	// void osg::ConstShapeVisitor::base_apply(const osg::Capsule & arg1)
	static int _bind_base_apply_overload_6(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ConstShapeVisitor::base_apply(const osg::Capsule & arg1) function, expected prototype:\nvoid osg::ConstShapeVisitor::base_apply(const osg::Capsule & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Capsule* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::Capsule >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstShapeVisitor::base_apply function");
		}
		const osg::Capsule & _arg1=*_arg1_ptr;

		osg::ConstShapeVisitor* self=(Luna< osg::ConstShapeVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ConstShapeVisitor::base_apply(const osg::Capsule &). Got : '%s'\n%s",typeid(Luna< osg::ConstShapeVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ConstShapeVisitor::apply(_arg1);

		return 0;
	}

	// void osg::ConstShapeVisitor::base_apply(const osg::InfinitePlane & arg1)
	static int _bind_base_apply_overload_7(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_7(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ConstShapeVisitor::base_apply(const osg::InfinitePlane & arg1) function, expected prototype:\nvoid osg::ConstShapeVisitor::base_apply(const osg::InfinitePlane & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::InfinitePlane* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::InfinitePlane >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstShapeVisitor::base_apply function");
		}
		const osg::InfinitePlane & _arg1=*_arg1_ptr;

		osg::ConstShapeVisitor* self=(Luna< osg::ConstShapeVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ConstShapeVisitor::base_apply(const osg::InfinitePlane &). Got : '%s'\n%s",typeid(Luna< osg::ConstShapeVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ConstShapeVisitor::apply(_arg1);

		return 0;
	}

	// void osg::ConstShapeVisitor::base_apply(const osg::TriangleMesh & arg1)
	static int _bind_base_apply_overload_8(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_8(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ConstShapeVisitor::base_apply(const osg::TriangleMesh & arg1) function, expected prototype:\nvoid osg::ConstShapeVisitor::base_apply(const osg::TriangleMesh & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::TriangleMesh* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::TriangleMesh >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstShapeVisitor::base_apply function");
		}
		const osg::TriangleMesh & _arg1=*_arg1_ptr;

		osg::ConstShapeVisitor* self=(Luna< osg::ConstShapeVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ConstShapeVisitor::base_apply(const osg::TriangleMesh &). Got : '%s'\n%s",typeid(Luna< osg::ConstShapeVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ConstShapeVisitor::apply(_arg1);

		return 0;
	}

	// void osg::ConstShapeVisitor::base_apply(const osg::ConvexHull & arg1)
	static int _bind_base_apply_overload_9(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_9(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ConstShapeVisitor::base_apply(const osg::ConvexHull & arg1) function, expected prototype:\nvoid osg::ConstShapeVisitor::base_apply(const osg::ConvexHull & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::ConvexHull* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::ConvexHull >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstShapeVisitor::base_apply function");
		}
		const osg::ConvexHull & _arg1=*_arg1_ptr;

		osg::ConstShapeVisitor* self=(Luna< osg::ConstShapeVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ConstShapeVisitor::base_apply(const osg::ConvexHull &). Got : '%s'\n%s",typeid(Luna< osg::ConstShapeVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ConstShapeVisitor::apply(_arg1);

		return 0;
	}

	// void osg::ConstShapeVisitor::base_apply(const osg::HeightField & arg1)
	static int _bind_base_apply_overload_10(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_10(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ConstShapeVisitor::base_apply(const osg::HeightField & arg1) function, expected prototype:\nvoid osg::ConstShapeVisitor::base_apply(const osg::HeightField & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::HeightField* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::HeightField >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstShapeVisitor::base_apply function");
		}
		const osg::HeightField & _arg1=*_arg1_ptr;

		osg::ConstShapeVisitor* self=(Luna< osg::ConstShapeVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ConstShapeVisitor::base_apply(const osg::HeightField &). Got : '%s'\n%s",typeid(Luna< osg::ConstShapeVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ConstShapeVisitor::apply(_arg1);

		return 0;
	}

	// void osg::ConstShapeVisitor::base_apply(const osg::CompositeShape & arg1)
	static int _bind_base_apply_overload_11(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_11(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ConstShapeVisitor::base_apply(const osg::CompositeShape & arg1) function, expected prototype:\nvoid osg::ConstShapeVisitor::base_apply(const osg::CompositeShape & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CompositeShape* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::CompositeShape >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstShapeVisitor::base_apply function");
		}
		const osg::CompositeShape & _arg1=*_arg1_ptr;

		osg::ConstShapeVisitor* self=(Luna< osg::ConstShapeVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ConstShapeVisitor::base_apply(const osg::CompositeShape &). Got : '%s'\n%s",typeid(Luna< osg::ConstShapeVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ConstShapeVisitor::apply(_arg1);

		return 0;
	}

	// Overload binder for osg::ConstShapeVisitor::base_apply
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

		luaL_error(L, "error in function base_apply, cannot match any of the overloads for function base_apply:\n  base_apply(const osg::Shape &)\n  base_apply(const osg::Sphere &)\n  base_apply(const osg::Box &)\n  base_apply(const osg::Cone &)\n  base_apply(const osg::Cylinder &)\n  base_apply(const osg::Capsule &)\n  base_apply(const osg::InfinitePlane &)\n  base_apply(const osg::TriangleMesh &)\n  base_apply(const osg::ConvexHull &)\n  base_apply(const osg::HeightField &)\n  base_apply(const osg::CompositeShape &)\n");
		return 0;
	}


	// Operator binds:

};

osg::ConstShapeVisitor* LunaTraits< osg::ConstShapeVisitor >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_ConstShapeVisitor::_bind_ctor(L);
}

void LunaTraits< osg::ConstShapeVisitor >::_bind_dtor(osg::ConstShapeVisitor* obj) {
	delete obj;
}

const char LunaTraits< osg::ConstShapeVisitor >::className[] = "ConstShapeVisitor";
const char LunaTraits< osg::ConstShapeVisitor >::fullName[] = "osg::ConstShapeVisitor";
const char LunaTraits< osg::ConstShapeVisitor >::moduleName[] = "osg";
const char* LunaTraits< osg::ConstShapeVisitor >::parents[] = {0};
const int LunaTraits< osg::ConstShapeVisitor >::hash = 45826538;
const int LunaTraits< osg::ConstShapeVisitor >::uniqueIDs[] = {45826538,0};

luna_RegType LunaTraits< osg::ConstShapeVisitor >::methods[] = {
	{"apply", &luna_wrapper_osg_ConstShapeVisitor::_bind_apply},
	{"base_apply", &luna_wrapper_osg_ConstShapeVisitor::_bind_base_apply},
	{"dynCast", &luna_wrapper_osg_ConstShapeVisitor::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_ConstShapeVisitor::_bind___eq},
	{"fromVoid", &luna_wrapper_osg_ConstShapeVisitor::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_ConstShapeVisitor::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_ConstShapeVisitor::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ConstShapeVisitor >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ConstShapeVisitor >::enumValues[] = {
	{0,0}
};


