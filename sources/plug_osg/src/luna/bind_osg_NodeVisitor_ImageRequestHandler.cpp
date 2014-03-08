#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_NodeVisitor_ImageRequestHandler.h>

class luna_wrapper_osg_NodeVisitor_ImageRequestHandler {
public:
	typedef Luna< osg::NodeVisitor::ImageRequestHandler > luna_t;

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

		osg::NodeVisitor::ImageRequestHandler* self= (osg::NodeVisitor::ImageRequestHandler*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::NodeVisitor::ImageRequestHandler >::push(L,self,false);
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
		//osg::NodeVisitor::ImageRequestHandler* ptr= dynamic_cast< osg::NodeVisitor::ImageRequestHandler* >(Luna< osg::Referenced >::check(L,1));
		osg::NodeVisitor::ImageRequestHandler* ptr= luna_caster< osg::Referenced, osg::NodeVisitor::ImageRequestHandler >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::NodeVisitor::ImageRequestHandler >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getPreLoadTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_readImageFile(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_requestImageFile(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<7 || luatop>8 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,50169651)) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,84922662) ) return false;
		if( luatop>7 && (lua_isnil(L,8)==0 && !Luna<void>::has_uniqueid(L,8,50169651)) ) return false;
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
	// osg::NodeVisitor::ImageRequestHandler::ImageRequestHandler(lua_Table * data)
	static osg::NodeVisitor::ImageRequestHandler* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in osg::NodeVisitor::ImageRequestHandler::ImageRequestHandler(lua_Table * data) function, expected prototype:\nosg::NodeVisitor::ImageRequestHandler::ImageRequestHandler(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_NodeVisitor_ImageRequestHandler(L,NULL);
	}


	// Function binds:
	// double osg::NodeVisitor::ImageRequestHandler::getPreLoadTime() const
	static int _bind_getPreLoadTime(lua_State *L) {
		if (!_lg_typecheck_getPreLoadTime(L)) {
			luaL_error(L, "luna typecheck failed in double osg::NodeVisitor::ImageRequestHandler::getPreLoadTime() const function, expected prototype:\ndouble osg::NodeVisitor::ImageRequestHandler::getPreLoadTime() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::NodeVisitor::ImageRequestHandler* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor::ImageRequestHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::NodeVisitor::ImageRequestHandler::getPreLoadTime() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getPreLoadTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::Image * osg::NodeVisitor::ImageRequestHandler::readImageFile(const std::string & fileName, const osg::Referenced * options = 0)
	static int _bind_readImageFile(lua_State *L) {
		if (!_lg_typecheck_readImageFile(L)) {
			luaL_error(L, "luna typecheck failed in osg::Image * osg::NodeVisitor::ImageRequestHandler::readImageFile(const std::string & fileName, const osg::Referenced * options = 0) function, expected prototype:\nosg::Image * osg::NodeVisitor::ImageRequestHandler::readImageFile(const std::string & fileName, const osg::Referenced * options = 0)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::string fileName(lua_tostring(L,2),lua_objlen(L,2));
		const osg::Referenced* options=luatop>2 ? (Luna< osg::Referenced >::check(L,3)) : (const osg::Referenced*)0;

		osg::NodeVisitor::ImageRequestHandler* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor::ImageRequestHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Image * osg::NodeVisitor::ImageRequestHandler::readImageFile(const std::string &, const osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Image * lret = self->readImageFile(fileName, options);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// void osg::NodeVisitor::ImageRequestHandler::requestImageFile(const std::string & fileName, osg::Object * attachmentPoint, int attachmentIndex, double timeToMergeBy, const osg::FrameStamp * framestamp, osg::ref_ptr< osg::Referenced > & imageRequest, const osg::Referenced * options = 0)
	static int _bind_requestImageFile(lua_State *L) {
		if (!_lg_typecheck_requestImageFile(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::ImageRequestHandler::requestImageFile(const std::string & fileName, osg::Object * attachmentPoint, int attachmentIndex, double timeToMergeBy, const osg::FrameStamp * framestamp, osg::ref_ptr< osg::Referenced > & imageRequest, const osg::Referenced * options = 0) function, expected prototype:\nvoid osg::NodeVisitor::ImageRequestHandler::requestImageFile(const std::string & fileName, osg::Object * attachmentPoint, int attachmentIndex, double timeToMergeBy, const osg::FrameStamp * framestamp, osg::ref_ptr< osg::Referenced > & imageRequest, const osg::Referenced * options = 0)\nClass arguments details:\narg 2 ID = 50169651\narg 5 ID = 50169651\narg 6 ID = [unknown]\narg 7 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::string fileName(lua_tostring(L,2),lua_objlen(L,2));
		osg::Object* attachmentPoint=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,3));
		int attachmentIndex=(int)lua_tointeger(L,4);
		double timeToMergeBy=(double)lua_tonumber(L,5);
		const osg::FrameStamp* framestamp=(Luna< osg::Referenced >::checkSubType< osg::FrameStamp >(L,6));
		osg::ref_ptr< osg::Referenced > imageRequest = dynamic_cast< osg::Referenced* >(Luna< osg::Referenced >::check(L,7));
		const osg::Referenced* options=luatop>7 ? (Luna< osg::Referenced >::check(L,8)) : (const osg::Referenced*)0;

		osg::NodeVisitor::ImageRequestHandler* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor::ImageRequestHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::ImageRequestHandler::requestImageFile(const std::string &, osg::Object *, int, double, const osg::FrameStamp *, osg::ref_ptr< osg::Referenced > &, const osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->requestImageFile(fileName, attachmentPoint, attachmentIndex, timeToMergeBy, framestamp, imageRequest, options);

		return 0;
	}

	// void osg::NodeVisitor::ImageRequestHandler::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::ImageRequestHandler::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::NodeVisitor::ImageRequestHandler::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::NodeVisitor::ImageRequestHandler* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor::ImageRequestHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::ImageRequestHandler::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ImageRequestHandler::setThreadSafeRefUnref(threadSafe);

		return 0;
	}


	// Operator binds:

};

osg::NodeVisitor::ImageRequestHandler* LunaTraits< osg::NodeVisitor::ImageRequestHandler >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_NodeVisitor_ImageRequestHandler::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// double osg::NodeVisitor::ImageRequestHandler::getPreLoadTime() const
	// osg::Image * osg::NodeVisitor::ImageRequestHandler::readImageFile(const std::string & fileName, const osg::Referenced * options = 0)
	// void osg::NodeVisitor::ImageRequestHandler::requestImageFile(const std::string & fileName, osg::Object * attachmentPoint, int attachmentIndex, double timeToMergeBy, const osg::FrameStamp * framestamp, osg::ref_ptr< osg::Referenced > & imageRequest, const osg::Referenced * options = 0)
}

void LunaTraits< osg::NodeVisitor::ImageRequestHandler >::_bind_dtor(osg::NodeVisitor::ImageRequestHandler* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::NodeVisitor::ImageRequestHandler >::className[] = "NodeVisitor_ImageRequestHandler";
const char LunaTraits< osg::NodeVisitor::ImageRequestHandler >::fullName[] = "osg::NodeVisitor::ImageRequestHandler";
const char LunaTraits< osg::NodeVisitor::ImageRequestHandler >::moduleName[] = "osg";
const char* LunaTraits< osg::NodeVisitor::ImageRequestHandler >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::NodeVisitor::ImageRequestHandler >::hash = 29567712;
const int LunaTraits< osg::NodeVisitor::ImageRequestHandler >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::NodeVisitor::ImageRequestHandler >::methods[] = {
	{"getPreLoadTime", &luna_wrapper_osg_NodeVisitor_ImageRequestHandler::_bind_getPreLoadTime},
	{"readImageFile", &luna_wrapper_osg_NodeVisitor_ImageRequestHandler::_bind_readImageFile},
	{"requestImageFile", &luna_wrapper_osg_NodeVisitor_ImageRequestHandler::_bind_requestImageFile},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_NodeVisitor_ImageRequestHandler::_bind_base_setThreadSafeRefUnref},
	{"fromVoid", &luna_wrapper_osg_NodeVisitor_ImageRequestHandler::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_NodeVisitor_ImageRequestHandler::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_NodeVisitor_ImageRequestHandler::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::NodeVisitor::ImageRequestHandler >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_NodeVisitor_ImageRequestHandler::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::NodeVisitor::ImageRequestHandler >::enumValues[] = {
	{0,0}
};


