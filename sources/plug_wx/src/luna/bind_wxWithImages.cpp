#include <plug_common.h>

#include <luna/wrappers/wrapper_wxWithImages.h>

class luna_wrapper_wxWithImages {
public:
	typedef Luna< wxWithImages > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxWithImages* self=(Luna< wxWithImages >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<wxWithImages,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,14187710) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxWithImages*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxWithImages* rhs =(Luna< wxWithImages >::check(L,2));
		wxWithImages* self=(Luna< wxWithImages >::check(L,1));
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

		wxWithImages* self= (wxWithImages*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxWithImages >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,14187710) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxWithImages >::check(L,1));
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

		wxWithImages* self=(Luna< wxWithImages >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxWithImages");
		
		return luna_dynamicCast(L,converters,"wxWithImages",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_AssignImageList(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetImageList(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetImageList(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetImageList(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxWithImages::wxWithImages()
	static wxWithImages* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxWithImages::wxWithImages() function, expected prototype:\nwxWithImages::wxWithImages()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxWithImages();
	}

	// wxWithImages::wxWithImages(lua_Table * data)
	static wxWithImages* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxWithImages::wxWithImages(lua_Table * data) function, expected prototype:\nwxWithImages::wxWithImages(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxWithImages(L,NULL);
	}

	// Overload binder for wxWithImages::wxWithImages
	static wxWithImages* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxWithImages, cannot match any of the overloads for function wxWithImages:\n  wxWithImages()\n  wxWithImages(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void wxWithImages::AssignImageList(wxImageList * imageList)
	static int _bind_AssignImageList(lua_State *L) {
		if (!_lg_typecheck_AssignImageList(L)) {
			luaL_error(L, "luna typecheck failed in void wxWithImages::AssignImageList(wxImageList * imageList) function, expected prototype:\nvoid wxWithImages::AssignImageList(wxImageList * imageList)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxImageList* imageList=(Luna< wxObject >::checkSubType< wxImageList >(L,2));

		wxWithImages* self=(Luna< wxWithImages >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWithImages::AssignImageList(wxImageList *). Got : '%s'\n%s",typeid(Luna< wxWithImages >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AssignImageList(imageList);

		return 0;
	}

	// void wxWithImages::SetImageList(wxImageList * imageList)
	static int _bind_SetImageList(lua_State *L) {
		if (!_lg_typecheck_SetImageList(L)) {
			luaL_error(L, "luna typecheck failed in void wxWithImages::SetImageList(wxImageList * imageList) function, expected prototype:\nvoid wxWithImages::SetImageList(wxImageList * imageList)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxImageList* imageList=(Luna< wxObject >::checkSubType< wxImageList >(L,2));

		wxWithImages* self=(Luna< wxWithImages >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWithImages::SetImageList(wxImageList *). Got : '%s'\n%s",typeid(Luna< wxWithImages >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetImageList(imageList);

		return 0;
	}

	// wxImageList * wxWithImages::GetImageList() const
	static int _bind_GetImageList(lua_State *L) {
		if (!_lg_typecheck_GetImageList(L)) {
			luaL_error(L, "luna typecheck failed in wxImageList * wxWithImages::GetImageList() const function, expected prototype:\nwxImageList * wxWithImages::GetImageList() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWithImages* self=(Luna< wxWithImages >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxImageList * wxWithImages::GetImageList() const. Got : '%s'\n%s",typeid(Luna< wxWithImages >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxImageList * lret = self->GetImageList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxImageList >::push(L,lret,false);

		return 1;
	}

	// void wxWithImages::base_SetImageList(wxImageList * imageList)
	static int _bind_base_SetImageList(lua_State *L) {
		if (!_lg_typecheck_base_SetImageList(L)) {
			luaL_error(L, "luna typecheck failed in void wxWithImages::base_SetImageList(wxImageList * imageList) function, expected prototype:\nvoid wxWithImages::base_SetImageList(wxImageList * imageList)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxImageList* imageList=(Luna< wxObject >::checkSubType< wxImageList >(L,2));

		wxWithImages* self=(Luna< wxWithImages >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWithImages::base_SetImageList(wxImageList *). Got : '%s'\n%s",typeid(Luna< wxWithImages >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWithImages::SetImageList(imageList);

		return 0;
	}


	// Operator binds:

};

wxWithImages* LunaTraits< wxWithImages >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxWithImages::_bind_ctor(L);
}

void LunaTraits< wxWithImages >::_bind_dtor(wxWithImages* obj) {
	delete obj;
}

const char LunaTraits< wxWithImages >::className[] = "wxWithImages";
const char LunaTraits< wxWithImages >::fullName[] = "wxWithImages";
const char LunaTraits< wxWithImages >::moduleName[] = "wx";
const char* LunaTraits< wxWithImages >::parents[] = {0};
const int LunaTraits< wxWithImages >::hash = 14187710;
const int LunaTraits< wxWithImages >::uniqueIDs[] = {14187710,0};

luna_RegType LunaTraits< wxWithImages >::methods[] = {
	{"AssignImageList", &luna_wrapper_wxWithImages::_bind_AssignImageList},
	{"SetImageList", &luna_wrapper_wxWithImages::_bind_SetImageList},
	{"GetImageList", &luna_wrapper_wxWithImages::_bind_GetImageList},
	{"base_SetImageList", &luna_wrapper_wxWithImages::_bind_base_SetImageList},
	{"dynCast", &luna_wrapper_wxWithImages::_bind_dynCast},
	{"__eq", &luna_wrapper_wxWithImages::_bind___eq},
	{"fromVoid", &luna_wrapper_wxWithImages::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxWithImages::_bind_asVoid},
	{"getTable", &luna_wrapper_wxWithImages::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxWithImages >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxWithImages >::enumValues[] = {
	{"NO_IMAGE", wxWithImages::NO_IMAGE},
	{0,0}
};


