#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_DeleteHandler.h>

class luna_wrapper_osg_DeleteHandler {
public:
	typedef Luna< osg::DeleteHandler > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::DeleteHandler* self=(Luna< osg::DeleteHandler >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<osg::DeleteHandler,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1576447) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::DeleteHandler*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::DeleteHandler* rhs =(Luna< osg::DeleteHandler >::check(L,2));
		osg::DeleteHandler* self=(Luna< osg::DeleteHandler >::check(L,1));
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

		osg::DeleteHandler* self= (osg::DeleteHandler*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::DeleteHandler >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1576447) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osg::DeleteHandler >::check(L,1));
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

		osg::DeleteHandler* self=(Luna< osg::DeleteHandler >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::DeleteHandler");
		
		return luna_dynamicCast(L,converters,"osg::DeleteHandler",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setNumFramesToRetainObjects(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumFramesToRetainObjects(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFrameNumber(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFrameNumber(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_doDelete(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_flush(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_flushAll(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_requestDelete(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_flush(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_flushAll(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_requestDelete(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::DeleteHandler::DeleteHandler(int numberOfFramesToRetainObjects = 0)
	static osg::DeleteHandler* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::DeleteHandler::DeleteHandler(int numberOfFramesToRetainObjects = 0) function, expected prototype:\nosg::DeleteHandler::DeleteHandler(int numberOfFramesToRetainObjects = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int numberOfFramesToRetainObjects=luatop>0 ? (int)lua_tointeger(L,1) : (int)0;

		return new osg::DeleteHandler(numberOfFramesToRetainObjects);
	}

	// osg::DeleteHandler::DeleteHandler(lua_Table * data, int numberOfFramesToRetainObjects = 0)
	static osg::DeleteHandler* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::DeleteHandler::DeleteHandler(lua_Table * data, int numberOfFramesToRetainObjects = 0) function, expected prototype:\nosg::DeleteHandler::DeleteHandler(lua_Table * data, int numberOfFramesToRetainObjects = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int numberOfFramesToRetainObjects=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;

		return new wrapper_osg_DeleteHandler(L,NULL, numberOfFramesToRetainObjects);
	}

	// Overload binder for osg::DeleteHandler::DeleteHandler
	static osg::DeleteHandler* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function DeleteHandler, cannot match any of the overloads for function DeleteHandler:\n  DeleteHandler(int)\n  DeleteHandler(lua_Table *, int)\n");
		return NULL;
	}


	// Function binds:
	// void osg::DeleteHandler::setNumFramesToRetainObjects(unsigned int numberOfFramesToRetainObjects)
	static int _bind_setNumFramesToRetainObjects(lua_State *L) {
		if (!_lg_typecheck_setNumFramesToRetainObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DeleteHandler::setNumFramesToRetainObjects(unsigned int numberOfFramesToRetainObjects) function, expected prototype:\nvoid osg::DeleteHandler::setNumFramesToRetainObjects(unsigned int numberOfFramesToRetainObjects)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int numberOfFramesToRetainObjects=(unsigned int)lua_tointeger(L,2);

		osg::DeleteHandler* self=(Luna< osg::DeleteHandler >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DeleteHandler::setNumFramesToRetainObjects(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::DeleteHandler >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setNumFramesToRetainObjects(numberOfFramesToRetainObjects);

		return 0;
	}

	// unsigned int osg::DeleteHandler::getNumFramesToRetainObjects() const
	static int _bind_getNumFramesToRetainObjects(lua_State *L) {
		if (!_lg_typecheck_getNumFramesToRetainObjects(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::DeleteHandler::getNumFramesToRetainObjects() const function, expected prototype:\nunsigned int osg::DeleteHandler::getNumFramesToRetainObjects() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DeleteHandler* self=(Luna< osg::DeleteHandler >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::DeleteHandler::getNumFramesToRetainObjects() const. Got : '%s'\n%s",typeid(Luna< osg::DeleteHandler >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getNumFramesToRetainObjects();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::DeleteHandler::setFrameNumber(unsigned int frameNumber)
	static int _bind_setFrameNumber(lua_State *L) {
		if (!_lg_typecheck_setFrameNumber(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DeleteHandler::setFrameNumber(unsigned int frameNumber) function, expected prototype:\nvoid osg::DeleteHandler::setFrameNumber(unsigned int frameNumber)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int frameNumber=(unsigned int)lua_tointeger(L,2);

		osg::DeleteHandler* self=(Luna< osg::DeleteHandler >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DeleteHandler::setFrameNumber(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::DeleteHandler >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setFrameNumber(frameNumber);

		return 0;
	}

	// unsigned int osg::DeleteHandler::getFrameNumber() const
	static int _bind_getFrameNumber(lua_State *L) {
		if (!_lg_typecheck_getFrameNumber(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::DeleteHandler::getFrameNumber() const function, expected prototype:\nunsigned int osg::DeleteHandler::getFrameNumber() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DeleteHandler* self=(Luna< osg::DeleteHandler >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::DeleteHandler::getFrameNumber() const. Got : '%s'\n%s",typeid(Luna< osg::DeleteHandler >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getFrameNumber();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::DeleteHandler::doDelete(const osg::Referenced * object)
	static int _bind_doDelete(lua_State *L) {
		if (!_lg_typecheck_doDelete(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DeleteHandler::doDelete(const osg::Referenced * object) function, expected prototype:\nvoid osg::DeleteHandler::doDelete(const osg::Referenced * object)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Referenced* object=(Luna< osg::Referenced >::check(L,2));

		osg::DeleteHandler* self=(Luna< osg::DeleteHandler >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DeleteHandler::doDelete(const osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::DeleteHandler >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->doDelete(object);

		return 0;
	}

	// void osg::DeleteHandler::flush()
	static int _bind_flush(lua_State *L) {
		if (!_lg_typecheck_flush(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DeleteHandler::flush() function, expected prototype:\nvoid osg::DeleteHandler::flush()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DeleteHandler* self=(Luna< osg::DeleteHandler >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DeleteHandler::flush(). Got : '%s'\n%s",typeid(Luna< osg::DeleteHandler >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->flush();

		return 0;
	}

	// void osg::DeleteHandler::flushAll()
	static int _bind_flushAll(lua_State *L) {
		if (!_lg_typecheck_flushAll(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DeleteHandler::flushAll() function, expected prototype:\nvoid osg::DeleteHandler::flushAll()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DeleteHandler* self=(Luna< osg::DeleteHandler >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DeleteHandler::flushAll(). Got : '%s'\n%s",typeid(Luna< osg::DeleteHandler >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->flushAll();

		return 0;
	}

	// void osg::DeleteHandler::requestDelete(const osg::Referenced * object)
	static int _bind_requestDelete(lua_State *L) {
		if (!_lg_typecheck_requestDelete(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DeleteHandler::requestDelete(const osg::Referenced * object) function, expected prototype:\nvoid osg::DeleteHandler::requestDelete(const osg::Referenced * object)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Referenced* object=(Luna< osg::Referenced >::check(L,2));

		osg::DeleteHandler* self=(Luna< osg::DeleteHandler >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DeleteHandler::requestDelete(const osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::DeleteHandler >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->requestDelete(object);

		return 0;
	}

	// void osg::DeleteHandler::base_flush()
	static int _bind_base_flush(lua_State *L) {
		if (!_lg_typecheck_base_flush(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DeleteHandler::base_flush() function, expected prototype:\nvoid osg::DeleteHandler::base_flush()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DeleteHandler* self=(Luna< osg::DeleteHandler >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DeleteHandler::base_flush(). Got : '%s'\n%s",typeid(Luna< osg::DeleteHandler >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DeleteHandler::flush();

		return 0;
	}

	// void osg::DeleteHandler::base_flushAll()
	static int _bind_base_flushAll(lua_State *L) {
		if (!_lg_typecheck_base_flushAll(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DeleteHandler::base_flushAll() function, expected prototype:\nvoid osg::DeleteHandler::base_flushAll()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DeleteHandler* self=(Luna< osg::DeleteHandler >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DeleteHandler::base_flushAll(). Got : '%s'\n%s",typeid(Luna< osg::DeleteHandler >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DeleteHandler::flushAll();

		return 0;
	}

	// void osg::DeleteHandler::base_requestDelete(const osg::Referenced * object)
	static int _bind_base_requestDelete(lua_State *L) {
		if (!_lg_typecheck_base_requestDelete(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DeleteHandler::base_requestDelete(const osg::Referenced * object) function, expected prototype:\nvoid osg::DeleteHandler::base_requestDelete(const osg::Referenced * object)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Referenced* object=(Luna< osg::Referenced >::check(L,2));

		osg::DeleteHandler* self=(Luna< osg::DeleteHandler >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DeleteHandler::base_requestDelete(const osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::DeleteHandler >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DeleteHandler::requestDelete(object);

		return 0;
	}


	// Operator binds:

};

osg::DeleteHandler* LunaTraits< osg::DeleteHandler >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_DeleteHandler::_bind_ctor(L);
}

void LunaTraits< osg::DeleteHandler >::_bind_dtor(osg::DeleteHandler* obj) {
	delete obj;
}

const char LunaTraits< osg::DeleteHandler >::className[] = "DeleteHandler";
const char LunaTraits< osg::DeleteHandler >::fullName[] = "osg::DeleteHandler";
const char LunaTraits< osg::DeleteHandler >::moduleName[] = "osg";
const char* LunaTraits< osg::DeleteHandler >::parents[] = {0};
const int LunaTraits< osg::DeleteHandler >::hash = 1576447;
const int LunaTraits< osg::DeleteHandler >::uniqueIDs[] = {1576447,0};

luna_RegType LunaTraits< osg::DeleteHandler >::methods[] = {
	{"setNumFramesToRetainObjects", &luna_wrapper_osg_DeleteHandler::_bind_setNumFramesToRetainObjects},
	{"getNumFramesToRetainObjects", &luna_wrapper_osg_DeleteHandler::_bind_getNumFramesToRetainObjects},
	{"setFrameNumber", &luna_wrapper_osg_DeleteHandler::_bind_setFrameNumber},
	{"getFrameNumber", &luna_wrapper_osg_DeleteHandler::_bind_getFrameNumber},
	{"doDelete", &luna_wrapper_osg_DeleteHandler::_bind_doDelete},
	{"flush", &luna_wrapper_osg_DeleteHandler::_bind_flush},
	{"flushAll", &luna_wrapper_osg_DeleteHandler::_bind_flushAll},
	{"requestDelete", &luna_wrapper_osg_DeleteHandler::_bind_requestDelete},
	{"base_flush", &luna_wrapper_osg_DeleteHandler::_bind_base_flush},
	{"base_flushAll", &luna_wrapper_osg_DeleteHandler::_bind_base_flushAll},
	{"base_requestDelete", &luna_wrapper_osg_DeleteHandler::_bind_base_requestDelete},
	{"dynCast", &luna_wrapper_osg_DeleteHandler::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_DeleteHandler::_bind___eq},
	{"fromVoid", &luna_wrapper_osg_DeleteHandler::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_DeleteHandler::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_DeleteHandler::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::DeleteHandler >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::DeleteHandler >::enumValues[] = {
	{0,0}
};


