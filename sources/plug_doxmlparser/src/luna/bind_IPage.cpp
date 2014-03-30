#include <plug_common.h>

#include <luna/wrappers/wrapper_IPage.h>

class luna_wrapper_IPage {
public:
	typedef Luna< IPage > luna_t;

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

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		IPage* self= (IPage*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< IPage >::push(L,self,false);
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

	// Derived class converters:
	static int _cast_from_ICompound(lua_State *L) {
		// all checked are already performed before reaching this point.
		//IPage* ptr= dynamic_cast< IPage* >(Luna< ICompound >::check(L,1));
		IPage* ptr= luna_caster< ICompound, IPage >::cast(Luna< ICompound >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< IPage >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_title(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// IPage::IPage(lua_Table * data)
	static IPage* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in IPage::IPage(lua_Table * data) function, expected prototype:\nIPage::IPage(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_IPage(L,NULL);
	}


	// Function binds:
	// const IDocTitle * IPage::title() const
	static int _bind_title(lua_State *L) {
		if (!_lg_typecheck_title(L)) {
			luaL_error(L, "luna typecheck failed in const IDocTitle * IPage::title() const function, expected prototype:\nconst IDocTitle * IPage::title() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IPage* self=Luna< ICompound >::checkSubType< IPage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const IDocTitle * IPage::title() const. Got : '%s'\n%s",typeid(Luna< ICompound >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const IDocTitle * lret = self->title();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IDocTitle >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

IPage* LunaTraits< IPage >::_bind_ctor(lua_State *L) {
	return luna_wrapper_IPage::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// const IDocTitle * IPage::title() const
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

void LunaTraits< IPage >::_bind_dtor(IPage* obj) {
	delete obj;
}

const char LunaTraits< IPage >::className[] = "IPage";
const char LunaTraits< IPage >::fullName[] = "IPage";
const char LunaTraits< IPage >::moduleName[] = "doxmlparser";
const char* LunaTraits< IPage >::parents[] = {"doxmlparser.ICompound", 0};
const int LunaTraits< IPage >::hash = 69896824;
const int LunaTraits< IPage >::uniqueIDs[] = {27352831,0};

luna_RegType LunaTraits< IPage >::methods[] = {
	{"title", &luna_wrapper_IPage::_bind_title},
	{"fromVoid", &luna_wrapper_IPage::_bind_fromVoid},
	{"asVoid", &luna_wrapper_IPage::_bind_asVoid},
	{"getTable", &luna_wrapper_IPage::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< IPage >::converters[] = {
	{"ICompound", &luna_wrapper_IPage::_cast_from_ICompound},
	{0,0}
};

luna_RegEnumType LunaTraits< IPage >::enumValues[] = {
	{0,0}
};


