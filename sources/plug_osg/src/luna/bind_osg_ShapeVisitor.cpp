#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_ShapeVisitor.h>

class luna_wrapper_osg_ShapeVisitor {
public:
	typedef Luna< osg::ShapeVisitor > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::ShapeVisitor* self=(Luna< osg::ShapeVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<osg::ShapeVisitor,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,36301858) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::ShapeVisitor*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::ShapeVisitor* rhs =(Luna< osg::ShapeVisitor >::check(L,2));
		osg::ShapeVisitor* self=(Luna< osg::ShapeVisitor >::check(L,1));
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

		osg::ShapeVisitor* self= (osg::ShapeVisitor*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::ShapeVisitor >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,36301858) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osg::ShapeVisitor >::check(L,1));
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

		osg::ShapeVisitor* self=(Luna< osg::ShapeVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::ShapeVisitor");
		
		return luna_dynamicCast(L,converters,"osg::ShapeVisitor",name);
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
	// osg::ShapeVisitor::ShapeVisitor()
	static osg::ShapeVisitor* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::ShapeVisitor::ShapeVisitor() function, expected prototype:\nosg::ShapeVisitor::ShapeVisitor()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::ShapeVisitor();
	}

	// osg::ShapeVisitor::ShapeVisitor(lua_Table * data)
	static osg::ShapeVisitor* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::ShapeVisitor::ShapeVisitor(lua_Table * data) function, expected prototype:\nosg::ShapeVisitor::ShapeVisitor(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_ShapeVisitor(L,NULL);
	}

	// Overload binder for osg::ShapeVisitor::ShapeVisitor
	static osg::ShapeVisitor* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ShapeVisitor, cannot match any of the overloads for function ShapeVisitor:\n  ShapeVisitor()\n  ShapeVisitor(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void osg::ShapeVisitor::apply(osg::Shape & arg1)
	static int _bind_apply_overload_1(lua_State *L) {
		if (!_lg_typecheck_apply_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ShapeVisitor::apply(osg::Shape & arg1) function, expected prototype:\nvoid osg::ShapeVisitor::apply(osg::Shape & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Shape* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::Shape >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ShapeVisitor::apply function");
		}
		osg::Shape & _arg1=*_arg1_ptr;

		osg::ShapeVisitor* self=(Luna< osg::ShapeVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ShapeVisitor::apply(osg::Shape &). Got : '%s'\n%s",typeid(Luna< osg::ShapeVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ShapeVisitor::apply(osg::Sphere & arg1)
	static int _bind_apply_overload_2(lua_State *L) {
		if (!_lg_typecheck_apply_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ShapeVisitor::apply(osg::Sphere & arg1) function, expected prototype:\nvoid osg::ShapeVisitor::apply(osg::Sphere & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Sphere* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::Sphere >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ShapeVisitor::apply function");
		}
		osg::Sphere & _arg1=*_arg1_ptr;

		osg::ShapeVisitor* self=(Luna< osg::ShapeVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ShapeVisitor::apply(osg::Sphere &). Got : '%s'\n%s",typeid(Luna< osg::ShapeVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ShapeVisitor::apply(osg::Box & arg1)
	static int _bind_apply_overload_3(lua_State *L) {
		if (!_lg_typecheck_apply_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ShapeVisitor::apply(osg::Box & arg1) function, expected prototype:\nvoid osg::ShapeVisitor::apply(osg::Box & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Box* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::Box >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ShapeVisitor::apply function");
		}
		osg::Box & _arg1=*_arg1_ptr;

		osg::ShapeVisitor* self=(Luna< osg::ShapeVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ShapeVisitor::apply(osg::Box &). Got : '%s'\n%s",typeid(Luna< osg::ShapeVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ShapeVisitor::apply(osg::Cone & arg1)
	static int _bind_apply_overload_4(lua_State *L) {
		if (!_lg_typecheck_apply_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ShapeVisitor::apply(osg::Cone & arg1) function, expected prototype:\nvoid osg::ShapeVisitor::apply(osg::Cone & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Cone* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::Cone >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ShapeVisitor::apply function");
		}
		osg::Cone & _arg1=*_arg1_ptr;

		osg::ShapeVisitor* self=(Luna< osg::ShapeVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ShapeVisitor::apply(osg::Cone &). Got : '%s'\n%s",typeid(Luna< osg::ShapeVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ShapeVisitor::apply(osg::Cylinder & arg1)
	static int _bind_apply_overload_5(lua_State *L) {
		if (!_lg_typecheck_apply_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ShapeVisitor::apply(osg::Cylinder & arg1) function, expected prototype:\nvoid osg::ShapeVisitor::apply(osg::Cylinder & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Cylinder* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::Cylinder >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ShapeVisitor::apply function");
		}
		osg::Cylinder & _arg1=*_arg1_ptr;

		osg::ShapeVisitor* self=(Luna< osg::ShapeVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ShapeVisitor::apply(osg::Cylinder &). Got : '%s'\n%s",typeid(Luna< osg::ShapeVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ShapeVisitor::apply(osg::Capsule & arg1)
	static int _bind_apply_overload_6(lua_State *L) {
		if (!_lg_typecheck_apply_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ShapeVisitor::apply(osg::Capsule & arg1) function, expected prototype:\nvoid osg::ShapeVisitor::apply(osg::Capsule & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Capsule* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::Capsule >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ShapeVisitor::apply function");
		}
		osg::Capsule & _arg1=*_arg1_ptr;

		osg::ShapeVisitor* self=(Luna< osg::ShapeVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ShapeVisitor::apply(osg::Capsule &). Got : '%s'\n%s",typeid(Luna< osg::ShapeVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ShapeVisitor::apply(osg::InfinitePlane & arg1)
	static int _bind_apply_overload_7(lua_State *L) {
		if (!_lg_typecheck_apply_overload_7(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ShapeVisitor::apply(osg::InfinitePlane & arg1) function, expected prototype:\nvoid osg::ShapeVisitor::apply(osg::InfinitePlane & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::InfinitePlane* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::InfinitePlane >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ShapeVisitor::apply function");
		}
		osg::InfinitePlane & _arg1=*_arg1_ptr;

		osg::ShapeVisitor* self=(Luna< osg::ShapeVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ShapeVisitor::apply(osg::InfinitePlane &). Got : '%s'\n%s",typeid(Luna< osg::ShapeVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ShapeVisitor::apply(osg::TriangleMesh & arg1)
	static int _bind_apply_overload_8(lua_State *L) {
		if (!_lg_typecheck_apply_overload_8(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ShapeVisitor::apply(osg::TriangleMesh & arg1) function, expected prototype:\nvoid osg::ShapeVisitor::apply(osg::TriangleMesh & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::TriangleMesh* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::TriangleMesh >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ShapeVisitor::apply function");
		}
		osg::TriangleMesh & _arg1=*_arg1_ptr;

		osg::ShapeVisitor* self=(Luna< osg::ShapeVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ShapeVisitor::apply(osg::TriangleMesh &). Got : '%s'\n%s",typeid(Luna< osg::ShapeVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ShapeVisitor::apply(osg::ConvexHull & arg1)
	static int _bind_apply_overload_9(lua_State *L) {
		if (!_lg_typecheck_apply_overload_9(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ShapeVisitor::apply(osg::ConvexHull & arg1) function, expected prototype:\nvoid osg::ShapeVisitor::apply(osg::ConvexHull & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ConvexHull* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::ConvexHull >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ShapeVisitor::apply function");
		}
		osg::ConvexHull & _arg1=*_arg1_ptr;

		osg::ShapeVisitor* self=(Luna< osg::ShapeVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ShapeVisitor::apply(osg::ConvexHull &). Got : '%s'\n%s",typeid(Luna< osg::ShapeVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ShapeVisitor::apply(osg::HeightField & arg1)
	static int _bind_apply_overload_10(lua_State *L) {
		if (!_lg_typecheck_apply_overload_10(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ShapeVisitor::apply(osg::HeightField & arg1) function, expected prototype:\nvoid osg::ShapeVisitor::apply(osg::HeightField & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::HeightField* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::HeightField >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ShapeVisitor::apply function");
		}
		osg::HeightField & _arg1=*_arg1_ptr;

		osg::ShapeVisitor* self=(Luna< osg::ShapeVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ShapeVisitor::apply(osg::HeightField &). Got : '%s'\n%s",typeid(Luna< osg::ShapeVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ShapeVisitor::apply(osg::CompositeShape & arg1)
	static int _bind_apply_overload_11(lua_State *L) {
		if (!_lg_typecheck_apply_overload_11(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ShapeVisitor::apply(osg::CompositeShape & arg1) function, expected prototype:\nvoid osg::ShapeVisitor::apply(osg::CompositeShape & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::CompositeShape* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::CompositeShape >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ShapeVisitor::apply function");
		}
		osg::CompositeShape & _arg1=*_arg1_ptr;

		osg::ShapeVisitor* self=(Luna< osg::ShapeVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ShapeVisitor::apply(osg::CompositeShape &). Got : '%s'\n%s",typeid(Luna< osg::ShapeVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		return 0;
	}

	// Overload binder for osg::ShapeVisitor::apply
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

		luaL_error(L, "error in function apply, cannot match any of the overloads for function apply:\n  apply(osg::Shape &)\n  apply(osg::Sphere &)\n  apply(osg::Box &)\n  apply(osg::Cone &)\n  apply(osg::Cylinder &)\n  apply(osg::Capsule &)\n  apply(osg::InfinitePlane &)\n  apply(osg::TriangleMesh &)\n  apply(osg::ConvexHull &)\n  apply(osg::HeightField &)\n  apply(osg::CompositeShape &)\n");
		return 0;
	}

	// void osg::ShapeVisitor::base_apply(osg::Shape & arg1)
	static int _bind_base_apply_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ShapeVisitor::base_apply(osg::Shape & arg1) function, expected prototype:\nvoid osg::ShapeVisitor::base_apply(osg::Shape & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Shape* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::Shape >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ShapeVisitor::base_apply function");
		}
		osg::Shape & _arg1=*_arg1_ptr;

		osg::ShapeVisitor* self=(Luna< osg::ShapeVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ShapeVisitor::base_apply(osg::Shape &). Got : '%s'\n%s",typeid(Luna< osg::ShapeVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ShapeVisitor::apply(_arg1);

		return 0;
	}

	// void osg::ShapeVisitor::base_apply(osg::Sphere & arg1)
	static int _bind_base_apply_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ShapeVisitor::base_apply(osg::Sphere & arg1) function, expected prototype:\nvoid osg::ShapeVisitor::base_apply(osg::Sphere & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Sphere* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::Sphere >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ShapeVisitor::base_apply function");
		}
		osg::Sphere & _arg1=*_arg1_ptr;

		osg::ShapeVisitor* self=(Luna< osg::ShapeVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ShapeVisitor::base_apply(osg::Sphere &). Got : '%s'\n%s",typeid(Luna< osg::ShapeVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ShapeVisitor::apply(_arg1);

		return 0;
	}

	// void osg::ShapeVisitor::base_apply(osg::Box & arg1)
	static int _bind_base_apply_overload_3(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ShapeVisitor::base_apply(osg::Box & arg1) function, expected prototype:\nvoid osg::ShapeVisitor::base_apply(osg::Box & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Box* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::Box >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ShapeVisitor::base_apply function");
		}
		osg::Box & _arg1=*_arg1_ptr;

		osg::ShapeVisitor* self=(Luna< osg::ShapeVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ShapeVisitor::base_apply(osg::Box &). Got : '%s'\n%s",typeid(Luna< osg::ShapeVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ShapeVisitor::apply(_arg1);

		return 0;
	}

	// void osg::ShapeVisitor::base_apply(osg::Cone & arg1)
	static int _bind_base_apply_overload_4(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ShapeVisitor::base_apply(osg::Cone & arg1) function, expected prototype:\nvoid osg::ShapeVisitor::base_apply(osg::Cone & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Cone* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::Cone >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ShapeVisitor::base_apply function");
		}
		osg::Cone & _arg1=*_arg1_ptr;

		osg::ShapeVisitor* self=(Luna< osg::ShapeVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ShapeVisitor::base_apply(osg::Cone &). Got : '%s'\n%s",typeid(Luna< osg::ShapeVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ShapeVisitor::apply(_arg1);

		return 0;
	}

	// void osg::ShapeVisitor::base_apply(osg::Cylinder & arg1)
	static int _bind_base_apply_overload_5(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ShapeVisitor::base_apply(osg::Cylinder & arg1) function, expected prototype:\nvoid osg::ShapeVisitor::base_apply(osg::Cylinder & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Cylinder* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::Cylinder >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ShapeVisitor::base_apply function");
		}
		osg::Cylinder & _arg1=*_arg1_ptr;

		osg::ShapeVisitor* self=(Luna< osg::ShapeVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ShapeVisitor::base_apply(osg::Cylinder &). Got : '%s'\n%s",typeid(Luna< osg::ShapeVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ShapeVisitor::apply(_arg1);

		return 0;
	}

	// void osg::ShapeVisitor::base_apply(osg::Capsule & arg1)
	static int _bind_base_apply_overload_6(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ShapeVisitor::base_apply(osg::Capsule & arg1) function, expected prototype:\nvoid osg::ShapeVisitor::base_apply(osg::Capsule & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Capsule* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::Capsule >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ShapeVisitor::base_apply function");
		}
		osg::Capsule & _arg1=*_arg1_ptr;

		osg::ShapeVisitor* self=(Luna< osg::ShapeVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ShapeVisitor::base_apply(osg::Capsule &). Got : '%s'\n%s",typeid(Luna< osg::ShapeVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ShapeVisitor::apply(_arg1);

		return 0;
	}

	// void osg::ShapeVisitor::base_apply(osg::InfinitePlane & arg1)
	static int _bind_base_apply_overload_7(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_7(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ShapeVisitor::base_apply(osg::InfinitePlane & arg1) function, expected prototype:\nvoid osg::ShapeVisitor::base_apply(osg::InfinitePlane & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::InfinitePlane* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::InfinitePlane >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ShapeVisitor::base_apply function");
		}
		osg::InfinitePlane & _arg1=*_arg1_ptr;

		osg::ShapeVisitor* self=(Luna< osg::ShapeVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ShapeVisitor::base_apply(osg::InfinitePlane &). Got : '%s'\n%s",typeid(Luna< osg::ShapeVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ShapeVisitor::apply(_arg1);

		return 0;
	}

	// void osg::ShapeVisitor::base_apply(osg::TriangleMesh & arg1)
	static int _bind_base_apply_overload_8(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_8(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ShapeVisitor::base_apply(osg::TriangleMesh & arg1) function, expected prototype:\nvoid osg::ShapeVisitor::base_apply(osg::TriangleMesh & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::TriangleMesh* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::TriangleMesh >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ShapeVisitor::base_apply function");
		}
		osg::TriangleMesh & _arg1=*_arg1_ptr;

		osg::ShapeVisitor* self=(Luna< osg::ShapeVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ShapeVisitor::base_apply(osg::TriangleMesh &). Got : '%s'\n%s",typeid(Luna< osg::ShapeVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ShapeVisitor::apply(_arg1);

		return 0;
	}

	// void osg::ShapeVisitor::base_apply(osg::ConvexHull & arg1)
	static int _bind_base_apply_overload_9(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_9(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ShapeVisitor::base_apply(osg::ConvexHull & arg1) function, expected prototype:\nvoid osg::ShapeVisitor::base_apply(osg::ConvexHull & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ConvexHull* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::ConvexHull >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ShapeVisitor::base_apply function");
		}
		osg::ConvexHull & _arg1=*_arg1_ptr;

		osg::ShapeVisitor* self=(Luna< osg::ShapeVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ShapeVisitor::base_apply(osg::ConvexHull &). Got : '%s'\n%s",typeid(Luna< osg::ShapeVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ShapeVisitor::apply(_arg1);

		return 0;
	}

	// void osg::ShapeVisitor::base_apply(osg::HeightField & arg1)
	static int _bind_base_apply_overload_10(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_10(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ShapeVisitor::base_apply(osg::HeightField & arg1) function, expected prototype:\nvoid osg::ShapeVisitor::base_apply(osg::HeightField & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::HeightField* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::HeightField >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ShapeVisitor::base_apply function");
		}
		osg::HeightField & _arg1=*_arg1_ptr;

		osg::ShapeVisitor* self=(Luna< osg::ShapeVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ShapeVisitor::base_apply(osg::HeightField &). Got : '%s'\n%s",typeid(Luna< osg::ShapeVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ShapeVisitor::apply(_arg1);

		return 0;
	}

	// void osg::ShapeVisitor::base_apply(osg::CompositeShape & arg1)
	static int _bind_base_apply_overload_11(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_11(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ShapeVisitor::base_apply(osg::CompositeShape & arg1) function, expected prototype:\nvoid osg::ShapeVisitor::base_apply(osg::CompositeShape & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::CompositeShape* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::CompositeShape >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ShapeVisitor::base_apply function");
		}
		osg::CompositeShape & _arg1=*_arg1_ptr;

		osg::ShapeVisitor* self=(Luna< osg::ShapeVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ShapeVisitor::base_apply(osg::CompositeShape &). Got : '%s'\n%s",typeid(Luna< osg::ShapeVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ShapeVisitor::apply(_arg1);

		return 0;
	}

	// Overload binder for osg::ShapeVisitor::base_apply
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

		luaL_error(L, "error in function base_apply, cannot match any of the overloads for function base_apply:\n  base_apply(osg::Shape &)\n  base_apply(osg::Sphere &)\n  base_apply(osg::Box &)\n  base_apply(osg::Cone &)\n  base_apply(osg::Cylinder &)\n  base_apply(osg::Capsule &)\n  base_apply(osg::InfinitePlane &)\n  base_apply(osg::TriangleMesh &)\n  base_apply(osg::ConvexHull &)\n  base_apply(osg::HeightField &)\n  base_apply(osg::CompositeShape &)\n");
		return 0;
	}


	// Operator binds:

};

osg::ShapeVisitor* LunaTraits< osg::ShapeVisitor >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_ShapeVisitor::_bind_ctor(L);
}

void LunaTraits< osg::ShapeVisitor >::_bind_dtor(osg::ShapeVisitor* obj) {
	delete obj;
}

const char LunaTraits< osg::ShapeVisitor >::className[] = "ShapeVisitor";
const char LunaTraits< osg::ShapeVisitor >::fullName[] = "osg::ShapeVisitor";
const char LunaTraits< osg::ShapeVisitor >::moduleName[] = "osg";
const char* LunaTraits< osg::ShapeVisitor >::parents[] = {0};
const int LunaTraits< osg::ShapeVisitor >::hash = 36301858;
const int LunaTraits< osg::ShapeVisitor >::uniqueIDs[] = {36301858,0};

luna_RegType LunaTraits< osg::ShapeVisitor >::methods[] = {
	{"apply", &luna_wrapper_osg_ShapeVisitor::_bind_apply},
	{"base_apply", &luna_wrapper_osg_ShapeVisitor::_bind_base_apply},
	{"dynCast", &luna_wrapper_osg_ShapeVisitor::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_ShapeVisitor::_bind___eq},
	{"fromVoid", &luna_wrapper_osg_ShapeVisitor::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_ShapeVisitor::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_ShapeVisitor::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ShapeVisitor >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ShapeVisitor >::enumValues[] = {
	{0,0}
};


