#include <plug_common.h>

class luna_wrapper_osg_Image_DataIterator {
public:
	typedef Luna< osg::Image::DataIterator > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,9354401) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::Image::DataIterator*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::Image::DataIterator* rhs =(Luna< osg::Image::DataIterator >::check(L,2));
		osg::Image::DataIterator* self=(Luna< osg::Image::DataIterator >::check(L,1));
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

		osg::Image::DataIterator* self= (osg::Image::DataIterator*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::Image::DataIterator >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,9354401) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osg::Image::DataIterator >::check(L,1));
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

		osg::Image::DataIterator* self=(Luna< osg::Image::DataIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::Image::DataIterator");
		
		return luna_dynamicCast(L,converters,"osg::Image::DataIterator",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Image >(L,1)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,9354401) ) return false;
		if( (!(Luna< osg::Image::DataIterator >::check(L,1))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_valid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_data(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_size(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck_op_inc(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Constructor binds:
	// osg::Image::DataIterator::DataIterator(const osg::Image * image)
	static osg::Image::DataIterator* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Image::DataIterator::DataIterator(const osg::Image * image) function, expected prototype:\nosg::Image::DataIterator::DataIterator(const osg::Image * image)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Image* image=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,1));

		return new osg::Image::DataIterator(image);
	}

	// osg::Image::DataIterator::DataIterator(const osg::Image::DataIterator & ri)
	static osg::Image::DataIterator* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Image::DataIterator::DataIterator(const osg::Image::DataIterator & ri) function, expected prototype:\nosg::Image::DataIterator::DataIterator(const osg::Image::DataIterator & ri)\nClass arguments details:\narg 1 ID = 9354401\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Image::DataIterator* ri_ptr=(Luna< osg::Image::DataIterator >::check(L,1));
		if( !ri_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ri in osg::Image::DataIterator::DataIterator function");
		}
		const osg::Image::DataIterator & ri=*ri_ptr;

		return new osg::Image::DataIterator(ri);
	}

	// Overload binder for osg::Image::DataIterator::DataIterator
	static osg::Image::DataIterator* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function DataIterator, cannot match any of the overloads for function DataIterator:\n  DataIterator(const osg::Image *)\n  DataIterator(const osg::Image::DataIterator &)\n");
		return NULL;
	}


	// Function binds:
	// bool osg::Image::DataIterator::valid() const
	static int _bind_valid(lua_State *L) {
		if (!_lg_typecheck_valid(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Image::DataIterator::valid() const function, expected prototype:\nbool osg::Image::DataIterator::valid() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Image::DataIterator* self=(Luna< osg::Image::DataIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Image::DataIterator::valid() const. Got : '%s'\n%s",typeid(Luna< osg::Image::DataIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->valid();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const unsigned char * osg::Image::DataIterator::data() const
	static int _bind_data(lua_State *L) {
		if (!_lg_typecheck_data(L)) {
			luaL_error(L, "luna typecheck failed in const unsigned char * osg::Image::DataIterator::data() const function, expected prototype:\nconst unsigned char * osg::Image::DataIterator::data() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Image::DataIterator* self=(Luna< osg::Image::DataIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const unsigned char * osg::Image::DataIterator::data() const. Got : '%s'\n%s",typeid(Luna< osg::Image::DataIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const unsigned char * lret = self->data();
		luaL_error(L,"Trying to convert pointer on unsigned char lret to lua. This usage should be clarifierd.");

		return 1;
	}

	// unsigned int osg::Image::DataIterator::size() const
	static int _bind_size(lua_State *L) {
		if (!_lg_typecheck_size(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Image::DataIterator::size() const function, expected prototype:\nunsigned int osg::Image::DataIterator::size() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Image::DataIterator* self=(Luna< osg::Image::DataIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Image::DataIterator::size() const. Got : '%s'\n%s",typeid(Luna< osg::Image::DataIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->size();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:
	// void osg::Image::DataIterator::operator++()
	static int _bind_op_inc(lua_State *L) {
		if (!_lg_typecheck_op_inc(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Image::DataIterator::operator++() function, expected prototype:\nvoid osg::Image::DataIterator::operator++()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Image::DataIterator* self=(Luna< osg::Image::DataIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Image::DataIterator::operator++(). Got : '%s'\n%s",typeid(Luna< osg::Image::DataIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->operator++();

		return 0;
	}


};

osg::Image::DataIterator* LunaTraits< osg::Image::DataIterator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Image_DataIterator::_bind_ctor(L);
}

void LunaTraits< osg::Image::DataIterator >::_bind_dtor(osg::Image::DataIterator* obj) {
	delete obj;
}

const char LunaTraits< osg::Image::DataIterator >::className[] = "Image_DataIterator";
const char LunaTraits< osg::Image::DataIterator >::fullName[] = "osg::Image::DataIterator";
const char LunaTraits< osg::Image::DataIterator >::moduleName[] = "osg";
const char* LunaTraits< osg::Image::DataIterator >::parents[] = {0};
const int LunaTraits< osg::Image::DataIterator >::hash = 9354401;
const int LunaTraits< osg::Image::DataIterator >::uniqueIDs[] = {9354401,0};

luna_RegType LunaTraits< osg::Image::DataIterator >::methods[] = {
	{"valid", &luna_wrapper_osg_Image_DataIterator::_bind_valid},
	{"data", &luna_wrapper_osg_Image_DataIterator::_bind_data},
	{"size", &luna_wrapper_osg_Image_DataIterator::_bind_size},
	{"op_inc", &luna_wrapper_osg_Image_DataIterator::_bind_op_inc},
	{"dynCast", &luna_wrapper_osg_Image_DataIterator::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_Image_DataIterator::_bind___eq},
	{"fromVoid", &luna_wrapper_osg_Image_DataIterator::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_Image_DataIterator::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Image::DataIterator >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Image::DataIterator >::enumValues[] = {
	{0,0}
};


