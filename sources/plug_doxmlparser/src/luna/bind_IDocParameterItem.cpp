#include <plug_common.h>

#include <luna/wrappers/wrapper_IDocParameterItem.h>

class luna_wrapper_IDocParameterItem {
public:
	typedef Luna< IDocParameterItem > luna_t;

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

		IDocParameterItem* self= (IDocParameterItem*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< IDocParameterItem >::push(L,self,false);
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
		//IDocParameterItem* ptr= dynamic_cast< IDocParameterItem* >(Luna< IDoc >::check(L,1));
		IDocParameterItem* ptr= luna_caster< IDoc, IDocParameterItem >::cast(Luna< IDoc >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< IDocParameterItem >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_paramNames(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_description(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// IDocParameterItem::IDocParameterItem(lua_Table * data)
	static IDocParameterItem* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in IDocParameterItem::IDocParameterItem(lua_Table * data) function, expected prototype:\nIDocParameterItem::IDocParameterItem(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_IDocParameterItem(L,NULL);
	}


	// Function binds:
	// IDocIterator * IDocParameterItem::paramNames() const
	static int _bind_paramNames(lua_State *L) {
		if (!_lg_typecheck_paramNames(L)) {
			luaL_error(L, "luna typecheck failed in IDocIterator * IDocParameterItem::paramNames() const function, expected prototype:\nIDocIterator * IDocParameterItem::paramNames() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDocParameterItem* self=Luna< IDoc >::checkSubType< IDocParameterItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call IDocIterator * IDocParameterItem::paramNames() const. Got : '%s'\n%s",typeid(Luna< IDoc >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IDocIterator * lret = self->paramNames();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IDocIterator >::push(L,lret,false);

		return 1;
	}

	// IDocPara * IDocParameterItem::description() const
	static int _bind_description(lua_State *L) {
		if (!_lg_typecheck_description(L)) {
			luaL_error(L, "luna typecheck failed in IDocPara * IDocParameterItem::description() const function, expected prototype:\nIDocPara * IDocParameterItem::description() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDocParameterItem* self=Luna< IDoc >::checkSubType< IDocParameterItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call IDocPara * IDocParameterItem::description() const. Got : '%s'\n%s",typeid(Luna< IDoc >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IDocPara * lret = self->description();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IDocPara >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

IDocParameterItem* LunaTraits< IDocParameterItem >::_bind_ctor(lua_State *L) {
	return luna_wrapper_IDocParameterItem::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// IDocIterator * IDocParameterItem::paramNames() const
	// IDocPara * IDocParameterItem::description() const
	// IDoc::Kind IDoc::kind() const
}

void LunaTraits< IDocParameterItem >::_bind_dtor(IDocParameterItem* obj) {
	delete obj;
}

const char LunaTraits< IDocParameterItem >::className[] = "IDocParameterItem";
const char LunaTraits< IDocParameterItem >::fullName[] = "IDocParameterItem";
const char LunaTraits< IDocParameterItem >::moduleName[] = "doxmlparser";
const char* LunaTraits< IDocParameterItem >::parents[] = {"doxmlparser.IDoc", 0};
const int LunaTraits< IDocParameterItem >::hash = 13013537;
const int LunaTraits< IDocParameterItem >::uniqueIDs[] = {2243631,0};

luna_RegType LunaTraits< IDocParameterItem >::methods[] = {
	{"paramNames", &luna_wrapper_IDocParameterItem::_bind_paramNames},
	{"description", &luna_wrapper_IDocParameterItem::_bind_description},
	{"fromVoid", &luna_wrapper_IDocParameterItem::_bind_fromVoid},
	{"asVoid", &luna_wrapper_IDocParameterItem::_bind_asVoid},
	{"getTable", &luna_wrapper_IDocParameterItem::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< IDocParameterItem >::converters[] = {
	{"IDoc", &luna_wrapper_IDocParameterItem::_cast_from_IDoc},
	{0,0}
};

luna_RegEnumType LunaTraits< IDocParameterItem >::enumValues[] = {
	{0,0}
};


