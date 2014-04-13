#include <plug_common.h>

class luna_wrapper_TiXmlAttributeSet {
public:
	typedef Luna< TiXmlAttributeSet > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,40561291) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(TiXmlAttributeSet*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		TiXmlAttributeSet* rhs =(Luna< TiXmlAttributeSet >::check(L,2));
		TiXmlAttributeSet* self=(Luna< TiXmlAttributeSet >::check(L,1));
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

		TiXmlAttributeSet* self= (TiXmlAttributeSet*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< TiXmlAttributeSet >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,40561291) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< TiXmlAttributeSet >::check(L,1));
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

		TiXmlAttributeSet* self=(Luna< TiXmlAttributeSet >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("TiXmlAttributeSet");
		
		return luna_dynamicCast(L,converters,"TiXmlAttributeSet",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Add(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,89852901)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Remove(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,89852901)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_First_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_First_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Last_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Last_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Find_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Find_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Find_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Find_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// TiXmlAttributeSet::TiXmlAttributeSet()
	static TiXmlAttributeSet* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlAttributeSet::TiXmlAttributeSet() function, expected prototype:\nTiXmlAttributeSet::TiXmlAttributeSet()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new TiXmlAttributeSet();
	}


	// Function binds:
	// void TiXmlAttributeSet::Add(TiXmlAttribute * attribute)
	static int _bind_Add(lua_State *L) {
		if (!_lg_typecheck_Add(L)) {
			luaL_error(L, "luna typecheck failed in void TiXmlAttributeSet::Add(TiXmlAttribute * attribute) function, expected prototype:\nvoid TiXmlAttributeSet::Add(TiXmlAttribute * attribute)\nClass arguments details:\narg 1 ID = 89852901\n\n%s",luna_dumpStack(L).c_str());
		}

		TiXmlAttribute* attribute=(Luna< TiXmlBase >::checkSubType< TiXmlAttribute >(L,2));

		TiXmlAttributeSet* self=(Luna< TiXmlAttributeSet >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void TiXmlAttributeSet::Add(TiXmlAttribute *). Got : '%s'\n%s",typeid(Luna< TiXmlAttributeSet >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Add(attribute);

		return 0;
	}

	// void TiXmlAttributeSet::Remove(TiXmlAttribute * attribute)
	static int _bind_Remove(lua_State *L) {
		if (!_lg_typecheck_Remove(L)) {
			luaL_error(L, "luna typecheck failed in void TiXmlAttributeSet::Remove(TiXmlAttribute * attribute) function, expected prototype:\nvoid TiXmlAttributeSet::Remove(TiXmlAttribute * attribute)\nClass arguments details:\narg 1 ID = 89852901\n\n%s",luna_dumpStack(L).c_str());
		}

		TiXmlAttribute* attribute=(Luna< TiXmlBase >::checkSubType< TiXmlAttribute >(L,2));

		TiXmlAttributeSet* self=(Luna< TiXmlAttributeSet >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void TiXmlAttributeSet::Remove(TiXmlAttribute *). Got : '%s'\n%s",typeid(Luna< TiXmlAttributeSet >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Remove(attribute);

		return 0;
	}

	// const TiXmlAttribute * TiXmlAttributeSet::First() const
	static int _bind_First_overload_1(lua_State *L) {
		if (!_lg_typecheck_First_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlAttribute * TiXmlAttributeSet::First() const function, expected prototype:\nconst TiXmlAttribute * TiXmlAttributeSet::First() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlAttributeSet* self=(Luna< TiXmlAttributeSet >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlAttribute * TiXmlAttributeSet::First() const. Got : '%s'\n%s",typeid(Luna< TiXmlAttributeSet >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlAttribute * lret = self->First();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlAttribute >::push(L,lret,false);

		return 1;
	}

	// TiXmlAttribute * TiXmlAttributeSet::First()
	static int _bind_First_overload_2(lua_State *L) {
		if (!_lg_typecheck_First_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlAttribute * TiXmlAttributeSet::First() function, expected prototype:\nTiXmlAttribute * TiXmlAttributeSet::First()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlAttributeSet* self=(Luna< TiXmlAttributeSet >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlAttribute * TiXmlAttributeSet::First(). Got : '%s'\n%s",typeid(Luna< TiXmlAttributeSet >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlAttribute * lret = self->First();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlAttribute >::push(L,lret,false);

		return 1;
	}

	// Overload binder for TiXmlAttributeSet::First
	static int _bind_First(lua_State *L) {
		if (_lg_typecheck_First_overload_1(L)) return _bind_First_overload_1(L);
		if (_lg_typecheck_First_overload_2(L)) return _bind_First_overload_2(L);

		luaL_error(L, "error in function First, cannot match any of the overloads for function First:\n  First()\n  First()\n");
		return 0;
	}

	// const TiXmlAttribute * TiXmlAttributeSet::Last() const
	static int _bind_Last_overload_1(lua_State *L) {
		if (!_lg_typecheck_Last_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlAttribute * TiXmlAttributeSet::Last() const function, expected prototype:\nconst TiXmlAttribute * TiXmlAttributeSet::Last() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlAttributeSet* self=(Luna< TiXmlAttributeSet >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlAttribute * TiXmlAttributeSet::Last() const. Got : '%s'\n%s",typeid(Luna< TiXmlAttributeSet >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlAttribute * lret = self->Last();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlAttribute >::push(L,lret,false);

		return 1;
	}

	// TiXmlAttribute * TiXmlAttributeSet::Last()
	static int _bind_Last_overload_2(lua_State *L) {
		if (!_lg_typecheck_Last_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlAttribute * TiXmlAttributeSet::Last() function, expected prototype:\nTiXmlAttribute * TiXmlAttributeSet::Last()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlAttributeSet* self=(Luna< TiXmlAttributeSet >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlAttribute * TiXmlAttributeSet::Last(). Got : '%s'\n%s",typeid(Luna< TiXmlAttributeSet >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlAttribute * lret = self->Last();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlAttribute >::push(L,lret,false);

		return 1;
	}

	// Overload binder for TiXmlAttributeSet::Last
	static int _bind_Last(lua_State *L) {
		if (_lg_typecheck_Last_overload_1(L)) return _bind_Last_overload_1(L);
		if (_lg_typecheck_Last_overload_2(L)) return _bind_Last_overload_2(L);

		luaL_error(L, "error in function Last, cannot match any of the overloads for function Last:\n  Last()\n  Last()\n");
		return 0;
	}

	// const TiXmlAttribute * TiXmlAttributeSet::Find(const char * _name) const
	static int _bind_Find_overload_1(lua_State *L) {
		if (!_lg_typecheck_Find_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlAttribute * TiXmlAttributeSet::Find(const char * _name) const function, expected prototype:\nconst TiXmlAttribute * TiXmlAttributeSet::Find(const char * _name) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * _name=(const char *)lua_tostring(L,2);

		TiXmlAttributeSet* self=(Luna< TiXmlAttributeSet >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlAttribute * TiXmlAttributeSet::Find(const char *) const. Got : '%s'\n%s",typeid(Luna< TiXmlAttributeSet >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlAttribute * lret = self->Find(_name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlAttribute >::push(L,lret,false);

		return 1;
	}

	// TiXmlAttribute * TiXmlAttributeSet::Find(const char * _name)
	static int _bind_Find_overload_2(lua_State *L) {
		if (!_lg_typecheck_Find_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlAttribute * TiXmlAttributeSet::Find(const char * _name) function, expected prototype:\nTiXmlAttribute * TiXmlAttributeSet::Find(const char * _name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * _name=(const char *)lua_tostring(L,2);

		TiXmlAttributeSet* self=(Luna< TiXmlAttributeSet >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlAttribute * TiXmlAttributeSet::Find(const char *). Got : '%s'\n%s",typeid(Luna< TiXmlAttributeSet >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlAttribute * lret = self->Find(_name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlAttribute >::push(L,lret,false);

		return 1;
	}

	// const TiXmlAttribute * TiXmlAttributeSet::Find(const std::string & _name) const
	static int _bind_Find_overload_3(lua_State *L) {
		if (!_lg_typecheck_Find_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlAttribute * TiXmlAttributeSet::Find(const std::string & _name) const function, expected prototype:\nconst TiXmlAttribute * TiXmlAttributeSet::Find(const std::string & _name) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string _name(lua_tostring(L,2),lua_objlen(L,2));

		TiXmlAttributeSet* self=(Luna< TiXmlAttributeSet >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlAttribute * TiXmlAttributeSet::Find(const std::string &) const. Got : '%s'\n%s",typeid(Luna< TiXmlAttributeSet >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlAttribute * lret = self->Find(_name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlAttribute >::push(L,lret,false);

		return 1;
	}

	// TiXmlAttribute * TiXmlAttributeSet::Find(const std::string & _name)
	static int _bind_Find_overload_4(lua_State *L) {
		if (!_lg_typecheck_Find_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlAttribute * TiXmlAttributeSet::Find(const std::string & _name) function, expected prototype:\nTiXmlAttribute * TiXmlAttributeSet::Find(const std::string & _name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string _name(lua_tostring(L,2),lua_objlen(L,2));

		TiXmlAttributeSet* self=(Luna< TiXmlAttributeSet >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlAttribute * TiXmlAttributeSet::Find(const std::string &). Got : '%s'\n%s",typeid(Luna< TiXmlAttributeSet >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlAttribute * lret = self->Find(_name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlAttribute >::push(L,lret,false);

		return 1;
	}

	// Overload binder for TiXmlAttributeSet::Find
	static int _bind_Find(lua_State *L) {
		if (_lg_typecheck_Find_overload_1(L)) return _bind_Find_overload_1(L);
		if (_lg_typecheck_Find_overload_2(L)) return _bind_Find_overload_2(L);
		if (_lg_typecheck_Find_overload_3(L)) return _bind_Find_overload_3(L);
		if (_lg_typecheck_Find_overload_4(L)) return _bind_Find_overload_4(L);

		luaL_error(L, "error in function Find, cannot match any of the overloads for function Find:\n  Find(const char *)\n  Find(const char *)\n  Find(const std::string &)\n  Find(const std::string &)\n");
		return 0;
	}


	// Operator binds:

};

TiXmlAttributeSet* LunaTraits< TiXmlAttributeSet >::_bind_ctor(lua_State *L) {
	return luna_wrapper_TiXmlAttributeSet::_bind_ctor(L);
}

void LunaTraits< TiXmlAttributeSet >::_bind_dtor(TiXmlAttributeSet* obj) {
	delete obj;
}

const char LunaTraits< TiXmlAttributeSet >::className[] = "TiXmlAttributeSet";
const char LunaTraits< TiXmlAttributeSet >::fullName[] = "TiXmlAttributeSet";
const char LunaTraits< TiXmlAttributeSet >::moduleName[] = "land";
const char* LunaTraits< TiXmlAttributeSet >::parents[] = {0};
const int LunaTraits< TiXmlAttributeSet >::hash = 40561291;
const int LunaTraits< TiXmlAttributeSet >::uniqueIDs[] = {40561291,0};

luna_RegType LunaTraits< TiXmlAttributeSet >::methods[] = {
	{"Add", &luna_wrapper_TiXmlAttributeSet::_bind_Add},
	{"Remove", &luna_wrapper_TiXmlAttributeSet::_bind_Remove},
	{"First", &luna_wrapper_TiXmlAttributeSet::_bind_First},
	{"Last", &luna_wrapper_TiXmlAttributeSet::_bind_Last},
	{"Find", &luna_wrapper_TiXmlAttributeSet::_bind_Find},
	{"dynCast", &luna_wrapper_TiXmlAttributeSet::_bind_dynCast},
	{"__eq", &luna_wrapper_TiXmlAttributeSet::_bind___eq},
	{"fromVoid", &luna_wrapper_TiXmlAttributeSet::_bind_fromVoid},
	{"asVoid", &luna_wrapper_TiXmlAttributeSet::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< TiXmlAttributeSet >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< TiXmlAttributeSet >::enumValues[] = {
	{0,0}
};


