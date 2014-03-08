#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_ProxyNode.h>

class luna_wrapper_osg_ProxyNode {
public:
	typedef Luna< osg::ProxyNode > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<osg::Referenced,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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

		osg::ProxyNode* self= (osg::ProxyNode*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::ProxyNode >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		//osg::ProxyNode* ptr= dynamic_cast< osg::ProxyNode* >(Luna< osg::Referenced >::check(L,1));
		osg::ProxyNode* ptr= luna_caster< osg::Referenced, osg::ProxyNode >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::ProxyNode >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::ProxyNode* LunaTraits< osg::ProxyNode >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::ProxyNode >::_bind_dtor(osg::ProxyNode* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::ProxyNode >::className[] = "ProxyNode";
const char LunaTraits< osg::ProxyNode >::fullName[] = "osg::ProxyNode";
const char LunaTraits< osg::ProxyNode >::moduleName[] = "osg";
const char* LunaTraits< osg::ProxyNode >::parents[] = {"osg.Group", 0};
const int LunaTraits< osg::ProxyNode >::hash = 1600235;
const int LunaTraits< osg::ProxyNode >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::ProxyNode >::methods[] = {
	{"fromVoid", &luna_wrapper_osg_ProxyNode::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_ProxyNode::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_ProxyNode::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ProxyNode >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_ProxyNode::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ProxyNode >::enumValues[] = {
	{"USE_BOUNDING_SPHERE_CENTER", osg::ProxyNode::USE_BOUNDING_SPHERE_CENTER},
	{"USER_DEFINED_CENTER", osg::ProxyNode::USER_DEFINED_CENTER},
	{"UNION_OF_BOUNDING_SPHERE_AND_USER_DEFINED", osg::ProxyNode::UNION_OF_BOUNDING_SPHERE_AND_USER_DEFINED},
	{"LOAD_IMMEDIATELY", osg::ProxyNode::LOAD_IMMEDIATELY},
	{"DEFER_LOADING_TO_DATABASE_PAGER", osg::ProxyNode::DEFER_LOADING_TO_DATABASE_PAGER},
	{"NO_AUTOMATIC_LOADING", osg::ProxyNode::NO_AUTOMATIC_LOADING},
	{0,0}
};


