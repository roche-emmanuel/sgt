#include <plug_common.h>

#include <luna/wrappers/wrapper_ICompound.h>

class luna_wrapper_ICompound {
public:
	typedef Luna< ICompound > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ICompound* self=(Luna< ICompound >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<ICompound,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,27352831) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ICompound*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ICompound* rhs =(Luna< ICompound >::check(L,2));
		ICompound* self=(Luna< ICompound >::check(L,1));
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

		ICompound* self= (ICompound*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ICompound >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,27352831) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< ICompound >::check(L,1));
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

		ICompound* self=(Luna< ICompound >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ICompound");
		
		return luna_dynamicCast(L,converters,"ICompound",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_protection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_name(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_id(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_kind(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_kindString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_sections(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_briefDescription(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_detailedDescription(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_memberById(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_memberByName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_release(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// ICompound::ICompound(lua_Table * data)
	static ICompound* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in ICompound::ICompound(lua_Table * data) function, expected prototype:\nICompound::ICompound(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_ICompound(L,NULL);
	}


	// Function binds:
	// const IString * ICompound::protection() const
	static int _bind_protection(lua_State *L) {
		if (!_lg_typecheck_protection(L)) {
			luaL_error(L, "luna typecheck failed in const IString * ICompound::protection() const function, expected prototype:\nconst IString * ICompound::protection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ICompound* self=(Luna< ICompound >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const IString * ICompound::protection() const. Got : '%s'\n%s",typeid(Luna< ICompound >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const IString * lret = self->protection();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	// const IString * ICompound::name() const
	static int _bind_name(lua_State *L) {
		if (!_lg_typecheck_name(L)) {
			luaL_error(L, "luna typecheck failed in const IString * ICompound::name() const function, expected prototype:\nconst IString * ICompound::name() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ICompound* self=(Luna< ICompound >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const IString * ICompound::name() const. Got : '%s'\n%s",typeid(Luna< ICompound >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const IString * lret = self->name();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	// const IString * ICompound::id() const
	static int _bind_id(lua_State *L) {
		if (!_lg_typecheck_id(L)) {
			luaL_error(L, "luna typecheck failed in const IString * ICompound::id() const function, expected prototype:\nconst IString * ICompound::id() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ICompound* self=(Luna< ICompound >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const IString * ICompound::id() const. Got : '%s'\n%s",typeid(Luna< ICompound >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const IString * lret = self->id();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	// ICompound::CompoundKind ICompound::kind() const
	static int _bind_kind(lua_State *L) {
		if (!_lg_typecheck_kind(L)) {
			luaL_error(L, "luna typecheck failed in ICompound::CompoundKind ICompound::kind() const function, expected prototype:\nICompound::CompoundKind ICompound::kind() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ICompound* self=(Luna< ICompound >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ICompound::CompoundKind ICompound::kind() const. Got : '%s'\n%s",typeid(Luna< ICompound >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ICompound::CompoundKind lret = self->kind();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const IString * ICompound::kindString() const
	static int _bind_kindString(lua_State *L) {
		if (!_lg_typecheck_kindString(L)) {
			luaL_error(L, "luna typecheck failed in const IString * ICompound::kindString() const function, expected prototype:\nconst IString * ICompound::kindString() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ICompound* self=(Luna< ICompound >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const IString * ICompound::kindString() const. Got : '%s'\n%s",typeid(Luna< ICompound >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const IString * lret = self->kindString();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	// ISectionIterator * ICompound::sections() const
	static int _bind_sections(lua_State *L) {
		if (!_lg_typecheck_sections(L)) {
			luaL_error(L, "luna typecheck failed in ISectionIterator * ICompound::sections() const function, expected prototype:\nISectionIterator * ICompound::sections() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ICompound* self=(Luna< ICompound >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ISectionIterator * ICompound::sections() const. Got : '%s'\n%s",typeid(Luna< ICompound >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ISectionIterator * lret = self->sections();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ISectionIterator >::push(L,lret,false);

		return 1;
	}

	// IDocRoot * ICompound::briefDescription() const
	static int _bind_briefDescription(lua_State *L) {
		if (!_lg_typecheck_briefDescription(L)) {
			luaL_error(L, "luna typecheck failed in IDocRoot * ICompound::briefDescription() const function, expected prototype:\nIDocRoot * ICompound::briefDescription() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ICompound* self=(Luna< ICompound >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call IDocRoot * ICompound::briefDescription() const. Got : '%s'\n%s",typeid(Luna< ICompound >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IDocRoot * lret = self->briefDescription();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IDocRoot >::push(L,lret,false);

		return 1;
	}

	// IDocRoot * ICompound::detailedDescription() const
	static int _bind_detailedDescription(lua_State *L) {
		if (!_lg_typecheck_detailedDescription(L)) {
			luaL_error(L, "luna typecheck failed in IDocRoot * ICompound::detailedDescription() const function, expected prototype:\nIDocRoot * ICompound::detailedDescription() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ICompound* self=(Luna< ICompound >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call IDocRoot * ICompound::detailedDescription() const. Got : '%s'\n%s",typeid(Luna< ICompound >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IDocRoot * lret = self->detailedDescription();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IDocRoot >::push(L,lret,false);

		return 1;
	}

	// IMember * ICompound::memberById(const char * id) const
	static int _bind_memberById(lua_State *L) {
		if (!_lg_typecheck_memberById(L)) {
			luaL_error(L, "luna typecheck failed in IMember * ICompound::memberById(const char * id) const function, expected prototype:\nIMember * ICompound::memberById(const char * id) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * id=(const char *)lua_tostring(L,2);

		ICompound* self=(Luna< ICompound >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call IMember * ICompound::memberById(const char *) const. Got : '%s'\n%s",typeid(Luna< ICompound >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IMember * lret = self->memberById(id);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IMember >::push(L,lret,false);

		return 1;
	}

	// IMemberIterator * ICompound::memberByName(const char * name) const
	static int _bind_memberByName(lua_State *L) {
		if (!_lg_typecheck_memberByName(L)) {
			luaL_error(L, "luna typecheck failed in IMemberIterator * ICompound::memberByName(const char * name) const function, expected prototype:\nIMemberIterator * ICompound::memberByName(const char * name) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,2);

		ICompound* self=(Luna< ICompound >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call IMemberIterator * ICompound::memberByName(const char *) const. Got : '%s'\n%s",typeid(Luna< ICompound >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IMemberIterator * lret = self->memberByName(name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IMemberIterator >::push(L,lret,false);

		return 1;
	}

	// void ICompound::release()
	static int _bind_release(lua_State *L) {
		if (!_lg_typecheck_release(L)) {
			luaL_error(L, "luna typecheck failed in void ICompound::release() function, expected prototype:\nvoid ICompound::release()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ICompound* self=(Luna< ICompound >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ICompound::release(). Got : '%s'\n%s",typeid(Luna< ICompound >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->release();

		return 0;
	}


	// Operator binds:

};

ICompound* LunaTraits< ICompound >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ICompound::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// const IString * ICompound::protection() const
	// const IString * ICompound::name() const
	// const IString * ICompound::id() const
	// ICompound::CompoundKind ICompound::kind() const
	// const IString * ICompound::kindString() const
	// ISectionIterator * ICompound::sections() const
	// IDocRoot * ICompound::briefDescription() const
	// IDocRoot * ICompound::detailedDescription() const
	// IMember * ICompound::memberById(const char * id) const
	// IMemberIterator * ICompound::memberByName(const char * name) const
	// void ICompound::release()
}

void LunaTraits< ICompound >::_bind_dtor(ICompound* obj) {
	delete obj;
}

const char LunaTraits< ICompound >::className[] = "ICompound";
const char LunaTraits< ICompound >::fullName[] = "ICompound";
const char LunaTraits< ICompound >::moduleName[] = "doxmlparser";
const char* LunaTraits< ICompound >::parents[] = {0};
const int LunaTraits< ICompound >::hash = 27352831;
const int LunaTraits< ICompound >::uniqueIDs[] = {27352831,0};

luna_RegType LunaTraits< ICompound >::methods[] = {
	{"protection", &luna_wrapper_ICompound::_bind_protection},
	{"name", &luna_wrapper_ICompound::_bind_name},
	{"id", &luna_wrapper_ICompound::_bind_id},
	{"kind", &luna_wrapper_ICompound::_bind_kind},
	{"kindString", &luna_wrapper_ICompound::_bind_kindString},
	{"sections", &luna_wrapper_ICompound::_bind_sections},
	{"briefDescription", &luna_wrapper_ICompound::_bind_briefDescription},
	{"detailedDescription", &luna_wrapper_ICompound::_bind_detailedDescription},
	{"memberById", &luna_wrapper_ICompound::_bind_memberById},
	{"memberByName", &luna_wrapper_ICompound::_bind_memberByName},
	{"release", &luna_wrapper_ICompound::_bind_release},
	{"dynCast", &luna_wrapper_ICompound::_bind_dynCast},
	{"__eq", &luna_wrapper_ICompound::_bind___eq},
	{"fromVoid", &luna_wrapper_ICompound::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ICompound::_bind_asVoid},
	{"getTable", &luna_wrapper_ICompound::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< ICompound >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ICompound >::enumValues[] = {
	{"Invalid", ICompound::Invalid},
	{"Class", ICompound::Class},
	{"Struct", ICompound::Struct},
	{"Union", ICompound::Union},
	{"Interface", ICompound::Interface},
	{"Protocol", ICompound::Protocol},
	{"Category", ICompound::Category},
	{"Exception", ICompound::Exception},
	{"File", ICompound::File},
	{"Namespace", ICompound::Namespace},
	{"Group", ICompound::Group},
	{"Page", ICompound::Page},
	{"Example", ICompound::Example},
	{"Dir", ICompound::Dir},
	{0,0}
};


