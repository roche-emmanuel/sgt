#include <plug_common.h>

class luna_wrapper_proland_Graph_Changes {
public:
	typedef Luna< proland::Graph::Changes > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,47132056) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(proland::Graph::Changes*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		proland::Graph::Changes* rhs =(Luna< proland::Graph::Changes >::check(L,2));
		proland::Graph::Changes* self=(Luna< proland::Graph::Changes >::check(L,1));
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

		proland::Graph::Changes* self= (proland::Graph::Changes*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::Graph::Changes >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,47132056) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< proland::Graph::Changes >::check(L,1));
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

		proland::Graph::Changes* self=(Luna< proland::Graph::Changes >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("proland::Graph::Changes");
		
		return luna_dynamicCast(L,converters,"proland::Graph::Changes",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_empty(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_insert(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,47132056) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_equals(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,47132056) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_print(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getChangedArea(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRemovedCurves(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAddedCurves(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRemovedAreas(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAddedAreas(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setChangedArea(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,63279285) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRemovedCurves(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92772708) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAddedCurves(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92772708) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRemovedAreas(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,22882411) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAddedAreas(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,22882411) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// bool proland::Graph::Changes::empty()
	static int _bind_empty(lua_State *L) {
		if (!_lg_typecheck_empty(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::Graph::Changes::empty() function, expected prototype:\nbool proland::Graph::Changes::empty()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Graph::Changes* self=(Luna< proland::Graph::Changes >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::Graph::Changes::empty(). Got : '%s'\n%s",typeid(Luna< proland::Graph::Changes >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->empty();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void proland::Graph::Changes::clear()
	static int _bind_clear(lua_State *L) {
		if (!_lg_typecheck_clear(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Graph::Changes::clear() function, expected prototype:\nvoid proland::Graph::Changes::clear()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Graph::Changes* self=(Luna< proland::Graph::Changes >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Graph::Changes::clear(). Got : '%s'\n%s",typeid(Luna< proland::Graph::Changes >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->clear();

		return 0;
	}

	// void proland::Graph::Changes::insert(proland::Graph::Changes c)
	static int _bind_insert(lua_State *L) {
		if (!_lg_typecheck_insert(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Graph::Changes::insert(proland::Graph::Changes c) function, expected prototype:\nvoid proland::Graph::Changes::insert(proland::Graph::Changes c)\nClass arguments details:\narg 1 ID = 47132056\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::Graph::Changes* c_ptr=(Luna< proland::Graph::Changes >::check(L,2));
		if( !c_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg c in proland::Graph::Changes::insert function");
		}
		proland::Graph::Changes c=*c_ptr;

		proland::Graph::Changes* self=(Luna< proland::Graph::Changes >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Graph::Changes::insert(proland::Graph::Changes). Got : '%s'\n%s",typeid(Luna< proland::Graph::Changes >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->insert(c);

		return 0;
	}

	// bool proland::Graph::Changes::equals(proland::Graph::Changes c) const
	static int _bind_equals(lua_State *L) {
		if (!_lg_typecheck_equals(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::Graph::Changes::equals(proland::Graph::Changes c) const function, expected prototype:\nbool proland::Graph::Changes::equals(proland::Graph::Changes c) const\nClass arguments details:\narg 1 ID = 47132056\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::Graph::Changes* c_ptr=(Luna< proland::Graph::Changes >::check(L,2));
		if( !c_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg c in proland::Graph::Changes::equals function");
		}
		proland::Graph::Changes c=*c_ptr;

		proland::Graph::Changes* self=(Luna< proland::Graph::Changes >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::Graph::Changes::equals(proland::Graph::Changes) const. Got : '%s'\n%s",typeid(Luna< proland::Graph::Changes >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->equals(c);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void proland::Graph::Changes::print() const
	static int _bind_print(lua_State *L) {
		if (!_lg_typecheck_print(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Graph::Changes::print() const function, expected prototype:\nvoid proland::Graph::Changes::print() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Graph::Changes* self=(Luna< proland::Graph::Changes >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Graph::Changes::print() const. Got : '%s'\n%s",typeid(Luna< proland::Graph::Changes >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->print();

		return 0;
	}

	// list< proland::AreaId > proland::Graph::Changes::changedArea()
	static int _bind_getChangedArea(lua_State *L) {
		if (!_lg_typecheck_getChangedArea(L)) {
			luaL_error(L, "luna typecheck failed in list< proland::AreaId > proland::Graph::Changes::changedArea() function, expected prototype:\nlist< proland::AreaId > proland::Graph::Changes::changedArea()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Graph::Changes* self=(Luna< proland::Graph::Changes >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call list< proland::AreaId > proland::Graph::Changes::changedArea(). Got : '%s'\n%s",typeid(Luna< proland::Graph::Changes >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const list< proland::AreaId >* lret = &self->changedArea;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< list< proland::AreaId > >::push(L,lret,false);

		return 1;
	}

	// set< proland::CurveId > proland::Graph::Changes::removedCurves()
	static int _bind_getRemovedCurves(lua_State *L) {
		if (!_lg_typecheck_getRemovedCurves(L)) {
			luaL_error(L, "luna typecheck failed in set< proland::CurveId > proland::Graph::Changes::removedCurves() function, expected prototype:\nset< proland::CurveId > proland::Graph::Changes::removedCurves()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Graph::Changes* self=(Luna< proland::Graph::Changes >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call set< proland::CurveId > proland::Graph::Changes::removedCurves(). Got : '%s'\n%s",typeid(Luna< proland::Graph::Changes >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const set< proland::CurveId >* lret = &self->removedCurves;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< set< proland::CurveId > >::push(L,lret,false);

		return 1;
	}

	// set< proland::CurveId > proland::Graph::Changes::addedCurves()
	static int _bind_getAddedCurves(lua_State *L) {
		if (!_lg_typecheck_getAddedCurves(L)) {
			luaL_error(L, "luna typecheck failed in set< proland::CurveId > proland::Graph::Changes::addedCurves() function, expected prototype:\nset< proland::CurveId > proland::Graph::Changes::addedCurves()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Graph::Changes* self=(Luna< proland::Graph::Changes >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call set< proland::CurveId > proland::Graph::Changes::addedCurves(). Got : '%s'\n%s",typeid(Luna< proland::Graph::Changes >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const set< proland::CurveId >* lret = &self->addedCurves;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< set< proland::CurveId > >::push(L,lret,false);

		return 1;
	}

	// set< proland::AreaId > proland::Graph::Changes::removedAreas()
	static int _bind_getRemovedAreas(lua_State *L) {
		if (!_lg_typecheck_getRemovedAreas(L)) {
			luaL_error(L, "luna typecheck failed in set< proland::AreaId > proland::Graph::Changes::removedAreas() function, expected prototype:\nset< proland::AreaId > proland::Graph::Changes::removedAreas()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Graph::Changes* self=(Luna< proland::Graph::Changes >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call set< proland::AreaId > proland::Graph::Changes::removedAreas(). Got : '%s'\n%s",typeid(Luna< proland::Graph::Changes >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const set< proland::AreaId >* lret = &self->removedAreas;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< set< proland::AreaId > >::push(L,lret,false);

		return 1;
	}

	// set< proland::AreaId > proland::Graph::Changes::addedAreas()
	static int _bind_getAddedAreas(lua_State *L) {
		if (!_lg_typecheck_getAddedAreas(L)) {
			luaL_error(L, "luna typecheck failed in set< proland::AreaId > proland::Graph::Changes::addedAreas() function, expected prototype:\nset< proland::AreaId > proland::Graph::Changes::addedAreas()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Graph::Changes* self=(Luna< proland::Graph::Changes >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call set< proland::AreaId > proland::Graph::Changes::addedAreas(). Got : '%s'\n%s",typeid(Luna< proland::Graph::Changes >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const set< proland::AreaId >* lret = &self->addedAreas;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< set< proland::AreaId > >::push(L,lret,false);

		return 1;
	}

	// void proland::Graph::Changes::changedArea(list< proland::AreaId > value)
	static int _bind_setChangedArea(lua_State *L) {
		if (!_lg_typecheck_setChangedArea(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Graph::Changes::changedArea(list< proland::AreaId > value) function, expected prototype:\nvoid proland::Graph::Changes::changedArea(list< proland::AreaId > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		list< proland::AreaId >* value_ptr=(Luna< list< proland::AreaId > >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in proland::Graph::Changes::changedArea function");
		}
		list< proland::AreaId > value=*value_ptr;

		proland::Graph::Changes* self=(Luna< proland::Graph::Changes >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Graph::Changes::changedArea(list< proland::AreaId >). Got : '%s'\n%s",typeid(Luna< proland::Graph::Changes >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->changedArea = value;

		return 0;
	}

	// void proland::Graph::Changes::removedCurves(set< proland::CurveId > value)
	static int _bind_setRemovedCurves(lua_State *L) {
		if (!_lg_typecheck_setRemovedCurves(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Graph::Changes::removedCurves(set< proland::CurveId > value) function, expected prototype:\nvoid proland::Graph::Changes::removedCurves(set< proland::CurveId > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		set< proland::CurveId >* value_ptr=(Luna< set< proland::CurveId > >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in proland::Graph::Changes::removedCurves function");
		}
		set< proland::CurveId > value=*value_ptr;

		proland::Graph::Changes* self=(Luna< proland::Graph::Changes >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Graph::Changes::removedCurves(set< proland::CurveId >). Got : '%s'\n%s",typeid(Luna< proland::Graph::Changes >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->removedCurves = value;

		return 0;
	}

	// void proland::Graph::Changes::addedCurves(set< proland::CurveId > value)
	static int _bind_setAddedCurves(lua_State *L) {
		if (!_lg_typecheck_setAddedCurves(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Graph::Changes::addedCurves(set< proland::CurveId > value) function, expected prototype:\nvoid proland::Graph::Changes::addedCurves(set< proland::CurveId > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		set< proland::CurveId >* value_ptr=(Luna< set< proland::CurveId > >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in proland::Graph::Changes::addedCurves function");
		}
		set< proland::CurveId > value=*value_ptr;

		proland::Graph::Changes* self=(Luna< proland::Graph::Changes >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Graph::Changes::addedCurves(set< proland::CurveId >). Got : '%s'\n%s",typeid(Luna< proland::Graph::Changes >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addedCurves = value;

		return 0;
	}

	// void proland::Graph::Changes::removedAreas(set< proland::AreaId > value)
	static int _bind_setRemovedAreas(lua_State *L) {
		if (!_lg_typecheck_setRemovedAreas(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Graph::Changes::removedAreas(set< proland::AreaId > value) function, expected prototype:\nvoid proland::Graph::Changes::removedAreas(set< proland::AreaId > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		set< proland::AreaId >* value_ptr=(Luna< set< proland::AreaId > >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in proland::Graph::Changes::removedAreas function");
		}
		set< proland::AreaId > value=*value_ptr;

		proland::Graph::Changes* self=(Luna< proland::Graph::Changes >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Graph::Changes::removedAreas(set< proland::AreaId >). Got : '%s'\n%s",typeid(Luna< proland::Graph::Changes >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->removedAreas = value;

		return 0;
	}

	// void proland::Graph::Changes::addedAreas(set< proland::AreaId > value)
	static int _bind_setAddedAreas(lua_State *L) {
		if (!_lg_typecheck_setAddedAreas(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Graph::Changes::addedAreas(set< proland::AreaId > value) function, expected prototype:\nvoid proland::Graph::Changes::addedAreas(set< proland::AreaId > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		set< proland::AreaId >* value_ptr=(Luna< set< proland::AreaId > >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in proland::Graph::Changes::addedAreas function");
		}
		set< proland::AreaId > value=*value_ptr;

		proland::Graph::Changes* self=(Luna< proland::Graph::Changes >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Graph::Changes::addedAreas(set< proland::AreaId >). Got : '%s'\n%s",typeid(Luna< proland::Graph::Changes >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addedAreas = value;

		return 0;
	}


	// Operator binds:

};

proland::Graph::Changes* LunaTraits< proland::Graph::Changes >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< proland::Graph::Changes >::_bind_dtor(proland::Graph::Changes* obj) {
	delete obj;
}

const char LunaTraits< proland::Graph::Changes >::className[] = "Graph_Changes";
const char LunaTraits< proland::Graph::Changes >::fullName[] = "proland::Graph::Changes";
const char LunaTraits< proland::Graph::Changes >::moduleName[] = "proland";
const char* LunaTraits< proland::Graph::Changes >::parents[] = {0};
const int LunaTraits< proland::Graph::Changes >::hash = 47132056;
const int LunaTraits< proland::Graph::Changes >::uniqueIDs[] = {47132056,0};

luna_RegType LunaTraits< proland::Graph::Changes >::methods[] = {
	{"empty", &luna_wrapper_proland_Graph_Changes::_bind_empty},
	{"clear", &luna_wrapper_proland_Graph_Changes::_bind_clear},
	{"insert", &luna_wrapper_proland_Graph_Changes::_bind_insert},
	{"equals", &luna_wrapper_proland_Graph_Changes::_bind_equals},
	{"print", &luna_wrapper_proland_Graph_Changes::_bind_print},
	{"getChangedArea", &luna_wrapper_proland_Graph_Changes::_bind_getChangedArea},
	{"getRemovedCurves", &luna_wrapper_proland_Graph_Changes::_bind_getRemovedCurves},
	{"getAddedCurves", &luna_wrapper_proland_Graph_Changes::_bind_getAddedCurves},
	{"getRemovedAreas", &luna_wrapper_proland_Graph_Changes::_bind_getRemovedAreas},
	{"getAddedAreas", &luna_wrapper_proland_Graph_Changes::_bind_getAddedAreas},
	{"setChangedArea", &luna_wrapper_proland_Graph_Changes::_bind_setChangedArea},
	{"setRemovedCurves", &luna_wrapper_proland_Graph_Changes::_bind_setRemovedCurves},
	{"setAddedCurves", &luna_wrapper_proland_Graph_Changes::_bind_setAddedCurves},
	{"setRemovedAreas", &luna_wrapper_proland_Graph_Changes::_bind_setRemovedAreas},
	{"setAddedAreas", &luna_wrapper_proland_Graph_Changes::_bind_setAddedAreas},
	{"dynCast", &luna_wrapper_proland_Graph_Changes::_bind_dynCast},
	{"__eq", &luna_wrapper_proland_Graph_Changes::_bind___eq},
	{"fromVoid", &luna_wrapper_proland_Graph_Changes::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_Graph_Changes::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< proland::Graph::Changes >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< proland::Graph::Changes >::enumValues[] = {
	{0,0}
};


