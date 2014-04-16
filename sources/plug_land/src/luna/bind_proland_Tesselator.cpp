#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_Tesselator.h>

class luna_wrapper_proland_Tesselator {
public:
	typedef Luna< proland::Tesselator > luna_t;

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

		proland::Tesselator* self= (proland::Tesselator*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::Tesselator >::push(L,self,false);
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
		//proland::Tesselator* ptr= dynamic_cast< proland::Tesselator* >(Luna< ork::Object >::check(L,1));
		proland::Tesselator* ptr= luna_caster< ork::Object, proland::Tesselator >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::Tesselator >::push(L,ptr,false);
		return 1;
	};


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
	inline static bool _lg_typecheck_beginPolygon(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Mesh< ork::vec2f, unsigned int > >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_beginContour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_newVertex(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_endContour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_endPolygon(lua_State *L) {
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
	// proland::Tesselator::Tesselator()
	static proland::Tesselator* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::Tesselator::Tesselator() function, expected prototype:\nproland::Tesselator::Tesselator()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new proland::Tesselator();
	}

	// proland::Tesselator::Tesselator(lua_Table * data)
	static proland::Tesselator* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::Tesselator::Tesselator(lua_Table * data) function, expected prototype:\nproland::Tesselator::Tesselator(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_proland_Tesselator(L,NULL);
	}

	// Overload binder for proland::Tesselator::Tesselator
	static proland::Tesselator* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Tesselator, cannot match any of the overloads for function Tesselator:\n  Tesselator()\n  Tesselator(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void proland::Tesselator::beginPolygon(ork::ptr< ork::Mesh< ork::vec2f, unsigned int > > mesh)
	static int _bind_beginPolygon(lua_State *L) {
		if (!_lg_typecheck_beginPolygon(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Tesselator::beginPolygon(ork::ptr< ork::Mesh< ork::vec2f, unsigned int > > mesh) function, expected prototype:\nvoid proland::Tesselator::beginPolygon(ork::ptr< ork::Mesh< ork::vec2f, unsigned int > > mesh)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Mesh< ork::vec2f, unsigned int > > mesh = Luna< ork::Object >::checkSubType< ork::Mesh< ork::vec2f, unsigned int > >(L,2);

		proland::Tesselator* self=Luna< ork::Object >::checkSubType< proland::Tesselator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Tesselator::beginPolygon(ork::ptr< ork::Mesh< ork::vec2f, unsigned int > >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->beginPolygon(mesh);

		return 0;
	}

	// void proland::Tesselator::beginContour()
	static int _bind_beginContour(lua_State *L) {
		if (!_lg_typecheck_beginContour(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Tesselator::beginContour() function, expected prototype:\nvoid proland::Tesselator::beginContour()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Tesselator* self=Luna< ork::Object >::checkSubType< proland::Tesselator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Tesselator::beginContour(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->beginContour();

		return 0;
	}

	// void proland::Tesselator::newVertex(float x, float y)
	static int _bind_newVertex(lua_State *L) {
		if (!_lg_typecheck_newVertex(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Tesselator::newVertex(float x, float y) function, expected prototype:\nvoid proland::Tesselator::newVertex(float x, float y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float x=(float)lua_tonumber(L,2);
		float y=(float)lua_tonumber(L,3);

		proland::Tesselator* self=Luna< ork::Object >::checkSubType< proland::Tesselator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Tesselator::newVertex(float, float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->newVertex(x, y);

		return 0;
	}

	// void proland::Tesselator::endContour()
	static int _bind_endContour(lua_State *L) {
		if (!_lg_typecheck_endContour(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Tesselator::endContour() function, expected prototype:\nvoid proland::Tesselator::endContour()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Tesselator* self=Luna< ork::Object >::checkSubType< proland::Tesselator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Tesselator::endContour(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->endContour();

		return 0;
	}

	// void proland::Tesselator::endPolygon()
	static int _bind_endPolygon(lua_State *L) {
		if (!_lg_typecheck_endPolygon(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Tesselator::endPolygon() function, expected prototype:\nvoid proland::Tesselator::endPolygon()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Tesselator* self=Luna< ork::Object >::checkSubType< proland::Tesselator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Tesselator::endPolygon(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->endPolygon();

		return 0;
	}

	// const char * proland::Tesselator::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * proland::Tesselator::base_toString() function, expected prototype:\nconst char * proland::Tesselator::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Tesselator* self=Luna< ork::Object >::checkSubType< proland::Tesselator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * proland::Tesselator::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Tesselator::toString();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

proland::Tesselator* LunaTraits< proland::Tesselator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_Tesselator::_bind_ctor(L);
}

void LunaTraits< proland::Tesselator >::_bind_dtor(proland::Tesselator* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< proland::Tesselator >::className[] = "Tesselator";
const char LunaTraits< proland::Tesselator >::fullName[] = "proland::Tesselator";
const char LunaTraits< proland::Tesselator >::moduleName[] = "proland";
const char* LunaTraits< proland::Tesselator >::parents[] = {"ork.Object", 0};
const int LunaTraits< proland::Tesselator >::hash = 85323896;
const int LunaTraits< proland::Tesselator >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< proland::Tesselator >::methods[] = {
	{"beginPolygon", &luna_wrapper_proland_Tesselator::_bind_beginPolygon},
	{"beginContour", &luna_wrapper_proland_Tesselator::_bind_beginContour},
	{"newVertex", &luna_wrapper_proland_Tesselator::_bind_newVertex},
	{"endContour", &luna_wrapper_proland_Tesselator::_bind_endContour},
	{"endPolygon", &luna_wrapper_proland_Tesselator::_bind_endPolygon},
	{"base_toString", &luna_wrapper_proland_Tesselator::_bind_base_toString},
	{"fromVoid", &luna_wrapper_proland_Tesselator::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_Tesselator::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_Tesselator::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::Tesselator >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_Tesselator::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::Tesselator >::enumValues[] = {
	{0,0}
};


