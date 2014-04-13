#include <plug_common.h>

#include <luna/wrappers/wrapper_ork_UniformBlock.h>

class luna_wrapper_ork_UniformBlock {
public:
	typedef Luna< ork::UniformBlock > luna_t;

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

		ork::UniformBlock* self= (ork::UniformBlock*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::UniformBlock >::push(L,self,false);
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
		//ork::UniformBlock* ptr= dynamic_cast< ork::UniformBlock* >(Luna< ork::Object >::check(L,1));
		ork::UniformBlock* ptr= luna_caster< ork::Object, ork::UniformBlock >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< ork::UniformBlock >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBuffer(lua_State *L) {
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

	inline static bool _lg_typecheck_setBuffer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::GPUBuffer >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_toString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// std::string ork::UniformBlock::getName() const
	static int _bind_getName(lua_State *L) {
		if (!_lg_typecheck_getName(L)) {
			luaL_error(L, "luna typecheck failed in std::string ork::UniformBlock::getName() const function, expected prototype:\nstd::string ork::UniformBlock::getName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::UniformBlock* self=Luna< ork::Object >::checkSubType< ork::UniformBlock >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call std::string ork::UniformBlock::getName() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		std::string lret = self->getName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// ork::ptr< ork::GPUBuffer > ork::UniformBlock::getBuffer() const
	static int _bind_getBuffer(lua_State *L) {
		if (!_lg_typecheck_getBuffer(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::GPUBuffer > ork::UniformBlock::getBuffer() const function, expected prototype:\nork::ptr< ork::GPUBuffer > ork::UniformBlock::getBuffer() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::UniformBlock* self=Luna< ork::Object >::checkSubType< ork::UniformBlock >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::GPUBuffer > ork::UniformBlock::getBuffer() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::GPUBuffer > lret = self->getBuffer();
		Luna< ork::GPUBuffer >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::Uniform > ork::UniformBlock::getUniform(const std::string & name) const
	static int _bind_getUniform(lua_State *L) {
		if (!_lg_typecheck_getUniform(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Uniform > ork::UniformBlock::getUniform(const std::string & name) const function, expected prototype:\nork::ptr< ork::Uniform > ork::UniformBlock::getUniform(const std::string & name) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::UniformBlock* self=Luna< ork::Object >::checkSubType< ork::UniformBlock >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Uniform > ork::UniformBlock::getUniform(const std::string &) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Uniform > lret = self->getUniform(name);
		Luna< ork::Uniform >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::Uniform1f > ork::UniformBlock::getUniform1f(const std::string & name)
	static int _bind_getUniform1f(lua_State *L) {
		if (!_lg_typecheck_getUniform1f(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Uniform1f > ork::UniformBlock::getUniform1f(const std::string & name) function, expected prototype:\nork::ptr< ork::Uniform1f > ork::UniformBlock::getUniform1f(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::UniformBlock* self=Luna< ork::Object >::checkSubType< ork::UniformBlock >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Uniform1f > ork::UniformBlock::getUniform1f(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Uniform1f > lret = self->getUniform1f(name);
		Luna< ork::Uniform1f >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::Uniform1d > ork::UniformBlock::getUniform1d(const std::string & name)
	static int _bind_getUniform1d(lua_State *L) {
		if (!_lg_typecheck_getUniform1d(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Uniform1d > ork::UniformBlock::getUniform1d(const std::string & name) function, expected prototype:\nork::ptr< ork::Uniform1d > ork::UniformBlock::getUniform1d(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::UniformBlock* self=Luna< ork::Object >::checkSubType< ork::UniformBlock >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Uniform1d > ork::UniformBlock::getUniform1d(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Uniform1d > lret = self->getUniform1d(name);
		Luna< ork::Uniform1d >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::Uniform1i > ork::UniformBlock::getUniform1i(const std::string & name)
	static int _bind_getUniform1i(lua_State *L) {
		if (!_lg_typecheck_getUniform1i(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Uniform1i > ork::UniformBlock::getUniform1i(const std::string & name) function, expected prototype:\nork::ptr< ork::Uniform1i > ork::UniformBlock::getUniform1i(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::UniformBlock* self=Luna< ork::Object >::checkSubType< ork::UniformBlock >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Uniform1i > ork::UniformBlock::getUniform1i(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Uniform1i > lret = self->getUniform1i(name);
		Luna< ork::Uniform1i >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::Uniform1ui > ork::UniformBlock::getUniform1ui(const std::string & name)
	static int _bind_getUniform1ui(lua_State *L) {
		if (!_lg_typecheck_getUniform1ui(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Uniform1ui > ork::UniformBlock::getUniform1ui(const std::string & name) function, expected prototype:\nork::ptr< ork::Uniform1ui > ork::UniformBlock::getUniform1ui(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::UniformBlock* self=Luna< ork::Object >::checkSubType< ork::UniformBlock >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Uniform1ui > ork::UniformBlock::getUniform1ui(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Uniform1ui > lret = self->getUniform1ui(name);
		Luna< ork::Uniform1ui >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::Uniform1b > ork::UniformBlock::getUniform1b(const std::string & name)
	static int _bind_getUniform1b(lua_State *L) {
		if (!_lg_typecheck_getUniform1b(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Uniform1b > ork::UniformBlock::getUniform1b(const std::string & name) function, expected prototype:\nork::ptr< ork::Uniform1b > ork::UniformBlock::getUniform1b(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::UniformBlock* self=Luna< ork::Object >::checkSubType< ork::UniformBlock >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Uniform1b > ork::UniformBlock::getUniform1b(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Uniform1b > lret = self->getUniform1b(name);
		Luna< ork::Uniform1b >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::Uniform2f > ork::UniformBlock::getUniform2f(const std::string & name)
	static int _bind_getUniform2f(lua_State *L) {
		if (!_lg_typecheck_getUniform2f(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Uniform2f > ork::UniformBlock::getUniform2f(const std::string & name) function, expected prototype:\nork::ptr< ork::Uniform2f > ork::UniformBlock::getUniform2f(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::UniformBlock* self=Luna< ork::Object >::checkSubType< ork::UniformBlock >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Uniform2f > ork::UniformBlock::getUniform2f(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Uniform2f > lret = self->getUniform2f(name);
		Luna< ork::Uniform2f >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::Uniform2d > ork::UniformBlock::getUniform2d(const std::string & name)
	static int _bind_getUniform2d(lua_State *L) {
		if (!_lg_typecheck_getUniform2d(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Uniform2d > ork::UniformBlock::getUniform2d(const std::string & name) function, expected prototype:\nork::ptr< ork::Uniform2d > ork::UniformBlock::getUniform2d(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::UniformBlock* self=Luna< ork::Object >::checkSubType< ork::UniformBlock >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Uniform2d > ork::UniformBlock::getUniform2d(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Uniform2d > lret = self->getUniform2d(name);
		Luna< ork::Uniform2d >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::Uniform2i > ork::UniformBlock::getUniform2i(const std::string & name)
	static int _bind_getUniform2i(lua_State *L) {
		if (!_lg_typecheck_getUniform2i(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Uniform2i > ork::UniformBlock::getUniform2i(const std::string & name) function, expected prototype:\nork::ptr< ork::Uniform2i > ork::UniformBlock::getUniform2i(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::UniformBlock* self=Luna< ork::Object >::checkSubType< ork::UniformBlock >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Uniform2i > ork::UniformBlock::getUniform2i(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Uniform2i > lret = self->getUniform2i(name);
		Luna< ork::Uniform2i >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::Uniform2ui > ork::UniformBlock::getUniform2ui(const std::string & name)
	static int _bind_getUniform2ui(lua_State *L) {
		if (!_lg_typecheck_getUniform2ui(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Uniform2ui > ork::UniformBlock::getUniform2ui(const std::string & name) function, expected prototype:\nork::ptr< ork::Uniform2ui > ork::UniformBlock::getUniform2ui(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::UniformBlock* self=Luna< ork::Object >::checkSubType< ork::UniformBlock >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Uniform2ui > ork::UniformBlock::getUniform2ui(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Uniform2ui > lret = self->getUniform2ui(name);
		Luna< ork::Uniform2ui >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::Uniform2b > ork::UniformBlock::getUniform2b(const std::string & name)
	static int _bind_getUniform2b(lua_State *L) {
		if (!_lg_typecheck_getUniform2b(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Uniform2b > ork::UniformBlock::getUniform2b(const std::string & name) function, expected prototype:\nork::ptr< ork::Uniform2b > ork::UniformBlock::getUniform2b(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::UniformBlock* self=Luna< ork::Object >::checkSubType< ork::UniformBlock >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Uniform2b > ork::UniformBlock::getUniform2b(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Uniform2b > lret = self->getUniform2b(name);
		Luna< ork::Uniform2b >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::Uniform3f > ork::UniformBlock::getUniform3f(const std::string & name)
	static int _bind_getUniform3f(lua_State *L) {
		if (!_lg_typecheck_getUniform3f(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Uniform3f > ork::UniformBlock::getUniform3f(const std::string & name) function, expected prototype:\nork::ptr< ork::Uniform3f > ork::UniformBlock::getUniform3f(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::UniformBlock* self=Luna< ork::Object >::checkSubType< ork::UniformBlock >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Uniform3f > ork::UniformBlock::getUniform3f(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Uniform3f > lret = self->getUniform3f(name);
		Luna< ork::Uniform3f >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::Uniform3d > ork::UniformBlock::getUniform3d(const std::string & name)
	static int _bind_getUniform3d(lua_State *L) {
		if (!_lg_typecheck_getUniform3d(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Uniform3d > ork::UniformBlock::getUniform3d(const std::string & name) function, expected prototype:\nork::ptr< ork::Uniform3d > ork::UniformBlock::getUniform3d(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::UniformBlock* self=Luna< ork::Object >::checkSubType< ork::UniformBlock >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Uniform3d > ork::UniformBlock::getUniform3d(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Uniform3d > lret = self->getUniform3d(name);
		Luna< ork::Uniform3d >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::Uniform3i > ork::UniformBlock::getUniform3i(const std::string & name)
	static int _bind_getUniform3i(lua_State *L) {
		if (!_lg_typecheck_getUniform3i(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Uniform3i > ork::UniformBlock::getUniform3i(const std::string & name) function, expected prototype:\nork::ptr< ork::Uniform3i > ork::UniformBlock::getUniform3i(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::UniformBlock* self=Luna< ork::Object >::checkSubType< ork::UniformBlock >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Uniform3i > ork::UniformBlock::getUniform3i(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Uniform3i > lret = self->getUniform3i(name);
		Luna< ork::Uniform3i >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::Uniform3ui > ork::UniformBlock::getUniform3ui(const std::string & name)
	static int _bind_getUniform3ui(lua_State *L) {
		if (!_lg_typecheck_getUniform3ui(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Uniform3ui > ork::UniformBlock::getUniform3ui(const std::string & name) function, expected prototype:\nork::ptr< ork::Uniform3ui > ork::UniformBlock::getUniform3ui(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::UniformBlock* self=Luna< ork::Object >::checkSubType< ork::UniformBlock >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Uniform3ui > ork::UniformBlock::getUniform3ui(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Uniform3ui > lret = self->getUniform3ui(name);
		Luna< ork::Uniform3ui >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::Uniform3b > ork::UniformBlock::getUniform3b(const std::string & name)
	static int _bind_getUniform3b(lua_State *L) {
		if (!_lg_typecheck_getUniform3b(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Uniform3b > ork::UniformBlock::getUniform3b(const std::string & name) function, expected prototype:\nork::ptr< ork::Uniform3b > ork::UniformBlock::getUniform3b(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::UniformBlock* self=Luna< ork::Object >::checkSubType< ork::UniformBlock >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Uniform3b > ork::UniformBlock::getUniform3b(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Uniform3b > lret = self->getUniform3b(name);
		Luna< ork::Uniform3b >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::Uniform4f > ork::UniformBlock::getUniform4f(const std::string & name)
	static int _bind_getUniform4f(lua_State *L) {
		if (!_lg_typecheck_getUniform4f(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Uniform4f > ork::UniformBlock::getUniform4f(const std::string & name) function, expected prototype:\nork::ptr< ork::Uniform4f > ork::UniformBlock::getUniform4f(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::UniformBlock* self=Luna< ork::Object >::checkSubType< ork::UniformBlock >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Uniform4f > ork::UniformBlock::getUniform4f(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Uniform4f > lret = self->getUniform4f(name);
		Luna< ork::Uniform4f >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::Uniform4d > ork::UniformBlock::getUniform4d(const std::string & name)
	static int _bind_getUniform4d(lua_State *L) {
		if (!_lg_typecheck_getUniform4d(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Uniform4d > ork::UniformBlock::getUniform4d(const std::string & name) function, expected prototype:\nork::ptr< ork::Uniform4d > ork::UniformBlock::getUniform4d(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::UniformBlock* self=Luna< ork::Object >::checkSubType< ork::UniformBlock >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Uniform4d > ork::UniformBlock::getUniform4d(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Uniform4d > lret = self->getUniform4d(name);
		Luna< ork::Uniform4d >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::Uniform4i > ork::UniformBlock::getUniform4i(const std::string & name)
	static int _bind_getUniform4i(lua_State *L) {
		if (!_lg_typecheck_getUniform4i(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Uniform4i > ork::UniformBlock::getUniform4i(const std::string & name) function, expected prototype:\nork::ptr< ork::Uniform4i > ork::UniformBlock::getUniform4i(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::UniformBlock* self=Luna< ork::Object >::checkSubType< ork::UniformBlock >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Uniform4i > ork::UniformBlock::getUniform4i(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Uniform4i > lret = self->getUniform4i(name);
		Luna< ork::Uniform4i >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::Uniform4ui > ork::UniformBlock::getUniform4ui(const std::string & name)
	static int _bind_getUniform4ui(lua_State *L) {
		if (!_lg_typecheck_getUniform4ui(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Uniform4ui > ork::UniformBlock::getUniform4ui(const std::string & name) function, expected prototype:\nork::ptr< ork::Uniform4ui > ork::UniformBlock::getUniform4ui(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::UniformBlock* self=Luna< ork::Object >::checkSubType< ork::UniformBlock >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Uniform4ui > ork::UniformBlock::getUniform4ui(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Uniform4ui > lret = self->getUniform4ui(name);
		Luna< ork::Uniform4ui >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::Uniform4b > ork::UniformBlock::getUniform4b(const std::string & name)
	static int _bind_getUniform4b(lua_State *L) {
		if (!_lg_typecheck_getUniform4b(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Uniform4b > ork::UniformBlock::getUniform4b(const std::string & name) function, expected prototype:\nork::ptr< ork::Uniform4b > ork::UniformBlock::getUniform4b(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::UniformBlock* self=Luna< ork::Object >::checkSubType< ork::UniformBlock >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Uniform4b > ork::UniformBlock::getUniform4b(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Uniform4b > lret = self->getUniform4b(name);
		Luna< ork::Uniform4b >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::UniformMatrix2f > ork::UniformBlock::getUniformMatrix2f(const std::string & name)
	static int _bind_getUniformMatrix2f(lua_State *L) {
		if (!_lg_typecheck_getUniformMatrix2f(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::UniformMatrix2f > ork::UniformBlock::getUniformMatrix2f(const std::string & name) function, expected prototype:\nork::ptr< ork::UniformMatrix2f > ork::UniformBlock::getUniformMatrix2f(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::UniformBlock* self=Luna< ork::Object >::checkSubType< ork::UniformBlock >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::UniformMatrix2f > ork::UniformBlock::getUniformMatrix2f(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::UniformMatrix2f > lret = self->getUniformMatrix2f(name);
		Luna< ork::UniformMatrix2f >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::UniformMatrix2d > ork::UniformBlock::getUniformMatrix2d(const std::string & name)
	static int _bind_getUniformMatrix2d(lua_State *L) {
		if (!_lg_typecheck_getUniformMatrix2d(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::UniformMatrix2d > ork::UniformBlock::getUniformMatrix2d(const std::string & name) function, expected prototype:\nork::ptr< ork::UniformMatrix2d > ork::UniformBlock::getUniformMatrix2d(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::UniformBlock* self=Luna< ork::Object >::checkSubType< ork::UniformBlock >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::UniformMatrix2d > ork::UniformBlock::getUniformMatrix2d(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::UniformMatrix2d > lret = self->getUniformMatrix2d(name);
		Luna< ork::UniformMatrix2d >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::UniformMatrix3f > ork::UniformBlock::getUniformMatrix3f(const std::string & name)
	static int _bind_getUniformMatrix3f(lua_State *L) {
		if (!_lg_typecheck_getUniformMatrix3f(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::UniformMatrix3f > ork::UniformBlock::getUniformMatrix3f(const std::string & name) function, expected prototype:\nork::ptr< ork::UniformMatrix3f > ork::UniformBlock::getUniformMatrix3f(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::UniformBlock* self=Luna< ork::Object >::checkSubType< ork::UniformBlock >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::UniformMatrix3f > ork::UniformBlock::getUniformMatrix3f(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::UniformMatrix3f > lret = self->getUniformMatrix3f(name);
		Luna< ork::UniformMatrix3f >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::UniformMatrix3d > ork::UniformBlock::getUniformMatrix3d(const std::string & name)
	static int _bind_getUniformMatrix3d(lua_State *L) {
		if (!_lg_typecheck_getUniformMatrix3d(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::UniformMatrix3d > ork::UniformBlock::getUniformMatrix3d(const std::string & name) function, expected prototype:\nork::ptr< ork::UniformMatrix3d > ork::UniformBlock::getUniformMatrix3d(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::UniformBlock* self=Luna< ork::Object >::checkSubType< ork::UniformBlock >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::UniformMatrix3d > ork::UniformBlock::getUniformMatrix3d(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::UniformMatrix3d > lret = self->getUniformMatrix3d(name);
		Luna< ork::UniformMatrix3d >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::UniformMatrix4f > ork::UniformBlock::getUniformMatrix4f(const std::string & name)
	static int _bind_getUniformMatrix4f(lua_State *L) {
		if (!_lg_typecheck_getUniformMatrix4f(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::UniformMatrix4f > ork::UniformBlock::getUniformMatrix4f(const std::string & name) function, expected prototype:\nork::ptr< ork::UniformMatrix4f > ork::UniformBlock::getUniformMatrix4f(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::UniformBlock* self=Luna< ork::Object >::checkSubType< ork::UniformBlock >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::UniformMatrix4f > ork::UniformBlock::getUniformMatrix4f(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::UniformMatrix4f > lret = self->getUniformMatrix4f(name);
		Luna< ork::UniformMatrix4f >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::UniformMatrix4d > ork::UniformBlock::getUniformMatrix4d(const std::string & name)
	static int _bind_getUniformMatrix4d(lua_State *L) {
		if (!_lg_typecheck_getUniformMatrix4d(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::UniformMatrix4d > ork::UniformBlock::getUniformMatrix4d(const std::string & name) function, expected prototype:\nork::ptr< ork::UniformMatrix4d > ork::UniformBlock::getUniformMatrix4d(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::UniformBlock* self=Luna< ork::Object >::checkSubType< ork::UniformBlock >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::UniformMatrix4d > ork::UniformBlock::getUniformMatrix4d(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::UniformMatrix4d > lret = self->getUniformMatrix4d(name);
		Luna< ork::UniformMatrix4d >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::UniformMatrix2x3f > ork::UniformBlock::getUniformMatrix2x3f(const std::string & name)
	static int _bind_getUniformMatrix2x3f(lua_State *L) {
		if (!_lg_typecheck_getUniformMatrix2x3f(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::UniformMatrix2x3f > ork::UniformBlock::getUniformMatrix2x3f(const std::string & name) function, expected prototype:\nork::ptr< ork::UniformMatrix2x3f > ork::UniformBlock::getUniformMatrix2x3f(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::UniformBlock* self=Luna< ork::Object >::checkSubType< ork::UniformBlock >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::UniformMatrix2x3f > ork::UniformBlock::getUniformMatrix2x3f(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::UniformMatrix2x3f > lret = self->getUniformMatrix2x3f(name);
		Luna< ork::UniformMatrix2x3f >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::UniformMatrix2x3d > ork::UniformBlock::getUniformMatrix2x3d(const std::string & name)
	static int _bind_getUniformMatrix2x3d(lua_State *L) {
		if (!_lg_typecheck_getUniformMatrix2x3d(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::UniformMatrix2x3d > ork::UniformBlock::getUniformMatrix2x3d(const std::string & name) function, expected prototype:\nork::ptr< ork::UniformMatrix2x3d > ork::UniformBlock::getUniformMatrix2x3d(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::UniformBlock* self=Luna< ork::Object >::checkSubType< ork::UniformBlock >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::UniformMatrix2x3d > ork::UniformBlock::getUniformMatrix2x3d(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::UniformMatrix2x3d > lret = self->getUniformMatrix2x3d(name);
		Luna< ork::UniformMatrix2x3d >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::UniformMatrix2x4f > ork::UniformBlock::getUniformMatrix2x4f(const std::string & name)
	static int _bind_getUniformMatrix2x4f(lua_State *L) {
		if (!_lg_typecheck_getUniformMatrix2x4f(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::UniformMatrix2x4f > ork::UniformBlock::getUniformMatrix2x4f(const std::string & name) function, expected prototype:\nork::ptr< ork::UniformMatrix2x4f > ork::UniformBlock::getUniformMatrix2x4f(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::UniformBlock* self=Luna< ork::Object >::checkSubType< ork::UniformBlock >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::UniformMatrix2x4f > ork::UniformBlock::getUniformMatrix2x4f(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::UniformMatrix2x4f > lret = self->getUniformMatrix2x4f(name);
		Luna< ork::UniformMatrix2x4f >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::UniformMatrix2x4d > ork::UniformBlock::getUniformMatrix2x4d(const std::string & name)
	static int _bind_getUniformMatrix2x4d(lua_State *L) {
		if (!_lg_typecheck_getUniformMatrix2x4d(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::UniformMatrix2x4d > ork::UniformBlock::getUniformMatrix2x4d(const std::string & name) function, expected prototype:\nork::ptr< ork::UniformMatrix2x4d > ork::UniformBlock::getUniformMatrix2x4d(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::UniformBlock* self=Luna< ork::Object >::checkSubType< ork::UniformBlock >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::UniformMatrix2x4d > ork::UniformBlock::getUniformMatrix2x4d(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::UniformMatrix2x4d > lret = self->getUniformMatrix2x4d(name);
		Luna< ork::UniformMatrix2x4d >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::UniformMatrix3x2f > ork::UniformBlock::getUniformMatrix3x2f(const std::string & name)
	static int _bind_getUniformMatrix3x2f(lua_State *L) {
		if (!_lg_typecheck_getUniformMatrix3x2f(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::UniformMatrix3x2f > ork::UniformBlock::getUniformMatrix3x2f(const std::string & name) function, expected prototype:\nork::ptr< ork::UniformMatrix3x2f > ork::UniformBlock::getUniformMatrix3x2f(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::UniformBlock* self=Luna< ork::Object >::checkSubType< ork::UniformBlock >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::UniformMatrix3x2f > ork::UniformBlock::getUniformMatrix3x2f(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::UniformMatrix3x2f > lret = self->getUniformMatrix3x2f(name);
		Luna< ork::UniformMatrix3x2f >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::UniformMatrix3x2d > ork::UniformBlock::getUniformMatrix3x2d(const std::string & name)
	static int _bind_getUniformMatrix3x2d(lua_State *L) {
		if (!_lg_typecheck_getUniformMatrix3x2d(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::UniformMatrix3x2d > ork::UniformBlock::getUniformMatrix3x2d(const std::string & name) function, expected prototype:\nork::ptr< ork::UniformMatrix3x2d > ork::UniformBlock::getUniformMatrix3x2d(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::UniformBlock* self=Luna< ork::Object >::checkSubType< ork::UniformBlock >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::UniformMatrix3x2d > ork::UniformBlock::getUniformMatrix3x2d(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::UniformMatrix3x2d > lret = self->getUniformMatrix3x2d(name);
		Luna< ork::UniformMatrix3x2d >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::UniformMatrix3x4f > ork::UniformBlock::getUniformMatrix3x4f(const std::string & name)
	static int _bind_getUniformMatrix3x4f(lua_State *L) {
		if (!_lg_typecheck_getUniformMatrix3x4f(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::UniformMatrix3x4f > ork::UniformBlock::getUniformMatrix3x4f(const std::string & name) function, expected prototype:\nork::ptr< ork::UniformMatrix3x4f > ork::UniformBlock::getUniformMatrix3x4f(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::UniformBlock* self=Luna< ork::Object >::checkSubType< ork::UniformBlock >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::UniformMatrix3x4f > ork::UniformBlock::getUniformMatrix3x4f(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::UniformMatrix3x4f > lret = self->getUniformMatrix3x4f(name);
		Luna< ork::UniformMatrix3x4f >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::UniformMatrix3x4d > ork::UniformBlock::getUniformMatrix3x4d(const std::string & name)
	static int _bind_getUniformMatrix3x4d(lua_State *L) {
		if (!_lg_typecheck_getUniformMatrix3x4d(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::UniformMatrix3x4d > ork::UniformBlock::getUniformMatrix3x4d(const std::string & name) function, expected prototype:\nork::ptr< ork::UniformMatrix3x4d > ork::UniformBlock::getUniformMatrix3x4d(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::UniformBlock* self=Luna< ork::Object >::checkSubType< ork::UniformBlock >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::UniformMatrix3x4d > ork::UniformBlock::getUniformMatrix3x4d(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::UniformMatrix3x4d > lret = self->getUniformMatrix3x4d(name);
		Luna< ork::UniformMatrix3x4d >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::UniformMatrix4x2f > ork::UniformBlock::getUniformMatrix4x2f(const std::string & name)
	static int _bind_getUniformMatrix4x2f(lua_State *L) {
		if (!_lg_typecheck_getUniformMatrix4x2f(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::UniformMatrix4x2f > ork::UniformBlock::getUniformMatrix4x2f(const std::string & name) function, expected prototype:\nork::ptr< ork::UniformMatrix4x2f > ork::UniformBlock::getUniformMatrix4x2f(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::UniformBlock* self=Luna< ork::Object >::checkSubType< ork::UniformBlock >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::UniformMatrix4x2f > ork::UniformBlock::getUniformMatrix4x2f(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::UniformMatrix4x2f > lret = self->getUniformMatrix4x2f(name);
		Luna< ork::UniformMatrix4x2f >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::UniformMatrix4x2d > ork::UniformBlock::getUniformMatrix4x2d(const std::string & name)
	static int _bind_getUniformMatrix4x2d(lua_State *L) {
		if (!_lg_typecheck_getUniformMatrix4x2d(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::UniformMatrix4x2d > ork::UniformBlock::getUniformMatrix4x2d(const std::string & name) function, expected prototype:\nork::ptr< ork::UniformMatrix4x2d > ork::UniformBlock::getUniformMatrix4x2d(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::UniformBlock* self=Luna< ork::Object >::checkSubType< ork::UniformBlock >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::UniformMatrix4x2d > ork::UniformBlock::getUniformMatrix4x2d(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::UniformMatrix4x2d > lret = self->getUniformMatrix4x2d(name);
		Luna< ork::UniformMatrix4x2d >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::UniformMatrix4x3f > ork::UniformBlock::getUniformMatrix4x3f(const std::string & name)
	static int _bind_getUniformMatrix4x3f(lua_State *L) {
		if (!_lg_typecheck_getUniformMatrix4x3f(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::UniformMatrix4x3f > ork::UniformBlock::getUniformMatrix4x3f(const std::string & name) function, expected prototype:\nork::ptr< ork::UniformMatrix4x3f > ork::UniformBlock::getUniformMatrix4x3f(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::UniformBlock* self=Luna< ork::Object >::checkSubType< ork::UniformBlock >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::UniformMatrix4x3f > ork::UniformBlock::getUniformMatrix4x3f(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::UniformMatrix4x3f > lret = self->getUniformMatrix4x3f(name);
		Luna< ork::UniformMatrix4x3f >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::UniformMatrix4x3d > ork::UniformBlock::getUniformMatrix4x3d(const std::string & name)
	static int _bind_getUniformMatrix4x3d(lua_State *L) {
		if (!_lg_typecheck_getUniformMatrix4x3d(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::UniformMatrix4x3d > ork::UniformBlock::getUniformMatrix4x3d(const std::string & name) function, expected prototype:\nork::ptr< ork::UniformMatrix4x3d > ork::UniformBlock::getUniformMatrix4x3d(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::UniformBlock* self=Luna< ork::Object >::checkSubType< ork::UniformBlock >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::UniformMatrix4x3d > ork::UniformBlock::getUniformMatrix4x3d(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::UniformMatrix4x3d > lret = self->getUniformMatrix4x3d(name);
		Luna< ork::UniformMatrix4x3d >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::UniformSampler > ork::UniformBlock::getUniformSampler(const std::string & name)
	static int _bind_getUniformSampler(lua_State *L) {
		if (!_lg_typecheck_getUniformSampler(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::UniformSampler > ork::UniformBlock::getUniformSampler(const std::string & name) function, expected prototype:\nork::ptr< ork::UniformSampler > ork::UniformBlock::getUniformSampler(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::UniformBlock* self=Luna< ork::Object >::checkSubType< ork::UniformBlock >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::UniformSampler > ork::UniformBlock::getUniformSampler(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::UniformSampler > lret = self->getUniformSampler(name);
		Luna< ork::UniformSampler >::push(L,lret.get(),false);

		return 1;
	}

	// void ork::UniformBlock::setBuffer(ork::ptr< ork::GPUBuffer > buffer)
	static int _bind_setBuffer(lua_State *L) {
		if (!_lg_typecheck_setBuffer(L)) {
			luaL_error(L, "luna typecheck failed in void ork::UniformBlock::setBuffer(ork::ptr< ork::GPUBuffer > buffer) function, expected prototype:\nvoid ork::UniformBlock::setBuffer(ork::ptr< ork::GPUBuffer > buffer)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::GPUBuffer > buffer = Luna< ork::Object >::checkSubType< ork::GPUBuffer >(L,2);

		ork::UniformBlock* self=Luna< ork::Object >::checkSubType< ork::UniformBlock >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::UniformBlock::setBuffer(ork::ptr< ork::GPUBuffer >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setBuffer(buffer);

		return 0;
	}

	// const char * ork::UniformBlock::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * ork::UniformBlock::base_toString() function, expected prototype:\nconst char * ork::UniformBlock::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::UniformBlock* self=Luna< ork::Object >::checkSubType< ork::UniformBlock >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * ork::UniformBlock::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->UniformBlock::toString();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

ork::UniformBlock* LunaTraits< ork::UniformBlock >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< ork::UniformBlock >::_bind_dtor(ork::UniformBlock* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< ork::UniformBlock >::className[] = "UniformBlock";
const char LunaTraits< ork::UniformBlock >::fullName[] = "ork::UniformBlock";
const char LunaTraits< ork::UniformBlock >::moduleName[] = "ork";
const char* LunaTraits< ork::UniformBlock >::parents[] = {"ork.Object", 0};
const int LunaTraits< ork::UniformBlock >::hash = 40544077;
const int LunaTraits< ork::UniformBlock >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< ork::UniformBlock >::methods[] = {
	{"getName", &luna_wrapper_ork_UniformBlock::_bind_getName},
	{"getBuffer", &luna_wrapper_ork_UniformBlock::_bind_getBuffer},
	{"getUniform", &luna_wrapper_ork_UniformBlock::_bind_getUniform},
	{"getUniform1f", &luna_wrapper_ork_UniformBlock::_bind_getUniform1f},
	{"getUniform1d", &luna_wrapper_ork_UniformBlock::_bind_getUniform1d},
	{"getUniform1i", &luna_wrapper_ork_UniformBlock::_bind_getUniform1i},
	{"getUniform1ui", &luna_wrapper_ork_UniformBlock::_bind_getUniform1ui},
	{"getUniform1b", &luna_wrapper_ork_UniformBlock::_bind_getUniform1b},
	{"getUniform2f", &luna_wrapper_ork_UniformBlock::_bind_getUniform2f},
	{"getUniform2d", &luna_wrapper_ork_UniformBlock::_bind_getUniform2d},
	{"getUniform2i", &luna_wrapper_ork_UniformBlock::_bind_getUniform2i},
	{"getUniform2ui", &luna_wrapper_ork_UniformBlock::_bind_getUniform2ui},
	{"getUniform2b", &luna_wrapper_ork_UniformBlock::_bind_getUniform2b},
	{"getUniform3f", &luna_wrapper_ork_UniformBlock::_bind_getUniform3f},
	{"getUniform3d", &luna_wrapper_ork_UniformBlock::_bind_getUniform3d},
	{"getUniform3i", &luna_wrapper_ork_UniformBlock::_bind_getUniform3i},
	{"getUniform3ui", &luna_wrapper_ork_UniformBlock::_bind_getUniform3ui},
	{"getUniform3b", &luna_wrapper_ork_UniformBlock::_bind_getUniform3b},
	{"getUniform4f", &luna_wrapper_ork_UniformBlock::_bind_getUniform4f},
	{"getUniform4d", &luna_wrapper_ork_UniformBlock::_bind_getUniform4d},
	{"getUniform4i", &luna_wrapper_ork_UniformBlock::_bind_getUniform4i},
	{"getUniform4ui", &luna_wrapper_ork_UniformBlock::_bind_getUniform4ui},
	{"getUniform4b", &luna_wrapper_ork_UniformBlock::_bind_getUniform4b},
	{"getUniformMatrix2f", &luna_wrapper_ork_UniformBlock::_bind_getUniformMatrix2f},
	{"getUniformMatrix2d", &luna_wrapper_ork_UniformBlock::_bind_getUniformMatrix2d},
	{"getUniformMatrix3f", &luna_wrapper_ork_UniformBlock::_bind_getUniformMatrix3f},
	{"getUniformMatrix3d", &luna_wrapper_ork_UniformBlock::_bind_getUniformMatrix3d},
	{"getUniformMatrix4f", &luna_wrapper_ork_UniformBlock::_bind_getUniformMatrix4f},
	{"getUniformMatrix4d", &luna_wrapper_ork_UniformBlock::_bind_getUniformMatrix4d},
	{"getUniformMatrix2x3f", &luna_wrapper_ork_UniformBlock::_bind_getUniformMatrix2x3f},
	{"getUniformMatrix2x3d", &luna_wrapper_ork_UniformBlock::_bind_getUniformMatrix2x3d},
	{"getUniformMatrix2x4f", &luna_wrapper_ork_UniformBlock::_bind_getUniformMatrix2x4f},
	{"getUniformMatrix2x4d", &luna_wrapper_ork_UniformBlock::_bind_getUniformMatrix2x4d},
	{"getUniformMatrix3x2f", &luna_wrapper_ork_UniformBlock::_bind_getUniformMatrix3x2f},
	{"getUniformMatrix3x2d", &luna_wrapper_ork_UniformBlock::_bind_getUniformMatrix3x2d},
	{"getUniformMatrix3x4f", &luna_wrapper_ork_UniformBlock::_bind_getUniformMatrix3x4f},
	{"getUniformMatrix3x4d", &luna_wrapper_ork_UniformBlock::_bind_getUniformMatrix3x4d},
	{"getUniformMatrix4x2f", &luna_wrapper_ork_UniformBlock::_bind_getUniformMatrix4x2f},
	{"getUniformMatrix4x2d", &luna_wrapper_ork_UniformBlock::_bind_getUniformMatrix4x2d},
	{"getUniformMatrix4x3f", &luna_wrapper_ork_UniformBlock::_bind_getUniformMatrix4x3f},
	{"getUniformMatrix4x3d", &luna_wrapper_ork_UniformBlock::_bind_getUniformMatrix4x3d},
	{"getUniformSampler", &luna_wrapper_ork_UniformBlock::_bind_getUniformSampler},
	{"setBuffer", &luna_wrapper_ork_UniformBlock::_bind_setBuffer},
	{"base_toString", &luna_wrapper_ork_UniformBlock::_bind_base_toString},
	{"fromVoid", &luna_wrapper_ork_UniformBlock::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_UniformBlock::_bind_asVoid},
	{"getTable", &luna_wrapper_ork_UniformBlock::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< ork::UniformBlock >::converters[] = {
	{"ork::Object", &luna_wrapper_ork_UniformBlock::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< ork::UniformBlock >::enumValues[] = {
	{0,0}
};


