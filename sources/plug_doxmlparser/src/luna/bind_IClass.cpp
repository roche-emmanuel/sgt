#include <plug_common.h>

#include <luna/wrappers/wrapper_IClass.h>

class luna_wrapper_IClass {
public:
	typedef Luna< IClass > luna_t;

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

		IClass* self= (IClass*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< IClass >::push(L,self,false);
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
		//IClass* ptr= dynamic_cast< IClass* >(Luna< ICompound >::check(L,1));
		IClass* ptr= luna_caster< ICompound, IClass >::cast(Luna< ICompound >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< IClass >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_inheritanceGraph(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_collaborationGraph(lua_State *L) {
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

	inline static bool _lg_typecheck_nestedCompounds(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_templateParameters(lua_State *L) {
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

	inline static bool _lg_typecheck_locationBodyFile(lua_State *L) {
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
	// IClass::IClass(lua_Table * data)
	static IClass* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in IClass::IClass(lua_Table * data) function, expected prototype:\nIClass::IClass(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_IClass(L,NULL);
	}


	// Function binds:
	// IGraph * IClass::inheritanceGraph() const
	static int _bind_inheritanceGraph(lua_State *L) {
		if (!_lg_typecheck_inheritanceGraph(L)) {
			luaL_error(L, "luna typecheck failed in IGraph * IClass::inheritanceGraph() const function, expected prototype:\nIGraph * IClass::inheritanceGraph() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IClass* self=Luna< ICompound >::checkSubType< IClass >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call IGraph * IClass::inheritanceGraph() const. Got : '%s'\n%s",typeid(Luna< ICompound >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IGraph * lret = self->inheritanceGraph();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IGraph >::push(L,lret,false);

		return 1;
	}

	// IGraph * IClass::collaborationGraph() const
	static int _bind_collaborationGraph(lua_State *L) {
		if (!_lg_typecheck_collaborationGraph(L)) {
			luaL_error(L, "luna typecheck failed in IGraph * IClass::collaborationGraph() const function, expected prototype:\nIGraph * IClass::collaborationGraph() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IClass* self=Luna< ICompound >::checkSubType< IClass >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call IGraph * IClass::collaborationGraph() const. Got : '%s'\n%s",typeid(Luna< ICompound >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IGraph * lret = self->collaborationGraph();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IGraph >::push(L,lret,false);

		return 1;
	}

	// IRelatedCompoundIterator * IClass::baseCompounds() const
	static int _bind_baseCompounds(lua_State *L) {
		if (!_lg_typecheck_baseCompounds(L)) {
			luaL_error(L, "luna typecheck failed in IRelatedCompoundIterator * IClass::baseCompounds() const function, expected prototype:\nIRelatedCompoundIterator * IClass::baseCompounds() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IClass* self=Luna< ICompound >::checkSubType< IClass >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call IRelatedCompoundIterator * IClass::baseCompounds() const. Got : '%s'\n%s",typeid(Luna< ICompound >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IRelatedCompoundIterator * lret = self->baseCompounds();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IRelatedCompoundIterator >::push(L,lret,false);

		return 1;
	}

	// IRelatedCompoundIterator * IClass::derivedCompounds() const
	static int _bind_derivedCompounds(lua_State *L) {
		if (!_lg_typecheck_derivedCompounds(L)) {
			luaL_error(L, "luna typecheck failed in IRelatedCompoundIterator * IClass::derivedCompounds() const function, expected prototype:\nIRelatedCompoundIterator * IClass::derivedCompounds() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IClass* self=Luna< ICompound >::checkSubType< IClass >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call IRelatedCompoundIterator * IClass::derivedCompounds() const. Got : '%s'\n%s",typeid(Luna< ICompound >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IRelatedCompoundIterator * lret = self->derivedCompounds();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IRelatedCompoundIterator >::push(L,lret,false);

		return 1;
	}

	// ICompoundIterator * IClass::nestedCompounds() const
	static int _bind_nestedCompounds(lua_State *L) {
		if (!_lg_typecheck_nestedCompounds(L)) {
			luaL_error(L, "luna typecheck failed in ICompoundIterator * IClass::nestedCompounds() const function, expected prototype:\nICompoundIterator * IClass::nestedCompounds() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IClass* self=Luna< ICompound >::checkSubType< IClass >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ICompoundIterator * IClass::nestedCompounds() const. Got : '%s'\n%s",typeid(Luna< ICompound >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ICompoundIterator * lret = self->nestedCompounds();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ICompoundIterator >::push(L,lret,false);

		return 1;
	}

	// IParamIterator * IClass::templateParameters() const
	static int _bind_templateParameters(lua_State *L) {
		if (!_lg_typecheck_templateParameters(L)) {
			luaL_error(L, "luna typecheck failed in IParamIterator * IClass::templateParameters() const function, expected prototype:\nIParamIterator * IClass::templateParameters() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IClass* self=Luna< ICompound >::checkSubType< IClass >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call IParamIterator * IClass::templateParameters() const. Got : '%s'\n%s",typeid(Luna< ICompound >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IParamIterator * lret = self->templateParameters();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IParamIterator >::push(L,lret,false);

		return 1;
	}

	// const IString * IClass::locationFile() const
	static int _bind_locationFile(lua_State *L) {
		if (!_lg_typecheck_locationFile(L)) {
			luaL_error(L, "luna typecheck failed in const IString * IClass::locationFile() const function, expected prototype:\nconst IString * IClass::locationFile() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IClass* self=Luna< ICompound >::checkSubType< IClass >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const IString * IClass::locationFile() const. Got : '%s'\n%s",typeid(Luna< ICompound >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const IString * lret = self->locationFile();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	// int IClass::locationLine() const
	static int _bind_locationLine(lua_State *L) {
		if (!_lg_typecheck_locationLine(L)) {
			luaL_error(L, "luna typecheck failed in int IClass::locationLine() const function, expected prototype:\nint IClass::locationLine() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IClass* self=Luna< ICompound >::checkSubType< IClass >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int IClass::locationLine() const. Got : '%s'\n%s",typeid(Luna< ICompound >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->locationLine();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const IString * IClass::locationBodyFile() const
	static int _bind_locationBodyFile(lua_State *L) {
		if (!_lg_typecheck_locationBodyFile(L)) {
			luaL_error(L, "luna typecheck failed in const IString * IClass::locationBodyFile() const function, expected prototype:\nconst IString * IClass::locationBodyFile() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IClass* self=Luna< ICompound >::checkSubType< IClass >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const IString * IClass::locationBodyFile() const. Got : '%s'\n%s",typeid(Luna< ICompound >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const IString * lret = self->locationBodyFile();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	// int IClass::locationBodyStartLine() const
	static int _bind_locationBodyStartLine(lua_State *L) {
		if (!_lg_typecheck_locationBodyStartLine(L)) {
			luaL_error(L, "luna typecheck failed in int IClass::locationBodyStartLine() const function, expected prototype:\nint IClass::locationBodyStartLine() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IClass* self=Luna< ICompound >::checkSubType< IClass >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int IClass::locationBodyStartLine() const. Got : '%s'\n%s",typeid(Luna< ICompound >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->locationBodyStartLine();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int IClass::locationBodyEndLine() const
	static int _bind_locationBodyEndLine(lua_State *L) {
		if (!_lg_typecheck_locationBodyEndLine(L)) {
			luaL_error(L, "luna typecheck failed in int IClass::locationBodyEndLine() const function, expected prototype:\nint IClass::locationBodyEndLine() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IClass* self=Luna< ICompound >::checkSubType< IClass >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int IClass::locationBodyEndLine() const. Got : '%s'\n%s",typeid(Luna< ICompound >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->locationBodyEndLine();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

IClass* LunaTraits< IClass >::_bind_ctor(lua_State *L) {
	return luna_wrapper_IClass::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// IGraph * IClass::inheritanceGraph() const
	// IGraph * IClass::collaborationGraph() const
	// IRelatedCompoundIterator * IClass::baseCompounds() const
	// IRelatedCompoundIterator * IClass::derivedCompounds() const
	// ICompoundIterator * IClass::nestedCompounds() const
	// IParamIterator * IClass::templateParameters() const
	// const IString * IClass::locationFile() const
	// int IClass::locationLine() const
	// const IString * IClass::locationBodyFile() const
	// int IClass::locationBodyStartLine() const
	// int IClass::locationBodyEndLine() const
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

void LunaTraits< IClass >::_bind_dtor(IClass* obj) {
	delete obj;
}

const char LunaTraits< IClass >::className[] = "IClass";
const char LunaTraits< IClass >::fullName[] = "IClass";
const char LunaTraits< IClass >::moduleName[] = "doxmlparser";
const char* LunaTraits< IClass >::parents[] = {"doxmlparser.ICompound", 0};
const int LunaTraits< IClass >::hash = 55118129;
const int LunaTraits< IClass >::uniqueIDs[] = {27352831,0};

luna_RegType LunaTraits< IClass >::methods[] = {
	{"inheritanceGraph", &luna_wrapper_IClass::_bind_inheritanceGraph},
	{"collaborationGraph", &luna_wrapper_IClass::_bind_collaborationGraph},
	{"baseCompounds", &luna_wrapper_IClass::_bind_baseCompounds},
	{"derivedCompounds", &luna_wrapper_IClass::_bind_derivedCompounds},
	{"nestedCompounds", &luna_wrapper_IClass::_bind_nestedCompounds},
	{"templateParameters", &luna_wrapper_IClass::_bind_templateParameters},
	{"locationFile", &luna_wrapper_IClass::_bind_locationFile},
	{"locationLine", &luna_wrapper_IClass::_bind_locationLine},
	{"locationBodyFile", &luna_wrapper_IClass::_bind_locationBodyFile},
	{"locationBodyStartLine", &luna_wrapper_IClass::_bind_locationBodyStartLine},
	{"locationBodyEndLine", &luna_wrapper_IClass::_bind_locationBodyEndLine},
	{"fromVoid", &luna_wrapper_IClass::_bind_fromVoid},
	{"asVoid", &luna_wrapper_IClass::_bind_asVoid},
	{"getTable", &luna_wrapper_IClass::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< IClass >::converters[] = {
	{"ICompound", &luna_wrapper_IClass::_cast_from_ICompound},
	{0,0}
};

luna_RegEnumType LunaTraits< IClass >::enumValues[] = {
	{0,0}
};


