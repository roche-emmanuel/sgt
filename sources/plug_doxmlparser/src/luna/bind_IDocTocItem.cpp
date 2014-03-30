#include <plug_common.h>

#include <luna/wrappers/wrapper_IDocTocItem.h>

class luna_wrapper_IDocTocItem {
public:
	typedef Luna< IDocTocItem > luna_t;

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

		IDocTocItem* self= (IDocTocItem*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< IDocTocItem >::push(L,self,false);
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
		//IDocTocItem* ptr= dynamic_cast< IDocTocItem* >(Luna< IDoc >::check(L,1));
		IDocTocItem* ptr= luna_caster< IDoc, IDocTocItem >::cast(Luna< IDoc >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< IDocTocItem >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_id(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_title(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// IDocTocItem::IDocTocItem(lua_Table * data)
	static IDocTocItem* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in IDocTocItem::IDocTocItem(lua_Table * data) function, expected prototype:\nIDocTocItem::IDocTocItem(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_IDocTocItem(L,NULL);
	}


	// Function binds:
	// const IString * IDocTocItem::id() const
	static int _bind_id(lua_State *L) {
		if (!_lg_typecheck_id(L)) {
			luaL_error(L, "luna typecheck failed in const IString * IDocTocItem::id() const function, expected prototype:\nconst IString * IDocTocItem::id() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDocTocItem* self=Luna< IDoc >::checkSubType< IDocTocItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const IString * IDocTocItem::id() const. Got : '%s'\n%s",typeid(Luna< IDoc >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const IString * lret = self->id();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	// const IString * IDocTocItem::title() const
	static int _bind_title(lua_State *L) {
		if (!_lg_typecheck_title(L)) {
			luaL_error(L, "luna typecheck failed in const IString * IDocTocItem::title() const function, expected prototype:\nconst IString * IDocTocItem::title() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDocTocItem* self=Luna< IDoc >::checkSubType< IDocTocItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const IString * IDocTocItem::title() const. Got : '%s'\n%s",typeid(Luna< IDoc >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const IString * lret = self->title();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

IDocTocItem* LunaTraits< IDocTocItem >::_bind_ctor(lua_State *L) {
	return luna_wrapper_IDocTocItem::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// const IString * IDocTocItem::id() const
	// const IString * IDocTocItem::title() const
	// IDoc::Kind IDoc::kind() const
}

void LunaTraits< IDocTocItem >::_bind_dtor(IDocTocItem* obj) {
	delete obj;
}

const char LunaTraits< IDocTocItem >::className[] = "IDocTocItem";
const char LunaTraits< IDocTocItem >::fullName[] = "IDocTocItem";
const char LunaTraits< IDocTocItem >::moduleName[] = "doxmlparser";
const char* LunaTraits< IDocTocItem >::parents[] = {"doxmlparser.IDoc", 0};
const int LunaTraits< IDocTocItem >::hash = 12192957;
const int LunaTraits< IDocTocItem >::uniqueIDs[] = {2243631,0};

luna_RegType LunaTraits< IDocTocItem >::methods[] = {
	{"id", &luna_wrapper_IDocTocItem::_bind_id},
	{"title", &luna_wrapper_IDocTocItem::_bind_title},
	{"fromVoid", &luna_wrapper_IDocTocItem::_bind_fromVoid},
	{"asVoid", &luna_wrapper_IDocTocItem::_bind_asVoid},
	{"getTable", &luna_wrapper_IDocTocItem::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< IDocTocItem >::converters[] = {
	{"IDoc", &luna_wrapper_IDocTocItem::_cast_from_IDoc},
	{0,0}
};

luna_RegEnumType LunaTraits< IDocTocItem >::enumValues[] = {
	{0,0}
};


