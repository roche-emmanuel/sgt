#include <plug_common.h>

#include <luna/wrappers/wrapper_ork_Module.h>

class luna_wrapper_ork_Module {
public:
	typedef Luna< ork::Module > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::Object* self=(Luna< ork::Object >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<ork::Object,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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

		ork::Module* self= (ork::Module*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::Module >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1381405) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< ork::Object >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_Object(lua_State *L) {
		// all checked are already performed before reaching this point.
		//ork::Module* ptr= dynamic_cast< ork::Module* >(Luna< ork::Object >::check(L,1));
		ork::Module* ptr= luna_caster< ork::Object, ork::Module >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< ork::Module >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		if( lua_type(L,5)!=LUA_TSTRING ) return false;
		if( lua_type(L,6)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_7(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		if( lua_type(L,5)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_8(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		if( lua_type(L,5)!=LUA_TSTRING ) return false;
		if( lua_type(L,6)!=LUA_TSTRING ) return false;
		if( lua_type(L,7)!=LUA_TSTRING ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getVertexShaderId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTessControlShaderId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTessEvalShaderId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getGeometryShaderId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFragmentShaderId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUsers(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFeedbackMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addFeedbackVarying(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addInitialValue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Value >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_toString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// ork::Module::Module(int version, const char * source)
	static ork::Module* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::Module::Module(int version, const char * source) function, expected prototype:\nork::Module::Module(int version, const char * source)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int version=(int)lua_tointeger(L,1);
		const char * source=(const char *)lua_tostring(L,2);

		return new ork::Module(version, source);
	}

	// ork::Module::Module(int version, const char * vertex, const char * fragment)
	static ork::Module* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::Module::Module(int version, const char * vertex, const char * fragment) function, expected prototype:\nork::Module::Module(int version, const char * vertex, const char * fragment)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int version=(int)lua_tointeger(L,1);
		const char * vertex=(const char *)lua_tostring(L,2);
		const char * fragment=(const char *)lua_tostring(L,3);

		return new ork::Module(version, vertex, fragment);
	}

	// ork::Module::Module(int version, const char * vertex, const char * geometry, const char * fragment)
	static ork::Module* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in ork::Module::Module(int version, const char * vertex, const char * geometry, const char * fragment) function, expected prototype:\nork::Module::Module(int version, const char * vertex, const char * geometry, const char * fragment)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int version=(int)lua_tointeger(L,1);
		const char * vertex=(const char *)lua_tostring(L,2);
		const char * geometry=(const char *)lua_tostring(L,3);
		const char * fragment=(const char *)lua_tostring(L,4);

		return new ork::Module(version, vertex, geometry, fragment);
	}

	// ork::Module::Module(int version, const char * vertex, const char * tessControl, const char * tessEvaluation, const char * geometry, const char * fragment)
	static ork::Module* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in ork::Module::Module(int version, const char * vertex, const char * tessControl, const char * tessEvaluation, const char * geometry, const char * fragment) function, expected prototype:\nork::Module::Module(int version, const char * vertex, const char * tessControl, const char * tessEvaluation, const char * geometry, const char * fragment)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int version=(int)lua_tointeger(L,1);
		const char * vertex=(const char *)lua_tostring(L,2);
		const char * tessControl=(const char *)lua_tostring(L,3);
		const char * tessEvaluation=(const char *)lua_tostring(L,4);
		const char * geometry=(const char *)lua_tostring(L,5);
		const char * fragment=(const char *)lua_tostring(L,6);

		return new ork::Module(version, vertex, tessControl, tessEvaluation, geometry, fragment);
	}

	// ork::Module::Module(lua_Table * data, int version, const char * source)
	static ork::Module* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in ork::Module::Module(lua_Table * data, int version, const char * source) function, expected prototype:\nork::Module::Module(lua_Table * data, int version, const char * source)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int version=(int)lua_tointeger(L,2);
		const char * source=(const char *)lua_tostring(L,3);

		return new wrapper_ork_Module(L,NULL, version, source);
	}

	// ork::Module::Module(lua_Table * data, int version, const char * vertex, const char * fragment)
	static ork::Module* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in ork::Module::Module(lua_Table * data, int version, const char * vertex, const char * fragment) function, expected prototype:\nork::Module::Module(lua_Table * data, int version, const char * vertex, const char * fragment)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int version=(int)lua_tointeger(L,2);
		const char * vertex=(const char *)lua_tostring(L,3);
		const char * fragment=(const char *)lua_tostring(L,4);

		return new wrapper_ork_Module(L,NULL, version, vertex, fragment);
	}

	// ork::Module::Module(lua_Table * data, int version, const char * vertex, const char * geometry, const char * fragment)
	static ork::Module* _bind_ctor_overload_7(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_7(L)) {
			luaL_error(L, "luna typecheck failed in ork::Module::Module(lua_Table * data, int version, const char * vertex, const char * geometry, const char * fragment) function, expected prototype:\nork::Module::Module(lua_Table * data, int version, const char * vertex, const char * geometry, const char * fragment)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int version=(int)lua_tointeger(L,2);
		const char * vertex=(const char *)lua_tostring(L,3);
		const char * geometry=(const char *)lua_tostring(L,4);
		const char * fragment=(const char *)lua_tostring(L,5);

		return new wrapper_ork_Module(L,NULL, version, vertex, geometry, fragment);
	}

	// ork::Module::Module(lua_Table * data, int version, const char * vertex, const char * tessControl, const char * tessEvaluation, const char * geometry, const char * fragment)
	static ork::Module* _bind_ctor_overload_8(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_8(L)) {
			luaL_error(L, "luna typecheck failed in ork::Module::Module(lua_Table * data, int version, const char * vertex, const char * tessControl, const char * tessEvaluation, const char * geometry, const char * fragment) function, expected prototype:\nork::Module::Module(lua_Table * data, int version, const char * vertex, const char * tessControl, const char * tessEvaluation, const char * geometry, const char * fragment)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int version=(int)lua_tointeger(L,2);
		const char * vertex=(const char *)lua_tostring(L,3);
		const char * tessControl=(const char *)lua_tostring(L,4);
		const char * tessEvaluation=(const char *)lua_tostring(L,5);
		const char * geometry=(const char *)lua_tostring(L,6);
		const char * fragment=(const char *)lua_tostring(L,7);

		return new wrapper_ork_Module(L,NULL, version, vertex, tessControl, tessEvaluation, geometry, fragment);
	}

	// Overload binder for ork::Module::Module
	static ork::Module* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);
		if (_lg_typecheck_ctor_overload_7(L)) return _bind_ctor_overload_7(L);
		if (_lg_typecheck_ctor_overload_8(L)) return _bind_ctor_overload_8(L);

		luaL_error(L, "error in function Module, cannot match any of the overloads for function Module:\n  Module(int, const char *)\n  Module(int, const char *, const char *)\n  Module(int, const char *, const char *, const char *)\n  Module(int, const char *, const char *, const char *, const char *, const char *)\n  Module(lua_Table *, int, const char *)\n  Module(lua_Table *, int, const char *, const char *)\n  Module(lua_Table *, int, const char *, const char *, const char *)\n  Module(lua_Table *, int, const char *, const char *, const char *, const char *, const char *)\n");
		return NULL;
	}


	// Function binds:
	// int ork::Module::getVertexShaderId() const
	static int _bind_getVertexShaderId(lua_State *L) {
		if (!_lg_typecheck_getVertexShaderId(L)) {
			luaL_error(L, "luna typecheck failed in int ork::Module::getVertexShaderId() const function, expected prototype:\nint ork::Module::getVertexShaderId() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Module* self=Luna< ork::Object >::checkSubType< ork::Module >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int ork::Module::getVertexShaderId() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getVertexShaderId();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int ork::Module::getTessControlShaderId() const
	static int _bind_getTessControlShaderId(lua_State *L) {
		if (!_lg_typecheck_getTessControlShaderId(L)) {
			luaL_error(L, "luna typecheck failed in int ork::Module::getTessControlShaderId() const function, expected prototype:\nint ork::Module::getTessControlShaderId() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Module* self=Luna< ork::Object >::checkSubType< ork::Module >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int ork::Module::getTessControlShaderId() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getTessControlShaderId();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int ork::Module::getTessEvalShaderId() const
	static int _bind_getTessEvalShaderId(lua_State *L) {
		if (!_lg_typecheck_getTessEvalShaderId(L)) {
			luaL_error(L, "luna typecheck failed in int ork::Module::getTessEvalShaderId() const function, expected prototype:\nint ork::Module::getTessEvalShaderId() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Module* self=Luna< ork::Object >::checkSubType< ork::Module >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int ork::Module::getTessEvalShaderId() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getTessEvalShaderId();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int ork::Module::getGeometryShaderId() const
	static int _bind_getGeometryShaderId(lua_State *L) {
		if (!_lg_typecheck_getGeometryShaderId(L)) {
			luaL_error(L, "luna typecheck failed in int ork::Module::getGeometryShaderId() const function, expected prototype:\nint ork::Module::getGeometryShaderId() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Module* self=Luna< ork::Object >::checkSubType< ork::Module >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int ork::Module::getGeometryShaderId() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getGeometryShaderId();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int ork::Module::getFragmentShaderId() const
	static int _bind_getFragmentShaderId(lua_State *L) {
		if (!_lg_typecheck_getFragmentShaderId(L)) {
			luaL_error(L, "luna typecheck failed in int ork::Module::getFragmentShaderId() const function, expected prototype:\nint ork::Module::getFragmentShaderId() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Module* self=Luna< ork::Object >::checkSubType< ork::Module >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int ork::Module::getFragmentShaderId() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getFragmentShaderId();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const std::set< ork::Program * > & ork::Module::getUsers() const
	static int _bind_getUsers(lua_State *L) {
		if (!_lg_typecheck_getUsers(L)) {
			luaL_error(L, "luna typecheck failed in const std::set< ork::Program * > & ork::Module::getUsers() const function, expected prototype:\nconst std::set< ork::Program * > & ork::Module::getUsers() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Module* self=Luna< ork::Object >::checkSubType< ork::Module >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const std::set< ork::Program * > & ork::Module::getUsers() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const std::set< ork::Program * >* lret = &self->getUsers();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< std::set< ork::Program * > >::push(L,lret,false);

		return 1;
	}

	// void ork::Module::setFeedbackMode(bool interleaved)
	static int _bind_setFeedbackMode(lua_State *L) {
		if (!_lg_typecheck_setFeedbackMode(L)) {
			luaL_error(L, "luna typecheck failed in void ork::Module::setFeedbackMode(bool interleaved) function, expected prototype:\nvoid ork::Module::setFeedbackMode(bool interleaved)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool interleaved=(bool)(lua_toboolean(L,2)==1);

		ork::Module* self=Luna< ork::Object >::checkSubType< ork::Module >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::Module::setFeedbackMode(bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setFeedbackMode(interleaved);

		return 0;
	}

	// void ork::Module::addFeedbackVarying(const std::string & name)
	static int _bind_addFeedbackVarying(lua_State *L) {
		if (!_lg_typecheck_addFeedbackVarying(L)) {
			luaL_error(L, "luna typecheck failed in void ork::Module::addFeedbackVarying(const std::string & name) function, expected prototype:\nvoid ork::Module::addFeedbackVarying(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::Module* self=Luna< ork::Object >::checkSubType< ork::Module >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::Module::addFeedbackVarying(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addFeedbackVarying(name);

		return 0;
	}

	// void ork::Module::addInitialValue(ork::ptr< ork::Value > value)
	static int _bind_addInitialValue(lua_State *L) {
		if (!_lg_typecheck_addInitialValue(L)) {
			luaL_error(L, "luna typecheck failed in void ork::Module::addInitialValue(ork::ptr< ork::Value > value) function, expected prototype:\nvoid ork::Module::addInitialValue(ork::ptr< ork::Value > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Value > value = Luna< ork::Object >::checkSubType< ork::Value >(L,2);

		ork::Module* self=Luna< ork::Object >::checkSubType< ork::Module >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::Module::addInitialValue(ork::ptr< ork::Value >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addInitialValue(value);

		return 0;
	}

	// const char * ork::Module::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * ork::Module::base_toString() function, expected prototype:\nconst char * ork::Module::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Module* self=Luna< ork::Object >::checkSubType< ork::Module >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * ork::Module::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Module::toString();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

ork::Module* LunaTraits< ork::Module >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ork_Module::_bind_ctor(L);
}

void LunaTraits< ork::Module >::_bind_dtor(ork::Module* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< ork::Module >::className[] = "Module";
const char LunaTraits< ork::Module >::fullName[] = "ork::Module";
const char LunaTraits< ork::Module >::moduleName[] = "ork";
const char* LunaTraits< ork::Module >::parents[] = {"ork.Object", 0};
const int LunaTraits< ork::Module >::hash = 55965781;
const int LunaTraits< ork::Module >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< ork::Module >::methods[] = {
	{"getVertexShaderId", &luna_wrapper_ork_Module::_bind_getVertexShaderId},
	{"getTessControlShaderId", &luna_wrapper_ork_Module::_bind_getTessControlShaderId},
	{"getTessEvalShaderId", &luna_wrapper_ork_Module::_bind_getTessEvalShaderId},
	{"getGeometryShaderId", &luna_wrapper_ork_Module::_bind_getGeometryShaderId},
	{"getFragmentShaderId", &luna_wrapper_ork_Module::_bind_getFragmentShaderId},
	{"getUsers", &luna_wrapper_ork_Module::_bind_getUsers},
	{"setFeedbackMode", &luna_wrapper_ork_Module::_bind_setFeedbackMode},
	{"addFeedbackVarying", &luna_wrapper_ork_Module::_bind_addFeedbackVarying},
	{"addInitialValue", &luna_wrapper_ork_Module::_bind_addInitialValue},
	{"base_toString", &luna_wrapper_ork_Module::_bind_base_toString},
	{"fromVoid", &luna_wrapper_ork_Module::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_Module::_bind_asVoid},
	{"getTable", &luna_wrapper_ork_Module::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< ork::Module >::converters[] = {
	{"ork::Object", &luna_wrapper_ork_Module::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< ork::Module >::enumValues[] = {
	{0,0}
};


