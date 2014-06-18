#include <plug_common.h>

class luna_wrapper_ID3DXFont {
public:
	typedef Luna< ID3DXFont > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92560396) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ID3DXFont*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ID3DXFont* rhs =(Luna< ID3DXFont >::check(L,2));
		ID3DXFont* self=(Luna< ID3DXFont >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
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

		ID3DXFont* self= (ID3DXFont*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ID3DXFont >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92560396) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< ID3DXFont >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ID3DXFont* self=(Luna< ID3DXFont >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ID3DXFont");
		
		return luna_dynamicCast(L,converters,"ID3DXFont",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_AddRef(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Release(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_drawText(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,92560396)) ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303235) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92303235) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_drawTextSprite(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,92560396)) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,23746375)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92303235) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,92303235) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// unsigned long ID3DXFont::AddRef()
	static int _bind_AddRef(lua_State *L) {
		if (!_lg_typecheck_AddRef(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long ID3DXFont::AddRef() function, expected prototype:\nunsigned long ID3DXFont::AddRef()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ID3DXFont* self=(Luna< ID3DXFont >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long ID3DXFont::AddRef(). Got : '%s'\n%s",typeid(Luna< ID3DXFont >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->AddRef();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long ID3DXFont::Release()
	static int _bind_Release(lua_State *L) {
		if (!_lg_typecheck_Release(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long ID3DXFont::Release() function, expected prototype:\nunsigned long ID3DXFont::Release()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ID3DXFont* self=(Luna< ID3DXFont >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long ID3DXFont::Release(). Got : '%s'\n%s",typeid(Luna< ID3DXFont >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->Release();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void ID3DXFont::drawText(ID3DXFont * font, const std::string & text, osg::Vec4f rect, osg::Vec4f color, unsigned int flags)
	static int _bind_drawText(lua_State *L) {
		if (!_lg_typecheck_drawText(L)) {
			luaL_error(L, "luna typecheck failed in void ID3DXFont::drawText(ID3DXFont * font, const std::string & text, osg::Vec4f rect, osg::Vec4f color, unsigned int flags) function, expected prototype:\nvoid ID3DXFont::drawText(ID3DXFont * font, const std::string & text, osg::Vec4f rect, osg::Vec4f color, unsigned int flags)\nClass arguments details:\narg 1 ID = 92560396\n\n%s",luna_dumpStack(L).c_str());
		}

		ID3DXFont* font=(Luna< ID3DXFont >::check(L,1));
		std::string text(lua_tostring(L,2),lua_objlen(L,2));
		osg::Vec4f* rect_ptr=(Luna< osg::Vec4f >::check(L,3));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in ID3DXFont::drawText function");
		}
		osg::Vec4f rect=*rect_ptr;
		osg::Vec4f* color_ptr=(Luna< osg::Vec4f >::check(L,4));
		if( !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in ID3DXFont::drawText function");
		}
		osg::Vec4f color=*color_ptr;
		unsigned int flags=(unsigned int)lua_tointeger(L,5);

		drawText(font, text, rect, color, flags);

		return 0;
	}

	// void ID3DXFont::drawTextSprite(ID3DXFont * font, ID3DXSprite * sprite, const std::string & text, osg::Vec4f rect, osg::Vec4f color, unsigned int flags)
	static int _bind_drawTextSprite(lua_State *L) {
		if (!_lg_typecheck_drawTextSprite(L)) {
			luaL_error(L, "luna typecheck failed in void ID3DXFont::drawTextSprite(ID3DXFont * font, ID3DXSprite * sprite, const std::string & text, osg::Vec4f rect, osg::Vec4f color, unsigned int flags) function, expected prototype:\nvoid ID3DXFont::drawTextSprite(ID3DXFont * font, ID3DXSprite * sprite, const std::string & text, osg::Vec4f rect, osg::Vec4f color, unsigned int flags)\nClass arguments details:\narg 1 ID = 92560396\narg 2 ID = 23746375\n\n%s",luna_dumpStack(L).c_str());
		}

		ID3DXFont* font=(Luna< ID3DXFont >::check(L,1));
		ID3DXSprite* sprite=(Luna< ID3DXSprite >::check(L,2));
		std::string text(lua_tostring(L,3),lua_objlen(L,3));
		osg::Vec4f* rect_ptr=(Luna< osg::Vec4f >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in ID3DXFont::drawTextSprite function");
		}
		osg::Vec4f rect=*rect_ptr;
		osg::Vec4f* color_ptr=(Luna< osg::Vec4f >::check(L,5));
		if( !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in ID3DXFont::drawTextSprite function");
		}
		osg::Vec4f color=*color_ptr;
		unsigned int flags=(unsigned int)lua_tointeger(L,6);

		drawTextSprite(font, sprite, text, rect, color, flags);

		return 0;
	}


	// Operator binds:

};

ID3DXFont* LunaTraits< ID3DXFont >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< ID3DXFont >::_bind_dtor(ID3DXFont* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< ID3DXFont >::className[] = "ID3DXFont";
const char LunaTraits< ID3DXFont >::fullName[] = "ID3DXFont";
const char LunaTraits< ID3DXFont >::moduleName[] = "dx9";
const char* LunaTraits< ID3DXFont >::parents[] = {0};
const int LunaTraits< ID3DXFont >::hash = 92560396;
const int LunaTraits< ID3DXFont >::uniqueIDs[] = {92560396,0};

luna_RegType LunaTraits< ID3DXFont >::methods[] = {
	{"AddRef", &luna_wrapper_ID3DXFont::_bind_AddRef},
	{"Release", &luna_wrapper_ID3DXFont::_bind_Release},
	{"drawText", &luna_wrapper_ID3DXFont::_bind_drawText},
	{"drawTextSprite", &luna_wrapper_ID3DXFont::_bind_drawTextSprite},
	{"dynCast", &luna_wrapper_ID3DXFont::_bind_dynCast},
	{"__eq", &luna_wrapper_ID3DXFont::_bind___eq},
	{"fromVoid", &luna_wrapper_ID3DXFont::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ID3DXFont::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< ID3DXFont >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ID3DXFont >::enumValues[] = {
	{0,0}
};


