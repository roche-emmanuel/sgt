#include <plug_common.h>

#include <luna/wrappers/wrapper_IChildNode.h>

class luna_wrapper_IChildNode {
public:
	typedef Luna< IChildNode > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		IChildNode* self=(Luna< IChildNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<IChildNode,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,83803782) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(IChildNode*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		IChildNode* rhs =(Luna< IChildNode >::check(L,2));
		IChildNode* self=(Luna< IChildNode >::check(L,1));
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

		IChildNode* self= (IChildNode*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< IChildNode >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,83803782) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< IChildNode >::check(L,1));
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

		IChildNode* self=(Luna< IChildNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("IChildNode");
		
		return luna_dynamicCast(L,converters,"IChildNode",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_node(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_relation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_relationString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_edgeLabels(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// IChildNode::IChildNode(lua_Table * data)
	static IChildNode* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in IChildNode::IChildNode(lua_Table * data) function, expected prototype:\nIChildNode::IChildNode(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_IChildNode(L,NULL);
	}


	// Function binds:
	// INode * IChildNode::node() const
	static int _bind_node(lua_State *L) {
		if (!_lg_typecheck_node(L)) {
			luaL_error(L, "luna typecheck failed in INode * IChildNode::node() const function, expected prototype:\nINode * IChildNode::node() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IChildNode* self=(Luna< IChildNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call INode * IChildNode::node() const. Got : '%s'\n%s",typeid(Luna< IChildNode >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		INode * lret = self->node();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< INode >::push(L,lret,false);

		return 1;
	}

	// IChildNode::NodeRelation IChildNode::relation() const
	static int _bind_relation(lua_State *L) {
		if (!_lg_typecheck_relation(L)) {
			luaL_error(L, "luna typecheck failed in IChildNode::NodeRelation IChildNode::relation() const function, expected prototype:\nIChildNode::NodeRelation IChildNode::relation() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IChildNode* self=(Luna< IChildNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call IChildNode::NodeRelation IChildNode::relation() const. Got : '%s'\n%s",typeid(Luna< IChildNode >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IChildNode::NodeRelation lret = self->relation();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const IString * IChildNode::relationString() const
	static int _bind_relationString(lua_State *L) {
		if (!_lg_typecheck_relationString(L)) {
			luaL_error(L, "luna typecheck failed in const IString * IChildNode::relationString() const function, expected prototype:\nconst IString * IChildNode::relationString() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IChildNode* self=(Luna< IChildNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const IString * IChildNode::relationString() const. Got : '%s'\n%s",typeid(Luna< IChildNode >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const IString * lret = self->relationString();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	// IEdgeLabelIterator * IChildNode::edgeLabels() const
	static int _bind_edgeLabels(lua_State *L) {
		if (!_lg_typecheck_edgeLabels(L)) {
			luaL_error(L, "luna typecheck failed in IEdgeLabelIterator * IChildNode::edgeLabels() const function, expected prototype:\nIEdgeLabelIterator * IChildNode::edgeLabels() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IChildNode* self=(Luna< IChildNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call IEdgeLabelIterator * IChildNode::edgeLabels() const. Got : '%s'\n%s",typeid(Luna< IChildNode >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IEdgeLabelIterator * lret = self->edgeLabels();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IEdgeLabelIterator >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

IChildNode* LunaTraits< IChildNode >::_bind_ctor(lua_State *L) {
	return luna_wrapper_IChildNode::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// INode * IChildNode::node() const
	// IChildNode::NodeRelation IChildNode::relation() const
	// const IString * IChildNode::relationString() const
	// IEdgeLabelIterator * IChildNode::edgeLabels() const
}

void LunaTraits< IChildNode >::_bind_dtor(IChildNode* obj) {
	delete obj;
}

const char LunaTraits< IChildNode >::className[] = "IChildNode";
const char LunaTraits< IChildNode >::fullName[] = "IChildNode";
const char LunaTraits< IChildNode >::moduleName[] = "doxmlparser";
const char* LunaTraits< IChildNode >::parents[] = {0};
const int LunaTraits< IChildNode >::hash = 83803782;
const int LunaTraits< IChildNode >::uniqueIDs[] = {83803782,0};

luna_RegType LunaTraits< IChildNode >::methods[] = {
	{"node", &luna_wrapper_IChildNode::_bind_node},
	{"relation", &luna_wrapper_IChildNode::_bind_relation},
	{"relationString", &luna_wrapper_IChildNode::_bind_relationString},
	{"edgeLabels", &luna_wrapper_IChildNode::_bind_edgeLabels},
	{"dynCast", &luna_wrapper_IChildNode::_bind_dynCast},
	{"__eq", &luna_wrapper_IChildNode::_bind___eq},
	{"fromVoid", &luna_wrapper_IChildNode::_bind_fromVoid},
	{"asVoid", &luna_wrapper_IChildNode::_bind_asVoid},
	{"getTable", &luna_wrapper_IChildNode::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< IChildNode >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< IChildNode >::enumValues[] = {
	{"PublicInheritance", IChildNode::PublicInheritance},
	{"ProtectedInheritance", IChildNode::ProtectedInheritance},
	{"PrivateInheritance", IChildNode::PrivateInheritance},
	{"Usage", IChildNode::Usage},
	{"TemplateInstance", IChildNode::TemplateInstance},
	{0,0}
};


