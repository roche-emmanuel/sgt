#include <plug_common.h>

class luna_wrapper_proland_EditGraphOrthoLayer_VertexData {
public:
	typedef Luna< proland::EditGraphOrthoLayer::VertexData > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,71059590) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(proland::EditGraphOrthoLayer::VertexData*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		proland::EditGraphOrthoLayer::VertexData* rhs =(Luna< proland::EditGraphOrthoLayer::VertexData >::check(L,2));
		proland::EditGraphOrthoLayer::VertexData* self=(Luna< proland::EditGraphOrthoLayer::VertexData >::check(L,1));
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

		proland::EditGraphOrthoLayer::VertexData* self= (proland::EditGraphOrthoLayer::VertexData*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::EditGraphOrthoLayer::VertexData >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,71059590) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< proland::EditGraphOrthoLayer::VertexData >::check(L,1));
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

		proland::EditGraphOrthoLayer::VertexData* self=(Luna< proland::EditGraphOrthoLayer::VertexData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("proland::EditGraphOrthoLayer::VertexData");
		
		return luna_dynamicCast(L,converters,"proland::EditGraphOrthoLayer::VertexData",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,1381405)) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,1381405)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_movePoint(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setS(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setControlPoint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getI(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getC(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getEditor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setI(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setC(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,1381405)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setEditor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,1381405)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::EditGraphOrthoLayer::VertexData::VertexData(proland::Curve * curve, proland::EditGraphOrthoLayer * e, int rank)
	static proland::EditGraphOrthoLayer::VertexData* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in proland::EditGraphOrthoLayer::VertexData::VertexData(proland::Curve * curve, proland::EditGraphOrthoLayer * e, int rank) function, expected prototype:\nproland::EditGraphOrthoLayer::VertexData::VertexData(proland::Curve * curve, proland::EditGraphOrthoLayer * e, int rank)\nClass arguments details:\narg 1 ID = 1381405\narg 2 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::Curve* curve=(Luna< ork::Object >::checkSubType< proland::Curve >(L,1));
		proland::EditGraphOrthoLayer* e=(Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,2));
		int rank=(int)lua_tointeger(L,3);

		return new proland::EditGraphOrthoLayer::VertexData(curve, e, rank);
	}


	// Function binds:
	// void proland::EditGraphOrthoLayer::VertexData::movePoint(double nx, double ny)
	static int _bind_movePoint(lua_State *L) {
		if (!_lg_typecheck_movePoint(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditGraphOrthoLayer::VertexData::movePoint(double nx, double ny) function, expected prototype:\nvoid proland::EditGraphOrthoLayer::VertexData::movePoint(double nx, double ny)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double nx=(double)lua_tonumber(L,2);
		double ny=(double)lua_tonumber(L,3);

		proland::EditGraphOrthoLayer::VertexData* self=(Luna< proland::EditGraphOrthoLayer::VertexData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditGraphOrthoLayer::VertexData::movePoint(double, double). Got : '%s'\n%s",typeid(Luna< proland::EditGraphOrthoLayer::VertexData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->movePoint(nx, ny);

		return 0;
	}

	// void proland::EditGraphOrthoLayer::VertexData::setS(float ns)
	static int _bind_setS(lua_State *L) {
		if (!_lg_typecheck_setS(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditGraphOrthoLayer::VertexData::setS(float ns) function, expected prototype:\nvoid proland::EditGraphOrthoLayer::VertexData::setS(float ns)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float ns=(float)lua_tonumber(L,2);

		proland::EditGraphOrthoLayer::VertexData* self=(Luna< proland::EditGraphOrthoLayer::VertexData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditGraphOrthoLayer::VertexData::setS(float). Got : '%s'\n%s",typeid(Luna< proland::EditGraphOrthoLayer::VertexData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setS(ns);

		return 0;
	}

	// void proland::EditGraphOrthoLayer::VertexData::setControlPoint(bool b)
	static int _bind_setControlPoint(lua_State *L) {
		if (!_lg_typecheck_setControlPoint(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditGraphOrthoLayer::VertexData::setControlPoint(bool b) function, expected prototype:\nvoid proland::EditGraphOrthoLayer::VertexData::setControlPoint(bool b)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool b=(bool)(lua_toboolean(L,2)==1);

		proland::EditGraphOrthoLayer::VertexData* self=(Luna< proland::EditGraphOrthoLayer::VertexData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditGraphOrthoLayer::VertexData::setControlPoint(bool). Got : '%s'\n%s",typeid(Luna< proland::EditGraphOrthoLayer::VertexData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setControlPoint(b);

		return 0;
	}

	// int proland::EditGraphOrthoLayer::VertexData::i()
	static int _bind_getI(lua_State *L) {
		if (!_lg_typecheck_getI(L)) {
			luaL_error(L, "luna typecheck failed in int proland::EditGraphOrthoLayer::VertexData::i() function, expected prototype:\nint proland::EditGraphOrthoLayer::VertexData::i()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditGraphOrthoLayer::VertexData* self=(Luna< proland::EditGraphOrthoLayer::VertexData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::EditGraphOrthoLayer::VertexData::i(). Got : '%s'\n%s",typeid(Luna< proland::EditGraphOrthoLayer::VertexData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->i;
		lua_pushnumber(L,lret);

		return 1;
	}

	// proland::Curve * proland::EditGraphOrthoLayer::VertexData::c()
	static int _bind_getC(lua_State *L) {
		if (!_lg_typecheck_getC(L)) {
			luaL_error(L, "luna typecheck failed in proland::Curve * proland::EditGraphOrthoLayer::VertexData::c() function, expected prototype:\nproland::Curve * proland::EditGraphOrthoLayer::VertexData::c()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditGraphOrthoLayer::VertexData* self=(Luna< proland::EditGraphOrthoLayer::VertexData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::Curve * proland::EditGraphOrthoLayer::VertexData::c(). Got : '%s'\n%s",typeid(Luna< proland::EditGraphOrthoLayer::VertexData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::Curve * lret = self->c;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::Curve >::push(L,lret,false);

		return 1;
	}

	// proland::EditGraphOrthoLayer * proland::EditGraphOrthoLayer::VertexData::editor()
	static int _bind_getEditor(lua_State *L) {
		if (!_lg_typecheck_getEditor(L)) {
			luaL_error(L, "luna typecheck failed in proland::EditGraphOrthoLayer * proland::EditGraphOrthoLayer::VertexData::editor() function, expected prototype:\nproland::EditGraphOrthoLayer * proland::EditGraphOrthoLayer::VertexData::editor()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditGraphOrthoLayer::VertexData* self=(Luna< proland::EditGraphOrthoLayer::VertexData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::EditGraphOrthoLayer * proland::EditGraphOrthoLayer::VertexData::editor(). Got : '%s'\n%s",typeid(Luna< proland::EditGraphOrthoLayer::VertexData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::EditGraphOrthoLayer * lret = self->editor;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::EditGraphOrthoLayer >::push(L,lret,false);

		return 1;
	}

	// void proland::EditGraphOrthoLayer::VertexData::i(int value)
	static int _bind_setI(lua_State *L) {
		if (!_lg_typecheck_setI(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditGraphOrthoLayer::VertexData::i(int value) function, expected prototype:\nvoid proland::EditGraphOrthoLayer::VertexData::i(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		proland::EditGraphOrthoLayer::VertexData* self=(Luna< proland::EditGraphOrthoLayer::VertexData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditGraphOrthoLayer::VertexData::i(int). Got : '%s'\n%s",typeid(Luna< proland::EditGraphOrthoLayer::VertexData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->i = value;

		return 0;
	}

	// void proland::EditGraphOrthoLayer::VertexData::c(proland::Curve * value)
	static int _bind_setC(lua_State *L) {
		if (!_lg_typecheck_setC(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditGraphOrthoLayer::VertexData::c(proland::Curve * value) function, expected prototype:\nvoid proland::EditGraphOrthoLayer::VertexData::c(proland::Curve * value)\nClass arguments details:\narg 1 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::Curve* value=(Luna< ork::Object >::checkSubType< proland::Curve >(L,2));

		proland::EditGraphOrthoLayer::VertexData* self=(Luna< proland::EditGraphOrthoLayer::VertexData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditGraphOrthoLayer::VertexData::c(proland::Curve *). Got : '%s'\n%s",typeid(Luna< proland::EditGraphOrthoLayer::VertexData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->c = value;

		return 0;
	}

	// void proland::EditGraphOrthoLayer::VertexData::editor(proland::EditGraphOrthoLayer * value)
	static int _bind_setEditor(lua_State *L) {
		if (!_lg_typecheck_setEditor(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditGraphOrthoLayer::VertexData::editor(proland::EditGraphOrthoLayer * value) function, expected prototype:\nvoid proland::EditGraphOrthoLayer::VertexData::editor(proland::EditGraphOrthoLayer * value)\nClass arguments details:\narg 1 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::EditGraphOrthoLayer* value=(Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,2));

		proland::EditGraphOrthoLayer::VertexData* self=(Luna< proland::EditGraphOrthoLayer::VertexData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditGraphOrthoLayer::VertexData::editor(proland::EditGraphOrthoLayer *). Got : '%s'\n%s",typeid(Luna< proland::EditGraphOrthoLayer::VertexData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->editor = value;

		return 0;
	}


	// Operator binds:

};

proland::EditGraphOrthoLayer::VertexData* LunaTraits< proland::EditGraphOrthoLayer::VertexData >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_EditGraphOrthoLayer_VertexData::_bind_ctor(L);
}

void LunaTraits< proland::EditGraphOrthoLayer::VertexData >::_bind_dtor(proland::EditGraphOrthoLayer::VertexData* obj) {
	delete obj;
}

const char LunaTraits< proland::EditGraphOrthoLayer::VertexData >::className[] = "EditGraphOrthoLayer_VertexData";
const char LunaTraits< proland::EditGraphOrthoLayer::VertexData >::fullName[] = "proland::EditGraphOrthoLayer::VertexData";
const char LunaTraits< proland::EditGraphOrthoLayer::VertexData >::moduleName[] = "proland";
const char* LunaTraits< proland::EditGraphOrthoLayer::VertexData >::parents[] = {0};
const int LunaTraits< proland::EditGraphOrthoLayer::VertexData >::hash = 71059590;
const int LunaTraits< proland::EditGraphOrthoLayer::VertexData >::uniqueIDs[] = {71059590,0};

luna_RegType LunaTraits< proland::EditGraphOrthoLayer::VertexData >::methods[] = {
	{"movePoint", &luna_wrapper_proland_EditGraphOrthoLayer_VertexData::_bind_movePoint},
	{"setS", &luna_wrapper_proland_EditGraphOrthoLayer_VertexData::_bind_setS},
	{"setControlPoint", &luna_wrapper_proland_EditGraphOrthoLayer_VertexData::_bind_setControlPoint},
	{"getI", &luna_wrapper_proland_EditGraphOrthoLayer_VertexData::_bind_getI},
	{"getC", &luna_wrapper_proland_EditGraphOrthoLayer_VertexData::_bind_getC},
	{"getEditor", &luna_wrapper_proland_EditGraphOrthoLayer_VertexData::_bind_getEditor},
	{"setI", &luna_wrapper_proland_EditGraphOrthoLayer_VertexData::_bind_setI},
	{"setC", &luna_wrapper_proland_EditGraphOrthoLayer_VertexData::_bind_setC},
	{"setEditor", &luna_wrapper_proland_EditGraphOrthoLayer_VertexData::_bind_setEditor},
	{"dynCast", &luna_wrapper_proland_EditGraphOrthoLayer_VertexData::_bind_dynCast},
	{"__eq", &luna_wrapper_proland_EditGraphOrthoLayer_VertexData::_bind___eq},
	{"fromVoid", &luna_wrapper_proland_EditGraphOrthoLayer_VertexData::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_EditGraphOrthoLayer_VertexData::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< proland::EditGraphOrthoLayer::VertexData >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< proland::EditGraphOrthoLayer::VertexData >::enumValues[] = {
	{0,0}
};


