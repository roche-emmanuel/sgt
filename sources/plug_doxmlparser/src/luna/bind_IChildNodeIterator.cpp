#include <plug_common.h>

#include <luna/wrappers/wrapper_IChildNodeIterator.h>

class luna_wrapper_IChildNodeIterator {
public:
	typedef Luna< IChildNodeIterator > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		IChildNodeIterator* self=(Luna< IChildNodeIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<IChildNodeIterator,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,44189495) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(IChildNodeIterator*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		IChildNodeIterator* rhs =(Luna< IChildNodeIterator >::check(L,2));
		IChildNodeIterator* self=(Luna< IChildNodeIterator >::check(L,1));
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

		IChildNodeIterator* self= (IChildNodeIterator*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< IChildNodeIterator >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,44189495) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< IChildNodeIterator >::check(L,1));
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

		IChildNodeIterator* self=(Luna< IChildNodeIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("IChildNodeIterator");
		
		return luna_dynamicCast(L,converters,"IChildNodeIterator",name);
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
	// IChildNodeIterator::IChildNodeIterator(lua_Table * data)
	static IChildNodeIterator* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in IChildNodeIterator::IChildNodeIterator(lua_Table * data) function, expected prototype:\nIChildNodeIterator::IChildNodeIterator(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_IChildNodeIterator(L,NULL);
	}


	// Function binds:
	// IChildNode * IChildNodeIterator::toFirst()
	static int _bind_toFirst(lua_State *L) {
		if (!_lg_typecheck_toFirst(L)) {
			luaL_error(L, "luna typecheck failed in IChildNode * IChildNodeIterator::toFirst() function, expected prototype:\nIChildNode * IChildNodeIterator::toFirst()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IChildNodeIterator* self=(Luna< IChildNodeIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call IChildNode * IChildNodeIterator::toFirst(). Got : '%s'\n%s",typeid(Luna< IChildNodeIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IChildNode * lret = self->toFirst();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IChildNode >::push(L,lret,false);

		return 1;
	}

	// IChildNode * IChildNodeIterator::toLast()
	static int _bind_toLast(lua_State *L) {
		if (!_lg_typecheck_toLast(L)) {
			luaL_error(L, "luna typecheck failed in IChildNode * IChildNodeIterator::toLast() function, expected prototype:\nIChildNode * IChildNodeIterator::toLast()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IChildNodeIterator* self=(Luna< IChildNodeIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call IChildNode * IChildNodeIterator::toLast(). Got : '%s'\n%s",typeid(Luna< IChildNodeIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IChildNode * lret = self->toLast();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IChildNode >::push(L,lret,false);

		return 1;
	}

	// IChildNode * IChildNodeIterator::toNext()
	static int _bind_toNext(lua_State *L) {
		if (!_lg_typecheck_toNext(L)) {
			luaL_error(L, "luna typecheck failed in IChildNode * IChildNodeIterator::toNext() function, expected prototype:\nIChildNode * IChildNodeIterator::toNext()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IChildNodeIterator* self=(Luna< IChildNodeIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call IChildNode * IChildNodeIterator::toNext(). Got : '%s'\n%s",typeid(Luna< IChildNodeIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IChildNode * lret = self->toNext();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IChildNode >::push(L,lret,false);

		return 1;
	}

	// IChildNode * IChildNodeIterator::toPrev()
	static int _bind_toPrev(lua_State *L) {
		if (!_lg_typecheck_toPrev(L)) {
			luaL_error(L, "luna typecheck failed in IChildNode * IChildNodeIterator::toPrev() function, expected prototype:\nIChildNode * IChildNodeIterator::toPrev()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IChildNodeIterator* self=(Luna< IChildNodeIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call IChildNode * IChildNodeIterator::toPrev(). Got : '%s'\n%s",typeid(Luna< IChildNodeIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IChildNode * lret = self->toPrev();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IChildNode >::push(L,lret,false);

		return 1;
	}

	// IChildNode * IChildNodeIterator::current() const
	static int _bind_current(lua_State *L) {
		if (!_lg_typecheck_current(L)) {
			luaL_error(L, "luna typecheck failed in IChildNode * IChildNodeIterator::current() const function, expected prototype:\nIChildNode * IChildNodeIterator::current() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IChildNodeIterator* self=(Luna< IChildNodeIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call IChildNode * IChildNodeIterator::current() const. Got : '%s'\n%s",typeid(Luna< IChildNodeIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IChildNode * lret = self->current();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IChildNode >::push(L,lret,false);

		return 1;
	}

	// void IChildNodeIterator::release()
	static int _bind_release(lua_State *L) {
		if (!_lg_typecheck_release(L)) {
			luaL_error(L, "luna typecheck failed in void IChildNodeIterator::release() function, expected prototype:\nvoid IChildNodeIterator::release()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IChildNodeIterator* self=(Luna< IChildNodeIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void IChildNodeIterator::release(). Got : '%s'\n%s",typeid(Luna< IChildNodeIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->release();

		return 0;
	}


	// Operator binds:

};

IChildNodeIterator* LunaTraits< IChildNodeIterator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_IChildNodeIterator::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// IChildNode * IChildNodeIterator::toFirst()
	// IChildNode * IChildNodeIterator::toLast()
	// IChildNode * IChildNodeIterator::toNext()
	// IChildNode * IChildNodeIterator::toPrev()
	// IChildNode * IChildNodeIterator::current() const
	// void IChildNodeIterator::release()
}

void LunaTraits< IChildNodeIterator >::_bind_dtor(IChildNodeIterator* obj) {
	delete obj;
}

const char LunaTraits< IChildNodeIterator >::className[] = "IChildNodeIterator";
const char LunaTraits< IChildNodeIterator >::fullName[] = "IChildNodeIterator";
const char LunaTraits< IChildNodeIterator >::moduleName[] = "doxmlparser";
const char* LunaTraits< IChildNodeIterator >::parents[] = {0};
const int LunaTraits< IChildNodeIterator >::hash = 44189495;
const int LunaTraits< IChildNodeIterator >::uniqueIDs[] = {44189495,0};

luna_RegType LunaTraits< IChildNodeIterator >::methods[] = {
	{"toFirst", &luna_wrapper_IChildNodeIterator::_bind_toFirst},
	{"toLast", &luna_wrapper_IChildNodeIterator::_bind_toLast},
	{"toNext", &luna_wrapper_IChildNodeIterator::_bind_toNext},
	{"toPrev", &luna_wrapper_IChildNodeIterator::_bind_toPrev},
	{"current", &luna_wrapper_IChildNodeIterator::_bind_current},
	{"release", &luna_wrapper_IChildNodeIterator::_bind_release},
	{"dynCast", &luna_wrapper_IChildNodeIterator::_bind_dynCast},
	{"__eq", &luna_wrapper_IChildNodeIterator::_bind___eq},
	{"fromVoid", &luna_wrapper_IChildNodeIterator::_bind_fromVoid},
	{"asVoid", &luna_wrapper_IChildNodeIterator::_bind_asVoid},
	{"getTable", &luna_wrapper_IChildNodeIterator::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< IChildNodeIterator >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< IChildNodeIterator >::enumValues[] = {
	{0,0}
};


