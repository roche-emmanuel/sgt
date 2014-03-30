#include <plug_common.h>

#include <luna/wrappers/wrapper_IDocIterator.h>

class luna_wrapper_IDocIterator {
public:
	typedef Luna< IDocIterator > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		IDocIterator* self=(Luna< IDocIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<IDocIterator,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,71345922) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(IDocIterator*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		IDocIterator* rhs =(Luna< IDocIterator >::check(L,2));
		IDocIterator* self=(Luna< IDocIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
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

		IDocIterator* self= (IDocIterator*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< IDocIterator >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,71345922) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< IDocIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		IDocIterator* self=(Luna< IDocIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("IDocIterator");
		
		return luna_dynamicCast(L,converters,"IDocIterator",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_toFirst(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_toLast(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_toNext(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_toPrev(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_current(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_release(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// IDocIterator::IDocIterator(lua_Table * data)
	static IDocIterator* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in IDocIterator::IDocIterator(lua_Table * data) function, expected prototype:\nIDocIterator::IDocIterator(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_IDocIterator(L,NULL);
	}


	// Function binds:
	// IDoc * IDocIterator::toFirst()
	static int _bind_toFirst(lua_State *L) {
		if (!_lg_typecheck_toFirst(L)) {
			luaL_error(L, "luna typecheck failed in IDoc * IDocIterator::toFirst() function, expected prototype:\nIDoc * IDocIterator::toFirst()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDocIterator* self=(Luna< IDocIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call IDoc * IDocIterator::toFirst(). Got : '%s'\n%s",typeid(Luna< IDocIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IDoc * lret = self->toFirst();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IDoc >::push(L,lret,false);

		return 1;
	}

	// IDoc * IDocIterator::toLast()
	static int _bind_toLast(lua_State *L) {
		if (!_lg_typecheck_toLast(L)) {
			luaL_error(L, "luna typecheck failed in IDoc * IDocIterator::toLast() function, expected prototype:\nIDoc * IDocIterator::toLast()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDocIterator* self=(Luna< IDocIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call IDoc * IDocIterator::toLast(). Got : '%s'\n%s",typeid(Luna< IDocIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IDoc * lret = self->toLast();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IDoc >::push(L,lret,false);

		return 1;
	}

	// IDoc * IDocIterator::toNext()
	static int _bind_toNext(lua_State *L) {
		if (!_lg_typecheck_toNext(L)) {
			luaL_error(L, "luna typecheck failed in IDoc * IDocIterator::toNext() function, expected prototype:\nIDoc * IDocIterator::toNext()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDocIterator* self=(Luna< IDocIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call IDoc * IDocIterator::toNext(). Got : '%s'\n%s",typeid(Luna< IDocIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IDoc * lret = self->toNext();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IDoc >::push(L,lret,false);

		return 1;
	}

	// IDoc * IDocIterator::toPrev()
	static int _bind_toPrev(lua_State *L) {
		if (!_lg_typecheck_toPrev(L)) {
			luaL_error(L, "luna typecheck failed in IDoc * IDocIterator::toPrev() function, expected prototype:\nIDoc * IDocIterator::toPrev()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDocIterator* self=(Luna< IDocIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call IDoc * IDocIterator::toPrev(). Got : '%s'\n%s",typeid(Luna< IDocIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IDoc * lret = self->toPrev();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IDoc >::push(L,lret,false);

		return 1;
	}

	// IDoc * IDocIterator::current() const
	static int _bind_current(lua_State *L) {
		if (!_lg_typecheck_current(L)) {
			luaL_error(L, "luna typecheck failed in IDoc * IDocIterator::current() const function, expected prototype:\nIDoc * IDocIterator::current() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDocIterator* self=(Luna< IDocIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call IDoc * IDocIterator::current() const. Got : '%s'\n%s",typeid(Luna< IDocIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IDoc * lret = self->current();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IDoc >::push(L,lret,false);

		return 1;
	}

	// void IDocIterator::release()
	static int _bind_release(lua_State *L) {
		if (!_lg_typecheck_release(L)) {
			luaL_error(L, "luna typecheck failed in void IDocIterator::release() function, expected prototype:\nvoid IDocIterator::release()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDocIterator* self=(Luna< IDocIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void IDocIterator::release(). Got : '%s'\n%s",typeid(Luna< IDocIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->release();

		return 0;
	}


	// Operator binds:

};

IDocIterator* LunaTraits< IDocIterator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_IDocIterator::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// IDoc * IDocIterator::toFirst()
	// IDoc * IDocIterator::toLast()
	// IDoc * IDocIterator::toNext()
	// IDoc * IDocIterator::toPrev()
	// IDoc * IDocIterator::current() const
	// void IDocIterator::release()
}

void LunaTraits< IDocIterator >::_bind_dtor(IDocIterator* obj) {
	delete obj;
}

const char LunaTraits< IDocIterator >::className[] = "IDocIterator";
const char LunaTraits< IDocIterator >::fullName[] = "IDocIterator";
const char LunaTraits< IDocIterator >::moduleName[] = "doxmlparser";
const char* LunaTraits< IDocIterator >::parents[] = {0};
const int LunaTraits< IDocIterator >::hash = 71345922;
const int LunaTraits< IDocIterator >::uniqueIDs[] = {71345922,0};

luna_RegType LunaTraits< IDocIterator >::methods[] = {
	{"toFirst", &luna_wrapper_IDocIterator::_bind_toFirst},
	{"toLast", &luna_wrapper_IDocIterator::_bind_toLast},
	{"toNext", &luna_wrapper_IDocIterator::_bind_toNext},
	{"toPrev", &luna_wrapper_IDocIterator::_bind_toPrev},
	{"current", &luna_wrapper_IDocIterator::_bind_current},
	{"release", &luna_wrapper_IDocIterator::_bind_release},
	{"dynCast", &luna_wrapper_IDocIterator::_bind_dynCast},
	{"__eq", &luna_wrapper_IDocIterator::_bind___eq},
	{"fromVoid", &luna_wrapper_IDocIterator::_bind_fromVoid},
	{"asVoid", &luna_wrapper_IDocIterator::_bind_asVoid},
	{"getTable", &luna_wrapper_IDocIterator::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< IDocIterator >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< IDocIterator >::enumValues[] = {
	{0,0}
};


