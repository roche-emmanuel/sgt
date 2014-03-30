#include <plug_common.h>

#include <luna/wrappers/wrapper_IDefine.h>

class luna_wrapper_IDefine {
public:
	typedef Luna< IDefine > luna_t;

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

		IDefine* self= (IDefine*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< IDefine >::push(L,self,false);
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
		//IDefine* ptr= dynamic_cast< IDefine* >(Luna< IMember >::check(L,1));
		IDefine* ptr= luna_caster< IMember, IDefine >::cast(Luna< IMember >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< IDefine >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// IDefine::IDefine(lua_Table * data)
	static IDefine* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in IDefine::IDefine(lua_Table * data) function, expected prototype:\nIDefine::IDefine(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_IDefine(L,NULL);
	}


	// Function binds:

	// Operator binds:

};

IDefine* LunaTraits< IDefine >::_bind_ctor(lua_State *L) {
	return luna_wrapper_IDefine::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
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

void LunaTraits< IDefine >::_bind_dtor(IDefine* obj) {
	delete obj;
}

const char LunaTraits< IDefine >::className[] = "IDefine";
const char LunaTraits< IDefine >::fullName[] = "IDefine";
const char LunaTraits< IDefine >::moduleName[] = "doxmlparser";
const char* LunaTraits< IDefine >::parents[] = {"doxmlparser.IMember", 0};
const int LunaTraits< IDefine >::hash = 30965675;
const int LunaTraits< IDefine >::uniqueIDs[] = {88829564,0};

luna_RegType LunaTraits< IDefine >::methods[] = {
	{"fromVoid", &luna_wrapper_IDefine::_bind_fromVoid},
	{"asVoid", &luna_wrapper_IDefine::_bind_asVoid},
	{"getTable", &luna_wrapper_IDefine::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< IDefine >::converters[] = {
	{"IMember", &luna_wrapper_IDefine::_cast_from_IMember},
	{0,0}
};

luna_RegEnumType LunaTraits< IDefine >::enumValues[] = {
	{0,0}
};


