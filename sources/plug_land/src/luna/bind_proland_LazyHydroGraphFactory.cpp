#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_LazyHydroGraphFactory.h>

class luna_wrapper_proland_LazyHydroGraphFactory {
public:
	typedef Luna< proland::LazyHydroGraphFactory > luna_t;

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

		proland::LazyHydroGraphFactory* self= (proland::LazyHydroGraphFactory*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::LazyHydroGraphFactory >::push(L,self,false);
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
		//proland::LazyHydroGraphFactory* ptr= dynamic_cast< proland::LazyHydroGraphFactory* >(Luna< ork::Object >::check(L,1));
		proland::LazyHydroGraphFactory* ptr= luna_caster< ork::Object, proland::LazyHydroGraphFactory >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::LazyHydroGraphFactory >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_newGraph(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_toString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_swap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::GraphProducer::GraphFactory >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_newGraph(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::LazyHydroGraphFactory::LazyHydroGraphFactory()
	static proland::LazyHydroGraphFactory* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::LazyHydroGraphFactory::LazyHydroGraphFactory() function, expected prototype:\nproland::LazyHydroGraphFactory::LazyHydroGraphFactory()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new proland::LazyHydroGraphFactory();
	}

	// proland::LazyHydroGraphFactory::LazyHydroGraphFactory(lua_Table * data)
	static proland::LazyHydroGraphFactory* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::LazyHydroGraphFactory::LazyHydroGraphFactory(lua_Table * data) function, expected prototype:\nproland::LazyHydroGraphFactory::LazyHydroGraphFactory(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_proland_LazyHydroGraphFactory(L,NULL);
	}

	// Overload binder for proland::LazyHydroGraphFactory::LazyHydroGraphFactory
	static proland::LazyHydroGraphFactory* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function LazyHydroGraphFactory, cannot match any of the overloads for function LazyHydroGraphFactory:\n  LazyHydroGraphFactory()\n  LazyHydroGraphFactory(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// proland::Graph * proland::LazyHydroGraphFactory::newGraph(int nodeCacheSize, int curveCacheSize, int areaCacheSize)
	static int _bind_newGraph(lua_State *L) {
		if (!_lg_typecheck_newGraph(L)) {
			luaL_error(L, "luna typecheck failed in proland::Graph * proland::LazyHydroGraphFactory::newGraph(int nodeCacheSize, int curveCacheSize, int areaCacheSize) function, expected prototype:\nproland::Graph * proland::LazyHydroGraphFactory::newGraph(int nodeCacheSize, int curveCacheSize, int areaCacheSize)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int nodeCacheSize=(int)lua_tointeger(L,2);
		int curveCacheSize=(int)lua_tointeger(L,3);
		int areaCacheSize=(int)lua_tointeger(L,4);

		proland::LazyHydroGraphFactory* self=Luna< ork::Object >::checkSubType< proland::LazyHydroGraphFactory >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::Graph * proland::LazyHydroGraphFactory::newGraph(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::Graph * lret = self->newGraph(nodeCacheSize, curveCacheSize, areaCacheSize);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::Graph >::push(L,lret,false);

		return 1;
	}

	// const char * proland::LazyHydroGraphFactory::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * proland::LazyHydroGraphFactory::base_toString() function, expected prototype:\nconst char * proland::LazyHydroGraphFactory::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::LazyHydroGraphFactory* self=Luna< ork::Object >::checkSubType< proland::LazyHydroGraphFactory >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * proland::LazyHydroGraphFactory::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->LazyHydroGraphFactory::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// void proland::LazyHydroGraphFactory::base_swap(ork::ptr< proland::GraphProducer::GraphFactory > g)
	static int _bind_base_swap(lua_State *L) {
		if (!_lg_typecheck_base_swap(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LazyHydroGraphFactory::base_swap(ork::ptr< proland::GraphProducer::GraphFactory > g) function, expected prototype:\nvoid proland::LazyHydroGraphFactory::base_swap(ork::ptr< proland::GraphProducer::GraphFactory > g)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::GraphProducer::GraphFactory > g = Luna< ork::Object >::checkSubType< proland::GraphProducer::GraphFactory >(L,2);

		proland::LazyHydroGraphFactory* self=Luna< ork::Object >::checkSubType< proland::LazyHydroGraphFactory >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LazyHydroGraphFactory::base_swap(ork::ptr< proland::GraphProducer::GraphFactory >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LazyHydroGraphFactory::swap(g);

		return 0;
	}

	// proland::Graph * proland::LazyHydroGraphFactory::base_newGraph(int nodeCacheSize, int curveCacheSize, int areaCacheSize)
	static int _bind_base_newGraph(lua_State *L) {
		if (!_lg_typecheck_base_newGraph(L)) {
			luaL_error(L, "luna typecheck failed in proland::Graph * proland::LazyHydroGraphFactory::base_newGraph(int nodeCacheSize, int curveCacheSize, int areaCacheSize) function, expected prototype:\nproland::Graph * proland::LazyHydroGraphFactory::base_newGraph(int nodeCacheSize, int curveCacheSize, int areaCacheSize)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int nodeCacheSize=(int)lua_tointeger(L,2);
		int curveCacheSize=(int)lua_tointeger(L,3);
		int areaCacheSize=(int)lua_tointeger(L,4);

		proland::LazyHydroGraphFactory* self=Luna< ork::Object >::checkSubType< proland::LazyHydroGraphFactory >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::Graph * proland::LazyHydroGraphFactory::base_newGraph(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::Graph * lret = self->LazyHydroGraphFactory::newGraph(nodeCacheSize, curveCacheSize, areaCacheSize);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::Graph >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

proland::LazyHydroGraphFactory* LunaTraits< proland::LazyHydroGraphFactory >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_LazyHydroGraphFactory::_bind_ctor(L);
}

void LunaTraits< proland::LazyHydroGraphFactory >::_bind_dtor(proland::LazyHydroGraphFactory* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< proland::LazyHydroGraphFactory >::className[] = "LazyHydroGraphFactory";
const char LunaTraits< proland::LazyHydroGraphFactory >::fullName[] = "proland::LazyHydroGraphFactory";
const char LunaTraits< proland::LazyHydroGraphFactory >::moduleName[] = "proland";
const char* LunaTraits< proland::LazyHydroGraphFactory >::parents[] = {"proland.GraphProducer_GraphFactory", 0};
const int LunaTraits< proland::LazyHydroGraphFactory >::hash = 35381169;
const int LunaTraits< proland::LazyHydroGraphFactory >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< proland::LazyHydroGraphFactory >::methods[] = {
	{"newGraph", &luna_wrapper_proland_LazyHydroGraphFactory::_bind_newGraph},
	{"base_toString", &luna_wrapper_proland_LazyHydroGraphFactory::_bind_base_toString},
	{"base_swap", &luna_wrapper_proland_LazyHydroGraphFactory::_bind_base_swap},
	{"base_newGraph", &luna_wrapper_proland_LazyHydroGraphFactory::_bind_base_newGraph},
	{"fromVoid", &luna_wrapper_proland_LazyHydroGraphFactory::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_LazyHydroGraphFactory::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_LazyHydroGraphFactory::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::LazyHydroGraphFactory >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_LazyHydroGraphFactory::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::LazyHydroGraphFactory >::enumValues[] = {
	{0,0}
};


