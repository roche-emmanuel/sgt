#include <plug_common.h>

class luna_wrapper_proland_Vertex {
public:
	typedef Luna< proland::Vertex > luna_t;

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		proland::Vertex* self= (proland::Vertex*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::Vertex >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,81304238) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< ork::vec2d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_vec2d(lua_State *L) {
		// all checked are already performed before reaching this point.
		//proland::Vertex* ptr= dynamic_cast< proland::Vertex* >(Luna< ork::vec2d >::check(L,1));
		proland::Vertex* ptr= luna_caster< ork::vec2d, proland::Vertex >::cast(Luna< ork::vec2d >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::Vertex >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,1)!=LUA_TNUMBER ) return false;
		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,81304238) ) return false;
		if( (!(Luna< ork::vec2d >::check(L,1))) ) return false;
		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,81304238) ) return false;
		if( (!(Luna< ork::vec2d >::checkSubType< proland::Vertex >(L,1))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getS(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getL(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getIsControl(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setS(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setL(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setIsControl(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::Vertex::Vertex(double x, double y, float s, bool isControl)
	static proland::Vertex* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::Vertex::Vertex(double x, double y, float s, bool isControl) function, expected prototype:\nproland::Vertex::Vertex(double x, double y, float s, bool isControl)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double x=(double)lua_tonumber(L,1);
		double y=(double)lua_tonumber(L,2);
		float s=(float)lua_tonumber(L,3);
		bool isControl=(bool)(lua_toboolean(L,4)==1);

		return new proland::Vertex(x, y, s, isControl);
	}

	// proland::Vertex::Vertex(ork::vec2d p, float s, float l, bool isControl)
	static proland::Vertex* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::Vertex::Vertex(ork::vec2d p, float s, float l, bool isControl) function, expected prototype:\nproland::Vertex::Vertex(ork::vec2d p, float s, float l, bool isControl)\nClass arguments details:\narg 1 ID = 81304238\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::vec2d* p_ptr=(Luna< ork::vec2d >::check(L,1));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in proland::Vertex::Vertex function");
		}
		ork::vec2d p=*p_ptr;
		float s=(float)lua_tonumber(L,2);
		float l=(float)lua_tonumber(L,3);
		bool isControl=(bool)(lua_toboolean(L,4)==1);

		return new proland::Vertex(p, s, l, isControl);
	}

	// proland::Vertex::Vertex(const proland::Vertex & p)
	static proland::Vertex* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in proland::Vertex::Vertex(const proland::Vertex & p) function, expected prototype:\nproland::Vertex::Vertex(const proland::Vertex & p)\nClass arguments details:\narg 1 ID = 81304238\n\n%s",luna_dumpStack(L).c_str());
		}

		const proland::Vertex* p_ptr=(Luna< ork::vec2d >::checkSubType< proland::Vertex >(L,1));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in proland::Vertex::Vertex function");
		}
		const proland::Vertex & p=*p_ptr;

		return new proland::Vertex(p);
	}

	// Overload binder for proland::Vertex::Vertex
	static proland::Vertex* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function Vertex, cannot match any of the overloads for function Vertex:\n  Vertex(double, double, float, bool)\n  Vertex(ork::vec2d, float, float, bool)\n  Vertex(const proland::Vertex &)\n");
		return NULL;
	}


	// Function binds:
	// float proland::Vertex::s()
	static int _bind_getS(lua_State *L) {
		if (!_lg_typecheck_getS(L)) {
			luaL_error(L, "luna typecheck failed in float proland::Vertex::s() function, expected prototype:\nfloat proland::Vertex::s()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Vertex* self=Luna< ork::vec2d >::checkSubType< proland::Vertex >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::Vertex::s(). Got : '%s'\n%s",typeid(Luna< ork::vec2d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->s;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float proland::Vertex::l()
	static int _bind_getL(lua_State *L) {
		if (!_lg_typecheck_getL(L)) {
			luaL_error(L, "luna typecheck failed in float proland::Vertex::l() function, expected prototype:\nfloat proland::Vertex::l()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Vertex* self=Luna< ork::vec2d >::checkSubType< proland::Vertex >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::Vertex::l(). Got : '%s'\n%s",typeid(Luna< ork::vec2d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->l;
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool proland::Vertex::isControl()
	static int _bind_getIsControl(lua_State *L) {
		if (!_lg_typecheck_getIsControl(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::Vertex::isControl() function, expected prototype:\nbool proland::Vertex::isControl()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Vertex* self=Luna< ork::vec2d >::checkSubType< proland::Vertex >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::Vertex::isControl(). Got : '%s'\n%s",typeid(Luna< ork::vec2d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isControl;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void proland::Vertex::s(float value)
	static int _bind_setS(lua_State *L) {
		if (!_lg_typecheck_setS(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Vertex::s(float value) function, expected prototype:\nvoid proland::Vertex::s(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		proland::Vertex* self=Luna< ork::vec2d >::checkSubType< proland::Vertex >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Vertex::s(float). Got : '%s'\n%s",typeid(Luna< ork::vec2d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->s = value;

		return 0;
	}

	// void proland::Vertex::l(float value)
	static int _bind_setL(lua_State *L) {
		if (!_lg_typecheck_setL(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Vertex::l(float value) function, expected prototype:\nvoid proland::Vertex::l(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		proland::Vertex* self=Luna< ork::vec2d >::checkSubType< proland::Vertex >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Vertex::l(float). Got : '%s'\n%s",typeid(Luna< ork::vec2d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->l = value;

		return 0;
	}

	// void proland::Vertex::isControl(bool value)
	static int _bind_setIsControl(lua_State *L) {
		if (!_lg_typecheck_setIsControl(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Vertex::isControl(bool value) function, expected prototype:\nvoid proland::Vertex::isControl(bool value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		proland::Vertex* self=Luna< ork::vec2d >::checkSubType< proland::Vertex >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Vertex::isControl(bool). Got : '%s'\n%s",typeid(Luna< ork::vec2d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->isControl = value;

		return 0;
	}


	// Operator binds:

};

proland::Vertex* LunaTraits< proland::Vertex >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_Vertex::_bind_ctor(L);
}

void LunaTraits< proland::Vertex >::_bind_dtor(proland::Vertex* obj) {
	delete obj;
}

const char LunaTraits< proland::Vertex >::className[] = "Vertex";
const char LunaTraits< proland::Vertex >::fullName[] = "proland::Vertex";
const char LunaTraits< proland::Vertex >::moduleName[] = "proland";
const char* LunaTraits< proland::Vertex >::parents[] = {"ork.vec2d", 0};
const int LunaTraits< proland::Vertex >::hash = 92337389;
const int LunaTraits< proland::Vertex >::uniqueIDs[] = {81304238,0};

luna_RegType LunaTraits< proland::Vertex >::methods[] = {
	{"getS", &luna_wrapper_proland_Vertex::_bind_getS},
	{"getL", &luna_wrapper_proland_Vertex::_bind_getL},
	{"getIsControl", &luna_wrapper_proland_Vertex::_bind_getIsControl},
	{"setS", &luna_wrapper_proland_Vertex::_bind_setS},
	{"setL", &luna_wrapper_proland_Vertex::_bind_setL},
	{"setIsControl", &luna_wrapper_proland_Vertex::_bind_setIsControl},
	{"fromVoid", &luna_wrapper_proland_Vertex::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_Vertex::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< proland::Vertex >::converters[] = {
	{"ork::vec2d", &luna_wrapper_proland_Vertex::_cast_from_vec2d},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::Vertex >::enumValues[] = {
	{0,0}
};


