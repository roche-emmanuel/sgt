#include <plug_common.h>

#include <luna/wrappers/wrapper_IDocLink.h>

class luna_wrapper_IDocLink {
public:
	typedef Luna< IDocLink > luna_t;

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

		IDocLink* self= (IDocLink*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< IDocLink >::push(L,self,false);
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
		//IDocLink* ptr= dynamic_cast< IDocLink* >(Luna< IDoc >::check(L,1));
		IDocLink* ptr= luna_caster< IDoc, IDocLink >::cast(Luna< IDoc >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< IDocLink >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_refId(lua_State *L) {
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
	// IDocLink::IDocLink(lua_Table * data)
	static IDocLink* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in IDocLink::IDocLink(lua_Table * data) function, expected prototype:\nIDocLink::IDocLink(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_IDocLink(L,NULL);
	}


	// Function binds:
	// const IString * IDocLink::refId() const
	static int _bind_refId(lua_State *L) {
		if (!_lg_typecheck_refId(L)) {
			luaL_error(L, "luna typecheck failed in const IString * IDocLink::refId() const function, expected prototype:\nconst IString * IDocLink::refId() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDocLink* self=Luna< IDoc >::checkSubType< IDocLink >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const IString * IDocLink::refId() const. Got : '%s'\n%s",typeid(Luna< IDoc >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const IString * lret = self->refId();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	// const IString * IDocLink::text() const
	static int _bind_text(lua_State *L) {
		if (!_lg_typecheck_text(L)) {
			luaL_error(L, "luna typecheck failed in const IString * IDocLink::text() const function, expected prototype:\nconst IString * IDocLink::text() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDocLink* self=Luna< IDoc >::checkSubType< IDocLink >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const IString * IDocLink::text() const. Got : '%s'\n%s",typeid(Luna< IDoc >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const IString * lret = self->text();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

IDocLink* LunaTraits< IDocLink >::_bind_ctor(lua_State *L) {
	return luna_wrapper_IDocLink::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// const IString * IDocLink::refId() const
	// const IString * IDocLink::text() const
	// IDoc::Kind IDoc::kind() const
}

void LunaTraits< IDocLink >::_bind_dtor(IDocLink* obj) {
	delete obj;
}

const char LunaTraits< IDocLink >::className[] = "IDocLink";
const char LunaTraits< IDocLink >::fullName[] = "IDocLink";
const char LunaTraits< IDocLink >::moduleName[] = "doxmlparser";
const char* LunaTraits< IDocLink >::parents[] = {"doxmlparser.IDoc", 0};
const int LunaTraits< IDocLink >::hash = 42588418;
const int LunaTraits< IDocLink >::uniqueIDs[] = {2243631,0};

luna_RegType LunaTraits< IDocLink >::methods[] = {
	{"refId", &luna_wrapper_IDocLink::_bind_refId},
	{"text", &luna_wrapper_IDocLink::_bind_text},
	{"fromVoid", &luna_wrapper_IDocLink::_bind_fromVoid},
	{"asVoid", &luna_wrapper_IDocLink::_bind_asVoid},
	{"getTable", &luna_wrapper_IDocLink::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< IDocLink >::converters[] = {
	{"IDoc", &luna_wrapper_IDocLink::_cast_from_IDoc},
	{0,0}
};

luna_RegEnumType LunaTraits< IDocLink >::enumValues[] = {
	{0,0}
};


