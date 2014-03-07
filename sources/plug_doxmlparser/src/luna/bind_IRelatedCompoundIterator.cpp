#include <plug_common.h>

#include <luna/wrappers/wrapper_IRelatedCompoundIterator.h>

class luna_wrapper_IRelatedCompoundIterator {
public:
	typedef Luna< IRelatedCompoundIterator > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		IRelatedCompoundIterator* self=(Luna< IRelatedCompoundIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<IRelatedCompoundIterator,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,65072275) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(IRelatedCompoundIterator*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		IRelatedCompoundIterator* rhs =(Luna< IRelatedCompoundIterator >::check(L,2));
		IRelatedCompoundIterator* self=(Luna< IRelatedCompoundIterator >::check(L,1));
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

		IRelatedCompoundIterator* self= (IRelatedCompoundIterator*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< IRelatedCompoundIterator >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,65072275) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< IRelatedCompoundIterator >::check(L,1));
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

		IRelatedCompoundIterator* self=(Luna< IRelatedCompoundIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("IRelatedCompoundIterator");
		
		return luna_dynamicCast(L,converters,"IRelatedCompoundIterator",name);
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
	// IRelatedCompoundIterator::IRelatedCompoundIterator(lua_Table * data)
	static IRelatedCompoundIterator* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in IRelatedCompoundIterator::IRelatedCompoundIterator(lua_Table * data) function, expected prototype:\nIRelatedCompoundIterator::IRelatedCompoundIterator(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_IRelatedCompoundIterator(L,NULL);
	}


	// Function binds:
	// IRelatedCompound * IRelatedCompoundIterator::toFirst()
	static int _bind_toFirst(lua_State *L) {
		if (!_lg_typecheck_toFirst(L)) {
			luaL_error(L, "luna typecheck failed in IRelatedCompound * IRelatedCompoundIterator::toFirst() function, expected prototype:\nIRelatedCompound * IRelatedCompoundIterator::toFirst()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IRelatedCompoundIterator* self=(Luna< IRelatedCompoundIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call IRelatedCompound * IRelatedCompoundIterator::toFirst(). Got : '%s'\n%s",typeid(Luna< IRelatedCompoundIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IRelatedCompound * lret = self->toFirst();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IRelatedCompound >::push(L,lret,false);

		return 1;
	}

	// IRelatedCompound * IRelatedCompoundIterator::toLast()
	static int _bind_toLast(lua_State *L) {
		if (!_lg_typecheck_toLast(L)) {
			luaL_error(L, "luna typecheck failed in IRelatedCompound * IRelatedCompoundIterator::toLast() function, expected prototype:\nIRelatedCompound * IRelatedCompoundIterator::toLast()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IRelatedCompoundIterator* self=(Luna< IRelatedCompoundIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call IRelatedCompound * IRelatedCompoundIterator::toLast(). Got : '%s'\n%s",typeid(Luna< IRelatedCompoundIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IRelatedCompound * lret = self->toLast();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IRelatedCompound >::push(L,lret,false);

		return 1;
	}

	// IRelatedCompound * IRelatedCompoundIterator::toNext()
	static int _bind_toNext(lua_State *L) {
		if (!_lg_typecheck_toNext(L)) {
			luaL_error(L, "luna typecheck failed in IRelatedCompound * IRelatedCompoundIterator::toNext() function, expected prototype:\nIRelatedCompound * IRelatedCompoundIterator::toNext()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IRelatedCompoundIterator* self=(Luna< IRelatedCompoundIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call IRelatedCompound * IRelatedCompoundIterator::toNext(). Got : '%s'\n%s",typeid(Luna< IRelatedCompoundIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IRelatedCompound * lret = self->toNext();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IRelatedCompound >::push(L,lret,false);

		return 1;
	}

	// IRelatedCompound * IRelatedCompoundIterator::toPrev()
	static int _bind_toPrev(lua_State *L) {
		if (!_lg_typecheck_toPrev(L)) {
			luaL_error(L, "luna typecheck failed in IRelatedCompound * IRelatedCompoundIterator::toPrev() function, expected prototype:\nIRelatedCompound * IRelatedCompoundIterator::toPrev()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IRelatedCompoundIterator* self=(Luna< IRelatedCompoundIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call IRelatedCompound * IRelatedCompoundIterator::toPrev(). Got : '%s'\n%s",typeid(Luna< IRelatedCompoundIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IRelatedCompound * lret = self->toPrev();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IRelatedCompound >::push(L,lret,false);

		return 1;
	}

	// IRelatedCompound * IRelatedCompoundIterator::current() const
	static int _bind_current(lua_State *L) {
		if (!_lg_typecheck_current(L)) {
			luaL_error(L, "luna typecheck failed in IRelatedCompound * IRelatedCompoundIterator::current() const function, expected prototype:\nIRelatedCompound * IRelatedCompoundIterator::current() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IRelatedCompoundIterator* self=(Luna< IRelatedCompoundIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call IRelatedCompound * IRelatedCompoundIterator::current() const. Got : '%s'\n%s",typeid(Luna< IRelatedCompoundIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IRelatedCompound * lret = self->current();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IRelatedCompound >::push(L,lret,false);

		return 1;
	}

	// void IRelatedCompoundIterator::release()
	static int _bind_release(lua_State *L) {
		if (!_lg_typecheck_release(L)) {
			luaL_error(L, "luna typecheck failed in void IRelatedCompoundIterator::release() function, expected prototype:\nvoid IRelatedCompoundIterator::release()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IRelatedCompoundIterator* self=(Luna< IRelatedCompoundIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void IRelatedCompoundIterator::release(). Got : '%s'\n%s",typeid(Luna< IRelatedCompoundIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->release();

		return 0;
	}


	// Operator binds:

};

IRelatedCompoundIterator* LunaTraits< IRelatedCompoundIterator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_IRelatedCompoundIterator::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// IRelatedCompound * IRelatedCompoundIterator::toFirst()
	// IRelatedCompound * IRelatedCompoundIterator::toLast()
	// IRelatedCompound * IRelatedCompoundIterator::toNext()
	// IRelatedCompound * IRelatedCompoundIterator::toPrev()
	// IRelatedCompound * IRelatedCompoundIterator::current() const
	// void IRelatedCompoundIterator::release()
}

void LunaTraits< IRelatedCompoundIterator >::_bind_dtor(IRelatedCompoundIterator* obj) {
	delete obj;
}

const char LunaTraits< IRelatedCompoundIterator >::className[] = "IRelatedCompoundIterator";
const char LunaTraits< IRelatedCompoundIterator >::fullName[] = "IRelatedCompoundIterator";
const char LunaTraits< IRelatedCompoundIterator >::moduleName[] = "doxmlparser";
const char* LunaTraits< IRelatedCompoundIterator >::parents[] = {0};
const int LunaTraits< IRelatedCompoundIterator >::hash = 65072275;
const int LunaTraits< IRelatedCompoundIterator >::uniqueIDs[] = {65072275,0};

luna_RegType LunaTraits< IRelatedCompoundIterator >::methods[] = {
	{"toFirst", &luna_wrapper_IRelatedCompoundIterator::_bind_toFirst},
	{"toLast", &luna_wrapper_IRelatedCompoundIterator::_bind_toLast},
	{"toNext", &luna_wrapper_IRelatedCompoundIterator::_bind_toNext},
	{"toPrev", &luna_wrapper_IRelatedCompoundIterator::_bind_toPrev},
	{"current", &luna_wrapper_IRelatedCompoundIterator::_bind_current},
	{"release", &luna_wrapper_IRelatedCompoundIterator::_bind_release},
	{"dynCast", &luna_wrapper_IRelatedCompoundIterator::_bind_dynCast},
	{"__eq", &luna_wrapper_IRelatedCompoundIterator::_bind___eq},
	{"fromVoid", &luna_wrapper_IRelatedCompoundIterator::_bind_fromVoid},
	{"asVoid", &luna_wrapper_IRelatedCompoundIterator::_bind_asVoid},
	{"getTable", &luna_wrapper_IRelatedCompoundIterator::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< IRelatedCompoundIterator >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< IRelatedCompoundIterator >::enumValues[] = {
	{0,0}
};


