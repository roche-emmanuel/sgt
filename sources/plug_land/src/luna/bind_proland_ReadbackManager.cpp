#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_ReadbackManager.h>

class luna_wrapper_proland_ReadbackManager {
public:
	typedef Luna< proland::ReadbackManager > luna_t;

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

		proland::ReadbackManager* self= (proland::ReadbackManager*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::ReadbackManager >::push(L,self,false);
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
		//proland::ReadbackManager* ptr= dynamic_cast< proland::ReadbackManager* >(Luna< ork::Object >::check(L,1));
		proland::ReadbackManager* ptr= luna_caster< ork::Object, proland::ReadbackManager >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::ReadbackManager >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_canReadback(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_readback(lua_State *L) {
		if( lua_gettop(L)!=9 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,2) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( (lua_type(L,8)!=LUA_TNUMBER || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		if( !Luna<void>::has_uniqueid(L,9,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::ReadbackManager::Callback >(L,9) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_newFrame(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_toString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::ReadbackManager::ReadbackManager(int maxReadbackPerFrame, int readbackDelay, int bufferSize)
	static proland::ReadbackManager* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::ReadbackManager::ReadbackManager(int maxReadbackPerFrame, int readbackDelay, int bufferSize) function, expected prototype:\nproland::ReadbackManager::ReadbackManager(int maxReadbackPerFrame, int readbackDelay, int bufferSize)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int maxReadbackPerFrame=(int)lua_tointeger(L,1);
		int readbackDelay=(int)lua_tointeger(L,2);
		int bufferSize=(int)lua_tointeger(L,3);

		return new proland::ReadbackManager(maxReadbackPerFrame, readbackDelay, bufferSize);
	}

	// proland::ReadbackManager::ReadbackManager(lua_Table * data, int maxReadbackPerFrame, int readbackDelay, int bufferSize)
	static proland::ReadbackManager* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::ReadbackManager::ReadbackManager(lua_Table * data, int maxReadbackPerFrame, int readbackDelay, int bufferSize) function, expected prototype:\nproland::ReadbackManager::ReadbackManager(lua_Table * data, int maxReadbackPerFrame, int readbackDelay, int bufferSize)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int maxReadbackPerFrame=(int)lua_tointeger(L,2);
		int readbackDelay=(int)lua_tointeger(L,3);
		int bufferSize=(int)lua_tointeger(L,4);

		return new wrapper_proland_ReadbackManager(L,NULL, maxReadbackPerFrame, readbackDelay, bufferSize);
	}

	// Overload binder for proland::ReadbackManager::ReadbackManager
	static proland::ReadbackManager* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ReadbackManager, cannot match any of the overloads for function ReadbackManager:\n  ReadbackManager(int, int, int)\n  ReadbackManager(lua_Table *, int, int, int)\n");
		return NULL;
	}


	// Function binds:
	// bool proland::ReadbackManager::canReadback()
	static int _bind_canReadback(lua_State *L) {
		if (!_lg_typecheck_canReadback(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::ReadbackManager::canReadback() function, expected prototype:\nbool proland::ReadbackManager::canReadback()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::ReadbackManager* self=Luna< ork::Object >::checkSubType< proland::ReadbackManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::ReadbackManager::canReadback(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->canReadback();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::ReadbackManager::readback(ork::ptr< ork::FrameBuffer > fb, int x, int y, int w, int h, ork::TextureFormat f, ork::PixelType t, ork::ptr< proland::ReadbackManager::Callback > cb)
	static int _bind_readback(lua_State *L) {
		if (!_lg_typecheck_readback(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::ReadbackManager::readback(ork::ptr< ork::FrameBuffer > fb, int x, int y, int w, int h, ork::TextureFormat f, ork::PixelType t, ork::ptr< proland::ReadbackManager::Callback > cb) function, expected prototype:\nbool proland::ReadbackManager::readback(ork::ptr< ork::FrameBuffer > fb, int x, int y, int w, int h, ork::TextureFormat f, ork::PixelType t, ork::ptr< proland::ReadbackManager::Callback > cb)\nClass arguments details:\narg 1 ID = [unknown]\narg 8 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::FrameBuffer > fb = Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,2);
		int x=(int)lua_tointeger(L,3);
		int y=(int)lua_tointeger(L,4);
		int w=(int)lua_tointeger(L,5);
		int h=(int)lua_tointeger(L,6);
		ork::TextureFormat f=(ork::TextureFormat)lua_tointeger(L,7);
		ork::PixelType t=(ork::PixelType)lua_tointeger(L,8);
		ork::ptr< proland::ReadbackManager::Callback > cb = Luna< ork::Object >::checkSubType< proland::ReadbackManager::Callback >(L,9);

		proland::ReadbackManager* self=Luna< ork::Object >::checkSubType< proland::ReadbackManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::ReadbackManager::readback(ork::ptr< ork::FrameBuffer >, int, int, int, int, ork::TextureFormat, ork::PixelType, ork::ptr< proland::ReadbackManager::Callback >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->readback(fb, x, y, w, h, f, t, cb);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void proland::ReadbackManager::newFrame()
	static int _bind_newFrame(lua_State *L) {
		if (!_lg_typecheck_newFrame(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ReadbackManager::newFrame() function, expected prototype:\nvoid proland::ReadbackManager::newFrame()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::ReadbackManager* self=Luna< ork::Object >::checkSubType< proland::ReadbackManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ReadbackManager::newFrame(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->newFrame();

		return 0;
	}

	// const char * proland::ReadbackManager::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * proland::ReadbackManager::base_toString() function, expected prototype:\nconst char * proland::ReadbackManager::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::ReadbackManager* self=Luna< ork::Object >::checkSubType< proland::ReadbackManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * proland::ReadbackManager::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->ReadbackManager::toString();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

proland::ReadbackManager* LunaTraits< proland::ReadbackManager >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_ReadbackManager::_bind_ctor(L);
}

void LunaTraits< proland::ReadbackManager >::_bind_dtor(proland::ReadbackManager* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< proland::ReadbackManager >::className[] = "ReadbackManager";
const char LunaTraits< proland::ReadbackManager >::fullName[] = "proland::ReadbackManager";
const char LunaTraits< proland::ReadbackManager >::moduleName[] = "proland";
const char* LunaTraits< proland::ReadbackManager >::parents[] = {"ork.Object", 0};
const int LunaTraits< proland::ReadbackManager >::hash = 30440782;
const int LunaTraits< proland::ReadbackManager >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< proland::ReadbackManager >::methods[] = {
	{"canReadback", &luna_wrapper_proland_ReadbackManager::_bind_canReadback},
	{"readback", &luna_wrapper_proland_ReadbackManager::_bind_readback},
	{"newFrame", &luna_wrapper_proland_ReadbackManager::_bind_newFrame},
	{"base_toString", &luna_wrapper_proland_ReadbackManager::_bind_base_toString},
	{"fromVoid", &luna_wrapper_proland_ReadbackManager::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_ReadbackManager::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_ReadbackManager::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::ReadbackManager >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_ReadbackManager::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::ReadbackManager >::enumValues[] = {
	{0,0}
};


