#include <plug_common.h>

class luna_wrapper_osg_Polytope_PlaneList {
public:
	typedef Luna< osg::Polytope::PlaneList > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,33161232) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::Polytope::PlaneList*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::Polytope::PlaneList* rhs =(Luna< osg::Polytope::PlaneList >::check(L,2));
		osg::Polytope::PlaneList* self=(Luna< osg::Polytope::PlaneList >::check(L,1));
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

		osg::Polytope::PlaneList* self= (osg::Polytope::PlaneList*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::Polytope::PlaneList >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,33161232) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osg::Polytope::PlaneList >::check(L,1));
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

		osg::Polytope::PlaneList* self=(Luna< osg::Polytope::PlaneList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::Polytope::PlaneList");
		
		return luna_dynamicCast(L,converters,"osg::Polytope::PlaneList",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_assign(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,86970521) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_at(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_back(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_front(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_empty(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_size(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_resize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_pop_back(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_push_back(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,86970521) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck_op_index(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Constructor binds:
	// osg::Polytope::PlaneList::PlaneList()
	static osg::Polytope::PlaneList* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in osg::Polytope::PlaneList::PlaneList() function, expected prototype:\nosg::Polytope::PlaneList::PlaneList()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::Polytope::PlaneList();
	}


	// Function binds:
	// void osg::Polytope::PlaneList::assign(unsigned int arg1, osg::Plane arg2)
	static int _bind_assign(lua_State *L) {
		if (!_lg_typecheck_assign(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Polytope::PlaneList::assign(unsigned int arg1, osg::Plane arg2) function, expected prototype:\nvoid osg::Polytope::PlaneList::assign(unsigned int arg1, osg::Plane arg2)\nClass arguments details:\narg 2 ID = 86970521\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int arg1=(unsigned int)lua_tointeger(L,2);
		osg::Plane* arg2_ptr=(Luna< osg::Plane >::check(L,3));
		if( !arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg arg2 in osg::Polytope::PlaneList::assign function");
		}
		osg::Plane arg2=*arg2_ptr;

		osg::Polytope::PlaneList* self=(Luna< osg::Polytope::PlaneList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Polytope::PlaneList::assign(unsigned int, osg::Plane). Got : '%s'\n%s",typeid(Luna< osg::Polytope::PlaneList >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->assign(arg1, arg2);

		return 0;
	}

	// osg::Plane osg::Polytope::PlaneList::at(unsigned int arg1)
	static int _bind_at(lua_State *L) {
		if (!_lg_typecheck_at(L)) {
			luaL_error(L, "luna typecheck failed in osg::Plane osg::Polytope::PlaneList::at(unsigned int arg1) function, expected prototype:\nosg::Plane osg::Polytope::PlaneList::at(unsigned int arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int arg1=(unsigned int)lua_tointeger(L,2);

		osg::Polytope::PlaneList* self=(Luna< osg::Polytope::PlaneList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Plane osg::Polytope::PlaneList::at(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Polytope::PlaneList >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Plane stack_lret = self->at(arg1);
		osg::Plane* lret = new osg::Plane(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Plane >::push(L,lret,true);

		return 1;
	}

	// osg::Plane osg::Polytope::PlaneList::back()
	static int _bind_back(lua_State *L) {
		if (!_lg_typecheck_back(L)) {
			luaL_error(L, "luna typecheck failed in osg::Plane osg::Polytope::PlaneList::back() function, expected prototype:\nosg::Plane osg::Polytope::PlaneList::back()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Polytope::PlaneList* self=(Luna< osg::Polytope::PlaneList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Plane osg::Polytope::PlaneList::back(). Got : '%s'\n%s",typeid(Luna< osg::Polytope::PlaneList >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Plane stack_lret = self->back();
		osg::Plane* lret = new osg::Plane(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Plane >::push(L,lret,true);

		return 1;
	}

	// osg::Plane osg::Polytope::PlaneList::front()
	static int _bind_front(lua_State *L) {
		if (!_lg_typecheck_front(L)) {
			luaL_error(L, "luna typecheck failed in osg::Plane osg::Polytope::PlaneList::front() function, expected prototype:\nosg::Plane osg::Polytope::PlaneList::front()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Polytope::PlaneList* self=(Luna< osg::Polytope::PlaneList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Plane osg::Polytope::PlaneList::front(). Got : '%s'\n%s",typeid(Luna< osg::Polytope::PlaneList >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Plane stack_lret = self->front();
		osg::Plane* lret = new osg::Plane(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Plane >::push(L,lret,true);

		return 1;
	}

	// void osg::Polytope::PlaneList::clear()
	static int _bind_clear(lua_State *L) {
		if (!_lg_typecheck_clear(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Polytope::PlaneList::clear() function, expected prototype:\nvoid osg::Polytope::PlaneList::clear()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Polytope::PlaneList* self=(Luna< osg::Polytope::PlaneList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Polytope::PlaneList::clear(). Got : '%s'\n%s",typeid(Luna< osg::Polytope::PlaneList >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->clear();

		return 0;
	}

	// bool osg::Polytope::PlaneList::empty()
	static int _bind_empty(lua_State *L) {
		if (!_lg_typecheck_empty(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Polytope::PlaneList::empty() function, expected prototype:\nbool osg::Polytope::PlaneList::empty()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Polytope::PlaneList* self=(Luna< osg::Polytope::PlaneList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Polytope::PlaneList::empty(). Got : '%s'\n%s",typeid(Luna< osg::Polytope::PlaneList >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->empty();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int osg::Polytope::PlaneList::size()
	static int _bind_size(lua_State *L) {
		if (!_lg_typecheck_size(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Polytope::PlaneList::size() function, expected prototype:\nunsigned int osg::Polytope::PlaneList::size()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Polytope::PlaneList* self=(Luna< osg::Polytope::PlaneList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Polytope::PlaneList::size(). Got : '%s'\n%s",typeid(Luna< osg::Polytope::PlaneList >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->size();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Polytope::PlaneList::resize(unsigned int arg1)
	static int _bind_resize(lua_State *L) {
		if (!_lg_typecheck_resize(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Polytope::PlaneList::resize(unsigned int arg1) function, expected prototype:\nvoid osg::Polytope::PlaneList::resize(unsigned int arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int arg1=(unsigned int)lua_tointeger(L,2);

		osg::Polytope::PlaneList* self=(Luna< osg::Polytope::PlaneList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Polytope::PlaneList::resize(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Polytope::PlaneList >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->resize(arg1);

		return 0;
	}

	// void osg::Polytope::PlaneList::pop_back()
	static int _bind_pop_back(lua_State *L) {
		if (!_lg_typecheck_pop_back(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Polytope::PlaneList::pop_back() function, expected prototype:\nvoid osg::Polytope::PlaneList::pop_back()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Polytope::PlaneList* self=(Luna< osg::Polytope::PlaneList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Polytope::PlaneList::pop_back(). Got : '%s'\n%s",typeid(Luna< osg::Polytope::PlaneList >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->pop_back();

		return 0;
	}

	// void osg::Polytope::PlaneList::push_back(osg::Plane arg1)
	static int _bind_push_back(lua_State *L) {
		if (!_lg_typecheck_push_back(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Polytope::PlaneList::push_back(osg::Plane arg1) function, expected prototype:\nvoid osg::Polytope::PlaneList::push_back(osg::Plane arg1)\nClass arguments details:\narg 1 ID = 86970521\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Plane* arg1_ptr=(Luna< osg::Plane >::check(L,2));
		if( !arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg arg1 in osg::Polytope::PlaneList::push_back function");
		}
		osg::Plane arg1=*arg1_ptr;

		osg::Polytope::PlaneList* self=(Luna< osg::Polytope::PlaneList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Polytope::PlaneList::push_back(osg::Plane). Got : '%s'\n%s",typeid(Luna< osg::Polytope::PlaneList >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->push_back(arg1);

		return 0;
	}


	// Operator binds:
	// osg::Plane osg::Polytope::PlaneList::operator[](unsigned int arg1)
	static int _bind_op_index(lua_State *L) {
		if (!_lg_typecheck_op_index(L)) {
			luaL_error(L, "luna typecheck failed in osg::Plane osg::Polytope::PlaneList::operator[](unsigned int arg1) function, expected prototype:\nosg::Plane osg::Polytope::PlaneList::operator[](unsigned int arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int arg1=(unsigned int)lua_tointeger(L,2);

		osg::Polytope::PlaneList* self=(Luna< osg::Polytope::PlaneList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Plane osg::Polytope::PlaneList::operator[](unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Polytope::PlaneList >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Plane stack_lret = self->operator[](arg1);
		osg::Plane* lret = new osg::Plane(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Plane >::push(L,lret,true);

		return 1;
	}


};

osg::Polytope::PlaneList* LunaTraits< osg::Polytope::PlaneList >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Polytope_PlaneList::_bind_ctor(L);
}

void LunaTraits< osg::Polytope::PlaneList >::_bind_dtor(osg::Polytope::PlaneList* obj) {
	delete obj;
}

const char LunaTraits< osg::Polytope::PlaneList >::className[] = "Polytope_PlaneList";
const char LunaTraits< osg::Polytope::PlaneList >::fullName[] = "osg::Polytope::PlaneList";
const char LunaTraits< osg::Polytope::PlaneList >::moduleName[] = "osg";
const char* LunaTraits< osg::Polytope::PlaneList >::parents[] = {0};
const int LunaTraits< osg::Polytope::PlaneList >::hash = 33161232;
const int LunaTraits< osg::Polytope::PlaneList >::uniqueIDs[] = {33161232,0};

luna_RegType LunaTraits< osg::Polytope::PlaneList >::methods[] = {
	{"assign", &luna_wrapper_osg_Polytope_PlaneList::_bind_assign},
	{"at", &luna_wrapper_osg_Polytope_PlaneList::_bind_at},
	{"back", &luna_wrapper_osg_Polytope_PlaneList::_bind_back},
	{"front", &luna_wrapper_osg_Polytope_PlaneList::_bind_front},
	{"clear", &luna_wrapper_osg_Polytope_PlaneList::_bind_clear},
	{"empty", &luna_wrapper_osg_Polytope_PlaneList::_bind_empty},
	{"size", &luna_wrapper_osg_Polytope_PlaneList::_bind_size},
	{"resize", &luna_wrapper_osg_Polytope_PlaneList::_bind_resize},
	{"pop_back", &luna_wrapper_osg_Polytope_PlaneList::_bind_pop_back},
	{"push_back", &luna_wrapper_osg_Polytope_PlaneList::_bind_push_back},
	{"op_index", &luna_wrapper_osg_Polytope_PlaneList::_bind_op_index},
	{"dynCast", &luna_wrapper_osg_Polytope_PlaneList::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_Polytope_PlaneList::_bind___eq},
	{"fromVoid", &luna_wrapper_osg_Polytope_PlaneList::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_Polytope_PlaneList::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Polytope::PlaneList >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Polytope::PlaneList >::enumValues[] = {
	{0,0}
};


