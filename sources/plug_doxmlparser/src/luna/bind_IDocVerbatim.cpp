#include <plug_common.h>

#include <luna/wrappers/wrapper_IDocVerbatim.h>

class luna_wrapper_IDocVerbatim {
public:
	typedef Luna< IDocVerbatim > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		IDoc* self=(Luna< IDoc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<IDoc,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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

		IDocVerbatim* self= (IDocVerbatim*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< IDocVerbatim >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,2243631) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< IDoc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_IDoc(lua_State *L) {
		// all checked are already performed before reaching this point.
		//IDocVerbatim* ptr= dynamic_cast< IDocVerbatim* >(Luna< IDoc >::check(L,1));
		IDocVerbatim* ptr= luna_caster< IDoc, IDocVerbatim >::cast(Luna< IDoc >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< IDocVerbatim >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_text(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_type(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// IDocVerbatim::IDocVerbatim(lua_Table * data)
	static IDocVerbatim* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in IDocVerbatim::IDocVerbatim(lua_Table * data) function, expected prototype:\nIDocVerbatim::IDocVerbatim(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_IDocVerbatim(L,NULL);
	}


	// Function binds:
	// const IString * IDocVerbatim::text() const
	static int _bind_text(lua_State *L) {
		if (!_lg_typecheck_text(L)) {
			luaL_error(L, "luna typecheck failed in const IString * IDocVerbatim::text() const function, expected prototype:\nconst IString * IDocVerbatim::text() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDocVerbatim* self=Luna< IDoc >::checkSubType< IDocVerbatim >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const IString * IDocVerbatim::text() const. Got : '%s'\n%s",typeid(Luna< IDoc >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const IString * lret = self->text();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	// IDocVerbatim::Types IDocVerbatim::type() const
	static int _bind_type(lua_State *L) {
		if (!_lg_typecheck_type(L)) {
			luaL_error(L, "luna typecheck failed in IDocVerbatim::Types IDocVerbatim::type() const function, expected prototype:\nIDocVerbatim::Types IDocVerbatim::type() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDocVerbatim* self=Luna< IDoc >::checkSubType< IDocVerbatim >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call IDocVerbatim::Types IDocVerbatim::type() const. Got : '%s'\n%s",typeid(Luna< IDoc >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IDocVerbatim::Types lret = self->type();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

IDocVerbatim* LunaTraits< IDocVerbatim >::_bind_ctor(lua_State *L) {
	return luna_wrapper_IDocVerbatim::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// const IString * IDocVerbatim::text() const
	// IDocVerbatim::Types IDocVerbatim::type() const
	// IDoc::Kind IDoc::kind() const
}

void LunaTraits< IDocVerbatim >::_bind_dtor(IDocVerbatim* obj) {
	delete obj;
}

const char LunaTraits< IDocVerbatim >::className[] = "IDocVerbatim";
const char LunaTraits< IDocVerbatim >::fullName[] = "IDocVerbatim";
const char LunaTraits< IDocVerbatim >::moduleName[] = "doxmlparser";
const char* LunaTraits< IDocVerbatim >::parents[] = {"doxmlparser.IDoc", 0};
const int LunaTraits< IDocVerbatim >::hash = 80142538;
const int LunaTraits< IDocVerbatim >::uniqueIDs[] = {2243631,0};

luna_RegType LunaTraits< IDocVerbatim >::methods[] = {
	{"text", &luna_wrapper_IDocVerbatim::_bind_text},
	{"type", &luna_wrapper_IDocVerbatim::_bind_type},
	{"fromVoid", &luna_wrapper_IDocVerbatim::_bind_fromVoid},
	{"asVoid", &luna_wrapper_IDocVerbatim::_bind_asVoid},
	{"getTable", &luna_wrapper_IDocVerbatim::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< IDocVerbatim >::converters[] = {
	{"IDoc", &luna_wrapper_IDocVerbatim::_cast_from_IDoc},
	{0,0}
};

luna_RegEnumType LunaTraits< IDocVerbatim >::enumValues[] = {
	{"Invalid", IDocVerbatim::Invalid},
	{"HtmlOnly", IDocVerbatim::HtmlOnly},
	{"LatexOnly", IDocVerbatim::LatexOnly},
	{"Verbatim", IDocVerbatim::Verbatim},
	{0,0}
};


