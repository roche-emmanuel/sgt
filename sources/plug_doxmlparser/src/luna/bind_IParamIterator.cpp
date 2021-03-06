#include <plug_common.h>

#include <luna/wrappers/wrapper_IParamIterator.h>

class luna_wrapper_IParamIterator {
public:
	typedef Luna< IParamIterator > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		IParamIterator* self=(Luna< IParamIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<IParamIterator,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,14097198) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(IParamIterator*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		IParamIterator* rhs =(Luna< IParamIterator >::check(L,2));
		IParamIterator* self=(Luna< IParamIterator >::check(L,1));
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

		IParamIterator* self= (IParamIterator*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< IParamIterator >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,14097198) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< IParamIterator >::check(L,1));
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

		IParamIterator* self=(Luna< IParamIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("IParamIterator");
		
		return luna_dynamicCast(L,converters,"IParamIterator",name);
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
	// IParamIterator::IParamIterator(lua_Table * data)
	static IParamIterator* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in IParamIterator::IParamIterator(lua_Table * data) function, expected prototype:\nIParamIterator::IParamIterator(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_IParamIterator(L,NULL);
	}


	// Function binds:
	// IParam * IParamIterator::toFirst()
	static int _bind_toFirst(lua_State *L) {
		if (!_lg_typecheck_toFirst(L)) {
			luaL_error(L, "luna typecheck failed in IParam * IParamIterator::toFirst() function, expected prototype:\nIParam * IParamIterator::toFirst()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IParamIterator* self=(Luna< IParamIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call IParam * IParamIterator::toFirst(). Got : '%s'\n%s",typeid(Luna< IParamIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IParam * lret = self->toFirst();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IParam >::push(L,lret,false);

		return 1;
	}

	// IParam * IParamIterator::toLast()
	static int _bind_toLast(lua_State *L) {
		if (!_lg_typecheck_toLast(L)) {
			luaL_error(L, "luna typecheck failed in IParam * IParamIterator::toLast() function, expected prototype:\nIParam * IParamIterator::toLast()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IParamIterator* self=(Luna< IParamIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call IParam * IParamIterator::toLast(). Got : '%s'\n%s",typeid(Luna< IParamIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IParam * lret = self->toLast();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IParam >::push(L,lret,false);

		return 1;
	}

	// IParam * IParamIterator::toNext()
	static int _bind_toNext(lua_State *L) {
		if (!_lg_typecheck_toNext(L)) {
			luaL_error(L, "luna typecheck failed in IParam * IParamIterator::toNext() function, expected prototype:\nIParam * IParamIterator::toNext()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IParamIterator* self=(Luna< IParamIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call IParam * IParamIterator::toNext(). Got : '%s'\n%s",typeid(Luna< IParamIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IParam * lret = self->toNext();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IParam >::push(L,lret,false);

		return 1;
	}

	// IParam * IParamIterator::toPrev()
	static int _bind_toPrev(lua_State *L) {
		if (!_lg_typecheck_toPrev(L)) {
			luaL_error(L, "luna typecheck failed in IParam * IParamIterator::toPrev() function, expected prototype:\nIParam * IParamIterator::toPrev()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IParamIterator* self=(Luna< IParamIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call IParam * IParamIterator::toPrev(). Got : '%s'\n%s",typeid(Luna< IParamIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IParam * lret = self->toPrev();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IParam >::push(L,lret,false);

		return 1;
	}

	// IParam * IParamIterator::current() const
	static int _bind_current(lua_State *L) {
		if (!_lg_typecheck_current(L)) {
			luaL_error(L, "luna typecheck failed in IParam * IParamIterator::current() const function, expected prototype:\nIParam * IParamIterator::current() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IParamIterator* self=(Luna< IParamIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call IParam * IParamIterator::current() const. Got : '%s'\n%s",typeid(Luna< IParamIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IParam * lret = self->current();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IParam >::push(L,lret,false);

		return 1;
	}

	// void IParamIterator::release()
	static int _bind_release(lua_State *L) {
		if (!_lg_typecheck_release(L)) {
			luaL_error(L, "luna typecheck failed in void IParamIterator::release() function, expected prototype:\nvoid IParamIterator::release()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IParamIterator* self=(Luna< IParamIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void IParamIterator::release(). Got : '%s'\n%s",typeid(Luna< IParamIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->release();

		return 0;
	}


	// Operator binds:

};

IParamIterator* LunaTraits< IParamIterator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_IParamIterator::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// IParam * IParamIterator::toFirst()
	// IParam * IParamIterator::toLast()
	// IParam * IParamIterator::toNext()
	// IParam * IParamIterator::toPrev()
	// IParam * IParamIterator::current() const
	// void IParamIterator::release()
}

void LunaTraits< IParamIterator >::_bind_dtor(IParamIterator* obj) {
	delete obj;
}

const char LunaTraits< IParamIterator >::className[] = "IParamIterator";
const char LunaTraits< IParamIterator >::fullName[] = "IParamIterator";
const char LunaTraits< IParamIterator >::moduleName[] = "doxmlparser";
const char* LunaTraits< IParamIterator >::parents[] = {0};
const int LunaTraits< IParamIterator >::hash = 14097198;
const int LunaTraits< IParamIterator >::uniqueIDs[] = {14097198,0};

luna_RegType LunaTraits< IParamIterator >::methods[] = {
	{"toFirst", &luna_wrapper_IParamIterator::_bind_toFirst},
	{"toLast", &luna_wrapper_IParamIterator::_bind_toLast},
	{"toNext", &luna_wrapper_IParamIterator::_bind_toNext},
	{"toPrev", &luna_wrapper_IParamIterator::_bind_toPrev},
	{"current", &luna_wrapper_IParamIterator::_bind_current},
	{"release", &luna_wrapper_IParamIterator::_bind_release},
	{"dynCast", &luna_wrapper_IParamIterator::_bind_dynCast},
	{"__eq", &luna_wrapper_IParamIterator::_bind___eq},
	{"fromVoid", &luna_wrapper_IParamIterator::_bind_fromVoid},
	{"asVoid", &luna_wrapper_IParamIterator::_bind_asVoid},
	{"getTable", &luna_wrapper_IParamIterator::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< IParamIterator >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< IParamIterator >::enumValues[] = {
	{0,0}
};


