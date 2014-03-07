#include <plug_common.h>

#include <luna/wrappers/wrapper_IDocInternal.h>

class luna_wrapper_IDocInternal {
public:
	typedef Luna< IDocInternal > luna_t;

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

		IDocInternal* self= (IDocInternal*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< IDocInternal >::push(L,self,false);
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
		//IDocInternal* ptr= dynamic_cast< IDocInternal* >(Luna< IDoc >::check(L,1));
		IDocInternal* ptr= luna_caster< IDoc, IDocInternal >::cast(Luna< IDoc >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< IDocInternal >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_paragraphs(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_subSections(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// IDocInternal::IDocInternal(lua_Table * data)
	static IDocInternal* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in IDocInternal::IDocInternal(lua_Table * data) function, expected prototype:\nIDocInternal::IDocInternal(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_IDocInternal(L,NULL);
	}


	// Function binds:
	// IDocIterator * IDocInternal::paragraphs() const
	static int _bind_paragraphs(lua_State *L) {
		if (!_lg_typecheck_paragraphs(L)) {
			luaL_error(L, "luna typecheck failed in IDocIterator * IDocInternal::paragraphs() const function, expected prototype:\nIDocIterator * IDocInternal::paragraphs() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDocInternal* self=Luna< IDoc >::checkSubType< IDocInternal >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call IDocIterator * IDocInternal::paragraphs() const. Got : '%s'\n%s",typeid(Luna< IDoc >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IDocIterator * lret = self->paragraphs();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IDocIterator >::push(L,lret,false);

		return 1;
	}

	// IDocIterator * IDocInternal::subSections() const
	static int _bind_subSections(lua_State *L) {
		if (!_lg_typecheck_subSections(L)) {
			luaL_error(L, "luna typecheck failed in IDocIterator * IDocInternal::subSections() const function, expected prototype:\nIDocIterator * IDocInternal::subSections() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDocInternal* self=Luna< IDoc >::checkSubType< IDocInternal >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call IDocIterator * IDocInternal::subSections() const. Got : '%s'\n%s",typeid(Luna< IDoc >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IDocIterator * lret = self->subSections();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IDocIterator >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

IDocInternal* LunaTraits< IDocInternal >::_bind_ctor(lua_State *L) {
	return luna_wrapper_IDocInternal::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// IDocIterator * IDocInternal::paragraphs() const
	// IDocIterator * IDocInternal::subSections() const
	// IDoc::Kind IDoc::kind() const
}

void LunaTraits< IDocInternal >::_bind_dtor(IDocInternal* obj) {
	delete obj;
}

const char LunaTraits< IDocInternal >::className[] = "IDocInternal";
const char LunaTraits< IDocInternal >::fullName[] = "IDocInternal";
const char LunaTraits< IDocInternal >::moduleName[] = "doxmlparser";
const char* LunaTraits< IDocInternal >::parents[] = {"doxmlparser.IDoc", 0};
const int LunaTraits< IDocInternal >::hash = 64256126;
const int LunaTraits< IDocInternal >::uniqueIDs[] = {2243631,0};

luna_RegType LunaTraits< IDocInternal >::methods[] = {
	{"paragraphs", &luna_wrapper_IDocInternal::_bind_paragraphs},
	{"subSections", &luna_wrapper_IDocInternal::_bind_subSections},
	{"fromVoid", &luna_wrapper_IDocInternal::_bind_fromVoid},
	{"asVoid", &luna_wrapper_IDocInternal::_bind_asVoid},
	{"getTable", &luna_wrapper_IDocInternal::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< IDocInternal >::converters[] = {
	{"IDoc", &luna_wrapper_IDocInternal::_cast_from_IDoc},
	{0,0}
};

luna_RegEnumType LunaTraits< IDocInternal >::enumValues[] = {
	{0,0}
};


