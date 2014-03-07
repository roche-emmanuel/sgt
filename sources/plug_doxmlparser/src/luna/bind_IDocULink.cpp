#include <plug_common.h>

#include <luna/wrappers/wrapper_IDocULink.h>

class luna_wrapper_IDocULink {
public:
	typedef Luna< IDocULink > luna_t;

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

		IDocULink* self= (IDocULink*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< IDocULink >::push(L,self,false);
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
		//IDocULink* ptr= dynamic_cast< IDocULink* >(Luna< IDoc >::check(L,1));
		IDocULink* ptr= luna_caster< IDoc, IDocULink >::cast(Luna< IDoc >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< IDocULink >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_url(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_text(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// IDocULink::IDocULink(lua_Table * data)
	static IDocULink* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in IDocULink::IDocULink(lua_Table * data) function, expected prototype:\nIDocULink::IDocULink(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_IDocULink(L,NULL);
	}


	// Function binds:
	// const IString * IDocULink::url() const
	static int _bind_url(lua_State *L) {
		if (!_lg_typecheck_url(L)) {
			luaL_error(L, "luna typecheck failed in const IString * IDocULink::url() const function, expected prototype:\nconst IString * IDocULink::url() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDocULink* self=Luna< IDoc >::checkSubType< IDocULink >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const IString * IDocULink::url() const. Got : '%s'\n%s",typeid(Luna< IDoc >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const IString * lret = self->url();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	// const IString * IDocULink::text() const
	static int _bind_text(lua_State *L) {
		if (!_lg_typecheck_text(L)) {
			luaL_error(L, "luna typecheck failed in const IString * IDocULink::text() const function, expected prototype:\nconst IString * IDocULink::text() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDocULink* self=Luna< IDoc >::checkSubType< IDocULink >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const IString * IDocULink::text() const. Got : '%s'\n%s",typeid(Luna< IDoc >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const IString * lret = self->text();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

IDocULink* LunaTraits< IDocULink >::_bind_ctor(lua_State *L) {
	return luna_wrapper_IDocULink::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// const IString * IDocULink::url() const
	// const IString * IDocULink::text() const
	// IDoc::Kind IDoc::kind() const
}

void LunaTraits< IDocULink >::_bind_dtor(IDocULink* obj) {
	delete obj;
}

const char LunaTraits< IDocULink >::className[] = "IDocULink";
const char LunaTraits< IDocULink >::fullName[] = "IDocULink";
const char LunaTraits< IDocULink >::moduleName[] = "doxmlparser";
const char* LunaTraits< IDocULink >::parents[] = {"doxmlparser.IDoc", 0};
const int LunaTraits< IDocULink >::hash = 27683986;
const int LunaTraits< IDocULink >::uniqueIDs[] = {2243631,0};

luna_RegType LunaTraits< IDocULink >::methods[] = {
	{"url", &luna_wrapper_IDocULink::_bind_url},
	{"text", &luna_wrapper_IDocULink::_bind_text},
	{"fromVoid", &luna_wrapper_IDocULink::_bind_fromVoid},
	{"asVoid", &luna_wrapper_IDocULink::_bind_asVoid},
	{"getTable", &luna_wrapper_IDocULink::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< IDocULink >::converters[] = {
	{"IDoc", &luna_wrapper_IDocULink::_cast_from_IDoc},
	{0,0}
};

luna_RegEnumType LunaTraits< IDocULink >::enumValues[] = {
	{0,0}
};


