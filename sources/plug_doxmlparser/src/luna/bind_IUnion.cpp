#include <plug_common.h>

#include <luna/wrappers/wrapper_IUnion.h>

class luna_wrapper_IUnion {
public:
	typedef Luna< IUnion > luna_t;

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

		IUnion* self= (IUnion*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< IUnion >::push(L,self,false);
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
		//IUnion* ptr= dynamic_cast< IUnion* >(Luna< ICompound >::check(L,1));
		IUnion* ptr= luna_caster< ICompound, IUnion >::cast(Luna< ICompound >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< IUnion >::push(L,ptr,false);
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
	// IUnion::IUnion(lua_Table * data)
	static IUnion* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in IUnion::IUnion(lua_Table * data) function, expected prototype:\nIUnion::IUnion(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_IUnion(L,NULL);
	}


	// Function binds:
	// ICompoundIterator * IUnion::nestedCompounds() const
	static int _bind_nestedCompounds(lua_State *L) {
		if (!_lg_typecheck_nestedCompounds(L)) {
			luaL_error(L, "luna typecheck failed in ICompoundIterator * IUnion::nestedCompounds() const function, expected prototype:\nICompoundIterator * IUnion::nestedCompounds() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IUnion* self=Luna< ICompound >::checkSubType< IUnion >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ICompoundIterator * IUnion::nestedCompounds() const. Got : '%s'\n%s",typeid(Luna< ICompound >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ICompoundIterator * lret = self->nestedCompounds();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ICompoundIterator >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

IUnion* LunaTraits< IUnion >::_bind_ctor(lua_State *L) {
	return luna_wrapper_IUnion::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// ICompoundIterator * IUnion::nestedCompounds() const
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

void LunaTraits< IUnion >::_bind_dtor(IUnion* obj) {
	delete obj;
}

const char LunaTraits< IUnion >::className[] = "IUnion";
const char LunaTraits< IUnion >::fullName[] = "IUnion";
const char LunaTraits< IUnion >::moduleName[] = "doxmlparser";
const char* LunaTraits< IUnion >::parents[] = {"doxmlparser.ICompound", 0};
const int LunaTraits< IUnion >::hash = 71808648;
const int LunaTraits< IUnion >::uniqueIDs[] = {27352831,0};

luna_RegType LunaTraits< IUnion >::methods[] = {
	{"nestedCompounds", &luna_wrapper_IUnion::_bind_nestedCompounds},
	{"fromVoid", &luna_wrapper_IUnion::_bind_fromVoid},
	{"asVoid", &luna_wrapper_IUnion::_bind_asVoid},
	{"getTable", &luna_wrapper_IUnion::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< IUnion >::converters[] = {
	{"ICompound", &luna_wrapper_IUnion::_cast_from_ICompound},
	{0,0}
};

luna_RegEnumType LunaTraits< IUnion >::enumValues[] = {
	{0,0}
};


