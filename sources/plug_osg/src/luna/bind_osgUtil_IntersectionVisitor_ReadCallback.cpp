#include <plug_common.h>

#include <luna/wrappers/wrapper_osgUtil_IntersectionVisitor_ReadCallback.h>

class luna_wrapper_osgUtil_IntersectionVisitor_ReadCallback {
public:
	typedef Luna< osgUtil::IntersectionVisitor::ReadCallback > luna_t;

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

		osgUtil::IntersectionVisitor::ReadCallback* self= (osgUtil::IntersectionVisitor::ReadCallback*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgUtil::IntersectionVisitor::ReadCallback >::push(L,self,false);
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
		//osgUtil::IntersectionVisitor::ReadCallback* ptr= dynamic_cast< osgUtil::IntersectionVisitor::ReadCallback* >(Luna< osg::Referenced >::check(L,1));
		osgUtil::IntersectionVisitor::ReadCallback* ptr= luna_caster< osg::Referenced, osgUtil::IntersectionVisitor::ReadCallback >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::IntersectionVisitor::ReadCallback >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_readNodeFile(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
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
	// osgUtil::IntersectionVisitor::ReadCallback::ReadCallback(lua_Table * data)
	static osgUtil::IntersectionVisitor::ReadCallback* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::IntersectionVisitor::ReadCallback::ReadCallback(lua_Table * data) function, expected prototype:\nosgUtil::IntersectionVisitor::ReadCallback::ReadCallback(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgUtil_IntersectionVisitor_ReadCallback(L,NULL);
	}


	// Function binds:
	// osg::Node * osgUtil::IntersectionVisitor::ReadCallback::readNodeFile(const std::string & filename)
	static int _bind_readNodeFile(lua_State *L) {
		if (!_lg_typecheck_readNodeFile(L)) {
			luaL_error(L, "luna typecheck failed in osg::Node * osgUtil::IntersectionVisitor::ReadCallback::readNodeFile(const std::string & filename) function, expected prototype:\nosg::Node * osgUtil::IntersectionVisitor::ReadCallback::readNodeFile(const std::string & filename)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string filename(lua_tostring(L,2),lua_objlen(L,2));

		osgUtil::IntersectionVisitor::ReadCallback* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor::ReadCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Node * osgUtil::IntersectionVisitor::ReadCallback::readNodeFile(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Node * lret = self->readNodeFile(filename);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Node >::push(L,lret,false);

		return 1;
	}

	// void osgUtil::IntersectionVisitor::ReadCallback::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectionVisitor::ReadCallback::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgUtil::IntersectionVisitor::ReadCallback::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgUtil::IntersectionVisitor::ReadCallback* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor::ReadCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectionVisitor::ReadCallback::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ReadCallback::setThreadSafeRefUnref(threadSafe);

		return 0;
	}


	// Operator binds:

};

osgUtil::IntersectionVisitor::ReadCallback* LunaTraits< osgUtil::IntersectionVisitor::ReadCallback >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_IntersectionVisitor_ReadCallback::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// osg::Node * osgUtil::IntersectionVisitor::ReadCallback::readNodeFile(const std::string & filename)
}

void LunaTraits< osgUtil::IntersectionVisitor::ReadCallback >::_bind_dtor(osgUtil::IntersectionVisitor::ReadCallback* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::IntersectionVisitor::ReadCallback >::className[] = "IntersectionVisitor_ReadCallback";
const char LunaTraits< osgUtil::IntersectionVisitor::ReadCallback >::fullName[] = "osgUtil::IntersectionVisitor::ReadCallback";
const char LunaTraits< osgUtil::IntersectionVisitor::ReadCallback >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::IntersectionVisitor::ReadCallback >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgUtil::IntersectionVisitor::ReadCallback >::hash = 39625449;
const int LunaTraits< osgUtil::IntersectionVisitor::ReadCallback >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::IntersectionVisitor::ReadCallback >::methods[] = {
	{"readNodeFile", &luna_wrapper_osgUtil_IntersectionVisitor_ReadCallback::_bind_readNodeFile},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgUtil_IntersectionVisitor_ReadCallback::_bind_base_setThreadSafeRefUnref},
	{"fromVoid", &luna_wrapper_osgUtil_IntersectionVisitor_ReadCallback::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgUtil_IntersectionVisitor_ReadCallback::_bind_asVoid},
	{"getTable", &luna_wrapper_osgUtil_IntersectionVisitor_ReadCallback::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::IntersectionVisitor::ReadCallback >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_IntersectionVisitor_ReadCallback::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::IntersectionVisitor::ReadCallback >::enumValues[] = {
	{0,0}
};


