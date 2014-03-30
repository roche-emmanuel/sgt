#include <plug_common.h>

#include <luna/wrappers/wrapper_IInterface.h>

class luna_wrapper_IInterface {
public:
	typedef Luna< IInterface > luna_t;

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

		IInterface* self= (IInterface*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< IInterface >::push(L,self,false);
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
		//IInterface* ptr= dynamic_cast< IInterface* >(Luna< ICompound >::check(L,1));
		IInterface* ptr= luna_caster< ICompound, IInterface >::cast(Luna< ICompound >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< IInterface >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_baseCompounds(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_derivedCompounds(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// IInterface::IInterface(lua_Table * data)
	static IInterface* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in IInterface::IInterface(lua_Table * data) function, expected prototype:\nIInterface::IInterface(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_IInterface(L,NULL);
	}


	// Function binds:
	// IRelatedCompoundIterator * IInterface::baseCompounds() const
	static int _bind_baseCompounds(lua_State *L) {
		if (!_lg_typecheck_baseCompounds(L)) {
			luaL_error(L, "luna typecheck failed in IRelatedCompoundIterator * IInterface::baseCompounds() const function, expected prototype:\nIRelatedCompoundIterator * IInterface::baseCompounds() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IInterface* self=Luna< ICompound >::checkSubType< IInterface >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call IRelatedCompoundIterator * IInterface::baseCompounds() const. Got : '%s'\n%s",typeid(Luna< ICompound >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IRelatedCompoundIterator * lret = self->baseCompounds();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IRelatedCompoundIterator >::push(L,lret,false);

		return 1;
	}

	// IRelatedCompoundIterator * IInterface::derivedCompounds() const
	static int _bind_derivedCompounds(lua_State *L) {
		if (!_lg_typecheck_derivedCompounds(L)) {
			luaL_error(L, "luna typecheck failed in IRelatedCompoundIterator * IInterface::derivedCompounds() const function, expected prototype:\nIRelatedCompoundIterator * IInterface::derivedCompounds() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IInterface* self=Luna< ICompound >::checkSubType< IInterface >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call IRelatedCompoundIterator * IInterface::derivedCompounds() const. Got : '%s'\n%s",typeid(Luna< ICompound >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IRelatedCompoundIterator * lret = self->derivedCompounds();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IRelatedCompoundIterator >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

IInterface* LunaTraits< IInterface >::_bind_ctor(lua_State *L) {
	return luna_wrapper_IInterface::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// IRelatedCompoundIterator * IInterface::baseCompounds() const
	// IRelatedCompoundIterator * IInterface::derivedCompounds() const
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

void LunaTraits< IInterface >::_bind_dtor(IInterface* obj) {
	delete obj;
}

const char LunaTraits< IInterface >::className[] = "IInterface";
const char LunaTraits< IInterface >::fullName[] = "IInterface";
const char LunaTraits< IInterface >::moduleName[] = "doxmlparser";
const char* LunaTraits< IInterface >::parents[] = {"doxmlparser.ICompound", 0};
const int LunaTraits< IInterface >::hash = 81086715;
const int LunaTraits< IInterface >::uniqueIDs[] = {27352831,0};

luna_RegType LunaTraits< IInterface >::methods[] = {
	{"baseCompounds", &luna_wrapper_IInterface::_bind_baseCompounds},
	{"derivedCompounds", &luna_wrapper_IInterface::_bind_derivedCompounds},
	{"fromVoid", &luna_wrapper_IInterface::_bind_fromVoid},
	{"asVoid", &luna_wrapper_IInterface::_bind_asVoid},
	{"getTable", &luna_wrapper_IInterface::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< IInterface >::converters[] = {
	{"ICompound", &luna_wrapper_IInterface::_cast_from_ICompound},
	{0,0}
};

luna_RegEnumType LunaTraits< IInterface >::enumValues[] = {
	{0,0}
};


