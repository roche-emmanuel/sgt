#include <plug_common.h>

#include <luna/wrappers/wrapper_ork_Font.h>

class luna_wrapper_ork_Font {
public:
	typedef Luna< ork::Font > luna_t;

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

		ork::Font* self= (ork::Font*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::Font >::push(L,self,false);
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
		//ork::Font* ptr= dynamic_cast< ork::Font* >(Luna< ork::Object >::check(L,1));
		ork::Font* ptr= luna_caster< ork::Object, ork::Font >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< ork::Font >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=8 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Texture2D >(L,1) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( lua_isboolean(L,7)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,8,92299338) ) return false;
		if( (!(Luna< std::vector< int > >::check(L,8))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=9 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Texture2D >(L,2) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( lua_isboolean(L,8)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,9,92299338) ) return false;
		if( (!(Luna< std::vector< int > >::check(L,9))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getImage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTileWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTileHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTileAspectRatio(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCharWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSize(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addLine(lua_State *L) {
		if( lua_gettop(L)!=8 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304302) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TSTRING ) return false;
		if( lua_type(L,6)!=LUA_TNUMBER ) return false;
		if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( !Luna<void>::has_uniqueid(L,8,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Mesh< ork::Font::Vertex, unsigned int > >(L,8) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addCenteredLine(lua_State *L) {
		if( lua_gettop(L)!=8 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304302) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TSTRING ) return false;
		if( lua_type(L,6)!=LUA_TNUMBER ) return false;
		if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( !Luna<void>::has_uniqueid(L,8,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Mesh< ork::Font::Vertex, unsigned int > >(L,8) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_toString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// ork::Font::Font(ork::ptr< ork::Texture2D > fontTex, int nCols, int nRows, int minChar, int maxChar, int invalidChar, bool fixedWidth, std::vector< int > charWidths)
	static ork::Font* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::Font::Font(ork::ptr< ork::Texture2D > fontTex, int nCols, int nRows, int minChar, int maxChar, int invalidChar, bool fixedWidth, std::vector< int > charWidths) function, expected prototype:\nork::Font::Font(ork::ptr< ork::Texture2D > fontTex, int nCols, int nRows, int minChar, int maxChar, int invalidChar, bool fixedWidth, std::vector< int > charWidths)\nClass arguments details:\narg 1 ID = [unknown]\narg 8 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Texture2D > fontTex = Luna< ork::Object >::checkSubType< ork::Texture2D >(L,1);
		int nCols=(int)lua_tointeger(L,2);
		int nRows=(int)lua_tointeger(L,3);
		int minChar=(int)lua_tointeger(L,4);
		int maxChar=(int)lua_tointeger(L,5);
		int invalidChar=(int)lua_tointeger(L,6);
		bool fixedWidth=(bool)(lua_toboolean(L,7)==1);
		std::vector< int >* charWidths_ptr=(Luna< std::vector< int > >::check(L,8));
		if( !charWidths_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg charWidths in ork::Font::Font function");
		}
		std::vector< int > charWidths=*charWidths_ptr;

		return new ork::Font(fontTex, nCols, nRows, minChar, maxChar, invalidChar, fixedWidth, charWidths);
	}

	// ork::Font::Font(lua_Table * data, ork::ptr< ork::Texture2D > fontTex, int nCols, int nRows, int minChar, int maxChar, int invalidChar, bool fixedWidth, std::vector< int > charWidths)
	static ork::Font* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::Font::Font(lua_Table * data, ork::ptr< ork::Texture2D > fontTex, int nCols, int nRows, int minChar, int maxChar, int invalidChar, bool fixedWidth, std::vector< int > charWidths) function, expected prototype:\nork::Font::Font(lua_Table * data, ork::ptr< ork::Texture2D > fontTex, int nCols, int nRows, int minChar, int maxChar, int invalidChar, bool fixedWidth, std::vector< int > charWidths)\nClass arguments details:\narg 2 ID = [unknown]\narg 9 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Texture2D > fontTex = Luna< ork::Object >::checkSubType< ork::Texture2D >(L,2);
		int nCols=(int)lua_tointeger(L,3);
		int nRows=(int)lua_tointeger(L,4);
		int minChar=(int)lua_tointeger(L,5);
		int maxChar=(int)lua_tointeger(L,6);
		int invalidChar=(int)lua_tointeger(L,7);
		bool fixedWidth=(bool)(lua_toboolean(L,8)==1);
		std::vector< int >* charWidths_ptr=(Luna< std::vector< int > >::check(L,9));
		if( !charWidths_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg charWidths in ork::Font::Font function");
		}
		std::vector< int > charWidths=*charWidths_ptr;

		return new wrapper_ork_Font(L,NULL, fontTex, nCols, nRows, minChar, maxChar, invalidChar, fixedWidth, charWidths);
	}

	// Overload binder for ork::Font::Font
	static ork::Font* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Font, cannot match any of the overloads for function Font:\n  Font(ork::ptr< ork::Texture2D >, int, int, int, int, int, bool, std::vector< int >)\n  Font(lua_Table *, ork::ptr< ork::Texture2D >, int, int, int, int, int, bool, std::vector< int >)\n");
		return NULL;
	}


	// Function binds:
	// ork::ptr< ork::Texture2D > ork::Font::getImage() const
	static int _bind_getImage(lua_State *L) {
		if (!_lg_typecheck_getImage(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Texture2D > ork::Font::getImage() const function, expected prototype:\nork::ptr< ork::Texture2D > ork::Font::getImage() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Font* self=Luna< ork::Object >::checkSubType< ork::Font >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Texture2D > ork::Font::getImage() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Texture2D > lret = self->getImage();
		Luna< ork::Texture2D >::push(L,lret.get(),false);

		return 1;
	}

	// float ork::Font::getTileWidth() const
	static int _bind_getTileWidth(lua_State *L) {
		if (!_lg_typecheck_getTileWidth(L)) {
			luaL_error(L, "luna typecheck failed in float ork::Font::getTileWidth() const function, expected prototype:\nfloat ork::Font::getTileWidth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Font* self=Luna< ork::Object >::checkSubType< ork::Font >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float ork::Font::getTileWidth() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getTileWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float ork::Font::getTileHeight() const
	static int _bind_getTileHeight(lua_State *L) {
		if (!_lg_typecheck_getTileHeight(L)) {
			luaL_error(L, "luna typecheck failed in float ork::Font::getTileHeight() const function, expected prototype:\nfloat ork::Font::getTileHeight() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Font* self=Luna< ork::Object >::checkSubType< ork::Font >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float ork::Font::getTileHeight() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getTileHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float ork::Font::getTileAspectRatio() const
	static int _bind_getTileAspectRatio(lua_State *L) {
		if (!_lg_typecheck_getTileAspectRatio(L)) {
			luaL_error(L, "luna typecheck failed in float ork::Font::getTileAspectRatio() const function, expected prototype:\nfloat ork::Font::getTileAspectRatio() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Font* self=Luna< ork::Object >::checkSubType< ork::Font >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float ork::Font::getTileAspectRatio() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getTileAspectRatio();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float ork::Font::getCharWidth(char c) const
	static int _bind_getCharWidth(lua_State *L) {
		if (!_lg_typecheck_getCharWidth(L)) {
			luaL_error(L, "luna typecheck failed in float ork::Font::getCharWidth(char c) const function, expected prototype:\nfloat ork::Font::getCharWidth(char c) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		char c=(char)lua_tointeger(L,2);

		ork::Font* self=Luna< ork::Object >::checkSubType< ork::Font >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float ork::Font::getCharWidth(char) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getCharWidth(c);
		lua_pushnumber(L,lret);

		return 1;
	}

	// ork::vec2f ork::Font::getSize(const std::string & line, float height) const
	static int _bind_getSize(lua_State *L) {
		if (!_lg_typecheck_getSize(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec2f ork::Font::getSize(const std::string & line, float height) const function, expected prototype:\nork::vec2f ork::Font::getSize(const std::string & line, float height) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string line(lua_tostring(L,2),lua_objlen(L,2));
		float height=(float)lua_tonumber(L,3);

		ork::Font* self=Luna< ork::Object >::checkSubType< ork::Font >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec2f ork::Font::getSize(const std::string &, float) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec2f stack_lret = self->getSize(line, height);
		ork::vec2f* lret = new ork::vec2f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec2f >::push(L,lret,true);

		return 1;
	}

	// ork::vec2f ork::Font::addLine(const ork::vec4f & viewport, float xs, float ys, const std::string & line, float height, int color, ork::ptr< ork::Mesh< ork::Font::Vertex, unsigned int > > textMesh)
	static int _bind_addLine(lua_State *L) {
		if (!_lg_typecheck_addLine(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec2f ork::Font::addLine(const ork::vec4f & viewport, float xs, float ys, const std::string & line, float height, int color, ork::ptr< ork::Mesh< ork::Font::Vertex, unsigned int > > textMesh) function, expected prototype:\nork::vec2f ork::Font::addLine(const ork::vec4f & viewport, float xs, float ys, const std::string & line, float height, int color, ork::ptr< ork::Mesh< ork::Font::Vertex, unsigned int > > textMesh)\nClass arguments details:\narg 1 ID = 81304302\narg 7 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec4f* viewport_ptr=(Luna< ork::vec4f >::check(L,2));
		if( !viewport_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg viewport in ork::Font::addLine function");
		}
		const ork::vec4f & viewport=*viewport_ptr;
		float xs=(float)lua_tonumber(L,3);
		float ys=(float)lua_tonumber(L,4);
		std::string line(lua_tostring(L,5),lua_objlen(L,5));
		float height=(float)lua_tonumber(L,6);
		int color=(int)lua_tointeger(L,7);
		ork::ptr< ork::Mesh< ork::Font::Vertex, unsigned int > > textMesh = Luna< ork::Object >::checkSubType< ork::Mesh< ork::Font::Vertex, unsigned int > >(L,8);

		ork::Font* self=Luna< ork::Object >::checkSubType< ork::Font >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec2f ork::Font::addLine(const ork::vec4f &, float, float, const std::string &, float, int, ork::ptr< ork::Mesh< ork::Font::Vertex, unsigned int > >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec2f stack_lret = self->addLine(viewport, xs, ys, line, height, color, textMesh);
		ork::vec2f* lret = new ork::vec2f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec2f >::push(L,lret,true);

		return 1;
	}

	// ork::vec2f ork::Font::addCenteredLine(const ork::vec4f & viewport, float xs, float ys, const std::string & line, float height, int color, ork::ptr< ork::Mesh< ork::Font::Vertex, unsigned int > > textMesh)
	static int _bind_addCenteredLine(lua_State *L) {
		if (!_lg_typecheck_addCenteredLine(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec2f ork::Font::addCenteredLine(const ork::vec4f & viewport, float xs, float ys, const std::string & line, float height, int color, ork::ptr< ork::Mesh< ork::Font::Vertex, unsigned int > > textMesh) function, expected prototype:\nork::vec2f ork::Font::addCenteredLine(const ork::vec4f & viewport, float xs, float ys, const std::string & line, float height, int color, ork::ptr< ork::Mesh< ork::Font::Vertex, unsigned int > > textMesh)\nClass arguments details:\narg 1 ID = 81304302\narg 7 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec4f* viewport_ptr=(Luna< ork::vec4f >::check(L,2));
		if( !viewport_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg viewport in ork::Font::addCenteredLine function");
		}
		const ork::vec4f & viewport=*viewport_ptr;
		float xs=(float)lua_tonumber(L,3);
		float ys=(float)lua_tonumber(L,4);
		std::string line(lua_tostring(L,5),lua_objlen(L,5));
		float height=(float)lua_tonumber(L,6);
		int color=(int)lua_tointeger(L,7);
		ork::ptr< ork::Mesh< ork::Font::Vertex, unsigned int > > textMesh = Luna< ork::Object >::checkSubType< ork::Mesh< ork::Font::Vertex, unsigned int > >(L,8);

		ork::Font* self=Luna< ork::Object >::checkSubType< ork::Font >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec2f ork::Font::addCenteredLine(const ork::vec4f &, float, float, const std::string &, float, int, ork::ptr< ork::Mesh< ork::Font::Vertex, unsigned int > >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec2f stack_lret = self->addCenteredLine(viewport, xs, ys, line, height, color, textMesh);
		ork::vec2f* lret = new ork::vec2f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec2f >::push(L,lret,true);

		return 1;
	}

	// const char * ork::Font::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * ork::Font::base_toString() function, expected prototype:\nconst char * ork::Font::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Font* self=Luna< ork::Object >::checkSubType< ork::Font >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * ork::Font::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Font::toString();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

ork::Font* LunaTraits< ork::Font >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ork_Font::_bind_ctor(L);
}

void LunaTraits< ork::Font >::_bind_dtor(ork::Font* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< ork::Font >::className[] = "Font";
const char LunaTraits< ork::Font >::fullName[] = "ork::Font";
const char LunaTraits< ork::Font >::moduleName[] = "ork";
const char* LunaTraits< ork::Font >::parents[] = {"ork.Object", 0};
const int LunaTraits< ork::Font >::hash = 17331797;
const int LunaTraits< ork::Font >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< ork::Font >::methods[] = {
	{"getImage", &luna_wrapper_ork_Font::_bind_getImage},
	{"getTileWidth", &luna_wrapper_ork_Font::_bind_getTileWidth},
	{"getTileHeight", &luna_wrapper_ork_Font::_bind_getTileHeight},
	{"getTileAspectRatio", &luna_wrapper_ork_Font::_bind_getTileAspectRatio},
	{"getCharWidth", &luna_wrapper_ork_Font::_bind_getCharWidth},
	{"getSize", &luna_wrapper_ork_Font::_bind_getSize},
	{"addLine", &luna_wrapper_ork_Font::_bind_addLine},
	{"addCenteredLine", &luna_wrapper_ork_Font::_bind_addCenteredLine},
	{"base_toString", &luna_wrapper_ork_Font::_bind_base_toString},
	{"fromVoid", &luna_wrapper_ork_Font::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_Font::_bind_asVoid},
	{"getTable", &luna_wrapper_ork_Font::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< ork::Font >::converters[] = {
	{"ork::Object", &luna_wrapper_ork_Font::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< ork::Font >::enumValues[] = {
	{0,0}
};


