#include <plug_common.h>

#include <luna/wrappers/wrapper_IDocRef.h>

class luna_wrapper_IDocRef {
public:
	typedef Luna< IDocRef > luna_t;

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

		IDocRef* self= (IDocRef*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< IDocRef >::push(L,self,false);
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
		//IDocRef* ptr= dynamic_cast< IDocRef* >(Luna< IDoc >::check(L,1));
		IDocRef* ptr= luna_caster< IDoc, IDocRef >::cast(Luna< IDoc >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< IDocRef >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_targetKind(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_external(lua_State *L) {
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
	// IDocRef::IDocRef(lua_Table * data)
	static IDocRef* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in IDocRef::IDocRef(lua_Table * data) function, expected prototype:\nIDocRef::IDocRef(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_IDocRef(L,NULL);
	}


	// Function binds:
	// const IString * IDocRef::refId() const
	static int _bind_refId(lua_State *L) {
		if (!_lg_typecheck_refId(L)) {
			luaL_error(L, "luna typecheck failed in const IString * IDocRef::refId() const function, expected prototype:\nconst IString * IDocRef::refId() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDocRef* self=Luna< IDoc >::checkSubType< IDocRef >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const IString * IDocRef::refId() const. Got : '%s'\n%s",typeid(Luna< IDoc >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const IString * lret = self->refId();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	// IDocRef::TargetKind IDocRef::targetKind() const
	static int _bind_targetKind(lua_State *L) {
		if (!_lg_typecheck_targetKind(L)) {
			luaL_error(L, "luna typecheck failed in IDocRef::TargetKind IDocRef::targetKind() const function, expected prototype:\nIDocRef::TargetKind IDocRef::targetKind() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDocRef* self=Luna< IDoc >::checkSubType< IDocRef >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call IDocRef::TargetKind IDocRef::targetKind() const. Got : '%s'\n%s",typeid(Luna< IDoc >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IDocRef::TargetKind lret = self->targetKind();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const IString * IDocRef::external() const
	static int _bind_external(lua_State *L) {
		if (!_lg_typecheck_external(L)) {
			luaL_error(L, "luna typecheck failed in const IString * IDocRef::external() const function, expected prototype:\nconst IString * IDocRef::external() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDocRef* self=Luna< IDoc >::checkSubType< IDocRef >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const IString * IDocRef::external() const. Got : '%s'\n%s",typeid(Luna< IDoc >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const IString * lret = self->external();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	// const IString * IDocRef::text() const
	static int _bind_text(lua_State *L) {
		if (!_lg_typecheck_text(L)) {
			luaL_error(L, "luna typecheck failed in const IString * IDocRef::text() const function, expected prototype:\nconst IString * IDocRef::text() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDocRef* self=Luna< IDoc >::checkSubType< IDocRef >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const IString * IDocRef::text() const. Got : '%s'\n%s",typeid(Luna< IDoc >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const IString * lret = self->text();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

IDocRef* LunaTraits< IDocRef >::_bind_ctor(lua_State *L) {
	return luna_wrapper_IDocRef::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// const IString * IDocRef::refId() const
	// IDocRef::TargetKind IDocRef::targetKind() const
	// const IString * IDocRef::external() const
	// const IString * IDocRef::text() const
	// IDoc::Kind IDoc::kind() const
}

void LunaTraits< IDocRef >::_bind_dtor(IDocRef* obj) {
	delete obj;
}

const char LunaTraits< IDocRef >::className[] = "IDocRef";
const char LunaTraits< IDocRef >::fullName[] = "IDocRef";
const char LunaTraits< IDocRef >::moduleName[] = "doxmlparser";
const char* LunaTraits< IDocRef >::parents[] = {"doxmlparser.IDoc", 0};
const int LunaTraits< IDocRef >::hash = 40089131;
const int LunaTraits< IDocRef >::uniqueIDs[] = {2243631,0};

luna_RegType LunaTraits< IDocRef >::methods[] = {
	{"refId", &luna_wrapper_IDocRef::_bind_refId},
	{"targetKind", &luna_wrapper_IDocRef::_bind_targetKind},
	{"external", &luna_wrapper_IDocRef::_bind_external},
	{"text", &luna_wrapper_IDocRef::_bind_text},
	{"fromVoid", &luna_wrapper_IDocRef::_bind_fromVoid},
	{"asVoid", &luna_wrapper_IDocRef::_bind_asVoid},
	{"getTable", &luna_wrapper_IDocRef::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< IDocRef >::converters[] = {
	{"IDoc", &luna_wrapper_IDocRef::_cast_from_IDoc},
	{0,0}
};

luna_RegEnumType LunaTraits< IDocRef >::enumValues[] = {
	{"Member", IDocRef::Member},
	{"Compound", IDocRef::Compound},
	{0,0}
};


