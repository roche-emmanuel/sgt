#include <plug_common.h>

#include <luna/wrappers/wrapper_INode.h>

class luna_wrapper_INode {
public:
	typedef Luna< INode > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		INode* self=(Luna< INode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<INode,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,69850603) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(INode*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		INode* rhs =(Luna< INode >::check(L,2));
		INode* self=(Luna< INode >::check(L,1));
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

		INode* self= (INode*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< INode >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,69850603) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< INode >::check(L,1));
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

		INode* self=(Luna< INode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("INode");
		
		return luna_dynamicCast(L,converters,"INode",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_id(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_label(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_linkId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_children(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// INode::INode(lua_Table * data)
	static INode* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in INode::INode(lua_Table * data) function, expected prototype:\nINode::INode(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_INode(L,NULL);
	}


	// Function binds:
	// const IString * INode::id() const
	static int _bind_id(lua_State *L) {
		if (!_lg_typecheck_id(L)) {
			luaL_error(L, "luna typecheck failed in const IString * INode::id() const function, expected prototype:\nconst IString * INode::id() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		INode* self=(Luna< INode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const IString * INode::id() const. Got : '%s'\n%s",typeid(Luna< INode >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const IString * lret = self->id();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	// const IString * INode::label() const
	static int _bind_label(lua_State *L) {
		if (!_lg_typecheck_label(L)) {
			luaL_error(L, "luna typecheck failed in const IString * INode::label() const function, expected prototype:\nconst IString * INode::label() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		INode* self=(Luna< INode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const IString * INode::label() const. Got : '%s'\n%s",typeid(Luna< INode >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const IString * lret = self->label();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	// const IString * INode::linkId() const
	static int _bind_linkId(lua_State *L) {
		if (!_lg_typecheck_linkId(L)) {
			luaL_error(L, "luna typecheck failed in const IString * INode::linkId() const function, expected prototype:\nconst IString * INode::linkId() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		INode* self=(Luna< INode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const IString * INode::linkId() const. Got : '%s'\n%s",typeid(Luna< INode >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const IString * lret = self->linkId();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	// IChildNodeIterator * INode::children() const
	static int _bind_children(lua_State *L) {
		if (!_lg_typecheck_children(L)) {
			luaL_error(L, "luna typecheck failed in IChildNodeIterator * INode::children() const function, expected prototype:\nIChildNodeIterator * INode::children() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		INode* self=(Luna< INode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call IChildNodeIterator * INode::children() const. Got : '%s'\n%s",typeid(Luna< INode >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IChildNodeIterator * lret = self->children();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IChildNodeIterator >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

INode* LunaTraits< INode >::_bind_ctor(lua_State *L) {
	return luna_wrapper_INode::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// const IString * INode::id() const
	// const IString * INode::label() const
	// const IString * INode::linkId() const
	// IChildNodeIterator * INode::children() const
}

void LunaTraits< INode >::_bind_dtor(INode* obj) {
	delete obj;
}

const char LunaTraits< INode >::className[] = "INode";
const char LunaTraits< INode >::fullName[] = "INode";
const char LunaTraits< INode >::moduleName[] = "doxmlparser";
const char* LunaTraits< INode >::parents[] = {0};
const int LunaTraits< INode >::hash = 69850603;
const int LunaTraits< INode >::uniqueIDs[] = {69850603,0};

luna_RegType LunaTraits< INode >::methods[] = {
	{"id", &luna_wrapper_INode::_bind_id},
	{"label", &luna_wrapper_INode::_bind_label},
	{"linkId", &luna_wrapper_INode::_bind_linkId},
	{"children", &luna_wrapper_INode::_bind_children},
	{"dynCast", &luna_wrapper_INode::_bind_dynCast},
	{"__eq", &luna_wrapper_INode::_bind___eq},
	{"fromVoid", &luna_wrapper_INode::_bind_fromVoid},
	{"asVoid", &luna_wrapper_INode::_bind_asVoid},
	{"getTable", &luna_wrapper_INode::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< INode >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< INode >::enumValues[] = {
	{0,0}
};


