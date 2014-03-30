#include <plug_common.h>

#include <luna/wrappers/wrapper_IDocMarkup.h>

class luna_wrapper_IDocMarkup {
public:
	typedef Luna< IDocMarkup > luna_t;

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

		IDocMarkup* self= (IDocMarkup*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< IDocMarkup >::push(L,self,false);
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
		//IDocMarkup* ptr= dynamic_cast< IDocMarkup* >(Luna< IDoc >::check(L,1));
		IDocMarkup* ptr= luna_caster< IDoc, IDocMarkup >::cast(Luna< IDoc >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< IDocMarkup >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// IDocMarkup::IDocMarkup(lua_Table * data)
	static IDocMarkup* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in IDocMarkup::IDocMarkup(lua_Table * data) function, expected prototype:\nIDocMarkup::IDocMarkup(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_IDocMarkup(L,NULL);
	}


	// Function binds:

	// Operator binds:

};

IDocMarkup* LunaTraits< IDocMarkup >::_bind_ctor(lua_State *L) {
	return luna_wrapper_IDocMarkup::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// IDoc::Kind IDoc::kind() const
}

void LunaTraits< IDocMarkup >::_bind_dtor(IDocMarkup* obj) {
	delete obj;
}

const char LunaTraits< IDocMarkup >::className[] = "IDocMarkup";
const char LunaTraits< IDocMarkup >::fullName[] = "IDocMarkup";
const char LunaTraits< IDocMarkup >::moduleName[] = "doxmlparser";
const char* LunaTraits< IDocMarkup >::parents[] = {"doxmlparser.IDoc", 0};
const int LunaTraits< IDocMarkup >::hash = 48829897;
const int LunaTraits< IDocMarkup >::uniqueIDs[] = {2243631,0};

luna_RegType LunaTraits< IDocMarkup >::methods[] = {
	{"fromVoid", &luna_wrapper_IDocMarkup::_bind_fromVoid},
	{"asVoid", &luna_wrapper_IDocMarkup::_bind_asVoid},
	{"getTable", &luna_wrapper_IDocMarkup::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< IDocMarkup >::converters[] = {
	{"IDoc", &luna_wrapper_IDocMarkup::_cast_from_IDoc},
	{0,0}
};

luna_RegEnumType LunaTraits< IDocMarkup >::enumValues[] = {
	{"Normal", IDocMarkup::Normal},
	{"Bold", IDocMarkup::Bold},
	{"Emphasis", IDocMarkup::Emphasis},
	{"ComputerOutput", IDocMarkup::ComputerOutput},
	{"Subscript", IDocMarkup::Subscript},
	{"Superscript", IDocMarkup::Superscript},
	{"SmallFont", IDocMarkup::SmallFont},
	{"Center", IDocMarkup::Center},
	{"Preformatted", IDocMarkup::Preformatted},
	{"Heading", IDocMarkup::Heading},
	{0,0}
};


