#include <plug_common.h>

#include <luna/wrappers/wrapper_IGroup.h>

class luna_wrapper_IGroup {
public:
	typedef Luna< IGroup > luna_t;

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

		IGroup* self= (IGroup*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< IGroup >::push(L,self,false);
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
		//IGroup* ptr= dynamic_cast< IGroup* >(Luna< ICompound >::check(L,1));
		IGroup* ptr= luna_caster< ICompound, IGroup >::cast(Luna< ICompound >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< IGroup >::push(L,ptr,false);
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
	// IGroup::IGroup(lua_Table * data)
	static IGroup* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in IGroup::IGroup(lua_Table * data) function, expected prototype:\nIGroup::IGroup(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_IGroup(L,NULL);
	}


	// Function binds:
	// ICompoundIterator * IGroup::nestedCompounds() const
	static int _bind_nestedCompounds(lua_State *L) {
		if (!_lg_typecheck_nestedCompounds(L)) {
			luaL_error(L, "luna typecheck failed in ICompoundIterator * IGroup::nestedCompounds() const function, expected prototype:\nICompoundIterator * IGroup::nestedCompounds() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IGroup* self=Luna< ICompound >::checkSubType< IGroup >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ICompoundIterator * IGroup::nestedCompounds() const. Got : '%s'\n%s",typeid(Luna< ICompound >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ICompoundIterator * lret = self->nestedCompounds();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ICompoundIterator >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

IGroup* LunaTraits< IGroup >::_bind_ctor(lua_State *L) {
	return luna_wrapper_IGroup::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// ICompoundIterator * IGroup::nestedCompounds() const
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

void LunaTraits< IGroup >::_bind_dtor(IGroup* obj) {
	delete obj;
}

const char LunaTraits< IGroup >::className[] = "IGroup";
const char LunaTraits< IGroup >::fullName[] = "IGroup";
const char LunaTraits< IGroup >::moduleName[] = "doxmlparser";
const char* LunaTraits< IGroup >::parents[] = {"doxmlparser.ICompound", 0};
const int LunaTraits< IGroup >::hash = 59004472;
const int LunaTraits< IGroup >::uniqueIDs[] = {27352831,0};

luna_RegType LunaTraits< IGroup >::methods[] = {
	{"nestedCompounds", &luna_wrapper_IGroup::_bind_nestedCompounds},
	{"fromVoid", &luna_wrapper_IGroup::_bind_fromVoid},
	{"asVoid", &luna_wrapper_IGroup::_bind_asVoid},
	{"getTable", &luna_wrapper_IGroup::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< IGroup >::converters[] = {
	{"ICompound", &luna_wrapper_IGroup::_cast_from_ICompound},
	{0,0}
};

luna_RegEnumType LunaTraits< IGroup >::enumValues[] = {
	{0,0}
};


