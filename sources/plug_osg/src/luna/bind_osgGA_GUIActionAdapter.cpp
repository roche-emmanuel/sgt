#include <plug_common.h>

#include <luna/wrappers/wrapper_osgGA_GUIActionAdapter.h>

class luna_wrapper_osgGA_GUIActionAdapter {
public:
	typedef Luna< osgGA::GUIActionAdapter > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osgGA::GUIActionAdapter* self=(Luna< osgGA::GUIActionAdapter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<osgGA::GUIActionAdapter,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,85302998) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgGA::GUIActionAdapter*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osgGA::GUIActionAdapter* rhs =(Luna< osgGA::GUIActionAdapter >::check(L,2));
		osgGA::GUIActionAdapter* self=(Luna< osgGA::GUIActionAdapter >::check(L,1));
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

		osgGA::GUIActionAdapter* self= (osgGA::GUIActionAdapter*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgGA::GUIActionAdapter >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,85302998) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osgGA::GUIActionAdapter >::check(L,1));
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

		osgGA::GUIActionAdapter* self=(Luna< osgGA::GUIActionAdapter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgGA::GUIActionAdapter");
		
		return luna_dynamicCast(L,converters,"osgGA::GUIActionAdapter",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_asView(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_requestRedraw(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_requestContinuousUpdate(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_requestWarpPointer(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_asView(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgGA::GUIActionAdapter::GUIActionAdapter(lua_Table * data)
	static osgGA::GUIActionAdapter* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in osgGA::GUIActionAdapter::GUIActionAdapter(lua_Table * data) function, expected prototype:\nosgGA::GUIActionAdapter::GUIActionAdapter(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgGA_GUIActionAdapter(L,NULL);
	}


	// Function binds:
	// osg::View * osgGA::GUIActionAdapter::asView()
	static int _bind_asView(lua_State *L) {
		if (!_lg_typecheck_asView(L)) {
			luaL_error(L, "luna typecheck failed in osg::View * osgGA::GUIActionAdapter::asView() function, expected prototype:\nosg::View * osgGA::GUIActionAdapter::asView()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::GUIActionAdapter* self=(Luna< osgGA::GUIActionAdapter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::View * osgGA::GUIActionAdapter::asView(). Got : '%s'\n%s",typeid(Luna< osgGA::GUIActionAdapter >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::View * lret = self->asView();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::View >::push(L,lret,false);

		return 1;
	}

	// void osgGA::GUIActionAdapter::requestRedraw()
	static int _bind_requestRedraw(lua_State *L) {
		if (!_lg_typecheck_requestRedraw(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::GUIActionAdapter::requestRedraw() function, expected prototype:\nvoid osgGA::GUIActionAdapter::requestRedraw()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::GUIActionAdapter* self=(Luna< osgGA::GUIActionAdapter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::GUIActionAdapter::requestRedraw(). Got : '%s'\n%s",typeid(Luna< osgGA::GUIActionAdapter >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->requestRedraw();

		return 0;
	}

	// void osgGA::GUIActionAdapter::requestContinuousUpdate(bool needed = true)
	static int _bind_requestContinuousUpdate(lua_State *L) {
		if (!_lg_typecheck_requestContinuousUpdate(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::GUIActionAdapter::requestContinuousUpdate(bool needed = true) function, expected prototype:\nvoid osgGA::GUIActionAdapter::requestContinuousUpdate(bool needed = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool needed=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		osgGA::GUIActionAdapter* self=(Luna< osgGA::GUIActionAdapter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::GUIActionAdapter::requestContinuousUpdate(bool). Got : '%s'\n%s",typeid(Luna< osgGA::GUIActionAdapter >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->requestContinuousUpdate(needed);

		return 0;
	}

	// void osgGA::GUIActionAdapter::requestWarpPointer(float x, float y)
	static int _bind_requestWarpPointer(lua_State *L) {
		if (!_lg_typecheck_requestWarpPointer(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::GUIActionAdapter::requestWarpPointer(float x, float y) function, expected prototype:\nvoid osgGA::GUIActionAdapter::requestWarpPointer(float x, float y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float x=(float)lua_tonumber(L,2);
		float y=(float)lua_tonumber(L,3);

		osgGA::GUIActionAdapter* self=(Luna< osgGA::GUIActionAdapter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::GUIActionAdapter::requestWarpPointer(float, float). Got : '%s'\n%s",typeid(Luna< osgGA::GUIActionAdapter >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->requestWarpPointer(x, y);

		return 0;
	}

	// osg::View * osgGA::GUIActionAdapter::base_asView()
	static int _bind_base_asView(lua_State *L) {
		if (!_lg_typecheck_base_asView(L)) {
			luaL_error(L, "luna typecheck failed in osg::View * osgGA::GUIActionAdapter::base_asView() function, expected prototype:\nosg::View * osgGA::GUIActionAdapter::base_asView()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::GUIActionAdapter* self=(Luna< osgGA::GUIActionAdapter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::View * osgGA::GUIActionAdapter::base_asView(). Got : '%s'\n%s",typeid(Luna< osgGA::GUIActionAdapter >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::View * lret = self->GUIActionAdapter::asView();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::View >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

osgGA::GUIActionAdapter* LunaTraits< osgGA::GUIActionAdapter >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgGA_GUIActionAdapter::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void osgGA::GUIActionAdapter::requestRedraw()
	// void osgGA::GUIActionAdapter::requestContinuousUpdate(bool needed = true)
	// void osgGA::GUIActionAdapter::requestWarpPointer(float x, float y)
}

void LunaTraits< osgGA::GUIActionAdapter >::_bind_dtor(osgGA::GUIActionAdapter* obj) {
	delete obj;
}

const char LunaTraits< osgGA::GUIActionAdapter >::className[] = "GUIActionAdapter";
const char LunaTraits< osgGA::GUIActionAdapter >::fullName[] = "osgGA::GUIActionAdapter";
const char LunaTraits< osgGA::GUIActionAdapter >::moduleName[] = "osgGA";
const char* LunaTraits< osgGA::GUIActionAdapter >::parents[] = {0};
const int LunaTraits< osgGA::GUIActionAdapter >::hash = 85302998;
const int LunaTraits< osgGA::GUIActionAdapter >::uniqueIDs[] = {85302998,0};

luna_RegType LunaTraits< osgGA::GUIActionAdapter >::methods[] = {
	{"asView", &luna_wrapper_osgGA_GUIActionAdapter::_bind_asView},
	{"requestRedraw", &luna_wrapper_osgGA_GUIActionAdapter::_bind_requestRedraw},
	{"requestContinuousUpdate", &luna_wrapper_osgGA_GUIActionAdapter::_bind_requestContinuousUpdate},
	{"requestWarpPointer", &luna_wrapper_osgGA_GUIActionAdapter::_bind_requestWarpPointer},
	{"base_asView", &luna_wrapper_osgGA_GUIActionAdapter::_bind_base_asView},
	{"dynCast", &luna_wrapper_osgGA_GUIActionAdapter::_bind_dynCast},
	{"__eq", &luna_wrapper_osgGA_GUIActionAdapter::_bind___eq},
	{"fromVoid", &luna_wrapper_osgGA_GUIActionAdapter::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgGA_GUIActionAdapter::_bind_asVoid},
	{"getTable", &luna_wrapper_osgGA_GUIActionAdapter::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgGA::GUIActionAdapter >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgGA::GUIActionAdapter >::enumValues[] = {
	{0,0}
};


