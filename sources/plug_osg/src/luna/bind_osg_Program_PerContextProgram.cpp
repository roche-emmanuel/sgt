#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_Program_PerContextProgram.h>

class luna_wrapper_osg_Program_PerContextProgram {
public:
	typedef Luna< osg::Program::PerContextProgram > luna_t;

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

		osg::Program::PerContextProgram* self= (osg::Program::PerContextProgram*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::Program::PerContextProgram >::push(L,self,false);
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
		//osg::Program::PerContextProgram* ptr= dynamic_cast< osg::Program::PerContextProgram* >(Luna< osg::Referenced >::check(L,1));
		osg::Program::PerContextProgram* ptr= luna_caster< osg::Referenced, osg::Program::PerContextProgram >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Program::PerContextProgram >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Program >(L,1)) ) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Program >(L,2)) ) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getHandle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_requestLink(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_linkProgram(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_validateProgram(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_needsLink(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isLinked(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getInfoLog(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_loadedBinary(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_compileProgramBinary(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_useProgram(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_resetAppliedUniforms(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_apply(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getActiveUniforms(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getActiveAttribs(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUniformLocation_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUniformLocation_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAttribLocation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addShaderToAttach(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addShaderToDetach(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
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
	// osg::Program::PerContextProgram::PerContextProgram(const osg::Program * program, unsigned int contextID)
	static osg::Program::PerContextProgram* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Program::PerContextProgram::PerContextProgram(const osg::Program * program, unsigned int contextID) function, expected prototype:\nosg::Program::PerContextProgram::PerContextProgram(const osg::Program * program, unsigned int contextID)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Program* program=(Luna< osg::Referenced >::checkSubType< osg::Program >(L,1));
		unsigned int contextID=(unsigned int)lua_tointeger(L,2);

		return new osg::Program::PerContextProgram(program, contextID);
	}

	// osg::Program::PerContextProgram::PerContextProgram(lua_Table * data, const osg::Program * program, unsigned int contextID)
	static osg::Program::PerContextProgram* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Program::PerContextProgram::PerContextProgram(lua_Table * data, const osg::Program * program, unsigned int contextID) function, expected prototype:\nosg::Program::PerContextProgram::PerContextProgram(lua_Table * data, const osg::Program * program, unsigned int contextID)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Program* program=(Luna< osg::Referenced >::checkSubType< osg::Program >(L,2));
		unsigned int contextID=(unsigned int)lua_tointeger(L,3);

		return new wrapper_osg_Program_PerContextProgram(L,NULL, program, contextID);
	}

	// Overload binder for osg::Program::PerContextProgram::PerContextProgram
	static osg::Program::PerContextProgram* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function PerContextProgram, cannot match any of the overloads for function PerContextProgram:\n  PerContextProgram(const osg::Program *, unsigned int)\n  PerContextProgram(lua_Table *, const osg::Program *, unsigned int)\n");
		return NULL;
	}


	// Function binds:
	// unsigned int osg::Program::PerContextProgram::getHandle() const
	static int _bind_getHandle(lua_State *L) {
		if (!_lg_typecheck_getHandle(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Program::PerContextProgram::getHandle() const function, expected prototype:\nunsigned int osg::Program::PerContextProgram::getHandle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Program::PerContextProgram* self=Luna< osg::Referenced >::checkSubType< osg::Program::PerContextProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Program::PerContextProgram::getHandle() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getHandle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Program::PerContextProgram::requestLink()
	static int _bind_requestLink(lua_State *L) {
		if (!_lg_typecheck_requestLink(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Program::PerContextProgram::requestLink() function, expected prototype:\nvoid osg::Program::PerContextProgram::requestLink()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Program::PerContextProgram* self=Luna< osg::Referenced >::checkSubType< osg::Program::PerContextProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Program::PerContextProgram::requestLink(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->requestLink();

		return 0;
	}

	// void osg::Program::PerContextProgram::linkProgram(osg::State & state)
	static int _bind_linkProgram(lua_State *L) {
		if (!_lg_typecheck_linkProgram(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Program::PerContextProgram::linkProgram(osg::State & state) function, expected prototype:\nvoid osg::Program::PerContextProgram::linkProgram(osg::State & state)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* state_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::Program::PerContextProgram::linkProgram function");
		}
		osg::State & state=*state_ptr;

		osg::Program::PerContextProgram* self=Luna< osg::Referenced >::checkSubType< osg::Program::PerContextProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Program::PerContextProgram::linkProgram(osg::State &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->linkProgram(state);

		return 0;
	}

	// bool osg::Program::PerContextProgram::validateProgram()
	static int _bind_validateProgram(lua_State *L) {
		if (!_lg_typecheck_validateProgram(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Program::PerContextProgram::validateProgram() function, expected prototype:\nbool osg::Program::PerContextProgram::validateProgram()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Program::PerContextProgram* self=Luna< osg::Referenced >::checkSubType< osg::Program::PerContextProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Program::PerContextProgram::validateProgram(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->validateProgram();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Program::PerContextProgram::needsLink() const
	static int _bind_needsLink(lua_State *L) {
		if (!_lg_typecheck_needsLink(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Program::PerContextProgram::needsLink() const function, expected prototype:\nbool osg::Program::PerContextProgram::needsLink() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Program::PerContextProgram* self=Luna< osg::Referenced >::checkSubType< osg::Program::PerContextProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Program::PerContextProgram::needsLink() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->needsLink();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Program::PerContextProgram::isLinked() const
	static int _bind_isLinked(lua_State *L) {
		if (!_lg_typecheck_isLinked(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Program::PerContextProgram::isLinked() const function, expected prototype:\nbool osg::Program::PerContextProgram::isLinked() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Program::PerContextProgram* self=Luna< osg::Referenced >::checkSubType< osg::Program::PerContextProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Program::PerContextProgram::isLinked() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isLinked();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Program::PerContextProgram::getInfoLog(std::string & infoLog) const
	static int _bind_getInfoLog(lua_State *L) {
		if (!_lg_typecheck_getInfoLog(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Program::PerContextProgram::getInfoLog(std::string & infoLog) const function, expected prototype:\nbool osg::Program::PerContextProgram::getInfoLog(std::string & infoLog) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string infoLog(lua_tostring(L,2),lua_objlen(L,2));

		osg::Program::PerContextProgram* self=Luna< osg::Referenced >::checkSubType< osg::Program::PerContextProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Program::PerContextProgram::getInfoLog(std::string &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getInfoLog(infoLog);
		lua_pushboolean(L,lret?1:0);

		lua_pushlstring(L,infoLog.data(),infoLog.size());
		return 2;
	}

	// bool osg::Program::PerContextProgram::loadedBinary() const
	static int _bind_loadedBinary(lua_State *L) {
		if (!_lg_typecheck_loadedBinary(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Program::PerContextProgram::loadedBinary() const function, expected prototype:\nbool osg::Program::PerContextProgram::loadedBinary() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Program::PerContextProgram* self=Luna< osg::Referenced >::checkSubType< osg::Program::PerContextProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Program::PerContextProgram::loadedBinary() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->loadedBinary();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// osg::Program::ProgramBinary * osg::Program::PerContextProgram::compileProgramBinary(osg::State & state)
	static int _bind_compileProgramBinary(lua_State *L) {
		if (!_lg_typecheck_compileProgramBinary(L)) {
			luaL_error(L, "luna typecheck failed in osg::Program::ProgramBinary * osg::Program::PerContextProgram::compileProgramBinary(osg::State & state) function, expected prototype:\nosg::Program::ProgramBinary * osg::Program::PerContextProgram::compileProgramBinary(osg::State & state)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* state_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::Program::PerContextProgram::compileProgramBinary function");
		}
		osg::State & state=*state_ptr;

		osg::Program::PerContextProgram* self=Luna< osg::Referenced >::checkSubType< osg::Program::PerContextProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Program::ProgramBinary * osg::Program::PerContextProgram::compileProgramBinary(osg::State &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Program::ProgramBinary * lret = self->compileProgramBinary(state);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Program::ProgramBinary >::push(L,lret,false);

		return 1;
	}

	// void osg::Program::PerContextProgram::useProgram() const
	static int _bind_useProgram(lua_State *L) {
		if (!_lg_typecheck_useProgram(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Program::PerContextProgram::useProgram() const function, expected prototype:\nvoid osg::Program::PerContextProgram::useProgram() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Program::PerContextProgram* self=Luna< osg::Referenced >::checkSubType< osg::Program::PerContextProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Program::PerContextProgram::useProgram() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->useProgram();

		return 0;
	}

	// void osg::Program::PerContextProgram::resetAppliedUniforms() const
	static int _bind_resetAppliedUniforms(lua_State *L) {
		if (!_lg_typecheck_resetAppliedUniforms(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Program::PerContextProgram::resetAppliedUniforms() const function, expected prototype:\nvoid osg::Program::PerContextProgram::resetAppliedUniforms() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Program::PerContextProgram* self=Luna< osg::Referenced >::checkSubType< osg::Program::PerContextProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Program::PerContextProgram::resetAppliedUniforms() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->resetAppliedUniforms();

		return 0;
	}

	// void osg::Program::PerContextProgram::apply(const osg::Uniform & uniform) const
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Program::PerContextProgram::apply(const osg::Uniform & uniform) const function, expected prototype:\nvoid osg::Program::PerContextProgram::apply(const osg::Uniform & uniform) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Uniform* uniform_ptr=(Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,2));
		if( !uniform_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg uniform in osg::Program::PerContextProgram::apply function");
		}
		const osg::Uniform & uniform=*uniform_ptr;

		osg::Program::PerContextProgram* self=Luna< osg::Referenced >::checkSubType< osg::Program::PerContextProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Program::PerContextProgram::apply(const osg::Uniform &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(uniform);

		return 0;
	}

	// const osg::Program::ActiveUniformMap & osg::Program::PerContextProgram::getActiveUniforms() const
	static int _bind_getActiveUniforms(lua_State *L) {
		if (!_lg_typecheck_getActiveUniforms(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Program::ActiveUniformMap & osg::Program::PerContextProgram::getActiveUniforms() const function, expected prototype:\nconst osg::Program::ActiveUniformMap & osg::Program::PerContextProgram::getActiveUniforms() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Program::PerContextProgram* self=Luna< osg::Referenced >::checkSubType< osg::Program::PerContextProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Program::ActiveUniformMap & osg::Program::PerContextProgram::getActiveUniforms() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Program::ActiveUniformMap* lret = &self->getActiveUniforms();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Program::ActiveUniformMap >::push(L,lret,false);

		return 1;
	}

	// const osg::Program::ActiveVarInfoMap & osg::Program::PerContextProgram::getActiveAttribs() const
	static int _bind_getActiveAttribs(lua_State *L) {
		if (!_lg_typecheck_getActiveAttribs(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Program::ActiveVarInfoMap & osg::Program::PerContextProgram::getActiveAttribs() const function, expected prototype:\nconst osg::Program::ActiveVarInfoMap & osg::Program::PerContextProgram::getActiveAttribs() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Program::PerContextProgram* self=Luna< osg::Referenced >::checkSubType< osg::Program::PerContextProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Program::ActiveVarInfoMap & osg::Program::PerContextProgram::getActiveAttribs() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Program::ActiveVarInfoMap* lret = &self->getActiveAttribs();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Program::ActiveVarInfoMap >::push(L,lret,false);

		return 1;
	}

	// int osg::Program::PerContextProgram::getUniformLocation(unsigned int uniformNameID) const
	static int _bind_getUniformLocation_overload_1(lua_State *L) {
		if (!_lg_typecheck_getUniformLocation_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in int osg::Program::PerContextProgram::getUniformLocation(unsigned int uniformNameID) const function, expected prototype:\nint osg::Program::PerContextProgram::getUniformLocation(unsigned int uniformNameID) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int uniformNameID=(unsigned int)lua_tointeger(L,2);

		osg::Program::PerContextProgram* self=Luna< osg::Referenced >::checkSubType< osg::Program::PerContextProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::Program::PerContextProgram::getUniformLocation(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getUniformLocation(uniformNameID);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Program::PerContextProgram::getUniformLocation(const std::string & uniformName) const
	static int _bind_getUniformLocation_overload_2(lua_State *L) {
		if (!_lg_typecheck_getUniformLocation_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in int osg::Program::PerContextProgram::getUniformLocation(const std::string & uniformName) const function, expected prototype:\nint osg::Program::PerContextProgram::getUniformLocation(const std::string & uniformName) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string uniformName(lua_tostring(L,2),lua_objlen(L,2));

		osg::Program::PerContextProgram* self=Luna< osg::Referenced >::checkSubType< osg::Program::PerContextProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::Program::PerContextProgram::getUniformLocation(const std::string &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getUniformLocation(uniformName);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Program::PerContextProgram::getUniformLocation
	static int _bind_getUniformLocation(lua_State *L) {
		if (_lg_typecheck_getUniformLocation_overload_1(L)) return _bind_getUniformLocation_overload_1(L);
		if (_lg_typecheck_getUniformLocation_overload_2(L)) return _bind_getUniformLocation_overload_2(L);

		luaL_error(L, "error in function getUniformLocation, cannot match any of the overloads for function getUniformLocation:\n  getUniformLocation(unsigned int)\n  getUniformLocation(const std::string &)\n");
		return 0;
	}

	// int osg::Program::PerContextProgram::getAttribLocation(const std::string & name) const
	static int _bind_getAttribLocation(lua_State *L) {
		if (!_lg_typecheck_getAttribLocation(L)) {
			luaL_error(L, "luna typecheck failed in int osg::Program::PerContextProgram::getAttribLocation(const std::string & name) const function, expected prototype:\nint osg::Program::PerContextProgram::getAttribLocation(const std::string & name) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::Program::PerContextProgram* self=Luna< osg::Referenced >::checkSubType< osg::Program::PerContextProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::Program::PerContextProgram::getAttribLocation(const std::string &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getAttribLocation(name);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Program::PerContextProgram::addShaderToAttach(osg::Shader * shader)
	static int _bind_addShaderToAttach(lua_State *L) {
		if (!_lg_typecheck_addShaderToAttach(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Program::PerContextProgram::addShaderToAttach(osg::Shader * shader) function, expected prototype:\nvoid osg::Program::PerContextProgram::addShaderToAttach(osg::Shader * shader)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Shader* shader=(Luna< osg::Referenced >::checkSubType< osg::Shader >(L,2));

		osg::Program::PerContextProgram* self=Luna< osg::Referenced >::checkSubType< osg::Program::PerContextProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Program::PerContextProgram::addShaderToAttach(osg::Shader *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addShaderToAttach(shader);

		return 0;
	}

	// void osg::Program::PerContextProgram::addShaderToDetach(osg::Shader * shader)
	static int _bind_addShaderToDetach(lua_State *L) {
		if (!_lg_typecheck_addShaderToDetach(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Program::PerContextProgram::addShaderToDetach(osg::Shader * shader) function, expected prototype:\nvoid osg::Program::PerContextProgram::addShaderToDetach(osg::Shader * shader)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Shader* shader=(Luna< osg::Referenced >::checkSubType< osg::Shader >(L,2));

		osg::Program::PerContextProgram* self=Luna< osg::Referenced >::checkSubType< osg::Program::PerContextProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Program::PerContextProgram::addShaderToDetach(osg::Shader *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addShaderToDetach(shader);

		return 0;
	}

	// void osg::Program::PerContextProgram::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Program::PerContextProgram::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::Program::PerContextProgram::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::Program::PerContextProgram* self=Luna< osg::Referenced >::checkSubType< osg::Program::PerContextProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Program::PerContextProgram::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PerContextProgram::setThreadSafeRefUnref(threadSafe);

		return 0;
	}


	// Operator binds:

};

osg::Program::PerContextProgram* LunaTraits< osg::Program::PerContextProgram >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Program_PerContextProgram::_bind_ctor(L);
}

void LunaTraits< osg::Program::PerContextProgram >::_bind_dtor(osg::Program::PerContextProgram* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Program::PerContextProgram >::className[] = "Program_PerContextProgram";
const char LunaTraits< osg::Program::PerContextProgram >::fullName[] = "osg::Program::PerContextProgram";
const char LunaTraits< osg::Program::PerContextProgram >::moduleName[] = "osg";
const char* LunaTraits< osg::Program::PerContextProgram >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::Program::PerContextProgram >::hash = 80188167;
const int LunaTraits< osg::Program::PerContextProgram >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Program::PerContextProgram >::methods[] = {
	{"getHandle", &luna_wrapper_osg_Program_PerContextProgram::_bind_getHandle},
	{"requestLink", &luna_wrapper_osg_Program_PerContextProgram::_bind_requestLink},
	{"linkProgram", &luna_wrapper_osg_Program_PerContextProgram::_bind_linkProgram},
	{"validateProgram", &luna_wrapper_osg_Program_PerContextProgram::_bind_validateProgram},
	{"needsLink", &luna_wrapper_osg_Program_PerContextProgram::_bind_needsLink},
	{"isLinked", &luna_wrapper_osg_Program_PerContextProgram::_bind_isLinked},
	{"getInfoLog", &luna_wrapper_osg_Program_PerContextProgram::_bind_getInfoLog},
	{"loadedBinary", &luna_wrapper_osg_Program_PerContextProgram::_bind_loadedBinary},
	{"compileProgramBinary", &luna_wrapper_osg_Program_PerContextProgram::_bind_compileProgramBinary},
	{"useProgram", &luna_wrapper_osg_Program_PerContextProgram::_bind_useProgram},
	{"resetAppliedUniforms", &luna_wrapper_osg_Program_PerContextProgram::_bind_resetAppliedUniforms},
	{"apply", &luna_wrapper_osg_Program_PerContextProgram::_bind_apply},
	{"getActiveUniforms", &luna_wrapper_osg_Program_PerContextProgram::_bind_getActiveUniforms},
	{"getActiveAttribs", &luna_wrapper_osg_Program_PerContextProgram::_bind_getActiveAttribs},
	{"getUniformLocation", &luna_wrapper_osg_Program_PerContextProgram::_bind_getUniformLocation},
	{"getAttribLocation", &luna_wrapper_osg_Program_PerContextProgram::_bind_getAttribLocation},
	{"addShaderToAttach", &luna_wrapper_osg_Program_PerContextProgram::_bind_addShaderToAttach},
	{"addShaderToDetach", &luna_wrapper_osg_Program_PerContextProgram::_bind_addShaderToDetach},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_Program_PerContextProgram::_bind_base_setThreadSafeRefUnref},
	{"fromVoid", &luna_wrapper_osg_Program_PerContextProgram::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_Program_PerContextProgram::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_Program_PerContextProgram::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Program::PerContextProgram >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Program_PerContextProgram::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Program::PerContextProgram >::enumValues[] = {
	{0,0}
};


