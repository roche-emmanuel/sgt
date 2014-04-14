#include <plug_common.h>

class luna_wrapper_ork_Window_Parameters {
public:
	typedef Luna< ork::Window::Parameters > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,5752345) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ork::Window::Parameters*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::Window::Parameters* rhs =(Luna< ork::Window::Parameters >::check(L,2));
		ork::Window::Parameters* self=(Luna< ork::Window::Parameters >::check(L,1));
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

		ork::Window::Parameters* self= (ork::Window::Parameters*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::Window::Parameters >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,5752345) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< ork::Window::Parameters >::check(L,1));
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

		ork::Window::Parameters* self=(Luna< ork::Window::Parameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ork::Window::Parameters");
		
		return luna_dynamicCast(L,converters,"ork::Window::Parameters",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_name_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_name_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_width(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_height(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_version_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_version_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_debug(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_size(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_alpha(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_depth(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_stencil(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_multiSample(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// ork::Window::Parameters::Parameters()
	static ork::Window::Parameters* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in ork::Window::Parameters::Parameters() function, expected prototype:\nork::Window::Parameters::Parameters()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new ork::Window::Parameters();
	}


	// Function binds:
	// std::string ork::Window::Parameters::name() const
	static int _bind_name_overload_1(lua_State *L) {
		if (!_lg_typecheck_name_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in std::string ork::Window::Parameters::name() const function, expected prototype:\nstd::string ork::Window::Parameters::name() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Window::Parameters* self=(Luna< ork::Window::Parameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call std::string ork::Window::Parameters::name() const. Got : '%s'\n%s",typeid(Luna< ork::Window::Parameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		std::string lret = self->name();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// ork::Window::Parameters & ork::Window::Parameters::name(const std::string name)
	static int _bind_name_overload_2(lua_State *L) {
		if (!_lg_typecheck_name_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::Window::Parameters & ork::Window::Parameters::name(const std::string name) function, expected prototype:\nork::Window::Parameters & ork::Window::Parameters::name(const std::string name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::Window::Parameters* self=(Luna< ork::Window::Parameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::Window::Parameters & ork::Window::Parameters::name(const std::string). Got : '%s'\n%s",typeid(Luna< ork::Window::Parameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::Window::Parameters* lret = &self->name(name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::Window::Parameters >::push(L,lret,false);

		return 1;
	}

	// Overload binder for ork::Window::Parameters::name
	static int _bind_name(lua_State *L) {
		if (_lg_typecheck_name_overload_1(L)) return _bind_name_overload_1(L);
		if (_lg_typecheck_name_overload_2(L)) return _bind_name_overload_2(L);

		luaL_error(L, "error in function name, cannot match any of the overloads for function name:\n  name()\n  name(const std::string)\n");
		return 0;
	}

	// int ork::Window::Parameters::width() const
	static int _bind_width(lua_State *L) {
		if (!_lg_typecheck_width(L)) {
			luaL_error(L, "luna typecheck failed in int ork::Window::Parameters::width() const function, expected prototype:\nint ork::Window::Parameters::width() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Window::Parameters* self=(Luna< ork::Window::Parameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int ork::Window::Parameters::width() const. Got : '%s'\n%s",typeid(Luna< ork::Window::Parameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->width();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int ork::Window::Parameters::height() const
	static int _bind_height(lua_State *L) {
		if (!_lg_typecheck_height(L)) {
			luaL_error(L, "luna typecheck failed in int ork::Window::Parameters::height() const function, expected prototype:\nint ork::Window::Parameters::height() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Window::Parameters* self=(Luna< ork::Window::Parameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int ork::Window::Parameters::height() const. Got : '%s'\n%s",typeid(Luna< ork::Window::Parameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->height();
		lua_pushnumber(L,lret);

		return 1;
	}

	// ork::vec2< int > ork::Window::Parameters::version() const
	static int _bind_version_overload_1(lua_State *L) {
		if (!_lg_typecheck_version_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec2< int > ork::Window::Parameters::version() const function, expected prototype:\nork::vec2< int > ork::Window::Parameters::version() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Window::Parameters* self=(Luna< ork::Window::Parameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec2< int > ork::Window::Parameters::version() const. Got : '%s'\n%s",typeid(Luna< ork::Window::Parameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec2< int > stack_lret = self->version();
		ork::vec2< int >* lret = new ork::vec2< int >(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec2< int > >::push(L,lret,true);

		return 1;
	}

	// ork::Window::Parameters & ork::Window::Parameters::version(int major, int minor, bool debug = false)
	static int _bind_version_overload_2(lua_State *L) {
		if (!_lg_typecheck_version_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::Window::Parameters & ork::Window::Parameters::version(int major, int minor, bool debug = false) function, expected prototype:\nork::Window::Parameters & ork::Window::Parameters::version(int major, int minor, bool debug = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int major=(int)lua_tointeger(L,2);
		int minor=(int)lua_tointeger(L,3);
		bool debug=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)false;

		ork::Window::Parameters* self=(Luna< ork::Window::Parameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::Window::Parameters & ork::Window::Parameters::version(int, int, bool). Got : '%s'\n%s",typeid(Luna< ork::Window::Parameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::Window::Parameters* lret = &self->version(major, minor, debug);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::Window::Parameters >::push(L,lret,false);

		return 1;
	}

	// Overload binder for ork::Window::Parameters::version
	static int _bind_version(lua_State *L) {
		if (_lg_typecheck_version_overload_1(L)) return _bind_version_overload_1(L);
		if (_lg_typecheck_version_overload_2(L)) return _bind_version_overload_2(L);

		luaL_error(L, "error in function version, cannot match any of the overloads for function version:\n  version()\n  version(int, int, bool)\n");
		return 0;
	}

	// bool ork::Window::Parameters::debug() const
	static int _bind_debug(lua_State *L) {
		if (!_lg_typecheck_debug(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::Window::Parameters::debug() const function, expected prototype:\nbool ork::Window::Parameters::debug() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Window::Parameters* self=(Luna< ork::Window::Parameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::Window::Parameters::debug() const. Got : '%s'\n%s",typeid(Luna< ork::Window::Parameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->debug();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// ork::Window::Parameters & ork::Window::Parameters::size(int width, int height)
	static int _bind_size(lua_State *L) {
		if (!_lg_typecheck_size(L)) {
			luaL_error(L, "luna typecheck failed in ork::Window::Parameters & ork::Window::Parameters::size(int width, int height) function, expected prototype:\nork::Window::Parameters & ork::Window::Parameters::size(int width, int height)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int width=(int)lua_tointeger(L,2);
		int height=(int)lua_tointeger(L,3);

		ork::Window::Parameters* self=(Luna< ork::Window::Parameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::Window::Parameters & ork::Window::Parameters::size(int, int). Got : '%s'\n%s",typeid(Luna< ork::Window::Parameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::Window::Parameters* lret = &self->size(width, height);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::Window::Parameters >::push(L,lret,false);

		return 1;
	}

	// ork::Window::Parameters & ork::Window::Parameters::alpha(bool alpha = true)
	static int _bind_alpha(lua_State *L) {
		if (!_lg_typecheck_alpha(L)) {
			luaL_error(L, "luna typecheck failed in ork::Window::Parameters & ork::Window::Parameters::alpha(bool alpha = true) function, expected prototype:\nork::Window::Parameters & ork::Window::Parameters::alpha(bool alpha = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool alpha=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		ork::Window::Parameters* self=(Luna< ork::Window::Parameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::Window::Parameters & ork::Window::Parameters::alpha(bool). Got : '%s'\n%s",typeid(Luna< ork::Window::Parameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::Window::Parameters* lret = &self->alpha(alpha);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::Window::Parameters >::push(L,lret,false);

		return 1;
	}

	// ork::Window::Parameters & ork::Window::Parameters::depth(bool depth = true)
	static int _bind_depth(lua_State *L) {
		if (!_lg_typecheck_depth(L)) {
			luaL_error(L, "luna typecheck failed in ork::Window::Parameters & ork::Window::Parameters::depth(bool depth = true) function, expected prototype:\nork::Window::Parameters & ork::Window::Parameters::depth(bool depth = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool depth=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		ork::Window::Parameters* self=(Luna< ork::Window::Parameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::Window::Parameters & ork::Window::Parameters::depth(bool). Got : '%s'\n%s",typeid(Luna< ork::Window::Parameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::Window::Parameters* lret = &self->depth(depth);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::Window::Parameters >::push(L,lret,false);

		return 1;
	}

	// ork::Window::Parameters & ork::Window::Parameters::stencil(bool stencil = true)
	static int _bind_stencil(lua_State *L) {
		if (!_lg_typecheck_stencil(L)) {
			luaL_error(L, "luna typecheck failed in ork::Window::Parameters & ork::Window::Parameters::stencil(bool stencil = true) function, expected prototype:\nork::Window::Parameters & ork::Window::Parameters::stencil(bool stencil = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool stencil=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		ork::Window::Parameters* self=(Luna< ork::Window::Parameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::Window::Parameters & ork::Window::Parameters::stencil(bool). Got : '%s'\n%s",typeid(Luna< ork::Window::Parameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::Window::Parameters* lret = &self->stencil(stencil);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::Window::Parameters >::push(L,lret,false);

		return 1;
	}

	// ork::Window::Parameters & ork::Window::Parameters::multiSample(bool multiSample = true)
	static int _bind_multiSample(lua_State *L) {
		if (!_lg_typecheck_multiSample(L)) {
			luaL_error(L, "luna typecheck failed in ork::Window::Parameters & ork::Window::Parameters::multiSample(bool multiSample = true) function, expected prototype:\nork::Window::Parameters & ork::Window::Parameters::multiSample(bool multiSample = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool multiSample=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		ork::Window::Parameters* self=(Luna< ork::Window::Parameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::Window::Parameters & ork::Window::Parameters::multiSample(bool). Got : '%s'\n%s",typeid(Luna< ork::Window::Parameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::Window::Parameters* lret = &self->multiSample(multiSample);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::Window::Parameters >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

ork::Window::Parameters* LunaTraits< ork::Window::Parameters >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ork_Window_Parameters::_bind_ctor(L);
}

void LunaTraits< ork::Window::Parameters >::_bind_dtor(ork::Window::Parameters* obj) {
	delete obj;
}

const char LunaTraits< ork::Window::Parameters >::className[] = "Window_Parameters";
const char LunaTraits< ork::Window::Parameters >::fullName[] = "ork::Window::Parameters";
const char LunaTraits< ork::Window::Parameters >::moduleName[] = "ork";
const char* LunaTraits< ork::Window::Parameters >::parents[] = {0};
const int LunaTraits< ork::Window::Parameters >::hash = 5752345;
const int LunaTraits< ork::Window::Parameters >::uniqueIDs[] = {5752345,0};

luna_RegType LunaTraits< ork::Window::Parameters >::methods[] = {
	{"name", &luna_wrapper_ork_Window_Parameters::_bind_name},
	{"width", &luna_wrapper_ork_Window_Parameters::_bind_width},
	{"height", &luna_wrapper_ork_Window_Parameters::_bind_height},
	{"version", &luna_wrapper_ork_Window_Parameters::_bind_version},
	{"debug", &luna_wrapper_ork_Window_Parameters::_bind_debug},
	{"size", &luna_wrapper_ork_Window_Parameters::_bind_size},
	{"alpha", &luna_wrapper_ork_Window_Parameters::_bind_alpha},
	{"depth", &luna_wrapper_ork_Window_Parameters::_bind_depth},
	{"stencil", &luna_wrapper_ork_Window_Parameters::_bind_stencil},
	{"multiSample", &luna_wrapper_ork_Window_Parameters::_bind_multiSample},
	{"dynCast", &luna_wrapper_ork_Window_Parameters::_bind_dynCast},
	{"__eq", &luna_wrapper_ork_Window_Parameters::_bind___eq},
	{"fromVoid", &luna_wrapper_ork_Window_Parameters::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_Window_Parameters::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< ork::Window::Parameters >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ork::Window::Parameters >::enumValues[] = {
	{0,0}
};


