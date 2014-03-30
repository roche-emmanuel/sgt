#include <plug_common.h>

#include <luna/wrappers/wrapper_IDocParameterList.h>

class luna_wrapper_IDocParameterList {
public:
	typedef Luna< IDocParameterList > luna_t;

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

		IDocParameterList* self= (IDocParameterList*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< IDocParameterList >::push(L,self,false);
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
		//IDocParameterList* ptr= dynamic_cast< IDocParameterList* >(Luna< IDoc >::check(L,1));
		IDocParameterList* ptr= luna_caster< IDoc, IDocParameterList >::cast(Luna< IDoc >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< IDocParameterList >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_sectType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_params(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// IDocParameterList::IDocParameterList(lua_Table * data)
	static IDocParameterList* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in IDocParameterList::IDocParameterList(lua_Table * data) function, expected prototype:\nIDocParameterList::IDocParameterList(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_IDocParameterList(L,NULL);
	}


	// Function binds:
	// IDocParameterList::Types IDocParameterList::sectType() const
	static int _bind_sectType(lua_State *L) {
		if (!_lg_typecheck_sectType(L)) {
			luaL_error(L, "luna typecheck failed in IDocParameterList::Types IDocParameterList::sectType() const function, expected prototype:\nIDocParameterList::Types IDocParameterList::sectType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDocParameterList* self=Luna< IDoc >::checkSubType< IDocParameterList >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call IDocParameterList::Types IDocParameterList::sectType() const. Got : '%s'\n%s",typeid(Luna< IDoc >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IDocParameterList::Types lret = self->sectType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// IDocIterator * IDocParameterList::params() const
	static int _bind_params(lua_State *L) {
		if (!_lg_typecheck_params(L)) {
			luaL_error(L, "luna typecheck failed in IDocIterator * IDocParameterList::params() const function, expected prototype:\nIDocIterator * IDocParameterList::params() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDocParameterList* self=Luna< IDoc >::checkSubType< IDocParameterList >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call IDocIterator * IDocParameterList::params() const. Got : '%s'\n%s",typeid(Luna< IDoc >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IDocIterator * lret = self->params();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IDocIterator >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

IDocParameterList* LunaTraits< IDocParameterList >::_bind_ctor(lua_State *L) {
	return luna_wrapper_IDocParameterList::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// IDocParameterList::Types IDocParameterList::sectType() const
	// IDocIterator * IDocParameterList::params() const
	// IDoc::Kind IDoc::kind() const
}

void LunaTraits< IDocParameterList >::_bind_dtor(IDocParameterList* obj) {
	delete obj;
}

const char LunaTraits< IDocParameterList >::className[] = "IDocParameterList";
const char LunaTraits< IDocParameterList >::fullName[] = "IDocParameterList";
const char LunaTraits< IDocParameterList >::moduleName[] = "doxmlparser";
const char* LunaTraits< IDocParameterList >::parents[] = {"doxmlparser.IDoc", 0};
const int LunaTraits< IDocParameterList >::hash = 13092780;
const int LunaTraits< IDocParameterList >::uniqueIDs[] = {2243631,0};

luna_RegType LunaTraits< IDocParameterList >::methods[] = {
	{"sectType", &luna_wrapper_IDocParameterList::_bind_sectType},
	{"params", &luna_wrapper_IDocParameterList::_bind_params},
	{"fromVoid", &luna_wrapper_IDocParameterList::_bind_fromVoid},
	{"asVoid", &luna_wrapper_IDocParameterList::_bind_asVoid},
	{"getTable", &luna_wrapper_IDocParameterList::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< IDocParameterList >::converters[] = {
	{"IDoc", &luna_wrapper_IDocParameterList::_cast_from_IDoc},
	{0,0}
};

luna_RegEnumType LunaTraits< IDocParameterList >::enumValues[] = {
	{"Param", IDocParameterList::Param},
	{"RetVal", IDocParameterList::RetVal},
	{"Exception", IDocParameterList::Exception},
	{0,0}
};


