#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_GraphProducer_GraphFactory.h>

class luna_wrapper_proland_GraphProducer_GraphFactory {
public:
	typedef Luna< proland::GraphProducer::GraphFactory > luna_t;

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

		proland::GraphProducer::GraphFactory* self= (proland::GraphProducer::GraphFactory*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::GraphProducer::GraphFactory >::push(L,self,false);
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
		//proland::GraphProducer::GraphFactory* ptr= dynamic_cast< proland::GraphProducer::GraphFactory* >(Luna< ork::Object >::check(L,1));
		proland::GraphProducer::GraphFactory* ptr= luna_caster< ork::Object, proland::GraphProducer::GraphFactory >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::GraphProducer::GraphFactory >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_swap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::GraphProducer::GraphFactory >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_toString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_newGraph(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_swap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::GraphProducer::GraphFactory >(L,2) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::GraphProducer::GraphFactory::GraphFactory()
	static proland::GraphProducer::GraphFactory* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::GraphProducer::GraphFactory::GraphFactory() function, expected prototype:\nproland::GraphProducer::GraphFactory::GraphFactory()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new proland::GraphProducer::GraphFactory();
	}

	// proland::GraphProducer::GraphFactory::GraphFactory(lua_Table * data)
	static proland::GraphProducer::GraphFactory* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::GraphProducer::GraphFactory::GraphFactory(lua_Table * data) function, expected prototype:\nproland::GraphProducer::GraphFactory::GraphFactory(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_proland_GraphProducer_GraphFactory(L,NULL);
	}

	// Overload binder for proland::GraphProducer::GraphFactory::GraphFactory
	static proland::GraphProducer::GraphFactory* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function GraphFactory, cannot match any of the overloads for function GraphFactory:\n  GraphFactory()\n  GraphFactory(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// proland::Graph * proland::GraphProducer::GraphFactory::newGraph(int nodeCacheSize, int curveCacheSize, int areaCacheSize)
	static int _bind_newGraph(lua_State *L) {
		if (!_lg_typecheck_newGraph(L)) {
			luaL_error(L, "luna typecheck failed in proland::Graph * proland::GraphProducer::GraphFactory::newGraph(int nodeCacheSize, int curveCacheSize, int areaCacheSize) function, expected prototype:\nproland::Graph * proland::GraphProducer::GraphFactory::newGraph(int nodeCacheSize, int curveCacheSize, int areaCacheSize)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int nodeCacheSize=(int)lua_tointeger(L,2);
		int curveCacheSize=(int)lua_tointeger(L,3);
		int areaCacheSize=(int)lua_tointeger(L,4);

		proland::GraphProducer::GraphFactory* self=Luna< ork::Object >::checkSubType< proland::GraphProducer::GraphFactory >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::Graph * proland::GraphProducer::GraphFactory::newGraph(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::Graph * lret = self->newGraph(nodeCacheSize, curveCacheSize, areaCacheSize);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::Graph >::push(L,lret,false);

		return 1;
	}

	// void proland::GraphProducer::GraphFactory::swap(ork::ptr< proland::GraphProducer::GraphFactory > g)
	static int _bind_swap(lua_State *L) {
		if (!_lg_typecheck_swap(L)) {
			luaL_error(L, "luna typecheck failed in void proland::GraphProducer::GraphFactory::swap(ork::ptr< proland::GraphProducer::GraphFactory > g) function, expected prototype:\nvoid proland::GraphProducer::GraphFactory::swap(ork::ptr< proland::GraphProducer::GraphFactory > g)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::GraphProducer::GraphFactory > g = Luna< ork::Object >::checkSubType< proland::GraphProducer::GraphFactory >(L,2);

		proland::GraphProducer::GraphFactory* self=Luna< ork::Object >::checkSubType< proland::GraphProducer::GraphFactory >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::GraphProducer::GraphFactory::swap(ork::ptr< proland::GraphProducer::GraphFactory >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->swap(g);

		return 0;
	}

	// const char * proland::GraphProducer::GraphFactory::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * proland::GraphProducer::GraphFactory::base_toString() function, expected prototype:\nconst char * proland::GraphProducer::GraphFactory::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::GraphProducer::GraphFactory* self=Luna< ork::Object >::checkSubType< proland::GraphProducer::GraphFactory >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * proland::GraphProducer::GraphFactory::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->GraphFactory::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// proland::Graph * proland::GraphProducer::GraphFactory::base_newGraph(int nodeCacheSize, int curveCacheSize, int areaCacheSize)
	static int _bind_base_newGraph(lua_State *L) {
		if (!_lg_typecheck_base_newGraph(L)) {
			luaL_error(L, "luna typecheck failed in proland::Graph * proland::GraphProducer::GraphFactory::base_newGraph(int nodeCacheSize, int curveCacheSize, int areaCacheSize) function, expected prototype:\nproland::Graph * proland::GraphProducer::GraphFactory::base_newGraph(int nodeCacheSize, int curveCacheSize, int areaCacheSize)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int nodeCacheSize=(int)lua_tointeger(L,2);
		int curveCacheSize=(int)lua_tointeger(L,3);
		int areaCacheSize=(int)lua_tointeger(L,4);

		proland::GraphProducer::GraphFactory* self=Luna< ork::Object >::checkSubType< proland::GraphProducer::GraphFactory >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::Graph * proland::GraphProducer::GraphFactory::base_newGraph(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::Graph * lret = self->GraphFactory::newGraph(nodeCacheSize, curveCacheSize, areaCacheSize);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::Graph >::push(L,lret,false);

		return 1;
	}

	// void proland::GraphProducer::GraphFactory::base_swap(ork::ptr< proland::GraphProducer::GraphFactory > g)
	static int _bind_base_swap(lua_State *L) {
		if (!_lg_typecheck_base_swap(L)) {
			luaL_error(L, "luna typecheck failed in void proland::GraphProducer::GraphFactory::base_swap(ork::ptr< proland::GraphProducer::GraphFactory > g) function, expected prototype:\nvoid proland::GraphProducer::GraphFactory::base_swap(ork::ptr< proland::GraphProducer::GraphFactory > g)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::GraphProducer::GraphFactory > g = Luna< ork::Object >::checkSubType< proland::GraphProducer::GraphFactory >(L,2);

		proland::GraphProducer::GraphFactory* self=Luna< ork::Object >::checkSubType< proland::GraphProducer::GraphFactory >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::GraphProducer::GraphFactory::base_swap(ork::ptr< proland::GraphProducer::GraphFactory >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphFactory::swap(g);

		return 0;
	}


	// Operator binds:

};

proland::GraphProducer::GraphFactory* LunaTraits< proland::GraphProducer::GraphFactory >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_GraphProducer_GraphFactory::_bind_ctor(L);
}

void LunaTraits< proland::GraphProducer::GraphFactory >::_bind_dtor(proland::GraphProducer::GraphFactory* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< proland::GraphProducer::GraphFactory >::className[] = "GraphProducer_GraphFactory";
const char LunaTraits< proland::GraphProducer::GraphFactory >::fullName[] = "proland::GraphProducer::GraphFactory";
const char LunaTraits< proland::GraphProducer::GraphFactory >::moduleName[] = "proland";
const char* LunaTraits< proland::GraphProducer::GraphFactory >::parents[] = {"ork.Object", 0};
const int LunaTraits< proland::GraphProducer::GraphFactory >::hash = 62691332;
const int LunaTraits< proland::GraphProducer::GraphFactory >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< proland::GraphProducer::GraphFactory >::methods[] = {
	{"newGraph", &luna_wrapper_proland_GraphProducer_GraphFactory::_bind_newGraph},
	{"swap", &luna_wrapper_proland_GraphProducer_GraphFactory::_bind_swap},
	{"base_toString", &luna_wrapper_proland_GraphProducer_GraphFactory::_bind_base_toString},
	{"base_newGraph", &luna_wrapper_proland_GraphProducer_GraphFactory::_bind_base_newGraph},
	{"base_swap", &luna_wrapper_proland_GraphProducer_GraphFactory::_bind_base_swap},
	{"fromVoid", &luna_wrapper_proland_GraphProducer_GraphFactory::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_GraphProducer_GraphFactory::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_GraphProducer_GraphFactory::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::GraphProducer::GraphFactory >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_GraphProducer_GraphFactory::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::GraphProducer::GraphFactory >::enumValues[] = {
	{0,0}
};


