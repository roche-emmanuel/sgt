#include <plug_common.h>

#include <luna/wrappers/wrapper_INamespace.h>

class luna_wrapper_INamespace {
public:
	typedef Luna< INamespace > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ICompound* self=(Luna< ICompound >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<ICompound,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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

		INamespace* self= (INamespace*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< INamespace >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,27352831) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< ICompound >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_ICompound(lua_State *L) {
		// all checked are already performed before reaching this point.
		//INamespace* ptr= dynamic_cast< INamespace* >(Luna< ICompound >::check(L,1));
		INamespace* ptr= luna_caster< ICompound, INamespace >::cast(Luna< ICompound >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< INamespace >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_nestedCompounds(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// INamespace::INamespace(lua_Table * data)
	static INamespace* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in INamespace::INamespace(lua_Table * data) function, expected prototype:\nINamespace::INamespace(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_INamespace(L,NULL);
	}


	// Function binds:
	// ICompoundIterator * INamespace::nestedCompounds() const
	static int _bind_nestedCompounds(lua_State *L) {
		if (!_lg_typecheck_nestedCompounds(L)) {
			luaL_error(L, "luna typecheck failed in ICompoundIterator * INamespace::nestedCompounds() const function, expected prototype:\nICompoundIterator * INamespace::nestedCompounds() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		INamespace* self=Luna< ICompound >::checkSubType< INamespace >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ICompoundIterator * INamespace::nestedCompounds() const. Got : '%s'\n%s",typeid(Luna< ICompound >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ICompoundIterator * lret = self->nestedCompounds();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ICompoundIterator >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

INamespace* LunaTraits< INamespace >::_bind_ctor(lua_State *L) {
	return luna_wrapper_INamespace::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// ICompoundIterator * INamespace::nestedCompounds() const
	// const IString * ICompound::protection() const
	// const IString * ICompound::name() const
	// const IString * ICompound::id() const
	// ICompound::CompoundKind ICompound::kind() const
	// const IString * ICompound::kindString() const
	// ISectionIterator * ICompound::sections() const
	// IDocRoot * ICompound::briefDescription() const
	// IDocRoot * ICompound::detailedDescription() const
	// IMember * ICompound::memberById(const char * id) const
	// IMemberIterator * ICompound::memberByName(const char * name) const
	// void ICompound::release()
}

void LunaTraits< INamespace >::_bind_dtor(INamespace* obj) {
	delete obj;
}

const char LunaTraits< INamespace >::className[] = "INamespace";
const char LunaTraits< INamespace >::fullName[] = "INamespace";
const char LunaTraits< INamespace >::moduleName[] = "doxmlparser";
const char* LunaTraits< INamespace >::parents[] = {"doxmlparser.ICompound", 0};
const int LunaTraits< INamespace >::hash = 60734062;
const int LunaTraits< INamespace >::uniqueIDs[] = {27352831,0};

luna_RegType LunaTraits< INamespace >::methods[] = {
	{"nestedCompounds", &luna_wrapper_INamespace::_bind_nestedCompounds},
	{"fromVoid", &luna_wrapper_INamespace::_bind_fromVoid},
	{"asVoid", &luna_wrapper_INamespace::_bind_asVoid},
	{"getTable", &luna_wrapper_INamespace::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< INamespace >::converters[] = {
	{"ICompound", &luna_wrapper_INamespace::_cast_from_ICompound},
	{0,0}
};

luna_RegEnumType LunaTraits< INamespace >::enumValues[] = {
	{0,0}
};


