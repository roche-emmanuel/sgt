#ifndef _WRAPPERS_WRAPPER_ORK_FONT_H_
#define _WRAPPERS_WRAPPER_ORK_FONT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <ork/util/Font.h>

class wrapper_ork_Font : public ork::Font, public luna_wrapper_base {

public:
		

	~wrapper_ork_Font() {
		logDEBUG3("Calling delete function for wrapper ork_Font");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((ork::Font*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_ork_Font(lua_State* L, lua_Table* dum, ork::ptr< ork::Texture2D > fontTex, int nCols, int nRows, int minChar, int maxChar, int invalidChar, bool fixedWidth, std::vector< int > charWidths) 
		: ork::Font(fontTex, nCols, nRows, minChar, maxChar, invalidChar, fixedWidth, charWidths), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((ork::Font*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_ork_Font(lua_State* L, lua_Table* dum) 
		: ork::Font(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((ork::Font*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((ork::Font*)this);
			return (_obj.callFunction<void>());
		}

		return Font::doRelease();
	};

	// void ork::Font::init(ork::ptr< ork::Texture2D > fontTex, int nCols, int nRows, int minChar, int maxChar, int invalidChar, bool fixedWidth, std::vector< int > charWidths)
	void init(ork::ptr< ork::Texture2D > fontTex, int nCols, int nRows, int minChar, int maxChar, int invalidChar, bool fixedWidth, std::vector< int > charWidths) {
		if(_obj.pushFunction("init")) {
			_obj.pushArg((ork::Font*)this);
			_obj.pushArg((ork::Texture2D*)fontTex.get());
			_obj.pushArg(nCols);
			_obj.pushArg(nRows);
			_obj.pushArg(minChar);
			_obj.pushArg(maxChar);
			_obj.pushArg(invalidChar);
			_obj.pushArg(fixedWidth);
			_obj.pushArg(&charWidths);
			return (_obj.callFunction<void>());
		}

		return Font::init(fontTex, nCols, nRows, minChar, maxChar, invalidChar, fixedWidth, charWidths);
	};

	// void ork::Font::swap(ork::ptr< ork::Font > t)
	void swap(ork::ptr< ork::Font > t) {
		if(_obj.pushFunction("swap")) {
			_obj.pushArg((ork::Font*)this);
			_obj.pushArg((ork::Font*)t.get());
			return (_obj.callFunction<void>());
		}

		return Font::swap(t);
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((ork::Font*)this);
			return (_obj.callFunction<const char*>());
		}

		return Font::toString();
	};


	// Protected non-virtual methods:
	// int ork::Font::charCount(char c) const
	int public_charCount(char c) const {
		return ork::Font::charCount(c);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_charCount(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// int ork::Font::public_charCount(char c) const
	static int _bind_public_charCount(lua_State *L) {
		if (!_lg_typecheck_public_charCount(L)) {
			luaL_error(L, "luna typecheck failed in int ork::Font::public_charCount(char c) const function, expected prototype:\nint ork::Font::public_charCount(char c) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		char c=(char)lua_tointeger(L,2);

		wrapper_ork_Font* self=Luna< ork::Object >::checkSubType< wrapper_ork_Font >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int ork::Font::public_charCount(char) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->public_charCount(c);
		lua_pushnumber(L,lret);

		return 1;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"charCount",_bind_public_charCount},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

