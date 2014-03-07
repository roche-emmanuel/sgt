#include <plug_common.h>

#include <luna/wrappers/wrapper_IFile.h>

class luna_wrapper_IFile {
public:
	typedef Luna< IFile > luna_t;

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

		IFile* self= (IFile*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< IFile >::push(L,self,false);
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
		//IFile* ptr= dynamic_cast< IFile* >(Luna< ICompound >::check(L,1));
		IFile* ptr= luna_caster< ICompound, IFile >::cast(Luna< ICompound >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< IFile >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_includeDependencyGraph(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_includedByDependencyGraph(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_source(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_nestedCompounds(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_includes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_includedBy(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// IFile::IFile(lua_Table * data)
	static IFile* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in IFile::IFile(lua_Table * data) function, expected prototype:\nIFile::IFile(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_IFile(L,NULL);
	}


	// Function binds:
	// IGraph * IFile::includeDependencyGraph() const
	static int _bind_includeDependencyGraph(lua_State *L) {
		if (!_lg_typecheck_includeDependencyGraph(L)) {
			luaL_error(L, "luna typecheck failed in IGraph * IFile::includeDependencyGraph() const function, expected prototype:\nIGraph * IFile::includeDependencyGraph() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IFile* self=Luna< ICompound >::checkSubType< IFile >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call IGraph * IFile::includeDependencyGraph() const. Got : '%s'\n%s",typeid(Luna< ICompound >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IGraph * lret = self->includeDependencyGraph();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IGraph >::push(L,lret,false);

		return 1;
	}

	// IGraph * IFile::includedByDependencyGraph() const
	static int _bind_includedByDependencyGraph(lua_State *L) {
		if (!_lg_typecheck_includedByDependencyGraph(L)) {
			luaL_error(L, "luna typecheck failed in IGraph * IFile::includedByDependencyGraph() const function, expected prototype:\nIGraph * IFile::includedByDependencyGraph() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IFile* self=Luna< ICompound >::checkSubType< IFile >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call IGraph * IFile::includedByDependencyGraph() const. Got : '%s'\n%s",typeid(Luna< ICompound >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IGraph * lret = self->includedByDependencyGraph();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IGraph >::push(L,lret,false);

		return 1;
	}

	// IDocProgramListing * IFile::source() const
	static int _bind_source(lua_State *L) {
		if (!_lg_typecheck_source(L)) {
			luaL_error(L, "luna typecheck failed in IDocProgramListing * IFile::source() const function, expected prototype:\nIDocProgramListing * IFile::source() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IFile* self=Luna< ICompound >::checkSubType< IFile >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call IDocProgramListing * IFile::source() const. Got : '%s'\n%s",typeid(Luna< ICompound >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IDocProgramListing * lret = self->source();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IDocProgramListing >::push(L,lret,false);

		return 1;
	}

	// ICompoundIterator * IFile::nestedCompounds() const
	static int _bind_nestedCompounds(lua_State *L) {
		if (!_lg_typecheck_nestedCompounds(L)) {
			luaL_error(L, "luna typecheck failed in ICompoundIterator * IFile::nestedCompounds() const function, expected prototype:\nICompoundIterator * IFile::nestedCompounds() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IFile* self=Luna< ICompound >::checkSubType< IFile >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ICompoundIterator * IFile::nestedCompounds() const. Got : '%s'\n%s",typeid(Luna< ICompound >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ICompoundIterator * lret = self->nestedCompounds();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ICompoundIterator >::push(L,lret,false);

		return 1;
	}

	// IIncludeIterator * IFile::includes() const
	static int _bind_includes(lua_State *L) {
		if (!_lg_typecheck_includes(L)) {
			luaL_error(L, "luna typecheck failed in IIncludeIterator * IFile::includes() const function, expected prototype:\nIIncludeIterator * IFile::includes() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IFile* self=Luna< ICompound >::checkSubType< IFile >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call IIncludeIterator * IFile::includes() const. Got : '%s'\n%s",typeid(Luna< ICompound >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IIncludeIterator * lret = self->includes();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IIncludeIterator >::push(L,lret,false);

		return 1;
	}

	// IIncludeIterator * IFile::includedBy() const
	static int _bind_includedBy(lua_State *L) {
		if (!_lg_typecheck_includedBy(L)) {
			luaL_error(L, "luna typecheck failed in IIncludeIterator * IFile::includedBy() const function, expected prototype:\nIIncludeIterator * IFile::includedBy() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IFile* self=Luna< ICompound >::checkSubType< IFile >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call IIncludeIterator * IFile::includedBy() const. Got : '%s'\n%s",typeid(Luna< ICompound >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IIncludeIterator * lret = self->includedBy();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IIncludeIterator >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

IFile* LunaTraits< IFile >::_bind_ctor(lua_State *L) {
	return luna_wrapper_IFile::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// IGraph * IFile::includeDependencyGraph() const
	// IGraph * IFile::includedByDependencyGraph() const
	// IDocProgramListing * IFile::source() const
	// ICompoundIterator * IFile::nestedCompounds() const
	// IIncludeIterator * IFile::includes() const
	// IIncludeIterator * IFile::includedBy() const
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

void LunaTraits< IFile >::_bind_dtor(IFile* obj) {
	delete obj;
}

const char LunaTraits< IFile >::className[] = "IFile";
const char LunaTraits< IFile >::fullName[] = "IFile";
const char LunaTraits< IFile >::moduleName[] = "doxmlparser";
const char* LunaTraits< IFile >::parents[] = {"doxmlparser.ICompound", 0};
const int LunaTraits< IFile >::hash = 69606757;
const int LunaTraits< IFile >::uniqueIDs[] = {27352831,0};

luna_RegType LunaTraits< IFile >::methods[] = {
	{"includeDependencyGraph", &luna_wrapper_IFile::_bind_includeDependencyGraph},
	{"includedByDependencyGraph", &luna_wrapper_IFile::_bind_includedByDependencyGraph},
	{"source", &luna_wrapper_IFile::_bind_source},
	{"nestedCompounds", &luna_wrapper_IFile::_bind_nestedCompounds},
	{"includes", &luna_wrapper_IFile::_bind_includes},
	{"includedBy", &luna_wrapper_IFile::_bind_includedBy},
	{"fromVoid", &luna_wrapper_IFile::_bind_fromVoid},
	{"asVoid", &luna_wrapper_IFile::_bind_asVoid},
	{"getTable", &luna_wrapper_IFile::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< IFile >::converters[] = {
	{"ICompound", &luna_wrapper_IFile::_cast_from_ICompound},
	{0,0}
};

luna_RegEnumType LunaTraits< IFile >::enumValues[] = {
	{0,0}
};


