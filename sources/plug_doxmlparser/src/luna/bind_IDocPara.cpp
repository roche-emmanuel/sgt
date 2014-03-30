#include <plug_common.h>

#include <luna/wrappers/wrapper_IDocPara.h>

class luna_wrapper_IDocPara {
public:
	typedef Luna< IDocPara > luna_t;

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

		IDocPara* self= (IDocPara*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< IDocPara >::push(L,self,false);
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
		//IDocPara* ptr= dynamic_cast< IDocPara* >(Luna< IDoc >::check(L,1));
		IDocPara* ptr= luna_caster< IDoc, IDocPara >::cast(Luna< IDoc >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< IDocPara >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_contents(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// IDocPara::IDocPara(lua_Table * data)
	static IDocPara* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in IDocPara::IDocPara(lua_Table * data) function, expected prototype:\nIDocPara::IDocPara(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_IDocPara(L,NULL);
	}


	// Function binds:
	// IDocIterator * IDocPara::contents() const
	static int _bind_contents(lua_State *L) {
		if (!_lg_typecheck_contents(L)) {
			luaL_error(L, "luna typecheck failed in IDocIterator * IDocPara::contents() const function, expected prototype:\nIDocIterator * IDocPara::contents() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDocPara* self=Luna< IDoc >::checkSubType< IDocPara >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call IDocIterator * IDocPara::contents() const. Got : '%s'\n%s",typeid(Luna< IDoc >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IDocIterator * lret = self->contents();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IDocIterator >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

IDocPara* LunaTraits< IDocPara >::_bind_ctor(lua_State *L) {
	return luna_wrapper_IDocPara::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// IDocIterator * IDocPara::contents() const
	// IDoc::Kind IDoc::kind() const
}

void LunaTraits< IDocPara >::_bind_dtor(IDocPara* obj) {
	delete obj;
}

const char LunaTraits< IDocPara >::className[] = "IDocPara";
const char LunaTraits< IDocPara >::fullName[] = "IDocPara";
const char LunaTraits< IDocPara >::moduleName[] = "doxmlparser";
const char* LunaTraits< IDocPara >::parents[] = {"doxmlparser.IDoc", 0};
const int LunaTraits< IDocPara >::hash = 42700008;
const int LunaTraits< IDocPara >::uniqueIDs[] = {2243631,0};

luna_RegType LunaTraits< IDocPara >::methods[] = {
	{"contents", &luna_wrapper_IDocPara::_bind_contents},
	{"fromVoid", &luna_wrapper_IDocPara::_bind_fromVoid},
	{"asVoid", &luna_wrapper_IDocPara::_bind_asVoid},
	{"getTable", &luna_wrapper_IDocPara::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< IDocPara >::converters[] = {
	{"IDoc", &luna_wrapper_IDocPara::_cast_from_IDoc},
	{0,0}
};

luna_RegEnumType LunaTraits< IDocPara >::enumValues[] = {
	{0,0}
};


