#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_NodeVisitor_DatabaseRequestHandler.h>

class luna_wrapper_osg_NodeVisitor_DatabaseRequestHandler {
public:
	typedef Luna< osg::NodeVisitor::DatabaseRequestHandler > luna_t;

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

		osg::NodeVisitor::DatabaseRequestHandler* self= (osg::NodeVisitor::DatabaseRequestHandler*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::NodeVisitor::DatabaseRequestHandler >::push(L,self,false);
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
		//osg::NodeVisitor::DatabaseRequestHandler* ptr= dynamic_cast< osg::NodeVisitor::DatabaseRequestHandler* >(Luna< osg::Referenced >::check(L,1));
		osg::NodeVisitor::DatabaseRequestHandler* ptr= luna_caster< osg::Referenced, osg::NodeVisitor::DatabaseRequestHandler >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::NodeVisitor::DatabaseRequestHandler >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_requestNodeFile(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<6 || luatop>7 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,52841328) ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,50169651)) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,84922662) ) return false;
		if( luatop>6 && (lua_isnil(L,7)==0 && !Luna<void>::has_uniqueid(L,7,50169651)) ) return false;
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
	// osg::NodeVisitor::DatabaseRequestHandler::DatabaseRequestHandler(lua_Table * data)
	static osg::NodeVisitor::DatabaseRequestHandler* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in osg::NodeVisitor::DatabaseRequestHandler::DatabaseRequestHandler(lua_Table * data) function, expected prototype:\nosg::NodeVisitor::DatabaseRequestHandler::DatabaseRequestHandler(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_NodeVisitor_DatabaseRequestHandler(L,NULL);
	}


	// Function binds:
	// void osg::NodeVisitor::DatabaseRequestHandler::requestNodeFile(const std::string & fileName, osg::NodePath & nodePath, float priority, const osg::FrameStamp * framestamp, osg::ref_ptr< osg::Referenced > & databaseRequest, const osg::Referenced * options = 0)
	static int _bind_requestNodeFile(lua_State *L) {
		if (!_lg_typecheck_requestNodeFile(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::DatabaseRequestHandler::requestNodeFile(const std::string & fileName, osg::NodePath & nodePath, float priority, const osg::FrameStamp * framestamp, osg::ref_ptr< osg::Referenced > & databaseRequest, const osg::Referenced * options = 0) function, expected prototype:\nvoid osg::NodeVisitor::DatabaseRequestHandler::requestNodeFile(const std::string & fileName, osg::NodePath & nodePath, float priority, const osg::FrameStamp * framestamp, osg::ref_ptr< osg::Referenced > & databaseRequest, const osg::Referenced * options = 0)\nClass arguments details:\narg 2 ID = 52841328\narg 4 ID = 50169651\narg 5 ID = [unknown]\narg 6 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::string fileName(lua_tostring(L,2),lua_objlen(L,2));
		osg::NodePath* nodePath_ptr=(Luna< osg::NodePath >::check(L,3));
		if( !nodePath_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nodePath in osg::NodeVisitor::DatabaseRequestHandler::requestNodeFile function");
		}
		osg::NodePath & nodePath=*nodePath_ptr;
		float priority=(float)lua_tonumber(L,4);
		const osg::FrameStamp* framestamp=(Luna< osg::Referenced >::checkSubType< osg::FrameStamp >(L,5));
		osg::ref_ptr< osg::Referenced > databaseRequest = dynamic_cast< osg::Referenced* >(Luna< osg::Referenced >::check(L,6));
		const osg::Referenced* options=luatop>6 ? (Luna< osg::Referenced >::check(L,7)) : (const osg::Referenced*)0;

		osg::NodeVisitor::DatabaseRequestHandler* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor::DatabaseRequestHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::DatabaseRequestHandler::requestNodeFile(const std::string &, osg::NodePath &, float, const osg::FrameStamp *, osg::ref_ptr< osg::Referenced > &, const osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->requestNodeFile(fileName, nodePath, priority, framestamp, databaseRequest, options);

		return 0;
	}

	// void osg::NodeVisitor::DatabaseRequestHandler::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::DatabaseRequestHandler::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::NodeVisitor::DatabaseRequestHandler::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::NodeVisitor::DatabaseRequestHandler* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor::DatabaseRequestHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::DatabaseRequestHandler::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DatabaseRequestHandler::setThreadSafeRefUnref(threadSafe);

		return 0;
	}


	// Operator binds:

};

osg::NodeVisitor::DatabaseRequestHandler* LunaTraits< osg::NodeVisitor::DatabaseRequestHandler >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_NodeVisitor_DatabaseRequestHandler::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void osg::NodeVisitor::DatabaseRequestHandler::requestNodeFile(const std::string & fileName, osg::NodePath & nodePath, float priority, const osg::FrameStamp * framestamp, osg::ref_ptr< osg::Referenced > & databaseRequest, const osg::Referenced * options = 0)
}

void LunaTraits< osg::NodeVisitor::DatabaseRequestHandler >::_bind_dtor(osg::NodeVisitor::DatabaseRequestHandler* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::NodeVisitor::DatabaseRequestHandler >::className[] = "NodeVisitor_DatabaseRequestHandler";
const char LunaTraits< osg::NodeVisitor::DatabaseRequestHandler >::fullName[] = "osg::NodeVisitor::DatabaseRequestHandler";
const char LunaTraits< osg::NodeVisitor::DatabaseRequestHandler >::moduleName[] = "osg";
const char* LunaTraits< osg::NodeVisitor::DatabaseRequestHandler >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::NodeVisitor::DatabaseRequestHandler >::hash = 43135693;
const int LunaTraits< osg::NodeVisitor::DatabaseRequestHandler >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::NodeVisitor::DatabaseRequestHandler >::methods[] = {
	{"requestNodeFile", &luna_wrapper_osg_NodeVisitor_DatabaseRequestHandler::_bind_requestNodeFile},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_NodeVisitor_DatabaseRequestHandler::_bind_base_setThreadSafeRefUnref},
	{"fromVoid", &luna_wrapper_osg_NodeVisitor_DatabaseRequestHandler::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_NodeVisitor_DatabaseRequestHandler::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_NodeVisitor_DatabaseRequestHandler::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::NodeVisitor::DatabaseRequestHandler >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_NodeVisitor_DatabaseRequestHandler::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::NodeVisitor::DatabaseRequestHandler >::enumValues[] = {
	{0,0}
};


