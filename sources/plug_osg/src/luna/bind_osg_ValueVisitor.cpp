#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_ValueVisitor.h>

class luna_wrapper_osg_ValueVisitor {
public:
	typedef Luna< osg::ValueVisitor > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::ValueVisitor* self=(Luna< osg::ValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<osg::ValueVisitor,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,87991103) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::ValueVisitor*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::ValueVisitor* rhs =(Luna< osg::ValueVisitor >::check(L,2));
		osg::ValueVisitor* self=(Luna< osg::ValueVisitor >::check(L,1));
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

		osg::ValueVisitor* self= (osg::ValueVisitor*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::ValueVisitor >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,87991103) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osg::ValueVisitor >::check(L,1));
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

		osg::ValueVisitor* self=(Luna< osg::ValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::ValueVisitor");
		
		return luna_dynamicCast(L,converters,"osg::ValueVisitor",name);
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

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_6(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_7(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_8(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_9(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303173) ) return false;
		if( (!(Luna< osg::Vec2f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_10(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_11(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303235) ) return false;
		if( (!(Luna< osg::Vec4f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_12(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,61400540) ) return false;
		if( (!(Luna< osg::Vec4ub >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_13(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303169) ) return false;
		if( (!(Luna< osg::Vec2b >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_14(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303200) ) return false;
		if( (!(Luna< osg::Vec3b >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_15(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303231) ) return false;
		if( (!(Luna< osg::Vec4b >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_16(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303186) ) return false;
		if( (!(Luna< osg::Vec2s >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_17(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303217) ) return false;
		if( (!(Luna< osg::Vec3s >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_18(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303248) ) return false;
		if( (!(Luna< osg::Vec4s >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_19(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303171) ) return false;
		if( (!(Luna< osg::Vec2d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_20(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_21(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303233) ) return false;
		if( (!(Luna< osg::Vec4d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_22(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903840) ) return false;
		if( (!(Luna< osg::Matrixf >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_6(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_7(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_8(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_9(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303173) ) return false;
		if( (!(Luna< osg::Vec2f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_10(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_11(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303235) ) return false;
		if( (!(Luna< osg::Vec4f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_12(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,61400540) ) return false;
		if( (!(Luna< osg::Vec4ub >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_13(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303169) ) return false;
		if( (!(Luna< osg::Vec2b >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_14(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303200) ) return false;
		if( (!(Luna< osg::Vec3b >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_15(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303231) ) return false;
		if( (!(Luna< osg::Vec4b >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_16(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303186) ) return false;
		if( (!(Luna< osg::Vec2s >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_17(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303217) ) return false;
		if( (!(Luna< osg::Vec3s >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_18(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303248) ) return false;
		if( (!(Luna< osg::Vec4s >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_19(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303171) ) return false;
		if( (!(Luna< osg::Vec2d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_20(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_21(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303233) ) return false;
		if( (!(Luna< osg::Vec4d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_22(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903840) ) return false;
		if( (!(Luna< osg::Matrixf >::check(L,2))) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::ValueVisitor::ValueVisitor()
	static osg::ValueVisitor* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::ValueVisitor::ValueVisitor() function, expected prototype:\nosg::ValueVisitor::ValueVisitor()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::ValueVisitor();
	}

	// osg::ValueVisitor::ValueVisitor(lua_Table * data)
	static osg::ValueVisitor* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::ValueVisitor::ValueVisitor(lua_Table * data) function, expected prototype:\nosg::ValueVisitor::ValueVisitor(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_ValueVisitor(L,NULL);
	}

	// Overload binder for osg::ValueVisitor::ValueVisitor
	static osg::ValueVisitor* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ValueVisitor, cannot match any of the overloads for function ValueVisitor:\n  ValueVisitor()\n  ValueVisitor(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void osg::ValueVisitor::apply(signed char & arg1)
	static int _bind_apply_overload_1(lua_State *L) {
		if (!_lg_typecheck_apply_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueVisitor::apply(signed char & arg1) function, expected prototype:\nvoid osg::ValueVisitor::apply(signed char & arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		signed char _arg1=(signed char)lua_tointeger(L,2);

		osg::ValueVisitor* self=(Luna< osg::ValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueVisitor::apply(signed char &). Got : '%s'\n%s",typeid(Luna< osg::ValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		lua_pushnumber(L,_arg1);
		return 1;
	}

	// void osg::ValueVisitor::apply(short & arg1)
	static int _bind_apply_overload_2(lua_State *L) {
		if (!_lg_typecheck_apply_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueVisitor::apply(short & arg1) function, expected prototype:\nvoid osg::ValueVisitor::apply(short & arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		short _arg1=(short)lua_tointeger(L,2);

		osg::ValueVisitor* self=(Luna< osg::ValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueVisitor::apply(short &). Got : '%s'\n%s",typeid(Luna< osg::ValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		lua_pushnumber(L,_arg1);
		return 1;
	}

	// void osg::ValueVisitor::apply(int & arg1)
	static int _bind_apply_overload_3(lua_State *L) {
		if (!_lg_typecheck_apply_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueVisitor::apply(int & arg1) function, expected prototype:\nvoid osg::ValueVisitor::apply(int & arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int _arg1=(int)lua_tointeger(L,2);

		osg::ValueVisitor* self=(Luna< osg::ValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueVisitor::apply(int &). Got : '%s'\n%s",typeid(Luna< osg::ValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		lua_pushnumber(L,_arg1);
		return 1;
	}

	// void osg::ValueVisitor::apply(unsigned short & arg1)
	static int _bind_apply_overload_4(lua_State *L) {
		if (!_lg_typecheck_apply_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueVisitor::apply(unsigned short & arg1) function, expected prototype:\nvoid osg::ValueVisitor::apply(unsigned short & arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned short _arg1=(unsigned short)lua_tointeger(L,2);

		osg::ValueVisitor* self=(Luna< osg::ValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueVisitor::apply(unsigned short &). Got : '%s'\n%s",typeid(Luna< osg::ValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		lua_pushnumber(L,_arg1);
		return 1;
	}

	// void osg::ValueVisitor::apply(unsigned char & arg1)
	static int _bind_apply_overload_5(lua_State *L) {
		if (!_lg_typecheck_apply_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueVisitor::apply(unsigned char & arg1) function, expected prototype:\nvoid osg::ValueVisitor::apply(unsigned char & arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char _arg1 = (unsigned char)(lua_tointeger(L,2));

		osg::ValueVisitor* self=(Luna< osg::ValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueVisitor::apply(unsigned char &). Got : '%s'\n%s",typeid(Luna< osg::ValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		lua_pushnumber(L,(int)_arg1);
		return 1;
	}

	// void osg::ValueVisitor::apply(unsigned int & arg1)
	static int _bind_apply_overload_6(lua_State *L) {
		if (!_lg_typecheck_apply_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueVisitor::apply(unsigned int & arg1) function, expected prototype:\nvoid osg::ValueVisitor::apply(unsigned int & arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int _arg1=(unsigned int)lua_tointeger(L,2);

		osg::ValueVisitor* self=(Luna< osg::ValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueVisitor::apply(unsigned int &). Got : '%s'\n%s",typeid(Luna< osg::ValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		lua_pushnumber(L,_arg1);
		return 1;
	}

	// void osg::ValueVisitor::apply(float & arg1)
	static int _bind_apply_overload_7(lua_State *L) {
		if (!_lg_typecheck_apply_overload_7(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueVisitor::apply(float & arg1) function, expected prototype:\nvoid osg::ValueVisitor::apply(float & arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float _arg1=(float)lua_tonumber(L,2);

		osg::ValueVisitor* self=(Luna< osg::ValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueVisitor::apply(float &). Got : '%s'\n%s",typeid(Luna< osg::ValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		lua_pushnumber(L,_arg1);
		return 1;
	}

	// void osg::ValueVisitor::apply(double & arg1)
	static int _bind_apply_overload_8(lua_State *L) {
		if (!_lg_typecheck_apply_overload_8(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueVisitor::apply(double & arg1) function, expected prototype:\nvoid osg::ValueVisitor::apply(double & arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double _arg1=(double)lua_tonumber(L,2);

		osg::ValueVisitor* self=(Luna< osg::ValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueVisitor::apply(double &). Got : '%s'\n%s",typeid(Luna< osg::ValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		lua_pushnumber(L,_arg1);
		return 1;
	}

	// void osg::ValueVisitor::apply(osg::Vec2f & arg1)
	static int _bind_apply_overload_9(lua_State *L) {
		if (!_lg_typecheck_apply_overload_9(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueVisitor::apply(osg::Vec2f & arg1) function, expected prototype:\nvoid osg::ValueVisitor::apply(osg::Vec2f & arg1)\nClass arguments details:\narg 1 ID = 92303173\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec2f* _arg1_ptr=(Luna< osg::Vec2f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ValueVisitor::apply function");
		}
		osg::Vec2f & _arg1=*_arg1_ptr;

		osg::ValueVisitor* self=(Luna< osg::ValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueVisitor::apply(osg::Vec2f &). Got : '%s'\n%s",typeid(Luna< osg::ValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ValueVisitor::apply(osg::Vec3f & arg1)
	static int _bind_apply_overload_10(lua_State *L) {
		if (!_lg_typecheck_apply_overload_10(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueVisitor::apply(osg::Vec3f & arg1) function, expected prototype:\nvoid osg::ValueVisitor::apply(osg::Vec3f & arg1)\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ValueVisitor::apply function");
		}
		osg::Vec3f & _arg1=*_arg1_ptr;

		osg::ValueVisitor* self=(Luna< osg::ValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueVisitor::apply(osg::Vec3f &). Got : '%s'\n%s",typeid(Luna< osg::ValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ValueVisitor::apply(osg::Vec4f & arg1)
	static int _bind_apply_overload_11(lua_State *L) {
		if (!_lg_typecheck_apply_overload_11(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueVisitor::apply(osg::Vec4f & arg1) function, expected prototype:\nvoid osg::ValueVisitor::apply(osg::Vec4f & arg1)\nClass arguments details:\narg 1 ID = 92303235\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec4f* _arg1_ptr=(Luna< osg::Vec4f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ValueVisitor::apply function");
		}
		osg::Vec4f & _arg1=*_arg1_ptr;

		osg::ValueVisitor* self=(Luna< osg::ValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueVisitor::apply(osg::Vec4f &). Got : '%s'\n%s",typeid(Luna< osg::ValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ValueVisitor::apply(osg::Vec4ub & arg1)
	static int _bind_apply_overload_12(lua_State *L) {
		if (!_lg_typecheck_apply_overload_12(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueVisitor::apply(osg::Vec4ub & arg1) function, expected prototype:\nvoid osg::ValueVisitor::apply(osg::Vec4ub & arg1)\nClass arguments details:\narg 1 ID = 61400540\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec4ub* _arg1_ptr=(Luna< osg::Vec4ub >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ValueVisitor::apply function");
		}
		osg::Vec4ub & _arg1=*_arg1_ptr;

		osg::ValueVisitor* self=(Luna< osg::ValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueVisitor::apply(osg::Vec4ub &). Got : '%s'\n%s",typeid(Luna< osg::ValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ValueVisitor::apply(osg::Vec2b & arg1)
	static int _bind_apply_overload_13(lua_State *L) {
		if (!_lg_typecheck_apply_overload_13(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueVisitor::apply(osg::Vec2b & arg1) function, expected prototype:\nvoid osg::ValueVisitor::apply(osg::Vec2b & arg1)\nClass arguments details:\narg 1 ID = 92303169\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec2b* _arg1_ptr=(Luna< osg::Vec2b >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ValueVisitor::apply function");
		}
		osg::Vec2b & _arg1=*_arg1_ptr;

		osg::ValueVisitor* self=(Luna< osg::ValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueVisitor::apply(osg::Vec2b &). Got : '%s'\n%s",typeid(Luna< osg::ValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ValueVisitor::apply(osg::Vec3b & arg1)
	static int _bind_apply_overload_14(lua_State *L) {
		if (!_lg_typecheck_apply_overload_14(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueVisitor::apply(osg::Vec3b & arg1) function, expected prototype:\nvoid osg::ValueVisitor::apply(osg::Vec3b & arg1)\nClass arguments details:\narg 1 ID = 92303200\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec3b* _arg1_ptr=(Luna< osg::Vec3b >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ValueVisitor::apply function");
		}
		osg::Vec3b & _arg1=*_arg1_ptr;

		osg::ValueVisitor* self=(Luna< osg::ValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueVisitor::apply(osg::Vec3b &). Got : '%s'\n%s",typeid(Luna< osg::ValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ValueVisitor::apply(osg::Vec4b & arg1)
	static int _bind_apply_overload_15(lua_State *L) {
		if (!_lg_typecheck_apply_overload_15(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueVisitor::apply(osg::Vec4b & arg1) function, expected prototype:\nvoid osg::ValueVisitor::apply(osg::Vec4b & arg1)\nClass arguments details:\narg 1 ID = 92303231\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec4b* _arg1_ptr=(Luna< osg::Vec4b >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ValueVisitor::apply function");
		}
		osg::Vec4b & _arg1=*_arg1_ptr;

		osg::ValueVisitor* self=(Luna< osg::ValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueVisitor::apply(osg::Vec4b &). Got : '%s'\n%s",typeid(Luna< osg::ValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ValueVisitor::apply(osg::Vec2s & arg1)
	static int _bind_apply_overload_16(lua_State *L) {
		if (!_lg_typecheck_apply_overload_16(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueVisitor::apply(osg::Vec2s & arg1) function, expected prototype:\nvoid osg::ValueVisitor::apply(osg::Vec2s & arg1)\nClass arguments details:\narg 1 ID = 92303186\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec2s* _arg1_ptr=(Luna< osg::Vec2s >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ValueVisitor::apply function");
		}
		osg::Vec2s & _arg1=*_arg1_ptr;

		osg::ValueVisitor* self=(Luna< osg::ValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueVisitor::apply(osg::Vec2s &). Got : '%s'\n%s",typeid(Luna< osg::ValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ValueVisitor::apply(osg::Vec3s & arg1)
	static int _bind_apply_overload_17(lua_State *L) {
		if (!_lg_typecheck_apply_overload_17(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueVisitor::apply(osg::Vec3s & arg1) function, expected prototype:\nvoid osg::ValueVisitor::apply(osg::Vec3s & arg1)\nClass arguments details:\narg 1 ID = 92303217\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec3s* _arg1_ptr=(Luna< osg::Vec3s >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ValueVisitor::apply function");
		}
		osg::Vec3s & _arg1=*_arg1_ptr;

		osg::ValueVisitor* self=(Luna< osg::ValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueVisitor::apply(osg::Vec3s &). Got : '%s'\n%s",typeid(Luna< osg::ValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ValueVisitor::apply(osg::Vec4s & arg1)
	static int _bind_apply_overload_18(lua_State *L) {
		if (!_lg_typecheck_apply_overload_18(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueVisitor::apply(osg::Vec4s & arg1) function, expected prototype:\nvoid osg::ValueVisitor::apply(osg::Vec4s & arg1)\nClass arguments details:\narg 1 ID = 92303248\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec4s* _arg1_ptr=(Luna< osg::Vec4s >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ValueVisitor::apply function");
		}
		osg::Vec4s & _arg1=*_arg1_ptr;

		osg::ValueVisitor* self=(Luna< osg::ValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueVisitor::apply(osg::Vec4s &). Got : '%s'\n%s",typeid(Luna< osg::ValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ValueVisitor::apply(osg::Vec2d & arg1)
	static int _bind_apply_overload_19(lua_State *L) {
		if (!_lg_typecheck_apply_overload_19(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueVisitor::apply(osg::Vec2d & arg1) function, expected prototype:\nvoid osg::ValueVisitor::apply(osg::Vec2d & arg1)\nClass arguments details:\narg 1 ID = 92303171\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec2d* _arg1_ptr=(Luna< osg::Vec2d >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ValueVisitor::apply function");
		}
		osg::Vec2d & _arg1=*_arg1_ptr;

		osg::ValueVisitor* self=(Luna< osg::ValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueVisitor::apply(osg::Vec2d &). Got : '%s'\n%s",typeid(Luna< osg::ValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ValueVisitor::apply(osg::Vec3d & arg1)
	static int _bind_apply_overload_20(lua_State *L) {
		if (!_lg_typecheck_apply_overload_20(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueVisitor::apply(osg::Vec3d & arg1) function, expected prototype:\nvoid osg::ValueVisitor::apply(osg::Vec3d & arg1)\nClass arguments details:\narg 1 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec3d* _arg1_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ValueVisitor::apply function");
		}
		osg::Vec3d & _arg1=*_arg1_ptr;

		osg::ValueVisitor* self=(Luna< osg::ValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueVisitor::apply(osg::Vec3d &). Got : '%s'\n%s",typeid(Luna< osg::ValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ValueVisitor::apply(osg::Vec4d & arg1)
	static int _bind_apply_overload_21(lua_State *L) {
		if (!_lg_typecheck_apply_overload_21(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueVisitor::apply(osg::Vec4d & arg1) function, expected prototype:\nvoid osg::ValueVisitor::apply(osg::Vec4d & arg1)\nClass arguments details:\narg 1 ID = 92303233\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec4d* _arg1_ptr=(Luna< osg::Vec4d >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ValueVisitor::apply function");
		}
		osg::Vec4d & _arg1=*_arg1_ptr;

		osg::ValueVisitor* self=(Luna< osg::ValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueVisitor::apply(osg::Vec4d &). Got : '%s'\n%s",typeid(Luna< osg::ValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ValueVisitor::apply(osg::Matrixf & arg1)
	static int _bind_apply_overload_22(lua_State *L) {
		if (!_lg_typecheck_apply_overload_22(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueVisitor::apply(osg::Matrixf & arg1) function, expected prototype:\nvoid osg::ValueVisitor::apply(osg::Matrixf & arg1)\nClass arguments details:\narg 1 ID = 18903840\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Matrixf* _arg1_ptr=(Luna< osg::Matrixf >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ValueVisitor::apply function");
		}
		osg::Matrixf & _arg1=*_arg1_ptr;

		osg::ValueVisitor* self=(Luna< osg::ValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueVisitor::apply(osg::Matrixf &). Got : '%s'\n%s",typeid(Luna< osg::ValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		return 0;
	}

	// Overload binder for osg::ValueVisitor::apply
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

		luaL_error(L, "error in function apply, cannot match any of the overloads for function apply:\n  apply(signed char &)\n  apply(short &)\n  apply(int &)\n  apply(unsigned short &)\n  apply(unsigned char &)\n  apply(unsigned int &)\n  apply(float &)\n  apply(double &)\n  apply(osg::Vec2f &)\n  apply(osg::Vec3f &)\n  apply(osg::Vec4f &)\n  apply(osg::Vec4ub &)\n  apply(osg::Vec2b &)\n  apply(osg::Vec3b &)\n  apply(osg::Vec4b &)\n  apply(osg::Vec2s &)\n  apply(osg::Vec3s &)\n  apply(osg::Vec4s &)\n  apply(osg::Vec2d &)\n  apply(osg::Vec3d &)\n  apply(osg::Vec4d &)\n  apply(osg::Matrixf &)\n");
		return 0;
	}

	// void osg::ValueVisitor::base_apply(signed char & arg1)
	static int _bind_base_apply_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueVisitor::base_apply(signed char & arg1) function, expected prototype:\nvoid osg::ValueVisitor::base_apply(signed char & arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		signed char _arg1=(signed char)lua_tointeger(L,2);

		osg::ValueVisitor* self=(Luna< osg::ValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueVisitor::base_apply(signed char &). Got : '%s'\n%s",typeid(Luna< osg::ValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ValueVisitor::apply(_arg1);

		lua_pushnumber(L,_arg1);
		return 1;
	}

	// void osg::ValueVisitor::base_apply(short & arg1)
	static int _bind_base_apply_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueVisitor::base_apply(short & arg1) function, expected prototype:\nvoid osg::ValueVisitor::base_apply(short & arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		short _arg1=(short)lua_tointeger(L,2);

		osg::ValueVisitor* self=(Luna< osg::ValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueVisitor::base_apply(short &). Got : '%s'\n%s",typeid(Luna< osg::ValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ValueVisitor::apply(_arg1);

		lua_pushnumber(L,_arg1);
		return 1;
	}

	// void osg::ValueVisitor::base_apply(int & arg1)
	static int _bind_base_apply_overload_3(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueVisitor::base_apply(int & arg1) function, expected prototype:\nvoid osg::ValueVisitor::base_apply(int & arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int _arg1=(int)lua_tointeger(L,2);

		osg::ValueVisitor* self=(Luna< osg::ValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueVisitor::base_apply(int &). Got : '%s'\n%s",typeid(Luna< osg::ValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ValueVisitor::apply(_arg1);

		lua_pushnumber(L,_arg1);
		return 1;
	}

	// void osg::ValueVisitor::base_apply(unsigned short & arg1)
	static int _bind_base_apply_overload_4(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueVisitor::base_apply(unsigned short & arg1) function, expected prototype:\nvoid osg::ValueVisitor::base_apply(unsigned short & arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned short _arg1=(unsigned short)lua_tointeger(L,2);

		osg::ValueVisitor* self=(Luna< osg::ValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueVisitor::base_apply(unsigned short &). Got : '%s'\n%s",typeid(Luna< osg::ValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ValueVisitor::apply(_arg1);

		lua_pushnumber(L,_arg1);
		return 1;
	}

	// void osg::ValueVisitor::base_apply(unsigned char & arg1)
	static int _bind_base_apply_overload_5(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueVisitor::base_apply(unsigned char & arg1) function, expected prototype:\nvoid osg::ValueVisitor::base_apply(unsigned char & arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char _arg1 = (unsigned char)(lua_tointeger(L,2));

		osg::ValueVisitor* self=(Luna< osg::ValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueVisitor::base_apply(unsigned char &). Got : '%s'\n%s",typeid(Luna< osg::ValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ValueVisitor::apply(_arg1);

		lua_pushnumber(L,(int)_arg1);
		return 1;
	}

	// void osg::ValueVisitor::base_apply(unsigned int & arg1)
	static int _bind_base_apply_overload_6(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueVisitor::base_apply(unsigned int & arg1) function, expected prototype:\nvoid osg::ValueVisitor::base_apply(unsigned int & arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int _arg1=(unsigned int)lua_tointeger(L,2);

		osg::ValueVisitor* self=(Luna< osg::ValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueVisitor::base_apply(unsigned int &). Got : '%s'\n%s",typeid(Luna< osg::ValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ValueVisitor::apply(_arg1);

		lua_pushnumber(L,_arg1);
		return 1;
	}

	// void osg::ValueVisitor::base_apply(float & arg1)
	static int _bind_base_apply_overload_7(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_7(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueVisitor::base_apply(float & arg1) function, expected prototype:\nvoid osg::ValueVisitor::base_apply(float & arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float _arg1=(float)lua_tonumber(L,2);

		osg::ValueVisitor* self=(Luna< osg::ValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueVisitor::base_apply(float &). Got : '%s'\n%s",typeid(Luna< osg::ValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ValueVisitor::apply(_arg1);

		lua_pushnumber(L,_arg1);
		return 1;
	}

	// void osg::ValueVisitor::base_apply(double & arg1)
	static int _bind_base_apply_overload_8(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_8(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueVisitor::base_apply(double & arg1) function, expected prototype:\nvoid osg::ValueVisitor::base_apply(double & arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double _arg1=(double)lua_tonumber(L,2);

		osg::ValueVisitor* self=(Luna< osg::ValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueVisitor::base_apply(double &). Got : '%s'\n%s",typeid(Luna< osg::ValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ValueVisitor::apply(_arg1);

		lua_pushnumber(L,_arg1);
		return 1;
	}

	// void osg::ValueVisitor::base_apply(osg::Vec2f & arg1)
	static int _bind_base_apply_overload_9(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_9(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueVisitor::base_apply(osg::Vec2f & arg1) function, expected prototype:\nvoid osg::ValueVisitor::base_apply(osg::Vec2f & arg1)\nClass arguments details:\narg 1 ID = 92303173\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec2f* _arg1_ptr=(Luna< osg::Vec2f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ValueVisitor::base_apply function");
		}
		osg::Vec2f & _arg1=*_arg1_ptr;

		osg::ValueVisitor* self=(Luna< osg::ValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueVisitor::base_apply(osg::Vec2f &). Got : '%s'\n%s",typeid(Luna< osg::ValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ValueVisitor::apply(_arg1);

		return 0;
	}

	// void osg::ValueVisitor::base_apply(osg::Vec3f & arg1)
	static int _bind_base_apply_overload_10(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_10(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueVisitor::base_apply(osg::Vec3f & arg1) function, expected prototype:\nvoid osg::ValueVisitor::base_apply(osg::Vec3f & arg1)\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ValueVisitor::base_apply function");
		}
		osg::Vec3f & _arg1=*_arg1_ptr;

		osg::ValueVisitor* self=(Luna< osg::ValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueVisitor::base_apply(osg::Vec3f &). Got : '%s'\n%s",typeid(Luna< osg::ValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ValueVisitor::apply(_arg1);

		return 0;
	}

	// void osg::ValueVisitor::base_apply(osg::Vec4f & arg1)
	static int _bind_base_apply_overload_11(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_11(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueVisitor::base_apply(osg::Vec4f & arg1) function, expected prototype:\nvoid osg::ValueVisitor::base_apply(osg::Vec4f & arg1)\nClass arguments details:\narg 1 ID = 92303235\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec4f* _arg1_ptr=(Luna< osg::Vec4f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ValueVisitor::base_apply function");
		}
		osg::Vec4f & _arg1=*_arg1_ptr;

		osg::ValueVisitor* self=(Luna< osg::ValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueVisitor::base_apply(osg::Vec4f &). Got : '%s'\n%s",typeid(Luna< osg::ValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ValueVisitor::apply(_arg1);

		return 0;
	}

	// void osg::ValueVisitor::base_apply(osg::Vec4ub & arg1)
	static int _bind_base_apply_overload_12(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_12(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueVisitor::base_apply(osg::Vec4ub & arg1) function, expected prototype:\nvoid osg::ValueVisitor::base_apply(osg::Vec4ub & arg1)\nClass arguments details:\narg 1 ID = 61400540\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec4ub* _arg1_ptr=(Luna< osg::Vec4ub >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ValueVisitor::base_apply function");
		}
		osg::Vec4ub & _arg1=*_arg1_ptr;

		osg::ValueVisitor* self=(Luna< osg::ValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueVisitor::base_apply(osg::Vec4ub &). Got : '%s'\n%s",typeid(Luna< osg::ValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ValueVisitor::apply(_arg1);

		return 0;
	}

	// void osg::ValueVisitor::base_apply(osg::Vec2b & arg1)
	static int _bind_base_apply_overload_13(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_13(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueVisitor::base_apply(osg::Vec2b & arg1) function, expected prototype:\nvoid osg::ValueVisitor::base_apply(osg::Vec2b & arg1)\nClass arguments details:\narg 1 ID = 92303169\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec2b* _arg1_ptr=(Luna< osg::Vec2b >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ValueVisitor::base_apply function");
		}
		osg::Vec2b & _arg1=*_arg1_ptr;

		osg::ValueVisitor* self=(Luna< osg::ValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueVisitor::base_apply(osg::Vec2b &). Got : '%s'\n%s",typeid(Luna< osg::ValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ValueVisitor::apply(_arg1);

		return 0;
	}

	// void osg::ValueVisitor::base_apply(osg::Vec3b & arg1)
	static int _bind_base_apply_overload_14(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_14(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueVisitor::base_apply(osg::Vec3b & arg1) function, expected prototype:\nvoid osg::ValueVisitor::base_apply(osg::Vec3b & arg1)\nClass arguments details:\narg 1 ID = 92303200\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec3b* _arg1_ptr=(Luna< osg::Vec3b >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ValueVisitor::base_apply function");
		}
		osg::Vec3b & _arg1=*_arg1_ptr;

		osg::ValueVisitor* self=(Luna< osg::ValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueVisitor::base_apply(osg::Vec3b &). Got : '%s'\n%s",typeid(Luna< osg::ValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ValueVisitor::apply(_arg1);

		return 0;
	}

	// void osg::ValueVisitor::base_apply(osg::Vec4b & arg1)
	static int _bind_base_apply_overload_15(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_15(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueVisitor::base_apply(osg::Vec4b & arg1) function, expected prototype:\nvoid osg::ValueVisitor::base_apply(osg::Vec4b & arg1)\nClass arguments details:\narg 1 ID = 92303231\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec4b* _arg1_ptr=(Luna< osg::Vec4b >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ValueVisitor::base_apply function");
		}
		osg::Vec4b & _arg1=*_arg1_ptr;

		osg::ValueVisitor* self=(Luna< osg::ValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueVisitor::base_apply(osg::Vec4b &). Got : '%s'\n%s",typeid(Luna< osg::ValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ValueVisitor::apply(_arg1);

		return 0;
	}

	// void osg::ValueVisitor::base_apply(osg::Vec2s & arg1)
	static int _bind_base_apply_overload_16(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_16(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueVisitor::base_apply(osg::Vec2s & arg1) function, expected prototype:\nvoid osg::ValueVisitor::base_apply(osg::Vec2s & arg1)\nClass arguments details:\narg 1 ID = 92303186\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec2s* _arg1_ptr=(Luna< osg::Vec2s >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ValueVisitor::base_apply function");
		}
		osg::Vec2s & _arg1=*_arg1_ptr;

		osg::ValueVisitor* self=(Luna< osg::ValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueVisitor::base_apply(osg::Vec2s &). Got : '%s'\n%s",typeid(Luna< osg::ValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ValueVisitor::apply(_arg1);

		return 0;
	}

	// void osg::ValueVisitor::base_apply(osg::Vec3s & arg1)
	static int _bind_base_apply_overload_17(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_17(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueVisitor::base_apply(osg::Vec3s & arg1) function, expected prototype:\nvoid osg::ValueVisitor::base_apply(osg::Vec3s & arg1)\nClass arguments details:\narg 1 ID = 92303217\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec3s* _arg1_ptr=(Luna< osg::Vec3s >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ValueVisitor::base_apply function");
		}
		osg::Vec3s & _arg1=*_arg1_ptr;

		osg::ValueVisitor* self=(Luna< osg::ValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueVisitor::base_apply(osg::Vec3s &). Got : '%s'\n%s",typeid(Luna< osg::ValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ValueVisitor::apply(_arg1);

		return 0;
	}

	// void osg::ValueVisitor::base_apply(osg::Vec4s & arg1)
	static int _bind_base_apply_overload_18(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_18(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueVisitor::base_apply(osg::Vec4s & arg1) function, expected prototype:\nvoid osg::ValueVisitor::base_apply(osg::Vec4s & arg1)\nClass arguments details:\narg 1 ID = 92303248\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec4s* _arg1_ptr=(Luna< osg::Vec4s >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ValueVisitor::base_apply function");
		}
		osg::Vec4s & _arg1=*_arg1_ptr;

		osg::ValueVisitor* self=(Luna< osg::ValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueVisitor::base_apply(osg::Vec4s &). Got : '%s'\n%s",typeid(Luna< osg::ValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ValueVisitor::apply(_arg1);

		return 0;
	}

	// void osg::ValueVisitor::base_apply(osg::Vec2d & arg1)
	static int _bind_base_apply_overload_19(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_19(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueVisitor::base_apply(osg::Vec2d & arg1) function, expected prototype:\nvoid osg::ValueVisitor::base_apply(osg::Vec2d & arg1)\nClass arguments details:\narg 1 ID = 92303171\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec2d* _arg1_ptr=(Luna< osg::Vec2d >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ValueVisitor::base_apply function");
		}
		osg::Vec2d & _arg1=*_arg1_ptr;

		osg::ValueVisitor* self=(Luna< osg::ValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueVisitor::base_apply(osg::Vec2d &). Got : '%s'\n%s",typeid(Luna< osg::ValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ValueVisitor::apply(_arg1);

		return 0;
	}

	// void osg::ValueVisitor::base_apply(osg::Vec3d & arg1)
	static int _bind_base_apply_overload_20(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_20(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueVisitor::base_apply(osg::Vec3d & arg1) function, expected prototype:\nvoid osg::ValueVisitor::base_apply(osg::Vec3d & arg1)\nClass arguments details:\narg 1 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec3d* _arg1_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ValueVisitor::base_apply function");
		}
		osg::Vec3d & _arg1=*_arg1_ptr;

		osg::ValueVisitor* self=(Luna< osg::ValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueVisitor::base_apply(osg::Vec3d &). Got : '%s'\n%s",typeid(Luna< osg::ValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ValueVisitor::apply(_arg1);

		return 0;
	}

	// void osg::ValueVisitor::base_apply(osg::Vec4d & arg1)
	static int _bind_base_apply_overload_21(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_21(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueVisitor::base_apply(osg::Vec4d & arg1) function, expected prototype:\nvoid osg::ValueVisitor::base_apply(osg::Vec4d & arg1)\nClass arguments details:\narg 1 ID = 92303233\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec4d* _arg1_ptr=(Luna< osg::Vec4d >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ValueVisitor::base_apply function");
		}
		osg::Vec4d & _arg1=*_arg1_ptr;

		osg::ValueVisitor* self=(Luna< osg::ValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueVisitor::base_apply(osg::Vec4d &). Got : '%s'\n%s",typeid(Luna< osg::ValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ValueVisitor::apply(_arg1);

		return 0;
	}

	// void osg::ValueVisitor::base_apply(osg::Matrixf & arg1)
	static int _bind_base_apply_overload_22(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_22(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueVisitor::base_apply(osg::Matrixf & arg1) function, expected prototype:\nvoid osg::ValueVisitor::base_apply(osg::Matrixf & arg1)\nClass arguments details:\narg 1 ID = 18903840\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Matrixf* _arg1_ptr=(Luna< osg::Matrixf >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ValueVisitor::base_apply function");
		}
		osg::Matrixf & _arg1=*_arg1_ptr;

		osg::ValueVisitor* self=(Luna< osg::ValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueVisitor::base_apply(osg::Matrixf &). Got : '%s'\n%s",typeid(Luna< osg::ValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ValueVisitor::apply(_arg1);

		return 0;
	}

	// Overload binder for osg::ValueVisitor::base_apply
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

		luaL_error(L, "error in function base_apply, cannot match any of the overloads for function base_apply:\n  base_apply(signed char &)\n  base_apply(short &)\n  base_apply(int &)\n  base_apply(unsigned short &)\n  base_apply(unsigned char &)\n  base_apply(unsigned int &)\n  base_apply(float &)\n  base_apply(double &)\n  base_apply(osg::Vec2f &)\n  base_apply(osg::Vec3f &)\n  base_apply(osg::Vec4f &)\n  base_apply(osg::Vec4ub &)\n  base_apply(osg::Vec2b &)\n  base_apply(osg::Vec3b &)\n  base_apply(osg::Vec4b &)\n  base_apply(osg::Vec2s &)\n  base_apply(osg::Vec3s &)\n  base_apply(osg::Vec4s &)\n  base_apply(osg::Vec2d &)\n  base_apply(osg::Vec3d &)\n  base_apply(osg::Vec4d &)\n  base_apply(osg::Matrixf &)\n");
		return 0;
	}


	// Operator binds:

};

osg::ValueVisitor* LunaTraits< osg::ValueVisitor >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_ValueVisitor::_bind_ctor(L);
}

void LunaTraits< osg::ValueVisitor >::_bind_dtor(osg::ValueVisitor* obj) {
	delete obj;
}

const char LunaTraits< osg::ValueVisitor >::className[] = "ValueVisitor";
const char LunaTraits< osg::ValueVisitor >::fullName[] = "osg::ValueVisitor";
const char LunaTraits< osg::ValueVisitor >::moduleName[] = "osg";
const char* LunaTraits< osg::ValueVisitor >::parents[] = {0};
const int LunaTraits< osg::ValueVisitor >::hash = 87991103;
const int LunaTraits< osg::ValueVisitor >::uniqueIDs[] = {87991103,0};

luna_RegType LunaTraits< osg::ValueVisitor >::methods[] = {
	{"apply", &luna_wrapper_osg_ValueVisitor::_bind_apply},
	{"base_apply", &luna_wrapper_osg_ValueVisitor::_bind_base_apply},
	{"dynCast", &luna_wrapper_osg_ValueVisitor::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_ValueVisitor::_bind___eq},
	{"fromVoid", &luna_wrapper_osg_ValueVisitor::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_ValueVisitor::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_ValueVisitor::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ValueVisitor >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ValueVisitor >::enumValues[] = {
	{0,0}
};


