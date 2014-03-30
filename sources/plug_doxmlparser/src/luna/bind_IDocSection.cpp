#include <plug_common.h>

#include <luna/wrappers/wrapper_IDocSection.h>

class luna_wrapper_IDocSection {
public:
	typedef Luna< IDocSection > luna_t;

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

		IDocSection* self= (IDocSection*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< IDocSection >::push(L,self,false);
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
		//IDocSection* ptr= dynamic_cast< IDocSection* >(Luna< IDoc >::check(L,1));
		IDocSection* ptr= luna_caster< IDoc, IDocSection >::cast(Luna< IDoc >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< IDocSection >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_id(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_level(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_title(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_paragraphs(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_subSections(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_internal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// IDocSection::IDocSection(lua_Table * data)
	static IDocSection* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in IDocSection::IDocSection(lua_Table * data) function, expected prototype:\nIDocSection::IDocSection(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_IDocSection(L,NULL);
	}


	// Function binds:
	// const IString * IDocSection::id() const
	static int _bind_id(lua_State *L) {
		if (!_lg_typecheck_id(L)) {
			luaL_error(L, "luna typecheck failed in const IString * IDocSection::id() const function, expected prototype:\nconst IString * IDocSection::id() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDocSection* self=Luna< IDoc >::checkSubType< IDocSection >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const IString * IDocSection::id() const. Got : '%s'\n%s",typeid(Luna< IDoc >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const IString * lret = self->id();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	// int IDocSection::level() const
	static int _bind_level(lua_State *L) {
		if (!_lg_typecheck_level(L)) {
			luaL_error(L, "luna typecheck failed in int IDocSection::level() const function, expected prototype:\nint IDocSection::level() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDocSection* self=Luna< IDoc >::checkSubType< IDocSection >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int IDocSection::level() const. Got : '%s'\n%s",typeid(Luna< IDoc >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->level();
		lua_pushnumber(L,lret);

		return 1;
	}

	// IDocTitle * IDocSection::title() const
	static int _bind_title(lua_State *L) {
		if (!_lg_typecheck_title(L)) {
			luaL_error(L, "luna typecheck failed in IDocTitle * IDocSection::title() const function, expected prototype:\nIDocTitle * IDocSection::title() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDocSection* self=Luna< IDoc >::checkSubType< IDocSection >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call IDocTitle * IDocSection::title() const. Got : '%s'\n%s",typeid(Luna< IDoc >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IDocTitle * lret = self->title();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IDocTitle >::push(L,lret,false);

		return 1;
	}

	// IDocIterator * IDocSection::paragraphs() const
	static int _bind_paragraphs(lua_State *L) {
		if (!_lg_typecheck_paragraphs(L)) {
			luaL_error(L, "luna typecheck failed in IDocIterator * IDocSection::paragraphs() const function, expected prototype:\nIDocIterator * IDocSection::paragraphs() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDocSection* self=Luna< IDoc >::checkSubType< IDocSection >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call IDocIterator * IDocSection::paragraphs() const. Got : '%s'\n%s",typeid(Luna< IDoc >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IDocIterator * lret = self->paragraphs();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IDocIterator >::push(L,lret,false);

		return 1;
	}

	// IDocIterator * IDocSection::subSections() const
	static int _bind_subSections(lua_State *L) {
		if (!_lg_typecheck_subSections(L)) {
			luaL_error(L, "luna typecheck failed in IDocIterator * IDocSection::subSections() const function, expected prototype:\nIDocIterator * IDocSection::subSections() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDocSection* self=Luna< IDoc >::checkSubType< IDocSection >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call IDocIterator * IDocSection::subSections() const. Got : '%s'\n%s",typeid(Luna< IDoc >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IDocIterator * lret = self->subSections();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IDocIterator >::push(L,lret,false);

		return 1;
	}

	// IDocInternal * IDocSection::internal() const
	static int _bind_internal(lua_State *L) {
		if (!_lg_typecheck_internal(L)) {
			luaL_error(L, "luna typecheck failed in IDocInternal * IDocSection::internal() const function, expected prototype:\nIDocInternal * IDocSection::internal() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDocSection* self=Luna< IDoc >::checkSubType< IDocSection >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call IDocInternal * IDocSection::internal() const. Got : '%s'\n%s",typeid(Luna< IDoc >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IDocInternal * lret = self->internal();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IDocInternal >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

IDocSection* LunaTraits< IDocSection >::_bind_ctor(lua_State *L) {
	return luna_wrapper_IDocSection::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// const IString * IDocSection::id() const
	// int IDocSection::level() const
	// IDocTitle * IDocSection::title() const
	// IDocIterator * IDocSection::paragraphs() const
	// IDocIterator * IDocSection::subSections() const
	// IDocInternal * IDocSection::internal() const
	// IDoc::Kind IDoc::kind() const
}

void LunaTraits< IDocSection >::_bind_dtor(IDocSection* obj) {
	delete obj;
}

const char LunaTraits< IDocSection >::className[] = "IDocSection";
const char LunaTraits< IDocSection >::fullName[] = "IDocSection";
const char LunaTraits< IDocSection >::moduleName[] = "doxmlparser";
const char* LunaTraits< IDocSection >::parents[] = {"doxmlparser.IDoc", 0};
const int LunaTraits< IDocSection >::hash = 39668651;
const int LunaTraits< IDocSection >::uniqueIDs[] = {2243631,0};

luna_RegType LunaTraits< IDocSection >::methods[] = {
	{"id", &luna_wrapper_IDocSection::_bind_id},
	{"level", &luna_wrapper_IDocSection::_bind_level},
	{"title", &luna_wrapper_IDocSection::_bind_title},
	{"paragraphs", &luna_wrapper_IDocSection::_bind_paragraphs},
	{"subSections", &luna_wrapper_IDocSection::_bind_subSections},
	{"internal", &luna_wrapper_IDocSection::_bind_internal},
	{"fromVoid", &luna_wrapper_IDocSection::_bind_fromVoid},
	{"asVoid", &luna_wrapper_IDocSection::_bind_asVoid},
	{"getTable", &luna_wrapper_IDocSection::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< IDocSection >::converters[] = {
	{"IDoc", &luna_wrapper_IDocSection::_cast_from_IDoc},
	{0,0}
};

luna_RegEnumType LunaTraits< IDocSection >::enumValues[] = {
	{0,0}
};


