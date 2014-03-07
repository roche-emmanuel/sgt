#include <plug_common.h>

#include <luna/wrappers/wrapper_ICompoundIterator.h>

class luna_wrapper_ICompoundIterator {
public:
	typedef Luna< ICompoundIterator > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ICompoundIterator* self=(Luna< ICompoundIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<ICompoundIterator,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,38557418) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ICompoundIterator*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ICompoundIterator* rhs =(Luna< ICompoundIterator >::check(L,2));
		ICompoundIterator* self=(Luna< ICompoundIterator >::check(L,1));
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

		ICompoundIterator* self= (ICompoundIterator*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ICompoundIterator >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,38557418) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< ICompoundIterator >::check(L,1));
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

		ICompoundIterator* self=(Luna< ICompoundIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ICompoundIterator");
		
		return luna_dynamicCast(L,converters,"ICompoundIterator",name);
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
	// ICompoundIterator::ICompoundIterator(lua_Table * data)
	static ICompoundIterator* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in ICompoundIterator::ICompoundIterator(lua_Table * data) function, expected prototype:\nICompoundIterator::ICompoundIterator(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_ICompoundIterator(L,NULL);
	}


	// Function binds:
	// void ICompoundIterator::toFirst()
	static int _bind_toFirst(lua_State *L) {
		if (!_lg_typecheck_toFirst(L)) {
			luaL_error(L, "luna typecheck failed in void ICompoundIterator::toFirst() function, expected prototype:\nvoid ICompoundIterator::toFirst()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ICompoundIterator* self=(Luna< ICompoundIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ICompoundIterator::toFirst(). Got : '%s'\n%s",typeid(Luna< ICompoundIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->toFirst();

		return 0;
	}

	// void ICompoundIterator::toLast()
	static int _bind_toLast(lua_State *L) {
		if (!_lg_typecheck_toLast(L)) {
			luaL_error(L, "luna typecheck failed in void ICompoundIterator::toLast() function, expected prototype:\nvoid ICompoundIterator::toLast()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ICompoundIterator* self=(Luna< ICompoundIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ICompoundIterator::toLast(). Got : '%s'\n%s",typeid(Luna< ICompoundIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->toLast();

		return 0;
	}

	// void ICompoundIterator::toNext()
	static int _bind_toNext(lua_State *L) {
		if (!_lg_typecheck_toNext(L)) {
			luaL_error(L, "luna typecheck failed in void ICompoundIterator::toNext() function, expected prototype:\nvoid ICompoundIterator::toNext()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ICompoundIterator* self=(Luna< ICompoundIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ICompoundIterator::toNext(). Got : '%s'\n%s",typeid(Luna< ICompoundIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->toNext();

		return 0;
	}

	// void ICompoundIterator::toPrev()
	static int _bind_toPrev(lua_State *L) {
		if (!_lg_typecheck_toPrev(L)) {
			luaL_error(L, "luna typecheck failed in void ICompoundIterator::toPrev() function, expected prototype:\nvoid ICompoundIterator::toPrev()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ICompoundIterator* self=(Luna< ICompoundIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ICompoundIterator::toPrev(). Got : '%s'\n%s",typeid(Luna< ICompoundIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->toPrev();

		return 0;
	}

	// ICompound * ICompoundIterator::current() const
	static int _bind_current(lua_State *L) {
		if (!_lg_typecheck_current(L)) {
			luaL_error(L, "luna typecheck failed in ICompound * ICompoundIterator::current() const function, expected prototype:\nICompound * ICompoundIterator::current() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ICompoundIterator* self=(Luna< ICompoundIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ICompound * ICompoundIterator::current() const. Got : '%s'\n%s",typeid(Luna< ICompoundIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ICompound * lret = self->current();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ICompound >::push(L,lret,false);

		return 1;
	}

	// void ICompoundIterator::release()
	static int _bind_release(lua_State *L) {
		if (!_lg_typecheck_release(L)) {
			luaL_error(L, "luna typecheck failed in void ICompoundIterator::release() function, expected prototype:\nvoid ICompoundIterator::release()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ICompoundIterator* self=(Luna< ICompoundIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ICompoundIterator::release(). Got : '%s'\n%s",typeid(Luna< ICompoundIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->release();

		return 0;
	}


	// Operator binds:

};

ICompoundIterator* LunaTraits< ICompoundIterator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ICompoundIterator::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void ICompoundIterator::toFirst()
	// void ICompoundIterator::toLast()
	// void ICompoundIterator::toNext()
	// void ICompoundIterator::toPrev()
	// ICompound * ICompoundIterator::current() const
	// void ICompoundIterator::release()
}

void LunaTraits< ICompoundIterator >::_bind_dtor(ICompoundIterator* obj) {
	delete obj;
}

const char LunaTraits< ICompoundIterator >::className[] = "ICompoundIterator";
const char LunaTraits< ICompoundIterator >::fullName[] = "ICompoundIterator";
const char LunaTraits< ICompoundIterator >::moduleName[] = "doxmlparser";
const char* LunaTraits< ICompoundIterator >::parents[] = {0};
const int LunaTraits< ICompoundIterator >::hash = 38557418;
const int LunaTraits< ICompoundIterator >::uniqueIDs[] = {38557418,0};

luna_RegType LunaTraits< ICompoundIterator >::methods[] = {
	{"toFirst", &luna_wrapper_ICompoundIterator::_bind_toFirst},
	{"toLast", &luna_wrapper_ICompoundIterator::_bind_toLast},
	{"toNext", &luna_wrapper_ICompoundIterator::_bind_toNext},
	{"toPrev", &luna_wrapper_ICompoundIterator::_bind_toPrev},
	{"current", &luna_wrapper_ICompoundIterator::_bind_current},
	{"release", &luna_wrapper_ICompoundIterator::_bind_release},
	{"dynCast", &luna_wrapper_ICompoundIterator::_bind_dynCast},
	{"__eq", &luna_wrapper_ICompoundIterator::_bind___eq},
	{"fromVoid", &luna_wrapper_ICompoundIterator::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ICompoundIterator::_bind_asVoid},
	{"getTable", &luna_wrapper_ICompoundIterator::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< ICompoundIterator >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ICompoundIterator >::enumValues[] = {
	{0,0}
};


