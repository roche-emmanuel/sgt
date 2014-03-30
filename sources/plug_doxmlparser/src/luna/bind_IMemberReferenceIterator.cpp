#include <plug_common.h>

#include <luna/wrappers/wrapper_IMemberReferenceIterator.h>

class luna_wrapper_IMemberReferenceIterator {
public:
	typedef Luna< IMemberReferenceIterator > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		IMemberReferenceIterator* self=(Luna< IMemberReferenceIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<IMemberReferenceIterator,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,12383283) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(IMemberReferenceIterator*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		IMemberReferenceIterator* rhs =(Luna< IMemberReferenceIterator >::check(L,2));
		IMemberReferenceIterator* self=(Luna< IMemberReferenceIterator >::check(L,1));
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

		IMemberReferenceIterator* self= (IMemberReferenceIterator*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< IMemberReferenceIterator >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,12383283) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< IMemberReferenceIterator >::check(L,1));
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

		IMemberReferenceIterator* self=(Luna< IMemberReferenceIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("IMemberReferenceIterator");
		
		return luna_dynamicCast(L,converters,"IMemberReferenceIterator",name);
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
	// IMemberReferenceIterator::IMemberReferenceIterator(lua_Table * data)
	static IMemberReferenceIterator* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in IMemberReferenceIterator::IMemberReferenceIterator(lua_Table * data) function, expected prototype:\nIMemberReferenceIterator::IMemberReferenceIterator(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_IMemberReferenceIterator(L,NULL);
	}


	// Function binds:
	// IMemberReference * IMemberReferenceIterator::toFirst()
	static int _bind_toFirst(lua_State *L) {
		if (!_lg_typecheck_toFirst(L)) {
			luaL_error(L, "luna typecheck failed in IMemberReference * IMemberReferenceIterator::toFirst() function, expected prototype:\nIMemberReference * IMemberReferenceIterator::toFirst()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IMemberReferenceIterator* self=(Luna< IMemberReferenceIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call IMemberReference * IMemberReferenceIterator::toFirst(). Got : '%s'\n%s",typeid(Luna< IMemberReferenceIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IMemberReference * lret = self->toFirst();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IMemberReference >::push(L,lret,false);

		return 1;
	}

	// IMemberReference * IMemberReferenceIterator::toLast()
	static int _bind_toLast(lua_State *L) {
		if (!_lg_typecheck_toLast(L)) {
			luaL_error(L, "luna typecheck failed in IMemberReference * IMemberReferenceIterator::toLast() function, expected prototype:\nIMemberReference * IMemberReferenceIterator::toLast()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IMemberReferenceIterator* self=(Luna< IMemberReferenceIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call IMemberReference * IMemberReferenceIterator::toLast(). Got : '%s'\n%s",typeid(Luna< IMemberReferenceIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IMemberReference * lret = self->toLast();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IMemberReference >::push(L,lret,false);

		return 1;
	}

	// IMemberReference * IMemberReferenceIterator::toNext()
	static int _bind_toNext(lua_State *L) {
		if (!_lg_typecheck_toNext(L)) {
			luaL_error(L, "luna typecheck failed in IMemberReference * IMemberReferenceIterator::toNext() function, expected prototype:\nIMemberReference * IMemberReferenceIterator::toNext()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IMemberReferenceIterator* self=(Luna< IMemberReferenceIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call IMemberReference * IMemberReferenceIterator::toNext(). Got : '%s'\n%s",typeid(Luna< IMemberReferenceIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IMemberReference * lret = self->toNext();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IMemberReference >::push(L,lret,false);

		return 1;
	}

	// IMemberReference * IMemberReferenceIterator::toPrev()
	static int _bind_toPrev(lua_State *L) {
		if (!_lg_typecheck_toPrev(L)) {
			luaL_error(L, "luna typecheck failed in IMemberReference * IMemberReferenceIterator::toPrev() function, expected prototype:\nIMemberReference * IMemberReferenceIterator::toPrev()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IMemberReferenceIterator* self=(Luna< IMemberReferenceIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call IMemberReference * IMemberReferenceIterator::toPrev(). Got : '%s'\n%s",typeid(Luna< IMemberReferenceIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IMemberReference * lret = self->toPrev();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IMemberReference >::push(L,lret,false);

		return 1;
	}

	// IMemberReference * IMemberReferenceIterator::current() const
	static int _bind_current(lua_State *L) {
		if (!_lg_typecheck_current(L)) {
			luaL_error(L, "luna typecheck failed in IMemberReference * IMemberReferenceIterator::current() const function, expected prototype:\nIMemberReference * IMemberReferenceIterator::current() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IMemberReferenceIterator* self=(Luna< IMemberReferenceIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call IMemberReference * IMemberReferenceIterator::current() const. Got : '%s'\n%s",typeid(Luna< IMemberReferenceIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IMemberReference * lret = self->current();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IMemberReference >::push(L,lret,false);

		return 1;
	}

	// void IMemberReferenceIterator::release()
	static int _bind_release(lua_State *L) {
		if (!_lg_typecheck_release(L)) {
			luaL_error(L, "luna typecheck failed in void IMemberReferenceIterator::release() function, expected prototype:\nvoid IMemberReferenceIterator::release()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IMemberReferenceIterator* self=(Luna< IMemberReferenceIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void IMemberReferenceIterator::release(). Got : '%s'\n%s",typeid(Luna< IMemberReferenceIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->release();

		return 0;
	}


	// Operator binds:

};

IMemberReferenceIterator* LunaTraits< IMemberReferenceIterator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_IMemberReferenceIterator::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// IMemberReference * IMemberReferenceIterator::toFirst()
	// IMemberReference * IMemberReferenceIterator::toLast()
	// IMemberReference * IMemberReferenceIterator::toNext()
	// IMemberReference * IMemberReferenceIterator::toPrev()
	// IMemberReference * IMemberReferenceIterator::current() const
	// void IMemberReferenceIterator::release()
}

void LunaTraits< IMemberReferenceIterator >::_bind_dtor(IMemberReferenceIterator* obj) {
	delete obj;
}

const char LunaTraits< IMemberReferenceIterator >::className[] = "IMemberReferenceIterator";
const char LunaTraits< IMemberReferenceIterator >::fullName[] = "IMemberReferenceIterator";
const char LunaTraits< IMemberReferenceIterator >::moduleName[] = "doxmlparser";
const char* LunaTraits< IMemberReferenceIterator >::parents[] = {0};
const int LunaTraits< IMemberReferenceIterator >::hash = 12383283;
const int LunaTraits< IMemberReferenceIterator >::uniqueIDs[] = {12383283,0};

luna_RegType LunaTraits< IMemberReferenceIterator >::methods[] = {
	{"toFirst", &luna_wrapper_IMemberReferenceIterator::_bind_toFirst},
	{"toLast", &luna_wrapper_IMemberReferenceIterator::_bind_toLast},
	{"toNext", &luna_wrapper_IMemberReferenceIterator::_bind_toNext},
	{"toPrev", &luna_wrapper_IMemberReferenceIterator::_bind_toPrev},
	{"current", &luna_wrapper_IMemberReferenceIterator::_bind_current},
	{"release", &luna_wrapper_IMemberReferenceIterator::_bind_release},
	{"dynCast", &luna_wrapper_IMemberReferenceIterator::_bind_dynCast},
	{"__eq", &luna_wrapper_IMemberReferenceIterator::_bind___eq},
	{"fromVoid", &luna_wrapper_IMemberReferenceIterator::_bind_fromVoid},
	{"asVoid", &luna_wrapper_IMemberReferenceIterator::_bind_asVoid},
	{"getTable", &luna_wrapper_IMemberReferenceIterator::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< IMemberReferenceIterator >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< IMemberReferenceIterator >::enumValues[] = {
	{0,0}
};


