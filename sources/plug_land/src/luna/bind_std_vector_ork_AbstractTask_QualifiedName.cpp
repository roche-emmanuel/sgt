#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_vector_ork_AbstractTask_QualifiedName {
public:
	typedef Luna< std::vector< ork::AbstractTask::QualifiedName > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,32653325) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::vector< ork::AbstractTask::QualifiedName >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::vector< ork::AbstractTask::QualifiedName >* rhs =(Luna< std::vector< ork::AbstractTask::QualifiedName > >::check(L,2));
		std::vector< ork::AbstractTask::QualifiedName >* self=(Luna< std::vector< ork::AbstractTask::QualifiedName > >::check(L,1));
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

		std::vector< ork::AbstractTask::QualifiedName >* self=(Luna< std::vector< ork::AbstractTask::QualifiedName > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::vector< ork::AbstractTask::QualifiedName >");
		
		return luna_dynamicCast(L,converters,"std::vector< ork::AbstractTask::QualifiedName >",name);
	}

};

std::vector< ork::AbstractTask::QualifiedName >* LunaTraits< std::vector< ork::AbstractTask::QualifiedName > >::_bind_ctor(lua_State *L) {
	return new std::vector< ork::AbstractTask::QualifiedName >();
}

void LunaTraits< std::vector< ork::AbstractTask::QualifiedName > >::_bind_dtor(std::vector< ork::AbstractTask::QualifiedName >* obj) {
	delete obj;
}

const char LunaTraits< std::vector< ork::AbstractTask::QualifiedName > >::className[] = "std_vector_ork_AbstractTask_QualifiedName";
const char LunaTraits< std::vector< ork::AbstractTask::QualifiedName > >::fullName[] = "std::vector< ork::AbstractTask::QualifiedName >";
const char LunaTraits< std::vector< ork::AbstractTask::QualifiedName > >::moduleName[] = "land";
const char* LunaTraits< std::vector< ork::AbstractTask::QualifiedName > >::parents[] = {0};
const int LunaTraits< std::vector< ork::AbstractTask::QualifiedName > >::hash = 32653325;
const int LunaTraits< std::vector< ork::AbstractTask::QualifiedName > >::uniqueIDs[] = {32653325,0};

luna_RegType LunaTraits< std::vector< ork::AbstractTask::QualifiedName > >::methods[] = {
	{"dynCast", &luna_wrapper_std_vector_ork_AbstractTask_QualifiedName::_bind_dynCast},
	{"__eq", &luna_wrapper_std_vector_ork_AbstractTask_QualifiedName::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::vector< ork::AbstractTask::QualifiedName > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::vector< ork::AbstractTask::QualifiedName > >::enumValues[] = {
	{0,0}
};


