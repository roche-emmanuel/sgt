#include <plug_common.h>

#include <luna/wrappers/wrapper_IMember.h>

class luna_wrapper_IMember {
public:
	typedef Luna< IMember > luna_t;

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

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,88829564) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(IMember*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		IMember* rhs =(Luna< IMember >::check(L,2));
		IMember* self=(Luna< IMember >::check(L,1));
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

		IMember* self= (IMember*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< IMember >::push(L,self,false);
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

		IMember* self=(Luna< IMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("IMember");
		
		return luna_dynamicCast(L,converters,"IMember",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_compound(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_section(lua_State *L) {
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

	inline static bool _lg_typecheck_id(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_protection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_virtualness(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_type(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_typeString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_name(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_readAccessor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_writeAccessor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_definition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_argsstring(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isConst(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isVolatile(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isStatic(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isExplicit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isInline(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isMutable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isReadable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isWritable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_parameters(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_templateParameters(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_initializer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_exceptions(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_references(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_referencedBy(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_bodyFile(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_bodyStart(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_bodyEnd(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_definitionFile(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_definitionLine(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_reimplements(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_reimplementedBy(lua_State *L) {
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

	inline static bool _lg_typecheck_inbodyDescription(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// IMember::IMember(lua_Table * data)
	static IMember* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in IMember::IMember(lua_Table * data) function, expected prototype:\nIMember::IMember(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_IMember(L,NULL);
	}


	// Function binds:
	// ICompound * IMember::compound() const
	static int _bind_compound(lua_State *L) {
		if (!_lg_typecheck_compound(L)) {
			luaL_error(L, "luna typecheck failed in ICompound * IMember::compound() const function, expected prototype:\nICompound * IMember::compound() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IMember* self=(Luna< IMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ICompound * IMember::compound() const. Got : '%s'\n%s",typeid(Luna< IMember >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ICompound * lret = self->compound();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ICompound >::push(L,lret,false);

		return 1;
	}

	// ISection * IMember::section() const
	static int _bind_section(lua_State *L) {
		if (!_lg_typecheck_section(L)) {
			luaL_error(L, "luna typecheck failed in ISection * IMember::section() const function, expected prototype:\nISection * IMember::section() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IMember* self=(Luna< IMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ISection * IMember::section() const. Got : '%s'\n%s",typeid(Luna< IMember >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ISection * lret = self->section();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ISection >::push(L,lret,false);

		return 1;
	}

	// IMember::MemberKind IMember::kind() const
	static int _bind_kind(lua_State *L) {
		if (!_lg_typecheck_kind(L)) {
			luaL_error(L, "luna typecheck failed in IMember::MemberKind IMember::kind() const function, expected prototype:\nIMember::MemberKind IMember::kind() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IMember* self=(Luna< IMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call IMember::MemberKind IMember::kind() const. Got : '%s'\n%s",typeid(Luna< IMember >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IMember::MemberKind lret = self->kind();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const IString * IMember::kindString() const
	static int _bind_kindString(lua_State *L) {
		if (!_lg_typecheck_kindString(L)) {
			luaL_error(L, "luna typecheck failed in const IString * IMember::kindString() const function, expected prototype:\nconst IString * IMember::kindString() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IMember* self=(Luna< IMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const IString * IMember::kindString() const. Got : '%s'\n%s",typeid(Luna< IMember >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const IString * lret = self->kindString();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	// const IString * IMember::id() const
	static int _bind_id(lua_State *L) {
		if (!_lg_typecheck_id(L)) {
			luaL_error(L, "luna typecheck failed in const IString * IMember::id() const function, expected prototype:\nconst IString * IMember::id() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IMember* self=(Luna< IMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const IString * IMember::id() const. Got : '%s'\n%s",typeid(Luna< IMember >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const IString * lret = self->id();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	// const IString * IMember::protection() const
	static int _bind_protection(lua_State *L) {
		if (!_lg_typecheck_protection(L)) {
			luaL_error(L, "luna typecheck failed in const IString * IMember::protection() const function, expected prototype:\nconst IString * IMember::protection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IMember* self=(Luna< IMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const IString * IMember::protection() const. Got : '%s'\n%s",typeid(Luna< IMember >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const IString * lret = self->protection();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	// const IString * IMember::virtualness() const
	static int _bind_virtualness(lua_State *L) {
		if (!_lg_typecheck_virtualness(L)) {
			luaL_error(L, "luna typecheck failed in const IString * IMember::virtualness() const function, expected prototype:\nconst IString * IMember::virtualness() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IMember* self=(Luna< IMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const IString * IMember::virtualness() const. Got : '%s'\n%s",typeid(Luna< IMember >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const IString * lret = self->virtualness();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	// ILinkedTextIterator * IMember::type() const
	static int _bind_type(lua_State *L) {
		if (!_lg_typecheck_type(L)) {
			luaL_error(L, "luna typecheck failed in ILinkedTextIterator * IMember::type() const function, expected prototype:\nILinkedTextIterator * IMember::type() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IMember* self=(Luna< IMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ILinkedTextIterator * IMember::type() const. Got : '%s'\n%s",typeid(Luna< IMember >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ILinkedTextIterator * lret = self->type();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ILinkedTextIterator >::push(L,lret,false);

		return 1;
	}

	// const IString * IMember::typeString() const
	static int _bind_typeString(lua_State *L) {
		if (!_lg_typecheck_typeString(L)) {
			luaL_error(L, "luna typecheck failed in const IString * IMember::typeString() const function, expected prototype:\nconst IString * IMember::typeString() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IMember* self=(Luna< IMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const IString * IMember::typeString() const. Got : '%s'\n%s",typeid(Luna< IMember >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const IString * lret = self->typeString();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	// const IString * IMember::name() const
	static int _bind_name(lua_State *L) {
		if (!_lg_typecheck_name(L)) {
			luaL_error(L, "luna typecheck failed in const IString * IMember::name() const function, expected prototype:\nconst IString * IMember::name() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IMember* self=(Luna< IMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const IString * IMember::name() const. Got : '%s'\n%s",typeid(Luna< IMember >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const IString * lret = self->name();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	// const IString * IMember::readAccessor() const
	static int _bind_readAccessor(lua_State *L) {
		if (!_lg_typecheck_readAccessor(L)) {
			luaL_error(L, "luna typecheck failed in const IString * IMember::readAccessor() const function, expected prototype:\nconst IString * IMember::readAccessor() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IMember* self=(Luna< IMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const IString * IMember::readAccessor() const. Got : '%s'\n%s",typeid(Luna< IMember >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const IString * lret = self->readAccessor();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	// const IString * IMember::writeAccessor() const
	static int _bind_writeAccessor(lua_State *L) {
		if (!_lg_typecheck_writeAccessor(L)) {
			luaL_error(L, "luna typecheck failed in const IString * IMember::writeAccessor() const function, expected prototype:\nconst IString * IMember::writeAccessor() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IMember* self=(Luna< IMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const IString * IMember::writeAccessor() const. Got : '%s'\n%s",typeid(Luna< IMember >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const IString * lret = self->writeAccessor();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	// const IString * IMember::definition() const
	static int _bind_definition(lua_State *L) {
		if (!_lg_typecheck_definition(L)) {
			luaL_error(L, "luna typecheck failed in const IString * IMember::definition() const function, expected prototype:\nconst IString * IMember::definition() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IMember* self=(Luna< IMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const IString * IMember::definition() const. Got : '%s'\n%s",typeid(Luna< IMember >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const IString * lret = self->definition();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	// const IString * IMember::argsstring() const
	static int _bind_argsstring(lua_State *L) {
		if (!_lg_typecheck_argsstring(L)) {
			luaL_error(L, "luna typecheck failed in const IString * IMember::argsstring() const function, expected prototype:\nconst IString * IMember::argsstring() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IMember* self=(Luna< IMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const IString * IMember::argsstring() const. Got : '%s'\n%s",typeid(Luna< IMember >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const IString * lret = self->argsstring();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	// bool IMember::isConst() const
	static int _bind_isConst(lua_State *L) {
		if (!_lg_typecheck_isConst(L)) {
			luaL_error(L, "luna typecheck failed in bool IMember::isConst() const function, expected prototype:\nbool IMember::isConst() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IMember* self=(Luna< IMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool IMember::isConst() const. Got : '%s'\n%s",typeid(Luna< IMember >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isConst();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool IMember::isVolatile() const
	static int _bind_isVolatile(lua_State *L) {
		if (!_lg_typecheck_isVolatile(L)) {
			luaL_error(L, "luna typecheck failed in bool IMember::isVolatile() const function, expected prototype:\nbool IMember::isVolatile() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IMember* self=(Luna< IMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool IMember::isVolatile() const. Got : '%s'\n%s",typeid(Luna< IMember >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isVolatile();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool IMember::isStatic() const
	static int _bind_isStatic(lua_State *L) {
		if (!_lg_typecheck_isStatic(L)) {
			luaL_error(L, "luna typecheck failed in bool IMember::isStatic() const function, expected prototype:\nbool IMember::isStatic() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IMember* self=(Luna< IMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool IMember::isStatic() const. Got : '%s'\n%s",typeid(Luna< IMember >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isStatic();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool IMember::isExplicit() const
	static int _bind_isExplicit(lua_State *L) {
		if (!_lg_typecheck_isExplicit(L)) {
			luaL_error(L, "luna typecheck failed in bool IMember::isExplicit() const function, expected prototype:\nbool IMember::isExplicit() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IMember* self=(Luna< IMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool IMember::isExplicit() const. Got : '%s'\n%s",typeid(Luna< IMember >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isExplicit();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool IMember::isInline() const
	static int _bind_isInline(lua_State *L) {
		if (!_lg_typecheck_isInline(L)) {
			luaL_error(L, "luna typecheck failed in bool IMember::isInline() const function, expected prototype:\nbool IMember::isInline() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IMember* self=(Luna< IMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool IMember::isInline() const. Got : '%s'\n%s",typeid(Luna< IMember >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isInline();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool IMember::isMutable() const
	static int _bind_isMutable(lua_State *L) {
		if (!_lg_typecheck_isMutable(L)) {
			luaL_error(L, "luna typecheck failed in bool IMember::isMutable() const function, expected prototype:\nbool IMember::isMutable() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IMember* self=(Luna< IMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool IMember::isMutable() const. Got : '%s'\n%s",typeid(Luna< IMember >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isMutable();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool IMember::isReadable() const
	static int _bind_isReadable(lua_State *L) {
		if (!_lg_typecheck_isReadable(L)) {
			luaL_error(L, "luna typecheck failed in bool IMember::isReadable() const function, expected prototype:\nbool IMember::isReadable() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IMember* self=(Luna< IMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool IMember::isReadable() const. Got : '%s'\n%s",typeid(Luna< IMember >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isReadable();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool IMember::isWritable() const
	static int _bind_isWritable(lua_State *L) {
		if (!_lg_typecheck_isWritable(L)) {
			luaL_error(L, "luna typecheck failed in bool IMember::isWritable() const function, expected prototype:\nbool IMember::isWritable() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IMember* self=(Luna< IMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool IMember::isWritable() const. Got : '%s'\n%s",typeid(Luna< IMember >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isWritable();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// IParamIterator * IMember::parameters() const
	static int _bind_parameters(lua_State *L) {
		if (!_lg_typecheck_parameters(L)) {
			luaL_error(L, "luna typecheck failed in IParamIterator * IMember::parameters() const function, expected prototype:\nIParamIterator * IMember::parameters() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IMember* self=(Luna< IMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call IParamIterator * IMember::parameters() const. Got : '%s'\n%s",typeid(Luna< IMember >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IParamIterator * lret = self->parameters();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IParamIterator >::push(L,lret,false);

		return 1;
	}

	// IParamIterator * IMember::templateParameters() const
	static int _bind_templateParameters(lua_State *L) {
		if (!_lg_typecheck_templateParameters(L)) {
			luaL_error(L, "luna typecheck failed in IParamIterator * IMember::templateParameters() const function, expected prototype:\nIParamIterator * IMember::templateParameters() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IMember* self=(Luna< IMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call IParamIterator * IMember::templateParameters() const. Got : '%s'\n%s",typeid(Luna< IMember >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IParamIterator * lret = self->templateParameters();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IParamIterator >::push(L,lret,false);

		return 1;
	}

	// ILinkedTextIterator * IMember::initializer() const
	static int _bind_initializer(lua_State *L) {
		if (!_lg_typecheck_initializer(L)) {
			luaL_error(L, "luna typecheck failed in ILinkedTextIterator * IMember::initializer() const function, expected prototype:\nILinkedTextIterator * IMember::initializer() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IMember* self=(Luna< IMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ILinkedTextIterator * IMember::initializer() const. Got : '%s'\n%s",typeid(Luna< IMember >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ILinkedTextIterator * lret = self->initializer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ILinkedTextIterator >::push(L,lret,false);

		return 1;
	}

	// ILinkedTextIterator * IMember::exceptions() const
	static int _bind_exceptions(lua_State *L) {
		if (!_lg_typecheck_exceptions(L)) {
			luaL_error(L, "luna typecheck failed in ILinkedTextIterator * IMember::exceptions() const function, expected prototype:\nILinkedTextIterator * IMember::exceptions() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IMember* self=(Luna< IMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ILinkedTextIterator * IMember::exceptions() const. Got : '%s'\n%s",typeid(Luna< IMember >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ILinkedTextIterator * lret = self->exceptions();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ILinkedTextIterator >::push(L,lret,false);

		return 1;
	}

	// IMemberReferenceIterator * IMember::references() const
	static int _bind_references(lua_State *L) {
		if (!_lg_typecheck_references(L)) {
			luaL_error(L, "luna typecheck failed in IMemberReferenceIterator * IMember::references() const function, expected prototype:\nIMemberReferenceIterator * IMember::references() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IMember* self=(Luna< IMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call IMemberReferenceIterator * IMember::references() const. Got : '%s'\n%s",typeid(Luna< IMember >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IMemberReferenceIterator * lret = self->references();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IMemberReferenceIterator >::push(L,lret,false);

		return 1;
	}

	// IMemberReferenceIterator * IMember::referencedBy() const
	static int _bind_referencedBy(lua_State *L) {
		if (!_lg_typecheck_referencedBy(L)) {
			luaL_error(L, "luna typecheck failed in IMemberReferenceIterator * IMember::referencedBy() const function, expected prototype:\nIMemberReferenceIterator * IMember::referencedBy() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IMember* self=(Luna< IMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call IMemberReferenceIterator * IMember::referencedBy() const. Got : '%s'\n%s",typeid(Luna< IMember >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IMemberReferenceIterator * lret = self->referencedBy();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IMemberReferenceIterator >::push(L,lret,false);

		return 1;
	}

	// const IString * IMember::bodyFile() const
	static int _bind_bodyFile(lua_State *L) {
		if (!_lg_typecheck_bodyFile(L)) {
			luaL_error(L, "luna typecheck failed in const IString * IMember::bodyFile() const function, expected prototype:\nconst IString * IMember::bodyFile() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IMember* self=(Luna< IMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const IString * IMember::bodyFile() const. Got : '%s'\n%s",typeid(Luna< IMember >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const IString * lret = self->bodyFile();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	// int IMember::bodyStart() const
	static int _bind_bodyStart(lua_State *L) {
		if (!_lg_typecheck_bodyStart(L)) {
			luaL_error(L, "luna typecheck failed in int IMember::bodyStart() const function, expected prototype:\nint IMember::bodyStart() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IMember* self=(Luna< IMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int IMember::bodyStart() const. Got : '%s'\n%s",typeid(Luna< IMember >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->bodyStart();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int IMember::bodyEnd() const
	static int _bind_bodyEnd(lua_State *L) {
		if (!_lg_typecheck_bodyEnd(L)) {
			luaL_error(L, "luna typecheck failed in int IMember::bodyEnd() const function, expected prototype:\nint IMember::bodyEnd() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IMember* self=(Luna< IMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int IMember::bodyEnd() const. Got : '%s'\n%s",typeid(Luna< IMember >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->bodyEnd();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const IString * IMember::definitionFile() const
	static int _bind_definitionFile(lua_State *L) {
		if (!_lg_typecheck_definitionFile(L)) {
			luaL_error(L, "luna typecheck failed in const IString * IMember::definitionFile() const function, expected prototype:\nconst IString * IMember::definitionFile() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IMember* self=(Luna< IMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const IString * IMember::definitionFile() const. Got : '%s'\n%s",typeid(Luna< IMember >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const IString * lret = self->definitionFile();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	// int IMember::definitionLine() const
	static int _bind_definitionLine(lua_State *L) {
		if (!_lg_typecheck_definitionLine(L)) {
			luaL_error(L, "luna typecheck failed in int IMember::definitionLine() const function, expected prototype:\nint IMember::definitionLine() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IMember* self=(Luna< IMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int IMember::definitionLine() const. Got : '%s'\n%s",typeid(Luna< IMember >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->definitionLine();
		lua_pushnumber(L,lret);

		return 1;
	}

	// IMemberReference * IMember::reimplements() const
	static int _bind_reimplements(lua_State *L) {
		if (!_lg_typecheck_reimplements(L)) {
			luaL_error(L, "luna typecheck failed in IMemberReference * IMember::reimplements() const function, expected prototype:\nIMemberReference * IMember::reimplements() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IMember* self=(Luna< IMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call IMemberReference * IMember::reimplements() const. Got : '%s'\n%s",typeid(Luna< IMember >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IMemberReference * lret = self->reimplements();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IMemberReference >::push(L,lret,false);

		return 1;
	}

	// IMemberReferenceIterator * IMember::reimplementedBy() const
	static int _bind_reimplementedBy(lua_State *L) {
		if (!_lg_typecheck_reimplementedBy(L)) {
			luaL_error(L, "luna typecheck failed in IMemberReferenceIterator * IMember::reimplementedBy() const function, expected prototype:\nIMemberReferenceIterator * IMember::reimplementedBy() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IMember* self=(Luna< IMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call IMemberReferenceIterator * IMember::reimplementedBy() const. Got : '%s'\n%s",typeid(Luna< IMember >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IMemberReferenceIterator * lret = self->reimplementedBy();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IMemberReferenceIterator >::push(L,lret,false);

		return 1;
	}

	// IDocRoot * IMember::briefDescription() const
	static int _bind_briefDescription(lua_State *L) {
		if (!_lg_typecheck_briefDescription(L)) {
			luaL_error(L, "luna typecheck failed in IDocRoot * IMember::briefDescription() const function, expected prototype:\nIDocRoot * IMember::briefDescription() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IMember* self=(Luna< IMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call IDocRoot * IMember::briefDescription() const. Got : '%s'\n%s",typeid(Luna< IMember >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IDocRoot * lret = self->briefDescription();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IDocRoot >::push(L,lret,false);

		return 1;
	}

	// IDocRoot * IMember::detailedDescription() const
	static int _bind_detailedDescription(lua_State *L) {
		if (!_lg_typecheck_detailedDescription(L)) {
			luaL_error(L, "luna typecheck failed in IDocRoot * IMember::detailedDescription() const function, expected prototype:\nIDocRoot * IMember::detailedDescription() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IMember* self=(Luna< IMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call IDocRoot * IMember::detailedDescription() const. Got : '%s'\n%s",typeid(Luna< IMember >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IDocRoot * lret = self->detailedDescription();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IDocRoot >::push(L,lret,false);

		return 1;
	}

	// IDocRoot * IMember::inbodyDescription() const
	static int _bind_inbodyDescription(lua_State *L) {
		if (!_lg_typecheck_inbodyDescription(L)) {
			luaL_error(L, "luna typecheck failed in IDocRoot * IMember::inbodyDescription() const function, expected prototype:\nIDocRoot * IMember::inbodyDescription() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IMember* self=(Luna< IMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call IDocRoot * IMember::inbodyDescription() const. Got : '%s'\n%s",typeid(Luna< IMember >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IDocRoot * lret = self->inbodyDescription();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IDocRoot >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

IMember* LunaTraits< IMember >::_bind_ctor(lua_State *L) {
	return luna_wrapper_IMember::_bind_ctor(L);
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

void LunaTraits< IMember >::_bind_dtor(IMember* obj) {
	delete obj;
}

const char LunaTraits< IMember >::className[] = "IMember";
const char LunaTraits< IMember >::fullName[] = "IMember";
const char LunaTraits< IMember >::moduleName[] = "doxmlparser";
const char* LunaTraits< IMember >::parents[] = {0};
const int LunaTraits< IMember >::hash = 88829564;
const int LunaTraits< IMember >::uniqueIDs[] = {88829564,0};

luna_RegType LunaTraits< IMember >::methods[] = {
	{"compound", &luna_wrapper_IMember::_bind_compound},
	{"section", &luna_wrapper_IMember::_bind_section},
	{"kind", &luna_wrapper_IMember::_bind_kind},
	{"kindString", &luna_wrapper_IMember::_bind_kindString},
	{"id", &luna_wrapper_IMember::_bind_id},
	{"protection", &luna_wrapper_IMember::_bind_protection},
	{"virtualness", &luna_wrapper_IMember::_bind_virtualness},
	{"type", &luna_wrapper_IMember::_bind_type},
	{"typeString", &luna_wrapper_IMember::_bind_typeString},
	{"name", &luna_wrapper_IMember::_bind_name},
	{"readAccessor", &luna_wrapper_IMember::_bind_readAccessor},
	{"writeAccessor", &luna_wrapper_IMember::_bind_writeAccessor},
	{"definition", &luna_wrapper_IMember::_bind_definition},
	{"argsstring", &luna_wrapper_IMember::_bind_argsstring},
	{"isConst", &luna_wrapper_IMember::_bind_isConst},
	{"isVolatile", &luna_wrapper_IMember::_bind_isVolatile},
	{"isStatic", &luna_wrapper_IMember::_bind_isStatic},
	{"isExplicit", &luna_wrapper_IMember::_bind_isExplicit},
	{"isInline", &luna_wrapper_IMember::_bind_isInline},
	{"isMutable", &luna_wrapper_IMember::_bind_isMutable},
	{"isReadable", &luna_wrapper_IMember::_bind_isReadable},
	{"isWritable", &luna_wrapper_IMember::_bind_isWritable},
	{"parameters", &luna_wrapper_IMember::_bind_parameters},
	{"templateParameters", &luna_wrapper_IMember::_bind_templateParameters},
	{"initializer", &luna_wrapper_IMember::_bind_initializer},
	{"exceptions", &luna_wrapper_IMember::_bind_exceptions},
	{"references", &luna_wrapper_IMember::_bind_references},
	{"referencedBy", &luna_wrapper_IMember::_bind_referencedBy},
	{"bodyFile", &luna_wrapper_IMember::_bind_bodyFile},
	{"bodyStart", &luna_wrapper_IMember::_bind_bodyStart},
	{"bodyEnd", &luna_wrapper_IMember::_bind_bodyEnd},
	{"definitionFile", &luna_wrapper_IMember::_bind_definitionFile},
	{"definitionLine", &luna_wrapper_IMember::_bind_definitionLine},
	{"reimplements", &luna_wrapper_IMember::_bind_reimplements},
	{"reimplementedBy", &luna_wrapper_IMember::_bind_reimplementedBy},
	{"briefDescription", &luna_wrapper_IMember::_bind_briefDescription},
	{"detailedDescription", &luna_wrapper_IMember::_bind_detailedDescription},
	{"inbodyDescription", &luna_wrapper_IMember::_bind_inbodyDescription},
	{"dynCast", &luna_wrapper_IMember::_bind_dynCast},
	{"__eq", &luna_wrapper_IMember::_bind___eq},
	{"fromVoid", &luna_wrapper_IMember::_bind_fromVoid},
	{"asVoid", &luna_wrapper_IMember::_bind_asVoid},
	{"getTable", &luna_wrapper_IMember::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< IMember >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< IMember >::enumValues[] = {
	{"Invalid", IMember::Invalid},
	{"Define", IMember::Define},
	{"Property", IMember::Property},
	{"Variable", IMember::Variable},
	{"Typedef", IMember::Typedef},
	{"Enum", IMember::Enum},
	{"Function", IMember::Function},
	{"Signal", IMember::Signal},
	{"Prototype", IMember::Prototype},
	{"Friend", IMember::Friend},
	{"DCOP", IMember::DCOP},
	{"Slot", IMember::Slot},
	{"EnumValue", IMember::EnumValue},
	{0,0}
};


