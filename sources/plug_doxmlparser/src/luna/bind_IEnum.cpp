#include <plug_common.h>

#include <luna/wrappers/wrapper_IEnum.h>

class luna_wrapper_IEnum {
public:
	typedef Luna< IEnum > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		IMember* self=(Luna< IMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<IMember,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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

		IEnum* self= (IEnum*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< IEnum >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,88829564) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< IMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_IMember(lua_State *L) {
		// all checked are already performed before reaching this point.
		//IEnum* ptr= dynamic_cast< IEnum* >(Luna< IMember >::check(L,1));
		IEnum* ptr= luna_caster< IMember, IEnum >::cast(Luna< IMember >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< IEnum >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_enumValues(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// IEnum::IEnum(lua_Table * data)
	static IEnum* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in IEnum::IEnum(lua_Table * data) function, expected prototype:\nIEnum::IEnum(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_IEnum(L,NULL);
	}


	// Function binds:
	// IMemberIterator * IEnum::enumValues() const
	static int _bind_enumValues(lua_State *L) {
		if (!_lg_typecheck_enumValues(L)) {
			luaL_error(L, "luna typecheck failed in IMemberIterator * IEnum::enumValues() const function, expected prototype:\nIMemberIterator * IEnum::enumValues() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IEnum* self=Luna< IMember >::checkSubType< IEnum >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call IMemberIterator * IEnum::enumValues() const. Got : '%s'\n%s",typeid(Luna< IMember >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IMemberIterator * lret = self->enumValues();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IMemberIterator >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

IEnum* LunaTraits< IEnum >::_bind_ctor(lua_State *L) {
	return luna_wrapper_IEnum::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// IMemberIterator * IEnum::enumValues() const
	// ICompound * IMember::compound() const
	// ISection * IMember::section() const
	// IMember::MemberKind IMember::kind() const
	// const IString * IMember::kindString() const
	// const IString * IMember::id() const
	// const IString * IMember::protection() const
	// const IString * IMember::virtualness() const
	// ILinkedTextIterator * IMember::type() const
	// const IString * IMember::typeString() const
	// const IString * IMember::name() const
	// const IString * IMember::readAccessor() const
	// const IString * IMember::writeAccessor() const
	// const IString * IMember::definition() const
	// const IString * IMember::argsstring() const
	// bool IMember::isConst() const
	// bool IMember::isVolatile() const
	// bool IMember::isStatic() const
	// bool IMember::isExplicit() const
	// bool IMember::isInline() const
	// bool IMember::isMutable() const
	// bool IMember::isReadable() const
	// bool IMember::isWritable() const
	// IParamIterator * IMember::parameters() const
	// IParamIterator * IMember::templateParameters() const
	// ILinkedTextIterator * IMember::initializer() const
	// ILinkedTextIterator * IMember::exceptions() const
	// IMemberReferenceIterator * IMember::references() const
	// IMemberReferenceIterator * IMember::referencedBy() const
	// const IString * IMember::bodyFile() const
	// int IMember::bodyStart() const
	// int IMember::bodyEnd() const
	// const IString * IMember::definitionFile() const
	// int IMember::definitionLine() const
	// IMemberReference * IMember::reimplements() const
	// IMemberReferenceIterator * IMember::reimplementedBy() const
	// IDocRoot * IMember::briefDescription() const
	// IDocRoot * IMember::detailedDescription() const
	// IDocRoot * IMember::inbodyDescription() const
}

void LunaTraits< IEnum >::_bind_dtor(IEnum* obj) {
	delete obj;
}

const char LunaTraits< IEnum >::className[] = "IEnum";
const char LunaTraits< IEnum >::fullName[] = "IEnum";
const char LunaTraits< IEnum >::moduleName[] = "doxmlparser";
const char* LunaTraits< IEnum >::parents[] = {"doxmlparser.IMember", 0};
const int LunaTraits< IEnum >::hash = 69582058;
const int LunaTraits< IEnum >::uniqueIDs[] = {88829564,0};

luna_RegType LunaTraits< IEnum >::methods[] = {
	{"enumValues", &luna_wrapper_IEnum::_bind_enumValues},
	{"fromVoid", &luna_wrapper_IEnum::_bind_fromVoid},
	{"asVoid", &luna_wrapper_IEnum::_bind_asVoid},
	{"getTable", &luna_wrapper_IEnum::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< IEnum >::converters[] = {
	{"IMember", &luna_wrapper_IEnum::_cast_from_IMember},
	{0,0}
};

luna_RegEnumType LunaTraits< IEnum >::enumValues[] = {
	{0,0}
};


