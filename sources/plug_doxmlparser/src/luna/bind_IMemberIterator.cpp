#include <plug_common.h>

#include <luna/wrappers/wrapper_IMemberIterator.h>

class luna_wrapper_IMemberIterator {
public:
	typedef Luna< IMemberIterator > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		IMemberIterator* self=(Luna< IMemberIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<IMemberIterator,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,43776686) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(IMemberIterator*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		IMemberIterator* rhs =(Luna< IMemberIterator >::check(L,2));
		IMemberIterator* self=(Luna< IMemberIterator >::check(L,1));
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

		IMemberIterator* self= (IMemberIterator*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< IMemberIterator >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,43776686) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< IMemberIterator >::check(L,1));
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

		IMemberIterator* self=(Luna< IMemberIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("IMemberIterator");
		
		return luna_dynamicCast(L,converters,"IMemberIterator",name);
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
	// IMemberIterator::IMemberIterator(lua_Table * data)
	static IMemberIterator* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in IMemberIterator::IMemberIterator(lua_Table * data) function, expected prototype:\nIMemberIterator::IMemberIterator(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_IMemberIterator(L,NULL);
	}


	// Function binds:
	// IMember * IMemberIterator::toFirst()
	static int _bind_toFirst(lua_State *L) {
		if (!_lg_typecheck_toFirst(L)) {
			luaL_error(L, "luna typecheck failed in IMember * IMemberIterator::toFirst() function, expected prototype:\nIMember * IMemberIterator::toFirst()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IMemberIterator* self=(Luna< IMemberIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call IMember * IMemberIterator::toFirst(). Got : '%s'\n%s",typeid(Luna< IMemberIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IMember * lret = self->toFirst();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IMember >::push(L,lret,false);

		return 1;
	}

	// IMember * IMemberIterator::toLast()
	static int _bind_toLast(lua_State *L) {
		if (!_lg_typecheck_toLast(L)) {
			luaL_error(L, "luna typecheck failed in IMember * IMemberIterator::toLast() function, expected prototype:\nIMember * IMemberIterator::toLast()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IMemberIterator* self=(Luna< IMemberIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call IMember * IMemberIterator::toLast(). Got : '%s'\n%s",typeid(Luna< IMemberIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IMember * lret = self->toLast();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IMember >::push(L,lret,false);

		return 1;
	}

	// IMember * IMemberIterator::toNext()
	static int _bind_toNext(lua_State *L) {
		if (!_lg_typecheck_toNext(L)) {
			luaL_error(L, "luna typecheck failed in IMember * IMemberIterator::toNext() function, expected prototype:\nIMember * IMemberIterator::toNext()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IMemberIterator* self=(Luna< IMemberIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call IMember * IMemberIterator::toNext(). Got : '%s'\n%s",typeid(Luna< IMemberIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IMember * lret = self->toNext();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IMember >::push(L,lret,false);

		return 1;
	}

	// IMember * IMemberIterator::toPrev()
	static int _bind_toPrev(lua_State *L) {
		if (!_lg_typecheck_toPrev(L)) {
			luaL_error(L, "luna typecheck failed in IMember * IMemberIterator::toPrev() function, expected prototype:\nIMember * IMemberIterator::toPrev()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IMemberIterator* self=(Luna< IMemberIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call IMember * IMemberIterator::toPrev(). Got : '%s'\n%s",typeid(Luna< IMemberIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IMember * lret = self->toPrev();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IMember >::push(L,lret,false);

		return 1;
	}

	// IMember * IMemberIterator::current() const
	static int _bind_current(lua_State *L) {
		if (!_lg_typecheck_current(L)) {
			luaL_error(L, "luna typecheck failed in IMember * IMemberIterator::current() const function, expected prototype:\nIMember * IMemberIterator::current() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IMemberIterator* self=(Luna< IMemberIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call IMember * IMemberIterator::current() const. Got : '%s'\n%s",typeid(Luna< IMemberIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IMember * lret = self->current();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IMember >::push(L,lret,false);

		return 1;
	}

	// void IMemberIterator::release()
	static int _bind_release(lua_State *L) {
		if (!_lg_typecheck_release(L)) {
			luaL_error(L, "luna typecheck failed in void IMemberIterator::release() function, expected prototype:\nvoid IMemberIterator::release()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IMemberIterator* self=(Luna< IMemberIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void IMemberIterator::release(). Got : '%s'\n%s",typeid(Luna< IMemberIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->release();

		return 0;
	}


	// Operator binds:

};

IMemberIterator* LunaTraits< IMemberIterator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_IMemberIterator::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// IMember * IMemberIterator::toFirst()
	// IMember * IMemberIterator::toLast()
	// IMember * IMemberIterator::toNext()
	// IMember * IMemberIterator::toPrev()
	// IMember * IMemberIterator::current() const
	// void IMemberIterator::release()
}

void LunaTraits< IMemberIterator >::_bind_dtor(IMemberIterator* obj) {
	delete obj;
}

const char LunaTraits< IMemberIterator >::className[] = "IMemberIterator";
const char LunaTraits< IMemberIterator >::fullName[] = "IMemberIterator";
const char LunaTraits< IMemberIterator >::moduleName[] = "doxmlparser";
const char* LunaTraits< IMemberIterator >::parents[] = {0};
const int LunaTraits< IMemberIterator >::hash = 43776686;
const int LunaTraits< IMemberIterator >::uniqueIDs[] = {43776686,0};

luna_RegType LunaTraits< IMemberIterator >::methods[] = {
	{"toFirst", &luna_wrapper_IMemberIterator::_bind_toFirst},
	{"toLast", &luna_wrapper_IMemberIterator::_bind_toLast},
	{"toNext", &luna_wrapper_IMemberIterator::_bind_toNext},
	{"toPrev", &luna_wrapper_IMemberIterator::_bind_toPrev},
	{"current", &luna_wrapper_IMemberIterator::_bind_current},
	{"release", &luna_wrapper_IMemberIterator::_bind_release},
	{"dynCast", &luna_wrapper_IMemberIterator::_bind_dynCast},
	{"__eq", &luna_wrapper_IMemberIterator::_bind___eq},
	{"fromVoid", &luna_wrapper_IMemberIterator::_bind_fromVoid},
	{"asVoid", &luna_wrapper_IMemberIterator::_bind_asVoid},
	{"getTable", &luna_wrapper_IMemberIterator::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< IMemberIterator >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< IMemberIterator >::enumValues[] = {
	{0,0}
};


