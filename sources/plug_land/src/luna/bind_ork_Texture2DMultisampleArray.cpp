#include <plug_common.h>

#include <luna/wrappers/wrapper_ork_Texture2DMultisampleArray.h>

class luna_wrapper_ork_Texture2DMultisampleArray {
public:
	typedef Luna< ork::Texture2DMultisampleArray > luna_t;

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

		ork::Texture2DMultisampleArray* self= (ork::Texture2DMultisampleArray*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::Texture2DMultisampleArray >::push(L,self,false);
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
		//ork::Texture2DMultisampleArray* ptr= dynamic_cast< ork::Texture2DMultisampleArray* >(Luna< ork::Object >::check(L,1));
		ork::Texture2DMultisampleArray* ptr= luna_caster< ork::Object, ork::Texture2DMultisampleArray >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< ork::Texture2DMultisampleArray >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( lua_isboolean(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( lua_isboolean(L,7)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLayers(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSamples(lua_State *L) {
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
	// ork::Texture2DMultisampleArray::Texture2DMultisampleArray(int w, int h, int l, int samples, ork::TextureInternalFormat tf, bool fixedLocations)
	static ork::Texture2DMultisampleArray* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::Texture2DMultisampleArray::Texture2DMultisampleArray(int w, int h, int l, int samples, ork::TextureInternalFormat tf, bool fixedLocations) function, expected prototype:\nork::Texture2DMultisampleArray::Texture2DMultisampleArray(int w, int h, int l, int samples, ork::TextureInternalFormat tf, bool fixedLocations)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int w=(int)lua_tointeger(L,1);
		int h=(int)lua_tointeger(L,2);
		int l=(int)lua_tointeger(L,3);
		int samples=(int)lua_tointeger(L,4);
		ork::TextureInternalFormat tf=(ork::TextureInternalFormat)lua_tointeger(L,5);
		bool fixedLocations=(bool)(lua_toboolean(L,6)==1);

		return new ork::Texture2DMultisampleArray(w, h, l, samples, tf, fixedLocations);
	}

	// ork::Texture2DMultisampleArray::Texture2DMultisampleArray(lua_Table * data, int w, int h, int l, int samples, ork::TextureInternalFormat tf, bool fixedLocations)
	static ork::Texture2DMultisampleArray* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::Texture2DMultisampleArray::Texture2DMultisampleArray(lua_Table * data, int w, int h, int l, int samples, ork::TextureInternalFormat tf, bool fixedLocations) function, expected prototype:\nork::Texture2DMultisampleArray::Texture2DMultisampleArray(lua_Table * data, int w, int h, int l, int samples, ork::TextureInternalFormat tf, bool fixedLocations)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int w=(int)lua_tointeger(L,2);
		int h=(int)lua_tointeger(L,3);
		int l=(int)lua_tointeger(L,4);
		int samples=(int)lua_tointeger(L,5);
		ork::TextureInternalFormat tf=(ork::TextureInternalFormat)lua_tointeger(L,6);
		bool fixedLocations=(bool)(lua_toboolean(L,7)==1);

		return new wrapper_ork_Texture2DMultisampleArray(L,NULL, w, h, l, samples, tf, fixedLocations);
	}

	// Overload binder for ork::Texture2DMultisampleArray::Texture2DMultisampleArray
	static ork::Texture2DMultisampleArray* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Texture2DMultisampleArray, cannot match any of the overloads for function Texture2DMultisampleArray:\n  Texture2DMultisampleArray(int, int, int, int, ork::TextureInternalFormat, bool)\n  Texture2DMultisampleArray(lua_Table *, int, int, int, int, ork::TextureInternalFormat, bool)\n");
		return NULL;
	}


	// Function binds:
	// int ork::Texture2DMultisampleArray::getWidth()
	static int _bind_getWidth(lua_State *L) {
		if (!_lg_typecheck_getWidth(L)) {
			luaL_error(L, "luna typecheck failed in int ork::Texture2DMultisampleArray::getWidth() function, expected prototype:\nint ork::Texture2DMultisampleArray::getWidth()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Texture2DMultisampleArray* self=Luna< ork::Object >::checkSubType< ork::Texture2DMultisampleArray >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int ork::Texture2DMultisampleArray::getWidth(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int ork::Texture2DMultisampleArray::getHeight()
	static int _bind_getHeight(lua_State *L) {
		if (!_lg_typecheck_getHeight(L)) {
			luaL_error(L, "luna typecheck failed in int ork::Texture2DMultisampleArray::getHeight() function, expected prototype:\nint ork::Texture2DMultisampleArray::getHeight()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Texture2DMultisampleArray* self=Luna< ork::Object >::checkSubType< ork::Texture2DMultisampleArray >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int ork::Texture2DMultisampleArray::getHeight(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int ork::Texture2DMultisampleArray::getLayers()
	static int _bind_getLayers(lua_State *L) {
		if (!_lg_typecheck_getLayers(L)) {
			luaL_error(L, "luna typecheck failed in int ork::Texture2DMultisampleArray::getLayers() function, expected prototype:\nint ork::Texture2DMultisampleArray::getLayers()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Texture2DMultisampleArray* self=Luna< ork::Object >::checkSubType< ork::Texture2DMultisampleArray >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int ork::Texture2DMultisampleArray::getLayers(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getLayers();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int ork::Texture2DMultisampleArray::getSamples()
	static int _bind_getSamples(lua_State *L) {
		if (!_lg_typecheck_getSamples(L)) {
			luaL_error(L, "luna typecheck failed in int ork::Texture2DMultisampleArray::getSamples() function, expected prototype:\nint ork::Texture2DMultisampleArray::getSamples()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Texture2DMultisampleArray* self=Luna< ork::Object >::checkSubType< ork::Texture2DMultisampleArray >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int ork::Texture2DMultisampleArray::getSamples(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getSamples();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const char * ork::Texture2DMultisampleArray::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * ork::Texture2DMultisampleArray::base_toString() function, expected prototype:\nconst char * ork::Texture2DMultisampleArray::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Texture2DMultisampleArray* self=Luna< ork::Object >::checkSubType< ork::Texture2DMultisampleArray >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * ork::Texture2DMultisampleArray::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Texture2DMultisampleArray::toString();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

ork::Texture2DMultisampleArray* LunaTraits< ork::Texture2DMultisampleArray >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ork_Texture2DMultisampleArray::_bind_ctor(L);
}

void LunaTraits< ork::Texture2DMultisampleArray >::_bind_dtor(ork::Texture2DMultisampleArray* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< ork::Texture2DMultisampleArray >::className[] = "Texture2DMultisampleArray";
const char LunaTraits< ork::Texture2DMultisampleArray >::fullName[] = "ork::Texture2DMultisampleArray";
const char LunaTraits< ork::Texture2DMultisampleArray >::moduleName[] = "ork";
const char* LunaTraits< ork::Texture2DMultisampleArray >::parents[] = {"ork.Texture", 0};
const int LunaTraits< ork::Texture2DMultisampleArray >::hash = 42644008;
const int LunaTraits< ork::Texture2DMultisampleArray >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< ork::Texture2DMultisampleArray >::methods[] = {
	{"getWidth", &luna_wrapper_ork_Texture2DMultisampleArray::_bind_getWidth},
	{"getHeight", &luna_wrapper_ork_Texture2DMultisampleArray::_bind_getHeight},
	{"getLayers", &luna_wrapper_ork_Texture2DMultisampleArray::_bind_getLayers},
	{"getSamples", &luna_wrapper_ork_Texture2DMultisampleArray::_bind_getSamples},
	{"base_toString", &luna_wrapper_ork_Texture2DMultisampleArray::_bind_base_toString},
	{"fromVoid", &luna_wrapper_ork_Texture2DMultisampleArray::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_Texture2DMultisampleArray::_bind_asVoid},
	{"getTable", &luna_wrapper_ork_Texture2DMultisampleArray::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< ork::Texture2DMultisampleArray >::converters[] = {
	{"ork::Object", &luna_wrapper_ork_Texture2DMultisampleArray::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< ork::Texture2DMultisampleArray >::enumValues[] = {
	{0,0}
};


