#include <plug_common.h>

#include <luna/wrappers/wrapper_TiXmlUnknown.h>

class luna_wrapper_TiXmlUnknown {
public:
	typedef Luna< TiXmlUnknown > luna_t;

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

		TiXmlUnknown* self= (TiXmlUnknown*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< TiXmlUnknown >::push(L,self,false);
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
		//TiXmlUnknown* ptr= dynamic_cast< TiXmlUnknown* >(Luna< TiXmlBase >::check(L,1));
		TiXmlUnknown* ptr= luna_caster< TiXmlBase, TiXmlUnknown >::cast(Luna< TiXmlBase >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< TiXmlUnknown >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,89852901) ) return false;
		if( (!(Luna< TiXmlBase >::checkSubType< TiXmlUnknown >(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,89852901) ) return false;
		if( (!(Luna< TiXmlBase >::checkSubType< TiXmlUnknown >(L,2))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Clone(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ToUnknown_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ToUnknown_overload_2(lua_State *L) {
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

	inline static bool _lg_typecheck_base_ToComment_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_ToComment_overload_2(lua_State *L) {
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

	inline static bool _lg_typecheck_base_ToUnknown_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_ToUnknown_overload_2(lua_State *L) {
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
	// TiXmlUnknown::TiXmlUnknown()
	static TiXmlUnknown* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlUnknown::TiXmlUnknown() function, expected prototype:\nTiXmlUnknown::TiXmlUnknown()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new TiXmlUnknown();
	}

	// TiXmlUnknown::TiXmlUnknown(const TiXmlUnknown & copy)
	static TiXmlUnknown* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlUnknown::TiXmlUnknown(const TiXmlUnknown & copy) function, expected prototype:\nTiXmlUnknown::TiXmlUnknown(const TiXmlUnknown & copy)\nClass arguments details:\narg 1 ID = 89852901\n\n%s",luna_dumpStack(L).c_str());
		}

		const TiXmlUnknown* copy_ptr=(Luna< TiXmlBase >::checkSubType< TiXmlUnknown >(L,1));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in TiXmlUnknown::TiXmlUnknown function");
		}
		const TiXmlUnknown & copy=*copy_ptr;

		return new TiXmlUnknown(copy);
	}

	// TiXmlUnknown::TiXmlUnknown(lua_Table * data)
	static TiXmlUnknown* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlUnknown::TiXmlUnknown(lua_Table * data) function, expected prototype:\nTiXmlUnknown::TiXmlUnknown(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_TiXmlUnknown(L,NULL);
	}

	// TiXmlUnknown::TiXmlUnknown(lua_Table * data, const TiXmlUnknown & copy)
	static TiXmlUnknown* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlUnknown::TiXmlUnknown(lua_Table * data, const TiXmlUnknown & copy) function, expected prototype:\nTiXmlUnknown::TiXmlUnknown(lua_Table * data, const TiXmlUnknown & copy)\nClass arguments details:\narg 2 ID = 89852901\n\n%s",luna_dumpStack(L).c_str());
		}

		const TiXmlUnknown* copy_ptr=(Luna< TiXmlBase >::checkSubType< TiXmlUnknown >(L,2));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in TiXmlUnknown::TiXmlUnknown function");
		}
		const TiXmlUnknown & copy=*copy_ptr;

		return new wrapper_TiXmlUnknown(L,NULL, copy);
	}

	// Overload binder for TiXmlUnknown::TiXmlUnknown
	static TiXmlUnknown* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function TiXmlUnknown, cannot match any of the overloads for function TiXmlUnknown:\n  TiXmlUnknown()\n  TiXmlUnknown(const TiXmlUnknown &)\n  TiXmlUnknown(lua_Table *)\n  TiXmlUnknown(lua_Table *, const TiXmlUnknown &)\n");
		return NULL;
	}


	// Function binds:
	// TiXmlNode * TiXmlUnknown::Clone() const
	static int _bind_Clone(lua_State *L) {
		if (!_lg_typecheck_Clone(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlNode * TiXmlUnknown::Clone() const function, expected prototype:\nTiXmlNode * TiXmlUnknown::Clone() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlUnknown* self=Luna< TiXmlBase >::checkSubType< TiXmlUnknown >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlNode * TiXmlUnknown::Clone() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlNode * lret = self->Clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlNode >::push(L,lret,false);

		return 1;
	}

	// const TiXmlUnknown * TiXmlUnknown::ToUnknown() const
	static int _bind_ToUnknown_overload_1(lua_State *L) {
		if (!_lg_typecheck_ToUnknown_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlUnknown * TiXmlUnknown::ToUnknown() const function, expected prototype:\nconst TiXmlUnknown * TiXmlUnknown::ToUnknown() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlUnknown* self=Luna< TiXmlBase >::checkSubType< TiXmlUnknown >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlUnknown * TiXmlUnknown::ToUnknown() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlUnknown * lret = self->ToUnknown();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlUnknown >::push(L,lret,false);

		return 1;
	}

	// TiXmlUnknown * TiXmlUnknown::ToUnknown()
	static int _bind_ToUnknown_overload_2(lua_State *L) {
		if (!_lg_typecheck_ToUnknown_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlUnknown * TiXmlUnknown::ToUnknown() function, expected prototype:\nTiXmlUnknown * TiXmlUnknown::ToUnknown()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlUnknown* self=Luna< TiXmlBase >::checkSubType< TiXmlUnknown >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlUnknown * TiXmlUnknown::ToUnknown(). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlUnknown * lret = self->ToUnknown();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlUnknown >::push(L,lret,false);

		return 1;
	}

	// Overload binder for TiXmlUnknown::ToUnknown
	static int _bind_ToUnknown(lua_State *L) {
		if (_lg_typecheck_ToUnknown_overload_1(L)) return _bind_ToUnknown_overload_1(L);
		if (_lg_typecheck_ToUnknown_overload_2(L)) return _bind_ToUnknown_overload_2(L);

		luaL_error(L, "error in function ToUnknown, cannot match any of the overloads for function ToUnknown:\n  ToUnknown()\n  ToUnknown()\n");
		return 0;
	}

	// bool TiXmlUnknown::Accept(TiXmlVisitor * content) const
	static int _bind_Accept(lua_State *L) {
		if (!_lg_typecheck_Accept(L)) {
			luaL_error(L, "luna typecheck failed in bool TiXmlUnknown::Accept(TiXmlVisitor * content) const function, expected prototype:\nbool TiXmlUnknown::Accept(TiXmlVisitor * content) const\nClass arguments details:\narg 1 ID = 86845197\n\n%s",luna_dumpStack(L).c_str());
		}

		TiXmlVisitor* content=(Luna< TiXmlVisitor >::check(L,2));

		TiXmlUnknown* self=Luna< TiXmlBase >::checkSubType< TiXmlUnknown >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool TiXmlUnknown::Accept(TiXmlVisitor *) const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Accept(content);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const TiXmlDocument * TiXmlUnknown::base_ToDocument() const
	static int _bind_base_ToDocument_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_ToDocument_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlDocument * TiXmlUnknown::base_ToDocument() const function, expected prototype:\nconst TiXmlDocument * TiXmlUnknown::base_ToDocument() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlUnknown* self=Luna< TiXmlBase >::checkSubType< TiXmlUnknown >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlDocument * TiXmlUnknown::base_ToDocument() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlDocument * lret = self->TiXmlUnknown::ToDocument();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlDocument >::push(L,lret,false);

		return 1;
	}

	// TiXmlDocument * TiXmlUnknown::base_ToDocument()
	static int _bind_base_ToDocument_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_ToDocument_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlDocument * TiXmlUnknown::base_ToDocument() function, expected prototype:\nTiXmlDocument * TiXmlUnknown::base_ToDocument()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlUnknown* self=Luna< TiXmlBase >::checkSubType< TiXmlUnknown >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlDocument * TiXmlUnknown::base_ToDocument(). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlDocument * lret = self->TiXmlUnknown::ToDocument();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlDocument >::push(L,lret,false);

		return 1;
	}

	// Overload binder for TiXmlUnknown::base_ToDocument
	static int _bind_base_ToDocument(lua_State *L) {
		if (_lg_typecheck_base_ToDocument_overload_1(L)) return _bind_base_ToDocument_overload_1(L);
		if (_lg_typecheck_base_ToDocument_overload_2(L)) return _bind_base_ToDocument_overload_2(L);

		luaL_error(L, "error in function base_ToDocument, cannot match any of the overloads for function base_ToDocument:\n  base_ToDocument()\n  base_ToDocument()\n");
		return 0;
	}

	// const TiXmlElement * TiXmlUnknown::base_ToElement() const
	static int _bind_base_ToElement_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_ToElement_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlElement * TiXmlUnknown::base_ToElement() const function, expected prototype:\nconst TiXmlElement * TiXmlUnknown::base_ToElement() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlUnknown* self=Luna< TiXmlBase >::checkSubType< TiXmlUnknown >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlElement * TiXmlUnknown::base_ToElement() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlElement * lret = self->TiXmlUnknown::ToElement();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlElement >::push(L,lret,false);

		return 1;
	}

	// TiXmlElement * TiXmlUnknown::base_ToElement()
	static int _bind_base_ToElement_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_ToElement_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlElement * TiXmlUnknown::base_ToElement() function, expected prototype:\nTiXmlElement * TiXmlUnknown::base_ToElement()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlUnknown* self=Luna< TiXmlBase >::checkSubType< TiXmlUnknown >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlElement * TiXmlUnknown::base_ToElement(). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlElement * lret = self->TiXmlUnknown::ToElement();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlElement >::push(L,lret,false);

		return 1;
	}

	// Overload binder for TiXmlUnknown::base_ToElement
	static int _bind_base_ToElement(lua_State *L) {
		if (_lg_typecheck_base_ToElement_overload_1(L)) return _bind_base_ToElement_overload_1(L);
		if (_lg_typecheck_base_ToElement_overload_2(L)) return _bind_base_ToElement_overload_2(L);

		luaL_error(L, "error in function base_ToElement, cannot match any of the overloads for function base_ToElement:\n  base_ToElement()\n  base_ToElement()\n");
		return 0;
	}

	// const TiXmlComment * TiXmlUnknown::base_ToComment() const
	static int _bind_base_ToComment_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_ToComment_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlComment * TiXmlUnknown::base_ToComment() const function, expected prototype:\nconst TiXmlComment * TiXmlUnknown::base_ToComment() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlUnknown* self=Luna< TiXmlBase >::checkSubType< TiXmlUnknown >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlComment * TiXmlUnknown::base_ToComment() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlComment * lret = self->TiXmlUnknown::ToComment();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlComment >::push(L,lret,false);

		return 1;
	}

	// TiXmlComment * TiXmlUnknown::base_ToComment()
	static int _bind_base_ToComment_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_ToComment_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlComment * TiXmlUnknown::base_ToComment() function, expected prototype:\nTiXmlComment * TiXmlUnknown::base_ToComment()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlUnknown* self=Luna< TiXmlBase >::checkSubType< TiXmlUnknown >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlComment * TiXmlUnknown::base_ToComment(). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlComment * lret = self->TiXmlUnknown::ToComment();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlComment >::push(L,lret,false);

		return 1;
	}

	// Overload binder for TiXmlUnknown::base_ToComment
	static int _bind_base_ToComment(lua_State *L) {
		if (_lg_typecheck_base_ToComment_overload_1(L)) return _bind_base_ToComment_overload_1(L);
		if (_lg_typecheck_base_ToComment_overload_2(L)) return _bind_base_ToComment_overload_2(L);

		luaL_error(L, "error in function base_ToComment, cannot match any of the overloads for function base_ToComment:\n  base_ToComment()\n  base_ToComment()\n");
		return 0;
	}

	// const TiXmlText * TiXmlUnknown::base_ToText() const
	static int _bind_base_ToText_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_ToText_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlText * TiXmlUnknown::base_ToText() const function, expected prototype:\nconst TiXmlText * TiXmlUnknown::base_ToText() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlUnknown* self=Luna< TiXmlBase >::checkSubType< TiXmlUnknown >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlText * TiXmlUnknown::base_ToText() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlText * lret = self->TiXmlUnknown::ToText();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlText >::push(L,lret,false);

		return 1;
	}

	// TiXmlText * TiXmlUnknown::base_ToText()
	static int _bind_base_ToText_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_ToText_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlText * TiXmlUnknown::base_ToText() function, expected prototype:\nTiXmlText * TiXmlUnknown::base_ToText()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlUnknown* self=Luna< TiXmlBase >::checkSubType< TiXmlUnknown >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlText * TiXmlUnknown::base_ToText(). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlText * lret = self->TiXmlUnknown::ToText();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlText >::push(L,lret,false);

		return 1;
	}

	// Overload binder for TiXmlUnknown::base_ToText
	static int _bind_base_ToText(lua_State *L) {
		if (_lg_typecheck_base_ToText_overload_1(L)) return _bind_base_ToText_overload_1(L);
		if (_lg_typecheck_base_ToText_overload_2(L)) return _bind_base_ToText_overload_2(L);

		luaL_error(L, "error in function base_ToText, cannot match any of the overloads for function base_ToText:\n  base_ToText()\n  base_ToText()\n");
		return 0;
	}

	// const TiXmlDeclaration * TiXmlUnknown::base_ToDeclaration() const
	static int _bind_base_ToDeclaration_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_ToDeclaration_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlDeclaration * TiXmlUnknown::base_ToDeclaration() const function, expected prototype:\nconst TiXmlDeclaration * TiXmlUnknown::base_ToDeclaration() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlUnknown* self=Luna< TiXmlBase >::checkSubType< TiXmlUnknown >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlDeclaration * TiXmlUnknown::base_ToDeclaration() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlDeclaration * lret = self->TiXmlUnknown::ToDeclaration();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlDeclaration >::push(L,lret,false);

		return 1;
	}

	// TiXmlDeclaration * TiXmlUnknown::base_ToDeclaration()
	static int _bind_base_ToDeclaration_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_ToDeclaration_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlDeclaration * TiXmlUnknown::base_ToDeclaration() function, expected prototype:\nTiXmlDeclaration * TiXmlUnknown::base_ToDeclaration()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlUnknown* self=Luna< TiXmlBase >::checkSubType< TiXmlUnknown >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlDeclaration * TiXmlUnknown::base_ToDeclaration(). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlDeclaration * lret = self->TiXmlUnknown::ToDeclaration();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlDeclaration >::push(L,lret,false);

		return 1;
	}

	// Overload binder for TiXmlUnknown::base_ToDeclaration
	static int _bind_base_ToDeclaration(lua_State *L) {
		if (_lg_typecheck_base_ToDeclaration_overload_1(L)) return _bind_base_ToDeclaration_overload_1(L);
		if (_lg_typecheck_base_ToDeclaration_overload_2(L)) return _bind_base_ToDeclaration_overload_2(L);

		luaL_error(L, "error in function base_ToDeclaration, cannot match any of the overloads for function base_ToDeclaration:\n  base_ToDeclaration()\n  base_ToDeclaration()\n");
		return 0;
	}

	// TiXmlNode * TiXmlUnknown::base_Clone() const
	static int _bind_base_Clone(lua_State *L) {
		if (!_lg_typecheck_base_Clone(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlNode * TiXmlUnknown::base_Clone() const function, expected prototype:\nTiXmlNode * TiXmlUnknown::base_Clone() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlUnknown* self=Luna< TiXmlBase >::checkSubType< TiXmlUnknown >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlNode * TiXmlUnknown::base_Clone() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlNode * lret = self->TiXmlUnknown::Clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlNode >::push(L,lret,false);

		return 1;
	}

	// const TiXmlUnknown * TiXmlUnknown::base_ToUnknown() const
	static int _bind_base_ToUnknown_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_ToUnknown_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlUnknown * TiXmlUnknown::base_ToUnknown() const function, expected prototype:\nconst TiXmlUnknown * TiXmlUnknown::base_ToUnknown() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlUnknown* self=Luna< TiXmlBase >::checkSubType< TiXmlUnknown >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlUnknown * TiXmlUnknown::base_ToUnknown() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlUnknown * lret = self->TiXmlUnknown::ToUnknown();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlUnknown >::push(L,lret,false);

		return 1;
	}

	// TiXmlUnknown * TiXmlUnknown::base_ToUnknown()
	static int _bind_base_ToUnknown_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_ToUnknown_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlUnknown * TiXmlUnknown::base_ToUnknown() function, expected prototype:\nTiXmlUnknown * TiXmlUnknown::base_ToUnknown()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlUnknown* self=Luna< TiXmlBase >::checkSubType< TiXmlUnknown >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlUnknown * TiXmlUnknown::base_ToUnknown(). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlUnknown * lret = self->TiXmlUnknown::ToUnknown();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlUnknown >::push(L,lret,false);

		return 1;
	}

	// Overload binder for TiXmlUnknown::base_ToUnknown
	static int _bind_base_ToUnknown(lua_State *L) {
		if (_lg_typecheck_base_ToUnknown_overload_1(L)) return _bind_base_ToUnknown_overload_1(L);
		if (_lg_typecheck_base_ToUnknown_overload_2(L)) return _bind_base_ToUnknown_overload_2(L);

		luaL_error(L, "error in function base_ToUnknown, cannot match any of the overloads for function base_ToUnknown:\n  base_ToUnknown()\n  base_ToUnknown()\n");
		return 0;
	}

	// bool TiXmlUnknown::base_Accept(TiXmlVisitor * content) const
	static int _bind_base_Accept(lua_State *L) {
		if (!_lg_typecheck_base_Accept(L)) {
			luaL_error(L, "luna typecheck failed in bool TiXmlUnknown::base_Accept(TiXmlVisitor * content) const function, expected prototype:\nbool TiXmlUnknown::base_Accept(TiXmlVisitor * content) const\nClass arguments details:\narg 1 ID = 86845197\n\n%s",luna_dumpStack(L).c_str());
		}

		TiXmlVisitor* content=(Luna< TiXmlVisitor >::check(L,2));

		TiXmlUnknown* self=Luna< TiXmlBase >::checkSubType< TiXmlUnknown >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool TiXmlUnknown::base_Accept(TiXmlVisitor *) const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TiXmlUnknown::Accept(content);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:
	// void TiXmlUnknown::operator=(const TiXmlUnknown & copy)
	static int _bind_op_assign(lua_State *L) {
		if (!_lg_typecheck_op_assign(L)) {
			luaL_error(L, "luna typecheck failed in void TiXmlUnknown::operator=(const TiXmlUnknown & copy) function, expected prototype:\nvoid TiXmlUnknown::operator=(const TiXmlUnknown & copy)\nClass arguments details:\narg 1 ID = 89852901\n\n%s",luna_dumpStack(L).c_str());
		}

		const TiXmlUnknown* copy_ptr=(Luna< TiXmlBase >::checkSubType< TiXmlUnknown >(L,2));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in TiXmlUnknown::operator= function");
		}
		const TiXmlUnknown & copy=*copy_ptr;

		TiXmlUnknown* self=Luna< TiXmlBase >::checkSubType< TiXmlUnknown >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void TiXmlUnknown::operator=(const TiXmlUnknown &). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->operator=(copy);

		return 0;
	}


};

TiXmlUnknown* LunaTraits< TiXmlUnknown >::_bind_ctor(lua_State *L) {
	return luna_wrapper_TiXmlUnknown::_bind_ctor(L);
}

void LunaTraits< TiXmlUnknown >::_bind_dtor(TiXmlUnknown* obj) {
	delete obj;
}

const char LunaTraits< TiXmlUnknown >::className[] = "TiXmlUnknown";
const char LunaTraits< TiXmlUnknown >::fullName[] = "TiXmlUnknown";
const char LunaTraits< TiXmlUnknown >::moduleName[] = "land";
const char* LunaTraits< TiXmlUnknown >::parents[] = {"land.TiXmlNode", 0};
const int LunaTraits< TiXmlUnknown >::hash = 35243581;
const int LunaTraits< TiXmlUnknown >::uniqueIDs[] = {89852901,0};

luna_RegType LunaTraits< TiXmlUnknown >::methods[] = {
	{"Clone", &luna_wrapper_TiXmlUnknown::_bind_Clone},
	{"ToUnknown", &luna_wrapper_TiXmlUnknown::_bind_ToUnknown},
	{"Accept", &luna_wrapper_TiXmlUnknown::_bind_Accept},
	{"base_ToDocument", &luna_wrapper_TiXmlUnknown::_bind_base_ToDocument},
	{"base_ToElement", &luna_wrapper_TiXmlUnknown::_bind_base_ToElement},
	{"base_ToComment", &luna_wrapper_TiXmlUnknown::_bind_base_ToComment},
	{"base_ToText", &luna_wrapper_TiXmlUnknown::_bind_base_ToText},
	{"base_ToDeclaration", &luna_wrapper_TiXmlUnknown::_bind_base_ToDeclaration},
	{"base_Clone", &luna_wrapper_TiXmlUnknown::_bind_base_Clone},
	{"base_ToUnknown", &luna_wrapper_TiXmlUnknown::_bind_base_ToUnknown},
	{"base_Accept", &luna_wrapper_TiXmlUnknown::_bind_base_Accept},
	{"op_assign", &luna_wrapper_TiXmlUnknown::_bind_op_assign},
	{"fromVoid", &luna_wrapper_TiXmlUnknown::_bind_fromVoid},
	{"asVoid", &luna_wrapper_TiXmlUnknown::_bind_asVoid},
	{"getTable", &luna_wrapper_TiXmlUnknown::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< TiXmlUnknown >::converters[] = {
	{"TiXmlBase", &luna_wrapper_TiXmlUnknown::_cast_from_TiXmlBase},
	{0,0}
};

luna_RegEnumType LunaTraits< TiXmlUnknown >::enumValues[] = {
	{0,0}
};


