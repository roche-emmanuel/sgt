#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_ValueObject_SetValueVisitor.h>

class luna_wrapper_osg_ValueObject_SetValueVisitor {
public:
	typedef Luna< osg::ValueObject::SetValueVisitor > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::ValueObject::SetValueVisitor* self=(Luna< osg::ValueObject::SetValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<osg::ValueObject::SetValueVisitor,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,55012529) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::ValueObject::SetValueVisitor*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::ValueObject::SetValueVisitor* rhs =(Luna< osg::ValueObject::SetValueVisitor >::check(L,2));
		osg::ValueObject::SetValueVisitor* self=(Luna< osg::ValueObject::SetValueVisitor >::check(L,1));
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

		osg::ValueObject::SetValueVisitor* self= (osg::ValueObject::SetValueVisitor*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::ValueObject::SetValueVisitor >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,55012529) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osg::ValueObject::SetValueVisitor >::check(L,1));
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

		osg::ValueObject::SetValueVisitor* self=(Luna< osg::ValueObject::SetValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::ValueObject::SetValueVisitor");
		
		return luna_dynamicCast(L,converters,"osg::ValueObject::SetValueVisitor",name);
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

		if( lua_isboolean(L,2)==0 ) return false;
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

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_8(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_9(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_10(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_11(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303173) ) return false;
		if( (!(Luna< osg::Vec2f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_12(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_13(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303235) ) return false;
		if( (!(Luna< osg::Vec4f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_14(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303171) ) return false;
		if( (!(Luna< osg::Vec2d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_15(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_16(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303233) ) return false;
		if( (!(Luna< osg::Vec4d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_17(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,80263306) ) return false;
		if( (!(Luna< osg::Quat >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_18(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,86970521) ) return false;
		if( (!(Luna< osg::Plane >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_19(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903840) ) return false;
		if( (!(Luna< osg::Matrixf >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_20(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		if( (!(Luna< osg::Matrixd >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
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

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_8(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_9(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_10(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_11(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303173) ) return false;
		if( (!(Luna< osg::Vec2f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_12(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_13(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303235) ) return false;
		if( (!(Luna< osg::Vec4f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_14(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303171) ) return false;
		if( (!(Luna< osg::Vec2d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_15(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_16(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303233) ) return false;
		if( (!(Luna< osg::Vec4d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_17(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,80263306) ) return false;
		if( (!(Luna< osg::Quat >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_18(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,86970521) ) return false;
		if( (!(Luna< osg::Plane >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_19(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903840) ) return false;
		if( (!(Luna< osg::Matrixf >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_20(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		if( (!(Luna< osg::Matrixd >::check(L,2))) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::ValueObject::SetValueVisitor::SetValueVisitor()
	static osg::ValueObject::SetValueVisitor* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::ValueObject::SetValueVisitor::SetValueVisitor() function, expected prototype:\nosg::ValueObject::SetValueVisitor::SetValueVisitor()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::ValueObject::SetValueVisitor();
	}

	// osg::ValueObject::SetValueVisitor::SetValueVisitor(lua_Table * data)
	static osg::ValueObject::SetValueVisitor* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::ValueObject::SetValueVisitor::SetValueVisitor(lua_Table * data) function, expected prototype:\nosg::ValueObject::SetValueVisitor::SetValueVisitor(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_ValueObject_SetValueVisitor(L,NULL);
	}

	// Overload binder for osg::ValueObject::SetValueVisitor::SetValueVisitor
	static osg::ValueObject::SetValueVisitor* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function SetValueVisitor, cannot match any of the overloads for function SetValueVisitor:\n  SetValueVisitor()\n  SetValueVisitor(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void osg::ValueObject::SetValueVisitor::apply(bool & value)
	static int _bind_apply_overload_1(lua_State *L) {
		if (!_lg_typecheck_apply_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueObject::SetValueVisitor::apply(bool & value) function, expected prototype:\nvoid osg::ValueObject::SetValueVisitor::apply(bool & value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		osg::ValueObject::SetValueVisitor* self=(Luna< osg::ValueObject::SetValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueObject::SetValueVisitor::apply(bool &). Got : '%s'\n%s",typeid(Luna< osg::ValueObject::SetValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(value);

		lua_pushboolean(L,value?1:0);
		return 1;
	}

	// void osg::ValueObject::SetValueVisitor::apply(char & value)
	static int _bind_apply_overload_2(lua_State *L) {
		if (!_lg_typecheck_apply_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueObject::SetValueVisitor::apply(char & value) function, expected prototype:\nvoid osg::ValueObject::SetValueVisitor::apply(char & value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		char value=(char)lua_tointeger(L,2);

		osg::ValueObject::SetValueVisitor* self=(Luna< osg::ValueObject::SetValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueObject::SetValueVisitor::apply(char &). Got : '%s'\n%s",typeid(Luna< osg::ValueObject::SetValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(value);

		lua_pushnumber(L,value);
		return 1;
	}

	// void osg::ValueObject::SetValueVisitor::apply(unsigned char & value)
	static int _bind_apply_overload_3(lua_State *L) {
		if (!_lg_typecheck_apply_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueObject::SetValueVisitor::apply(unsigned char & value) function, expected prototype:\nvoid osg::ValueObject::SetValueVisitor::apply(unsigned char & value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		osg::ValueObject::SetValueVisitor* self=(Luna< osg::ValueObject::SetValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueObject::SetValueVisitor::apply(unsigned char &). Got : '%s'\n%s",typeid(Luna< osg::ValueObject::SetValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(value);

		lua_pushnumber(L,(int)value);
		return 1;
	}

	// void osg::ValueObject::SetValueVisitor::apply(short & value)
	static int _bind_apply_overload_4(lua_State *L) {
		if (!_lg_typecheck_apply_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueObject::SetValueVisitor::apply(short & value) function, expected prototype:\nvoid osg::ValueObject::SetValueVisitor::apply(short & value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		short value=(short)lua_tointeger(L,2);

		osg::ValueObject::SetValueVisitor* self=(Luna< osg::ValueObject::SetValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueObject::SetValueVisitor::apply(short &). Got : '%s'\n%s",typeid(Luna< osg::ValueObject::SetValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(value);

		lua_pushnumber(L,value);
		return 1;
	}

	// void osg::ValueObject::SetValueVisitor::apply(unsigned short & value)
	static int _bind_apply_overload_5(lua_State *L) {
		if (!_lg_typecheck_apply_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueObject::SetValueVisitor::apply(unsigned short & value) function, expected prototype:\nvoid osg::ValueObject::SetValueVisitor::apply(unsigned short & value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned short value=(unsigned short)lua_tointeger(L,2);

		osg::ValueObject::SetValueVisitor* self=(Luna< osg::ValueObject::SetValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueObject::SetValueVisitor::apply(unsigned short &). Got : '%s'\n%s",typeid(Luna< osg::ValueObject::SetValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(value);

		lua_pushnumber(L,value);
		return 1;
	}

	// void osg::ValueObject::SetValueVisitor::apply(int & value)
	static int _bind_apply_overload_6(lua_State *L) {
		if (!_lg_typecheck_apply_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueObject::SetValueVisitor::apply(int & value) function, expected prototype:\nvoid osg::ValueObject::SetValueVisitor::apply(int & value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		osg::ValueObject::SetValueVisitor* self=(Luna< osg::ValueObject::SetValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueObject::SetValueVisitor::apply(int &). Got : '%s'\n%s",typeid(Luna< osg::ValueObject::SetValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(value);

		lua_pushnumber(L,value);
		return 1;
	}

	// void osg::ValueObject::SetValueVisitor::apply(unsigned int & value)
	static int _bind_apply_overload_7(lua_State *L) {
		if (!_lg_typecheck_apply_overload_7(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueObject::SetValueVisitor::apply(unsigned int & value) function, expected prototype:\nvoid osg::ValueObject::SetValueVisitor::apply(unsigned int & value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osg::ValueObject::SetValueVisitor* self=(Luna< osg::ValueObject::SetValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueObject::SetValueVisitor::apply(unsigned int &). Got : '%s'\n%s",typeid(Luna< osg::ValueObject::SetValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(value);

		lua_pushnumber(L,value);
		return 1;
	}

	// void osg::ValueObject::SetValueVisitor::apply(float & value)
	static int _bind_apply_overload_8(lua_State *L) {
		if (!_lg_typecheck_apply_overload_8(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueObject::SetValueVisitor::apply(float & value) function, expected prototype:\nvoid osg::ValueObject::SetValueVisitor::apply(float & value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		osg::ValueObject::SetValueVisitor* self=(Luna< osg::ValueObject::SetValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueObject::SetValueVisitor::apply(float &). Got : '%s'\n%s",typeid(Luna< osg::ValueObject::SetValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(value);

		lua_pushnumber(L,value);
		return 1;
	}

	// void osg::ValueObject::SetValueVisitor::apply(double & value)
	static int _bind_apply_overload_9(lua_State *L) {
		if (!_lg_typecheck_apply_overload_9(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueObject::SetValueVisitor::apply(double & value) function, expected prototype:\nvoid osg::ValueObject::SetValueVisitor::apply(double & value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double value=(double)lua_tonumber(L,2);

		osg::ValueObject::SetValueVisitor* self=(Luna< osg::ValueObject::SetValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueObject::SetValueVisitor::apply(double &). Got : '%s'\n%s",typeid(Luna< osg::ValueObject::SetValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(value);

		lua_pushnumber(L,value);
		return 1;
	}

	// void osg::ValueObject::SetValueVisitor::apply(std::string & value)
	static int _bind_apply_overload_10(lua_State *L) {
		if (!_lg_typecheck_apply_overload_10(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueObject::SetValueVisitor::apply(std::string & value) function, expected prototype:\nvoid osg::ValueObject::SetValueVisitor::apply(std::string & value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string value(lua_tostring(L,2),lua_objlen(L,2));

		osg::ValueObject::SetValueVisitor* self=(Luna< osg::ValueObject::SetValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueObject::SetValueVisitor::apply(std::string &). Got : '%s'\n%s",typeid(Luna< osg::ValueObject::SetValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(value);

		lua_pushlstring(L,value.data(),value.size());
		return 1;
	}

	// void osg::ValueObject::SetValueVisitor::apply(osg::Vec2f & value)
	static int _bind_apply_overload_11(lua_State *L) {
		if (!_lg_typecheck_apply_overload_11(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueObject::SetValueVisitor::apply(osg::Vec2f & value) function, expected prototype:\nvoid osg::ValueObject::SetValueVisitor::apply(osg::Vec2f & value)\nClass arguments details:\narg 1 ID = 92303173\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec2f* value_ptr=(Luna< osg::Vec2f >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osg::ValueObject::SetValueVisitor::apply function");
		}
		osg::Vec2f & value=*value_ptr;

		osg::ValueObject::SetValueVisitor* self=(Luna< osg::ValueObject::SetValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueObject::SetValueVisitor::apply(osg::Vec2f &). Got : '%s'\n%s",typeid(Luna< osg::ValueObject::SetValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(value);

		return 0;
	}

	// void osg::ValueObject::SetValueVisitor::apply(osg::Vec3f & value)
	static int _bind_apply_overload_12(lua_State *L) {
		if (!_lg_typecheck_apply_overload_12(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueObject::SetValueVisitor::apply(osg::Vec3f & value) function, expected prototype:\nvoid osg::ValueObject::SetValueVisitor::apply(osg::Vec3f & value)\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec3f* value_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osg::ValueObject::SetValueVisitor::apply function");
		}
		osg::Vec3f & value=*value_ptr;

		osg::ValueObject::SetValueVisitor* self=(Luna< osg::ValueObject::SetValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueObject::SetValueVisitor::apply(osg::Vec3f &). Got : '%s'\n%s",typeid(Luna< osg::ValueObject::SetValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(value);

		return 0;
	}

	// void osg::ValueObject::SetValueVisitor::apply(osg::Vec4f & value)
	static int _bind_apply_overload_13(lua_State *L) {
		if (!_lg_typecheck_apply_overload_13(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueObject::SetValueVisitor::apply(osg::Vec4f & value) function, expected prototype:\nvoid osg::ValueObject::SetValueVisitor::apply(osg::Vec4f & value)\nClass arguments details:\narg 1 ID = 92303235\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec4f* value_ptr=(Luna< osg::Vec4f >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osg::ValueObject::SetValueVisitor::apply function");
		}
		osg::Vec4f & value=*value_ptr;

		osg::ValueObject::SetValueVisitor* self=(Luna< osg::ValueObject::SetValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueObject::SetValueVisitor::apply(osg::Vec4f &). Got : '%s'\n%s",typeid(Luna< osg::ValueObject::SetValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(value);

		return 0;
	}

	// void osg::ValueObject::SetValueVisitor::apply(osg::Vec2d & value)
	static int _bind_apply_overload_14(lua_State *L) {
		if (!_lg_typecheck_apply_overload_14(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueObject::SetValueVisitor::apply(osg::Vec2d & value) function, expected prototype:\nvoid osg::ValueObject::SetValueVisitor::apply(osg::Vec2d & value)\nClass arguments details:\narg 1 ID = 92303171\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec2d* value_ptr=(Luna< osg::Vec2d >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osg::ValueObject::SetValueVisitor::apply function");
		}
		osg::Vec2d & value=*value_ptr;

		osg::ValueObject::SetValueVisitor* self=(Luna< osg::ValueObject::SetValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueObject::SetValueVisitor::apply(osg::Vec2d &). Got : '%s'\n%s",typeid(Luna< osg::ValueObject::SetValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(value);

		return 0;
	}

	// void osg::ValueObject::SetValueVisitor::apply(osg::Vec3d & value)
	static int _bind_apply_overload_15(lua_State *L) {
		if (!_lg_typecheck_apply_overload_15(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueObject::SetValueVisitor::apply(osg::Vec3d & value) function, expected prototype:\nvoid osg::ValueObject::SetValueVisitor::apply(osg::Vec3d & value)\nClass arguments details:\narg 1 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec3d* value_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osg::ValueObject::SetValueVisitor::apply function");
		}
		osg::Vec3d & value=*value_ptr;

		osg::ValueObject::SetValueVisitor* self=(Luna< osg::ValueObject::SetValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueObject::SetValueVisitor::apply(osg::Vec3d &). Got : '%s'\n%s",typeid(Luna< osg::ValueObject::SetValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(value);

		return 0;
	}

	// void osg::ValueObject::SetValueVisitor::apply(osg::Vec4d & value)
	static int _bind_apply_overload_16(lua_State *L) {
		if (!_lg_typecheck_apply_overload_16(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueObject::SetValueVisitor::apply(osg::Vec4d & value) function, expected prototype:\nvoid osg::ValueObject::SetValueVisitor::apply(osg::Vec4d & value)\nClass arguments details:\narg 1 ID = 92303233\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec4d* value_ptr=(Luna< osg::Vec4d >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osg::ValueObject::SetValueVisitor::apply function");
		}
		osg::Vec4d & value=*value_ptr;

		osg::ValueObject::SetValueVisitor* self=(Luna< osg::ValueObject::SetValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueObject::SetValueVisitor::apply(osg::Vec4d &). Got : '%s'\n%s",typeid(Luna< osg::ValueObject::SetValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(value);

		return 0;
	}

	// void osg::ValueObject::SetValueVisitor::apply(osg::Quat & value)
	static int _bind_apply_overload_17(lua_State *L) {
		if (!_lg_typecheck_apply_overload_17(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueObject::SetValueVisitor::apply(osg::Quat & value) function, expected prototype:\nvoid osg::ValueObject::SetValueVisitor::apply(osg::Quat & value)\nClass arguments details:\narg 1 ID = 80263306\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Quat* value_ptr=(Luna< osg::Quat >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osg::ValueObject::SetValueVisitor::apply function");
		}
		osg::Quat & value=*value_ptr;

		osg::ValueObject::SetValueVisitor* self=(Luna< osg::ValueObject::SetValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueObject::SetValueVisitor::apply(osg::Quat &). Got : '%s'\n%s",typeid(Luna< osg::ValueObject::SetValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(value);

		return 0;
	}

	// void osg::ValueObject::SetValueVisitor::apply(osg::Plane & value)
	static int _bind_apply_overload_18(lua_State *L) {
		if (!_lg_typecheck_apply_overload_18(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueObject::SetValueVisitor::apply(osg::Plane & value) function, expected prototype:\nvoid osg::ValueObject::SetValueVisitor::apply(osg::Plane & value)\nClass arguments details:\narg 1 ID = 86970521\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Plane* value_ptr=(Luna< osg::Plane >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osg::ValueObject::SetValueVisitor::apply function");
		}
		osg::Plane & value=*value_ptr;

		osg::ValueObject::SetValueVisitor* self=(Luna< osg::ValueObject::SetValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueObject::SetValueVisitor::apply(osg::Plane &). Got : '%s'\n%s",typeid(Luna< osg::ValueObject::SetValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(value);

		return 0;
	}

	// void osg::ValueObject::SetValueVisitor::apply(osg::Matrixf & value)
	static int _bind_apply_overload_19(lua_State *L) {
		if (!_lg_typecheck_apply_overload_19(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueObject::SetValueVisitor::apply(osg::Matrixf & value) function, expected prototype:\nvoid osg::ValueObject::SetValueVisitor::apply(osg::Matrixf & value)\nClass arguments details:\narg 1 ID = 18903840\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Matrixf* value_ptr=(Luna< osg::Matrixf >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osg::ValueObject::SetValueVisitor::apply function");
		}
		osg::Matrixf & value=*value_ptr;

		osg::ValueObject::SetValueVisitor* self=(Luna< osg::ValueObject::SetValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueObject::SetValueVisitor::apply(osg::Matrixf &). Got : '%s'\n%s",typeid(Luna< osg::ValueObject::SetValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(value);

		return 0;
	}

	// void osg::ValueObject::SetValueVisitor::apply(osg::Matrixd & value)
	static int _bind_apply_overload_20(lua_State *L) {
		if (!_lg_typecheck_apply_overload_20(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueObject::SetValueVisitor::apply(osg::Matrixd & value) function, expected prototype:\nvoid osg::ValueObject::SetValueVisitor::apply(osg::Matrixd & value)\nClass arguments details:\narg 1 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Matrixd* value_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osg::ValueObject::SetValueVisitor::apply function");
		}
		osg::Matrixd & value=*value_ptr;

		osg::ValueObject::SetValueVisitor* self=(Luna< osg::ValueObject::SetValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueObject::SetValueVisitor::apply(osg::Matrixd &). Got : '%s'\n%s",typeid(Luna< osg::ValueObject::SetValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(value);

		return 0;
	}

	// Overload binder for osg::ValueObject::SetValueVisitor::apply
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

		luaL_error(L, "error in function apply, cannot match any of the overloads for function apply:\n  apply(bool &)\n  apply(char &)\n  apply(unsigned char &)\n  apply(short &)\n  apply(unsigned short &)\n  apply(int &)\n  apply(unsigned int &)\n  apply(float &)\n  apply(double &)\n  apply(std::string &)\n  apply(osg::Vec2f &)\n  apply(osg::Vec3f &)\n  apply(osg::Vec4f &)\n  apply(osg::Vec2d &)\n  apply(osg::Vec3d &)\n  apply(osg::Vec4d &)\n  apply(osg::Quat &)\n  apply(osg::Plane &)\n  apply(osg::Matrixf &)\n  apply(osg::Matrixd &)\n");
		return 0;
	}

	// void osg::ValueObject::SetValueVisitor::base_apply(bool & value)
	static int _bind_base_apply_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueObject::SetValueVisitor::base_apply(bool & value) function, expected prototype:\nvoid osg::ValueObject::SetValueVisitor::base_apply(bool & value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		osg::ValueObject::SetValueVisitor* self=(Luna< osg::ValueObject::SetValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueObject::SetValueVisitor::base_apply(bool &). Got : '%s'\n%s",typeid(Luna< osg::ValueObject::SetValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetValueVisitor::apply(value);

		lua_pushboolean(L,value?1:0);
		return 1;
	}

	// void osg::ValueObject::SetValueVisitor::base_apply(char & value)
	static int _bind_base_apply_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueObject::SetValueVisitor::base_apply(char & value) function, expected prototype:\nvoid osg::ValueObject::SetValueVisitor::base_apply(char & value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		char value=(char)lua_tointeger(L,2);

		osg::ValueObject::SetValueVisitor* self=(Luna< osg::ValueObject::SetValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueObject::SetValueVisitor::base_apply(char &). Got : '%s'\n%s",typeid(Luna< osg::ValueObject::SetValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetValueVisitor::apply(value);

		lua_pushnumber(L,value);
		return 1;
	}

	// void osg::ValueObject::SetValueVisitor::base_apply(unsigned char & value)
	static int _bind_base_apply_overload_3(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueObject::SetValueVisitor::base_apply(unsigned char & value) function, expected prototype:\nvoid osg::ValueObject::SetValueVisitor::base_apply(unsigned char & value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		osg::ValueObject::SetValueVisitor* self=(Luna< osg::ValueObject::SetValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueObject::SetValueVisitor::base_apply(unsigned char &). Got : '%s'\n%s",typeid(Luna< osg::ValueObject::SetValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetValueVisitor::apply(value);

		lua_pushnumber(L,(int)value);
		return 1;
	}

	// void osg::ValueObject::SetValueVisitor::base_apply(short & value)
	static int _bind_base_apply_overload_4(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueObject::SetValueVisitor::base_apply(short & value) function, expected prototype:\nvoid osg::ValueObject::SetValueVisitor::base_apply(short & value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		short value=(short)lua_tointeger(L,2);

		osg::ValueObject::SetValueVisitor* self=(Luna< osg::ValueObject::SetValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueObject::SetValueVisitor::base_apply(short &). Got : '%s'\n%s",typeid(Luna< osg::ValueObject::SetValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetValueVisitor::apply(value);

		lua_pushnumber(L,value);
		return 1;
	}

	// void osg::ValueObject::SetValueVisitor::base_apply(unsigned short & value)
	static int _bind_base_apply_overload_5(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueObject::SetValueVisitor::base_apply(unsigned short & value) function, expected prototype:\nvoid osg::ValueObject::SetValueVisitor::base_apply(unsigned short & value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned short value=(unsigned short)lua_tointeger(L,2);

		osg::ValueObject::SetValueVisitor* self=(Luna< osg::ValueObject::SetValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueObject::SetValueVisitor::base_apply(unsigned short &). Got : '%s'\n%s",typeid(Luna< osg::ValueObject::SetValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetValueVisitor::apply(value);

		lua_pushnumber(L,value);
		return 1;
	}

	// void osg::ValueObject::SetValueVisitor::base_apply(int & value)
	static int _bind_base_apply_overload_6(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueObject::SetValueVisitor::base_apply(int & value) function, expected prototype:\nvoid osg::ValueObject::SetValueVisitor::base_apply(int & value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		osg::ValueObject::SetValueVisitor* self=(Luna< osg::ValueObject::SetValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueObject::SetValueVisitor::base_apply(int &). Got : '%s'\n%s",typeid(Luna< osg::ValueObject::SetValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetValueVisitor::apply(value);

		lua_pushnumber(L,value);
		return 1;
	}

	// void osg::ValueObject::SetValueVisitor::base_apply(unsigned int & value)
	static int _bind_base_apply_overload_7(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_7(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueObject::SetValueVisitor::base_apply(unsigned int & value) function, expected prototype:\nvoid osg::ValueObject::SetValueVisitor::base_apply(unsigned int & value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osg::ValueObject::SetValueVisitor* self=(Luna< osg::ValueObject::SetValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueObject::SetValueVisitor::base_apply(unsigned int &). Got : '%s'\n%s",typeid(Luna< osg::ValueObject::SetValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetValueVisitor::apply(value);

		lua_pushnumber(L,value);
		return 1;
	}

	// void osg::ValueObject::SetValueVisitor::base_apply(float & value)
	static int _bind_base_apply_overload_8(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_8(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueObject::SetValueVisitor::base_apply(float & value) function, expected prototype:\nvoid osg::ValueObject::SetValueVisitor::base_apply(float & value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		osg::ValueObject::SetValueVisitor* self=(Luna< osg::ValueObject::SetValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueObject::SetValueVisitor::base_apply(float &). Got : '%s'\n%s",typeid(Luna< osg::ValueObject::SetValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetValueVisitor::apply(value);

		lua_pushnumber(L,value);
		return 1;
	}

	// void osg::ValueObject::SetValueVisitor::base_apply(double & value)
	static int _bind_base_apply_overload_9(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_9(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueObject::SetValueVisitor::base_apply(double & value) function, expected prototype:\nvoid osg::ValueObject::SetValueVisitor::base_apply(double & value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double value=(double)lua_tonumber(L,2);

		osg::ValueObject::SetValueVisitor* self=(Luna< osg::ValueObject::SetValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueObject::SetValueVisitor::base_apply(double &). Got : '%s'\n%s",typeid(Luna< osg::ValueObject::SetValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetValueVisitor::apply(value);

		lua_pushnumber(L,value);
		return 1;
	}

	// void osg::ValueObject::SetValueVisitor::base_apply(std::string & value)
	static int _bind_base_apply_overload_10(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_10(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueObject::SetValueVisitor::base_apply(std::string & value) function, expected prototype:\nvoid osg::ValueObject::SetValueVisitor::base_apply(std::string & value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string value(lua_tostring(L,2),lua_objlen(L,2));

		osg::ValueObject::SetValueVisitor* self=(Luna< osg::ValueObject::SetValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueObject::SetValueVisitor::base_apply(std::string &). Got : '%s'\n%s",typeid(Luna< osg::ValueObject::SetValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetValueVisitor::apply(value);

		lua_pushlstring(L,value.data(),value.size());
		return 1;
	}

	// void osg::ValueObject::SetValueVisitor::base_apply(osg::Vec2f & value)
	static int _bind_base_apply_overload_11(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_11(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueObject::SetValueVisitor::base_apply(osg::Vec2f & value) function, expected prototype:\nvoid osg::ValueObject::SetValueVisitor::base_apply(osg::Vec2f & value)\nClass arguments details:\narg 1 ID = 92303173\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec2f* value_ptr=(Luna< osg::Vec2f >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osg::ValueObject::SetValueVisitor::base_apply function");
		}
		osg::Vec2f & value=*value_ptr;

		osg::ValueObject::SetValueVisitor* self=(Luna< osg::ValueObject::SetValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueObject::SetValueVisitor::base_apply(osg::Vec2f &). Got : '%s'\n%s",typeid(Luna< osg::ValueObject::SetValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetValueVisitor::apply(value);

		return 0;
	}

	// void osg::ValueObject::SetValueVisitor::base_apply(osg::Vec3f & value)
	static int _bind_base_apply_overload_12(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_12(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueObject::SetValueVisitor::base_apply(osg::Vec3f & value) function, expected prototype:\nvoid osg::ValueObject::SetValueVisitor::base_apply(osg::Vec3f & value)\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec3f* value_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osg::ValueObject::SetValueVisitor::base_apply function");
		}
		osg::Vec3f & value=*value_ptr;

		osg::ValueObject::SetValueVisitor* self=(Luna< osg::ValueObject::SetValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueObject::SetValueVisitor::base_apply(osg::Vec3f &). Got : '%s'\n%s",typeid(Luna< osg::ValueObject::SetValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetValueVisitor::apply(value);

		return 0;
	}

	// void osg::ValueObject::SetValueVisitor::base_apply(osg::Vec4f & value)
	static int _bind_base_apply_overload_13(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_13(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueObject::SetValueVisitor::base_apply(osg::Vec4f & value) function, expected prototype:\nvoid osg::ValueObject::SetValueVisitor::base_apply(osg::Vec4f & value)\nClass arguments details:\narg 1 ID = 92303235\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec4f* value_ptr=(Luna< osg::Vec4f >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osg::ValueObject::SetValueVisitor::base_apply function");
		}
		osg::Vec4f & value=*value_ptr;

		osg::ValueObject::SetValueVisitor* self=(Luna< osg::ValueObject::SetValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueObject::SetValueVisitor::base_apply(osg::Vec4f &). Got : '%s'\n%s",typeid(Luna< osg::ValueObject::SetValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetValueVisitor::apply(value);

		return 0;
	}

	// void osg::ValueObject::SetValueVisitor::base_apply(osg::Vec2d & value)
	static int _bind_base_apply_overload_14(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_14(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueObject::SetValueVisitor::base_apply(osg::Vec2d & value) function, expected prototype:\nvoid osg::ValueObject::SetValueVisitor::base_apply(osg::Vec2d & value)\nClass arguments details:\narg 1 ID = 92303171\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec2d* value_ptr=(Luna< osg::Vec2d >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osg::ValueObject::SetValueVisitor::base_apply function");
		}
		osg::Vec2d & value=*value_ptr;

		osg::ValueObject::SetValueVisitor* self=(Luna< osg::ValueObject::SetValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueObject::SetValueVisitor::base_apply(osg::Vec2d &). Got : '%s'\n%s",typeid(Luna< osg::ValueObject::SetValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetValueVisitor::apply(value);

		return 0;
	}

	// void osg::ValueObject::SetValueVisitor::base_apply(osg::Vec3d & value)
	static int _bind_base_apply_overload_15(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_15(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueObject::SetValueVisitor::base_apply(osg::Vec3d & value) function, expected prototype:\nvoid osg::ValueObject::SetValueVisitor::base_apply(osg::Vec3d & value)\nClass arguments details:\narg 1 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec3d* value_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osg::ValueObject::SetValueVisitor::base_apply function");
		}
		osg::Vec3d & value=*value_ptr;

		osg::ValueObject::SetValueVisitor* self=(Luna< osg::ValueObject::SetValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueObject::SetValueVisitor::base_apply(osg::Vec3d &). Got : '%s'\n%s",typeid(Luna< osg::ValueObject::SetValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetValueVisitor::apply(value);

		return 0;
	}

	// void osg::ValueObject::SetValueVisitor::base_apply(osg::Vec4d & value)
	static int _bind_base_apply_overload_16(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_16(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueObject::SetValueVisitor::base_apply(osg::Vec4d & value) function, expected prototype:\nvoid osg::ValueObject::SetValueVisitor::base_apply(osg::Vec4d & value)\nClass arguments details:\narg 1 ID = 92303233\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec4d* value_ptr=(Luna< osg::Vec4d >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osg::ValueObject::SetValueVisitor::base_apply function");
		}
		osg::Vec4d & value=*value_ptr;

		osg::ValueObject::SetValueVisitor* self=(Luna< osg::ValueObject::SetValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueObject::SetValueVisitor::base_apply(osg::Vec4d &). Got : '%s'\n%s",typeid(Luna< osg::ValueObject::SetValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetValueVisitor::apply(value);

		return 0;
	}

	// void osg::ValueObject::SetValueVisitor::base_apply(osg::Quat & value)
	static int _bind_base_apply_overload_17(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_17(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueObject::SetValueVisitor::base_apply(osg::Quat & value) function, expected prototype:\nvoid osg::ValueObject::SetValueVisitor::base_apply(osg::Quat & value)\nClass arguments details:\narg 1 ID = 80263306\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Quat* value_ptr=(Luna< osg::Quat >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osg::ValueObject::SetValueVisitor::base_apply function");
		}
		osg::Quat & value=*value_ptr;

		osg::ValueObject::SetValueVisitor* self=(Luna< osg::ValueObject::SetValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueObject::SetValueVisitor::base_apply(osg::Quat &). Got : '%s'\n%s",typeid(Luna< osg::ValueObject::SetValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetValueVisitor::apply(value);

		return 0;
	}

	// void osg::ValueObject::SetValueVisitor::base_apply(osg::Plane & value)
	static int _bind_base_apply_overload_18(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_18(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueObject::SetValueVisitor::base_apply(osg::Plane & value) function, expected prototype:\nvoid osg::ValueObject::SetValueVisitor::base_apply(osg::Plane & value)\nClass arguments details:\narg 1 ID = 86970521\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Plane* value_ptr=(Luna< osg::Plane >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osg::ValueObject::SetValueVisitor::base_apply function");
		}
		osg::Plane & value=*value_ptr;

		osg::ValueObject::SetValueVisitor* self=(Luna< osg::ValueObject::SetValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueObject::SetValueVisitor::base_apply(osg::Plane &). Got : '%s'\n%s",typeid(Luna< osg::ValueObject::SetValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetValueVisitor::apply(value);

		return 0;
	}

	// void osg::ValueObject::SetValueVisitor::base_apply(osg::Matrixf & value)
	static int _bind_base_apply_overload_19(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_19(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueObject::SetValueVisitor::base_apply(osg::Matrixf & value) function, expected prototype:\nvoid osg::ValueObject::SetValueVisitor::base_apply(osg::Matrixf & value)\nClass arguments details:\narg 1 ID = 18903840\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Matrixf* value_ptr=(Luna< osg::Matrixf >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osg::ValueObject::SetValueVisitor::base_apply function");
		}
		osg::Matrixf & value=*value_ptr;

		osg::ValueObject::SetValueVisitor* self=(Luna< osg::ValueObject::SetValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueObject::SetValueVisitor::base_apply(osg::Matrixf &). Got : '%s'\n%s",typeid(Luna< osg::ValueObject::SetValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetValueVisitor::apply(value);

		return 0;
	}

	// void osg::ValueObject::SetValueVisitor::base_apply(osg::Matrixd & value)
	static int _bind_base_apply_overload_20(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_20(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ValueObject::SetValueVisitor::base_apply(osg::Matrixd & value) function, expected prototype:\nvoid osg::ValueObject::SetValueVisitor::base_apply(osg::Matrixd & value)\nClass arguments details:\narg 1 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Matrixd* value_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osg::ValueObject::SetValueVisitor::base_apply function");
		}
		osg::Matrixd & value=*value_ptr;

		osg::ValueObject::SetValueVisitor* self=(Luna< osg::ValueObject::SetValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ValueObject::SetValueVisitor::base_apply(osg::Matrixd &). Got : '%s'\n%s",typeid(Luna< osg::ValueObject::SetValueVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetValueVisitor::apply(value);

		return 0;
	}

	// Overload binder for osg::ValueObject::SetValueVisitor::base_apply
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

		luaL_error(L, "error in function base_apply, cannot match any of the overloads for function base_apply:\n  base_apply(bool &)\n  base_apply(char &)\n  base_apply(unsigned char &)\n  base_apply(short &)\n  base_apply(unsigned short &)\n  base_apply(int &)\n  base_apply(unsigned int &)\n  base_apply(float &)\n  base_apply(double &)\n  base_apply(std::string &)\n  base_apply(osg::Vec2f &)\n  base_apply(osg::Vec3f &)\n  base_apply(osg::Vec4f &)\n  base_apply(osg::Vec2d &)\n  base_apply(osg::Vec3d &)\n  base_apply(osg::Vec4d &)\n  base_apply(osg::Quat &)\n  base_apply(osg::Plane &)\n  base_apply(osg::Matrixf &)\n  base_apply(osg::Matrixd &)\n");
		return 0;
	}


	// Operator binds:

};

osg::ValueObject::SetValueVisitor* LunaTraits< osg::ValueObject::SetValueVisitor >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_ValueObject_SetValueVisitor::_bind_ctor(L);
}

void LunaTraits< osg::ValueObject::SetValueVisitor >::_bind_dtor(osg::ValueObject::SetValueVisitor* obj) {
	delete obj;
}

const char LunaTraits< osg::ValueObject::SetValueVisitor >::className[] = "ValueObject_SetValueVisitor";
const char LunaTraits< osg::ValueObject::SetValueVisitor >::fullName[] = "osg::ValueObject::SetValueVisitor";
const char LunaTraits< osg::ValueObject::SetValueVisitor >::moduleName[] = "osg";
const char* LunaTraits< osg::ValueObject::SetValueVisitor >::parents[] = {0};
const int LunaTraits< osg::ValueObject::SetValueVisitor >::hash = 55012529;
const int LunaTraits< osg::ValueObject::SetValueVisitor >::uniqueIDs[] = {55012529,0};

luna_RegType LunaTraits< osg::ValueObject::SetValueVisitor >::methods[] = {
	{"apply", &luna_wrapper_osg_ValueObject_SetValueVisitor::_bind_apply},
	{"base_apply", &luna_wrapper_osg_ValueObject_SetValueVisitor::_bind_base_apply},
	{"dynCast", &luna_wrapper_osg_ValueObject_SetValueVisitor::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_ValueObject_SetValueVisitor::_bind___eq},
	{"fromVoid", &luna_wrapper_osg_ValueObject_SetValueVisitor::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_ValueObject_SetValueVisitor::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_ValueObject_SetValueVisitor::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ValueObject::SetValueVisitor >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ValueObject::SetValueVisitor >::enumValues[] = {
	{0,0}
};


