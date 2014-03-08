#include <plug_common.h>

class luna_wrapper_osg_NodePath {
public:
	typedef Luna< osg::NodePath > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,52841328) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::NodePath*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodePath* rhs =(Luna< osg::NodePath >::check(L,2));
		osg::NodePath* self=(Luna< osg::NodePath >::check(L,1));
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

		osg::NodePath* self= (osg::NodePath*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::NodePath >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,52841328) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osg::NodePath >::check(L,1));
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

		osg::NodePath* self=(Luna< osg::NodePath >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::NodePath");
		
		return luna_dynamicCast(L,converters,"osg::NodePath",name);
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
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
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

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
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
	// osg::NodePath::NodePath()
	static osg::NodePath* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in osg::NodePath::NodePath() function, expected prototype:\nosg::NodePath::NodePath()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::NodePath();
	}


	// Function binds:
	// void osg::NodePath::assign(unsigned int arg1, osg::Node * arg2)
	static int _bind_assign(lua_State *L) {
		if (!_lg_typecheck_assign(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodePath::assign(unsigned int arg1, osg::Node * arg2) function, expected prototype:\nvoid osg::NodePath::assign(unsigned int arg1, osg::Node * arg2)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int arg1=(unsigned int)lua_tointeger(L,2);
		osg::Node* arg2=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3));

		osg::NodePath* self=(Luna< osg::NodePath >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodePath::assign(unsigned int, osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::NodePath >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->assign(arg1, arg2);

		return 0;
	}

	// osg::Node * osg::NodePath::at(unsigned int arg1)
	static int _bind_at(lua_State *L) {
		if (!_lg_typecheck_at(L)) {
			luaL_error(L, "luna typecheck failed in osg::Node * osg::NodePath::at(unsigned int arg1) function, expected prototype:\nosg::Node * osg::NodePath::at(unsigned int arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int arg1=(unsigned int)lua_tointeger(L,2);

		osg::NodePath* self=(Luna< osg::NodePath >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Node * osg::NodePath::at(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::NodePath >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Node * lret = self->at(arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Node >::push(L,lret,false);

		return 1;
	}

	// osg::Node * osg::NodePath::back()
	static int _bind_back(lua_State *L) {
		if (!_lg_typecheck_back(L)) {
			luaL_error(L, "luna typecheck failed in osg::Node * osg::NodePath::back() function, expected prototype:\nosg::Node * osg::NodePath::back()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::NodePath* self=(Luna< osg::NodePath >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Node * osg::NodePath::back(). Got : '%s'\n%s",typeid(Luna< osg::NodePath >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Node * lret = self->back();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Node >::push(L,lret,false);

		return 1;
	}

	// osg::Node * osg::NodePath::front()
	static int _bind_front(lua_State *L) {
		if (!_lg_typecheck_front(L)) {
			luaL_error(L, "luna typecheck failed in osg::Node * osg::NodePath::front() function, expected prototype:\nosg::Node * osg::NodePath::front()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::NodePath* self=(Luna< osg::NodePath >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Node * osg::NodePath::front(). Got : '%s'\n%s",typeid(Luna< osg::NodePath >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Node * lret = self->front();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Node >::push(L,lret,false);

		return 1;
	}

	// void osg::NodePath::clear()
	static int _bind_clear(lua_State *L) {
		if (!_lg_typecheck_clear(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodePath::clear() function, expected prototype:\nvoid osg::NodePath::clear()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::NodePath* self=(Luna< osg::NodePath >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodePath::clear(). Got : '%s'\n%s",typeid(Luna< osg::NodePath >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->clear();

		return 0;
	}

	// bool osg::NodePath::empty()
	static int _bind_empty(lua_State *L) {
		if (!_lg_typecheck_empty(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::NodePath::empty() function, expected prototype:\nbool osg::NodePath::empty()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::NodePath* self=(Luna< osg::NodePath >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::NodePath::empty(). Got : '%s'\n%s",typeid(Luna< osg::NodePath >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->empty();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int osg::NodePath::size()
	static int _bind_size(lua_State *L) {
		if (!_lg_typecheck_size(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::NodePath::size() function, expected prototype:\nunsigned int osg::NodePath::size()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::NodePath* self=(Luna< osg::NodePath >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::NodePath::size(). Got : '%s'\n%s",typeid(Luna< osg::NodePath >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->size();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::NodePath::resize(unsigned int arg1)
	static int _bind_resize(lua_State *L) {
		if (!_lg_typecheck_resize(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodePath::resize(unsigned int arg1) function, expected prototype:\nvoid osg::NodePath::resize(unsigned int arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int arg1=(unsigned int)lua_tointeger(L,2);

		osg::NodePath* self=(Luna< osg::NodePath >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodePath::resize(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::NodePath >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->resize(arg1);

		return 0;
	}

	// void osg::NodePath::pop_back()
	static int _bind_pop_back(lua_State *L) {
		if (!_lg_typecheck_pop_back(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodePath::pop_back() function, expected prototype:\nvoid osg::NodePath::pop_back()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::NodePath* self=(Luna< osg::NodePath >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodePath::pop_back(). Got : '%s'\n%s",typeid(Luna< osg::NodePath >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->pop_back();

		return 0;
	}

	// void osg::NodePath::push_back(osg::Node * arg1)
	static int _bind_push_back(lua_State *L) {
		if (!_lg_typecheck_push_back(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodePath::push_back(osg::Node * arg1) function, expected prototype:\nvoid osg::NodePath::push_back(osg::Node * arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* arg1=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));

		osg::NodePath* self=(Luna< osg::NodePath >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodePath::push_back(osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::NodePath >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->push_back(arg1);

		return 0;
	}


	// Operator binds:
	// osg::Node * osg::NodePath::operator[](unsigned int arg1)
	static int _bind_op_index(lua_State *L) {
		if (!_lg_typecheck_op_index(L)) {
			luaL_error(L, "luna typecheck failed in osg::Node * osg::NodePath::operator[](unsigned int arg1) function, expected prototype:\nosg::Node * osg::NodePath::operator[](unsigned int arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int arg1=(unsigned int)lua_tointeger(L,2);

		osg::NodePath* self=(Luna< osg::NodePath >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Node * osg::NodePath::operator[](unsigned int). Got : '%s'\n%s",typeid(Luna< osg::NodePath >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Node * lret = self->operator[](arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Node >::push(L,lret,false);

		return 1;
	}


};

osg::NodePath* LunaTraits< osg::NodePath >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_NodePath::_bind_ctor(L);
}

void LunaTraits< osg::NodePath >::_bind_dtor(osg::NodePath* obj) {
	delete obj;
}

const char LunaTraits< osg::NodePath >::className[] = "NodePath";
const char LunaTraits< osg::NodePath >::fullName[] = "osg::NodePath";
const char LunaTraits< osg::NodePath >::moduleName[] = "osg";
const char* LunaTraits< osg::NodePath >::parents[] = {0};
const int LunaTraits< osg::NodePath >::hash = 52841328;
const int LunaTraits< osg::NodePath >::uniqueIDs[] = {52841328,0};

luna_RegType LunaTraits< osg::NodePath >::methods[] = {
	{"assign", &luna_wrapper_osg_NodePath::_bind_assign},
	{"at", &luna_wrapper_osg_NodePath::_bind_at},
	{"back", &luna_wrapper_osg_NodePath::_bind_back},
	{"front", &luna_wrapper_osg_NodePath::_bind_front},
	{"clear", &luna_wrapper_osg_NodePath::_bind_clear},
	{"empty", &luna_wrapper_osg_NodePath::_bind_empty},
	{"size", &luna_wrapper_osg_NodePath::_bind_size},
	{"resize", &luna_wrapper_osg_NodePath::_bind_resize},
	{"pop_back", &luna_wrapper_osg_NodePath::_bind_pop_back},
	{"push_back", &luna_wrapper_osg_NodePath::_bind_push_back},
	{"op_index", &luna_wrapper_osg_NodePath::_bind_op_index},
	{"dynCast", &luna_wrapper_osg_NodePath::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_NodePath::_bind___eq},
	{"fromVoid", &luna_wrapper_osg_NodePath::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_NodePath::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< osg::NodePath >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::NodePath >::enumValues[] = {
	{0,0}
};


