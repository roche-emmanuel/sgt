#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_Shader_PerContextShader.h>

class luna_wrapper_osg_Shader_PerContextShader {
public:
	typedef Luna< osg::Shader::PerContextShader > luna_t;

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

		osg::Shader::PerContextShader* self= (osg::Shader::PerContextShader*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::Shader::PerContextShader >::push(L,self,false);
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
		//osg::Shader::PerContextShader* ptr= dynamic_cast< osg::Shader::PerContextShader* >(Luna< osg::Referenced >::check(L,1));
		osg::Shader::PerContextShader* ptr= luna_caster< osg::Referenced, osg::Shader::PerContextShader >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Shader::PerContextShader >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Shader >(L,1)) ) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Shader >(L,2)) ) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getHandle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_requestCompile(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_compileShader(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_needsCompile(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isCompiled(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getInfoLog(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_attachShader(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_detachShader(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
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
	// osg::Shader::PerContextShader::PerContextShader(const osg::Shader * shader, unsigned int contextID)
	static osg::Shader::PerContextShader* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Shader::PerContextShader::PerContextShader(const osg::Shader * shader, unsigned int contextID) function, expected prototype:\nosg::Shader::PerContextShader::PerContextShader(const osg::Shader * shader, unsigned int contextID)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Shader* shader=(Luna< osg::Referenced >::checkSubType< osg::Shader >(L,1));
		unsigned int contextID=(unsigned int)lua_tointeger(L,2);

		return new osg::Shader::PerContextShader(shader, contextID);
	}

	// osg::Shader::PerContextShader::PerContextShader(lua_Table * data, const osg::Shader * shader, unsigned int contextID)
	static osg::Shader::PerContextShader* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Shader::PerContextShader::PerContextShader(lua_Table * data, const osg::Shader * shader, unsigned int contextID) function, expected prototype:\nosg::Shader::PerContextShader::PerContextShader(lua_Table * data, const osg::Shader * shader, unsigned int contextID)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Shader* shader=(Luna< osg::Referenced >::checkSubType< osg::Shader >(L,2));
		unsigned int contextID=(unsigned int)lua_tointeger(L,3);

		return new wrapper_osg_Shader_PerContextShader(L,NULL, shader, contextID);
	}

	// Overload binder for osg::Shader::PerContextShader::PerContextShader
	static osg::Shader::PerContextShader* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function PerContextShader, cannot match any of the overloads for function PerContextShader:\n  PerContextShader(const osg::Shader *, unsigned int)\n  PerContextShader(lua_Table *, const osg::Shader *, unsigned int)\n");
		return NULL;
	}


	// Function binds:
	// unsigned int osg::Shader::PerContextShader::getHandle() const
	static int _bind_getHandle(lua_State *L) {
		if (!_lg_typecheck_getHandle(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Shader::PerContextShader::getHandle() const function, expected prototype:\nunsigned int osg::Shader::PerContextShader::getHandle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Shader::PerContextShader* self=Luna< osg::Referenced >::checkSubType< osg::Shader::PerContextShader >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Shader::PerContextShader::getHandle() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getHandle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Shader::PerContextShader::requestCompile()
	static int _bind_requestCompile(lua_State *L) {
		if (!_lg_typecheck_requestCompile(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Shader::PerContextShader::requestCompile() function, expected prototype:\nvoid osg::Shader::PerContextShader::requestCompile()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Shader::PerContextShader* self=Luna< osg::Referenced >::checkSubType< osg::Shader::PerContextShader >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Shader::PerContextShader::requestCompile(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->requestCompile();

		return 0;
	}

	// void osg::Shader::PerContextShader::compileShader(osg::State & state)
	static int _bind_compileShader(lua_State *L) {
		if (!_lg_typecheck_compileShader(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Shader::PerContextShader::compileShader(osg::State & state) function, expected prototype:\nvoid osg::Shader::PerContextShader::compileShader(osg::State & state)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* state_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::Shader::PerContextShader::compileShader function");
		}
		osg::State & state=*state_ptr;

		osg::Shader::PerContextShader* self=Luna< osg::Referenced >::checkSubType< osg::Shader::PerContextShader >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Shader::PerContextShader::compileShader(osg::State &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->compileShader(state);

		return 0;
	}

	// bool osg::Shader::PerContextShader::needsCompile() const
	static int _bind_needsCompile(lua_State *L) {
		if (!_lg_typecheck_needsCompile(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Shader::PerContextShader::needsCompile() const function, expected prototype:\nbool osg::Shader::PerContextShader::needsCompile() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Shader::PerContextShader* self=Luna< osg::Referenced >::checkSubType< osg::Shader::PerContextShader >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Shader::PerContextShader::needsCompile() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->needsCompile();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Shader::PerContextShader::isCompiled() const
	static int _bind_isCompiled(lua_State *L) {
		if (!_lg_typecheck_isCompiled(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Shader::PerContextShader::isCompiled() const function, expected prototype:\nbool osg::Shader::PerContextShader::isCompiled() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Shader::PerContextShader* self=Luna< osg::Referenced >::checkSubType< osg::Shader::PerContextShader >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Shader::PerContextShader::isCompiled() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isCompiled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Shader::PerContextShader::getInfoLog(std::string & infoLog) const
	static int _bind_getInfoLog(lua_State *L) {
		if (!_lg_typecheck_getInfoLog(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Shader::PerContextShader::getInfoLog(std::string & infoLog) const function, expected prototype:\nbool osg::Shader::PerContextShader::getInfoLog(std::string & infoLog) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string infoLog(lua_tostring(L,2),lua_objlen(L,2));

		osg::Shader::PerContextShader* self=Luna< osg::Referenced >::checkSubType< osg::Shader::PerContextShader >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Shader::PerContextShader::getInfoLog(std::string &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getInfoLog(infoLog);
		lua_pushboolean(L,lret?1:0);

		lua_pushlstring(L,infoLog.data(),infoLog.size());
		return 2;
	}

	// void osg::Shader::PerContextShader::attachShader(unsigned int program) const
	static int _bind_attachShader(lua_State *L) {
		if (!_lg_typecheck_attachShader(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Shader::PerContextShader::attachShader(unsigned int program) const function, expected prototype:\nvoid osg::Shader::PerContextShader::attachShader(unsigned int program) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int program=(unsigned int)lua_tointeger(L,2);

		osg::Shader::PerContextShader* self=Luna< osg::Referenced >::checkSubType< osg::Shader::PerContextShader >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Shader::PerContextShader::attachShader(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->attachShader(program);

		return 0;
	}

	// void osg::Shader::PerContextShader::detachShader(unsigned int program) const
	static int _bind_detachShader(lua_State *L) {
		if (!_lg_typecheck_detachShader(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Shader::PerContextShader::detachShader(unsigned int program) const function, expected prototype:\nvoid osg::Shader::PerContextShader::detachShader(unsigned int program) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int program=(unsigned int)lua_tointeger(L,2);

		osg::Shader::PerContextShader* self=Luna< osg::Referenced >::checkSubType< osg::Shader::PerContextShader >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Shader::PerContextShader::detachShader(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->detachShader(program);

		return 0;
	}

	// void osg::Shader::PerContextShader::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Shader::PerContextShader::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::Shader::PerContextShader::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::Shader::PerContextShader* self=Luna< osg::Referenced >::checkSubType< osg::Shader::PerContextShader >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Shader::PerContextShader::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PerContextShader::setThreadSafeRefUnref(threadSafe);

		return 0;
	}


	// Operator binds:

};

osg::Shader::PerContextShader* LunaTraits< osg::Shader::PerContextShader >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Shader_PerContextShader::_bind_ctor(L);
}

void LunaTraits< osg::Shader::PerContextShader >::_bind_dtor(osg::Shader::PerContextShader* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Shader::PerContextShader >::className[] = "Shader_PerContextShader";
const char LunaTraits< osg::Shader::PerContextShader >::fullName[] = "osg::Shader::PerContextShader";
const char LunaTraits< osg::Shader::PerContextShader >::moduleName[] = "osg";
const char* LunaTraits< osg::Shader::PerContextShader >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::Shader::PerContextShader >::hash = 71172613;
const int LunaTraits< osg::Shader::PerContextShader >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Shader::PerContextShader >::methods[] = {
	{"getHandle", &luna_wrapper_osg_Shader_PerContextShader::_bind_getHandle},
	{"requestCompile", &luna_wrapper_osg_Shader_PerContextShader::_bind_requestCompile},
	{"compileShader", &luna_wrapper_osg_Shader_PerContextShader::_bind_compileShader},
	{"needsCompile", &luna_wrapper_osg_Shader_PerContextShader::_bind_needsCompile},
	{"isCompiled", &luna_wrapper_osg_Shader_PerContextShader::_bind_isCompiled},
	{"getInfoLog", &luna_wrapper_osg_Shader_PerContextShader::_bind_getInfoLog},
	{"attachShader", &luna_wrapper_osg_Shader_PerContextShader::_bind_attachShader},
	{"detachShader", &luna_wrapper_osg_Shader_PerContextShader::_bind_detachShader},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_Shader_PerContextShader::_bind_base_setThreadSafeRefUnref},
	{"fromVoid", &luna_wrapper_osg_Shader_PerContextShader::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_Shader_PerContextShader::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_Shader_PerContextShader::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Shader::PerContextShader >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Shader_PerContextShader::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Shader::PerContextShader >::enumValues[] = {
	{0,0}
};


