#include <plug_common.h>

#include <luna/wrappers/wrapper_TiXmlText.h>

class luna_wrapper_TiXmlText {
public:
	typedef Luna< TiXmlText > luna_t;

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

		TiXmlText* self= (TiXmlText*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< TiXmlText >::push(L,self,false);
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
		//TiXmlText* ptr= dynamic_cast< TiXmlText* >(Luna< TiXmlBase >::check(L,1));
		TiXmlText* ptr= luna_caster< TiXmlBase, TiXmlText >::cast(Luna< TiXmlBase >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< TiXmlText >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
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
		if( (!(Luna< TiXmlBase >::checkSubType< TiXmlText >(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
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
		if( (!(Luna< TiXmlBase >::checkSubType< TiXmlText >(L,2))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_CDATA(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetCDATA(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ToText_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ToText_overload_2(lua_State *L) {
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

	inline static bool _lg_typecheck_base_ToUnknown_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_ToUnknown_overload_2(lua_State *L) {
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

	inline static bool _lg_typecheck_base_ToText_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_ToText_overload_2(lua_State *L) {
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
	// TiXmlText::TiXmlText(const char * initValue)
	static TiXmlText* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlText::TiXmlText(const char * initValue) function, expected prototype:\nTiXmlText::TiXmlText(const char * initValue)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * initValue=(const char *)lua_tostring(L,1);

		return new TiXmlText(initValue);
	}

	// TiXmlText::TiXmlText(const std::string & initValue)
	static TiXmlText* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlText::TiXmlText(const std::string & initValue) function, expected prototype:\nTiXmlText::TiXmlText(const std::string & initValue)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string initValue(lua_tostring(L,1),lua_objlen(L,1));

		return new TiXmlText(initValue);
	}

	// TiXmlText::TiXmlText(const TiXmlText & copy)
	static TiXmlText* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlText::TiXmlText(const TiXmlText & copy) function, expected prototype:\nTiXmlText::TiXmlText(const TiXmlText & copy)\nClass arguments details:\narg 1 ID = 89852901\n\n%s",luna_dumpStack(L).c_str());
		}

		const TiXmlText* copy_ptr=(Luna< TiXmlBase >::checkSubType< TiXmlText >(L,1));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in TiXmlText::TiXmlText function");
		}
		const TiXmlText & copy=*copy_ptr;

		return new TiXmlText(copy);
	}

	// TiXmlText::TiXmlText(lua_Table * data, const char * initValue)
	static TiXmlText* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlText::TiXmlText(lua_Table * data, const char * initValue) function, expected prototype:\nTiXmlText::TiXmlText(lua_Table * data, const char * initValue)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * initValue=(const char *)lua_tostring(L,2);

		return new wrapper_TiXmlText(L,NULL, initValue);
	}

	// TiXmlText::TiXmlText(lua_Table * data, const std::string & initValue)
	static TiXmlText* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlText::TiXmlText(lua_Table * data, const std::string & initValue) function, expected prototype:\nTiXmlText::TiXmlText(lua_Table * data, const std::string & initValue)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string initValue(lua_tostring(L,2),lua_objlen(L,2));

		return new wrapper_TiXmlText(L,NULL, initValue);
	}

	// TiXmlText::TiXmlText(lua_Table * data, const TiXmlText & copy)
	static TiXmlText* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlText::TiXmlText(lua_Table * data, const TiXmlText & copy) function, expected prototype:\nTiXmlText::TiXmlText(lua_Table * data, const TiXmlText & copy)\nClass arguments details:\narg 2 ID = 89852901\n\n%s",luna_dumpStack(L).c_str());
		}

		const TiXmlText* copy_ptr=(Luna< TiXmlBase >::checkSubType< TiXmlText >(L,2));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in TiXmlText::TiXmlText function");
		}
		const TiXmlText & copy=*copy_ptr;

		return new wrapper_TiXmlText(L,NULL, copy);
	}

	// Overload binder for TiXmlText::TiXmlText
	static TiXmlText* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);

		luaL_error(L, "error in function TiXmlText, cannot match any of the overloads for function TiXmlText:\n  TiXmlText(const char *)\n  TiXmlText(const std::string &)\n  TiXmlText(const TiXmlText &)\n  TiXmlText(lua_Table *, const char *)\n  TiXmlText(lua_Table *, const std::string &)\n  TiXmlText(lua_Table *, const TiXmlText &)\n");
		return NULL;
	}


	// Function binds:
	// bool TiXmlText::CDATA() const
	static int _bind_CDATA(lua_State *L) {
		if (!_lg_typecheck_CDATA(L)) {
			luaL_error(L, "luna typecheck failed in bool TiXmlText::CDATA() const function, expected prototype:\nbool TiXmlText::CDATA() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlText* self=Luna< TiXmlBase >::checkSubType< TiXmlText >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool TiXmlText::CDATA() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->CDATA();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void TiXmlText::SetCDATA(bool _cdata)
	static int _bind_SetCDATA(lua_State *L) {
		if (!_lg_typecheck_SetCDATA(L)) {
			luaL_error(L, "luna typecheck failed in void TiXmlText::SetCDATA(bool _cdata) function, expected prototype:\nvoid TiXmlText::SetCDATA(bool _cdata)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool _cdata=(bool)(lua_toboolean(L,2)==1);

		TiXmlText* self=Luna< TiXmlBase >::checkSubType< TiXmlText >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void TiXmlText::SetCDATA(bool). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetCDATA(_cdata);

		return 0;
	}

	// const TiXmlText * TiXmlText::ToText() const
	static int _bind_ToText_overload_1(lua_State *L) {
		if (!_lg_typecheck_ToText_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlText * TiXmlText::ToText() const function, expected prototype:\nconst TiXmlText * TiXmlText::ToText() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlText* self=Luna< TiXmlBase >::checkSubType< TiXmlText >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlText * TiXmlText::ToText() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlText * lret = self->ToText();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlText >::push(L,lret,false);

		return 1;
	}

	// TiXmlText * TiXmlText::ToText()
	static int _bind_ToText_overload_2(lua_State *L) {
		if (!_lg_typecheck_ToText_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlText * TiXmlText::ToText() function, expected prototype:\nTiXmlText * TiXmlText::ToText()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlText* self=Luna< TiXmlBase >::checkSubType< TiXmlText >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlText * TiXmlText::ToText(). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlText * lret = self->ToText();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlText >::push(L,lret,false);

		return 1;
	}

	// Overload binder for TiXmlText::ToText
	static int _bind_ToText(lua_State *L) {
		if (_lg_typecheck_ToText_overload_1(L)) return _bind_ToText_overload_1(L);
		if (_lg_typecheck_ToText_overload_2(L)) return _bind_ToText_overload_2(L);

		luaL_error(L, "error in function ToText, cannot match any of the overloads for function ToText:\n  ToText()\n  ToText()\n");
		return 0;
	}

	// bool TiXmlText::Accept(TiXmlVisitor * content) const
	static int _bind_Accept(lua_State *L) {
		if (!_lg_typecheck_Accept(L)) {
			luaL_error(L, "luna typecheck failed in bool TiXmlText::Accept(TiXmlVisitor * content) const function, expected prototype:\nbool TiXmlText::Accept(TiXmlVisitor * content) const\nClass arguments details:\narg 1 ID = 86845197\n\n%s",luna_dumpStack(L).c_str());
		}

		TiXmlVisitor* content=(Luna< TiXmlVisitor >::check(L,2));

		TiXmlText* self=Luna< TiXmlBase >::checkSubType< TiXmlText >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool TiXmlText::Accept(TiXmlVisitor *) const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Accept(content);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const TiXmlDocument * TiXmlText::base_ToDocument() const
	static int _bind_base_ToDocument_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_ToDocument_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlDocument * TiXmlText::base_ToDocument() const function, expected prototype:\nconst TiXmlDocument * TiXmlText::base_ToDocument() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlText* self=Luna< TiXmlBase >::checkSubType< TiXmlText >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlDocument * TiXmlText::base_ToDocument() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlDocument * lret = self->TiXmlText::ToDocument();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlDocument >::push(L,lret,false);

		return 1;
	}

	// TiXmlDocument * TiXmlText::base_ToDocument()
	static int _bind_base_ToDocument_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_ToDocument_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlDocument * TiXmlText::base_ToDocument() function, expected prototype:\nTiXmlDocument * TiXmlText::base_ToDocument()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlText* self=Luna< TiXmlBase >::checkSubType< TiXmlText >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlDocument * TiXmlText::base_ToDocument(). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlDocument * lret = self->TiXmlText::ToDocument();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlDocument >::push(L,lret,false);

		return 1;
	}

	// Overload binder for TiXmlText::base_ToDocument
	static int _bind_base_ToDocument(lua_State *L) {
		if (_lg_typecheck_base_ToDocument_overload_1(L)) return _bind_base_ToDocument_overload_1(L);
		if (_lg_typecheck_base_ToDocument_overload_2(L)) return _bind_base_ToDocument_overload_2(L);

		luaL_error(L, "error in function base_ToDocument, cannot match any of the overloads for function base_ToDocument:\n  base_ToDocument()\n  base_ToDocument()\n");
		return 0;
	}

	// const TiXmlElement * TiXmlText::base_ToElement() const
	static int _bind_base_ToElement_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_ToElement_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlElement * TiXmlText::base_ToElement() const function, expected prototype:\nconst TiXmlElement * TiXmlText::base_ToElement() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlText* self=Luna< TiXmlBase >::checkSubType< TiXmlText >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlElement * TiXmlText::base_ToElement() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlElement * lret = self->TiXmlText::ToElement();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlElement >::push(L,lret,false);

		return 1;
	}

	// TiXmlElement * TiXmlText::base_ToElement()
	static int _bind_base_ToElement_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_ToElement_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlElement * TiXmlText::base_ToElement() function, expected prototype:\nTiXmlElement * TiXmlText::base_ToElement()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlText* self=Luna< TiXmlBase >::checkSubType< TiXmlText >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlElement * TiXmlText::base_ToElement(). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlElement * lret = self->TiXmlText::ToElement();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlElement >::push(L,lret,false);

		return 1;
	}

	// Overload binder for TiXmlText::base_ToElement
	static int _bind_base_ToElement(lua_State *L) {
		if (_lg_typecheck_base_ToElement_overload_1(L)) return _bind_base_ToElement_overload_1(L);
		if (_lg_typecheck_base_ToElement_overload_2(L)) return _bind_base_ToElement_overload_2(L);

		luaL_error(L, "error in function base_ToElement, cannot match any of the overloads for function base_ToElement:\n  base_ToElement()\n  base_ToElement()\n");
		return 0;
	}

	// const TiXmlComment * TiXmlText::base_ToComment() const
	static int _bind_base_ToComment_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_ToComment_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlComment * TiXmlText::base_ToComment() const function, expected prototype:\nconst TiXmlComment * TiXmlText::base_ToComment() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlText* self=Luna< TiXmlBase >::checkSubType< TiXmlText >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlComment * TiXmlText::base_ToComment() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlComment * lret = self->TiXmlText::ToComment();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlComment >::push(L,lret,false);

		return 1;
	}

	// TiXmlComment * TiXmlText::base_ToComment()
	static int _bind_base_ToComment_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_ToComment_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlComment * TiXmlText::base_ToComment() function, expected prototype:\nTiXmlComment * TiXmlText::base_ToComment()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlText* self=Luna< TiXmlBase >::checkSubType< TiXmlText >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlComment * TiXmlText::base_ToComment(). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlComment * lret = self->TiXmlText::ToComment();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlComment >::push(L,lret,false);

		return 1;
	}

	// Overload binder for TiXmlText::base_ToComment
	static int _bind_base_ToComment(lua_State *L) {
		if (_lg_typecheck_base_ToComment_overload_1(L)) return _bind_base_ToComment_overload_1(L);
		if (_lg_typecheck_base_ToComment_overload_2(L)) return _bind_base_ToComment_overload_2(L);

		luaL_error(L, "error in function base_ToComment, cannot match any of the overloads for function base_ToComment:\n  base_ToComment()\n  base_ToComment()\n");
		return 0;
	}

	// const TiXmlUnknown * TiXmlText::base_ToUnknown() const
	static int _bind_base_ToUnknown_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_ToUnknown_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlUnknown * TiXmlText::base_ToUnknown() const function, expected prototype:\nconst TiXmlUnknown * TiXmlText::base_ToUnknown() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlText* self=Luna< TiXmlBase >::checkSubType< TiXmlText >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlUnknown * TiXmlText::base_ToUnknown() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlUnknown * lret = self->TiXmlText::ToUnknown();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlUnknown >::push(L,lret,false);

		return 1;
	}

	// TiXmlUnknown * TiXmlText::base_ToUnknown()
	static int _bind_base_ToUnknown_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_ToUnknown_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlUnknown * TiXmlText::base_ToUnknown() function, expected prototype:\nTiXmlUnknown * TiXmlText::base_ToUnknown()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlText* self=Luna< TiXmlBase >::checkSubType< TiXmlText >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlUnknown * TiXmlText::base_ToUnknown(). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlUnknown * lret = self->TiXmlText::ToUnknown();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlUnknown >::push(L,lret,false);

		return 1;
	}

	// Overload binder for TiXmlText::base_ToUnknown
	static int _bind_base_ToUnknown(lua_State *L) {
		if (_lg_typecheck_base_ToUnknown_overload_1(L)) return _bind_base_ToUnknown_overload_1(L);
		if (_lg_typecheck_base_ToUnknown_overload_2(L)) return _bind_base_ToUnknown_overload_2(L);

		luaL_error(L, "error in function base_ToUnknown, cannot match any of the overloads for function base_ToUnknown:\n  base_ToUnknown()\n  base_ToUnknown()\n");
		return 0;
	}

	// const TiXmlDeclaration * TiXmlText::base_ToDeclaration() const
	static int _bind_base_ToDeclaration_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_ToDeclaration_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlDeclaration * TiXmlText::base_ToDeclaration() const function, expected prototype:\nconst TiXmlDeclaration * TiXmlText::base_ToDeclaration() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlText* self=Luna< TiXmlBase >::checkSubType< TiXmlText >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlDeclaration * TiXmlText::base_ToDeclaration() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlDeclaration * lret = self->TiXmlText::ToDeclaration();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlDeclaration >::push(L,lret,false);

		return 1;
	}

	// TiXmlDeclaration * TiXmlText::base_ToDeclaration()
	static int _bind_base_ToDeclaration_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_ToDeclaration_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlDeclaration * TiXmlText::base_ToDeclaration() function, expected prototype:\nTiXmlDeclaration * TiXmlText::base_ToDeclaration()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlText* self=Luna< TiXmlBase >::checkSubType< TiXmlText >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlDeclaration * TiXmlText::base_ToDeclaration(). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlDeclaration * lret = self->TiXmlText::ToDeclaration();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlDeclaration >::push(L,lret,false);

		return 1;
	}

	// Overload binder for TiXmlText::base_ToDeclaration
	static int _bind_base_ToDeclaration(lua_State *L) {
		if (_lg_typecheck_base_ToDeclaration_overload_1(L)) return _bind_base_ToDeclaration_overload_1(L);
		if (_lg_typecheck_base_ToDeclaration_overload_2(L)) return _bind_base_ToDeclaration_overload_2(L);

		luaL_error(L, "error in function base_ToDeclaration, cannot match any of the overloads for function base_ToDeclaration:\n  base_ToDeclaration()\n  base_ToDeclaration()\n");
		return 0;
	}

	// const TiXmlText * TiXmlText::base_ToText() const
	static int _bind_base_ToText_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_ToText_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlText * TiXmlText::base_ToText() const function, expected prototype:\nconst TiXmlText * TiXmlText::base_ToText() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlText* self=Luna< TiXmlBase >::checkSubType< TiXmlText >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlText * TiXmlText::base_ToText() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlText * lret = self->TiXmlText::ToText();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlText >::push(L,lret,false);

		return 1;
	}

	// TiXmlText * TiXmlText::base_ToText()
	static int _bind_base_ToText_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_ToText_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlText * TiXmlText::base_ToText() function, expected prototype:\nTiXmlText * TiXmlText::base_ToText()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlText* self=Luna< TiXmlBase >::checkSubType< TiXmlText >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlText * TiXmlText::base_ToText(). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlText * lret = self->TiXmlText::ToText();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlText >::push(L,lret,false);

		return 1;
	}

	// Overload binder for TiXmlText::base_ToText
	static int _bind_base_ToText(lua_State *L) {
		if (_lg_typecheck_base_ToText_overload_1(L)) return _bind_base_ToText_overload_1(L);
		if (_lg_typecheck_base_ToText_overload_2(L)) return _bind_base_ToText_overload_2(L);

		luaL_error(L, "error in function base_ToText, cannot match any of the overloads for function base_ToText:\n  base_ToText()\n  base_ToText()\n");
		return 0;
	}

	// bool TiXmlText::base_Accept(TiXmlVisitor * content) const
	static int _bind_base_Accept(lua_State *L) {
		if (!_lg_typecheck_base_Accept(L)) {
			luaL_error(L, "luna typecheck failed in bool TiXmlText::base_Accept(TiXmlVisitor * content) const function, expected prototype:\nbool TiXmlText::base_Accept(TiXmlVisitor * content) const\nClass arguments details:\narg 1 ID = 86845197\n\n%s",luna_dumpStack(L).c_str());
		}

		TiXmlVisitor* content=(Luna< TiXmlVisitor >::check(L,2));

		TiXmlText* self=Luna< TiXmlBase >::checkSubType< TiXmlText >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool TiXmlText::base_Accept(TiXmlVisitor *) const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TiXmlText::Accept(content);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:
	// void TiXmlText::operator=(const TiXmlText & base)
	static int _bind_op_assign(lua_State *L) {
		if (!_lg_typecheck_op_assign(L)) {
			luaL_error(L, "luna typecheck failed in void TiXmlText::operator=(const TiXmlText & base) function, expected prototype:\nvoid TiXmlText::operator=(const TiXmlText & base)\nClass arguments details:\narg 1 ID = 89852901\n\n%s",luna_dumpStack(L).c_str());
		}

		const TiXmlText* base_ptr=(Luna< TiXmlBase >::checkSubType< TiXmlText >(L,2));
		if( !base_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg base in TiXmlText::operator= function");
		}
		const TiXmlText & base=*base_ptr;

		TiXmlText* self=Luna< TiXmlBase >::checkSubType< TiXmlText >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void TiXmlText::operator=(const TiXmlText &). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->operator=(base);

		return 0;
	}


};

TiXmlText* LunaTraits< TiXmlText >::_bind_ctor(lua_State *L) {
	return luna_wrapper_TiXmlText::_bind_ctor(L);
}

void LunaTraits< TiXmlText >::_bind_dtor(TiXmlText* obj) {
	delete obj;
}

const char LunaTraits< TiXmlText >::className[] = "TiXmlText";
const char LunaTraits< TiXmlText >::fullName[] = "TiXmlText";
const char LunaTraits< TiXmlText >::moduleName[] = "land";
const char* LunaTraits< TiXmlText >::parents[] = {"land.TiXmlNode", 0};
const int LunaTraits< TiXmlText >::hash = 90393153;
const int LunaTraits< TiXmlText >::uniqueIDs[] = {89852901,0};

luna_RegType LunaTraits< TiXmlText >::methods[] = {
	{"CDATA", &luna_wrapper_TiXmlText::_bind_CDATA},
	{"SetCDATA", &luna_wrapper_TiXmlText::_bind_SetCDATA},
	{"ToText", &luna_wrapper_TiXmlText::_bind_ToText},
	{"Accept", &luna_wrapper_TiXmlText::_bind_Accept},
	{"base_ToDocument", &luna_wrapper_TiXmlText::_bind_base_ToDocument},
	{"base_ToElement", &luna_wrapper_TiXmlText::_bind_base_ToElement},
	{"base_ToComment", &luna_wrapper_TiXmlText::_bind_base_ToComment},
	{"base_ToUnknown", &luna_wrapper_TiXmlText::_bind_base_ToUnknown},
	{"base_ToDeclaration", &luna_wrapper_TiXmlText::_bind_base_ToDeclaration},
	{"base_ToText", &luna_wrapper_TiXmlText::_bind_base_ToText},
	{"base_Accept", &luna_wrapper_TiXmlText::_bind_base_Accept},
	{"op_assign", &luna_wrapper_TiXmlText::_bind_op_assign},
	{"fromVoid", &luna_wrapper_TiXmlText::_bind_fromVoid},
	{"asVoid", &luna_wrapper_TiXmlText::_bind_asVoid},
	{"getTable", &luna_wrapper_TiXmlText::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< TiXmlText >::converters[] = {
	{"TiXmlBase", &luna_wrapper_TiXmlText::_cast_from_TiXmlBase},
	{0,0}
};

luna_RegEnumType LunaTraits< TiXmlText >::enumValues[] = {
	{0,0}
};


