#include <plug_common.h>

#include <luna/wrappers/wrapper_ork_AttributeBuffer.h>

class luna_wrapper_ork_AttributeBuffer {
public:
	typedef Luna< ork::AttributeBuffer > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::Object* self=(Luna< ork::Object >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<ork::Object,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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

		ork::AttributeBuffer* self= (ork::AttributeBuffer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::AttributeBuffer >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1381405) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< ork::Object >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_Object(lua_State *L) {
		// all checked are already performed before reaching this point.
		//ork::AttributeBuffer* ptr= dynamic_cast< ork::AttributeBuffer* >(Luna< ork::Object >::check(L,1));
		ork::AttributeBuffer* ptr= luna_caster< ork::Object, ork::AttributeBuffer >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< ork::AttributeBuffer >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>8 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,5,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Buffer >(L,5) ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( luatop>7 && (lua_type(L,8)!=LUA_TNUMBER || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>7 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Buffer >(L,4) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>6 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Buffer >(L,3) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<6 || luatop>9 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( lua_isboolean(L,5)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,6,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Buffer >(L,6) ) return false;
		if( luatop>6 && (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( luatop>7 && (lua_type(L,8)!=LUA_TNUMBER || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		if( luatop>8 && (lua_type(L,9)!=LUA_TNUMBER || lua_tointeger(L,9) != lua_tonumber(L,9)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>8 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Buffer >(L,5) ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( luatop>7 && (lua_type(L,8)!=LUA_TNUMBER || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>7 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Buffer >(L,4) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAttributeSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBuffer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setBuffer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Buffer >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getStride(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOffset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_toString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// ork::AttributeBuffer::AttributeBuffer(int index, int size, ork::AttributeType t, bool norm, ork::ptr< ork::Buffer > b, int stride = 0, int offset = 0, int divisor = 0)
	static ork::AttributeBuffer* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::AttributeBuffer::AttributeBuffer(int index, int size, ork::AttributeType t, bool norm, ork::ptr< ork::Buffer > b, int stride = 0, int offset = 0, int divisor = 0) function, expected prototype:\nork::AttributeBuffer::AttributeBuffer(int index, int size, ork::AttributeType t, bool norm, ork::ptr< ork::Buffer > b, int stride = 0, int offset = 0, int divisor = 0)\nClass arguments details:\narg 5 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int index=(int)lua_tointeger(L,1);
		int size=(int)lua_tointeger(L,2);
		ork::AttributeType t=(ork::AttributeType)lua_tointeger(L,3);
		bool norm=(bool)(lua_toboolean(L,4)==1);
		ork::ptr< ork::Buffer > b = Luna< ork::Object >::checkSubType< ork::Buffer >(L,5);
		int stride=luatop>5 ? (int)lua_tointeger(L,6) : (int)0;
		int offset=luatop>6 ? (int)lua_tointeger(L,7) : (int)0;
		int divisor=luatop>7 ? (int)lua_tointeger(L,8) : (int)0;

		return new ork::AttributeBuffer(index, size, t, norm, b, stride, offset, divisor);
	}

	// ork::AttributeBuffer::AttributeBuffer(int index, int size, ork::AttributeType t, ork::ptr< ork::Buffer > b, int stride = 0, int offset = 0, int divisor = 0)
	static ork::AttributeBuffer* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::AttributeBuffer::AttributeBuffer(int index, int size, ork::AttributeType t, ork::ptr< ork::Buffer > b, int stride = 0, int offset = 0, int divisor = 0) function, expected prototype:\nork::AttributeBuffer::AttributeBuffer(int index, int size, ork::AttributeType t, ork::ptr< ork::Buffer > b, int stride = 0, int offset = 0, int divisor = 0)\nClass arguments details:\narg 4 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int index=(int)lua_tointeger(L,1);
		int size=(int)lua_tointeger(L,2);
		ork::AttributeType t=(ork::AttributeType)lua_tointeger(L,3);
		ork::ptr< ork::Buffer > b = Luna< ork::Object >::checkSubType< ork::Buffer >(L,4);
		int stride=luatop>4 ? (int)lua_tointeger(L,5) : (int)0;
		int offset=luatop>5 ? (int)lua_tointeger(L,6) : (int)0;
		int divisor=luatop>6 ? (int)lua_tointeger(L,7) : (int)0;

		return new ork::AttributeBuffer(index, size, t, b, stride, offset, divisor);
	}

	// ork::AttributeBuffer::AttributeBuffer(int index, int size, ork::ptr< ork::Buffer > b, int stride = 0, int offset = 0, int divisor = 0)
	static ork::AttributeBuffer* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in ork::AttributeBuffer::AttributeBuffer(int index, int size, ork::ptr< ork::Buffer > b, int stride = 0, int offset = 0, int divisor = 0) function, expected prototype:\nork::AttributeBuffer::AttributeBuffer(int index, int size, ork::ptr< ork::Buffer > b, int stride = 0, int offset = 0, int divisor = 0)\nClass arguments details:\narg 3 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int index=(int)lua_tointeger(L,1);
		int size=(int)lua_tointeger(L,2);
		ork::ptr< ork::Buffer > b = Luna< ork::Object >::checkSubType< ork::Buffer >(L,3);
		int stride=luatop>3 ? (int)lua_tointeger(L,4) : (int)0;
		int offset=luatop>4 ? (int)lua_tointeger(L,5) : (int)0;
		int divisor=luatop>5 ? (int)lua_tointeger(L,6) : (int)0;

		return new ork::AttributeBuffer(index, size, b, stride, offset, divisor);
	}

	// ork::AttributeBuffer::AttributeBuffer(lua_Table * data, int index, int size, ork::AttributeType t, bool norm, ork::ptr< ork::Buffer > b, int stride = 0, int offset = 0, int divisor = 0)
	static ork::AttributeBuffer* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in ork::AttributeBuffer::AttributeBuffer(lua_Table * data, int index, int size, ork::AttributeType t, bool norm, ork::ptr< ork::Buffer > b, int stride = 0, int offset = 0, int divisor = 0) function, expected prototype:\nork::AttributeBuffer::AttributeBuffer(lua_Table * data, int index, int size, ork::AttributeType t, bool norm, ork::ptr< ork::Buffer > b, int stride = 0, int offset = 0, int divisor = 0)\nClass arguments details:\narg 6 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int index=(int)lua_tointeger(L,2);
		int size=(int)lua_tointeger(L,3);
		ork::AttributeType t=(ork::AttributeType)lua_tointeger(L,4);
		bool norm=(bool)(lua_toboolean(L,5)==1);
		ork::ptr< ork::Buffer > b = Luna< ork::Object >::checkSubType< ork::Buffer >(L,6);
		int stride=luatop>6 ? (int)lua_tointeger(L,7) : (int)0;
		int offset=luatop>7 ? (int)lua_tointeger(L,8) : (int)0;
		int divisor=luatop>8 ? (int)lua_tointeger(L,9) : (int)0;

		return new wrapper_ork_AttributeBuffer(L,NULL, index, size, t, norm, b, stride, offset, divisor);
	}

	// ork::AttributeBuffer::AttributeBuffer(lua_Table * data, int index, int size, ork::AttributeType t, ork::ptr< ork::Buffer > b, int stride = 0, int offset = 0, int divisor = 0)
	static ork::AttributeBuffer* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in ork::AttributeBuffer::AttributeBuffer(lua_Table * data, int index, int size, ork::AttributeType t, ork::ptr< ork::Buffer > b, int stride = 0, int offset = 0, int divisor = 0) function, expected prototype:\nork::AttributeBuffer::AttributeBuffer(lua_Table * data, int index, int size, ork::AttributeType t, ork::ptr< ork::Buffer > b, int stride = 0, int offset = 0, int divisor = 0)\nClass arguments details:\narg 5 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int index=(int)lua_tointeger(L,2);
		int size=(int)lua_tointeger(L,3);
		ork::AttributeType t=(ork::AttributeType)lua_tointeger(L,4);
		ork::ptr< ork::Buffer > b = Luna< ork::Object >::checkSubType< ork::Buffer >(L,5);
		int stride=luatop>5 ? (int)lua_tointeger(L,6) : (int)0;
		int offset=luatop>6 ? (int)lua_tointeger(L,7) : (int)0;
		int divisor=luatop>7 ? (int)lua_tointeger(L,8) : (int)0;

		return new wrapper_ork_AttributeBuffer(L,NULL, index, size, t, b, stride, offset, divisor);
	}

	// ork::AttributeBuffer::AttributeBuffer(lua_Table * data, int index, int size, ork::ptr< ork::Buffer > b, int stride = 0, int offset = 0, int divisor = 0)
	static ork::AttributeBuffer* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in ork::AttributeBuffer::AttributeBuffer(lua_Table * data, int index, int size, ork::ptr< ork::Buffer > b, int stride = 0, int offset = 0, int divisor = 0) function, expected prototype:\nork::AttributeBuffer::AttributeBuffer(lua_Table * data, int index, int size, ork::ptr< ork::Buffer > b, int stride = 0, int offset = 0, int divisor = 0)\nClass arguments details:\narg 4 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int index=(int)lua_tointeger(L,2);
		int size=(int)lua_tointeger(L,3);
		ork::ptr< ork::Buffer > b = Luna< ork::Object >::checkSubType< ork::Buffer >(L,4);
		int stride=luatop>4 ? (int)lua_tointeger(L,5) : (int)0;
		int offset=luatop>5 ? (int)lua_tointeger(L,6) : (int)0;
		int divisor=luatop>6 ? (int)lua_tointeger(L,7) : (int)0;

		return new wrapper_ork_AttributeBuffer(L,NULL, index, size, b, stride, offset, divisor);
	}

	// Overload binder for ork::AttributeBuffer::AttributeBuffer
	static ork::AttributeBuffer* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);

		luaL_error(L, "error in function AttributeBuffer, cannot match any of the overloads for function AttributeBuffer:\n  AttributeBuffer(int, int, ork::AttributeType, bool, ork::ptr< ork::Buffer >, int, int, int)\n  AttributeBuffer(int, int, ork::AttributeType, ork::ptr< ork::Buffer >, int, int, int)\n  AttributeBuffer(int, int, ork::ptr< ork::Buffer >, int, int, int)\n  AttributeBuffer(lua_Table *, int, int, ork::AttributeType, bool, ork::ptr< ork::Buffer >, int, int, int)\n  AttributeBuffer(lua_Table *, int, int, ork::AttributeType, ork::ptr< ork::Buffer >, int, int, int)\n  AttributeBuffer(lua_Table *, int, int, ork::ptr< ork::Buffer >, int, int, int)\n");
		return NULL;
	}


	// Function binds:
	// int ork::AttributeBuffer::getSize()
	static int _bind_getSize(lua_State *L) {
		if (!_lg_typecheck_getSize(L)) {
			luaL_error(L, "luna typecheck failed in int ork::AttributeBuffer::getSize() function, expected prototype:\nint ork::AttributeBuffer::getSize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::AttributeBuffer* self=Luna< ork::Object >::checkSubType< ork::AttributeBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int ork::AttributeBuffer::getSize(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// ork::AttributeType ork::AttributeBuffer::getType()
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luaL_error(L, "luna typecheck failed in ork::AttributeType ork::AttributeBuffer::getType() function, expected prototype:\nork::AttributeType ork::AttributeBuffer::getType()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::AttributeBuffer* self=Luna< ork::Object >::checkSubType< ork::AttributeBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::AttributeType ork::AttributeBuffer::getType(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::AttributeType lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int ork::AttributeBuffer::getAttributeSize()
	static int _bind_getAttributeSize(lua_State *L) {
		if (!_lg_typecheck_getAttributeSize(L)) {
			luaL_error(L, "luna typecheck failed in int ork::AttributeBuffer::getAttributeSize() function, expected prototype:\nint ork::AttributeBuffer::getAttributeSize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::AttributeBuffer* self=Luna< ork::Object >::checkSubType< ork::AttributeBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int ork::AttributeBuffer::getAttributeSize(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getAttributeSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// ork::ptr< ork::Buffer > ork::AttributeBuffer::getBuffer()
	static int _bind_getBuffer(lua_State *L) {
		if (!_lg_typecheck_getBuffer(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Buffer > ork::AttributeBuffer::getBuffer() function, expected prototype:\nork::ptr< ork::Buffer > ork::AttributeBuffer::getBuffer()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::AttributeBuffer* self=Luna< ork::Object >::checkSubType< ork::AttributeBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Buffer > ork::AttributeBuffer::getBuffer(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Buffer > lret = self->getBuffer();
		Luna< ork::Buffer >::push(L,lret.get(),false);

		return 1;
	}

	// void ork::AttributeBuffer::setBuffer(ork::ptr< ork::Buffer > b)
	static int _bind_setBuffer(lua_State *L) {
		if (!_lg_typecheck_setBuffer(L)) {
			luaL_error(L, "luna typecheck failed in void ork::AttributeBuffer::setBuffer(ork::ptr< ork::Buffer > b) function, expected prototype:\nvoid ork::AttributeBuffer::setBuffer(ork::ptr< ork::Buffer > b)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Buffer > b = Luna< ork::Object >::checkSubType< ork::Buffer >(L,2);

		ork::AttributeBuffer* self=Luna< ork::Object >::checkSubType< ork::AttributeBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::AttributeBuffer::setBuffer(ork::ptr< ork::Buffer >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setBuffer(b);

		return 0;
	}

	// int ork::AttributeBuffer::getStride()
	static int _bind_getStride(lua_State *L) {
		if (!_lg_typecheck_getStride(L)) {
			luaL_error(L, "luna typecheck failed in int ork::AttributeBuffer::getStride() function, expected prototype:\nint ork::AttributeBuffer::getStride()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::AttributeBuffer* self=Luna< ork::Object >::checkSubType< ork::AttributeBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int ork::AttributeBuffer::getStride(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getStride();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int ork::AttributeBuffer::getOffset()
	static int _bind_getOffset(lua_State *L) {
		if (!_lg_typecheck_getOffset(L)) {
			luaL_error(L, "luna typecheck failed in int ork::AttributeBuffer::getOffset() function, expected prototype:\nint ork::AttributeBuffer::getOffset()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::AttributeBuffer* self=Luna< ork::Object >::checkSubType< ork::AttributeBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int ork::AttributeBuffer::getOffset(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getOffset();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const char * ork::AttributeBuffer::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * ork::AttributeBuffer::base_toString() function, expected prototype:\nconst char * ork::AttributeBuffer::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::AttributeBuffer* self=Luna< ork::Object >::checkSubType< ork::AttributeBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * ork::AttributeBuffer::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->AttributeBuffer::toString();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

ork::AttributeBuffer* LunaTraits< ork::AttributeBuffer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ork_AttributeBuffer::_bind_ctor(L);
}

void LunaTraits< ork::AttributeBuffer >::_bind_dtor(ork::AttributeBuffer* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< ork::AttributeBuffer >::className[] = "AttributeBuffer";
const char LunaTraits< ork::AttributeBuffer >::fullName[] = "ork::AttributeBuffer";
const char LunaTraits< ork::AttributeBuffer >::moduleName[] = "ork";
const char* LunaTraits< ork::AttributeBuffer >::parents[] = {"ork.Object", 0};
const int LunaTraits< ork::AttributeBuffer >::hash = 3435277;
const int LunaTraits< ork::AttributeBuffer >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< ork::AttributeBuffer >::methods[] = {
	{"getSize", &luna_wrapper_ork_AttributeBuffer::_bind_getSize},
	{"getType", &luna_wrapper_ork_AttributeBuffer::_bind_getType},
	{"getAttributeSize", &luna_wrapper_ork_AttributeBuffer::_bind_getAttributeSize},
	{"getBuffer", &luna_wrapper_ork_AttributeBuffer::_bind_getBuffer},
	{"setBuffer", &luna_wrapper_ork_AttributeBuffer::_bind_setBuffer},
	{"getStride", &luna_wrapper_ork_AttributeBuffer::_bind_getStride},
	{"getOffset", &luna_wrapper_ork_AttributeBuffer::_bind_getOffset},
	{"base_toString", &luna_wrapper_ork_AttributeBuffer::_bind_base_toString},
	{"fromVoid", &luna_wrapper_ork_AttributeBuffer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_AttributeBuffer::_bind_asVoid},
	{"getTable", &luna_wrapper_ork_AttributeBuffer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< ork::AttributeBuffer >::converters[] = {
	{"ork::Object", &luna_wrapper_ork_AttributeBuffer::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< ork::AttributeBuffer >::enumValues[] = {
	{0,0}
};


