#include <plug_common.h>

class luna_wrapper_osg_KdTree_KdNode {
public:
	typedef Luna< osg::KdTree::KdNode > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,72782769) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::KdTree::KdNode*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::KdTree::KdNode* rhs =(Luna< osg::KdTree::KdNode >::check(L,2));
		osg::KdTree::KdNode* self=(Luna< osg::KdTree::KdNode >::check(L,1));
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

		osg::KdTree::KdNode* self= (osg::KdTree::KdNode*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::KdTree::KdNode >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,72782769) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osg::KdTree::KdNode >::check(L,1));
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

		osg::KdTree::KdNode* self=(Luna< osg::KdTree::KdNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::KdTree::KdNode");
		
		return luna_dynamicCast(L,converters,"osg::KdTree::KdNode",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getBb(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFirst(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSecond(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setBb(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,41227270) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFirst(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSecond(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::KdTree::KdNode::KdNode()
	static osg::KdTree::KdNode* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::KdTree::KdNode::KdNode() function, expected prototype:\nosg::KdTree::KdNode::KdNode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::KdTree::KdNode();
	}

	// osg::KdTree::KdNode::KdNode(int f, int s)
	static osg::KdTree::KdNode* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::KdTree::KdNode::KdNode(int f, int s) function, expected prototype:\nosg::KdTree::KdNode::KdNode(int f, int s)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int f=(int)lua_tointeger(L,1);
		int s=(int)lua_tointeger(L,2);

		return new osg::KdTree::KdNode(f, s);
	}

	// Overload binder for osg::KdTree::KdNode::KdNode
	static osg::KdTree::KdNode* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function KdNode, cannot match any of the overloads for function KdNode:\n  KdNode()\n  KdNode(int, int)\n");
		return NULL;
	}


	// Function binds:
	// osg::BoundingBoxd osg::KdTree::KdNode::bb()
	static int _bind_getBb(lua_State *L) {
		if (!_lg_typecheck_getBb(L)) {
			luaL_error(L, "luna typecheck failed in osg::BoundingBoxd osg::KdTree::KdNode::bb() function, expected prototype:\nosg::BoundingBoxd osg::KdTree::KdNode::bb()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::KdTree::KdNode* self=(Luna< osg::KdTree::KdNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::BoundingBoxd osg::KdTree::KdNode::bb(). Got : '%s'\n%s",typeid(Luna< osg::KdTree::KdNode >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::BoundingBoxd* lret = &self->bb;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingBoxd >::push(L,lret,false);

		return 1;
	}

	// int osg::KdTree::KdNode::first()
	static int _bind_getFirst(lua_State *L) {
		if (!_lg_typecheck_getFirst(L)) {
			luaL_error(L, "luna typecheck failed in int osg::KdTree::KdNode::first() function, expected prototype:\nint osg::KdTree::KdNode::first()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::KdTree::KdNode* self=(Luna< osg::KdTree::KdNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::KdTree::KdNode::first(). Got : '%s'\n%s",typeid(Luna< osg::KdTree::KdNode >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->first;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::KdTree::KdNode::second()
	static int _bind_getSecond(lua_State *L) {
		if (!_lg_typecheck_getSecond(L)) {
			luaL_error(L, "luna typecheck failed in int osg::KdTree::KdNode::second() function, expected prototype:\nint osg::KdTree::KdNode::second()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::KdTree::KdNode* self=(Luna< osg::KdTree::KdNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::KdTree::KdNode::second(). Got : '%s'\n%s",typeid(Luna< osg::KdTree::KdNode >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->second;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::KdTree::KdNode::bb(osg::BoundingBoxd value)
	static int _bind_setBb(lua_State *L) {
		if (!_lg_typecheck_setBb(L)) {
			luaL_error(L, "luna typecheck failed in void osg::KdTree::KdNode::bb(osg::BoundingBoxd value) function, expected prototype:\nvoid osg::KdTree::KdNode::bb(osg::BoundingBoxd value)\nClass arguments details:\narg 1 ID = 82744897\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::BoundingBoxd* value_ptr=(Luna< osg::BoundingBoxImpl< osg::Vec3d > >::checkSubType< osg::BoundingBoxd >(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osg::KdTree::KdNode::bb function");
		}
		osg::BoundingBoxd value=*value_ptr;

		osg::KdTree::KdNode* self=(Luna< osg::KdTree::KdNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::KdTree::KdNode::bb(osg::BoundingBoxd). Got : '%s'\n%s",typeid(Luna< osg::KdTree::KdNode >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->bb = value;

		return 0;
	}

	// void osg::KdTree::KdNode::first(int value)
	static int _bind_setFirst(lua_State *L) {
		if (!_lg_typecheck_setFirst(L)) {
			luaL_error(L, "luna typecheck failed in void osg::KdTree::KdNode::first(int value) function, expected prototype:\nvoid osg::KdTree::KdNode::first(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		osg::KdTree::KdNode* self=(Luna< osg::KdTree::KdNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::KdTree::KdNode::first(int). Got : '%s'\n%s",typeid(Luna< osg::KdTree::KdNode >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->first = value;

		return 0;
	}

	// void osg::KdTree::KdNode::second(int value)
	static int _bind_setSecond(lua_State *L) {
		if (!_lg_typecheck_setSecond(L)) {
			luaL_error(L, "luna typecheck failed in void osg::KdTree::KdNode::second(int value) function, expected prototype:\nvoid osg::KdTree::KdNode::second(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		osg::KdTree::KdNode* self=(Luna< osg::KdTree::KdNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::KdTree::KdNode::second(int). Got : '%s'\n%s",typeid(Luna< osg::KdTree::KdNode >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->second = value;

		return 0;
	}


	// Operator binds:

};

osg::KdTree::KdNode* LunaTraits< osg::KdTree::KdNode >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_KdTree_KdNode::_bind_ctor(L);
}

void LunaTraits< osg::KdTree::KdNode >::_bind_dtor(osg::KdTree::KdNode* obj) {
	delete obj;
}

const char LunaTraits< osg::KdTree::KdNode >::className[] = "KdTree_KdNode";
const char LunaTraits< osg::KdTree::KdNode >::fullName[] = "osg::KdTree::KdNode";
const char LunaTraits< osg::KdTree::KdNode >::moduleName[] = "osg";
const char* LunaTraits< osg::KdTree::KdNode >::parents[] = {0};
const int LunaTraits< osg::KdTree::KdNode >::hash = 72782769;
const int LunaTraits< osg::KdTree::KdNode >::uniqueIDs[] = {72782769,0};

luna_RegType LunaTraits< osg::KdTree::KdNode >::methods[] = {
	{"getBb", &luna_wrapper_osg_KdTree_KdNode::_bind_getBb},
	{"getFirst", &luna_wrapper_osg_KdTree_KdNode::_bind_getFirst},
	{"getSecond", &luna_wrapper_osg_KdTree_KdNode::_bind_getSecond},
	{"setBb", &luna_wrapper_osg_KdTree_KdNode::_bind_setBb},
	{"setFirst", &luna_wrapper_osg_KdTree_KdNode::_bind_setFirst},
	{"setSecond", &luna_wrapper_osg_KdTree_KdNode::_bind_setSecond},
	{"dynCast", &luna_wrapper_osg_KdTree_KdNode::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_KdTree_KdNode::_bind___eq},
	{"fromVoid", &luna_wrapper_osg_KdTree_KdNode::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_KdTree_KdNode::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< osg::KdTree::KdNode >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::KdTree::KdNode >::enumValues[] = {
	{0,0}
};


