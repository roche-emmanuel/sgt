#include <plug_common.h>

#include <luna/wrappers/wrapper_ork_Window.h>

class luna_wrapper_ork_Window {
public:
	typedef Luna< ork::Window > luna_t;

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

		ork::Window* self= (ork::Window*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::Window >::push(L,self,false);
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
		//ork::Window* ptr= dynamic_cast< ork::Window* >(Luna< ork::Object >::check(L,1));
		ork::Window* ptr= luna_caster< ork::Object, ork::Window >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< ork::Window >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,5752345) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_start(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_toString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_redisplay(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_reshape(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_idle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_mouseClick(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_mouseWheel(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_mouseMotion(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_mousePassiveMotion(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_keyTyped(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_keyReleased(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_specialKey(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_specialKeyReleased(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// ork::Window::Window(lua_Table * data, const ork::Window::Parameters & params)
	static ork::Window* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in ork::Window::Window(lua_Table * data, const ork::Window::Parameters & params) function, expected prototype:\nork::Window::Window(lua_Table * data, const ork::Window::Parameters & params)\nClass arguments details:\narg 2 ID = 5752345\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::Window::Parameters* params_ptr=(Luna< ork::Window::Parameters >::check(L,2));
		if( !params_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg params in ork::Window::Window function");
		}
		const ork::Window::Parameters & params=*params_ptr;

		return new wrapper_ork_Window(L,NULL, params);
	}


	// Function binds:
	// int ork::Window::getWidth() const
	static int _bind_getWidth(lua_State *L) {
		if (!_lg_typecheck_getWidth(L)) {
			luaL_error(L, "luna typecheck failed in int ork::Window::getWidth() const function, expected prototype:\nint ork::Window::getWidth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Window* self=Luna< ork::Object >::checkSubType< ork::Window >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int ork::Window::getWidth() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int ork::Window::getHeight() const
	static int _bind_getHeight(lua_State *L) {
		if (!_lg_typecheck_getHeight(L)) {
			luaL_error(L, "luna typecheck failed in int ork::Window::getHeight() const function, expected prototype:\nint ork::Window::getHeight() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Window* self=Luna< ork::Object >::checkSubType< ork::Window >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int ork::Window::getHeight() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void ork::Window::start()
	static int _bind_start(lua_State *L) {
		if (!_lg_typecheck_start(L)) {
			luaL_error(L, "luna typecheck failed in void ork::Window::start() function, expected prototype:\nvoid ork::Window::start()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Window* self=Luna< ork::Object >::checkSubType< ork::Window >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::Window::start(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->start();

		return 0;
	}

	// const char * ork::Window::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * ork::Window::base_toString() function, expected prototype:\nconst char * ork::Window::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Window* self=Luna< ork::Object >::checkSubType< ork::Window >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * ork::Window::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Window::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// void ork::Window::base_redisplay(double t, double dt)
	static int _bind_base_redisplay(lua_State *L) {
		if (!_lg_typecheck_base_redisplay(L)) {
			luaL_error(L, "luna typecheck failed in void ork::Window::base_redisplay(double t, double dt) function, expected prototype:\nvoid ork::Window::base_redisplay(double t, double dt)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double t=(double)lua_tonumber(L,2);
		double dt=(double)lua_tonumber(L,3);

		ork::Window* self=Luna< ork::Object >::checkSubType< ork::Window >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::Window::base_redisplay(double, double). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Window::redisplay(t, dt);

		return 0;
	}

	// void ork::Window::base_reshape(int x, int y)
	static int _bind_base_reshape(lua_State *L) {
		if (!_lg_typecheck_base_reshape(L)) {
			luaL_error(L, "luna typecheck failed in void ork::Window::base_reshape(int x, int y) function, expected prototype:\nvoid ork::Window::base_reshape(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		ork::Window* self=Luna< ork::Object >::checkSubType< ork::Window >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::Window::base_reshape(int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Window::reshape(x, y);

		return 0;
	}

	// void ork::Window::base_idle(bool damaged)
	static int _bind_base_idle(lua_State *L) {
		if (!_lg_typecheck_base_idle(L)) {
			luaL_error(L, "luna typecheck failed in void ork::Window::base_idle(bool damaged) function, expected prototype:\nvoid ork::Window::base_idle(bool damaged)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool damaged=(bool)(lua_toboolean(L,2)==1);

		ork::Window* self=Luna< ork::Object >::checkSubType< ork::Window >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::Window::base_idle(bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Window::idle(damaged);

		return 0;
	}

	// bool ork::Window::base_mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y)
	static int _bind_base_mouseClick(lua_State *L) {
		if (!_lg_typecheck_base_mouseClick(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::Window::base_mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool ork::Window::base_mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::EventHandler::button b=(ork::EventHandler::button)lua_tointeger(L,2);
		ork::EventHandler::state s=(ork::EventHandler::state)lua_tointeger(L,3);
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,4);
		int x=(int)lua_tointeger(L,5);
		int y=(int)lua_tointeger(L,6);

		ork::Window* self=Luna< ork::Object >::checkSubType< ork::Window >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::Window::base_mouseClick(ork::EventHandler::button, ork::EventHandler::state, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Window::mouseClick(b, s, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool ork::Window::base_mouseWheel(ork::EventHandler::wheel b, ork::EventHandler::modifier m, int x, int y)
	static int _bind_base_mouseWheel(lua_State *L) {
		if (!_lg_typecheck_base_mouseWheel(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::Window::base_mouseWheel(ork::EventHandler::wheel b, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool ork::Window::base_mouseWheel(ork::EventHandler::wheel b, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::EventHandler::wheel b=(ork::EventHandler::wheel)lua_tointeger(L,2);
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);

		ork::Window* self=Luna< ork::Object >::checkSubType< ork::Window >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::Window::base_mouseWheel(ork::EventHandler::wheel, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Window::mouseWheel(b, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool ork::Window::base_mouseMotion(int x, int y)
	static int _bind_base_mouseMotion(lua_State *L) {
		if (!_lg_typecheck_base_mouseMotion(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::Window::base_mouseMotion(int x, int y) function, expected prototype:\nbool ork::Window::base_mouseMotion(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		ork::Window* self=Luna< ork::Object >::checkSubType< ork::Window >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::Window::base_mouseMotion(int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Window::mouseMotion(x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool ork::Window::base_mousePassiveMotion(int x, int y)
	static int _bind_base_mousePassiveMotion(lua_State *L) {
		if (!_lg_typecheck_base_mousePassiveMotion(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::Window::base_mousePassiveMotion(int x, int y) function, expected prototype:\nbool ork::Window::base_mousePassiveMotion(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		ork::Window* self=Luna< ork::Object >::checkSubType< ork::Window >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::Window::base_mousePassiveMotion(int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Window::mousePassiveMotion(x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool ork::Window::base_keyTyped(unsigned char c, ork::EventHandler::modifier m, int x, int y)
	static int _bind_base_keyTyped(lua_State *L) {
		if (!_lg_typecheck_base_keyTyped(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::Window::base_keyTyped(unsigned char c, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool ork::Window::base_keyTyped(unsigned char c, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char c = (unsigned char)(lua_tointeger(L,2));
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);

		ork::Window* self=Luna< ork::Object >::checkSubType< ork::Window >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::Window::base_keyTyped(unsigned char, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Window::keyTyped(c, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool ork::Window::base_keyReleased(unsigned char c, ork::EventHandler::modifier m, int x, int y)
	static int _bind_base_keyReleased(lua_State *L) {
		if (!_lg_typecheck_base_keyReleased(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::Window::base_keyReleased(unsigned char c, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool ork::Window::base_keyReleased(unsigned char c, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char c = (unsigned char)(lua_tointeger(L,2));
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);

		ork::Window* self=Luna< ork::Object >::checkSubType< ork::Window >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::Window::base_keyReleased(unsigned char, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Window::keyReleased(c, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool ork::Window::base_specialKey(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y)
	static int _bind_base_specialKey(lua_State *L) {
		if (!_lg_typecheck_base_specialKey(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::Window::base_specialKey(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool ork::Window::base_specialKey(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::EventHandler::key k=(ork::EventHandler::key)lua_tointeger(L,2);
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);

		ork::Window* self=Luna< ork::Object >::checkSubType< ork::Window >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::Window::base_specialKey(ork::EventHandler::key, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Window::specialKey(k, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool ork::Window::base_specialKeyReleased(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y)
	static int _bind_base_specialKeyReleased(lua_State *L) {
		if (!_lg_typecheck_base_specialKeyReleased(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::Window::base_specialKeyReleased(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool ork::Window::base_specialKeyReleased(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::EventHandler::key k=(ork::EventHandler::key)lua_tointeger(L,2);
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);

		ork::Window* self=Luna< ork::Object >::checkSubType< ork::Window >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::Window::base_specialKeyReleased(ork::EventHandler::key, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Window::specialKeyReleased(k, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

ork::Window* LunaTraits< ork::Window >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ork_Window::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// int ork::Window::getWidth() const
	// int ork::Window::getHeight() const
	// void ork::Window::start()
}

void LunaTraits< ork::Window >::_bind_dtor(ork::Window* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< ork::Window >::className[] = "Window";
const char LunaTraits< ork::Window >::fullName[] = "ork::Window";
const char LunaTraits< ork::Window >::moduleName[] = "ork";
const char* LunaTraits< ork::Window >::parents[] = {"ork.EventHandler", 0};
const int LunaTraits< ork::Window >::hash = 36997816;
const int LunaTraits< ork::Window >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< ork::Window >::methods[] = {
	{"getWidth", &luna_wrapper_ork_Window::_bind_getWidth},
	{"getHeight", &luna_wrapper_ork_Window::_bind_getHeight},
	{"start", &luna_wrapper_ork_Window::_bind_start},
	{"base_toString", &luna_wrapper_ork_Window::_bind_base_toString},
	{"base_redisplay", &luna_wrapper_ork_Window::_bind_base_redisplay},
	{"base_reshape", &luna_wrapper_ork_Window::_bind_base_reshape},
	{"base_idle", &luna_wrapper_ork_Window::_bind_base_idle},
	{"base_mouseClick", &luna_wrapper_ork_Window::_bind_base_mouseClick},
	{"base_mouseWheel", &luna_wrapper_ork_Window::_bind_base_mouseWheel},
	{"base_mouseMotion", &luna_wrapper_ork_Window::_bind_base_mouseMotion},
	{"base_mousePassiveMotion", &luna_wrapper_ork_Window::_bind_base_mousePassiveMotion},
	{"base_keyTyped", &luna_wrapper_ork_Window::_bind_base_keyTyped},
	{"base_keyReleased", &luna_wrapper_ork_Window::_bind_base_keyReleased},
	{"base_specialKey", &luna_wrapper_ork_Window::_bind_base_specialKey},
	{"base_specialKeyReleased", &luna_wrapper_ork_Window::_bind_base_specialKeyReleased},
	{"fromVoid", &luna_wrapper_ork_Window::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_Window::_bind_asVoid},
	{"getTable", &luna_wrapper_ork_Window::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< ork::Window >::converters[] = {
	{"ork::Object", &luna_wrapper_ork_Window::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< ork::Window >::enumValues[] = {
	{0,0}
};


