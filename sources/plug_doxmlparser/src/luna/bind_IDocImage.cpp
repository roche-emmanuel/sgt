#include <plug_common.h>

#include <luna/wrappers/wrapper_IDocImage.h>

class luna_wrapper_IDocImage {
public:
	typedef Luna< IDocImage > luna_t;

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

		IDocImage* self= (IDocImage*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< IDocImage >::push(L,self,false);
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
		//IDocImage* ptr= dynamic_cast< IDocImage* >(Luna< IDoc >::check(L,1));
		IDocImage* ptr= luna_caster< IDoc, IDocImage >::cast(Luna< IDoc >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< IDocImage >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_name(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_caption(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// IDocImage::IDocImage(lua_Table * data)
	static IDocImage* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in IDocImage::IDocImage(lua_Table * data) function, expected prototype:\nIDocImage::IDocImage(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_IDocImage(L,NULL);
	}


	// Function binds:
	// const IString * IDocImage::name() const
	static int _bind_name(lua_State *L) {
		if (!_lg_typecheck_name(L)) {
			luaL_error(L, "luna typecheck failed in const IString * IDocImage::name() const function, expected prototype:\nconst IString * IDocImage::name() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDocImage* self=Luna< IDoc >::checkSubType< IDocImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const IString * IDocImage::name() const. Got : '%s'\n%s",typeid(Luna< IDoc >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const IString * lret = self->name();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	// const IString * IDocImage::caption() const
	static int _bind_caption(lua_State *L) {
		if (!_lg_typecheck_caption(L)) {
			luaL_error(L, "luna typecheck failed in const IString * IDocImage::caption() const function, expected prototype:\nconst IString * IDocImage::caption() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDocImage* self=Luna< IDoc >::checkSubType< IDocImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const IString * IDocImage::caption() const. Got : '%s'\n%s",typeid(Luna< IDoc >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const IString * lret = self->caption();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

IDocImage* LunaTraits< IDocImage >::_bind_ctor(lua_State *L) {
	return luna_wrapper_IDocImage::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// const IString * IDocImage::name() const
	// const IString * IDocImage::caption() const
	// IDoc::Kind IDoc::kind() const
}

void LunaTraits< IDocImage >::_bind_dtor(IDocImage* obj) {
	delete obj;
}

const char LunaTraits< IDocImage >::className[] = "IDocImage";
const char LunaTraits< IDocImage >::fullName[] = "IDocImage";
const char LunaTraits< IDocImage >::moduleName[] = "doxmlparser";
const char* LunaTraits< IDocImage >::parents[] = {"doxmlparser.IDoc", 0};
const int LunaTraits< IDocImage >::hash = 17576926;
const int LunaTraits< IDocImage >::uniqueIDs[] = {2243631,0};

luna_RegType LunaTraits< IDocImage >::methods[] = {
	{"name", &luna_wrapper_IDocImage::_bind_name},
	{"caption", &luna_wrapper_IDocImage::_bind_caption},
	{"fromVoid", &luna_wrapper_IDocImage::_bind_fromVoid},
	{"asVoid", &luna_wrapper_IDocImage::_bind_asVoid},
	{"getTable", &luna_wrapper_IDocImage::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< IDocImage >::converters[] = {
	{"IDoc", &luna_wrapper_IDocImage::_cast_from_IDoc},
	{0,0}
};

luna_RegEnumType LunaTraits< IDocImage >::enumValues[] = {
	{0,0}
};


