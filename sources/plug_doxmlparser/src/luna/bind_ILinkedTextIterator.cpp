#include <plug_common.h>

#include <luna/wrappers/wrapper_ILinkedTextIterator.h>

class luna_wrapper_ILinkedTextIterator {
public:
	typedef Luna< ILinkedTextIterator > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ILinkedTextIterator* self=(Luna< ILinkedTextIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<ILinkedTextIterator,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,5142425) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ILinkedTextIterator*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ILinkedTextIterator* rhs =(Luna< ILinkedTextIterator >::check(L,2));
		ILinkedTextIterator* self=(Luna< ILinkedTextIterator >::check(L,1));
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

		ILinkedTextIterator* self= (ILinkedTextIterator*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ILinkedTextIterator >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,5142425) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< ILinkedTextIterator >::check(L,1));
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

		ILinkedTextIterator* self=(Luna< ILinkedTextIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ILinkedTextIterator");
		
		return luna_dynamicCast(L,converters,"ILinkedTextIterator",name);
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
	// ILinkedTextIterator::ILinkedTextIterator(lua_Table * data)
	static ILinkedTextIterator* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in ILinkedTextIterator::ILinkedTextIterator(lua_Table * data) function, expected prototype:\nILinkedTextIterator::ILinkedTextIterator(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_ILinkedTextIterator(L,NULL);
	}


	// Function binds:
	// ILinkedText * ILinkedTextIterator::toFirst()
	static int _bind_toFirst(lua_State *L) {
		if (!_lg_typecheck_toFirst(L)) {
			luaL_error(L, "luna typecheck failed in ILinkedText * ILinkedTextIterator::toFirst() function, expected prototype:\nILinkedText * ILinkedTextIterator::toFirst()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ILinkedTextIterator* self=(Luna< ILinkedTextIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ILinkedText * ILinkedTextIterator::toFirst(). Got : '%s'\n%s",typeid(Luna< ILinkedTextIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ILinkedText * lret = self->toFirst();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ILinkedText >::push(L,lret,false);

		return 1;
	}

	// ILinkedText * ILinkedTextIterator::toLast()
	static int _bind_toLast(lua_State *L) {
		if (!_lg_typecheck_toLast(L)) {
			luaL_error(L, "luna typecheck failed in ILinkedText * ILinkedTextIterator::toLast() function, expected prototype:\nILinkedText * ILinkedTextIterator::toLast()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ILinkedTextIterator* self=(Luna< ILinkedTextIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ILinkedText * ILinkedTextIterator::toLast(). Got : '%s'\n%s",typeid(Luna< ILinkedTextIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ILinkedText * lret = self->toLast();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ILinkedText >::push(L,lret,false);

		return 1;
	}

	// ILinkedText * ILinkedTextIterator::toNext()
	static int _bind_toNext(lua_State *L) {
		if (!_lg_typecheck_toNext(L)) {
			luaL_error(L, "luna typecheck failed in ILinkedText * ILinkedTextIterator::toNext() function, expected prototype:\nILinkedText * ILinkedTextIterator::toNext()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ILinkedTextIterator* self=(Luna< ILinkedTextIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ILinkedText * ILinkedTextIterator::toNext(). Got : '%s'\n%s",typeid(Luna< ILinkedTextIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ILinkedText * lret = self->toNext();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ILinkedText >::push(L,lret,false);

		return 1;
	}

	// ILinkedText * ILinkedTextIterator::toPrev()
	static int _bind_toPrev(lua_State *L) {
		if (!_lg_typecheck_toPrev(L)) {
			luaL_error(L, "luna typecheck failed in ILinkedText * ILinkedTextIterator::toPrev() function, expected prototype:\nILinkedText * ILinkedTextIterator::toPrev()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ILinkedTextIterator* self=(Luna< ILinkedTextIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ILinkedText * ILinkedTextIterator::toPrev(). Got : '%s'\n%s",typeid(Luna< ILinkedTextIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ILinkedText * lret = self->toPrev();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ILinkedText >::push(L,lret,false);

		return 1;
	}

	// ILinkedText * ILinkedTextIterator::current() const
	static int _bind_current(lua_State *L) {
		if (!_lg_typecheck_current(L)) {
			luaL_error(L, "luna typecheck failed in ILinkedText * ILinkedTextIterator::current() const function, expected prototype:\nILinkedText * ILinkedTextIterator::current() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ILinkedTextIterator* self=(Luna< ILinkedTextIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ILinkedText * ILinkedTextIterator::current() const. Got : '%s'\n%s",typeid(Luna< ILinkedTextIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ILinkedText * lret = self->current();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ILinkedText >::push(L,lret,false);

		return 1;
	}

	// void ILinkedTextIterator::release()
	static int _bind_release(lua_State *L) {
		if (!_lg_typecheck_release(L)) {
			luaL_error(L, "luna typecheck failed in void ILinkedTextIterator::release() function, expected prototype:\nvoid ILinkedTextIterator::release()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ILinkedTextIterator* self=(Luna< ILinkedTextIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ILinkedTextIterator::release(). Got : '%s'\n%s",typeid(Luna< ILinkedTextIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->release();

		return 0;
	}


	// Operator binds:

};

ILinkedTextIterator* LunaTraits< ILinkedTextIterator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ILinkedTextIterator::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// ILinkedText * ILinkedTextIterator::toFirst()
	// ILinkedText * ILinkedTextIterator::toLast()
	// ILinkedText * ILinkedTextIterator::toNext()
	// ILinkedText * ILinkedTextIterator::toPrev()
	// ILinkedText * ILinkedTextIterator::current() const
	// void ILinkedTextIterator::release()
}

void LunaTraits< ILinkedTextIterator >::_bind_dtor(ILinkedTextIterator* obj) {
	delete obj;
}

const char LunaTraits< ILinkedTextIterator >::className[] = "ILinkedTextIterator";
const char LunaTraits< ILinkedTextIterator >::fullName[] = "ILinkedTextIterator";
const char LunaTraits< ILinkedTextIterator >::moduleName[] = "doxmlparser";
const char* LunaTraits< ILinkedTextIterator >::parents[] = {0};
const int LunaTraits< ILinkedTextIterator >::hash = 5142425;
const int LunaTraits< ILinkedTextIterator >::uniqueIDs[] = {5142425,0};

luna_RegType LunaTraits< ILinkedTextIterator >::methods[] = {
	{"toFirst", &luna_wrapper_ILinkedTextIterator::_bind_toFirst},
	{"toLast", &luna_wrapper_ILinkedTextIterator::_bind_toLast},
	{"toNext", &luna_wrapper_ILinkedTextIterator::_bind_toNext},
	{"toPrev", &luna_wrapper_ILinkedTextIterator::_bind_toPrev},
	{"current", &luna_wrapper_ILinkedTextIterator::_bind_current},
	{"release", &luna_wrapper_ILinkedTextIterator::_bind_release},
	{"dynCast", &luna_wrapper_ILinkedTextIterator::_bind_dynCast},
	{"__eq", &luna_wrapper_ILinkedTextIterator::_bind___eq},
	{"fromVoid", &luna_wrapper_ILinkedTextIterator::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ILinkedTextIterator::_bind_asVoid},
	{"getTable", &luna_wrapper_ILinkedTextIterator::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< ILinkedTextIterator >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ILinkedTextIterator >::enumValues[] = {
	{0,0}
};


