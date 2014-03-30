#include <plug_common.h>

#include <luna/wrappers/wrapper_IEdgeLabelIterator.h>

class luna_wrapper_IEdgeLabelIterator {
public:
	typedef Luna< IEdgeLabelIterator > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		IEdgeLabelIterator* self=(Luna< IEdgeLabelIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<IEdgeLabelIterator,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,32070006) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(IEdgeLabelIterator*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		IEdgeLabelIterator* rhs =(Luna< IEdgeLabelIterator >::check(L,2));
		IEdgeLabelIterator* self=(Luna< IEdgeLabelIterator >::check(L,1));
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

		IEdgeLabelIterator* self= (IEdgeLabelIterator*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< IEdgeLabelIterator >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,32070006) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< IEdgeLabelIterator >::check(L,1));
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

		IEdgeLabelIterator* self=(Luna< IEdgeLabelIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("IEdgeLabelIterator");
		
		return luna_dynamicCast(L,converters,"IEdgeLabelIterator",name);
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
	// IEdgeLabelIterator::IEdgeLabelIterator(lua_Table * data)
	static IEdgeLabelIterator* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in IEdgeLabelIterator::IEdgeLabelIterator(lua_Table * data) function, expected prototype:\nIEdgeLabelIterator::IEdgeLabelIterator(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_IEdgeLabelIterator(L,NULL);
	}


	// Function binds:
	// IEdgeLabel * IEdgeLabelIterator::toFirst()
	static int _bind_toFirst(lua_State *L) {
		if (!_lg_typecheck_toFirst(L)) {
			luaL_error(L, "luna typecheck failed in IEdgeLabel * IEdgeLabelIterator::toFirst() function, expected prototype:\nIEdgeLabel * IEdgeLabelIterator::toFirst()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IEdgeLabelIterator* self=(Luna< IEdgeLabelIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call IEdgeLabel * IEdgeLabelIterator::toFirst(). Got : '%s'\n%s",typeid(Luna< IEdgeLabelIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IEdgeLabel * lret = self->toFirst();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IEdgeLabel >::push(L,lret,false);

		return 1;
	}

	// IEdgeLabel * IEdgeLabelIterator::toLast()
	static int _bind_toLast(lua_State *L) {
		if (!_lg_typecheck_toLast(L)) {
			luaL_error(L, "luna typecheck failed in IEdgeLabel * IEdgeLabelIterator::toLast() function, expected prototype:\nIEdgeLabel * IEdgeLabelIterator::toLast()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IEdgeLabelIterator* self=(Luna< IEdgeLabelIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call IEdgeLabel * IEdgeLabelIterator::toLast(). Got : '%s'\n%s",typeid(Luna< IEdgeLabelIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IEdgeLabel * lret = self->toLast();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IEdgeLabel >::push(L,lret,false);

		return 1;
	}

	// IEdgeLabel * IEdgeLabelIterator::toNext()
	static int _bind_toNext(lua_State *L) {
		if (!_lg_typecheck_toNext(L)) {
			luaL_error(L, "luna typecheck failed in IEdgeLabel * IEdgeLabelIterator::toNext() function, expected prototype:\nIEdgeLabel * IEdgeLabelIterator::toNext()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IEdgeLabelIterator* self=(Luna< IEdgeLabelIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call IEdgeLabel * IEdgeLabelIterator::toNext(). Got : '%s'\n%s",typeid(Luna< IEdgeLabelIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IEdgeLabel * lret = self->toNext();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IEdgeLabel >::push(L,lret,false);

		return 1;
	}

	// IEdgeLabel * IEdgeLabelIterator::toPrev()
	static int _bind_toPrev(lua_State *L) {
		if (!_lg_typecheck_toPrev(L)) {
			luaL_error(L, "luna typecheck failed in IEdgeLabel * IEdgeLabelIterator::toPrev() function, expected prototype:\nIEdgeLabel * IEdgeLabelIterator::toPrev()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IEdgeLabelIterator* self=(Luna< IEdgeLabelIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call IEdgeLabel * IEdgeLabelIterator::toPrev(). Got : '%s'\n%s",typeid(Luna< IEdgeLabelIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IEdgeLabel * lret = self->toPrev();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IEdgeLabel >::push(L,lret,false);

		return 1;
	}

	// IEdgeLabel * IEdgeLabelIterator::current() const
	static int _bind_current(lua_State *L) {
		if (!_lg_typecheck_current(L)) {
			luaL_error(L, "luna typecheck failed in IEdgeLabel * IEdgeLabelIterator::current() const function, expected prototype:\nIEdgeLabel * IEdgeLabelIterator::current() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IEdgeLabelIterator* self=(Luna< IEdgeLabelIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call IEdgeLabel * IEdgeLabelIterator::current() const. Got : '%s'\n%s",typeid(Luna< IEdgeLabelIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IEdgeLabel * lret = self->current();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IEdgeLabel >::push(L,lret,false);

		return 1;
	}

	// void IEdgeLabelIterator::release()
	static int _bind_release(lua_State *L) {
		if (!_lg_typecheck_release(L)) {
			luaL_error(L, "luna typecheck failed in void IEdgeLabelIterator::release() function, expected prototype:\nvoid IEdgeLabelIterator::release()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IEdgeLabelIterator* self=(Luna< IEdgeLabelIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void IEdgeLabelIterator::release(). Got : '%s'\n%s",typeid(Luna< IEdgeLabelIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->release();

		return 0;
	}


	// Operator binds:

};

IEdgeLabelIterator* LunaTraits< IEdgeLabelIterator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_IEdgeLabelIterator::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// IEdgeLabel * IEdgeLabelIterator::toFirst()
	// IEdgeLabel * IEdgeLabelIterator::toLast()
	// IEdgeLabel * IEdgeLabelIterator::toNext()
	// IEdgeLabel * IEdgeLabelIterator::toPrev()
	// IEdgeLabel * IEdgeLabelIterator::current() const
	// void IEdgeLabelIterator::release()
}

void LunaTraits< IEdgeLabelIterator >::_bind_dtor(IEdgeLabelIterator* obj) {
	delete obj;
}

const char LunaTraits< IEdgeLabelIterator >::className[] = "IEdgeLabelIterator";
const char LunaTraits< IEdgeLabelIterator >::fullName[] = "IEdgeLabelIterator";
const char LunaTraits< IEdgeLabelIterator >::moduleName[] = "doxmlparser";
const char* LunaTraits< IEdgeLabelIterator >::parents[] = {0};
const int LunaTraits< IEdgeLabelIterator >::hash = 32070006;
const int LunaTraits< IEdgeLabelIterator >::uniqueIDs[] = {32070006,0};

luna_RegType LunaTraits< IEdgeLabelIterator >::methods[] = {
	{"toFirst", &luna_wrapper_IEdgeLabelIterator::_bind_toFirst},
	{"toLast", &luna_wrapper_IEdgeLabelIterator::_bind_toLast},
	{"toNext", &luna_wrapper_IEdgeLabelIterator::_bind_toNext},
	{"toPrev", &luna_wrapper_IEdgeLabelIterator::_bind_toPrev},
	{"current", &luna_wrapper_IEdgeLabelIterator::_bind_current},
	{"release", &luna_wrapper_IEdgeLabelIterator::_bind_release},
	{"dynCast", &luna_wrapper_IEdgeLabelIterator::_bind_dynCast},
	{"__eq", &luna_wrapper_IEdgeLabelIterator::_bind___eq},
	{"fromVoid", &luna_wrapper_IEdgeLabelIterator::_bind_fromVoid},
	{"asVoid", &luna_wrapper_IEdgeLabelIterator::_bind_asVoid},
	{"getTable", &luna_wrapper_IEdgeLabelIterator::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< IEdgeLabelIterator >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< IEdgeLabelIterator >::enumValues[] = {
	{0,0}
};


