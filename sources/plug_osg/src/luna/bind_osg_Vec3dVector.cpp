#include <plug_common.h>

class luna_wrapper_osg_Vec3dVector {
public:
	typedef Luna< osg::Vec3dVector > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,72785881) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::Vec3dVector*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec3dVector* rhs =(Luna< osg::Vec3dVector >::check(L,2));
		osg::Vec3dVector* self=(Luna< osg::Vec3dVector >::check(L,1));
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

		osg::Vec3dVector* self= (osg::Vec3dVector*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::Vec3dVector >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,72785881) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osg::Vec3dVector >::check(L,1));
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

		osg::Vec3dVector* self=(Luna< osg::Vec3dVector >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::Vec3dVector");
		
		return luna_dynamicCast(L,converters,"osg::Vec3dVector",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_assign(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303202) ) return false;
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

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
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

	// Function binds:
	// void osg::Vec3dVector::assign(unsigned int arg1, osg::Vec3d arg2)
	static int _bind_assign(lua_State *L) {
		if (!_lg_typecheck_assign(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Vec3dVector::assign(unsigned int arg1, osg::Vec3d arg2) function, expected prototype:\nvoid osg::Vec3dVector::assign(unsigned int arg1, osg::Vec3d arg2)\nClass arguments details:\narg 2 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int arg1=(unsigned int)lua_tointeger(L,2);
		osg::Vec3d* arg2_ptr=(Luna< osg::Vec3d >::check(L,3));
		if( !arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg arg2 in osg::Vec3dVector::assign function");
		}
		osg::Vec3d arg2=*arg2_ptr;

		osg::Vec3dVector* self=(Luna< osg::Vec3dVector >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Vec3dVector::assign(unsigned int, osg::Vec3d). Got : '%s'\n%s",typeid(Luna< osg::Vec3dVector >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->assign(arg1, arg2);

		return 0;
	}

	// osg::Vec3d osg::Vec3dVector::at(unsigned int arg1)
	static int _bind_at(lua_State *L) {
		if (!_lg_typecheck_at(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3d osg::Vec3dVector::at(unsigned int arg1) function, expected prototype:\nosg::Vec3d osg::Vec3dVector::at(unsigned int arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int arg1=(unsigned int)lua_tointeger(L,2);

		osg::Vec3dVector* self=(Luna< osg::Vec3dVector >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3d osg::Vec3dVector::at(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Vec3dVector >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec3d stack_lret = self->at(arg1);
		osg::Vec3d* lret = new osg::Vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3d >::push(L,lret,true);

		return 1;
	}

	// osg::Vec3d osg::Vec3dVector::back()
	static int _bind_back(lua_State *L) {
		if (!_lg_typecheck_back(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3d osg::Vec3dVector::back() function, expected prototype:\nosg::Vec3d osg::Vec3dVector::back()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec3dVector* self=(Luna< osg::Vec3dVector >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3d osg::Vec3dVector::back(). Got : '%s'\n%s",typeid(Luna< osg::Vec3dVector >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec3d stack_lret = self->back();
		osg::Vec3d* lret = new osg::Vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3d >::push(L,lret,true);

		return 1;
	}

	// osg::Vec3d osg::Vec3dVector::front()
	static int _bind_front(lua_State *L) {
		if (!_lg_typecheck_front(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3d osg::Vec3dVector::front() function, expected prototype:\nosg::Vec3d osg::Vec3dVector::front()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec3dVector* self=(Luna< osg::Vec3dVector >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3d osg::Vec3dVector::front(). Got : '%s'\n%s",typeid(Luna< osg::Vec3dVector >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec3d stack_lret = self->front();
		osg::Vec3d* lret = new osg::Vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3d >::push(L,lret,true);

		return 1;
	}

	// void osg::Vec3dVector::clear()
	static int _bind_clear(lua_State *L) {
		if (!_lg_typecheck_clear(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Vec3dVector::clear() function, expected prototype:\nvoid osg::Vec3dVector::clear()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec3dVector* self=(Luna< osg::Vec3dVector >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Vec3dVector::clear(). Got : '%s'\n%s",typeid(Luna< osg::Vec3dVector >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->clear();

		return 0;
	}

	// bool osg::Vec3dVector::empty()
	static int _bind_empty(lua_State *L) {
		if (!_lg_typecheck_empty(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Vec3dVector::empty() function, expected prototype:\nbool osg::Vec3dVector::empty()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec3dVector* self=(Luna< osg::Vec3dVector >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Vec3dVector::empty(). Got : '%s'\n%s",typeid(Luna< osg::Vec3dVector >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->empty();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int osg::Vec3dVector::size()
	static int _bind_size(lua_State *L) {
		if (!_lg_typecheck_size(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Vec3dVector::size() function, expected prototype:\nunsigned int osg::Vec3dVector::size()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec3dVector* self=(Luna< osg::Vec3dVector >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Vec3dVector::size(). Got : '%s'\n%s",typeid(Luna< osg::Vec3dVector >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->size();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Vec3dVector::resize(unsigned int arg1)
	static int _bind_resize(lua_State *L) {
		if (!_lg_typecheck_resize(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Vec3dVector::resize(unsigned int arg1) function, expected prototype:\nvoid osg::Vec3dVector::resize(unsigned int arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int arg1=(unsigned int)lua_tointeger(L,2);

		osg::Vec3dVector* self=(Luna< osg::Vec3dVector >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Vec3dVector::resize(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Vec3dVector >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->resize(arg1);

		return 0;
	}

	// void osg::Vec3dVector::pop_back()
	static int _bind_pop_back(lua_State *L) {
		if (!_lg_typecheck_pop_back(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Vec3dVector::pop_back() function, expected prototype:\nvoid osg::Vec3dVector::pop_back()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec3dVector* self=(Luna< osg::Vec3dVector >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Vec3dVector::pop_back(). Got : '%s'\n%s",typeid(Luna< osg::Vec3dVector >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->pop_back();

		return 0;
	}

	// void osg::Vec3dVector::push_back(osg::Vec3d arg1)
	static int _bind_push_back(lua_State *L) {
		if (!_lg_typecheck_push_back(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Vec3dVector::push_back(osg::Vec3d arg1) function, expected prototype:\nvoid osg::Vec3dVector::push_back(osg::Vec3d arg1)\nClass arguments details:\narg 1 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec3d* arg1_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg arg1 in osg::Vec3dVector::push_back function");
		}
		osg::Vec3d arg1=*arg1_ptr;

		osg::Vec3dVector* self=(Luna< osg::Vec3dVector >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Vec3dVector::push_back(osg::Vec3d). Got : '%s'\n%s",typeid(Luna< osg::Vec3dVector >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->push_back(arg1);

		return 0;
	}


	// Operator binds:
	// osg::Vec3d osg::Vec3dVector::operator[](unsigned int arg1)
	static int _bind_op_index(lua_State *L) {
		if (!_lg_typecheck_op_index(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3d osg::Vec3dVector::operator[](unsigned int arg1) function, expected prototype:\nosg::Vec3d osg::Vec3dVector::operator[](unsigned int arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int arg1=(unsigned int)lua_tointeger(L,2);

		osg::Vec3dVector* self=(Luna< osg::Vec3dVector >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3d osg::Vec3dVector::operator[](unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Vec3dVector >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec3d stack_lret = self->operator[](arg1);
		osg::Vec3d* lret = new osg::Vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3d >::push(L,lret,true);

		return 1;
	}


};

osg::Vec3dVector* LunaTraits< osg::Vec3dVector >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::Vec3dVector >::_bind_dtor(osg::Vec3dVector* obj) {
	delete obj;
}

const char LunaTraits< osg::Vec3dVector >::className[] = "Vec3dVector";
const char LunaTraits< osg::Vec3dVector >::fullName[] = "osg::Vec3dVector";
const char LunaTraits< osg::Vec3dVector >::moduleName[] = "osg";
const char* LunaTraits< osg::Vec3dVector >::parents[] = {0};
const int LunaTraits< osg::Vec3dVector >::hash = 72785881;
const int LunaTraits< osg::Vec3dVector >::uniqueIDs[] = {72785881,0};

luna_RegType LunaTraits< osg::Vec3dVector >::methods[] = {
	{"assign", &luna_wrapper_osg_Vec3dVector::_bind_assign},
	{"at", &luna_wrapper_osg_Vec3dVector::_bind_at},
	{"back", &luna_wrapper_osg_Vec3dVector::_bind_back},
	{"front", &luna_wrapper_osg_Vec3dVector::_bind_front},
	{"clear", &luna_wrapper_osg_Vec3dVector::_bind_clear},
	{"empty", &luna_wrapper_osg_Vec3dVector::_bind_empty},
	{"size", &luna_wrapper_osg_Vec3dVector::_bind_size},
	{"resize", &luna_wrapper_osg_Vec3dVector::_bind_resize},
	{"pop_back", &luna_wrapper_osg_Vec3dVector::_bind_pop_back},
	{"push_back", &luna_wrapper_osg_Vec3dVector::_bind_push_back},
	{"op_index", &luna_wrapper_osg_Vec3dVector::_bind_op_index},
	{"dynCast", &luna_wrapper_osg_Vec3dVector::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_Vec3dVector::_bind___eq},
	{"fromVoid", &luna_wrapper_osg_Vec3dVector::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_Vec3dVector::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Vec3dVector >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Vec3dVector >::enumValues[] = {
	{0,0}
};


