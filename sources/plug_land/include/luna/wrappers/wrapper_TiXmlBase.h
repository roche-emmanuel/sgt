#ifndef _WRAPPERS_WRAPPER_TIXMLBASE_H_
#define _WRAPPERS_WRAPPER_TIXMLBASE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <ork/resource/tinyxml.h>

class wrapper_TiXmlBase : public TiXmlBase, public luna_wrapper_base {

public:
		

	~wrapper_TiXmlBase() {
		logDEBUG3("Calling delete function for wrapper TiXmlBase");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((TiXmlBase*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_TiXmlBase(lua_State* L, lua_Table* dum) 
		: TiXmlBase(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((TiXmlBase*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:

	// Protected non-virtual methods:
	// static const char * TiXmlBase::SkipWhiteSpace(const char * arg1, TiXmlEncoding encoding)
	static const char * public_SkipWhiteSpace(const char * arg1, TiXmlEncoding encoding) {
		return TiXmlBase::SkipWhiteSpace(arg1, encoding);
	};

	// static bool TiXmlBase::IsWhiteSpace(char c)
	static bool public_IsWhiteSpace(char c) {
		return TiXmlBase::IsWhiteSpace(c);
	};

	// static const char * TiXmlBase::GetEntity(const char * in, char * value, int * length, TiXmlEncoding encoding)
	static const char * public_GetEntity(const char * in, char * value, int * length, TiXmlEncoding encoding) {
		return TiXmlBase::GetEntity(in, value, length, encoding);
	};

	// static const char * TiXmlBase::GetChar(const char * p, char * _value, int * length, TiXmlEncoding encoding)
	static const char * public_GetChar(const char * p, char * _value, int * length, TiXmlEncoding encoding) {
		return TiXmlBase::GetChar(p, _value, length, encoding);
	};

	// static bool TiXmlBase::StringEqual(const char * p, const char * endTag, bool ignoreCase, TiXmlEncoding encoding)
	static bool public_StringEqual(const char * p, const char * endTag, bool ignoreCase, TiXmlEncoding encoding) {
		return TiXmlBase::StringEqual(p, endTag, ignoreCase, encoding);
	};

	// static int TiXmlBase::IsAlpha(unsigned char anyByte, TiXmlEncoding encoding)
	static int public_IsAlpha(unsigned char anyByte, TiXmlEncoding encoding) {
		return TiXmlBase::IsAlpha(anyByte, encoding);
	};

	// static int TiXmlBase::IsAlphaNum(unsigned char anyByte, TiXmlEncoding encoding)
	static int public_IsAlphaNum(unsigned char anyByte, TiXmlEncoding encoding) {
		return TiXmlBase::IsAlphaNum(anyByte, encoding);
	};

	// static int TiXmlBase::ToLower(int v, TiXmlEncoding encoding)
	static int public_ToLower(int v, TiXmlEncoding encoding) {
		return TiXmlBase::ToLower(v, encoding);
	};

	// static void TiXmlBase::ConvertUTF32ToUTF8(unsigned long input, char * output, int * length)
	static void public_ConvertUTF32ToUTF8(unsigned long input, char * output, int * length) {
		return TiXmlBase::ConvertUTF32ToUTF8(input, output, length);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_SkipWhiteSpace(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_IsWhiteSpace(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_GetEntity(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_GetChar(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_StringEqual(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_IsAlpha(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_IsAlphaNum(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_ToLower(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_ConvertUTF32ToUTF8(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,1)!=LUA_TNUMBER ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// static const char * TiXmlBase::public_SkipWhiteSpace(const char * arg1, TiXmlEncoding encoding)
	static int _bind_public_SkipWhiteSpace(lua_State *L) {
		if (!_lg_typecheck_public_SkipWhiteSpace(L)) {
			luaL_error(L, "luna typecheck failed in static const char * TiXmlBase::public_SkipWhiteSpace(const char * arg1, TiXmlEncoding encoding) function, expected prototype:\nstatic const char * TiXmlBase::public_SkipWhiteSpace(const char * arg1, TiXmlEncoding encoding)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * _arg1=(const char *)lua_tostring(L,1);
		TiXmlEncoding encoding=(TiXmlEncoding)lua_tointeger(L,2);

		wrapper_TiXmlBase* self=Luna< TiXmlBase >::checkSubType< wrapper_TiXmlBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call static const char * TiXmlBase::public_SkipWhiteSpace(const char *, TiXmlEncoding). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->public_SkipWhiteSpace(_arg1, encoding);
		lua_pushstring(L,lret);

		return 1;
	}

	// static bool TiXmlBase::public_IsWhiteSpace(char c)
	static int _bind_public_IsWhiteSpace(lua_State *L) {
		if (!_lg_typecheck_public_IsWhiteSpace(L)) {
			luaL_error(L, "luna typecheck failed in static bool TiXmlBase::public_IsWhiteSpace(char c) function, expected prototype:\nstatic bool TiXmlBase::public_IsWhiteSpace(char c)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		char c=(char)lua_tointeger(L,1);

		wrapper_TiXmlBase* self=Luna< TiXmlBase >::checkSubType< wrapper_TiXmlBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call static bool TiXmlBase::public_IsWhiteSpace(char). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->public_IsWhiteSpace(c);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static const char * TiXmlBase::public_GetEntity(const char * in, char * value, int * length, TiXmlEncoding encoding)
	static int _bind_public_GetEntity(lua_State *L) {
		if (!_lg_typecheck_public_GetEntity(L)) {
			luaL_error(L, "luna typecheck failed in static const char * TiXmlBase::public_GetEntity(const char * in, char * value, int * length, TiXmlEncoding encoding) function, expected prototype:\nstatic const char * TiXmlBase::public_GetEntity(const char * in, char * value, int * length, TiXmlEncoding encoding)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * in=(const char *)lua_tostring(L,1);
		char* value=(char*)Luna< void >::check(L,2);
		int* length=(int*)Luna< void >::check(L,3);
		TiXmlEncoding encoding=(TiXmlEncoding)lua_tointeger(L,4);

		wrapper_TiXmlBase* self=Luna< TiXmlBase >::checkSubType< wrapper_TiXmlBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call static const char * TiXmlBase::public_GetEntity(const char *, char *, int *, TiXmlEncoding). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->public_GetEntity(in, value, length, encoding);
		lua_pushstring(L,lret);

		return 1;
	}

	// static const char * TiXmlBase::public_GetChar(const char * p, char * _value, int * length, TiXmlEncoding encoding)
	static int _bind_public_GetChar(lua_State *L) {
		if (!_lg_typecheck_public_GetChar(L)) {
			luaL_error(L, "luna typecheck failed in static const char * TiXmlBase::public_GetChar(const char * p, char * _value, int * length, TiXmlEncoding encoding) function, expected prototype:\nstatic const char * TiXmlBase::public_GetChar(const char * p, char * _value, int * length, TiXmlEncoding encoding)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * p=(const char *)lua_tostring(L,1);
		char* _value=(char*)Luna< void >::check(L,2);
		int* length=(int*)Luna< void >::check(L,3);
		TiXmlEncoding encoding=(TiXmlEncoding)lua_tointeger(L,4);

		wrapper_TiXmlBase* self=Luna< TiXmlBase >::checkSubType< wrapper_TiXmlBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call static const char * TiXmlBase::public_GetChar(const char *, char *, int *, TiXmlEncoding). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->public_GetChar(p, _value, length, encoding);
		lua_pushstring(L,lret);

		return 1;
	}

	// static bool TiXmlBase::public_StringEqual(const char * p, const char * endTag, bool ignoreCase, TiXmlEncoding encoding)
	static int _bind_public_StringEqual(lua_State *L) {
		if (!_lg_typecheck_public_StringEqual(L)) {
			luaL_error(L, "luna typecheck failed in static bool TiXmlBase::public_StringEqual(const char * p, const char * endTag, bool ignoreCase, TiXmlEncoding encoding) function, expected prototype:\nstatic bool TiXmlBase::public_StringEqual(const char * p, const char * endTag, bool ignoreCase, TiXmlEncoding encoding)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * p=(const char *)lua_tostring(L,1);
		const char * endTag=(const char *)lua_tostring(L,2);
		bool ignoreCase=(bool)(lua_toboolean(L,3)==1);
		TiXmlEncoding encoding=(TiXmlEncoding)lua_tointeger(L,4);

		wrapper_TiXmlBase* self=Luna< TiXmlBase >::checkSubType< wrapper_TiXmlBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call static bool TiXmlBase::public_StringEqual(const char *, const char *, bool, TiXmlEncoding). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->public_StringEqual(p, endTag, ignoreCase, encoding);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static int TiXmlBase::public_IsAlpha(unsigned char anyByte, TiXmlEncoding encoding)
	static int _bind_public_IsAlpha(lua_State *L) {
		if (!_lg_typecheck_public_IsAlpha(L)) {
			luaL_error(L, "luna typecheck failed in static int TiXmlBase::public_IsAlpha(unsigned char anyByte, TiXmlEncoding encoding) function, expected prototype:\nstatic int TiXmlBase::public_IsAlpha(unsigned char anyByte, TiXmlEncoding encoding)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char anyByte = (unsigned char)(lua_tointeger(L,1));
		TiXmlEncoding encoding=(TiXmlEncoding)lua_tointeger(L,2);

		wrapper_TiXmlBase* self=Luna< TiXmlBase >::checkSubType< wrapper_TiXmlBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call static int TiXmlBase::public_IsAlpha(unsigned char, TiXmlEncoding). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->public_IsAlpha(anyByte, encoding);
		lua_pushnumber(L,lret);

		return 1;
	}

	// static int TiXmlBase::public_IsAlphaNum(unsigned char anyByte, TiXmlEncoding encoding)
	static int _bind_public_IsAlphaNum(lua_State *L) {
		if (!_lg_typecheck_public_IsAlphaNum(L)) {
			luaL_error(L, "luna typecheck failed in static int TiXmlBase::public_IsAlphaNum(unsigned char anyByte, TiXmlEncoding encoding) function, expected prototype:\nstatic int TiXmlBase::public_IsAlphaNum(unsigned char anyByte, TiXmlEncoding encoding)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char anyByte = (unsigned char)(lua_tointeger(L,1));
		TiXmlEncoding encoding=(TiXmlEncoding)lua_tointeger(L,2);

		wrapper_TiXmlBase* self=Luna< TiXmlBase >::checkSubType< wrapper_TiXmlBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call static int TiXmlBase::public_IsAlphaNum(unsigned char, TiXmlEncoding). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->public_IsAlphaNum(anyByte, encoding);
		lua_pushnumber(L,lret);

		return 1;
	}

	// static int TiXmlBase::public_ToLower(int v, TiXmlEncoding encoding)
	static int _bind_public_ToLower(lua_State *L) {
		if (!_lg_typecheck_public_ToLower(L)) {
			luaL_error(L, "luna typecheck failed in static int TiXmlBase::public_ToLower(int v, TiXmlEncoding encoding) function, expected prototype:\nstatic int TiXmlBase::public_ToLower(int v, TiXmlEncoding encoding)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int v=(int)lua_tointeger(L,1);
		TiXmlEncoding encoding=(TiXmlEncoding)lua_tointeger(L,2);

		wrapper_TiXmlBase* self=Luna< TiXmlBase >::checkSubType< wrapper_TiXmlBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call static int TiXmlBase::public_ToLower(int, TiXmlEncoding). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->public_ToLower(v, encoding);
		lua_pushnumber(L,lret);

		return 1;
	}

	// static void TiXmlBase::public_ConvertUTF32ToUTF8(unsigned long input, char * output, int * length)
	static int _bind_public_ConvertUTF32ToUTF8(lua_State *L) {
		if (!_lg_typecheck_public_ConvertUTF32ToUTF8(L)) {
			luaL_error(L, "luna typecheck failed in static void TiXmlBase::public_ConvertUTF32ToUTF8(unsigned long input, char * output, int * length) function, expected prototype:\nstatic void TiXmlBase::public_ConvertUTF32ToUTF8(unsigned long input, char * output, int * length)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long input=(unsigned long)lua_tonumber(L,1);
		char* output=(char*)Luna< void >::check(L,2);
		int* length=(int*)Luna< void >::check(L,3);

		wrapper_TiXmlBase* self=Luna< TiXmlBase >::checkSubType< wrapper_TiXmlBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call static void TiXmlBase::public_ConvertUTF32ToUTF8(unsigned long, char *, int *). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_ConvertUTF32ToUTF8(input, output, length);

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"SkipWhiteSpace",_bind_public_SkipWhiteSpace},
		{"IsWhiteSpace",_bind_public_IsWhiteSpace},
		{"GetEntity",_bind_public_GetEntity},
		{"GetChar",_bind_public_GetChar},
		{"StringEqual",_bind_public_StringEqual},
		{"IsAlpha",_bind_public_IsAlpha},
		{"IsAlphaNum",_bind_public_IsAlphaNum},
		{"ToLower",_bind_public_ToLower},
		{"ConvertUTF32ToUTF8",_bind_public_ConvertUTF32ToUTF8},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


public:
// void TiXmlBase::Print(FILE * cfile, int depth) const
void Print(FILE *, int) const {
	THROW_IF(true,"The function call void TiXmlBase::Print(FILE *, int) const is not implemented in wrapper.");
};

public:
// const char * TiXmlBase::Parse(const char * p, TiXmlParsingData * data, TiXmlEncoding encoding)
const char * Parse(const char *, TiXmlParsingData *, TiXmlEncoding) {
	THROW_IF(true,"The function call const char * TiXmlBase::Parse(const char *, TiXmlParsingData *, TiXmlEncoding) is not implemented in wrapper.");
	return NULL;
};

};




#endif

