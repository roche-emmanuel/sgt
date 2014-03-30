#include <plug_common.h>

class luna_wrapper_osg_ImageSequence_ImageData {
public:
	typedef Luna< osg::ImageSequence::ImageData > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,90366507) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::ImageSequence::ImageData*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::ImageSequence::ImageData* rhs =(Luna< osg::ImageSequence::ImageData >::check(L,2));
		osg::ImageSequence::ImageData* self=(Luna< osg::ImageSequence::ImageData >::check(L,1));
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

		osg::ImageSequence::ImageData* self= (osg::ImageSequence::ImageData*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::ImageSequence::ImageData >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,90366507) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osg::ImageSequence::ImageData >::check(L,1));
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

		osg::ImageSequence::ImageData* self=(Luna< osg::ImageSequence::ImageData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::ImageSequence::ImageData");
		
		return luna_dynamicCast(L,converters,"osg::ImageSequence::ImageData",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,90366507) ) return false;
		if( (!(Luna< osg::ImageSequence::ImageData >::check(L,1))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getFilename(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getImage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getImageRequest(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFilename(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setImage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,15557275) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setImageRequest(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,84922662) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck_op_assign(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,90366507) ) return false;
		return true;
	}


	// Constructor binds:
	// osg::ImageSequence::ImageData::ImageData()
	static osg::ImageSequence::ImageData* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::ImageSequence::ImageData::ImageData() function, expected prototype:\nosg::ImageSequence::ImageData::ImageData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::ImageSequence::ImageData();
	}

	// osg::ImageSequence::ImageData::ImageData(const osg::ImageSequence::ImageData & id)
	static osg::ImageSequence::ImageData* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::ImageSequence::ImageData::ImageData(const osg::ImageSequence::ImageData & id) function, expected prototype:\nosg::ImageSequence::ImageData::ImageData(const osg::ImageSequence::ImageData & id)\nClass arguments details:\narg 1 ID = 90366507\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::ImageSequence::ImageData* id_ptr=(Luna< osg::ImageSequence::ImageData >::check(L,1));
		if( !id_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg id in osg::ImageSequence::ImageData::ImageData function");
		}
		const osg::ImageSequence::ImageData & id=*id_ptr;

		return new osg::ImageSequence::ImageData(id);
	}

	// Overload binder for osg::ImageSequence::ImageData::ImageData
	static osg::ImageSequence::ImageData* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ImageData, cannot match any of the overloads for function ImageData:\n  ImageData()\n  ImageData(const osg::ImageSequence::ImageData &)\n");
		return NULL;
	}


	// Function binds:
	// std::string osg::ImageSequence::ImageData::_filename()
	static int _bind_getFilename(lua_State *L) {
		if (!_lg_typecheck_getFilename(L)) {
			luaL_error(L, "luna typecheck failed in std::string osg::ImageSequence::ImageData::_filename() function, expected prototype:\nstd::string osg::ImageSequence::ImageData::_filename()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageSequence::ImageData* self=(Luna< osg::ImageSequence::ImageData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call std::string osg::ImageSequence::ImageData::_filename(). Got : '%s'\n%s",typeid(Luna< osg::ImageSequence::ImageData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		std::string lret = self->_filename;
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// osg::ref_ptr< osg::Image > osg::ImageSequence::ImageData::_image()
	static int _bind_getImage(lua_State *L) {
		if (!_lg_typecheck_getImage(L)) {
			luaL_error(L, "luna typecheck failed in osg::ref_ptr< osg::Image > osg::ImageSequence::ImageData::_image() function, expected prototype:\nosg::ref_ptr< osg::Image > osg::ImageSequence::ImageData::_image()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageSequence::ImageData* self=(Luna< osg::ImageSequence::ImageData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::ref_ptr< osg::Image > osg::ImageSequence::ImageData::_image(). Got : '%s'\n%s",typeid(Luna< osg::ImageSequence::ImageData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::ref_ptr< osg::Image > lret = self->_image;
		Luna< osg::Image >::push(L,lret.get(),false);

		return 1;
	}

	// osg::ref_ptr< osg::Referenced > osg::ImageSequence::ImageData::_imageRequest()
	static int _bind_getImageRequest(lua_State *L) {
		if (!_lg_typecheck_getImageRequest(L)) {
			luaL_error(L, "luna typecheck failed in osg::ref_ptr< osg::Referenced > osg::ImageSequence::ImageData::_imageRequest() function, expected prototype:\nosg::ref_ptr< osg::Referenced > osg::ImageSequence::ImageData::_imageRequest()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageSequence::ImageData* self=(Luna< osg::ImageSequence::ImageData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::ref_ptr< osg::Referenced > osg::ImageSequence::ImageData::_imageRequest(). Got : '%s'\n%s",typeid(Luna< osg::ImageSequence::ImageData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::ref_ptr< osg::Referenced > lret = self->_imageRequest;
		Luna< osg::Referenced >::push(L,lret.get(),false);

		return 1;
	}

	// void osg::ImageSequence::ImageData::_filename(std::string value)
	static int _bind_setFilename(lua_State *L) {
		if (!_lg_typecheck_setFilename(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ImageSequence::ImageData::_filename(std::string value) function, expected prototype:\nvoid osg::ImageSequence::ImageData::_filename(std::string value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string value(lua_tostring(L,2),lua_objlen(L,2));

		osg::ImageSequence::ImageData* self=(Luna< osg::ImageSequence::ImageData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ImageSequence::ImageData::_filename(std::string). Got : '%s'\n%s",typeid(Luna< osg::ImageSequence::ImageData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_filename = value;

		return 0;
	}

	// void osg::ImageSequence::ImageData::_image(osg::ref_ptr< osg::Image > value)
	static int _bind_setImage(lua_State *L) {
		if (!_lg_typecheck_setImage(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ImageSequence::ImageData::_image(osg::ref_ptr< osg::Image > value) function, expected prototype:\nvoid osg::ImageSequence::ImageData::_image(osg::ref_ptr< osg::Image > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ref_ptr< osg::Image > value = dynamic_cast< osg::Image* >(Luna< osg::Referenced >::check(L,2));

		osg::ImageSequence::ImageData* self=(Luna< osg::ImageSequence::ImageData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ImageSequence::ImageData::_image(osg::ref_ptr< osg::Image >). Got : '%s'\n%s",typeid(Luna< osg::ImageSequence::ImageData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_image = value;

		return 0;
	}

	// void osg::ImageSequence::ImageData::_imageRequest(osg::ref_ptr< osg::Referenced > value)
	static int _bind_setImageRequest(lua_State *L) {
		if (!_lg_typecheck_setImageRequest(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ImageSequence::ImageData::_imageRequest(osg::ref_ptr< osg::Referenced > value) function, expected prototype:\nvoid osg::ImageSequence::ImageData::_imageRequest(osg::ref_ptr< osg::Referenced > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ref_ptr< osg::Referenced > value = dynamic_cast< osg::Referenced* >(Luna< osg::Referenced >::check(L,2));

		osg::ImageSequence::ImageData* self=(Luna< osg::ImageSequence::ImageData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ImageSequence::ImageData::_imageRequest(osg::ref_ptr< osg::Referenced >). Got : '%s'\n%s",typeid(Luna< osg::ImageSequence::ImageData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_imageRequest = value;

		return 0;
	}


	// Operator binds:
	// osg::ImageSequence::ImageData & osg::ImageSequence::ImageData::operator=(const osg::ImageSequence::ImageData & id)
	static int _bind_op_assign(lua_State *L) {
		if (!_lg_typecheck_op_assign(L)) {
			luaL_error(L, "luna typecheck failed in osg::ImageSequence::ImageData & osg::ImageSequence::ImageData::operator=(const osg::ImageSequence::ImageData & id) function, expected prototype:\nosg::ImageSequence::ImageData & osg::ImageSequence::ImageData::operator=(const osg::ImageSequence::ImageData & id)\nClass arguments details:\narg 1 ID = 90366507\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::ImageSequence::ImageData* id_ptr=(Luna< osg::ImageSequence::ImageData >::check(L,2));
		if( !id_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg id in osg::ImageSequence::ImageData::operator= function");
		}
		const osg::ImageSequence::ImageData & id=*id_ptr;

		osg::ImageSequence::ImageData* self=(Luna< osg::ImageSequence::ImageData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::ImageSequence::ImageData & osg::ImageSequence::ImageData::operator=(const osg::ImageSequence::ImageData &). Got : '%s'\n%s",typeid(Luna< osg::ImageSequence::ImageData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::ImageSequence::ImageData* lret = &self->operator=(id);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::ImageSequence::ImageData >::push(L,lret,false);

		return 1;
	}


};

osg::ImageSequence::ImageData* LunaTraits< osg::ImageSequence::ImageData >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_ImageSequence_ImageData::_bind_ctor(L);
}

void LunaTraits< osg::ImageSequence::ImageData >::_bind_dtor(osg::ImageSequence::ImageData* obj) {
	delete obj;
}

const char LunaTraits< osg::ImageSequence::ImageData >::className[] = "ImageSequence_ImageData";
const char LunaTraits< osg::ImageSequence::ImageData >::fullName[] = "osg::ImageSequence::ImageData";
const char LunaTraits< osg::ImageSequence::ImageData >::moduleName[] = "osg";
const char* LunaTraits< osg::ImageSequence::ImageData >::parents[] = {0};
const int LunaTraits< osg::ImageSequence::ImageData >::hash = 90366507;
const int LunaTraits< osg::ImageSequence::ImageData >::uniqueIDs[] = {90366507,0};

luna_RegType LunaTraits< osg::ImageSequence::ImageData >::methods[] = {
	{"getFilename", &luna_wrapper_osg_ImageSequence_ImageData::_bind_getFilename},
	{"getImage", &luna_wrapper_osg_ImageSequence_ImageData::_bind_getImage},
	{"getImageRequest", &luna_wrapper_osg_ImageSequence_ImageData::_bind_getImageRequest},
	{"setFilename", &luna_wrapper_osg_ImageSequence_ImageData::_bind_setFilename},
	{"setImage", &luna_wrapper_osg_ImageSequence_ImageData::_bind_setImage},
	{"setImageRequest", &luna_wrapper_osg_ImageSequence_ImageData::_bind_setImageRequest},
	{"op_assign", &luna_wrapper_osg_ImageSequence_ImageData::_bind_op_assign},
	{"dynCast", &luna_wrapper_osg_ImageSequence_ImageData::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_ImageSequence_ImageData::_bind___eq},
	{"fromVoid", &luna_wrapper_osg_ImageSequence_ImageData::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_ImageSequence_ImageData::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ImageSequence::ImageData >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ImageSequence::ImageData >::enumValues[] = {
	{0,0}
};


