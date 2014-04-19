#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_ork_Mesh_ork_vec2f_unsigned_int {
public:
	typedef Luna< ork::Mesh< ork::vec2f, unsigned int > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1443305) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ork::Mesh< ork::vec2f, unsigned int >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::Mesh< ork::vec2f, unsigned int >* rhs =(Luna< ork::Mesh< ork::vec2f, unsigned int > >::check(L,2));
		ork::Mesh< ork::vec2f, unsigned int >* self=(Luna< ork::Mesh< ork::vec2f, unsigned int > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
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

		ork::Mesh< ork::vec2f, unsigned int >* self=(Luna< ork::Mesh< ork::vec2f, unsigned int > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ork::Mesh< ork::vec2f, unsigned int >");
		
		return luna_dynamicCast(L,converters,"ork::Mesh< ork::vec2f, unsigned int >",name);
	}

	inline static bool _lg_typecheck_addVertex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,1443305)) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,81304240)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addAttributeType(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,1443305)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( lua_isboolean(L,5)==0 ) return false;
		return true;
	}


	// void ork::Mesh< ork::vec2f, unsigned int > *::mesh_vec2f_uint_addVertex(ork::Mesh< ork::vec2f, unsigned int > * mesh, ork::vec2f * vec)
	static int _bind_addVertex(lua_State *L) {
		if (!_lg_typecheck_addVertex(L)) {
			luaL_error(L, "luna typecheck failed in void ork::Mesh< ork::vec2f, unsigned int > *::mesh_vec2f_uint_addVertex(ork::Mesh< ork::vec2f, unsigned int > * mesh, ork::vec2f * vec) function, expected prototype:\nvoid ork::Mesh< ork::vec2f, unsigned int > *::mesh_vec2f_uint_addVertex(ork::Mesh< ork::vec2f, unsigned int > * mesh, ork::vec2f * vec)\nClass arguments details:\narg 1 ID = [unknown]\narg 2 ID = 81304240\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::Mesh< ork::vec2f, unsigned int >* mesh=(Luna< ork::Mesh< ork::vec2f, unsigned int > >::check(L,1));
		ork::vec2f* vec=(Luna< ork::vec2f >::check(L,2));

		mesh_vec2f_uint_addVertex(mesh, vec);

		return 0;
	}

	// void ork::Mesh< ork::vec2f, unsigned int > *::mesh_vec2f_uint_addAttributeType(ork::Mesh< ork::vec2f, unsigned int > * mesh, int id, int size, ork::AttributeType type, bool norm)
	static int _bind_addAttributeType(lua_State *L) {
		if (!_lg_typecheck_addAttributeType(L)) {
			luaL_error(L, "luna typecheck failed in void ork::Mesh< ork::vec2f, unsigned int > *::mesh_vec2f_uint_addAttributeType(ork::Mesh< ork::vec2f, unsigned int > * mesh, int id, int size, ork::AttributeType type, bool norm) function, expected prototype:\nvoid ork::Mesh< ork::vec2f, unsigned int > *::mesh_vec2f_uint_addAttributeType(ork::Mesh< ork::vec2f, unsigned int > * mesh, int id, int size, ork::AttributeType type, bool norm)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::Mesh< ork::vec2f, unsigned int >* mesh=(Luna< ork::Mesh< ork::vec2f, unsigned int > >::check(L,1));
		int id=(int)lua_tointeger(L,2);
		int size=(int)lua_tointeger(L,3);
		ork::AttributeType type=(ork::AttributeType)lua_tointeger(L,4);
		bool norm=(bool)(lua_toboolean(L,5)==1);

		mesh_vec2f_uint_addAttributeType(mesh, id, size, type, norm);

		return 0;
	}

};

ork::Mesh< ork::vec2f, unsigned int >* LunaTraits< ork::Mesh< ork::vec2f, unsigned int > >::_bind_ctor(lua_State *L) {
	return NULL;
}

void LunaTraits< ork::Mesh< ork::vec2f, unsigned int > >::_bind_dtor(ork::Mesh< ork::vec2f, unsigned int >* obj) {
	delete obj;
}

const char LunaTraits< ork::Mesh< ork::vec2f, unsigned int > >::className[] = "ork_Mesh_ork_vec2f_unsigned_int";
const char LunaTraits< ork::Mesh< ork::vec2f, unsigned int > >::fullName[] = "ork::Mesh< ork::vec2f, unsigned int >";
const char LunaTraits< ork::Mesh< ork::vec2f, unsigned int > >::moduleName[] = "land";
const char* LunaTraits< ork::Mesh< ork::vec2f, unsigned int > >::parents[] = {0};
const int LunaTraits< ork::Mesh< ork::vec2f, unsigned int > >::hash = 1443305;
const int LunaTraits< ork::Mesh< ork::vec2f, unsigned int > >::uniqueIDs[] = {1443305,0};

luna_RegType LunaTraits< ork::Mesh< ork::vec2f, unsigned int > >::methods[] = {
	{"dynCast", &luna_wrapper_ork_Mesh_ork_vec2f_unsigned_int::_bind_dynCast},
	{"__eq", &luna_wrapper_ork_Mesh_ork_vec2f_unsigned_int::_bind___eq},
	
	{"addVertex", &luna_wrapper_ork_Mesh_ork_vec2f_unsigned_int::_bind_addVertex},
	{"addAttributeType", &luna_wrapper_ork_Mesh_ork_vec2f_unsigned_int::_bind_addAttributeType},
	{0,0}
};

luna_ConverterType LunaTraits< ork::Mesh< ork::vec2f, unsigned int > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ork::Mesh< ork::vec2f, unsigned int > >::enumValues[] = {
	{0,0}
};


