#include <plug_common.h>

#include <luna/wrappers/wrapper_IIncludeIterator.h>

class luna_wrapper_IIncludeIterator {
public:
	typedef Luna< IIncludeIterator > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		IIncludeIterator* self=(Luna< IIncludeIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<IIncludeIterator,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,31762769) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(IIncludeIterator*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		IIncludeIterator* rhs =(Luna< IIncludeIterator >::check(L,2));
		IIncludeIterator* self=(Luna< IIncludeIterator >::check(L,1));
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

		IIncludeIterator* self= (IIncludeIterator*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< IIncludeIterator >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,31762769) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< IIncludeIterator >::check(L,1));
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

		IIncludeIterator* self=(Luna< IIncludeIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("IIncludeIterator");
		
		return luna_dynamicCast(L,converters,"IIncludeIterator",name);
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
	// IIncludeIterator::IIncludeIterator(lua_Table * data)
	static IIncludeIterator* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in IIncludeIterator::IIncludeIterator(lua_Table * data) function, expected prototype:\nIIncludeIterator::IIncludeIterator(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_IIncludeIterator(L,NULL);
	}


	// Function binds:
	// IInclude * IIncludeIterator::toFirst()
	static int _bind_toFirst(lua_State *L) {
		if (!_lg_typecheck_toFirst(L)) {
			luaL_error(L, "luna typecheck failed in IInclude * IIncludeIterator::toFirst() function, expected prototype:\nIInclude * IIncludeIterator::toFirst()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IIncludeIterator* self=(Luna< IIncludeIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call IInclude * IIncludeIterator::toFirst(). Got : '%s'\n%s",typeid(Luna< IIncludeIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IInclude * lret = self->toFirst();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IInclude >::push(L,lret,false);

		return 1;
	}

	// IInclude * IIncludeIterator::toLast()
	static int _bind_toLast(lua_State *L) {
		if (!_lg_typecheck_toLast(L)) {
			luaL_error(L, "luna typecheck failed in IInclude * IIncludeIterator::toLast() function, expected prototype:\nIInclude * IIncludeIterator::toLast()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IIncludeIterator* self=(Luna< IIncludeIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call IInclude * IIncludeIterator::toLast(). Got : '%s'\n%s",typeid(Luna< IIncludeIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IInclude * lret = self->toLast();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IInclude >::push(L,lret,false);

		return 1;
	}

	// IInclude * IIncludeIterator::toNext()
	static int _bind_toNext(lua_State *L) {
		if (!_lg_typecheck_toNext(L)) {
			luaL_error(L, "luna typecheck failed in IInclude * IIncludeIterator::toNext() function, expected prototype:\nIInclude * IIncludeIterator::toNext()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IIncludeIterator* self=(Luna< IIncludeIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call IInclude * IIncludeIterator::toNext(). Got : '%s'\n%s",typeid(Luna< IIncludeIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IInclude * lret = self->toNext();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IInclude >::push(L,lret,false);

		return 1;
	}

	// IInclude * IIncludeIterator::toPrev()
	static int _bind_toPrev(lua_State *L) {
		if (!_lg_typecheck_toPrev(L)) {
			luaL_error(L, "luna typecheck failed in IInclude * IIncludeIterator::toPrev() function, expected prototype:\nIInclude * IIncludeIterator::toPrev()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IIncludeIterator* self=(Luna< IIncludeIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call IInclude * IIncludeIterator::toPrev(). Got : '%s'\n%s",typeid(Luna< IIncludeIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IInclude * lret = self->toPrev();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IInclude >::push(L,lret,false);

		return 1;
	}

	// IInclude * IIncludeIterator::current() const
	static int _bind_current(lua_State *L) {
		if (!_lg_typecheck_current(L)) {
			luaL_error(L, "luna typecheck failed in IInclude * IIncludeIterator::current() const function, expected prototype:\nIInclude * IIncludeIterator::current() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IIncludeIterator* self=(Luna< IIncludeIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call IInclude * IIncludeIterator::current() const. Got : '%s'\n%s",typeid(Luna< IIncludeIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IInclude * lret = self->current();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IInclude >::push(L,lret,false);

		return 1;
	}

	// void IIncludeIterator::release()
	static int _bind_release(lua_State *L) {
		if (!_lg_typecheck_release(L)) {
			luaL_error(L, "luna typecheck failed in void IIncludeIterator::release() function, expected prototype:\nvoid IIncludeIterator::release()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IIncludeIterator* self=(Luna< IIncludeIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void IIncludeIterator::release(). Got : '%s'\n%s",typeid(Luna< IIncludeIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->release();

		return 0;
	}


	// Operator binds:

};

IIncludeIterator* LunaTraits< IIncludeIterator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_IIncludeIterator::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// IInclude * IIncludeIterator::toFirst()
	// IInclude * IIncludeIterator::toLast()
	// IInclude * IIncludeIterator::toNext()
	// IInclude * IIncludeIterator::toPrev()
	// IInclude * IIncludeIterator::current() const
	// void IIncludeIterator::release()
}

void LunaTraits< IIncludeIterator >::_bind_dtor(IIncludeIterator* obj) {
	delete obj;
}

const char LunaTraits< IIncludeIterator >::className[] = "IIncludeIterator";
const char LunaTraits< IIncludeIterator >::fullName[] = "IIncludeIterator";
const char LunaTraits< IIncludeIterator >::moduleName[] = "doxmlparser";
const char* LunaTraits< IIncludeIterator >::parents[] = {0};
const int LunaTraits< IIncludeIterator >::hash = 31762769;
const int LunaTraits< IIncludeIterator >::uniqueIDs[] = {31762769,0};

luna_RegType LunaTraits< IIncludeIterator >::methods[] = {
	{"toFirst", &luna_wrapper_IIncludeIterator::_bind_toFirst},
	{"toLast", &luna_wrapper_IIncludeIterator::_bind_toLast},
	{"toNext", &luna_wrapper_IIncludeIterator::_bind_toNext},
	{"toPrev", &luna_wrapper_IIncludeIterator::_bind_toPrev},
	{"current", &luna_wrapper_IIncludeIterator::_bind_current},
	{"release", &luna_wrapper_IIncludeIterator::_bind_release},
	{"dynCast", &luna_wrapper_IIncludeIterator::_bind_dynCast},
	{"__eq", &luna_wrapper_IIncludeIterator::_bind___eq},
	{"fromVoid", &luna_wrapper_IIncludeIterator::_bind_fromVoid},
	{"asVoid", &luna_wrapper_IIncludeIterator::_bind_asVoid},
	{"getTable", &luna_wrapper_IIncludeIterator::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< IIncludeIterator >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< IIncludeIterator >::enumValues[] = {
	{0,0}
};


