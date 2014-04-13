#include <plug_common.h>

#include <luna/wrappers/wrapper_ork_Program.h>

class luna_wrapper_ork_Program {
public:
	typedef Luna< ork::Program > luna_t;

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

		ork::Program* self= (ork::Program*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::Program >::push(L,self,false);
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
		//ork::Program* ptr= dynamic_cast< ork::Program* >(Luna< ork::Object >::check(L,1));
		ork::Program* ptr= luna_caster< ork::Object, ork::Program >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< ork::Program >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,8893137) ) return false;
		if( (!(Luna< std::vector< ork::ptr< ork::Module > > >::check(L,1))) ) return false;
		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Module >(L,1) ) return false;
		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,1) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,2) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,3) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,4) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,5) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,8893137) ) return false;
		if( (!(Luna< std::vector< ork::ptr< ork::Module > > >::check(L,2))) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Module >(L,2) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_7(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && lua_isboolean(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_8(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,2) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,3) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,4) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,5) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,6) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getModuleCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getModule(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUniforms(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUniform(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUniform1f(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUniform1d(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUniform1i(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUniform1ui(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUniform1b(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUniform2f(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUniform2d(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUniform2i(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUniform2ui(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUniform2b(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUniform3f(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUniform3d(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUniform3i(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUniform3ui(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUniform3b(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUniform4f(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUniform4d(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUniform4i(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUniform4ui(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUniform4b(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUniformMatrix2f(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUniformMatrix2d(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUniformMatrix3f(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUniformMatrix3d(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUniformMatrix4f(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUniformMatrix4d(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUniformMatrix2x3f(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUniformMatrix2x3d(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUniformMatrix2x4f(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUniformMatrix2x4d(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUniformMatrix3x2f(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUniformMatrix3x2d(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUniformMatrix3x4f(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUniformMatrix3x4d(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUniformMatrix4x2f(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUniformMatrix4x2d(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUniformMatrix4x3f(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUniformMatrix4x3d(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUniformSampler(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUniformSubroutine(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUniformBlock(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getBinary(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_toString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// ork::Program::Program(const std::vector< ork::ptr< ork::Module > > & modules, bool separable = false)
	static ork::Program* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::Program::Program(const std::vector< ork::ptr< ork::Module > > & modules, bool separable = false) function, expected prototype:\nork::Program::Program(const std::vector< ork::ptr< ork::Module > > & modules, bool separable = false)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const std::vector< ork::ptr< ork::Module > >* modules_ptr=(Luna< std::vector< ork::ptr< ork::Module > > >::check(L,1));
		if( !modules_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg modules in ork::Program::Program function");
		}
		const std::vector< ork::ptr< ork::Module > > & modules=*modules_ptr;
		bool separable=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)false;

		return new ork::Program(modules, separable);
	}

	// ork::Program::Program(ork::ptr< ork::Module > module, bool separable = false)
	static ork::Program* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::Program::Program(ork::ptr< ork::Module > module, bool separable = false) function, expected prototype:\nork::Program::Program(ork::ptr< ork::Module > module, bool separable = false)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		ork::ptr< ork::Module > module = Luna< ork::Object >::checkSubType< ork::Module >(L,1);
		bool separable=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)false;

		return new ork::Program(module, separable);
	}

	// ork::Program::Program(unsigned int format, int length, unsigned char * binary, bool separable = false)
	static ork::Program* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in ork::Program::Program(unsigned int format, int length, unsigned char * binary, bool separable = false) function, expected prototype:\nork::Program::Program(unsigned int format, int length, unsigned char * binary, bool separable = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned int format=(unsigned int)lua_tointeger(L,1);
		int length=(int)lua_tointeger(L,2);
		unsigned char binary = (unsigned char)(lua_tointeger(L,3));
		bool separable=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)false;

		return new ork::Program(format, length, &binary, separable);
	}

	// ork::Program::Program(ork::ptr< ork::Program > vertex, ork::ptr< ork::Program > tessControl, ork::ptr< ork::Program > tessEval, ork::ptr< ork::Program > geometry, ork::ptr< ork::Program > fragment)
	static ork::Program* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in ork::Program::Program(ork::ptr< ork::Program > vertex, ork::ptr< ork::Program > tessControl, ork::ptr< ork::Program > tessEval, ork::ptr< ork::Program > geometry, ork::ptr< ork::Program > fragment) function, expected prototype:\nork::Program::Program(ork::ptr< ork::Program > vertex, ork::ptr< ork::Program > tessControl, ork::ptr< ork::Program > tessEval, ork::ptr< ork::Program > geometry, ork::ptr< ork::Program > fragment)\nClass arguments details:\narg 1 ID = [unknown]\narg 2 ID = [unknown]\narg 3 ID = [unknown]\narg 4 ID = [unknown]\narg 5 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Program > vertex = Luna< ork::Object >::checkSubType< ork::Program >(L,1);
		ork::ptr< ork::Program > tessControl = Luna< ork::Object >::checkSubType< ork::Program >(L,2);
		ork::ptr< ork::Program > tessEval = Luna< ork::Object >::checkSubType< ork::Program >(L,3);
		ork::ptr< ork::Program > geometry = Luna< ork::Object >::checkSubType< ork::Program >(L,4);
		ork::ptr< ork::Program > fragment = Luna< ork::Object >::checkSubType< ork::Program >(L,5);

		return new ork::Program(vertex, tessControl, tessEval, geometry, fragment);
	}

	// ork::Program::Program(lua_Table * data, const std::vector< ork::ptr< ork::Module > > & modules, bool separable = false)
	static ork::Program* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in ork::Program::Program(lua_Table * data, const std::vector< ork::ptr< ork::Module > > & modules, bool separable = false) function, expected prototype:\nork::Program::Program(lua_Table * data, const std::vector< ork::ptr< ork::Module > > & modules, bool separable = false)\nClass arguments details:\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const std::vector< ork::ptr< ork::Module > >* modules_ptr=(Luna< std::vector< ork::ptr< ork::Module > > >::check(L,2));
		if( !modules_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg modules in ork::Program::Program function");
		}
		const std::vector< ork::ptr< ork::Module > > & modules=*modules_ptr;
		bool separable=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)false;

		return new wrapper_ork_Program(L,NULL, modules, separable);
	}

	// ork::Program::Program(lua_Table * data, ork::ptr< ork::Module > module, bool separable = false)
	static ork::Program* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in ork::Program::Program(lua_Table * data, ork::ptr< ork::Module > module, bool separable = false) function, expected prototype:\nork::Program::Program(lua_Table * data, ork::ptr< ork::Module > module, bool separable = false)\nClass arguments details:\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		ork::ptr< ork::Module > module = Luna< ork::Object >::checkSubType< ork::Module >(L,2);
		bool separable=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)false;

		return new wrapper_ork_Program(L,NULL, module, separable);
	}

	// ork::Program::Program(lua_Table * data, unsigned int format, int length, unsigned char * binary, bool separable = false)
	static ork::Program* _bind_ctor_overload_7(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_7(L)) {
			luaL_error(L, "luna typecheck failed in ork::Program::Program(lua_Table * data, unsigned int format, int length, unsigned char * binary, bool separable = false) function, expected prototype:\nork::Program::Program(lua_Table * data, unsigned int format, int length, unsigned char * binary, bool separable = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned int format=(unsigned int)lua_tointeger(L,2);
		int length=(int)lua_tointeger(L,3);
		unsigned char binary = (unsigned char)(lua_tointeger(L,4));
		bool separable=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : (bool)false;

		return new wrapper_ork_Program(L,NULL, format, length, &binary, separable);
	}

	// ork::Program::Program(lua_Table * data, ork::ptr< ork::Program > vertex, ork::ptr< ork::Program > tessControl, ork::ptr< ork::Program > tessEval, ork::ptr< ork::Program > geometry, ork::ptr< ork::Program > fragment)
	static ork::Program* _bind_ctor_overload_8(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_8(L)) {
			luaL_error(L, "luna typecheck failed in ork::Program::Program(lua_Table * data, ork::ptr< ork::Program > vertex, ork::ptr< ork::Program > tessControl, ork::ptr< ork::Program > tessEval, ork::ptr< ork::Program > geometry, ork::ptr< ork::Program > fragment) function, expected prototype:\nork::Program::Program(lua_Table * data, ork::ptr< ork::Program > vertex, ork::ptr< ork::Program > tessControl, ork::ptr< ork::Program > tessEval, ork::ptr< ork::Program > geometry, ork::ptr< ork::Program > fragment)\nClass arguments details:\narg 2 ID = [unknown]\narg 3 ID = [unknown]\narg 4 ID = [unknown]\narg 5 ID = [unknown]\narg 6 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Program > vertex = Luna< ork::Object >::checkSubType< ork::Program >(L,2);
		ork::ptr< ork::Program > tessControl = Luna< ork::Object >::checkSubType< ork::Program >(L,3);
		ork::ptr< ork::Program > tessEval = Luna< ork::Object >::checkSubType< ork::Program >(L,4);
		ork::ptr< ork::Program > geometry = Luna< ork::Object >::checkSubType< ork::Program >(L,5);
		ork::ptr< ork::Program > fragment = Luna< ork::Object >::checkSubType< ork::Program >(L,6);

		return new wrapper_ork_Program(L,NULL, vertex, tessControl, tessEval, geometry, fragment);
	}

	// Overload binder for ork::Program::Program
	static ork::Program* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);
		if (_lg_typecheck_ctor_overload_7(L)) return _bind_ctor_overload_7(L);
		if (_lg_typecheck_ctor_overload_8(L)) return _bind_ctor_overload_8(L);

		luaL_error(L, "error in function Program, cannot match any of the overloads for function Program:\n  Program(const std::vector< ork::ptr< ork::Module > > &, bool)\n  Program(ork::ptr< ork::Module >, bool)\n  Program(unsigned int, int, unsigned char *, bool)\n  Program(ork::ptr< ork::Program >, ork::ptr< ork::Program >, ork::ptr< ork::Program >, ork::ptr< ork::Program >, ork::ptr< ork::Program >)\n  Program(lua_Table *, const std::vector< ork::ptr< ork::Module > > &, bool)\n  Program(lua_Table *, ork::ptr< ork::Module >, bool)\n  Program(lua_Table *, unsigned int, int, unsigned char *, bool)\n  Program(lua_Table *, ork::ptr< ork::Program >, ork::ptr< ork::Program >, ork::ptr< ork::Program >, ork::ptr< ork::Program >, ork::ptr< ork::Program >)\n");
		return NULL;
	}


	// Function binds:
	// int ork::Program::getId() const
	static int _bind_getId(lua_State *L) {
		if (!_lg_typecheck_getId(L)) {
			luaL_error(L, "luna typecheck failed in int ork::Program::getId() const function, expected prototype:\nint ork::Program::getId() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Program* self=Luna< ork::Object >::checkSubType< ork::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int ork::Program::getId() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getId();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int ork::Program::getModuleCount() const
	static int _bind_getModuleCount(lua_State *L) {
		if (!_lg_typecheck_getModuleCount(L)) {
			luaL_error(L, "luna typecheck failed in int ork::Program::getModuleCount() const function, expected prototype:\nint ork::Program::getModuleCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Program* self=Luna< ork::Object >::checkSubType< ork::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int ork::Program::getModuleCount() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getModuleCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// ork::ptr< ork::Module > ork::Program::getModule(int index) const
	static int _bind_getModule(lua_State *L) {
		if (!_lg_typecheck_getModule(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Module > ork::Program::getModule(int index) const function, expected prototype:\nork::ptr< ork::Module > ork::Program::getModule(int index) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);

		ork::Program* self=Luna< ork::Object >::checkSubType< ork::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Module > ork::Program::getModule(int) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Module > lret = self->getModule(index);
		Luna< ork::Module >::push(L,lret.get(),false);

		return 1;
	}

	// std::vector< ork::ptr< ork::Uniform > > ork::Program::getUniforms() const
	static int _bind_getUniforms(lua_State *L) {
		if (!_lg_typecheck_getUniforms(L)) {
			luaL_error(L, "luna typecheck failed in std::vector< ork::ptr< ork::Uniform > > ork::Program::getUniforms() const function, expected prototype:\nstd::vector< ork::ptr< ork::Uniform > > ork::Program::getUniforms() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Program* self=Luna< ork::Object >::checkSubType< ork::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call std::vector< ork::ptr< ork::Uniform > > ork::Program::getUniforms() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		std::vector< ork::ptr< ork::Uniform > > stack_lret = self->getUniforms();
		std::vector< ork::ptr< ork::Uniform > >* lret = new std::vector< ork::ptr< ork::Uniform > >(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< std::vector< ork::ptr< ork::Uniform > > >::push(L,lret,true);

		return 1;
	}

	// ork::ptr< ork::Uniform > ork::Program::getUniform(const std::string & name)
	static int _bind_getUniform(lua_State *L) {
		if (!_lg_typecheck_getUniform(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Uniform > ork::Program::getUniform(const std::string & name) function, expected prototype:\nork::ptr< ork::Uniform > ork::Program::getUniform(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::Program* self=Luna< ork::Object >::checkSubType< ork::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Uniform > ork::Program::getUniform(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Uniform > lret = self->getUniform(name);
		Luna< ork::Uniform >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::Uniform1f > ork::Program::getUniform1f(const std::string & name)
	static int _bind_getUniform1f(lua_State *L) {
		if (!_lg_typecheck_getUniform1f(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Uniform1f > ork::Program::getUniform1f(const std::string & name) function, expected prototype:\nork::ptr< ork::Uniform1f > ork::Program::getUniform1f(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::Program* self=Luna< ork::Object >::checkSubType< ork::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Uniform1f > ork::Program::getUniform1f(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Uniform1f > lret = self->getUniform1f(name);
		Luna< ork::Uniform1f >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::Uniform1d > ork::Program::getUniform1d(const std::string & name)
	static int _bind_getUniform1d(lua_State *L) {
		if (!_lg_typecheck_getUniform1d(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Uniform1d > ork::Program::getUniform1d(const std::string & name) function, expected prototype:\nork::ptr< ork::Uniform1d > ork::Program::getUniform1d(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::Program* self=Luna< ork::Object >::checkSubType< ork::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Uniform1d > ork::Program::getUniform1d(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Uniform1d > lret = self->getUniform1d(name);
		Luna< ork::Uniform1d >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::Uniform1i > ork::Program::getUniform1i(const std::string & name)
	static int _bind_getUniform1i(lua_State *L) {
		if (!_lg_typecheck_getUniform1i(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Uniform1i > ork::Program::getUniform1i(const std::string & name) function, expected prototype:\nork::ptr< ork::Uniform1i > ork::Program::getUniform1i(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::Program* self=Luna< ork::Object >::checkSubType< ork::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Uniform1i > ork::Program::getUniform1i(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Uniform1i > lret = self->getUniform1i(name);
		Luna< ork::Uniform1i >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::Uniform1ui > ork::Program::getUniform1ui(const std::string & name)
	static int _bind_getUniform1ui(lua_State *L) {
		if (!_lg_typecheck_getUniform1ui(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Uniform1ui > ork::Program::getUniform1ui(const std::string & name) function, expected prototype:\nork::ptr< ork::Uniform1ui > ork::Program::getUniform1ui(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::Program* self=Luna< ork::Object >::checkSubType< ork::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Uniform1ui > ork::Program::getUniform1ui(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Uniform1ui > lret = self->getUniform1ui(name);
		Luna< ork::Uniform1ui >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::Uniform1b > ork::Program::getUniform1b(const std::string & name)
	static int _bind_getUniform1b(lua_State *L) {
		if (!_lg_typecheck_getUniform1b(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Uniform1b > ork::Program::getUniform1b(const std::string & name) function, expected prototype:\nork::ptr< ork::Uniform1b > ork::Program::getUniform1b(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::Program* self=Luna< ork::Object >::checkSubType< ork::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Uniform1b > ork::Program::getUniform1b(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Uniform1b > lret = self->getUniform1b(name);
		Luna< ork::Uniform1b >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::Uniform2f > ork::Program::getUniform2f(const std::string & name)
	static int _bind_getUniform2f(lua_State *L) {
		if (!_lg_typecheck_getUniform2f(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Uniform2f > ork::Program::getUniform2f(const std::string & name) function, expected prototype:\nork::ptr< ork::Uniform2f > ork::Program::getUniform2f(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::Program* self=Luna< ork::Object >::checkSubType< ork::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Uniform2f > ork::Program::getUniform2f(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Uniform2f > lret = self->getUniform2f(name);
		Luna< ork::Uniform2f >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::Uniform2d > ork::Program::getUniform2d(const std::string & name)
	static int _bind_getUniform2d(lua_State *L) {
		if (!_lg_typecheck_getUniform2d(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Uniform2d > ork::Program::getUniform2d(const std::string & name) function, expected prototype:\nork::ptr< ork::Uniform2d > ork::Program::getUniform2d(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::Program* self=Luna< ork::Object >::checkSubType< ork::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Uniform2d > ork::Program::getUniform2d(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Uniform2d > lret = self->getUniform2d(name);
		Luna< ork::Uniform2d >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::Uniform2i > ork::Program::getUniform2i(const std::string & name)
	static int _bind_getUniform2i(lua_State *L) {
		if (!_lg_typecheck_getUniform2i(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Uniform2i > ork::Program::getUniform2i(const std::string & name) function, expected prototype:\nork::ptr< ork::Uniform2i > ork::Program::getUniform2i(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::Program* self=Luna< ork::Object >::checkSubType< ork::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Uniform2i > ork::Program::getUniform2i(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Uniform2i > lret = self->getUniform2i(name);
		Luna< ork::Uniform2i >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::Uniform2ui > ork::Program::getUniform2ui(const std::string & name)
	static int _bind_getUniform2ui(lua_State *L) {
		if (!_lg_typecheck_getUniform2ui(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Uniform2ui > ork::Program::getUniform2ui(const std::string & name) function, expected prototype:\nork::ptr< ork::Uniform2ui > ork::Program::getUniform2ui(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::Program* self=Luna< ork::Object >::checkSubType< ork::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Uniform2ui > ork::Program::getUniform2ui(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Uniform2ui > lret = self->getUniform2ui(name);
		Luna< ork::Uniform2ui >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::Uniform2b > ork::Program::getUniform2b(const std::string & name)
	static int _bind_getUniform2b(lua_State *L) {
		if (!_lg_typecheck_getUniform2b(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Uniform2b > ork::Program::getUniform2b(const std::string & name) function, expected prototype:\nork::ptr< ork::Uniform2b > ork::Program::getUniform2b(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::Program* self=Luna< ork::Object >::checkSubType< ork::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Uniform2b > ork::Program::getUniform2b(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Uniform2b > lret = self->getUniform2b(name);
		Luna< ork::Uniform2b >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::Uniform3f > ork::Program::getUniform3f(const std::string & name)
	static int _bind_getUniform3f(lua_State *L) {
		if (!_lg_typecheck_getUniform3f(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Uniform3f > ork::Program::getUniform3f(const std::string & name) function, expected prototype:\nork::ptr< ork::Uniform3f > ork::Program::getUniform3f(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::Program* self=Luna< ork::Object >::checkSubType< ork::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Uniform3f > ork::Program::getUniform3f(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Uniform3f > lret = self->getUniform3f(name);
		Luna< ork::Uniform3f >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::Uniform3d > ork::Program::getUniform3d(const std::string & name)
	static int _bind_getUniform3d(lua_State *L) {
		if (!_lg_typecheck_getUniform3d(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Uniform3d > ork::Program::getUniform3d(const std::string & name) function, expected prototype:\nork::ptr< ork::Uniform3d > ork::Program::getUniform3d(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::Program* self=Luna< ork::Object >::checkSubType< ork::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Uniform3d > ork::Program::getUniform3d(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Uniform3d > lret = self->getUniform3d(name);
		Luna< ork::Uniform3d >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::Uniform3i > ork::Program::getUniform3i(const std::string & name)
	static int _bind_getUniform3i(lua_State *L) {
		if (!_lg_typecheck_getUniform3i(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Uniform3i > ork::Program::getUniform3i(const std::string & name) function, expected prototype:\nork::ptr< ork::Uniform3i > ork::Program::getUniform3i(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::Program* self=Luna< ork::Object >::checkSubType< ork::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Uniform3i > ork::Program::getUniform3i(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Uniform3i > lret = self->getUniform3i(name);
		Luna< ork::Uniform3i >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::Uniform3ui > ork::Program::getUniform3ui(const std::string & name)
	static int _bind_getUniform3ui(lua_State *L) {
		if (!_lg_typecheck_getUniform3ui(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Uniform3ui > ork::Program::getUniform3ui(const std::string & name) function, expected prototype:\nork::ptr< ork::Uniform3ui > ork::Program::getUniform3ui(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::Program* self=Luna< ork::Object >::checkSubType< ork::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Uniform3ui > ork::Program::getUniform3ui(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Uniform3ui > lret = self->getUniform3ui(name);
		Luna< ork::Uniform3ui >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::Uniform3b > ork::Program::getUniform3b(const std::string & name)
	static int _bind_getUniform3b(lua_State *L) {
		if (!_lg_typecheck_getUniform3b(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Uniform3b > ork::Program::getUniform3b(const std::string & name) function, expected prototype:\nork::ptr< ork::Uniform3b > ork::Program::getUniform3b(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::Program* self=Luna< ork::Object >::checkSubType< ork::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Uniform3b > ork::Program::getUniform3b(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Uniform3b > lret = self->getUniform3b(name);
		Luna< ork::Uniform3b >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::Uniform4f > ork::Program::getUniform4f(const std::string & name)
	static int _bind_getUniform4f(lua_State *L) {
		if (!_lg_typecheck_getUniform4f(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Uniform4f > ork::Program::getUniform4f(const std::string & name) function, expected prototype:\nork::ptr< ork::Uniform4f > ork::Program::getUniform4f(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::Program* self=Luna< ork::Object >::checkSubType< ork::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Uniform4f > ork::Program::getUniform4f(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Uniform4f > lret = self->getUniform4f(name);
		Luna< ork::Uniform4f >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::Uniform4d > ork::Program::getUniform4d(const std::string & name)
	static int _bind_getUniform4d(lua_State *L) {
		if (!_lg_typecheck_getUniform4d(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Uniform4d > ork::Program::getUniform4d(const std::string & name) function, expected prototype:\nork::ptr< ork::Uniform4d > ork::Program::getUniform4d(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::Program* self=Luna< ork::Object >::checkSubType< ork::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Uniform4d > ork::Program::getUniform4d(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Uniform4d > lret = self->getUniform4d(name);
		Luna< ork::Uniform4d >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::Uniform4i > ork::Program::getUniform4i(const std::string & name)
	static int _bind_getUniform4i(lua_State *L) {
		if (!_lg_typecheck_getUniform4i(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Uniform4i > ork::Program::getUniform4i(const std::string & name) function, expected prototype:\nork::ptr< ork::Uniform4i > ork::Program::getUniform4i(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::Program* self=Luna< ork::Object >::checkSubType< ork::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Uniform4i > ork::Program::getUniform4i(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Uniform4i > lret = self->getUniform4i(name);
		Luna< ork::Uniform4i >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::Uniform4ui > ork::Program::getUniform4ui(const std::string & name)
	static int _bind_getUniform4ui(lua_State *L) {
		if (!_lg_typecheck_getUniform4ui(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Uniform4ui > ork::Program::getUniform4ui(const std::string & name) function, expected prototype:\nork::ptr< ork::Uniform4ui > ork::Program::getUniform4ui(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::Program* self=Luna< ork::Object >::checkSubType< ork::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Uniform4ui > ork::Program::getUniform4ui(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Uniform4ui > lret = self->getUniform4ui(name);
		Luna< ork::Uniform4ui >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::Uniform4b > ork::Program::getUniform4b(const std::string & name)
	static int _bind_getUniform4b(lua_State *L) {
		if (!_lg_typecheck_getUniform4b(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Uniform4b > ork::Program::getUniform4b(const std::string & name) function, expected prototype:\nork::ptr< ork::Uniform4b > ork::Program::getUniform4b(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::Program* self=Luna< ork::Object >::checkSubType< ork::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Uniform4b > ork::Program::getUniform4b(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Uniform4b > lret = self->getUniform4b(name);
		Luna< ork::Uniform4b >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::UniformMatrix2f > ork::Program::getUniformMatrix2f(const std::string & name)
	static int _bind_getUniformMatrix2f(lua_State *L) {
		if (!_lg_typecheck_getUniformMatrix2f(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::UniformMatrix2f > ork::Program::getUniformMatrix2f(const std::string & name) function, expected prototype:\nork::ptr< ork::UniformMatrix2f > ork::Program::getUniformMatrix2f(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::Program* self=Luna< ork::Object >::checkSubType< ork::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::UniformMatrix2f > ork::Program::getUniformMatrix2f(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::UniformMatrix2f > lret = self->getUniformMatrix2f(name);
		Luna< ork::UniformMatrix2f >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::UniformMatrix2d > ork::Program::getUniformMatrix2d(const std::string & name)
	static int _bind_getUniformMatrix2d(lua_State *L) {
		if (!_lg_typecheck_getUniformMatrix2d(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::UniformMatrix2d > ork::Program::getUniformMatrix2d(const std::string & name) function, expected prototype:\nork::ptr< ork::UniformMatrix2d > ork::Program::getUniformMatrix2d(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::Program* self=Luna< ork::Object >::checkSubType< ork::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::UniformMatrix2d > ork::Program::getUniformMatrix2d(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::UniformMatrix2d > lret = self->getUniformMatrix2d(name);
		Luna< ork::UniformMatrix2d >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::UniformMatrix3f > ork::Program::getUniformMatrix3f(const std::string & name)
	static int _bind_getUniformMatrix3f(lua_State *L) {
		if (!_lg_typecheck_getUniformMatrix3f(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::UniformMatrix3f > ork::Program::getUniformMatrix3f(const std::string & name) function, expected prototype:\nork::ptr< ork::UniformMatrix3f > ork::Program::getUniformMatrix3f(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::Program* self=Luna< ork::Object >::checkSubType< ork::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::UniformMatrix3f > ork::Program::getUniformMatrix3f(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::UniformMatrix3f > lret = self->getUniformMatrix3f(name);
		Luna< ork::UniformMatrix3f >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::UniformMatrix3d > ork::Program::getUniformMatrix3d(const std::string & name)
	static int _bind_getUniformMatrix3d(lua_State *L) {
		if (!_lg_typecheck_getUniformMatrix3d(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::UniformMatrix3d > ork::Program::getUniformMatrix3d(const std::string & name) function, expected prototype:\nork::ptr< ork::UniformMatrix3d > ork::Program::getUniformMatrix3d(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::Program* self=Luna< ork::Object >::checkSubType< ork::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::UniformMatrix3d > ork::Program::getUniformMatrix3d(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::UniformMatrix3d > lret = self->getUniformMatrix3d(name);
		Luna< ork::UniformMatrix3d >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::UniformMatrix4f > ork::Program::getUniformMatrix4f(const std::string & name)
	static int _bind_getUniformMatrix4f(lua_State *L) {
		if (!_lg_typecheck_getUniformMatrix4f(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::UniformMatrix4f > ork::Program::getUniformMatrix4f(const std::string & name) function, expected prototype:\nork::ptr< ork::UniformMatrix4f > ork::Program::getUniformMatrix4f(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::Program* self=Luna< ork::Object >::checkSubType< ork::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::UniformMatrix4f > ork::Program::getUniformMatrix4f(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::UniformMatrix4f > lret = self->getUniformMatrix4f(name);
		Luna< ork::UniformMatrix4f >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::UniformMatrix4d > ork::Program::getUniformMatrix4d(const std::string & name)
	static int _bind_getUniformMatrix4d(lua_State *L) {
		if (!_lg_typecheck_getUniformMatrix4d(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::UniformMatrix4d > ork::Program::getUniformMatrix4d(const std::string & name) function, expected prototype:\nork::ptr< ork::UniformMatrix4d > ork::Program::getUniformMatrix4d(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::Program* self=Luna< ork::Object >::checkSubType< ork::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::UniformMatrix4d > ork::Program::getUniformMatrix4d(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::UniformMatrix4d > lret = self->getUniformMatrix4d(name);
		Luna< ork::UniformMatrix4d >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::UniformMatrix2x3f > ork::Program::getUniformMatrix2x3f(const std::string & name)
	static int _bind_getUniformMatrix2x3f(lua_State *L) {
		if (!_lg_typecheck_getUniformMatrix2x3f(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::UniformMatrix2x3f > ork::Program::getUniformMatrix2x3f(const std::string & name) function, expected prototype:\nork::ptr< ork::UniformMatrix2x3f > ork::Program::getUniformMatrix2x3f(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::Program* self=Luna< ork::Object >::checkSubType< ork::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::UniformMatrix2x3f > ork::Program::getUniformMatrix2x3f(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::UniformMatrix2x3f > lret = self->getUniformMatrix2x3f(name);
		Luna< ork::UniformMatrix2x3f >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::UniformMatrix2x3d > ork::Program::getUniformMatrix2x3d(const std::string & name)
	static int _bind_getUniformMatrix2x3d(lua_State *L) {
		if (!_lg_typecheck_getUniformMatrix2x3d(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::UniformMatrix2x3d > ork::Program::getUniformMatrix2x3d(const std::string & name) function, expected prototype:\nork::ptr< ork::UniformMatrix2x3d > ork::Program::getUniformMatrix2x3d(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::Program* self=Luna< ork::Object >::checkSubType< ork::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::UniformMatrix2x3d > ork::Program::getUniformMatrix2x3d(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::UniformMatrix2x3d > lret = self->getUniformMatrix2x3d(name);
		Luna< ork::UniformMatrix2x3d >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::UniformMatrix2x4f > ork::Program::getUniformMatrix2x4f(const std::string & name)
	static int _bind_getUniformMatrix2x4f(lua_State *L) {
		if (!_lg_typecheck_getUniformMatrix2x4f(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::UniformMatrix2x4f > ork::Program::getUniformMatrix2x4f(const std::string & name) function, expected prototype:\nork::ptr< ork::UniformMatrix2x4f > ork::Program::getUniformMatrix2x4f(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::Program* self=Luna< ork::Object >::checkSubType< ork::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::UniformMatrix2x4f > ork::Program::getUniformMatrix2x4f(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::UniformMatrix2x4f > lret = self->getUniformMatrix2x4f(name);
		Luna< ork::UniformMatrix2x4f >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::UniformMatrix2x4d > ork::Program::getUniformMatrix2x4d(const std::string & name)
	static int _bind_getUniformMatrix2x4d(lua_State *L) {
		if (!_lg_typecheck_getUniformMatrix2x4d(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::UniformMatrix2x4d > ork::Program::getUniformMatrix2x4d(const std::string & name) function, expected prototype:\nork::ptr< ork::UniformMatrix2x4d > ork::Program::getUniformMatrix2x4d(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::Program* self=Luna< ork::Object >::checkSubType< ork::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::UniformMatrix2x4d > ork::Program::getUniformMatrix2x4d(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::UniformMatrix2x4d > lret = self->getUniformMatrix2x4d(name);
		Luna< ork::UniformMatrix2x4d >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::UniformMatrix3x2f > ork::Program::getUniformMatrix3x2f(const std::string & name)
	static int _bind_getUniformMatrix3x2f(lua_State *L) {
		if (!_lg_typecheck_getUniformMatrix3x2f(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::UniformMatrix3x2f > ork::Program::getUniformMatrix3x2f(const std::string & name) function, expected prototype:\nork::ptr< ork::UniformMatrix3x2f > ork::Program::getUniformMatrix3x2f(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::Program* self=Luna< ork::Object >::checkSubType< ork::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::UniformMatrix3x2f > ork::Program::getUniformMatrix3x2f(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::UniformMatrix3x2f > lret = self->getUniformMatrix3x2f(name);
		Luna< ork::UniformMatrix3x2f >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::UniformMatrix3x2d > ork::Program::getUniformMatrix3x2d(const std::string & name)
	static int _bind_getUniformMatrix3x2d(lua_State *L) {
		if (!_lg_typecheck_getUniformMatrix3x2d(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::UniformMatrix3x2d > ork::Program::getUniformMatrix3x2d(const std::string & name) function, expected prototype:\nork::ptr< ork::UniformMatrix3x2d > ork::Program::getUniformMatrix3x2d(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::Program* self=Luna< ork::Object >::checkSubType< ork::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::UniformMatrix3x2d > ork::Program::getUniformMatrix3x2d(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::UniformMatrix3x2d > lret = self->getUniformMatrix3x2d(name);
		Luna< ork::UniformMatrix3x2d >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::UniformMatrix3x4f > ork::Program::getUniformMatrix3x4f(const std::string & name)
	static int _bind_getUniformMatrix3x4f(lua_State *L) {
		if (!_lg_typecheck_getUniformMatrix3x4f(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::UniformMatrix3x4f > ork::Program::getUniformMatrix3x4f(const std::string & name) function, expected prototype:\nork::ptr< ork::UniformMatrix3x4f > ork::Program::getUniformMatrix3x4f(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::Program* self=Luna< ork::Object >::checkSubType< ork::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::UniformMatrix3x4f > ork::Program::getUniformMatrix3x4f(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::UniformMatrix3x4f > lret = self->getUniformMatrix3x4f(name);
		Luna< ork::UniformMatrix3x4f >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::UniformMatrix3x4d > ork::Program::getUniformMatrix3x4d(const std::string & name)
	static int _bind_getUniformMatrix3x4d(lua_State *L) {
		if (!_lg_typecheck_getUniformMatrix3x4d(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::UniformMatrix3x4d > ork::Program::getUniformMatrix3x4d(const std::string & name) function, expected prototype:\nork::ptr< ork::UniformMatrix3x4d > ork::Program::getUniformMatrix3x4d(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::Program* self=Luna< ork::Object >::checkSubType< ork::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::UniformMatrix3x4d > ork::Program::getUniformMatrix3x4d(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::UniformMatrix3x4d > lret = self->getUniformMatrix3x4d(name);
		Luna< ork::UniformMatrix3x4d >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::UniformMatrix4x2f > ork::Program::getUniformMatrix4x2f(const std::string & name)
	static int _bind_getUniformMatrix4x2f(lua_State *L) {
		if (!_lg_typecheck_getUniformMatrix4x2f(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::UniformMatrix4x2f > ork::Program::getUniformMatrix4x2f(const std::string & name) function, expected prototype:\nork::ptr< ork::UniformMatrix4x2f > ork::Program::getUniformMatrix4x2f(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::Program* self=Luna< ork::Object >::checkSubType< ork::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::UniformMatrix4x2f > ork::Program::getUniformMatrix4x2f(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::UniformMatrix4x2f > lret = self->getUniformMatrix4x2f(name);
		Luna< ork::UniformMatrix4x2f >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::UniformMatrix4x2d > ork::Program::getUniformMatrix4x2d(const std::string & name)
	static int _bind_getUniformMatrix4x2d(lua_State *L) {
		if (!_lg_typecheck_getUniformMatrix4x2d(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::UniformMatrix4x2d > ork::Program::getUniformMatrix4x2d(const std::string & name) function, expected prototype:\nork::ptr< ork::UniformMatrix4x2d > ork::Program::getUniformMatrix4x2d(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::Program* self=Luna< ork::Object >::checkSubType< ork::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::UniformMatrix4x2d > ork::Program::getUniformMatrix4x2d(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::UniformMatrix4x2d > lret = self->getUniformMatrix4x2d(name);
		Luna< ork::UniformMatrix4x2d >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::UniformMatrix4x3f > ork::Program::getUniformMatrix4x3f(const std::string & name)
	static int _bind_getUniformMatrix4x3f(lua_State *L) {
		if (!_lg_typecheck_getUniformMatrix4x3f(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::UniformMatrix4x3f > ork::Program::getUniformMatrix4x3f(const std::string & name) function, expected prototype:\nork::ptr< ork::UniformMatrix4x3f > ork::Program::getUniformMatrix4x3f(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::Program* self=Luna< ork::Object >::checkSubType< ork::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::UniformMatrix4x3f > ork::Program::getUniformMatrix4x3f(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::UniformMatrix4x3f > lret = self->getUniformMatrix4x3f(name);
		Luna< ork::UniformMatrix4x3f >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::UniformMatrix4x3d > ork::Program::getUniformMatrix4x3d(const std::string & name)
	static int _bind_getUniformMatrix4x3d(lua_State *L) {
		if (!_lg_typecheck_getUniformMatrix4x3d(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::UniformMatrix4x3d > ork::Program::getUniformMatrix4x3d(const std::string & name) function, expected prototype:\nork::ptr< ork::UniformMatrix4x3d > ork::Program::getUniformMatrix4x3d(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::Program* self=Luna< ork::Object >::checkSubType< ork::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::UniformMatrix4x3d > ork::Program::getUniformMatrix4x3d(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::UniformMatrix4x3d > lret = self->getUniformMatrix4x3d(name);
		Luna< ork::UniformMatrix4x3d >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::UniformSampler > ork::Program::getUniformSampler(const std::string & name)
	static int _bind_getUniformSampler(lua_State *L) {
		if (!_lg_typecheck_getUniformSampler(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::UniformSampler > ork::Program::getUniformSampler(const std::string & name) function, expected prototype:\nork::ptr< ork::UniformSampler > ork::Program::getUniformSampler(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::Program* self=Luna< ork::Object >::checkSubType< ork::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::UniformSampler > ork::Program::getUniformSampler(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::UniformSampler > lret = self->getUniformSampler(name);
		Luna< ork::UniformSampler >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::UniformSubroutine > ork::Program::getUniformSubroutine(ork::Stage stage, const std::string & name)
	static int _bind_getUniformSubroutine(lua_State *L) {
		if (!_lg_typecheck_getUniformSubroutine(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::UniformSubroutine > ork::Program::getUniformSubroutine(ork::Stage stage, const std::string & name) function, expected prototype:\nork::ptr< ork::UniformSubroutine > ork::Program::getUniformSubroutine(ork::Stage stage, const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::Stage stage=(ork::Stage)lua_tointeger(L,2);
		std::string name(lua_tostring(L,3),lua_objlen(L,3));

		ork::Program* self=Luna< ork::Object >::checkSubType< ork::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::UniformSubroutine > ork::Program::getUniformSubroutine(ork::Stage, const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::UniformSubroutine > lret = self->getUniformSubroutine(stage, name);
		Luna< ork::UniformSubroutine >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::UniformBlock > ork::Program::getUniformBlock(const std::string & name)
	static int _bind_getUniformBlock(lua_State *L) {
		if (!_lg_typecheck_getUniformBlock(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::UniformBlock > ork::Program::getUniformBlock(const std::string & name) function, expected prototype:\nork::ptr< ork::UniformBlock > ork::Program::getUniformBlock(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::Program* self=Luna< ork::Object >::checkSubType< ork::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::UniformBlock > ork::Program::getUniformBlock(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::UniformBlock > lret = self->getUniformBlock(name);
		Luna< ork::UniformBlock >::push(L,lret.get(),false);

		return 1;
	}

	// unsigned char * ork::Program::getBinary(int & length, unsigned int & format)
	static int _bind_getBinary(lua_State *L) {
		if (!_lg_typecheck_getBinary(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char * ork::Program::getBinary(int & length, unsigned int & format) function, expected prototype:\nunsigned char * ork::Program::getBinary(int & length, unsigned int & format)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int length=(int)lua_tointeger(L,2);
		unsigned int format=(unsigned int)lua_tointeger(L,3);

		ork::Program* self=Luna< ork::Object >::checkSubType< ork::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char * ork::Program::getBinary(int &, unsigned int &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char * lret = self->getBinary(length, format);
		luaL_error(L,"Trying to convert pointer on unsigned char lret to lua. This usage should be clarifierd.");

		lua_pushnumber(L,length);
		lua_pushnumber(L,format);
		return 3;
	}

	// const char * ork::Program::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * ork::Program::base_toString() function, expected prototype:\nconst char * ork::Program::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Program* self=Luna< ork::Object >::checkSubType< ork::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * ork::Program::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Program::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// int ork::Program::base_getId() const
	static int _bind_base_getId(lua_State *L) {
		if (!_lg_typecheck_base_getId(L)) {
			luaL_error(L, "luna typecheck failed in int ork::Program::base_getId() const function, expected prototype:\nint ork::Program::base_getId() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Program* self=Luna< ork::Object >::checkSubType< ork::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int ork::Program::base_getId() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->Program::getId();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

ork::Program* LunaTraits< ork::Program >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ork_Program::_bind_ctor(L);
}

void LunaTraits< ork::Program >::_bind_dtor(ork::Program* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< ork::Program >::className[] = "Program";
const char LunaTraits< ork::Program >::fullName[] = "ork::Program";
const char LunaTraits< ork::Program >::moduleName[] = "ork";
const char* LunaTraits< ork::Program >::parents[] = {"ork.Object", 0};
const int LunaTraits< ork::Program >::hash = 93084618;
const int LunaTraits< ork::Program >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< ork::Program >::methods[] = {
	{"getId", &luna_wrapper_ork_Program::_bind_getId},
	{"getModuleCount", &luna_wrapper_ork_Program::_bind_getModuleCount},
	{"getModule", &luna_wrapper_ork_Program::_bind_getModule},
	{"getUniforms", &luna_wrapper_ork_Program::_bind_getUniforms},
	{"getUniform", &luna_wrapper_ork_Program::_bind_getUniform},
	{"getUniform1f", &luna_wrapper_ork_Program::_bind_getUniform1f},
	{"getUniform1d", &luna_wrapper_ork_Program::_bind_getUniform1d},
	{"getUniform1i", &luna_wrapper_ork_Program::_bind_getUniform1i},
	{"getUniform1ui", &luna_wrapper_ork_Program::_bind_getUniform1ui},
	{"getUniform1b", &luna_wrapper_ork_Program::_bind_getUniform1b},
	{"getUniform2f", &luna_wrapper_ork_Program::_bind_getUniform2f},
	{"getUniform2d", &luna_wrapper_ork_Program::_bind_getUniform2d},
	{"getUniform2i", &luna_wrapper_ork_Program::_bind_getUniform2i},
	{"getUniform2ui", &luna_wrapper_ork_Program::_bind_getUniform2ui},
	{"getUniform2b", &luna_wrapper_ork_Program::_bind_getUniform2b},
	{"getUniform3f", &luna_wrapper_ork_Program::_bind_getUniform3f},
	{"getUniform3d", &luna_wrapper_ork_Program::_bind_getUniform3d},
	{"getUniform3i", &luna_wrapper_ork_Program::_bind_getUniform3i},
	{"getUniform3ui", &luna_wrapper_ork_Program::_bind_getUniform3ui},
	{"getUniform3b", &luna_wrapper_ork_Program::_bind_getUniform3b},
	{"getUniform4f", &luna_wrapper_ork_Program::_bind_getUniform4f},
	{"getUniform4d", &luna_wrapper_ork_Program::_bind_getUniform4d},
	{"getUniform4i", &luna_wrapper_ork_Program::_bind_getUniform4i},
	{"getUniform4ui", &luna_wrapper_ork_Program::_bind_getUniform4ui},
	{"getUniform4b", &luna_wrapper_ork_Program::_bind_getUniform4b},
	{"getUniformMatrix2f", &luna_wrapper_ork_Program::_bind_getUniformMatrix2f},
	{"getUniformMatrix2d", &luna_wrapper_ork_Program::_bind_getUniformMatrix2d},
	{"getUniformMatrix3f", &luna_wrapper_ork_Program::_bind_getUniformMatrix3f},
	{"getUniformMatrix3d", &luna_wrapper_ork_Program::_bind_getUniformMatrix3d},
	{"getUniformMatrix4f", &luna_wrapper_ork_Program::_bind_getUniformMatrix4f},
	{"getUniformMatrix4d", &luna_wrapper_ork_Program::_bind_getUniformMatrix4d},
	{"getUniformMatrix2x3f", &luna_wrapper_ork_Program::_bind_getUniformMatrix2x3f},
	{"getUniformMatrix2x3d", &luna_wrapper_ork_Program::_bind_getUniformMatrix2x3d},
	{"getUniformMatrix2x4f", &luna_wrapper_ork_Program::_bind_getUniformMatrix2x4f},
	{"getUniformMatrix2x4d", &luna_wrapper_ork_Program::_bind_getUniformMatrix2x4d},
	{"getUniformMatrix3x2f", &luna_wrapper_ork_Program::_bind_getUniformMatrix3x2f},
	{"getUniformMatrix3x2d", &luna_wrapper_ork_Program::_bind_getUniformMatrix3x2d},
	{"getUniformMatrix3x4f", &luna_wrapper_ork_Program::_bind_getUniformMatrix3x4f},
	{"getUniformMatrix3x4d", &luna_wrapper_ork_Program::_bind_getUniformMatrix3x4d},
	{"getUniformMatrix4x2f", &luna_wrapper_ork_Program::_bind_getUniformMatrix4x2f},
	{"getUniformMatrix4x2d", &luna_wrapper_ork_Program::_bind_getUniformMatrix4x2d},
	{"getUniformMatrix4x3f", &luna_wrapper_ork_Program::_bind_getUniformMatrix4x3f},
	{"getUniformMatrix4x3d", &luna_wrapper_ork_Program::_bind_getUniformMatrix4x3d},
	{"getUniformSampler", &luna_wrapper_ork_Program::_bind_getUniformSampler},
	{"getUniformSubroutine", &luna_wrapper_ork_Program::_bind_getUniformSubroutine},
	{"getUniformBlock", &luna_wrapper_ork_Program::_bind_getUniformBlock},
	{"getBinary", &luna_wrapper_ork_Program::_bind_getBinary},
	{"base_toString", &luna_wrapper_ork_Program::_bind_base_toString},
	{"base_getId", &luna_wrapper_ork_Program::_bind_base_getId},
	{"fromVoid", &luna_wrapper_ork_Program::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_Program::_bind_asVoid},
	{"getTable", &luna_wrapper_ork_Program::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< ork::Program >::converters[] = {
	{"ork::Object", &luna_wrapper_ork_Program::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< ork::Program >::enumValues[] = {
	{0,0}
};


