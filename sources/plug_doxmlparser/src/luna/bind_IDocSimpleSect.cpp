#include <plug_common.h>

#include <luna/wrappers/wrapper_IDocSimpleSect.h>

class luna_wrapper_IDocSimpleSect {
public:
	typedef Luna< IDocSimpleSect > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		IDoc* self=(Luna< IDoc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<IDoc,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
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

		IDocSimpleSect* self= (IDocSimpleSect*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< IDocSimpleSect >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,2243631) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< IDoc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_IDoc(lua_State *L) {
		// all checked are already performed before reaching this point.
		//IDocSimpleSect* ptr= dynamic_cast< IDocSimpleSect* >(Luna< IDoc >::check(L,1));
		IDocSimpleSect* ptr= luna_caster< IDoc, IDocSimpleSect >::cast(Luna< IDoc >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< IDocSimpleSect >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_type(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_typeString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_title(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_description(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// IDocSimpleSect::IDocSimpleSect(lua_Table * data)
	static IDocSimpleSect* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in IDocSimpleSect::IDocSimpleSect(lua_Table * data) function, expected prototype:\nIDocSimpleSect::IDocSimpleSect(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_IDocSimpleSect(L,NULL);
	}


	// Function binds:
	// IDocSimpleSect::Types IDocSimpleSect::type() const
	static int _bind_type(lua_State *L) {
		if (!_lg_typecheck_type(L)) {
			luaL_error(L, "luna typecheck failed in IDocSimpleSect::Types IDocSimpleSect::type() const function, expected prototype:\nIDocSimpleSect::Types IDocSimpleSect::type() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDocSimpleSect* self=Luna< IDoc >::checkSubType< IDocSimpleSect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call IDocSimpleSect::Types IDocSimpleSect::type() const. Got : '%s'\n%s",typeid(Luna< IDoc >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IDocSimpleSect::Types lret = self->type();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const IString * IDocSimpleSect::typeString() const
	static int _bind_typeString(lua_State *L) {
		if (!_lg_typecheck_typeString(L)) {
			luaL_error(L, "luna typecheck failed in const IString * IDocSimpleSect::typeString() const function, expected prototype:\nconst IString * IDocSimpleSect::typeString() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDocSimpleSect* self=Luna< IDoc >::checkSubType< IDocSimpleSect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const IString * IDocSimpleSect::typeString() const. Got : '%s'\n%s",typeid(Luna< IDoc >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const IString * lret = self->typeString();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	// IDocTitle * IDocSimpleSect::title() const
	static int _bind_title(lua_State *L) {
		if (!_lg_typecheck_title(L)) {
			luaL_error(L, "luna typecheck failed in IDocTitle * IDocSimpleSect::title() const function, expected prototype:\nIDocTitle * IDocSimpleSect::title() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDocSimpleSect* self=Luna< IDoc >::checkSubType< IDocSimpleSect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call IDocTitle * IDocSimpleSect::title() const. Got : '%s'\n%s",typeid(Luna< IDoc >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IDocTitle * lret = self->title();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IDocTitle >::push(L,lret,false);

		return 1;
	}

	// IDocPara * IDocSimpleSect::description() const
	static int _bind_description(lua_State *L) {
		if (!_lg_typecheck_description(L)) {
			luaL_error(L, "luna typecheck failed in IDocPara * IDocSimpleSect::description() const function, expected prototype:\nIDocPara * IDocSimpleSect::description() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDocSimpleSect* self=Luna< IDoc >::checkSubType< IDocSimpleSect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call IDocPara * IDocSimpleSect::description() const. Got : '%s'\n%s",typeid(Luna< IDoc >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IDocPara * lret = self->description();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IDocPara >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

IDocSimpleSect* LunaTraits< IDocSimpleSect >::_bind_ctor(lua_State *L) {
	return luna_wrapper_IDocSimpleSect::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// IDocSimpleSect::Types IDocSimpleSect::type() const
	// const IString * IDocSimpleSect::typeString() const
	// IDocTitle * IDocSimpleSect::title() const
	// IDocPara * IDocSimpleSect::description() const
	// IDoc::Kind IDoc::kind() const
}

void LunaTraits< IDocSimpleSect >::_bind_dtor(IDocSimpleSect* obj) {
	delete obj;
}

const char LunaTraits< IDocSimpleSect >::className[] = "IDocSimpleSect";
const char LunaTraits< IDocSimpleSect >::fullName[] = "IDocSimpleSect";
const char LunaTraits< IDocSimpleSect >::moduleName[] = "doxmlparser";
const char* LunaTraits< IDocSimpleSect >::parents[] = {"doxmlparser.IDoc", 0};
const int LunaTraits< IDocSimpleSect >::hash = 84451617;
const int LunaTraits< IDocSimpleSect >::uniqueIDs[] = {2243631,0};

luna_RegType LunaTraits< IDocSimpleSect >::methods[] = {
	{"type", &luna_wrapper_IDocSimpleSect::_bind_type},
	{"typeString", &luna_wrapper_IDocSimpleSect::_bind_typeString},
	{"title", &luna_wrapper_IDocSimpleSect::_bind_title},
	{"description", &luna_wrapper_IDocSimpleSect::_bind_description},
	{"fromVoid", &luna_wrapper_IDocSimpleSect::_bind_fromVoid},
	{"asVoid", &luna_wrapper_IDocSimpleSect::_bind_asVoid},
	{"getTable", &luna_wrapper_IDocSimpleSect::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< IDocSimpleSect >::converters[] = {
	{"IDoc", &luna_wrapper_IDocSimpleSect::_cast_from_IDoc},
	{0,0}
};

luna_RegEnumType LunaTraits< IDocSimpleSect >::enumValues[] = {
	{"Invalid", IDocSimpleSect::Invalid},
	{"See", IDocSimpleSect::See},
	{"Return", IDocSimpleSect::Return},
	{"Author", IDocSimpleSect::Author},
	{"Version", IDocSimpleSect::Version},
	{"Since", IDocSimpleSect::Since},
	{"Date", IDocSimpleSect::Date},
	{"Bug", IDocSimpleSect::Bug},
	{"Note", IDocSimpleSect::Note},
	{"Warning", IDocSimpleSect::Warning},
	{"Par", IDocSimpleSect::Par},
	{"Deprecated", IDocSimpleSect::Deprecated},
	{"Pre", IDocSimpleSect::Pre},
	{"Post", IDocSimpleSect::Post},
	{"Invar", IDocSimpleSect::Invar},
	{"Remark", IDocSimpleSect::Remark},
	{"Attention", IDocSimpleSect::Attention},
	{"Todo", IDocSimpleSect::Todo},
	{"Test", IDocSimpleSect::Test},
	{"RCS", IDocSimpleSect::RCS},
	{"EnumValues", IDocSimpleSect::EnumValues},
	{"Examples", IDocSimpleSect::Examples},
	{0,0}
};


