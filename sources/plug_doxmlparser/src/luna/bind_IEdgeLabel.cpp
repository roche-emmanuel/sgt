#include <plug_common.h>

#include <luna/wrappers/wrapper_IEdgeLabel.h>

class luna_wrapper_IEdgeLabel {
public:
	typedef Luna< IEdgeLabel > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		IEdgeLabel* self=(Luna< IEdgeLabel >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<IEdgeLabel,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,18272793) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(IEdgeLabel*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		IEdgeLabel* rhs =(Luna< IEdgeLabel >::check(L,2));
		IEdgeLabel* self=(Luna< IEdgeLabel >::check(L,1));
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

		IEdgeLabel* self= (IEdgeLabel*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< IEdgeLabel >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,18272793) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< IEdgeLabel >::check(L,1));
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

		IEdgeLabel* self=(Luna< IEdgeLabel >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("IEdgeLabel");
		
		return luna_dynamicCast(L,converters,"IEdgeLabel",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_label(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// IEdgeLabel::IEdgeLabel(lua_Table * data)
	static IEdgeLabel* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in IEdgeLabel::IEdgeLabel(lua_Table * data) function, expected prototype:\nIEdgeLabel::IEdgeLabel(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_IEdgeLabel(L,NULL);
	}


	// Function binds:
	// const IString * IEdgeLabel::label() const
	static int _bind_label(lua_State *L) {
		if (!_lg_typecheck_label(L)) {
			luaL_error(L, "luna typecheck failed in const IString * IEdgeLabel::label() const function, expected prototype:\nconst IString * IEdgeLabel::label() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IEdgeLabel* self=(Luna< IEdgeLabel >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const IString * IEdgeLabel::label() const. Got : '%s'\n%s",typeid(Luna< IEdgeLabel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const IString * lret = self->label();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

IEdgeLabel* LunaTraits< IEdgeLabel >::_bind_ctor(lua_State *L) {
	return luna_wrapper_IEdgeLabel::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// const IString * IEdgeLabel::label() const
}

void LunaTraits< IEdgeLabel >::_bind_dtor(IEdgeLabel* obj) {
	delete obj;
}

const char LunaTraits< IEdgeLabel >::className[] = "IEdgeLabel";
const char LunaTraits< IEdgeLabel >::fullName[] = "IEdgeLabel";
const char LunaTraits< IEdgeLabel >::moduleName[] = "doxmlparser";
const char* LunaTraits< IEdgeLabel >::parents[] = {0};
const int LunaTraits< IEdgeLabel >::hash = 18272793;
const int LunaTraits< IEdgeLabel >::uniqueIDs[] = {18272793,0};

luna_RegType LunaTraits< IEdgeLabel >::methods[] = {
	{"label", &luna_wrapper_IEdgeLabel::_bind_label},
	{"dynCast", &luna_wrapper_IEdgeLabel::_bind_dynCast},
	{"__eq", &luna_wrapper_IEdgeLabel::_bind___eq},
	{"fromVoid", &luna_wrapper_IEdgeLabel::_bind_fromVoid},
	{"asVoid", &luna_wrapper_IEdgeLabel::_bind_asVoid},
	{"getTable", &luna_wrapper_IEdgeLabel::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< IEdgeLabel >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< IEdgeLabel >::enumValues[] = {
	{0,0}
};


