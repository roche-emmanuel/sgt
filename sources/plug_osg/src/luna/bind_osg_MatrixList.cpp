#include <plug_common.h>

class luna_wrapper_osg_MatrixList {
public:
	typedef Luna< osg::MatrixList > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,63553411) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::MatrixList*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::MatrixList* rhs =(Luna< osg::MatrixList >::check(L,2));
		osg::MatrixList* self=(Luna< osg::MatrixList >::check(L,1));
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

		osg::MatrixList* self= (osg::MatrixList*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::MatrixList >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,63553411) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osg::MatrixList >::check(L,1));
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

		osg::MatrixList* self=(Luna< osg::MatrixList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::MatrixList");
		
		return luna_dynamicCast(L,converters,"osg::MatrixList",name);
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
		if( !Luna<void>::has_uniqueid(L,3,18903838) ) return false;
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

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
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
	// osg::MatrixList::MatrixList()
	static osg::MatrixList* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in osg::MatrixList::MatrixList() function, expected prototype:\nosg::MatrixList::MatrixList()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::MatrixList();
	}


	// Function binds:
	// void osg::MatrixList::assign(unsigned int arg1, osg::Matrixd arg2)
	static int _bind_assign(lua_State *L) {
		if (!_lg_typecheck_assign(L)) {
			luaL_error(L, "luna typecheck failed in void osg::MatrixList::assign(unsigned int arg1, osg::Matrixd arg2) function, expected prototype:\nvoid osg::MatrixList::assign(unsigned int arg1, osg::Matrixd arg2)\nClass arguments details:\narg 2 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int arg1=(unsigned int)lua_tointeger(L,2);
		osg::Matrixd* arg2_ptr=(Luna< osg::Matrixd >::check(L,3));
		if( !arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg arg2 in osg::MatrixList::assign function");
		}
		osg::Matrixd arg2=*arg2_ptr;

		osg::MatrixList* self=(Luna< osg::MatrixList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::MatrixList::assign(unsigned int, osg::Matrixd). Got : '%s'\n%s",typeid(Luna< osg::MatrixList >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->assign(arg1, arg2);

		return 0;
	}

	// osg::Matrixd osg::MatrixList::at(unsigned int arg1)
	static int _bind_at(lua_State *L) {
		if (!_lg_typecheck_at(L)) {
			luaL_error(L, "luna typecheck failed in osg::Matrixd osg::MatrixList::at(unsigned int arg1) function, expected prototype:\nosg::Matrixd osg::MatrixList::at(unsigned int arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int arg1=(unsigned int)lua_tointeger(L,2);

		osg::MatrixList* self=(Luna< osg::MatrixList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Matrixd osg::MatrixList::at(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::MatrixList >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Matrixd stack_lret = self->at(arg1);
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// osg::Matrixd osg::MatrixList::back()
	static int _bind_back(lua_State *L) {
		if (!_lg_typecheck_back(L)) {
			luaL_error(L, "luna typecheck failed in osg::Matrixd osg::MatrixList::back() function, expected prototype:\nosg::Matrixd osg::MatrixList::back()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::MatrixList* self=(Luna< osg::MatrixList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Matrixd osg::MatrixList::back(). Got : '%s'\n%s",typeid(Luna< osg::MatrixList >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Matrixd stack_lret = self->back();
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// osg::Matrixd osg::MatrixList::front()
	static int _bind_front(lua_State *L) {
		if (!_lg_typecheck_front(L)) {
			luaL_error(L, "luna typecheck failed in osg::Matrixd osg::MatrixList::front() function, expected prototype:\nosg::Matrixd osg::MatrixList::front()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::MatrixList* self=(Luna< osg::MatrixList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Matrixd osg::MatrixList::front(). Got : '%s'\n%s",typeid(Luna< osg::MatrixList >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Matrixd stack_lret = self->front();
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// void osg::MatrixList::clear()
	static int _bind_clear(lua_State *L) {
		if (!_lg_typecheck_clear(L)) {
			luaL_error(L, "luna typecheck failed in void osg::MatrixList::clear() function, expected prototype:\nvoid osg::MatrixList::clear()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::MatrixList* self=(Luna< osg::MatrixList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::MatrixList::clear(). Got : '%s'\n%s",typeid(Luna< osg::MatrixList >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->clear();

		return 0;
	}

	// bool osg::MatrixList::empty()
	static int _bind_empty(lua_State *L) {
		if (!_lg_typecheck_empty(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::MatrixList::empty() function, expected prototype:\nbool osg::MatrixList::empty()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::MatrixList* self=(Luna< osg::MatrixList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::MatrixList::empty(). Got : '%s'\n%s",typeid(Luna< osg::MatrixList >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->empty();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int osg::MatrixList::size()
	static int _bind_size(lua_State *L) {
		if (!_lg_typecheck_size(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::MatrixList::size() function, expected prototype:\nunsigned int osg::MatrixList::size()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::MatrixList* self=(Luna< osg::MatrixList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::MatrixList::size(). Got : '%s'\n%s",typeid(Luna< osg::MatrixList >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->size();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::MatrixList::resize(unsigned int arg1)
	static int _bind_resize(lua_State *L) {
		if (!_lg_typecheck_resize(L)) {
			luaL_error(L, "luna typecheck failed in void osg::MatrixList::resize(unsigned int arg1) function, expected prototype:\nvoid osg::MatrixList::resize(unsigned int arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int arg1=(unsigned int)lua_tointeger(L,2);

		osg::MatrixList* self=(Luna< osg::MatrixList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::MatrixList::resize(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::MatrixList >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->resize(arg1);

		return 0;
	}

	// void osg::MatrixList::pop_back()
	static int _bind_pop_back(lua_State *L) {
		if (!_lg_typecheck_pop_back(L)) {
			luaL_error(L, "luna typecheck failed in void osg::MatrixList::pop_back() function, expected prototype:\nvoid osg::MatrixList::pop_back()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::MatrixList* self=(Luna< osg::MatrixList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::MatrixList::pop_back(). Got : '%s'\n%s",typeid(Luna< osg::MatrixList >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->pop_back();

		return 0;
	}

	// void osg::MatrixList::push_back(osg::Matrixd arg1)
	static int _bind_push_back(lua_State *L) {
		if (!_lg_typecheck_push_back(L)) {
			luaL_error(L, "luna typecheck failed in void osg::MatrixList::push_back(osg::Matrixd arg1) function, expected prototype:\nvoid osg::MatrixList::push_back(osg::Matrixd arg1)\nClass arguments details:\narg 1 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Matrixd* arg1_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg arg1 in osg::MatrixList::push_back function");
		}
		osg::Matrixd arg1=*arg1_ptr;

		osg::MatrixList* self=(Luna< osg::MatrixList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::MatrixList::push_back(osg::Matrixd). Got : '%s'\n%s",typeid(Luna< osg::MatrixList >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->push_back(arg1);

		return 0;
	}


	// Operator binds:
	// osg::Matrixd osg::MatrixList::operator[](unsigned int arg1)
	static int _bind_op_index(lua_State *L) {
		if (!_lg_typecheck_op_index(L)) {
			luaL_error(L, "luna typecheck failed in osg::Matrixd osg::MatrixList::operator[](unsigned int arg1) function, expected prototype:\nosg::Matrixd osg::MatrixList::operator[](unsigned int arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int arg1=(unsigned int)lua_tointeger(L,2);

		osg::MatrixList* self=(Luna< osg::MatrixList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Matrixd osg::MatrixList::operator[](unsigned int). Got : '%s'\n%s",typeid(Luna< osg::MatrixList >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Matrixd stack_lret = self->operator[](arg1);
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}


};

osg::MatrixList* LunaTraits< osg::MatrixList >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_MatrixList::_bind_ctor(L);
}

void LunaTraits< osg::MatrixList >::_bind_dtor(osg::MatrixList* obj) {
	delete obj;
}

const char LunaTraits< osg::MatrixList >::className[] = "MatrixList";
const char LunaTraits< osg::MatrixList >::fullName[] = "osg::MatrixList";
const char LunaTraits< osg::MatrixList >::moduleName[] = "osg";
const char* LunaTraits< osg::MatrixList >::parents[] = {0};
const int LunaTraits< osg::MatrixList >::hash = 63553411;
const int LunaTraits< osg::MatrixList >::uniqueIDs[] = {63553411,0};

luna_RegType LunaTraits< osg::MatrixList >::methods[] = {
	{"assign", &luna_wrapper_osg_MatrixList::_bind_assign},
	{"at", &luna_wrapper_osg_MatrixList::_bind_at},
	{"back", &luna_wrapper_osg_MatrixList::_bind_back},
	{"front", &luna_wrapper_osg_MatrixList::_bind_front},
	{"clear", &luna_wrapper_osg_MatrixList::_bind_clear},
	{"empty", &luna_wrapper_osg_MatrixList::_bind_empty},
	{"size", &luna_wrapper_osg_MatrixList::_bind_size},
	{"resize", &luna_wrapper_osg_MatrixList::_bind_resize},
	{"pop_back", &luna_wrapper_osg_MatrixList::_bind_pop_back},
	{"push_back", &luna_wrapper_osg_MatrixList::_bind_push_back},
	{"op_index", &luna_wrapper_osg_MatrixList::_bind_op_index},
	{"dynCast", &luna_wrapper_osg_MatrixList::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_MatrixList::_bind___eq},
	{"fromVoid", &luna_wrapper_osg_MatrixList::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_MatrixList::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< osg::MatrixList >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::MatrixList >::enumValues[] = {
	{0,0}
};


