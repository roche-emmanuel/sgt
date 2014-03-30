#include <plug_common.h>

#include <luna/wrappers/wrapper_IStruct.h>

class luna_wrapper_IStruct {
public:
	typedef Luna< IStruct > luna_t;

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

		IStruct* self= (IStruct*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< IStruct >::push(L,self,false);
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
		//IStruct* ptr= dynamic_cast< IStruct* >(Luna< ICompound >::check(L,1));
		IStruct* ptr= luna_caster< ICompound, IStruct >::cast(Luna< ICompound >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< IStruct >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_baseCompounds(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_derivedCompounds(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_locationFile(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_locationLine(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_locationBodyStartLine(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_locationBodyEndLine(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// IStruct::IStruct(lua_Table * data)
	static IStruct* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in IStruct::IStruct(lua_Table * data) function, expected prototype:\nIStruct::IStruct(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_IStruct(L,NULL);
	}


	// Function binds:
	// ICompoundIterator * IStruct::nestedCompounds() const
	static int _bind_nestedCompounds(lua_State *L) {
		if (!_lg_typecheck_nestedCompounds(L)) {
			luaL_error(L, "luna typecheck failed in ICompoundIterator * IStruct::nestedCompounds() const function, expected prototype:\nICompoundIterator * IStruct::nestedCompounds() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IStruct* self=Luna< ICompound >::checkSubType< IStruct >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ICompoundIterator * IStruct::nestedCompounds() const. Got : '%s'\n%s",typeid(Luna< ICompound >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ICompoundIterator * lret = self->nestedCompounds();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ICompoundIterator >::push(L,lret,false);

		return 1;
	}

	// IRelatedCompoundIterator * IStruct::baseCompounds() const
	static int _bind_baseCompounds(lua_State *L) {
		if (!_lg_typecheck_baseCompounds(L)) {
			luaL_error(L, "luna typecheck failed in IRelatedCompoundIterator * IStruct::baseCompounds() const function, expected prototype:\nIRelatedCompoundIterator * IStruct::baseCompounds() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IStruct* self=Luna< ICompound >::checkSubType< IStruct >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call IRelatedCompoundIterator * IStruct::baseCompounds() const. Got : '%s'\n%s",typeid(Luna< ICompound >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IRelatedCompoundIterator * lret = self->baseCompounds();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IRelatedCompoundIterator >::push(L,lret,false);

		return 1;
	}

	// IRelatedCompoundIterator * IStruct::derivedCompounds() const
	static int _bind_derivedCompounds(lua_State *L) {
		if (!_lg_typecheck_derivedCompounds(L)) {
			luaL_error(L, "luna typecheck failed in IRelatedCompoundIterator * IStruct::derivedCompounds() const function, expected prototype:\nIRelatedCompoundIterator * IStruct::derivedCompounds() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IStruct* self=Luna< ICompound >::checkSubType< IStruct >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call IRelatedCompoundIterator * IStruct::derivedCompounds() const. Got : '%s'\n%s",typeid(Luna< ICompound >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IRelatedCompoundIterator * lret = self->derivedCompounds();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IRelatedCompoundIterator >::push(L,lret,false);

		return 1;
	}

	// const IString * IStruct::locationFile() const
	static int _bind_locationFile(lua_State *L) {
		if (!_lg_typecheck_locationFile(L)) {
			luaL_error(L, "luna typecheck failed in const IString * IStruct::locationFile() const function, expected prototype:\nconst IString * IStruct::locationFile() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IStruct* self=Luna< ICompound >::checkSubType< IStruct >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const IString * IStruct::locationFile() const. Got : '%s'\n%s",typeid(Luna< ICompound >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const IString * lret = self->locationFile();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	// int IStruct::locationLine() const
	static int _bind_locationLine(lua_State *L) {
		if (!_lg_typecheck_locationLine(L)) {
			luaL_error(L, "luna typecheck failed in int IStruct::locationLine() const function, expected prototype:\nint IStruct::locationLine() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IStruct* self=Luna< ICompound >::checkSubType< IStruct >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int IStruct::locationLine() const. Got : '%s'\n%s",typeid(Luna< ICompound >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->locationLine();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int IStruct::locationBodyStartLine() const
	static int _bind_locationBodyStartLine(lua_State *L) {
		if (!_lg_typecheck_locationBodyStartLine(L)) {
			luaL_error(L, "luna typecheck failed in int IStruct::locationBodyStartLine() const function, expected prototype:\nint IStruct::locationBodyStartLine() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IStruct* self=Luna< ICompound >::checkSubType< IStruct >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int IStruct::locationBodyStartLine() const. Got : '%s'\n%s",typeid(Luna< ICompound >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->locationBodyStartLine();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int IStruct::locationBodyEndLine() const
	static int _bind_locationBodyEndLine(lua_State *L) {
		if (!_lg_typecheck_locationBodyEndLine(L)) {
			luaL_error(L, "luna typecheck failed in int IStruct::locationBodyEndLine() const function, expected prototype:\nint IStruct::locationBodyEndLine() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IStruct* self=Luna< ICompound >::checkSubType< IStruct >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int IStruct::locationBodyEndLine() const. Got : '%s'\n%s",typeid(Luna< ICompound >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->locationBodyEndLine();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

IStruct* LunaTraits< IStruct >::_bind_ctor(lua_State *L) {
	return luna_wrapper_IStruct::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// ICompoundIterator * IStruct::nestedCompounds() const
	// IRelatedCompoundIterator * IStruct::baseCompounds() const
	// IRelatedCompoundIterator * IStruct::derivedCompounds() const
	// const IString * IStruct::locationFile() const
	// int IStruct::locationLine() const
	// int IStruct::locationBodyStartLine() const
	// int IStruct::locationBodyEndLine() const
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

void LunaTraits< IStruct >::_bind_dtor(IStruct* obj) {
	delete obj;
}

const char LunaTraits< IStruct >::className[] = "IStruct";
const char LunaTraits< IStruct >::fullName[] = "IStruct";
const char LunaTraits< IStruct >::moduleName[] = "doxmlparser";
const char* LunaTraits< IStruct >::parents[] = {"doxmlparser.ICompound", 0};
const int LunaTraits< IStruct >::hash = 74624425;
const int LunaTraits< IStruct >::uniqueIDs[] = {27352831,0};

luna_RegType LunaTraits< IStruct >::methods[] = {
	{"nestedCompounds", &luna_wrapper_IStruct::_bind_nestedCompounds},
	{"baseCompounds", &luna_wrapper_IStruct::_bind_baseCompounds},
	{"derivedCompounds", &luna_wrapper_IStruct::_bind_derivedCompounds},
	{"locationFile", &luna_wrapper_IStruct::_bind_locationFile},
	{"locationLine", &luna_wrapper_IStruct::_bind_locationLine},
	{"locationBodyStartLine", &luna_wrapper_IStruct::_bind_locationBodyStartLine},
	{"locationBodyEndLine", &luna_wrapper_IStruct::_bind_locationBodyEndLine},
	{"fromVoid", &luna_wrapper_IStruct::_bind_fromVoid},
	{"asVoid", &luna_wrapper_IStruct::_bind_asVoid},
	{"getTable", &luna_wrapper_IStruct::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< IStruct >::converters[] = {
	{"ICompound", &luna_wrapper_IStruct::_cast_from_ICompound},
	{0,0}
};

luna_RegEnumType LunaTraits< IStruct >::enumValues[] = {
	{0,0}
};


