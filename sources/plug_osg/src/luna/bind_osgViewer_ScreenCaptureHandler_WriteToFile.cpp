#include <plug_common.h>

#include <luna/wrappers/wrapper_osgViewer_ScreenCaptureHandler_WriteToFile.h>

class luna_wrapper_osgViewer_ScreenCaptureHandler_WriteToFile {
public:
	typedef Luna< osgViewer::ScreenCaptureHandler::WriteToFile > luna_t;

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

		osgViewer::ScreenCaptureHandler::WriteToFile* self= (osgViewer::ScreenCaptureHandler::WriteToFile*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgViewer::ScreenCaptureHandler::WriteToFile >::push(L,self,false);
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
		//osgViewer::ScreenCaptureHandler::WriteToFile* ptr= dynamic_cast< osgViewer::ScreenCaptureHandler::WriteToFile* >(Luna< osg::Referenced >::check(L,1));
		osgViewer::ScreenCaptureHandler::WriteToFile* ptr= luna_caster< osg::Referenced, osgViewer::ScreenCaptureHandler::WriteToFile >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgViewer::ScreenCaptureHandler::WriteToFile >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setSavePolicy(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSavePolicy(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck_op_call(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Constructor binds:
	// osgViewer::ScreenCaptureHandler::WriteToFile::WriteToFile(const std::string & filename, const std::string & extension, osgViewer::ScreenCaptureHandler::WriteToFile::SavePolicy savePolicy = osgViewer::ScreenCaptureHandler::WriteToFile::SEQUENTIAL_NUMBER)
	static osgViewer::ScreenCaptureHandler::WriteToFile* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgViewer::ScreenCaptureHandler::WriteToFile::WriteToFile(const std::string & filename, const std::string & extension, osgViewer::ScreenCaptureHandler::WriteToFile::SavePolicy savePolicy = osgViewer::ScreenCaptureHandler::WriteToFile::SEQUENTIAL_NUMBER) function, expected prototype:\nosgViewer::ScreenCaptureHandler::WriteToFile::WriteToFile(const std::string & filename, const std::string & extension, osgViewer::ScreenCaptureHandler::WriteToFile::SavePolicy savePolicy = osgViewer::ScreenCaptureHandler::WriteToFile::SEQUENTIAL_NUMBER)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::string filename(lua_tostring(L,1),lua_objlen(L,1));
		std::string extension(lua_tostring(L,2),lua_objlen(L,2));
		osgViewer::ScreenCaptureHandler::WriteToFile::SavePolicy savePolicy=luatop>2 ? (osgViewer::ScreenCaptureHandler::WriteToFile::SavePolicy)lua_tointeger(L,3) : (osgViewer::ScreenCaptureHandler::WriteToFile::SavePolicy)osgViewer::ScreenCaptureHandler::WriteToFile::SEQUENTIAL_NUMBER;

		return new osgViewer::ScreenCaptureHandler::WriteToFile(filename, extension, savePolicy);
	}

	// osgViewer::ScreenCaptureHandler::WriteToFile::WriteToFile(lua_Table * data, const std::string & filename, const std::string & extension, osgViewer::ScreenCaptureHandler::WriteToFile::SavePolicy savePolicy = osgViewer::ScreenCaptureHandler::WriteToFile::SEQUENTIAL_NUMBER)
	static osgViewer::ScreenCaptureHandler::WriteToFile* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgViewer::ScreenCaptureHandler::WriteToFile::WriteToFile(lua_Table * data, const std::string & filename, const std::string & extension, osgViewer::ScreenCaptureHandler::WriteToFile::SavePolicy savePolicy = osgViewer::ScreenCaptureHandler::WriteToFile::SEQUENTIAL_NUMBER) function, expected prototype:\nosgViewer::ScreenCaptureHandler::WriteToFile::WriteToFile(lua_Table * data, const std::string & filename, const std::string & extension, osgViewer::ScreenCaptureHandler::WriteToFile::SavePolicy savePolicy = osgViewer::ScreenCaptureHandler::WriteToFile::SEQUENTIAL_NUMBER)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::string filename(lua_tostring(L,2),lua_objlen(L,2));
		std::string extension(lua_tostring(L,3),lua_objlen(L,3));
		osgViewer::ScreenCaptureHandler::WriteToFile::SavePolicy savePolicy=luatop>3 ? (osgViewer::ScreenCaptureHandler::WriteToFile::SavePolicy)lua_tointeger(L,4) : (osgViewer::ScreenCaptureHandler::WriteToFile::SavePolicy)osgViewer::ScreenCaptureHandler::WriteToFile::SEQUENTIAL_NUMBER;

		return new wrapper_osgViewer_ScreenCaptureHandler_WriteToFile(L,NULL, filename, extension, savePolicy);
	}

	// Overload binder for osgViewer::ScreenCaptureHandler::WriteToFile::WriteToFile
	static osgViewer::ScreenCaptureHandler::WriteToFile* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function WriteToFile, cannot match any of the overloads for function WriteToFile:\n  WriteToFile(const std::string &, const std::string &, osgViewer::ScreenCaptureHandler::WriteToFile::SavePolicy)\n  WriteToFile(lua_Table *, const std::string &, const std::string &, osgViewer::ScreenCaptureHandler::WriteToFile::SavePolicy)\n");
		return NULL;
	}


	// Function binds:
	// void osgViewer::ScreenCaptureHandler::WriteToFile::setSavePolicy(osgViewer::ScreenCaptureHandler::WriteToFile::SavePolicy savePolicy)
	static int _bind_setSavePolicy(lua_State *L) {
		if (!_lg_typecheck_setSavePolicy(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ScreenCaptureHandler::WriteToFile::setSavePolicy(osgViewer::ScreenCaptureHandler::WriteToFile::SavePolicy savePolicy) function, expected prototype:\nvoid osgViewer::ScreenCaptureHandler::WriteToFile::setSavePolicy(osgViewer::ScreenCaptureHandler::WriteToFile::SavePolicy savePolicy)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osgViewer::ScreenCaptureHandler::WriteToFile::SavePolicy savePolicy=(osgViewer::ScreenCaptureHandler::WriteToFile::SavePolicy)lua_tointeger(L,2);

		osgViewer::ScreenCaptureHandler::WriteToFile* self=Luna< osg::Referenced >::checkSubType< osgViewer::ScreenCaptureHandler::WriteToFile >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ScreenCaptureHandler::WriteToFile::setSavePolicy(osgViewer::ScreenCaptureHandler::WriteToFile::SavePolicy). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setSavePolicy(savePolicy);

		return 0;
	}

	// osgViewer::ScreenCaptureHandler::WriteToFile::SavePolicy osgViewer::ScreenCaptureHandler::WriteToFile::getSavePolicy() const
	static int _bind_getSavePolicy(lua_State *L) {
		if (!_lg_typecheck_getSavePolicy(L)) {
			luaL_error(L, "luna typecheck failed in osgViewer::ScreenCaptureHandler::WriteToFile::SavePolicy osgViewer::ScreenCaptureHandler::WriteToFile::getSavePolicy() const function, expected prototype:\nosgViewer::ScreenCaptureHandler::WriteToFile::SavePolicy osgViewer::ScreenCaptureHandler::WriteToFile::getSavePolicy() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::ScreenCaptureHandler::WriteToFile* self=Luna< osg::Referenced >::checkSubType< osgViewer::ScreenCaptureHandler::WriteToFile >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgViewer::ScreenCaptureHandler::WriteToFile::SavePolicy osgViewer::ScreenCaptureHandler::WriteToFile::getSavePolicy() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgViewer::ScreenCaptureHandler::WriteToFile::SavePolicy lret = self->getSavePolicy();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgViewer::ScreenCaptureHandler::WriteToFile::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ScreenCaptureHandler::WriteToFile::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgViewer::ScreenCaptureHandler::WriteToFile::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgViewer::ScreenCaptureHandler::WriteToFile* self=Luna< osg::Referenced >::checkSubType< osgViewer::ScreenCaptureHandler::WriteToFile >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ScreenCaptureHandler::WriteToFile::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->WriteToFile::setThreadSafeRefUnref(threadSafe);

		return 0;
	}


	// Operator binds:
	// void osgViewer::ScreenCaptureHandler::WriteToFile::operator()(const osg::Image & image, const unsigned int context_id)
	static int _bind_op_call(lua_State *L) {
		if (!_lg_typecheck_op_call(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ScreenCaptureHandler::WriteToFile::operator()(const osg::Image & image, const unsigned int context_id) function, expected prototype:\nvoid osgViewer::ScreenCaptureHandler::WriteToFile::operator()(const osg::Image & image, const unsigned int context_id)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Image* image_ptr=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,2));
		if( !image_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg image in osgViewer::ScreenCaptureHandler::WriteToFile::operator() function");
		}
		const osg::Image & image=*image_ptr;
		const unsigned int context_id=(const unsigned int)lua_tointeger(L,3);

		osgViewer::ScreenCaptureHandler::WriteToFile* self=Luna< osg::Referenced >::checkSubType< osgViewer::ScreenCaptureHandler::WriteToFile >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ScreenCaptureHandler::WriteToFile::operator()(const osg::Image &, const unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->operator()(image, context_id);

		return 0;
	}


};

osgViewer::ScreenCaptureHandler::WriteToFile* LunaTraits< osgViewer::ScreenCaptureHandler::WriteToFile >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgViewer_ScreenCaptureHandler_WriteToFile::_bind_ctor(L);
}

void LunaTraits< osgViewer::ScreenCaptureHandler::WriteToFile >::_bind_dtor(osgViewer::ScreenCaptureHandler::WriteToFile* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgViewer::ScreenCaptureHandler::WriteToFile >::className[] = "ScreenCaptureHandler_WriteToFile";
const char LunaTraits< osgViewer::ScreenCaptureHandler::WriteToFile >::fullName[] = "osgViewer::ScreenCaptureHandler::WriteToFile";
const char LunaTraits< osgViewer::ScreenCaptureHandler::WriteToFile >::moduleName[] = "osgViewer";
const char* LunaTraits< osgViewer::ScreenCaptureHandler::WriteToFile >::parents[] = {"osgViewer.ScreenCaptureHandler_CaptureOperation", 0};
const int LunaTraits< osgViewer::ScreenCaptureHandler::WriteToFile >::hash = 53456537;
const int LunaTraits< osgViewer::ScreenCaptureHandler::WriteToFile >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgViewer::ScreenCaptureHandler::WriteToFile >::methods[] = {
	{"setSavePolicy", &luna_wrapper_osgViewer_ScreenCaptureHandler_WriteToFile::_bind_setSavePolicy},
	{"getSavePolicy", &luna_wrapper_osgViewer_ScreenCaptureHandler_WriteToFile::_bind_getSavePolicy},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgViewer_ScreenCaptureHandler_WriteToFile::_bind_base_setThreadSafeRefUnref},
	{"op_call", &luna_wrapper_osgViewer_ScreenCaptureHandler_WriteToFile::_bind_op_call},
	{"fromVoid", &luna_wrapper_osgViewer_ScreenCaptureHandler_WriteToFile::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgViewer_ScreenCaptureHandler_WriteToFile::_bind_asVoid},
	{"getTable", &luna_wrapper_osgViewer_ScreenCaptureHandler_WriteToFile::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgViewer::ScreenCaptureHandler::WriteToFile >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgViewer_ScreenCaptureHandler_WriteToFile::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgViewer::ScreenCaptureHandler::WriteToFile >::enumValues[] = {
	{"OVERWRITE", osgViewer::ScreenCaptureHandler::WriteToFile::OVERWRITE},
	{"SEQUENTIAL_NUMBER", osgViewer::ScreenCaptureHandler::WriteToFile::SEQUENTIAL_NUMBER},
	{0,0}
};


