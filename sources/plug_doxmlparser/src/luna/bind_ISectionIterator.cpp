#include <plug_common.h>

#include <luna/wrappers/wrapper_ISectionIterator.h>

class luna_wrapper_ISectionIterator {
public:
	typedef Luna< ISectionIterator > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ISectionIterator* self=(Luna< ISectionIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<ISectionIterator,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,74644830) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ISectionIterator*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ISectionIterator* rhs =(Luna< ISectionIterator >::check(L,2));
		ISectionIterator* self=(Luna< ISectionIterator >::check(L,1));
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

		ISectionIterator* self= (ISectionIterator*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ISectionIterator >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,74644830) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< ISectionIterator >::check(L,1));
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

		ISectionIterator* self=(Luna< ISectionIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ISectionIterator");
		
		return luna_dynamicCast(L,converters,"ISectionIterator",name);
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
	// ISectionIterator::ISectionIterator(lua_Table * data)
	static ISectionIterator* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in ISectionIterator::ISectionIterator(lua_Table * data) function, expected prototype:\nISectionIterator::ISectionIterator(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_ISectionIterator(L,NULL);
	}


	// Function binds:
	// ISection * ISectionIterator::toFirst()
	static int _bind_toFirst(lua_State *L) {
		if (!_lg_typecheck_toFirst(L)) {
			luaL_error(L, "luna typecheck failed in ISection * ISectionIterator::toFirst() function, expected prototype:\nISection * ISectionIterator::toFirst()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ISectionIterator* self=(Luna< ISectionIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ISection * ISectionIterator::toFirst(). Got : '%s'\n%s",typeid(Luna< ISectionIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ISection * lret = self->toFirst();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ISection >::push(L,lret,false);

		return 1;
	}

	// ISection * ISectionIterator::toLast()
	static int _bind_toLast(lua_State *L) {
		if (!_lg_typecheck_toLast(L)) {
			luaL_error(L, "luna typecheck failed in ISection * ISectionIterator::toLast() function, expected prototype:\nISection * ISectionIterator::toLast()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ISectionIterator* self=(Luna< ISectionIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ISection * ISectionIterator::toLast(). Got : '%s'\n%s",typeid(Luna< ISectionIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ISection * lret = self->toLast();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ISection >::push(L,lret,false);

		return 1;
	}

	// ISection * ISectionIterator::toNext()
	static int _bind_toNext(lua_State *L) {
		if (!_lg_typecheck_toNext(L)) {
			luaL_error(L, "luna typecheck failed in ISection * ISectionIterator::toNext() function, expected prototype:\nISection * ISectionIterator::toNext()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ISectionIterator* self=(Luna< ISectionIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ISection * ISectionIterator::toNext(). Got : '%s'\n%s",typeid(Luna< ISectionIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ISection * lret = self->toNext();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ISection >::push(L,lret,false);

		return 1;
	}

	// ISection * ISectionIterator::toPrev()
	static int _bind_toPrev(lua_State *L) {
		if (!_lg_typecheck_toPrev(L)) {
			luaL_error(L, "luna typecheck failed in ISection * ISectionIterator::toPrev() function, expected prototype:\nISection * ISectionIterator::toPrev()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ISectionIterator* self=(Luna< ISectionIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ISection * ISectionIterator::toPrev(). Got : '%s'\n%s",typeid(Luna< ISectionIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ISection * lret = self->toPrev();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ISection >::push(L,lret,false);

		return 1;
	}

	// ISection * ISectionIterator::current() const
	static int _bind_current(lua_State *L) {
		if (!_lg_typecheck_current(L)) {
			luaL_error(L, "luna typecheck failed in ISection * ISectionIterator::current() const function, expected prototype:\nISection * ISectionIterator::current() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ISectionIterator* self=(Luna< ISectionIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ISection * ISectionIterator::current() const. Got : '%s'\n%s",typeid(Luna< ISectionIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ISection * lret = self->current();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ISection >::push(L,lret,false);

		return 1;
	}

	// void ISectionIterator::release()
	static int _bind_release(lua_State *L) {
		if (!_lg_typecheck_release(L)) {
			luaL_error(L, "luna typecheck failed in void ISectionIterator::release() function, expected prototype:\nvoid ISectionIterator::release()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ISectionIterator* self=(Luna< ISectionIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ISectionIterator::release(). Got : '%s'\n%s",typeid(Luna< ISectionIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->release();

		return 0;
	}


	// Operator binds:

};

ISectionIterator* LunaTraits< ISectionIterator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ISectionIterator::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// ISection * ISectionIterator::toFirst()
	// ISection * ISectionIterator::toLast()
	// ISection * ISectionIterator::toNext()
	// ISection * ISectionIterator::toPrev()
	// ISection * ISectionIterator::current() const
	// void ISectionIterator::release()
}

void LunaTraits< ISectionIterator >::_bind_dtor(ISectionIterator* obj) {
	delete obj;
}

const char LunaTraits< ISectionIterator >::className[] = "ISectionIterator";
const char LunaTraits< ISectionIterator >::fullName[] = "ISectionIterator";
const char LunaTraits< ISectionIterator >::moduleName[] = "doxmlparser";
const char* LunaTraits< ISectionIterator >::parents[] = {0};
const int LunaTraits< ISectionIterator >::hash = 74644830;
const int LunaTraits< ISectionIterator >::uniqueIDs[] = {74644830,0};

luna_RegType LunaTraits< ISectionIterator >::methods[] = {
	{"toFirst", &luna_wrapper_ISectionIterator::_bind_toFirst},
	{"toLast", &luna_wrapper_ISectionIterator::_bind_toLast},
	{"toNext", &luna_wrapper_ISectionIterator::_bind_toNext},
	{"toPrev", &luna_wrapper_ISectionIterator::_bind_toPrev},
	{"current", &luna_wrapper_ISectionIterator::_bind_current},
	{"release", &luna_wrapper_ISectionIterator::_bind_release},
	{"dynCast", &luna_wrapper_ISectionIterator::_bind_dynCast},
	{"__eq", &luna_wrapper_ISectionIterator::_bind___eq},
	{"fromVoid", &luna_wrapper_ISectionIterator::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ISectionIterator::_bind_asVoid},
	{"getTable", &luna_wrapper_ISectionIterator::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< ISectionIterator >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ISectionIterator >::enumValues[] = {
	{0,0}
};


