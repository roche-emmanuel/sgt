#include <plug_common.h>

#include <luna/wrappers/wrapper_IDocDotFile.h>

class luna_wrapper_IDocDotFile {
public:
	typedef Luna< IDocDotFile > luna_t;

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

		IDocDotFile* self= (IDocDotFile*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< IDocDotFile >::push(L,self,false);
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
		//IDocDotFile* ptr= dynamic_cast< IDocDotFile* >(Luna< IDoc >::check(L,1));
		IDocDotFile* ptr= luna_caster< IDoc, IDocDotFile >::cast(Luna< IDoc >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< IDocDotFile >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_name(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_caption(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// IDocDotFile::IDocDotFile(lua_Table * data)
	static IDocDotFile* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in IDocDotFile::IDocDotFile(lua_Table * data) function, expected prototype:\nIDocDotFile::IDocDotFile(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_IDocDotFile(L,NULL);
	}


	// Function binds:
	// const IString * IDocDotFile::name() const
	static int _bind_name(lua_State *L) {
		if (!_lg_typecheck_name(L)) {
			luaL_error(L, "luna typecheck failed in const IString * IDocDotFile::name() const function, expected prototype:\nconst IString * IDocDotFile::name() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDocDotFile* self=Luna< IDoc >::checkSubType< IDocDotFile >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const IString * IDocDotFile::name() const. Got : '%s'\n%s",typeid(Luna< IDoc >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const IString * lret = self->name();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	// const IString * IDocDotFile::caption() const
	static int _bind_caption(lua_State *L) {
		if (!_lg_typecheck_caption(L)) {
			luaL_error(L, "luna typecheck failed in const IString * IDocDotFile::caption() const function, expected prototype:\nconst IString * IDocDotFile::caption() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDocDotFile* self=Luna< IDoc >::checkSubType< IDocDotFile >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const IString * IDocDotFile::caption() const. Got : '%s'\n%s",typeid(Luna< IDoc >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const IString * lret = self->caption();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

IDocDotFile* LunaTraits< IDocDotFile >::_bind_ctor(lua_State *L) {
	return luna_wrapper_IDocDotFile::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// const IString * IDocDotFile::name() const
	// const IString * IDocDotFile::caption() const
	// IDoc::Kind IDoc::kind() const
}

void LunaTraits< IDocDotFile >::_bind_dtor(IDocDotFile* obj) {
	delete obj;
}

const char LunaTraits< IDocDotFile >::className[] = "IDocDotFile";
const char LunaTraits< IDocDotFile >::fullName[] = "IDocDotFile";
const char LunaTraits< IDocDotFile >::moduleName[] = "doxmlparser";
const char* LunaTraits< IDocDotFile >::parents[] = {"doxmlparser.IDoc", 0};
const int LunaTraits< IDocDotFile >::hash = 27735621;
const int LunaTraits< IDocDotFile >::uniqueIDs[] = {2243631,0};

luna_RegType LunaTraits< IDocDotFile >::methods[] = {
	{"name", &luna_wrapper_IDocDotFile::_bind_name},
	{"caption", &luna_wrapper_IDocDotFile::_bind_caption},
	{"fromVoid", &luna_wrapper_IDocDotFile::_bind_fromVoid},
	{"asVoid", &luna_wrapper_IDocDotFile::_bind_asVoid},
	{"getTable", &luna_wrapper_IDocDotFile::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< IDocDotFile >::converters[] = {
	{"IDoc", &luna_wrapper_IDocDotFile::_cast_from_IDoc},
	{0,0}
};

luna_RegEnumType LunaTraits< IDocDotFile >::enumValues[] = {
	{0,0}
};


