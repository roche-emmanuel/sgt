#include <plug_common.h>

#include <luna/wrappers/wrapper_TiXmlComment.h>

class luna_wrapper_TiXmlComment {
public:
	typedef Luna< TiXmlComment > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		TiXmlBase* self=(Luna< TiXmlBase >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<TiXmlBase,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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

		TiXmlComment* self= (TiXmlComment*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< TiXmlComment >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,89852901) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< TiXmlBase >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_TiXmlBase(lua_State *L) {
		// all checked are already performed before reaching this point.
		//TiXmlComment* ptr= dynamic_cast< TiXmlComment* >(Luna< TiXmlBase >::check(L,1));
		TiXmlComment* ptr= luna_caster< TiXmlBase, TiXmlComment >::cast(Luna< TiXmlBase >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< TiXmlComment >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,89852901) ) return false;
		if( (!(Luna< TiXmlBase >::checkSubType< TiXmlComment >(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,89852901) ) return false;
		if( (!(Luna< TiXmlBase >::checkSubType< TiXmlComment >(L,2))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Clone(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ToComment_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ToComment_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Accept(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,86845197)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_ToDocument_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_ToDocument_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_ToElement_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_ToElement_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_ToUnknown_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_ToUnknown_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_ToText_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_ToText_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_ToDeclaration_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_ToDeclaration_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Clone(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_ToComment_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_ToComment_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Accept(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,86845197)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck_op_assign(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,89852901) ) return false;
		return true;
	}


	// Constructor binds:
	// TiXmlComment::TiXmlComment()
	static TiXmlComment* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlComment::TiXmlComment() function, expected prototype:\nTiXmlComment::TiXmlComment()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new TiXmlComment();
	}

	// TiXmlComment::TiXmlComment(const char * _value)
	static TiXmlComment* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlComment::TiXmlComment(const char * _value) function, expected prototype:\nTiXmlComment::TiXmlComment(const char * _value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * _value=(const char *)lua_tostring(L,1);

		return new TiXmlComment(_value);
	}

	// TiXmlComment::TiXmlComment(const TiXmlComment & arg1)
	static TiXmlComment* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlComment::TiXmlComment(const TiXmlComment & arg1) function, expected prototype:\nTiXmlComment::TiXmlComment(const TiXmlComment & arg1)\nClass arguments details:\narg 1 ID = 89852901\n\n%s",luna_dumpStack(L).c_str());
		}

		const TiXmlComment* _arg1_ptr=(Luna< TiXmlBase >::checkSubType< TiXmlComment >(L,1));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in TiXmlComment::TiXmlComment function");
		}
		const TiXmlComment & _arg1=*_arg1_ptr;

		return new TiXmlComment(_arg1);
	}

	// TiXmlComment::TiXmlComment(lua_Table * data)
	static TiXmlComment* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlComment::TiXmlComment(lua_Table * data) function, expected prototype:\nTiXmlComment::TiXmlComment(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_TiXmlComment(L,NULL);
	}

	// TiXmlComment::TiXmlComment(lua_Table * data, const char * _value)
	static TiXmlComment* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlComment::TiXmlComment(lua_Table * data, const char * _value) function, expected prototype:\nTiXmlComment::TiXmlComment(lua_Table * data, const char * _value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * _value=(const char *)lua_tostring(L,2);

		return new wrapper_TiXmlComment(L,NULL, _value);
	}

	// TiXmlComment::TiXmlComment(lua_Table * data, const TiXmlComment & arg2)
	static TiXmlComment* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlComment::TiXmlComment(lua_Table * data, const TiXmlComment & arg2) function, expected prototype:\nTiXmlComment::TiXmlComment(lua_Table * data, const TiXmlComment & arg2)\nClass arguments details:\narg 2 ID = 89852901\n\n%s",luna_dumpStack(L).c_str());
		}

		const TiXmlComment* _arg2_ptr=(Luna< TiXmlBase >::checkSubType< TiXmlComment >(L,2));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in TiXmlComment::TiXmlComment function");
		}
		const TiXmlComment & _arg2=*_arg2_ptr;

		return new wrapper_TiXmlComment(L,NULL, _arg2);
	}

	// Overload binder for TiXmlComment::TiXmlComment
	static TiXmlComment* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);

		luaL_error(L, "error in function TiXmlComment, cannot match any of the overloads for function TiXmlComment:\n  TiXmlComment()\n  TiXmlComment(const char *)\n  TiXmlComment(const TiXmlComment &)\n  TiXmlComment(lua_Table *)\n  TiXmlComment(lua_Table *, const char *)\n  TiXmlComment(lua_Table *, const TiXmlComment &)\n");
		return NULL;
	}


	// Function binds:
	// TiXmlNode * TiXmlComment::Clone() const
	static int _bind_Clone(lua_State *L) {
		if (!_lg_typecheck_Clone(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlNode * TiXmlComment::Clone() const function, expected prototype:\nTiXmlNode * TiXmlComment::Clone() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlComment* self=Luna< TiXmlBase >::checkSubType< TiXmlComment >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlNode * TiXmlComment::Clone() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlNode * lret = self->Clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlNode >::push(L,lret,false);

		return 1;
	}

	// const TiXmlComment * TiXmlComment::ToComment() const
	static int _bind_ToComment_overload_1(lua_State *L) {
		if (!_lg_typecheck_ToComment_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlComment * TiXmlComment::ToComment() const function, expected prototype:\nconst TiXmlComment * TiXmlComment::ToComment() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlComment* self=Luna< TiXmlBase >::checkSubType< TiXmlComment >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlComment * TiXmlComment::ToComment() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlComment * lret = self->ToComment();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlComment >::push(L,lret,false);

		return 1;
	}

	// TiXmlComment * TiXmlComment::ToComment()
	static int _bind_ToComment_overload_2(lua_State *L) {
		if (!_lg_typecheck_ToComment_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlComment * TiXmlComment::ToComment() function, expected prototype:\nTiXmlComment * TiXmlComment::ToComment()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlComment* self=Luna< TiXmlBase >::checkSubType< TiXmlComment >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlComment * TiXmlComment::ToComment(). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlComment * lret = self->ToComment();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlComment >::push(L,lret,false);

		return 1;
	}

	// Overload binder for TiXmlComment::ToComment
	static int _bind_ToComment(lua_State *L) {
		if (_lg_typecheck_ToComment_overload_1(L)) return _bind_ToComment_overload_1(L);
		if (_lg_typecheck_ToComment_overload_2(L)) return _bind_ToComment_overload_2(L);

		luaL_error(L, "error in function ToComment, cannot match any of the overloads for function ToComment:\n  ToComment()\n  ToComment()\n");
		return 0;
	}

	// bool TiXmlComment::Accept(TiXmlVisitor * visitor) const
	static int _bind_Accept(lua_State *L) {
		if (!_lg_typecheck_Accept(L)) {
			luaL_error(L, "luna typecheck failed in bool TiXmlComment::Accept(TiXmlVisitor * visitor) const function, expected prototype:\nbool TiXmlComment::Accept(TiXmlVisitor * visitor) const\nClass arguments details:\narg 1 ID = 86845197\n\n%s",luna_dumpStack(L).c_str());
		}

		TiXmlVisitor* visitor=(Luna< TiXmlVisitor >::check(L,2));

		TiXmlComment* self=Luna< TiXmlBase >::checkSubType< TiXmlComment >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool TiXmlComment::Accept(TiXmlVisitor *) const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Accept(visitor);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const TiXmlDocument * TiXmlComment::base_ToDocument() const
	static int _bind_base_ToDocument_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_ToDocument_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlDocument * TiXmlComment::base_ToDocument() const function, expected prototype:\nconst TiXmlDocument * TiXmlComment::base_ToDocument() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlComment* self=Luna< TiXmlBase >::checkSubType< TiXmlComment >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlDocument * TiXmlComment::base_ToDocument() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlDocument * lret = self->TiXmlComment::ToDocument();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlDocument >::push(L,lret,false);

		return 1;
	}

	// TiXmlDocument * TiXmlComment::base_ToDocument()
	static int _bind_base_ToDocument_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_ToDocument_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlDocument * TiXmlComment::base_ToDocument() function, expected prototype:\nTiXmlDocument * TiXmlComment::base_ToDocument()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlComment* self=Luna< TiXmlBase >::checkSubType< TiXmlComment >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlDocument * TiXmlComment::base_ToDocument(). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlDocument * lret = self->TiXmlComment::ToDocument();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlDocument >::push(L,lret,false);

		return 1;
	}

	// Overload binder for TiXmlComment::base_ToDocument
	static int _bind_base_ToDocument(lua_State *L) {
		if (_lg_typecheck_base_ToDocument_overload_1(L)) return _bind_base_ToDocument_overload_1(L);
		if (_lg_typecheck_base_ToDocument_overload_2(L)) return _bind_base_ToDocument_overload_2(L);

		luaL_error(L, "error in function base_ToDocument, cannot match any of the overloads for function base_ToDocument:\n  base_ToDocument()\n  base_ToDocument()\n");
		return 0;
	}

	// const TiXmlElement * TiXmlComment::base_ToElement() const
	static int _bind_base_ToElement_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_ToElement_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlElement * TiXmlComment::base_ToElement() const function, expected prototype:\nconst TiXmlElement * TiXmlComment::base_ToElement() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlComment* self=Luna< TiXmlBase >::checkSubType< TiXmlComment >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlElement * TiXmlComment::base_ToElement() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlElement * lret = self->TiXmlComment::ToElement();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlElement >::push(L,lret,false);

		return 1;
	}

	// TiXmlElement * TiXmlComment::base_ToElement()
	static int _bind_base_ToElement_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_ToElement_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlElement * TiXmlComment::base_ToElement() function, expected prototype:\nTiXmlElement * TiXmlComment::base_ToElement()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlComment* self=Luna< TiXmlBase >::checkSubType< TiXmlComment >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlElement * TiXmlComment::base_ToElement(). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlElement * lret = self->TiXmlComment::ToElement();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlElement >::push(L,lret,false);

		return 1;
	}

	// Overload binder for TiXmlComment::base_ToElement
	static int _bind_base_ToElement(lua_State *L) {
		if (_lg_typecheck_base_ToElement_overload_1(L)) return _bind_base_ToElement_overload_1(L);
		if (_lg_typecheck_base_ToElement_overload_2(L)) return _bind_base_ToElement_overload_2(L);

		luaL_error(L, "error in function base_ToElement, cannot match any of the overloads for function base_ToElement:\n  base_ToElement()\n  base_ToElement()\n");
		return 0;
	}

	// const TiXmlUnknown * TiXmlComment::base_ToUnknown() const
	static int _bind_base_ToUnknown_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_ToUnknown_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlUnknown * TiXmlComment::base_ToUnknown() const function, expected prototype:\nconst TiXmlUnknown * TiXmlComment::base_ToUnknown() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlComment* self=Luna< TiXmlBase >::checkSubType< TiXmlComment >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlUnknown * TiXmlComment::base_ToUnknown() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlUnknown * lret = self->TiXmlComment::ToUnknown();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlUnknown >::push(L,lret,false);

		return 1;
	}

	// TiXmlUnknown * TiXmlComment::base_ToUnknown()
	static int _bind_base_ToUnknown_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_ToUnknown_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlUnknown * TiXmlComment::base_ToUnknown() function, expected prototype:\nTiXmlUnknown * TiXmlComment::base_ToUnknown()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlComment* self=Luna< TiXmlBase >::checkSubType< TiXmlComment >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlUnknown * TiXmlComment::base_ToUnknown(). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlUnknown * lret = self->TiXmlComment::ToUnknown();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlUnknown >::push(L,lret,false);

		return 1;
	}

	// Overload binder for TiXmlComment::base_ToUnknown
	static int _bind_base_ToUnknown(lua_State *L) {
		if (_lg_typecheck_base_ToUnknown_overload_1(L)) return _bind_base_ToUnknown_overload_1(L);
		if (_lg_typecheck_base_ToUnknown_overload_2(L)) return _bind_base_ToUnknown_overload_2(L);

		luaL_error(L, "error in function base_ToUnknown, cannot match any of the overloads for function base_ToUnknown:\n  base_ToUnknown()\n  base_ToUnknown()\n");
		return 0;
	}

	// const TiXmlText * TiXmlComment::base_ToText() const
	static int _bind_base_ToText_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_ToText_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlText * TiXmlComment::base_ToText() const function, expected prototype:\nconst TiXmlText * TiXmlComment::base_ToText() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlComment* self=Luna< TiXmlBase >::checkSubType< TiXmlComment >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlText * TiXmlComment::base_ToText() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlText * lret = self->TiXmlComment::ToText();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlText >::push(L,lret,false);

		return 1;
	}

	// TiXmlText * TiXmlComment::base_ToText()
	static int _bind_base_ToText_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_ToText_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlText * TiXmlComment::base_ToText() function, expected prototype:\nTiXmlText * TiXmlComment::base_ToText()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlComment* self=Luna< TiXmlBase >::checkSubType< TiXmlComment >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlText * TiXmlComment::base_ToText(). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlText * lret = self->TiXmlComment::ToText();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlText >::push(L,lret,false);

		return 1;
	}

	// Overload binder for TiXmlComment::base_ToText
	static int _bind_base_ToText(lua_State *L) {
		if (_lg_typecheck_base_ToText_overload_1(L)) return _bind_base_ToText_overload_1(L);
		if (_lg_typecheck_base_ToText_overload_2(L)) return _bind_base_ToText_overload_2(L);

		luaL_error(L, "error in function base_ToText, cannot match any of the overloads for function base_ToText:\n  base_ToText()\n  base_ToText()\n");
		return 0;
	}

	// const TiXmlDeclaration * TiXmlComment::base_ToDeclaration() const
	static int _bind_base_ToDeclaration_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_ToDeclaration_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlDeclaration * TiXmlComment::base_ToDeclaration() const function, expected prototype:\nconst TiXmlDeclaration * TiXmlComment::base_ToDeclaration() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlComment* self=Luna< TiXmlBase >::checkSubType< TiXmlComment >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlDeclaration * TiXmlComment::base_ToDeclaration() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlDeclaration * lret = self->TiXmlComment::ToDeclaration();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlDeclaration >::push(L,lret,false);

		return 1;
	}

	// TiXmlDeclaration * TiXmlComment::base_ToDeclaration()
	static int _bind_base_ToDeclaration_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_ToDeclaration_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlDeclaration * TiXmlComment::base_ToDeclaration() function, expected prototype:\nTiXmlDeclaration * TiXmlComment::base_ToDeclaration()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlComment* self=Luna< TiXmlBase >::checkSubType< TiXmlComment >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlDeclaration * TiXmlComment::base_ToDeclaration(). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlDeclaration * lret = self->TiXmlComment::ToDeclaration();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlDeclaration >::push(L,lret,false);

		return 1;
	}

	// Overload binder for TiXmlComment::base_ToDeclaration
	static int _bind_base_ToDeclaration(lua_State *L) {
		if (_lg_typecheck_base_ToDeclaration_overload_1(L)) return _bind_base_ToDeclaration_overload_1(L);
		if (_lg_typecheck_base_ToDeclaration_overload_2(L)) return _bind_base_ToDeclaration_overload_2(L);

		luaL_error(L, "error in function base_ToDeclaration, cannot match any of the overloads for function base_ToDeclaration:\n  base_ToDeclaration()\n  base_ToDeclaration()\n");
		return 0;
	}

	// TiXmlNode * TiXmlComment::base_Clone() const
	static int _bind_base_Clone(lua_State *L) {
		if (!_lg_typecheck_base_Clone(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlNode * TiXmlComment::base_Clone() const function, expected prototype:\nTiXmlNode * TiXmlComment::base_Clone() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlComment* self=Luna< TiXmlBase >::checkSubType< TiXmlComment >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlNode * TiXmlComment::base_Clone() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlNode * lret = self->TiXmlComment::Clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlNode >::push(L,lret,false);

		return 1;
	}

	// const TiXmlComment * TiXmlComment::base_ToComment() const
	static int _bind_base_ToComment_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_ToComment_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlComment * TiXmlComment::base_ToComment() const function, expected prototype:\nconst TiXmlComment * TiXmlComment::base_ToComment() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlComment* self=Luna< TiXmlBase >::checkSubType< TiXmlComment >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlComment * TiXmlComment::base_ToComment() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlComment * lret = self->TiXmlComment::ToComment();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlComment >::push(L,lret,false);

		return 1;
	}

	// TiXmlComment * TiXmlComment::base_ToComment()
	static int _bind_base_ToComment_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_ToComment_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlComment * TiXmlComment::base_ToComment() function, expected prototype:\nTiXmlComment * TiXmlComment::base_ToComment()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlComment* self=Luna< TiXmlBase >::checkSubType< TiXmlComment >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlComment * TiXmlComment::base_ToComment(). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlComment * lret = self->TiXmlComment::ToComment();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlComment >::push(L,lret,false);

		return 1;
	}

	// Overload binder for TiXmlComment::base_ToComment
	static int _bind_base_ToComment(lua_State *L) {
		if (_lg_typecheck_base_ToComment_overload_1(L)) return _bind_base_ToComment_overload_1(L);
		if (_lg_typecheck_base_ToComment_overload_2(L)) return _bind_base_ToComment_overload_2(L);

		luaL_error(L, "error in function base_ToComment, cannot match any of the overloads for function base_ToComment:\n  base_ToComment()\n  base_ToComment()\n");
		return 0;
	}

	// bool TiXmlComment::base_Accept(TiXmlVisitor * visitor) const
	static int _bind_base_Accept(lua_State *L) {
		if (!_lg_typecheck_base_Accept(L)) {
			luaL_error(L, "luna typecheck failed in bool TiXmlComment::base_Accept(TiXmlVisitor * visitor) const function, expected prototype:\nbool TiXmlComment::base_Accept(TiXmlVisitor * visitor) const\nClass arguments details:\narg 1 ID = 86845197\n\n%s",luna_dumpStack(L).c_str());
		}

		TiXmlVisitor* visitor=(Luna< TiXmlVisitor >::check(L,2));

		TiXmlComment* self=Luna< TiXmlBase >::checkSubType< TiXmlComment >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool TiXmlComment::base_Accept(TiXmlVisitor *) const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TiXmlComment::Accept(visitor);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:
	// void TiXmlComment::operator=(const TiXmlComment & base)
	static int _bind_op_assign(lua_State *L) {
		if (!_lg_typecheck_op_assign(L)) {
			luaL_error(L, "luna typecheck failed in void TiXmlComment::operator=(const TiXmlComment & base) function, expected prototype:\nvoid TiXmlComment::operator=(const TiXmlComment & base)\nClass arguments details:\narg 1 ID = 89852901\n\n%s",luna_dumpStack(L).c_str());
		}

		const TiXmlComment* base_ptr=(Luna< TiXmlBase >::checkSubType< TiXmlComment >(L,2));
		if( !base_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg base in TiXmlComment::operator= function");
		}
		const TiXmlComment & base=*base_ptr;

		TiXmlComment* self=Luna< TiXmlBase >::checkSubType< TiXmlComment >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void TiXmlComment::operator=(const TiXmlComment &). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->operator=(base);

		return 0;
	}


};

TiXmlComment* LunaTraits< TiXmlComment >::_bind_ctor(lua_State *L) {
	return luna_wrapper_TiXmlComment::_bind_ctor(L);
}

void LunaTraits< TiXmlComment >::_bind_dtor(TiXmlComment* obj) {
	delete obj;
}

const char LunaTraits< TiXmlComment >::className[] = "TiXmlComment";
const char LunaTraits< TiXmlComment >::fullName[] = "TiXmlComment";
const char LunaTraits< TiXmlComment >::moduleName[] = "land";
const char* LunaTraits< TiXmlComment >::parents[] = {"land.TiXmlNode", 0};
const int LunaTraits< TiXmlComment >::hash = 90614615;
const int LunaTraits< TiXmlComment >::uniqueIDs[] = {89852901,0};

luna_RegType LunaTraits< TiXmlComment >::methods[] = {
	{"Clone", &luna_wrapper_TiXmlComment::_bind_Clone},
	{"ToComment", &luna_wrapper_TiXmlComment::_bind_ToComment},
	{"Accept", &luna_wrapper_TiXmlComment::_bind_Accept},
	{"base_ToDocument", &luna_wrapper_TiXmlComment::_bind_base_ToDocument},
	{"base_ToElement", &luna_wrapper_TiXmlComment::_bind_base_ToElement},
	{"base_ToUnknown", &luna_wrapper_TiXmlComment::_bind_base_ToUnknown},
	{"base_ToText", &luna_wrapper_TiXmlComment::_bind_base_ToText},
	{"base_ToDeclaration", &luna_wrapper_TiXmlComment::_bind_base_ToDeclaration},
	{"base_Clone", &luna_wrapper_TiXmlComment::_bind_base_Clone},
	{"base_ToComment", &luna_wrapper_TiXmlComment::_bind_base_ToComment},
	{"base_Accept", &luna_wrapper_TiXmlComment::_bind_base_Accept},
	{"op_assign", &luna_wrapper_TiXmlComment::_bind_op_assign},
	{"fromVoid", &luna_wrapper_TiXmlComment::_bind_fromVoid},
	{"asVoid", &luna_wrapper_TiXmlComment::_bind_asVoid},
	{"getTable", &luna_wrapper_TiXmlComment::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< TiXmlComment >::converters[] = {
	{"TiXmlBase", &luna_wrapper_TiXmlComment::_cast_from_TiXmlBase},
	{0,0}
};

luna_RegEnumType LunaTraits< TiXmlComment >::enumValues[] = {
	{0,0}
};


