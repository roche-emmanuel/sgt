#include <plug_common.h>

#include <luna/wrappers/wrapper_osgDB_XmlNode.h>

class luna_wrapper_osgDB_XmlNode {
public:
	typedef Luna< osgDB::XmlNode > luna_t;

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

		osgDB::XmlNode* self= (osgDB::XmlNode*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgDB::XmlNode >::push(L,self,false);
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
		//osgDB::XmlNode* ptr= dynamic_cast< osgDB::XmlNode* >(Luna< osg::Referenced >::check(L,1));
		osgDB::XmlNode* ptr= luna_caster< osg::Referenced, osgDB::XmlNode >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgDB::XmlNode >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_getTrimmedContents(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_write(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2993706) ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getContents(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getProperties(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getChildren(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setContents(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setProperties(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,29293820) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setChildren(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,42497827) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgDB::XmlNode::XmlNode()
	static osgDB::XmlNode* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::XmlNode::XmlNode() function, expected prototype:\nosgDB::XmlNode::XmlNode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osgDB::XmlNode();
	}

	// osgDB::XmlNode::XmlNode(lua_Table * data)
	static osgDB::XmlNode* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::XmlNode::XmlNode(lua_Table * data) function, expected prototype:\nosgDB::XmlNode::XmlNode(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgDB_XmlNode(L,NULL);
	}

	// Overload binder for osgDB::XmlNode::XmlNode
	static osgDB::XmlNode* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function XmlNode, cannot match any of the overloads for function XmlNode:\n  XmlNode()\n  XmlNode(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// std::string osgDB::XmlNode::getTrimmedContents() const
	static int _bind_getTrimmedContents(lua_State *L) {
		if (!_lg_typecheck_getTrimmedContents(L)) {
			luaL_error(L, "luna typecheck failed in std::string osgDB::XmlNode::getTrimmedContents() const function, expected prototype:\nstd::string osgDB::XmlNode::getTrimmedContents() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::XmlNode* self=Luna< osg::Referenced >::checkSubType< osgDB::XmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call std::string osgDB::XmlNode::getTrimmedContents() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		std::string lret = self->getTrimmedContents();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool osgDB::XmlNode::write(std::ostream & fout, const std::string & indent = "") const
	static int _bind_write(lua_State *L) {
		if (!_lg_typecheck_write(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::XmlNode::write(std::ostream & fout, const std::string & indent = \"\") const function, expected prototype:\nbool osgDB::XmlNode::write(std::ostream & fout, const std::string & indent = \"\") const\nClass arguments details:\narg 1 ID = 2993706\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::ostream* fout_ptr=(Luna< std::ostream >::check(L,2));
		if( !fout_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg fout in osgDB::XmlNode::write function");
		}
		std::ostream & fout=*fout_ptr;
		std::string indent(lua_tostring(L,3),lua_objlen(L,3));

		osgDB::XmlNode* self=Luna< osg::Referenced >::checkSubType< osgDB::XmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::XmlNode::write(std::ostream &, const std::string &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->write(fout, indent);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// osgDB::XmlNode::NodeType osgDB::XmlNode::type()
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::XmlNode::NodeType osgDB::XmlNode::type() function, expected prototype:\nosgDB::XmlNode::NodeType osgDB::XmlNode::type()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::XmlNode* self=Luna< osg::Referenced >::checkSubType< osgDB::XmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::XmlNode::NodeType osgDB::XmlNode::type(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::XmlNode::NodeType lret = self->type;
		lua_pushnumber(L,lret);

		return 1;
	}

	// std::string osgDB::XmlNode::name()
	static int _bind_getName(lua_State *L) {
		if (!_lg_typecheck_getName(L)) {
			luaL_error(L, "luna typecheck failed in std::string osgDB::XmlNode::name() function, expected prototype:\nstd::string osgDB::XmlNode::name()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::XmlNode* self=Luna< osg::Referenced >::checkSubType< osgDB::XmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call std::string osgDB::XmlNode::name(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		std::string lret = self->name;
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// std::string osgDB::XmlNode::contents()
	static int _bind_getContents(lua_State *L) {
		if (!_lg_typecheck_getContents(L)) {
			luaL_error(L, "luna typecheck failed in std::string osgDB::XmlNode::contents() function, expected prototype:\nstd::string osgDB::XmlNode::contents()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::XmlNode* self=Luna< osg::Referenced >::checkSubType< osgDB::XmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call std::string osgDB::XmlNode::contents(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		std::string lret = self->contents;
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// osgDB::XmlNode::Properties osgDB::XmlNode::properties()
	static int _bind_getProperties(lua_State *L) {
		if (!_lg_typecheck_getProperties(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::XmlNode::Properties osgDB::XmlNode::properties() function, expected prototype:\nosgDB::XmlNode::Properties osgDB::XmlNode::properties()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::XmlNode* self=Luna< osg::Referenced >::checkSubType< osgDB::XmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::XmlNode::Properties osgDB::XmlNode::properties(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::XmlNode::Properties* lret = &self->properties;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::XmlNode::Properties >::push(L,lret,false);

		return 1;
	}

	// osgDB::XmlNode::Children osgDB::XmlNode::children()
	static int _bind_getChildren(lua_State *L) {
		if (!_lg_typecheck_getChildren(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::XmlNode::Children osgDB::XmlNode::children() function, expected prototype:\nosgDB::XmlNode::Children osgDB::XmlNode::children()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::XmlNode* self=Luna< osg::Referenced >::checkSubType< osgDB::XmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::XmlNode::Children osgDB::XmlNode::children(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::XmlNode::Children* lret = &self->children;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::XmlNode::Children >::push(L,lret,false);

		return 1;
	}

	// void osgDB::XmlNode::type(osgDB::XmlNode::NodeType value)
	static int _bind_setType(lua_State *L) {
		if (!_lg_typecheck_setType(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::XmlNode::type(osgDB::XmlNode::NodeType value) function, expected prototype:\nvoid osgDB::XmlNode::type(osgDB::XmlNode::NodeType value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::XmlNode::NodeType value=(osgDB::XmlNode::NodeType)lua_tointeger(L,2);

		osgDB::XmlNode* self=Luna< osg::Referenced >::checkSubType< osgDB::XmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::XmlNode::type(osgDB::XmlNode::NodeType). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->type = value;

		return 0;
	}

	// void osgDB::XmlNode::name(std::string value)
	static int _bind_setName(lua_State *L) {
		if (!_lg_typecheck_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::XmlNode::name(std::string value) function, expected prototype:\nvoid osgDB::XmlNode::name(std::string value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string value(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::XmlNode* self=Luna< osg::Referenced >::checkSubType< osgDB::XmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::XmlNode::name(std::string). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->name = value;

		return 0;
	}

	// void osgDB::XmlNode::contents(std::string value)
	static int _bind_setContents(lua_State *L) {
		if (!_lg_typecheck_setContents(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::XmlNode::contents(std::string value) function, expected prototype:\nvoid osgDB::XmlNode::contents(std::string value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string value(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::XmlNode* self=Luna< osg::Referenced >::checkSubType< osgDB::XmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::XmlNode::contents(std::string). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->contents = value;

		return 0;
	}

	// void osgDB::XmlNode::properties(osgDB::XmlNode::Properties value)
	static int _bind_setProperties(lua_State *L) {
		if (!_lg_typecheck_setProperties(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::XmlNode::properties(osgDB::XmlNode::Properties value) function, expected prototype:\nvoid osgDB::XmlNode::properties(osgDB::XmlNode::Properties value)\nClass arguments details:\narg 1 ID = 73311934\n\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::XmlNode::Properties* value_ptr=(Luna< std::map< std::string, std::string > >::checkSubType< osgDB::XmlNode::Properties >(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgDB::XmlNode::properties function");
		}
		osgDB::XmlNode::Properties value=*value_ptr;

		osgDB::XmlNode* self=Luna< osg::Referenced >::checkSubType< osgDB::XmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::XmlNode::properties(osgDB::XmlNode::Properties). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->properties = value;

		return 0;
	}

	// void osgDB::XmlNode::children(osgDB::XmlNode::Children value)
	static int _bind_setChildren(lua_State *L) {
		if (!_lg_typecheck_setChildren(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::XmlNode::children(osgDB::XmlNode::Children value) function, expected prototype:\nvoid osgDB::XmlNode::children(osgDB::XmlNode::Children value)\nClass arguments details:\narg 1 ID = 5928633\n\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::XmlNode::Children* value_ptr=(Luna< std::vector< osg::ref_ptr< osgDB::XmlNode > > >::checkSubType< osgDB::XmlNode::Children >(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgDB::XmlNode::children function");
		}
		osgDB::XmlNode::Children value=*value_ptr;

		osgDB::XmlNode* self=Luna< osg::Referenced >::checkSubType< osgDB::XmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::XmlNode::children(osgDB::XmlNode::Children). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->children = value;

		return 0;
	}

	// void osgDB::XmlNode::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::XmlNode::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgDB::XmlNode::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgDB::XmlNode* self=Luna< osg::Referenced >::checkSubType< osgDB::XmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::XmlNode::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->XmlNode::setThreadSafeRefUnref(threadSafe);

		return 0;
	}


	// Operator binds:

};

osgDB::XmlNode* LunaTraits< osgDB::XmlNode >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgDB_XmlNode::_bind_ctor(L);
}

void LunaTraits< osgDB::XmlNode >::_bind_dtor(osgDB::XmlNode* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgDB::XmlNode >::className[] = "XmlNode";
const char LunaTraits< osgDB::XmlNode >::fullName[] = "osgDB::XmlNode";
const char LunaTraits< osgDB::XmlNode >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::XmlNode >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgDB::XmlNode >::hash = 47261633;
const int LunaTraits< osgDB::XmlNode >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgDB::XmlNode >::methods[] = {
	{"getTrimmedContents", &luna_wrapper_osgDB_XmlNode::_bind_getTrimmedContents},
	{"write", &luna_wrapper_osgDB_XmlNode::_bind_write},
	{"getType", &luna_wrapper_osgDB_XmlNode::_bind_getType},
	{"getName", &luna_wrapper_osgDB_XmlNode::_bind_getName},
	{"getContents", &luna_wrapper_osgDB_XmlNode::_bind_getContents},
	{"getProperties", &luna_wrapper_osgDB_XmlNode::_bind_getProperties},
	{"getChildren", &luna_wrapper_osgDB_XmlNode::_bind_getChildren},
	{"setType", &luna_wrapper_osgDB_XmlNode::_bind_setType},
	{"setName", &luna_wrapper_osgDB_XmlNode::_bind_setName},
	{"setContents", &luna_wrapper_osgDB_XmlNode::_bind_setContents},
	{"setProperties", &luna_wrapper_osgDB_XmlNode::_bind_setProperties},
	{"setChildren", &luna_wrapper_osgDB_XmlNode::_bind_setChildren},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgDB_XmlNode::_bind_base_setThreadSafeRefUnref},
	{"fromVoid", &luna_wrapper_osgDB_XmlNode::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgDB_XmlNode::_bind_asVoid},
	{"getTable", &luna_wrapper_osgDB_XmlNode::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::XmlNode >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgDB_XmlNode::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::XmlNode >::enumValues[] = {
	{"UNASSIGNED", osgDB::XmlNode::UNASSIGNED},
	{"ATOM", osgDB::XmlNode::ATOM},
	{"NODE", osgDB::XmlNode::NODE},
	{"GROUP", osgDB::XmlNode::GROUP},
	{"ROOT", osgDB::XmlNode::ROOT},
	{"COMMENT", osgDB::XmlNode::COMMENT},
	{"INFORMATION", osgDB::XmlNode::INFORMATION},
	{0,0}
};


