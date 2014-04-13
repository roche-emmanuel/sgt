#ifndef _WRAPPERS_WRAPPER_ORK_MESHBUFFERS_H_
#define _WRAPPERS_WRAPPER_ORK_MESHBUFFERS_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <ork/render/MeshBuffers.h>

class wrapper_ork_MeshBuffers : public ork::MeshBuffers, public luna_wrapper_base {

public:
		

	~wrapper_ork_MeshBuffers() {
		logDEBUG3("Calling delete function for wrapper ork_MeshBuffers");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((ork::MeshBuffers*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_ork_MeshBuffers(lua_State* L, lua_Table* dum) 
		: ork::MeshBuffers(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((ork::MeshBuffers*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((ork::MeshBuffers*)this);
			return (_obj.callFunction<void>());
		}

		return MeshBuffers::doRelease();
	};

	// void ork::MeshBuffers::swap(ork::ptr< ork::MeshBuffers > buffers)
	void swap(ork::ptr< ork::MeshBuffers > buffers) {
		if(_obj.pushFunction("swap")) {
			_obj.pushArg((ork::MeshBuffers*)this);
			_obj.pushArg((ork::MeshBuffers*)buffers.get());
			return (_obj.callFunction<void>());
		}

		return MeshBuffers::swap(buffers);
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((ork::MeshBuffers*)this);
			return (_obj.callFunction<const char*>());
		}

		return MeshBuffers::toString();
	};


	// Protected non-virtual methods:
	// void ork::MeshBuffers::draw(ork::MeshMode m, int first, int count, int primCount = 1, int base = 0) const
	void public_draw(ork::MeshMode m, int first, int count, int primCount = 1, int base = 0) const {
		return ork::MeshBuffers::draw(m, first, count, primCount, base);
	};

	// void ork::MeshBuffers::multiDraw(ork::MeshMode m, int * firsts, int * counts, int primCount, int * bases = 0) const
	void public_multiDraw(ork::MeshMode m, int * firsts, int * counts, int primCount, int * bases = 0) const {
		return ork::MeshBuffers::multiDraw(m, firsts, counts, primCount, bases);
	};

	// void ork::MeshBuffers::drawIndirect(ork::MeshMode m, const ork::Buffer & buf) const
	void public_drawIndirect(ork::MeshMode m, const ork::Buffer & buf) const {
		return ork::MeshBuffers::drawIndirect(m, buf);
	};

	// void ork::MeshBuffers::drawFeedback(ork::MeshMode m, unsigned int tfb, int stream = 0) const
	void public_drawFeedback(ork::MeshMode m, unsigned int tfb, int stream = 0) const {
		return ork::MeshBuffers::drawFeedback(m, tfb, stream);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_draw(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>6 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_multiDraw(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>6 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_drawIndirect(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_drawFeedback(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void ork::MeshBuffers::public_draw(ork::MeshMode m, int first, int count, int primCount = 1, int base = 0) const
	static int _bind_public_draw(lua_State *L) {
		if (!_lg_typecheck_public_draw(L)) {
			luaL_error(L, "luna typecheck failed in void ork::MeshBuffers::public_draw(ork::MeshMode m, int first, int count, int primCount = 1, int base = 0) const function, expected prototype:\nvoid ork::MeshBuffers::public_draw(ork::MeshMode m, int first, int count, int primCount = 1, int base = 0) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		ork::MeshMode m=(ork::MeshMode)lua_tointeger(L,2);
		int first=(int)lua_tointeger(L,3);
		int count=(int)lua_tointeger(L,4);
		int primCount=luatop>4 ? (int)lua_tointeger(L,5) : (int)1;
		int base=luatop>5 ? (int)lua_tointeger(L,6) : (int)0;

		wrapper_ork_MeshBuffers* self=Luna< ork::Object >::checkSubType< wrapper_ork_MeshBuffers >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::MeshBuffers::public_draw(ork::MeshMode, int, int, int, int) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_draw(m, first, count, primCount, base);

		return 0;
	}

	// void ork::MeshBuffers::public_multiDraw(ork::MeshMode m, int * firsts, int * counts, int primCount, int * bases = 0) const
	static int _bind_public_multiDraw(lua_State *L) {
		if (!_lg_typecheck_public_multiDraw(L)) {
			luaL_error(L, "luna typecheck failed in void ork::MeshBuffers::public_multiDraw(ork::MeshMode m, int * firsts, int * counts, int primCount, int * bases = 0) const function, expected prototype:\nvoid ork::MeshBuffers::public_multiDraw(ork::MeshMode m, int * firsts, int * counts, int primCount, int * bases = 0) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		ork::MeshMode m=(ork::MeshMode)lua_tointeger(L,2);
		int* firsts=(int*)Luna< void >::check(L,3);
		int* counts=(int*)Luna< void >::check(L,4);
		int primCount=(int)lua_tointeger(L,5);
		int* bases=luatop>5 ? (int*)Luna< void >::check(L,6) : (int*)0;

		wrapper_ork_MeshBuffers* self=Luna< ork::Object >::checkSubType< wrapper_ork_MeshBuffers >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::MeshBuffers::public_multiDraw(ork::MeshMode, int *, int *, int, int *) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_multiDraw(m, firsts, counts, primCount, bases);

		return 0;
	}

	// void ork::MeshBuffers::public_drawIndirect(ork::MeshMode m, const ork::Buffer & buf) const
	static int _bind_public_drawIndirect(lua_State *L) {
		if (!_lg_typecheck_public_drawIndirect(L)) {
			luaL_error(L, "luna typecheck failed in void ork::MeshBuffers::public_drawIndirect(ork::MeshMode m, const ork::Buffer & buf) const function, expected prototype:\nvoid ork::MeshBuffers::public_drawIndirect(ork::MeshMode m, const ork::Buffer & buf) const\nClass arguments details:\narg 2 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::MeshMode m=(ork::MeshMode)lua_tointeger(L,2);
		const ork::Buffer* buf_ptr=(Luna< ork::Object >::checkSubType< ork::Buffer >(L,3));
		if( !buf_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg buf in ork::MeshBuffers::public_drawIndirect function");
		}
		const ork::Buffer & buf=*buf_ptr;

		wrapper_ork_MeshBuffers* self=Luna< ork::Object >::checkSubType< wrapper_ork_MeshBuffers >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::MeshBuffers::public_drawIndirect(ork::MeshMode, const ork::Buffer &) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_drawIndirect(m, buf);

		return 0;
	}

	// void ork::MeshBuffers::public_drawFeedback(ork::MeshMode m, unsigned int tfb, int stream = 0) const
	static int _bind_public_drawFeedback(lua_State *L) {
		if (!_lg_typecheck_public_drawFeedback(L)) {
			luaL_error(L, "luna typecheck failed in void ork::MeshBuffers::public_drawFeedback(ork::MeshMode m, unsigned int tfb, int stream = 0) const function, expected prototype:\nvoid ork::MeshBuffers::public_drawFeedback(ork::MeshMode m, unsigned int tfb, int stream = 0) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		ork::MeshMode m=(ork::MeshMode)lua_tointeger(L,2);
		unsigned int tfb=(unsigned int)lua_tointeger(L,3);
		int stream=luatop>3 ? (int)lua_tointeger(L,4) : (int)0;

		wrapper_ork_MeshBuffers* self=Luna< ork::Object >::checkSubType< wrapper_ork_MeshBuffers >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::MeshBuffers::public_drawFeedback(ork::MeshMode, unsigned int, int) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_drawFeedback(m, tfb, stream);

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"draw",_bind_public_draw},
		{"multiDraw",_bind_public_multiDraw},
		{"drawIndirect",_bind_public_drawIndirect},
		{"drawFeedback",_bind_public_drawFeedback},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

