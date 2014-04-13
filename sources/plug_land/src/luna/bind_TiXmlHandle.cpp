#include <plug_common.h>

class luna_wrapper_TiXmlHandle {
public:
	typedef Luna< TiXmlHandle > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,20257622) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(TiXmlHandle*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		TiXmlHandle* rhs =(Luna< TiXmlHandle >::check(L,2));
		TiXmlHandle* self=(Luna< TiXmlHandle >::check(L,1));
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

		TiXmlHandle* self= (TiXmlHandle*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< TiXmlHandle >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,20257622) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< TiXmlHandle >::check(L,1));
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

		TiXmlHandle* self=(Luna< TiXmlHandle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("TiXmlHandle");
		
		return luna_dynamicCast(L,converters,"TiXmlHandle",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,89852901)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,20257622) ) return false;
		if( (!(Luna< TiXmlHandle >::check(L,1))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_FirstChild_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_FirstChild_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FirstChild_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FirstChildElement_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_FirstChildElement_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FirstChildElement_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Child_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Child_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Child_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ChildElement_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ChildElement_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ChildElement_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ToNode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ToElement(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ToText(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ToUnknown(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Node(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Element(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Text(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Unknown(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck_op_assign(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20257622) ) return false;
		return true;
	}


	// Constructor binds:
	// TiXmlHandle::TiXmlHandle(TiXmlNode * _node)
	static TiXmlHandle* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlHandle::TiXmlHandle(TiXmlNode * _node) function, expected prototype:\nTiXmlHandle::TiXmlHandle(TiXmlNode * _node)\nClass arguments details:\narg 1 ID = 89852901\n\n%s",luna_dumpStack(L).c_str());
		}

		TiXmlNode* _node=(Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1));

		return new TiXmlHandle(_node);
	}

	// TiXmlHandle::TiXmlHandle(const TiXmlHandle & ref)
	static TiXmlHandle* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlHandle::TiXmlHandle(const TiXmlHandle & ref) function, expected prototype:\nTiXmlHandle::TiXmlHandle(const TiXmlHandle & ref)\nClass arguments details:\narg 1 ID = 20257622\n\n%s",luna_dumpStack(L).c_str());
		}

		const TiXmlHandle* ref_ptr=(Luna< TiXmlHandle >::check(L,1));
		if( !ref_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ref in TiXmlHandle::TiXmlHandle function");
		}
		const TiXmlHandle & ref=*ref_ptr;

		return new TiXmlHandle(ref);
	}

	// Overload binder for TiXmlHandle::TiXmlHandle
	static TiXmlHandle* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function TiXmlHandle, cannot match any of the overloads for function TiXmlHandle:\n  TiXmlHandle(TiXmlNode *)\n  TiXmlHandle(const TiXmlHandle &)\n");
		return NULL;
	}


	// Function binds:
	// TiXmlHandle TiXmlHandle::FirstChild() const
	static int _bind_FirstChild_overload_1(lua_State *L) {
		if (!_lg_typecheck_FirstChild_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlHandle TiXmlHandle::FirstChild() const function, expected prototype:\nTiXmlHandle TiXmlHandle::FirstChild() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlHandle* self=(Luna< TiXmlHandle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlHandle TiXmlHandle::FirstChild() const. Got : '%s'\n%s",typeid(Luna< TiXmlHandle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlHandle stack_lret = self->FirstChild();
		TiXmlHandle* lret = new TiXmlHandle(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlHandle >::push(L,lret,true);

		return 1;
	}

	// TiXmlHandle TiXmlHandle::FirstChild(const char * value) const
	static int _bind_FirstChild_overload_2(lua_State *L) {
		if (!_lg_typecheck_FirstChild_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlHandle TiXmlHandle::FirstChild(const char * value) const function, expected prototype:\nTiXmlHandle TiXmlHandle::FirstChild(const char * value) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * value=(const char *)lua_tostring(L,2);

		TiXmlHandle* self=(Luna< TiXmlHandle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlHandle TiXmlHandle::FirstChild(const char *) const. Got : '%s'\n%s",typeid(Luna< TiXmlHandle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlHandle stack_lret = self->FirstChild(value);
		TiXmlHandle* lret = new TiXmlHandle(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlHandle >::push(L,lret,true);

		return 1;
	}

	// TiXmlHandle TiXmlHandle::FirstChild(const std::string & _value) const
	static int _bind_FirstChild_overload_3(lua_State *L) {
		if (!_lg_typecheck_FirstChild_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlHandle TiXmlHandle::FirstChild(const std::string & _value) const function, expected prototype:\nTiXmlHandle TiXmlHandle::FirstChild(const std::string & _value) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string _value(lua_tostring(L,2),lua_objlen(L,2));

		TiXmlHandle* self=(Luna< TiXmlHandle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlHandle TiXmlHandle::FirstChild(const std::string &) const. Got : '%s'\n%s",typeid(Luna< TiXmlHandle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlHandle stack_lret = self->FirstChild(_value);
		TiXmlHandle* lret = new TiXmlHandle(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlHandle >::push(L,lret,true);

		return 1;
	}

	// Overload binder for TiXmlHandle::FirstChild
	static int _bind_FirstChild(lua_State *L) {
		if (_lg_typecheck_FirstChild_overload_1(L)) return _bind_FirstChild_overload_1(L);
		if (_lg_typecheck_FirstChild_overload_2(L)) return _bind_FirstChild_overload_2(L);
		if (_lg_typecheck_FirstChild_overload_3(L)) return _bind_FirstChild_overload_3(L);

		luaL_error(L, "error in function FirstChild, cannot match any of the overloads for function FirstChild:\n  FirstChild()\n  FirstChild(const char *)\n  FirstChild(const std::string &)\n");
		return 0;
	}

	// TiXmlHandle TiXmlHandle::FirstChildElement() const
	static int _bind_FirstChildElement_overload_1(lua_State *L) {
		if (!_lg_typecheck_FirstChildElement_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlHandle TiXmlHandle::FirstChildElement() const function, expected prototype:\nTiXmlHandle TiXmlHandle::FirstChildElement() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlHandle* self=(Luna< TiXmlHandle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlHandle TiXmlHandle::FirstChildElement() const. Got : '%s'\n%s",typeid(Luna< TiXmlHandle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlHandle stack_lret = self->FirstChildElement();
		TiXmlHandle* lret = new TiXmlHandle(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlHandle >::push(L,lret,true);

		return 1;
	}

	// TiXmlHandle TiXmlHandle::FirstChildElement(const char * value) const
	static int _bind_FirstChildElement_overload_2(lua_State *L) {
		if (!_lg_typecheck_FirstChildElement_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlHandle TiXmlHandle::FirstChildElement(const char * value) const function, expected prototype:\nTiXmlHandle TiXmlHandle::FirstChildElement(const char * value) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * value=(const char *)lua_tostring(L,2);

		TiXmlHandle* self=(Luna< TiXmlHandle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlHandle TiXmlHandle::FirstChildElement(const char *) const. Got : '%s'\n%s",typeid(Luna< TiXmlHandle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlHandle stack_lret = self->FirstChildElement(value);
		TiXmlHandle* lret = new TiXmlHandle(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlHandle >::push(L,lret,true);

		return 1;
	}

	// TiXmlHandle TiXmlHandle::FirstChildElement(const std::string & _value) const
	static int _bind_FirstChildElement_overload_3(lua_State *L) {
		if (!_lg_typecheck_FirstChildElement_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlHandle TiXmlHandle::FirstChildElement(const std::string & _value) const function, expected prototype:\nTiXmlHandle TiXmlHandle::FirstChildElement(const std::string & _value) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string _value(lua_tostring(L,2),lua_objlen(L,2));

		TiXmlHandle* self=(Luna< TiXmlHandle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlHandle TiXmlHandle::FirstChildElement(const std::string &) const. Got : '%s'\n%s",typeid(Luna< TiXmlHandle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlHandle stack_lret = self->FirstChildElement(_value);
		TiXmlHandle* lret = new TiXmlHandle(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlHandle >::push(L,lret,true);

		return 1;
	}

	// Overload binder for TiXmlHandle::FirstChildElement
	static int _bind_FirstChildElement(lua_State *L) {
		if (_lg_typecheck_FirstChildElement_overload_1(L)) return _bind_FirstChildElement_overload_1(L);
		if (_lg_typecheck_FirstChildElement_overload_2(L)) return _bind_FirstChildElement_overload_2(L);
		if (_lg_typecheck_FirstChildElement_overload_3(L)) return _bind_FirstChildElement_overload_3(L);

		luaL_error(L, "error in function FirstChildElement, cannot match any of the overloads for function FirstChildElement:\n  FirstChildElement()\n  FirstChildElement(const char *)\n  FirstChildElement(const std::string &)\n");
		return 0;
	}

	// TiXmlHandle TiXmlHandle::Child(const char * value, int index) const
	static int _bind_Child_overload_1(lua_State *L) {
		if (!_lg_typecheck_Child_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlHandle TiXmlHandle::Child(const char * value, int index) const function, expected prototype:\nTiXmlHandle TiXmlHandle::Child(const char * value, int index) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * value=(const char *)lua_tostring(L,2);
		int index=(int)lua_tointeger(L,3);

		TiXmlHandle* self=(Luna< TiXmlHandle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlHandle TiXmlHandle::Child(const char *, int) const. Got : '%s'\n%s",typeid(Luna< TiXmlHandle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlHandle stack_lret = self->Child(value, index);
		TiXmlHandle* lret = new TiXmlHandle(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlHandle >::push(L,lret,true);

		return 1;
	}

	// TiXmlHandle TiXmlHandle::Child(int index) const
	static int _bind_Child_overload_2(lua_State *L) {
		if (!_lg_typecheck_Child_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlHandle TiXmlHandle::Child(int index) const function, expected prototype:\nTiXmlHandle TiXmlHandle::Child(int index) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);

		TiXmlHandle* self=(Luna< TiXmlHandle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlHandle TiXmlHandle::Child(int) const. Got : '%s'\n%s",typeid(Luna< TiXmlHandle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlHandle stack_lret = self->Child(index);
		TiXmlHandle* lret = new TiXmlHandle(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlHandle >::push(L,lret,true);

		return 1;
	}

	// TiXmlHandle TiXmlHandle::Child(const std::string & _value, int index) const
	static int _bind_Child_overload_3(lua_State *L) {
		if (!_lg_typecheck_Child_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlHandle TiXmlHandle::Child(const std::string & _value, int index) const function, expected prototype:\nTiXmlHandle TiXmlHandle::Child(const std::string & _value, int index) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string _value(lua_tostring(L,2),lua_objlen(L,2));
		int index=(int)lua_tointeger(L,3);

		TiXmlHandle* self=(Luna< TiXmlHandle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlHandle TiXmlHandle::Child(const std::string &, int) const. Got : '%s'\n%s",typeid(Luna< TiXmlHandle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlHandle stack_lret = self->Child(_value, index);
		TiXmlHandle* lret = new TiXmlHandle(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlHandle >::push(L,lret,true);

		return 1;
	}

	// Overload binder for TiXmlHandle::Child
	static int _bind_Child(lua_State *L) {
		if (_lg_typecheck_Child_overload_1(L)) return _bind_Child_overload_1(L);
		if (_lg_typecheck_Child_overload_2(L)) return _bind_Child_overload_2(L);
		if (_lg_typecheck_Child_overload_3(L)) return _bind_Child_overload_3(L);

		luaL_error(L, "error in function Child, cannot match any of the overloads for function Child:\n  Child(const char *, int)\n  Child(int)\n  Child(const std::string &, int)\n");
		return 0;
	}

	// TiXmlHandle TiXmlHandle::ChildElement(const char * value, int index) const
	static int _bind_ChildElement_overload_1(lua_State *L) {
		if (!_lg_typecheck_ChildElement_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlHandle TiXmlHandle::ChildElement(const char * value, int index) const function, expected prototype:\nTiXmlHandle TiXmlHandle::ChildElement(const char * value, int index) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * value=(const char *)lua_tostring(L,2);
		int index=(int)lua_tointeger(L,3);

		TiXmlHandle* self=(Luna< TiXmlHandle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlHandle TiXmlHandle::ChildElement(const char *, int) const. Got : '%s'\n%s",typeid(Luna< TiXmlHandle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlHandle stack_lret = self->ChildElement(value, index);
		TiXmlHandle* lret = new TiXmlHandle(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlHandle >::push(L,lret,true);

		return 1;
	}

	// TiXmlHandle TiXmlHandle::ChildElement(int index) const
	static int _bind_ChildElement_overload_2(lua_State *L) {
		if (!_lg_typecheck_ChildElement_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlHandle TiXmlHandle::ChildElement(int index) const function, expected prototype:\nTiXmlHandle TiXmlHandle::ChildElement(int index) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);

		TiXmlHandle* self=(Luna< TiXmlHandle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlHandle TiXmlHandle::ChildElement(int) const. Got : '%s'\n%s",typeid(Luna< TiXmlHandle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlHandle stack_lret = self->ChildElement(index);
		TiXmlHandle* lret = new TiXmlHandle(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlHandle >::push(L,lret,true);

		return 1;
	}

	// TiXmlHandle TiXmlHandle::ChildElement(const std::string & _value, int index) const
	static int _bind_ChildElement_overload_3(lua_State *L) {
		if (!_lg_typecheck_ChildElement_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlHandle TiXmlHandle::ChildElement(const std::string & _value, int index) const function, expected prototype:\nTiXmlHandle TiXmlHandle::ChildElement(const std::string & _value, int index) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string _value(lua_tostring(L,2),lua_objlen(L,2));
		int index=(int)lua_tointeger(L,3);

		TiXmlHandle* self=(Luna< TiXmlHandle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlHandle TiXmlHandle::ChildElement(const std::string &, int) const. Got : '%s'\n%s",typeid(Luna< TiXmlHandle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlHandle stack_lret = self->ChildElement(_value, index);
		TiXmlHandle* lret = new TiXmlHandle(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlHandle >::push(L,lret,true);

		return 1;
	}

	// Overload binder for TiXmlHandle::ChildElement
	static int _bind_ChildElement(lua_State *L) {
		if (_lg_typecheck_ChildElement_overload_1(L)) return _bind_ChildElement_overload_1(L);
		if (_lg_typecheck_ChildElement_overload_2(L)) return _bind_ChildElement_overload_2(L);
		if (_lg_typecheck_ChildElement_overload_3(L)) return _bind_ChildElement_overload_3(L);

		luaL_error(L, "error in function ChildElement, cannot match any of the overloads for function ChildElement:\n  ChildElement(const char *, int)\n  ChildElement(int)\n  ChildElement(const std::string &, int)\n");
		return 0;
	}

	// TiXmlNode * TiXmlHandle::ToNode() const
	static int _bind_ToNode(lua_State *L) {
		if (!_lg_typecheck_ToNode(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlNode * TiXmlHandle::ToNode() const function, expected prototype:\nTiXmlNode * TiXmlHandle::ToNode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlHandle* self=(Luna< TiXmlHandle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlNode * TiXmlHandle::ToNode() const. Got : '%s'\n%s",typeid(Luna< TiXmlHandle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlNode * lret = self->ToNode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlNode >::push(L,lret,false);

		return 1;
	}

	// TiXmlElement * TiXmlHandle::ToElement() const
	static int _bind_ToElement(lua_State *L) {
		if (!_lg_typecheck_ToElement(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlElement * TiXmlHandle::ToElement() const function, expected prototype:\nTiXmlElement * TiXmlHandle::ToElement() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlHandle* self=(Luna< TiXmlHandle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlElement * TiXmlHandle::ToElement() const. Got : '%s'\n%s",typeid(Luna< TiXmlHandle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlElement * lret = self->ToElement();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlElement >::push(L,lret,false);

		return 1;
	}

	// TiXmlText * TiXmlHandle::ToText() const
	static int _bind_ToText(lua_State *L) {
		if (!_lg_typecheck_ToText(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlText * TiXmlHandle::ToText() const function, expected prototype:\nTiXmlText * TiXmlHandle::ToText() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlHandle* self=(Luna< TiXmlHandle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlText * TiXmlHandle::ToText() const. Got : '%s'\n%s",typeid(Luna< TiXmlHandle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlText * lret = self->ToText();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlText >::push(L,lret,false);

		return 1;
	}

	// TiXmlUnknown * TiXmlHandle::ToUnknown() const
	static int _bind_ToUnknown(lua_State *L) {
		if (!_lg_typecheck_ToUnknown(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlUnknown * TiXmlHandle::ToUnknown() const function, expected prototype:\nTiXmlUnknown * TiXmlHandle::ToUnknown() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlHandle* self=(Luna< TiXmlHandle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlUnknown * TiXmlHandle::ToUnknown() const. Got : '%s'\n%s",typeid(Luna< TiXmlHandle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlUnknown * lret = self->ToUnknown();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlUnknown >::push(L,lret,false);

		return 1;
	}

	// TiXmlNode * TiXmlHandle::Node() const
	static int _bind_Node(lua_State *L) {
		if (!_lg_typecheck_Node(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlNode * TiXmlHandle::Node() const function, expected prototype:\nTiXmlNode * TiXmlHandle::Node() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlHandle* self=(Luna< TiXmlHandle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlNode * TiXmlHandle::Node() const. Got : '%s'\n%s",typeid(Luna< TiXmlHandle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlNode * lret = self->Node();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlNode >::push(L,lret,false);

		return 1;
	}

	// TiXmlElement * TiXmlHandle::Element() const
	static int _bind_Element(lua_State *L) {
		if (!_lg_typecheck_Element(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlElement * TiXmlHandle::Element() const function, expected prototype:\nTiXmlElement * TiXmlHandle::Element() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlHandle* self=(Luna< TiXmlHandle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlElement * TiXmlHandle::Element() const. Got : '%s'\n%s",typeid(Luna< TiXmlHandle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlElement * lret = self->Element();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlElement >::push(L,lret,false);

		return 1;
	}

	// TiXmlText * TiXmlHandle::Text() const
	static int _bind_Text(lua_State *L) {
		if (!_lg_typecheck_Text(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlText * TiXmlHandle::Text() const function, expected prototype:\nTiXmlText * TiXmlHandle::Text() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlHandle* self=(Luna< TiXmlHandle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlText * TiXmlHandle::Text() const. Got : '%s'\n%s",typeid(Luna< TiXmlHandle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlText * lret = self->Text();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlText >::push(L,lret,false);

		return 1;
	}

	// TiXmlUnknown * TiXmlHandle::Unknown() const
	static int _bind_Unknown(lua_State *L) {
		if (!_lg_typecheck_Unknown(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlUnknown * TiXmlHandle::Unknown() const function, expected prototype:\nTiXmlUnknown * TiXmlHandle::Unknown() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlHandle* self=(Luna< TiXmlHandle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlUnknown * TiXmlHandle::Unknown() const. Got : '%s'\n%s",typeid(Luna< TiXmlHandle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlUnknown * lret = self->Unknown();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlUnknown >::push(L,lret,false);

		return 1;
	}


	// Operator binds:
	// TiXmlHandle TiXmlHandle::operator=(const TiXmlHandle & ref)
	static int _bind_op_assign(lua_State *L) {
		if (!_lg_typecheck_op_assign(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlHandle TiXmlHandle::operator=(const TiXmlHandle & ref) function, expected prototype:\nTiXmlHandle TiXmlHandle::operator=(const TiXmlHandle & ref)\nClass arguments details:\narg 1 ID = 20257622\n\n%s",luna_dumpStack(L).c_str());
		}

		const TiXmlHandle* ref_ptr=(Luna< TiXmlHandle >::check(L,2));
		if( !ref_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ref in TiXmlHandle::operator= function");
		}
		const TiXmlHandle & ref=*ref_ptr;

		TiXmlHandle* self=(Luna< TiXmlHandle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlHandle TiXmlHandle::operator=(const TiXmlHandle &). Got : '%s'\n%s",typeid(Luna< TiXmlHandle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlHandle stack_lret = self->operator=(ref);
		TiXmlHandle* lret = new TiXmlHandle(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlHandle >::push(L,lret,true);

		return 1;
	}


};

TiXmlHandle* LunaTraits< TiXmlHandle >::_bind_ctor(lua_State *L) {
	return luna_wrapper_TiXmlHandle::_bind_ctor(L);
}

void LunaTraits< TiXmlHandle >::_bind_dtor(TiXmlHandle* obj) {
	delete obj;
}

const char LunaTraits< TiXmlHandle >::className[] = "TiXmlHandle";
const char LunaTraits< TiXmlHandle >::fullName[] = "TiXmlHandle";
const char LunaTraits< TiXmlHandle >::moduleName[] = "land";
const char* LunaTraits< TiXmlHandle >::parents[] = {0};
const int LunaTraits< TiXmlHandle >::hash = 20257622;
const int LunaTraits< TiXmlHandle >::uniqueIDs[] = {20257622,0};

luna_RegType LunaTraits< TiXmlHandle >::methods[] = {
	{"FirstChild", &luna_wrapper_TiXmlHandle::_bind_FirstChild},
	{"FirstChildElement", &luna_wrapper_TiXmlHandle::_bind_FirstChildElement},
	{"Child", &luna_wrapper_TiXmlHandle::_bind_Child},
	{"ChildElement", &luna_wrapper_TiXmlHandle::_bind_ChildElement},
	{"ToNode", &luna_wrapper_TiXmlHandle::_bind_ToNode},
	{"ToElement", &luna_wrapper_TiXmlHandle::_bind_ToElement},
	{"ToText", &luna_wrapper_TiXmlHandle::_bind_ToText},
	{"ToUnknown", &luna_wrapper_TiXmlHandle::_bind_ToUnknown},
	{"Node", &luna_wrapper_TiXmlHandle::_bind_Node},
	{"Element", &luna_wrapper_TiXmlHandle::_bind_Element},
	{"Text", &luna_wrapper_TiXmlHandle::_bind_Text},
	{"Unknown", &luna_wrapper_TiXmlHandle::_bind_Unknown},
	{"op_assign", &luna_wrapper_TiXmlHandle::_bind_op_assign},
	{"dynCast", &luna_wrapper_TiXmlHandle::_bind_dynCast},
	{"__eq", &luna_wrapper_TiXmlHandle::_bind___eq},
	{"fromVoid", &luna_wrapper_TiXmlHandle::_bind_fromVoid},
	{"asVoid", &luna_wrapper_TiXmlHandle::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< TiXmlHandle >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< TiXmlHandle >::enumValues[] = {
	{0,0}
};


